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
	auto uLocal_20 = 0;
	char* sLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	float fLocal_24 = 0;
	auto uLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	float fLocal_28 = 0;
	float fLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	auto uLocal_32 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	float fLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	int iLocal_38 = 0;
	auto uLocal_39 = 0;
	auto uLocal_40 = 0;
	auto uLocal_41 = 0;
	auto uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	Vector3 vLocal_76 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	char*[] sLocal_82 = new char*[3];
	char* sLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	Vector3[] vLocal_89 = new Vector3[4];
	float[] fLocal_102 = new float[4];
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	struct<8> Local_109 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	auto uLocal_120 = 15;
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
	auto uLocal_172 = 16;
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
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int[] iLocal_341 = new int[5];
	float[] fLocal_347 = new float[5];
	Vector3[] vLocal_353 = new Vector3[5];
	Vector3[] vLocal_369 = new Vector3[5];
	int iLocal_385 = 0;
	Vector3 vLocal_386 = 0;
	Vector3 vLocal_389 = 0;
	float fLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	Vector3 vLocal_397 = 0;
	auto uLocal_400 = 0;
	auto uLocal_401 = 0;
	auto uLocal_402 = 0;
	auto uLocal_403 = 0;
	auto uLocal_404 = 0;
	auto uLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	float fLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	Vector3 vLocal_415 = 0;
	int iLocal_418 = 0;
	Vector3 vLocal_419 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	Vector3 vLocal_425 = 0;
	Vector3 vLocal_428 = 0;
	Vector3 fLocal_431 = 0;
	Vector3 vLocal_432 = 0;
	Vector3 vLocal_435 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	Vector3[] vLocal_440 = new Vector3[8];
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	auto uLocal_468 = 0;
	auto uLocal_469 = 0;
	auto uLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	char* sLocal_476 = 0;
	char* sLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	struct<2> Local_493 = 0;
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
	auto uLocal_510 = 5;
	auto uLocal_511 = 0;
	auto uLocal_512 = 0;
	auto uLocal_513 = 0;
	auto uLocal_514 = 0;
	auto uLocal_515 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iLocal_54 = -1;
	sLocal_86 = "null";
	iLocal_87 = -1;
	iLocal_88 = -1;
	iLocal_118 = true;
	fLocal_392 = 200f;
	iLocal_413 = GAMEPLAY::GET_GAME_TIMER();
	iLocal_414 = 10000;
	iLocal_466 = -1;
	iLocal_475 = 1486715695;
	sLocal_476 = "std_ds_open_door_for_chop";
	sLocal_477 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_485 = GAMEPLAY::GET_GAME_TIMER();
	iLocal_488 = GAMEPLAY::GET_GAME_TIMER();
	iLocal_490 = get_sound_id();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_179();
	}
	while (!is_screen_faded_in())
	{
		wait(0);
	}
	iLocal_492 = is_gameplay_hint_active();
	vLocal_415 = {Local_493.f_1[0 /*3*/]};
	if (_get_number_of_instances_of_streamed_script(_get_this_script_hash()) > 1)
	{
		func_179();
	}
	if (!func_178(63))
	{
		func_179();
	}
	if (!func_177(5) && !func_177(6))
	{
		func_179();
	}
	if (func_177(6) && func_176(vLocal_415, 1, 0) == 5)
	{
		func_179();
	}
	if (!func_170(1))
	{
		func_179();
	}
	if (Global_25267 == 1)
	{
		func_179();
	}
	if (Global_88531 == 1)
	{
		func_179();
	}
	if (func_167(0))
	{
		if (_get_number_of_instances_of_streamed_script(joaat("sh_intro_f_hills")) == 0 && _get_number_of_instances_of_streamed_script(joaat("martin1")) == 0)
		{
			func_179();
		}
	}
	if ((((func_166() == 206 || func_166() == 207) || func_166() == 204) || func_166() == 205) || func_166() == 203)
	{
		iLocal_393 = 1;
	}
	else if (func_166() == 47)
	{
		iLocal_394 = 1;
	}
	else
	{
		if ((get_distance_between_coords(vLocal_415, 154.0731f, 765.5721f, 209.6901f, 1) <= 50f || get_distance_between_coords(vLocal_415, -268.139f, 415.2881f, 109.7258f, 1) <= 50f) || get_distance_between_coords(vLocal_415, 314.4171f, 965.207f, 208.4024f, 1) <= 50f)
		{
			func_179();
		}
		iLocal_393 = 0;
		iLocal_394 = 0;
		if (Global_69487 == 1)
		{
			func_179();
		}
	}
	while (true)
	{
		if (!func_163())
		{
			switch (iLocal_50)
			{
				case 0:
					func_154();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			func_179();
		}
		wait(0);
	}
}

void func_1()
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iLocal_69))
	{
		return;
	}
	func_152();
	func_151();
	if (iLocal_51 != 11)
	{
		func_150();
		func_149();
		func_129();
		func_128();
		func_126();
	}
	func_2();
}

void func_2()
{
	int iVar0;
	auto uVar1;
	auto uVar2;
	Vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	switch (iLocal_51)
	{
		case 11:
			if (iLocal_52 == 0)
			{
				request_anim_dict("creatures@rottweiler@amb@sleep_in_kennel@");
				if (has_anim_dict_loaded("creatures@rottweiler@amb@sleep_in_kennel@"))
				{
					if (func_125(iLocal_69))
					{
						task_play_anim(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "sleep_in_kennel", 1000f, -8f, -1, 1, 0, 0, 0, 0);
						func_124(iLocal_69, vLocal_397.f_5, vLocal_397.f_8, 0, 1);
					}
					iLocal_406 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_123())
				{
					request_anim_dict("creatures@rottweiler@amb@sleep_in_kennel@");
					if (has_anim_dict_loaded("creatures@rottweiler@amb@sleep_in_kennel@") && func_125(iLocal_69))
					{
						task_play_anim(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "exit_kennel", 8f, -8f, -1, 0, 0, 0, 0, 0);
						func_122("WHINE");
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (get_script_task_status(iLocal_69, -2017877118) == 7)
				{
					remove_anim_dict("creatures@rottweiler@amb@sleep_in_kennel@");
					func_122("PLAYFUL");
					func_121(1, 1);
				}
			}
			break;
		
		case 1:
			if (iLocal_408 == 0 && func_118(PLAYER::PLAYER_PED_ID(), 1))
			{
				func_121(18, 1);
			}
			else
			{
				func_117();
				func_116();
				func_115();
			}
			break;
		
		case 17:
			func_117();
			func_116();
			if (iLocal_52 == 0)
			{
				request_anim_dict(sLocal_82[0]);
				request_anim_dict(sLocal_82[1]);
				request_anim_dict(sLocal_82[2]);
				if ((has_anim_dict_loaded(sLocal_82[0]) && has_anim_dict_loaded(sLocal_82[1])) && has_anim_dict_loaded(sLocal_82[2]))
				{
					task_play_anim(iLocal_69, sLocal_82[0], "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if ((!func_113(iLocal_69, -2017877118) || (is_entity_playing_anim(iLocal_69, sLocal_82[0], "enter", 3) && get_entity_anim_current_time(iLocal_69, sLocal_82[0], "enter") > 0.98f)) || (is_entity_playing_anim(iLocal_69, sLocal_82[1], sLocal_86, 3) && get_entity_anim_current_time(iLocal_69, sLocal_82[1], sLocal_86) > 0.98f))
				{
					if (iLocal_53 == 0)
					{
						if (iLocal_81 == 1)
						{
							task_play_anim(iLocal_69, sLocal_82[1], "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
							sLocal_86 = "base";
							iLocal_52++;
						}
						else
						{
							func_112();
							if (get_random_int_in_range(false, 4) == 0)
							{
								iLocal_52++;
							}
						}
					}
					else
					{
						if (iLocal_53 != 5)
						{
							func_108("CHOP_WAIT", 0);
						}
						task_play_anim(iLocal_69, sLocal_82[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_52 = 3;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (!func_113(iLocal_69, -2017877118) || (is_entity_playing_anim(iLocal_69, sLocal_82[1], sLocal_86, 3) && get_entity_anim_current_time(iLocal_69, sLocal_82[1], sLocal_86) > 0.98f))
				{
					task_play_anim(iLocal_69, sLocal_82[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 3)
			{
				if (!func_113(iLocal_69, -2017877118))
				{
					iLocal_422 = 0;
					if (iLocal_53 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_53, 1);
					}
				}
			}
			break;
		
		case 18:
			func_116();
			if (iLocal_52 == 0)
			{
				request_anim_dict("creatures@rottweiler@amb@world_dog_barking@enter");
				request_anim_dict("creatures@rottweiler@amb@world_dog_barking@idle_a");
				request_anim_dict("creatures@rottweiler@amb@world_dog_barking@exit");
				task_go_to_entity(iLocal_69, PLAYER::PLAYER_PED_ID(), 20000, 3f, 1f, 2f, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (iLocal_53 == 0)
				{
					if (!func_113(iLocal_69, 1227113341))
					{
						if ((has_anim_dict_loaded("creatures@rottweiler@amb@world_dog_barking@enter") && has_anim_dict_loaded("creatures@rottweiler@amb@world_dog_barking@idle_a")) && has_anim_dict_loaded("creatures@rottweiler@amb@world_dog_barking@exit"))
						{
							open_sequence_task(&iLocal_119);
							task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
							task_play_anim(false, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							task_play_anim(false, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
							task_play_anim(false, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
							close_sequence_task(iLocal_119);
							task_perform_sequence(iLocal_69, iLocal_119);
							clear_sequence_task(&iLocal_119);
							iLocal_52++;
						}
					}
				}
				else
				{
					func_121(iLocal_53, 1);
				}
			}
			else if (iLocal_52 == 2)
			{
				if (func_107())
				{
					iLocal_408 = 1;
					if (iLocal_53 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_53, 1);
					}
				}
			}
			break;
		
		case 2:
			func_102();
			if (iLocal_52 == 0)
			{
				if ((func_125(iLocal_69) && !is_ped_in_any_vehicle(iLocal_69, 0)) && !is_ped_in_group(iLocal_69))
				{
					clear_ped_tasks(iLocal_69);
				}
				func_100();
				func_99(0, 0, 0);
				func_98(1);
				iLocal_60 = -1;
				iLocal_340 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_62 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_63 = GAMEPLAY::GET_GAME_TIMER() - 10000;
				vLocal_76 = {get_entity_coords(iLocal_69, 1)};
				request_anim_dict("creatures@rottweiler@melee@streamed_taunts@");
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				func_83();
				func_54();
				func_53();
				func_45();
				func_44();
				func_41();
				func_117();
			}
			break;
		
		case 3:
			if (iLocal_52 == 0)
			{
				func_122("WHINE");
				func_108("CHOP_GOHOME", 0);
				func_40(0);
				remove_anim_dict("creatures@rottweiler@melee@streamed_taunts@");
				if (func_125(PLAYER::PLAYER_PED_ID()) && has_ped_got_weapon(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"), 0))
				{
					remove_weapon_from_ped(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"));
				}
				if (is_ped_in_group(iLocal_69))
				{
					remove_ped_from_group(iLocal_69);
				}
				if (func_118(iLocal_69, 1))
				{
					func_121(1, 1);
				}
				else if (func_39(iLocal_69, vLocal_397, 1) < 100f)
				{
					clear_ped_tasks(iLocal_69);
					if (func_39(iLocal_69, vLocal_397, 1) < 20f)
					{
						task_follow_nav_mesh_to_coord(iLocal_69, vLocal_397, 1f, 20000, 0.25f, 32, vLocal_397.f_3);
					}
					else
					{
						task_follow_nav_mesh_to_coord(iLocal_69, vLocal_397, 3f, 60000, 0.25f, 32, vLocal_397.f_3);
					}
					iLocal_52++;
				}
				else
				{
					func_121(4, 1);
				}
			}
			else if (iLocal_52 == 1)
			{
				if (get_script_task_status(iLocal_69, 713668775) == 7)
				{
					if (is_entity_at_coord(iLocal_69, vLocal_397, 2.5f, 2.5f, 4f, false, true, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(3, 1);
					}
				}
			}
			break;
		
		case 4:
			if (!func_113(iLocal_69, 1805844857))
			{
				task_smart_flee_ped(iLocal_69, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			}
			break;
		
		case 5:
			if (iLocal_52 == 0)
			{
				if (func_38())
				{
					if (func_35())
					{
						if (is_ped_in_group(iLocal_69))
						{
							remove_ped_from_group(iLocal_69);
						}
						clear_ped_tasks(iLocal_69);
						iLocal_56 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_58 = 1000;
						iLocal_409 = 0;
						iLocal_67 = -1;
						func_34();
						iLocal_52++;
					}
					else
					{
						func_32();
					}
				}
			}
			else if (iLocal_52 == 1)
			{
				if (((!func_24() || (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !func_22())) || (iLocal_67 > -1 && GAMEPLAY::GET_GAME_TIMER() - iLocal_67 > 30000)) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_386, 1f, 1f, 1f, false, true, 0))
				{
					iLocal_52++;
				}
				else if (is_entity_at_coord(iLocal_69, vLocal_389, 3f, 3f, 4f, false, true, 0))
				{
					func_20();
					if (iLocal_67 == -1)
					{
						iLocal_67 = GAMEPLAY::GET_GAME_TIMER();
					}
				}
				else
				{
					func_18();
					if (func_113(iLocal_69, 713668775))
					{
						iVar0 = get_navmesh_route_distance_remaining(iLocal_69, &uVar2, &uVar1);
						if (iVar0 == 2)
						{
							iLocal_409++;
						}
						else if (iVar0 == 3)
						{
							if (iLocal_409 != 0)
							{
								iLocal_409 = 0;
							}
						}
						if (iLocal_409 > 9)
						{
							func_32();
						}
					}
					else
					{
						task_follow_nav_mesh_to_coord(iLocal_69, vLocal_389, 3f, -1, 3f, 36, 40000f);
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				clear_ped_tasks(iLocal_69);
				remove_anim_dict("creatures@rottweiler@indication@");
				func_121(2, 1);
			}
			func_102();
			break;
		
		case 6:
			if (iLocal_52 == 0)
			{
				if (is_ped_in_group(iLocal_69))
				{
					remove_ped_from_group(iLocal_69);
				}
				set_blocking_of_non_temporary_events(iLocal_69, false);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (func_125(PLAYER::PLAYER_PED_ID()))
				{
					if ((!func_113(iLocal_69, 780511057) && !is_ped_in_combat(iLocal_69, false)) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						iLocal_62 = GAMEPLAY::GET_GAME_TIMER();
						func_121(2, 1);
					}
				}
			}
			func_102();
			break;
		
		case 7:
			if (iLocal_52 == 0)
			{
				request_anim_dict("creatures@rottweiler@tricks@");
				if (has_anim_dict_loaded("creatures@rottweiler@tricks@"))
				{
					clear_ped_tasks(iLocal_69);
					open_sequence_task(&iLocal_119);
					if (!is_ped_facing_ped(iLocal_69, PLAYER::PLAYER_PED_ID(), 10f))
					{
						task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
					}
					task_play_anim(false, "creatures@rottweiler@tricks@", "beg_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "beg_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					close_sequence_task(iLocal_119);
					task_perform_sequence(iLocal_69, iLocal_119);
					clear_sequence_task(&iLocal_119);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					remove_anim_dict("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 8:
			if (iLocal_52 == 0)
			{
				request_anim_dict("creatures@rottweiler@tricks@");
				if (has_anim_dict_loaded("creatures@rottweiler@tricks@"))
				{
					clear_ped_tasks(iLocal_69);
					open_sequence_task(&iLocal_119);
					if (!is_ped_facing_ped(iLocal_69, PLAYER::PLAYER_PED_ID(), 10f))
					{
						task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
					}
					task_play_anim(false, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					close_sequence_task(iLocal_119);
					task_perform_sequence(iLocal_69, iLocal_119);
					clear_sequence_task(&iLocal_119);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					remove_anim_dict("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 9:
			if (iLocal_52 == 0)
			{
				request_anim_dict("creatures@rottweiler@tricks@");
				if (has_anim_dict_loaded("creatures@rottweiler@tricks@"))
				{
					clear_ped_tasks(iLocal_69);
					open_sequence_task(&iLocal_119);
					if (!is_ped_facing_ped(iLocal_69, PLAYER::PLAYER_PED_ID(), 10f))
					{
						task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
					}
					task_play_anim(false, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "paw_right_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "paw_right_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					close_sequence_task(iLocal_119);
					task_perform_sequence(iLocal_69, iLocal_119);
					clear_sequence_task(&iLocal_119);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					remove_anim_dict("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 10:
			CONTROLS::DISABLE_CONTROL_ACTION(0, 32, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 34, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 35, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 33, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 31, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 30, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 36, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 44, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 263, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 264, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 143, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 257, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 262, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 261, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 21, 1);
			if (iLocal_52 == 0)
			{
				request_anim_dict("creatures@rottweiler@tricks@");
				clear_ped_tasks(PLAYER::PLAYER_PED_ID());
				task_turn_ped_to_face_entity(PLAYER::PLAYER_PED_ID(), iLocal_69, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (get_script_task_status(PLAYER::PLAYER_PED_ID(), -875674219) == 7)
				{
					clear_ped_tasks(iLocal_69);
					vVar3 = {get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), 0f, 1f, 1f)};
					get_ground_z_for_3d_coord(vVar3, &(vVar3.f_2), 0);
					if (func_39(iLocal_69, vVar3, 0) > 0.3f)
					{
						task_follow_nav_mesh_to_coord(iLocal_69, vVar3, 1f, 5000, 0.25f, 0, 40000f);
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 2)
			{
				if (get_script_task_status(iLocal_69, 713668775) == 7 || func_39(iLocal_69, vVar3, 0) < 0.3f)
				{
					if (!is_ped_facing_ped(iLocal_69, PLAYER::PLAYER_PED_ID(), 15f))
					{
						task_turn_ped_to_face_entity(iLocal_69, PLAYER::PLAYER_PED_ID(), 0);
						iLocal_482 = 0;
					}
					else
					{
						iLocal_482 = 1;
					}
					if (!is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_69, 15f))
					{
						task_turn_ped_to_face_entity(PLAYER::PLAYER_PED_ID(), iLocal_69, 0);
						iLocal_483 = 0;
					}
					else
					{
						iLocal_483 = 1;
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 3)
			{
				request_anim_dict("creatures@rottweiler@tricks@");
				if (((iLocal_482 == 1 || get_script_task_status(iLocal_69, -875674219) == 7) && (iLocal_483 == 1 || get_script_task_status(PLAYER::PLAYER_PED_ID(), -875674219) == 7)) && has_anim_dict_loaded("creatures@rottweiler@tricks@"))
				{
					task_play_anim(iLocal_69, "creatures@rottweiler@tricks@", "petting_chop", 8f, -8f, -1, 8, 0, 0, 0, 0);
					task_play_anim(PLAYER::PLAYER_PED_ID(), "creatures@rottweiler@tricks@", "petting_franklin", 8f, -8f, -1, 8, 0, 0, 0, 0);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 4)
			{
				if (get_script_task_status(iLocal_69, -2017877118) == 7)
				{
					func_108("CHOP_RETURN1", 0);
					remove_anim_dict("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 12:
			if (iLocal_52 == 0)
			{
				if (is_ped_in_group(iLocal_69))
				{
					remove_ped_from_group(iLocal_69);
				}
				request_anim_dict("creatures@rottweiler@tricks@");
				if (has_anim_dict_loaded("creatures@rottweiler@tricks@"))
				{
					clear_ped_tasks(iLocal_69);
					open_sequence_task(&iLocal_119);
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4097, 0, 0, 0, 0);
					close_sequence_task(iLocal_119);
					task_perform_sequence(iLocal_69, iLocal_119);
					clear_sequence_task(&iLocal_119);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (!func_16())
				{
					request_anim_dict("creatures@rottweiler@tricks@");
					if (has_anim_dict_loaded("creatures@rottweiler@tricks@"))
					{
						clear_ped_tasks(iLocal_69);
						task_play_anim(iLocal_69, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
						func_108("CHOP_WALK", 0);
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (get_script_task_status(iLocal_69, -2017877118) == 7)
				{
					remove_anim_dict("creatures@rottweiler@tricks@");
					iLocal_62 = GAMEPLAY::GET_GAME_TIMER();
					func_121(2, 1);
				}
			}
			break;
		
		case 13:
			if (iLocal_52 == 0)
			{
				if (is_ped_in_group(iLocal_69))
				{
					remove_ped_from_group(iLocal_69);
				}
				request_anim_dict("creatures@rottweiler@move");
				request_ptfx_asset();
				if (has_anim_dict_loaded("creatures@rottweiler@move") && has_ptfx_asset_loaded())
				{
					clear_ped_tasks(iLocal_69);
					open_sequence_task(&iLocal_119);
					task_play_anim(false, "creatures@rottweiler@move", "dump_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@move", "dump_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@move", "dump_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					close_sequence_task(iLocal_119);
					task_perform_sequence(iLocal_69, iLocal_119);
					clear_sequence_task(&iLocal_119);
					func_122("AGITATED");
					iLocal_64 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					if (does_particle_fx_looped_exist(iLocal_79))
					{
						stop_particle_fx_looped(iLocal_79, 0);
					}
					if (func_118(iLocal_69, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(2, 1);
					}
				}
				else if (!does_particle_fx_looped_exist(iLocal_79))
				{
					if (iLocal_64 > -1 && GAMEPLAY::GET_GAME_TIMER() - iLocal_64 > 4000)
					{
						iLocal_79 = start_particle_fx_looped_on_entity("ent_anim_dog_poo", iLocal_69, 0f, -0.15f, -0.2f, 0f, 0f, 0f, 1f, 0, 0, 0);
					}
				}
				else if (GAMEPLAY::GET_GAME_TIMER() - iLocal_64 > 10000)
				{
					stop_particle_fx_looped(iLocal_79, 0);
					iLocal_64 = -1;
				}
			}
			break;
		
		case 14:
			if (iLocal_52 == 0)
			{
				request_ptfx_asset();
				if (has_ptfx_asset_loaded())
				{
					if (is_ped_in_group(iLocal_69))
					{
						remove_ped_from_group(iLocal_69);
					}
					func_122("AGITATED");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				request_anim_dict("creatures@rottweiler@move");
				if (!func_113(iLocal_69, 713668775))
				{
					task_follow_nav_mesh_to_coord(iLocal_69, get_entity_coords(iLocal_423, 1), 2f, 20000, 0.25f, 36, 40000f);
				}
				if (func_39(iLocal_69, get_entity_coords(iLocal_423, 1), 1) < 2f)
				{
					if ((!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, 10) && !is_help_message_being_displayed()) && !is_player_switch_in_progress())
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), 10);
						if (iLocal_395 == 0)
						{
							func_15("CHOP_H_BEHAVE", -1);
						}
						else
						{
							func_15("CHOP_H_BEHAVA", -1);
						}
					}
					clear_ped_tasks(iLocal_69);
					if (has_anim_dict_loaded("creatures@rottweiler@move") && get_entity_speed(iLocal_69) < 1f)
					{
						vLocal_425 = {get_entity_coords(iLocal_69, 1)};
						iLocal_424 = get_random_int_in_range(false, 2);
						fLocal_431 = func_14(vLocal_425, get_entity_coords(iLocal_423, 1));
						if (iLocal_424 == 0)
						{
							vLocal_428 = {_get_object_offset_from_coords(vLocal_425, fLocal_431, -0.5f, 1f, 0f)};
						}
						else
						{
							vLocal_428 = {_get_object_offset_from_coords(vLocal_425, fLocal_431, 0.5f, 1f, 0f)};
						}
						open_sequence_task(&iLocal_119);
						task_turn_ped_to_face_coord(false, vLocal_428, 0);
						if (iLocal_424 == 0)
						{
							task_play_anim(false, "creatures@rottweiler@move", "pee_right_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							task_play_anim(false, "creatures@rottweiler@move", "pee_right_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							task_play_anim(false, "creatures@rottweiler@move", "pee_right_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							task_play_anim(false, "creatures@rottweiler@move", "pee_left_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							task_play_anim(false, "creatures@rottweiler@move", "pee_left_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							task_play_anim(false, "creatures@rottweiler@move", "pee_left_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						close_sequence_task(iLocal_119);
						task_perform_sequence(iLocal_69, iLocal_119);
						clear_sequence_task(&iLocal_119);
						iLocal_64 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (func_107())
				{
					if (does_particle_fx_looped_exist(iLocal_79))
					{
						stop_particle_fx_looped(iLocal_79, 0);
					}
					func_122("BARK");
					func_121(2, 1);
				}
				else if (!does_particle_fx_looped_exist(iLocal_79))
				{
					if (iLocal_64 > -1 && GAMEPLAY::GET_GAME_TIMER() - iLocal_64 > 7000)
					{
						if (iLocal_424 == 0)
						{
							iLocal_79 = start_particle_fx_looped_on_entity("ent_anim_dog_peeing", iLocal_69, 0.1f, -0.32f, -0.04f, 0f, 0f, 30f, 1f, 0, 0, 0);
						}
						else
						{
							iLocal_79 = start_particle_fx_looped_on_entity("ent_anim_dog_peeing", iLocal_69, -0.1f, -0.32f, -0.04f, 0f, 0f, 150f, 1f, 0, 0, 0);
						}
					}
				}
				else if (GAMEPLAY::GET_GAME_TIMER() - iLocal_64 > 16000)
				{
					stop_particle_fx_looped(iLocal_79, 0);
					iLocal_64 = -1;
				}
			}
			break;
		
		case 15:
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				func_40(0);
				iLocal_62 = GAMEPLAY::GET_GAME_TIMER();
				func_121(2, 1);
			}
			else
			{
				if (iLocal_52 == 0)
				{
					func_40(1);
					if (_0x82FDE6A57EE4EE44(PLAYER::PLAYER_PED_ID(), iLocal_473, 50f, &uLocal_468, &iLocal_467, 0))
					{
						func_6(294, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
						iLocal_471 = 0;
						iLocal_472 = 0;
						iLocal_410 = 0;
						if (is_ped_in_group(iLocal_69))
						{
							remove_ped_from_group(iLocal_69);
						}
						iLocal_474 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_467))
					{
						if (!is_entity_in_water(iLocal_467))
						{
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_474 > 500)
							{
								if (func_5())
								{
									request_anim_dict("creatures@rottweiler@move");
									if (has_anim_dict_loaded("creatures@rottweiler@move"))
									{
										open_sequence_task(&iLocal_119);
										if (iLocal_473 == joaat("weapon_ball"))
										{
											task_play_anim(false, "creatures@rottweiler@move", "fetch_pickup", 8f, -8f, -1, 49152, 0, 0, 0, 0);
										}
										task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), 20000, 4f, 3f, 2f, 0);
										close_sequence_task(iLocal_119);
										task_perform_sequence(iLocal_69, iLocal_119);
										clear_sequence_task(&iLocal_119);
										if (iLocal_473 == joaat("weapon_ball"))
										{
											iLocal_471 = 1;
										}
										iLocal_52++;
									}
								}
								else if (!func_113(iLocal_69, 1227113341))
								{
									task_go_to_entity(iLocal_69, iLocal_467, 30000, 0.5f, 3f, 2f, 0);
									iLocal_410++;
									iLocal_409 = 0;
									if (iLocal_410 > 3)
									{
										task_go_to_entity(iLocal_69, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
										func_40(1);
										iLocal_52++;
									}
								}
								else
								{
									iVar0 = get_navmesh_route_distance_remaining(iLocal_69, &uVar2, &uVar1);
									if (iVar0 == 2)
									{
										fLocal_411 = get_entity_height_above_ground(iLocal_467);
										if (fLocal_411 < 1f)
										{
											iLocal_409++;
										}
									}
									else if (iVar0 == 3)
									{
										if (iLocal_472 == 0)
										{
											func_122("BARK");
											if (iLocal_473 == joaat("weapon_ball"))
											{
												func_108("CHOP_FETCH", 0);
											}
											iLocal_472 = 1;
										}
									}
									if (iLocal_409 > 9)
									{
										task_go_to_entity(iLocal_69, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
										func_40(1);
										iLocal_52++;
									}
								}
							}
						}
						else
						{
							task_go_to_entity(iLocal_69, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
							iLocal_52++;
						}
					}
					else
					{
						task_go_to_entity(iLocal_69, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 2)
				{
					if (iLocal_471 == 1)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_467) && is_entity_playing_anim(iLocal_69, "creatures@rottweiler@move", "fetch_pickup", 3)) && get_entity_anim_current_time(iLocal_69, "creatures@rottweiler@move", "fetch_pickup") > 0.25f)
						{
							attach_entity_to_entity(iLocal_467, iLocal_69, 28, 0.2042f, 0f, -0.0608f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							set_audio_flag("DisableBarks", 1);
							iLocal_52++;
						}
					}
					else
					{
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 3)
				{
					if (func_4(PLAYER::PLAYER_PED_ID(), iLocal_69, 1) < 5f)
					{
						if (iLocal_473 == joaat("weapon_ball"))
						{
							if (iLocal_471 == 1)
							{
								request_anim_dict("creatures@rottweiler@move");
								if (has_anim_dict_loaded("creatures@rottweiler@move"))
								{
									open_sequence_task(&iLocal_119);
									task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
									task_play_anim(false, "creatures@rottweiler@move", "fetch_drop", 8f, -8f, -1, 16384, 0, 0, 0, 0);
									close_sequence_task(iLocal_119);
									task_perform_sequence(iLocal_69, iLocal_119);
									clear_sequence_task(&iLocal_119);
									func_108("CHOP_RETURN1", 0);
									set_audio_flag("DisableBarks", 0);
									iLocal_52++;
								}
							}
							else
							{
								func_122("BREATH_AGITATED");
								func_108("CHOP_RETURN2", 0);
								func_121(2, 1);
							}
						}
						else
						{
							func_122("BARK_WHINE");
							func_40(1);
							func_121(2, 1);
						}
					}
				}
				else if (iLocal_52 == 4)
				{
					if (!func_113(iLocal_69, 242628503) && !ENTITY::DOES_ENTITY_EXIST(iLocal_467))
					{
						if (func_3(0))
						{
							func_99(0, 1, 0);
						}
						else if (get_follow_ped_cam_view_mode() == 4)
						{
							func_99(0, 1, 1);
						}
						else
						{
							func_99(1, 1, 1);
						}
						iLocal_62 = GAMEPLAY::GET_GAME_TIMER();
						func_121(2, 1);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_467))
					{
						if (is_entity_attached(iLocal_467))
						{
							if (is_entity_playing_anim(iLocal_69, "creatures@rottweiler@move", "fetch_drop", 3) && get_entity_anim_current_time(iLocal_69, "creatures@rottweiler@move", "fetch_drop") > 0.4f)
							{
								detach_entity(iLocal_467, 1, true);
							}
						}
						else
						{
							if ((func_4(PLAYER::PLAYER_PED_ID(), iLocal_467, 1) < 1.5f || func_4(PLAYER::PLAYER_PED_ID(), iLocal_467, 1) > 20f) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
							{
								func_40(1);
							}
							if (!func_113(iLocal_69, 242628503))
							{
								func_100();
							}
						}
					}
				}
				func_102();
			}
			break;
		
		case 16:
			if (iLocal_52 == 0)
			{
				request_anim_dict("creatures@rottweiler@in_vehicle@std_car");
				if (has_anim_dict_loaded("creatures@rottweiler@in_vehicle@std_car"))
				{
					if (is_ped_in_group(iLocal_69))
					{
						remove_ped_from_group(iLocal_69);
					}
					attach_entity_to_entity(iLocal_69, get_entity_attached_to(PLAYER::PLAYER_PED_ID()), 0, 0f, 0f, -6.1f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					task_play_anim(iLocal_69, "creatures@rottweiler@in_vehicle@std_car", "sit", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (!is_entity_attached(PLAYER::PLAYER_PED_ID()))
				{
					fVar6 = 99999f;
					iVar8 = 0;
					while (iVar8 < 4)
					{
						fVar7 = get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vLocal_89[iVar8 /*3*/], 1);
						if (fVar7 < fVar6)
						{
							fVar6 = fVar7;
							iVar9 = iVar8;
						}
						iVar8++;
					}
					if (is_entity_attached(iLocal_69))
					{
						detach_entity(iLocal_69, 1, true);
					}
					func_124(iLocal_69, vLocal_89[iVar9 /*3*/], fLocal_102[iVar9], 0, 1);
					_0x2208438012482A1A(iLocal_69, 0, 0);
					iLocal_62 = GAMEPLAY::GET_GAME_TIMER();
					func_121(2, 1);
				}
			}
			break;
	}
}

bool func_3(int iParam0)
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

float func_4(int iParam0, int iParam1, int iParam2)
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

bool func_5()
{
	Vector3 vVar0;
	float fVar3;
	
	if (func_4(iLocal_69, iLocal_467, 1) < 0.5f + 0.25f)
	{
		vVar0 = {get_entity_coords(iLocal_467, 1)};
		if (get_ground_z_for_3d_coord(vVar0.x, vVar0.y, vVar0.z + 1f, &fVar3, 0))
		{
			if (absf(vVar0.z - fVar3) < 0.1f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_6(int iParam0, int iParam1, int iParam2)
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
		func_12(891 + iParam0, 1, -1, 1);
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
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
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
		func_7();
	}
}

void func_7()
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
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8884.f_3856), 14);
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
		func_11(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_10() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_8();
				}
			}
		}
	}
}

bool func_8()
{
	if (func_9(0))
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

int func_9(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

auto func_10()
{
	return Global_25120;
}

int func_11(int iParam0, int iParam1)
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

int func_12(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_13();
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

auto func_13()
{
	return Global_1312747;
}

float func_14(struct<2> Param0, auto uParam1, struct<2> Param2, Vector3 fParam3)
{
	return get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

void func_15(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_16()
{
	return Global_91330.f_296 > 0;
}

void func_17()
{
	iLocal_62 = GAMEPLAY::GET_GAME_TIMER();
	if (iLocal_75 == 0)
	{
		func_121(1, 1);
	}
	else
	{
		func_121(2, 1);
	}
}

void func_18()
{
	float fVar0;
	
	if (GAMEPLAY::GET_GAME_TIMER() - iLocal_56 > iLocal_58)
	{
		fVar0 = func_39(iLocal_69, vLocal_389, 1);
		if (fVar0 < 10f)
		{
			func_122("BARK_SEQ");
		}
		else
		{
			func_122("BARK");
		}
		iLocal_56 = GAMEPLAY::GET_GAME_TIMER();
		if (fVar0 < 20f)
		{
			iLocal_58 = get_random_int_in_range(4000, 5000);
		}
		else if (fVar0 < 50f)
		{
			iLocal_58 = get_random_int_in_range(5000, 6000);
		}
		else
		{
			iLocal_58 = get_random_int_in_range(8000, 12000);
		}
		if (((!is_help_message_being_displayed() && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, true)) && !func_19()) && !is_player_switch_in_progress())
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), true);
			func_15("CHOP_H_HUNT", -1);
		}
	}
}

bool func_19()
{
	int iVar0;
	
	if (is_player_targetting_entity(player_id(), iLocal_69) || (iLocal_51 == 10 && is_control_pressed(2, 25)))
	{
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return true;
		}
	}
	return false;
}

void func_20()
{
	if (!func_113(iLocal_69, 242628503))
	{
		request_anim_dict("creatures@rottweiler@indication@");
		if (has_anim_dict_loaded("creatures@rottweiler@indication@"))
		{
			clear_ped_tasks(iLocal_69);
			open_sequence_task(&iLocal_119);
			task_turn_ped_to_face_coord(false, vLocal_386, 0);
			task_play_anim(false, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0, 0, 0, 0);
			close_sequence_task(iLocal_119);
			task_perform_sequence(iLocal_69, iLocal_119);
			clear_sequence_task(&iLocal_119);
		}
	}
}

char* func_21()
{
	char* sVar0;
	Vector3 vVar1;
	
	if (func_125(iLocal_69))
	{
		vVar1 = {get_entity_coords(iLocal_69, 1)};
		if (vVar1.z + 1f < vLocal_386.z)
		{
			sVar0 = "indicate_high";
		}
		else if (vVar1.z - 1f > vLocal_386.z)
		{
			sVar0 = "indicate_low";
		}
		else
		{
			sVar0 = "indicate_ahead";
		}
	}
	return sVar0;
}

bool func_22()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
	{
		if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()) || func_23())
		{
			return true;
		}
	}
	return false;
}

bool func_23()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1));
		if ((((((((((((((((((iVar0 == joaat("caddy") || iVar0 == joaat("caddy2")) || iVar0 == joaat("dune")) || iVar0 == joaat("airtug")) || iVar0 == joaat("blazer")) || iVar0 == joaat("blazer2")) || iVar0 == joaat("bulldozer")) || iVar0 == joaat("cutter")) || iVar0 == joaat("dump")) || iVar0 == joaat("forklift")) || iVar0 == joaat("handler")) || iVar0 == joaat("mower")) || iVar0 == joaat("rhino")) || iVar0 == joaat("tractor")) || iVar0 == joaat("tractor2")) || iVar0 == joaat("tractor3")) || iVar0 == get_hash_key("bifta")) || iVar0 == joaat("blazer3")) || iVar0 == joaat("dune2"))
		{
			return true;
		}
	}
	return false;
}

bool func_24()
{
	switch (iLocal_338)
	{
		case 2:
			if (!func_27(2))
			{
				func_108("CHOP_RETURN1", 1);
				return false;
			}
			break;
		
		case 1:
			if (!func_27(1))
			{
				func_108("CHOP_RETURN1", 1);
				return false;
			}
			break;
		
		case 0:
			if (!func_27(0))
			{
				func_108("CHOP_RETURN1", 1);
				return false;
			}
			break;
		
		case 3:
			if (func_26(iLocal_385))
			{
				func_108("CHOP_RETURN1", 1);
				return false;
			}
			break;
		
		case 4:
			if (func_25(iLocal_385))
			{
				func_108("CHOP_RETURN1", 1);
				return false;
			}
			break;
	}
	return true;
}

int func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return false;
	}
	if (iParam0 <= 31)
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_125, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_125.f_1, iParam0 - 32);
}

int func_26(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return false;
	}
	if (iParam0 <= 31)
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_122, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_122.f_1, iParam0 - 32);
}

bool func_27(int iParam0)
{
	if (func_31())
	{
		func_30(iParam0, iLocal_385);
	}
	if (func_29())
	{
		if (func_28())
		{
			func_34();
			return false;
		}
		func_34();
	}
	return true;
}

auto func_28()
{
	return Global_25363;
}

bool func_29()
{
	if (Global_25360 == 2)
	{
		return true;
	}
	return false;
}

void func_30(int iParam0, int iParam1)
{
	if (Global_25360 == 0)
	{
		Global_25360 = 1;
		Global_25361 = iParam0;
		Global_25362 = iParam1;
	}
}

bool func_31()
{
	if (Global_25360 == 0)
	{
		return true;
	}
	return false;
}

void func_32()
{
	Vector3 vVar0;
	
	vVar0 = {get_entity_coords(iLocal_69, 1)};
	func_33(vVar0);
	func_122("WHINE");
	func_108("CHOP_NONEAR", 0);
	func_17();
}

void func_33(Vector3 vParam0)
{
	if (vdist(vParam0, vParam0) > 1f)
	{
	}
}

void func_34()
{
	Global_25360 = 3;
}

bool func_35()
{
	iLocal_385 = -1;
	vLocal_386 = {0f, 0f, 0f};
	vLocal_389 = {0f, 0f, 0f};
	func_36(0);
	if (iLocal_385 == -1)
	{
		func_36(1);
	}
	if (iLocal_385 > -1)
	{
		return true;
	}
	return false;
}

void func_36(int iParam0)
{
	float fVar0;
	int iVar1;
	
	fVar0 = 9999f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if ((iLocal_341[iVar1] > -1 && fLocal_347[iVar1] < fVar0) && func_37(iParam0, iVar1))
		{
			fVar0 = fLocal_347[iVar1];
			iLocal_385 = iLocal_341[iVar1];
			iLocal_338 = iVar1;
			vLocal_386 = {vLocal_353[iVar1 /*3*/]};
			vLocal_389 = {vLocal_369[iVar1 /*3*/]};
		}
		iVar1++;
	}
}

bool func_37(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return true;
	}
	if (iParam1 == 1 && get_entity_health(PLAYER::PLAYER_PED_ID()) >= 200)
	{
		return false;
	}
	if (iParam1 == 0 && get_ped_armour(PLAYER::PLAYER_PED_ID()) >= 100)
	{
		return false;
	}
	return true;
}

bool func_38()
{
	if (iLocal_339 == 5)
	{
		iLocal_339 = 0;
	}
	switch (iLocal_339)
	{
		case 0:
			if (iLocal_341[0] > -1)
			{
				if (func_31())
				{
					func_30(0, iLocal_341[0]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_341[0] = -1;
					}
					func_34();
					iLocal_339 = 1;
				}
			}
			else
			{
				iLocal_339 = 1;
			}
			break;
		
		case 1:
			if (iLocal_341[1] > -1)
			{
				if (func_31())
				{
					func_30(1, iLocal_341[1]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_341[1] = -1;
					}
					func_34();
					iLocal_339 = 2;
				}
			}
			else
			{
				iLocal_339 = 2;
			}
			break;
		
		case 2:
			if (iLocal_341[2] > -1)
			{
				if (func_31())
				{
					func_30(2, iLocal_341[2]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_341[2] = -1;
					}
					func_34();
					iLocal_339 = 3;
				}
			}
			else
			{
				iLocal_339 = 3;
			}
			break;
		
		case 3:
			if (iLocal_341[3] > -1)
			{
				if (func_26(iLocal_341[3]))
				{
					iLocal_341[3] = -1;
				}
			}
			if (iLocal_341[4] > -1)
			{
				if (func_25(iLocal_341[4]))
				{
					iLocal_341[4] = -1;
				}
			}
			iLocal_339 = 5;
			return true;
			break;
	}
	return false;
}

float func_39(int iParam0, Vector3 vParam1, int iParam2)
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

void func_40(int iParam0)
{
	Vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_467))
	{
		vVar0 = {get_entity_coords(iLocal_467, 1)};
		if (is_entity_attached_to_any_ped(iLocal_467))
		{
			detach_entity(iLocal_467, 1, true);
		}
		set_entity_as_no_longer_needed(&iLocal_467);
		if (iParam0 == 1 && iLocal_473 == joaat("weapon_ball"))
		{
			clear_area_of_projectiles(vVar0, 0.1f, 0);
		}
	}
}

void func_41()
{
	Vector3 vVar0;
	
	if ((((((func_43() != 1 && GAMEPLAY::GET_GAME_TIMER() - iLocal_62 > 10000) && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && iLocal_107 == 0) && iLocal_473 != joaat("weapon_ball")) && _0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 100f) == 0) && _0x336B3D200AB007CB(iLocal_69, get_entity_coords(iLocal_69, 1), 100f) == 0)
	{
		request_ptfx_asset();
		if (has_ptfx_asset_loaded())
		{
			vVar0 = {get_entity_coords(iLocal_69, 1)};
			if (get_distance_between_coords(vVar0, vLocal_76, 0) < 1f)
			{
				if (get_distance_between_coords(vVar0, vLocal_435, 0) > 20f)
				{
					func_42(&iLocal_423, 0);
					iLocal_423 = get_closest_object_of_type(vVar0, 10f, -1063472968, 1, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_423))
					{
						vLocal_435 = {get_entity_coords(iLocal_423, 1)};
						func_121(14, 1);
					}
				}
				else if (get_distance_between_coords(vVar0, vLocal_432, 0) > 20f)
				{
					vLocal_432 = {vVar0};
					func_121(13, 1);
				}
			}
			vLocal_76 = {get_entity_coords(iLocal_69, 1)};
			iLocal_62 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
}

void func_42(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, 1, true);
		}
		if (!iParam1)
		{
			set_object_as_no_longer_needed(iParam0);
		}
		else
		{
			_mark_object_for_deletion(*iParam0);
		}
	}
}

int func_43()
{
	if (Global_101154.f_24643.f_254.f_5)
	{
		if (Global_101154.f_24643.f_254 > 66f)
		{
			return 1;
		}
		else if (Global_101154.f_24643.f_254 > 33f)
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	return 2;
}

void func_44()
{
	if (((!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, 7) && !is_help_message_being_displayed()) && !func_19()) && !is_player_switch_in_progress())
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), 7);
		func_15("CHOP_H_BALL", -1);
	}
	if (((func_125(PLAYER::PLAYER_PED_ID()) && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) && func_125(iLocal_69)) && !is_ped_in_any_vehicle(iLocal_69, 1))
	{
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iLocal_473, 1);
		if (((((iLocal_473 == joaat("weapon_ball") || iLocal_473 == joaat("weapon_grenade")) || iLocal_473 == joaat("weapon_smokegrenade")) || iLocal_473 == joaat("weapon_stickybomb")) || iLocal_473 == joaat("weapon_molotov")) || iLocal_473 == joaat("weapon_flare"))
		{
			if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
			{
				func_121(15, 1);
			}
			else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_63 > 10000 && get_entity_speed(iLocal_69) < 1f) && func_4(PLAYER::PLAYER_PED_ID(), iLocal_69, 1) < 5f)
			{
				request_anim_dict("creatures@rottweiler@amb@world_dog_barking@enter");
				request_anim_dict("creatures@rottweiler@amb@world_dog_barking@idle_a");
				request_anim_dict("creatures@rottweiler@amb@world_dog_barking@exit");
				if ((has_anim_dict_loaded("creatures@rottweiler@amb@world_dog_barking@enter") && has_anim_dict_loaded("creatures@rottweiler@amb@world_dog_barking@idle_a")) && has_anim_dict_loaded("creatures@rottweiler@amb@world_dog_barking@exit"))
				{
					clear_ped_tasks(iLocal_69);
					open_sequence_task(&iLocal_119);
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
					task_play_anim(false, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					task_play_anim(false, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					close_sequence_task(iLocal_119);
					task_perform_sequence(iLocal_69, iLocal_119);
					clear_sequence_task(&iLocal_119);
					iLocal_63 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_45()
{
	if (func_16() && !func_46(4))
	{
		if ((func_125(iLocal_69) && iLocal_107 == 0) && is_ped_in_group(iLocal_69))
		{
			remove_ped_from_group(iLocal_69);
		}
		func_121(12, 1);
	}
}

bool func_46(int iParam0)
{
	int iVar0;
	
	if (func_16())
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			if (func_52(iVar0) == iParam0)
			{
				if (func_47(iVar0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_47(int iParam0)
{
	return func_48(iParam0, 5, 1);
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_49(func_51(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_49(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_50(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_51(int iParam0)
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

int func_52(int iParam0)
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

void func_53()
{
	if (get_player_wanted_level(player_id()) > 0)
	{
		if (iLocal_60 == -1)
		{
			iLocal_60 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_61 = get_random_int_in_range(4000, 6000);
		}
		if (GAMEPLAY::GET_GAME_TIMER() - iLocal_60 > iLocal_61)
		{
			func_122("SNARL");
			iLocal_60 = -1;
		}
	}
}

void func_54()
{
	if (func_125(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_107 > 1 && iLocal_107 < 8)
		{
			set_ped_reset_flag(PLAYER::PLAYER_PED_ID(), 309, true);
		}
		if (iLocal_117 == 1 && iLocal_107 == 1)
		{
			set_ped_reset_flag(PLAYER::PLAYER_PED_ID(), 313, true);
		}
	}
	switch (iLocal_107)
	{
		case 0:
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_478 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_65 = -1;
				iLocal_66 = -1;
				iLocal_57 = GAMEPLAY::GET_GAME_TIMER();
				func_82();
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
				iLocal_491 = 1;
				iLocal_107 = 1;
			}
			else
			{
				if (iLocal_475 != 0)
				{
					iLocal_475 = 0;
				}
				iLocal_337 = 0;
				iLocal_59 = -1;
				if (func_81())
				{
					func_121(3, 1);
				}
			}
			break;
		
		case 1:
			if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_107 = 15;
			}
			else if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				if (func_80())
				{
					if (get_ped_in_vehicle_seat(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), -1) != PLAYER::PLAYER_PED_ID())
					{
						func_121(3, 1);
					}
					else
					{
						if (!func_125(iLocal_80))
						{
							iLocal_80 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
							func_79();
							func_78();
						}
						request_anim_dict(sLocal_477);
						if (has_anim_dict_loaded(sLocal_477) && func_125(iLocal_80))
						{
							if (is_ped_in_group(iLocal_69))
							{
								remove_ped_from_group(iLocal_69);
							}
							if (func_77())
							{
								if (iLocal_65 == -1)
								{
									iLocal_65 = GAMEPLAY::GET_GAME_TIMER();
								}
								if (func_76())
								{
									func_75(1);
									iLocal_107 = 6;
								}
								else
								{
									func_74();
								}
							}
							else if (_0x639431E895B9AA57(PLAYER::PLAYER_PED_ID(), iLocal_80, 0, 0, false))
							{
								if (is_vehicle_door_damaged(iLocal_80, iLocal_118) || get_vehicle_door_angle_ratio(iLocal_80, true) > 0.9f)
								{
									iLocal_107 = 4;
								}
								else
								{
									iLocal_107 = 2;
								}
							}
							else
							{
								func_75(1);
								iLocal_107 = 6;
							}
						}
					}
				}
				else if (func_22())
				{
					iLocal_107 = 14;
				}
				else
				{
					if (((!is_help_message_being_displayed() && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, 3)) && !func_19()) && !is_player_switch_in_progress())
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), 3);
						func_15("CHOP_H_NOVEH", -1);
					}
					func_121(3, 1);
				}
			}
			else
			{
				if (func_80())
				{
					request_anim_dict("misschop_vehicleenter_exit");
					func_74();
				}
				if (iLocal_337 == 0 && is_vehicle_driveable(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID()), 0))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_69, 185, false);
					if (is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID()))) && !func_23())
					{
						if (ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())) == joaat("taxi"))
						{
						}
						else if (get_vehicle_max_number_of_passengers(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())) >= 1 && is_vehicle_seat_free(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID()), false))
						{
							if (!func_73())
							{
								func_108("CHOP_RIDE", 0);
							}
						}
					}
					else if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID()))) || func_23())
					{
						func_108("CHOP_FOLLOW", 0);
					}
					iLocal_337 = 1;
				}
			}
			break;
		
		case 2:
			func_72();
			if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_107 = 15;
			}
			else
			{
				request_anim_dict("misschop_vehicleenter_exit");
				if (has_anim_dict_loaded("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_107 = 3;
				}
			}
			break;
		
		case 3:
			func_72();
			if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_107 = 15;
			}
			else if (func_125(iLocal_80) && func_70())
			{
				if (!is_vehicle_door_damaged(iLocal_80, iLocal_118))
				{
					set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
				}
				iLocal_489 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_65 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_107 = 4;
			}
			break;
		
		case 4:
			if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_107 = 15;
			}
			else
			{
				request_anim_dict(sLocal_477);
				if (func_125(iLocal_80))
				{
					if (!is_vehicle_door_damaged(iLocal_80, iLocal_118) && get_vehicle_door_angle_ratio(iLocal_80, iLocal_118) < 0.95f)
					{
						set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
						iLocal_489 = GAMEPLAY::GET_GAME_TIMER();
					}
					if (func_76() && GAMEPLAY::GET_GAME_TIMER() >= iLocal_489 + 300)
					{
						if (!func_113(PLAYER::PLAYER_PED_ID(), -2017877118) && has_anim_dict_loaded(sLocal_477))
						{
							func_72();
							func_69(1, 1);
							clear_ped_tasks_immediately(iLocal_69);
							iLocal_108 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(iLocal_108, iLocal_80, get_entity_bone_index_by_name(iLocal_80, "seat_pside_f"));
							task_synchronized_scene(iLocal_69, iLocal_108, sLocal_477, "get_in", 1000f, -8f, 4, 0, 1000f, 0);
							_0x2208438012482A1A(iLocal_69, 0, 0);
							iLocal_107 = 5;
						}
					}
					else
					{
						func_74();
					}
				}
			}
			break;
		
		case 5:
			func_72();
			if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				if (does_cam_exist(iLocal_486))
				{
					set_use_hi_dof();
				}
				request_anim_dict(sLocal_477);
				if (((has_anim_dict_loaded(sLocal_477) && is_synchronized_scene_running(iLocal_108)) && get_synchronized_scene_phase(iLocal_108) > 0.99f) && func_125(iLocal_80))
				{
					func_69(0, 1);
					func_75(0);
					iLocal_107 = 6;
				}
			}
			break;
		
		case 6:
			func_72();
			if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				request_anim_dict("misschop_vehicleenter_exit");
				if (has_anim_dict_loaded("misschop_vehicleenter_exit") && func_125(iLocal_80))
				{
					if ((!is_vehicle_door_damaged(iLocal_80, iLocal_118) && get_vehicle_door_angle_ratio(iLocal_80, true) > 0.1f) && !func_77())
					{
						func_71();
					}
					iLocal_107 = 7;
				}
			}
			break;
		
		case 7:
			func_72();
			if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_80) && func_70())
			{
				if (!is_vehicle_door_damaged(iLocal_80, iLocal_118))
				{
					set_vehicle_door_shut(iLocal_80, iLocal_118, 0);
				}
				iLocal_107 = 8;
			}
			break;
		
		case 8:
			func_72();
			func_67(&iLocal_70);
			func_40(1);
			if (iLocal_54 == -1)
			{
				iLocal_54 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_55 = 7000;
			}
			if (func_125(iLocal_80))
			{
				if (func_66())
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (is_entity_on_fire(iLocal_80))
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
				{
					if (get_entity_speed(iLocal_80) < 5f)
					{
						if (!is_vehicle_door_damaged(iLocal_80, iLocal_118))
						{
							set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
						}
						iLocal_107 = 12;
					}
				}
				else if (is_disabled_control_just_pressed(2, 75))
				{
					if (is_entity_upsidedown(iLocal_80))
					{
						func_68(2f, 0f, 0f, 1);
					}
					else if (func_77())
					{
						iLocal_107 = 9;
					}
					else if (_0x639431E895B9AA57(PLAYER::PLAYER_PED_ID(), iLocal_80, 0, 0, false))
					{
						_task_bring_vehicle_to_halt(iLocal_80, 10f, 1, 0);
						if (is_vehicle_door_damaged(iLocal_80, iLocal_118))
						{
							iLocal_107 = 12;
						}
						else
						{
							iLocal_107 = 10;
						}
					}
					else if (_0x639431E895B9AA57(PLAYER::PLAYER_PED_ID(), iLocal_80, -1, 0, false))
					{
						_task_bring_vehicle_to_halt(iLocal_80, 10f, 1, 0);
						func_68(-2f, 0f, 0f, 0);
					}
					else
					{
						_task_bring_vehicle_to_halt(iLocal_80, 10f, 1, 0);
						func_68(0f, -4f, 0f, 0);
					}
				}
				else
				{
					func_65();
					func_63();
					func_62();
					if (((!is_help_message_being_displayed() && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, 2)) && !func_19()) && !is_player_switch_in_progress())
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), 2);
						func_15("CHOP_H_CAR", -1);
					}
				}
			}
			else
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 9:
			func_72();
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !func_113(PLAYER::PLAYER_PED_ID(), -828834893))
			{
				task_leave_any_vehicle(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 10:
			func_72();
			if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				request_anim_dict("misschop_vehicleenter_exit");
				if (has_anim_dict_loaded("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_107 = 11;
				}
			}
			break;
		
		case 11:
			func_72();
			if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_80) && func_70())
			{
				if (!is_vehicle_door_damaged(iLocal_80, iLocal_118))
				{
					set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
				}
				iLocal_107 = 12;
			}
			break;
		
		case 12:
			func_72();
			request_anim_dict(sLocal_477);
			if ((!func_113(PLAYER::PLAYER_PED_ID(), -2017877118) && has_anim_dict_loaded(sLocal_477)) && func_125(iLocal_80))
			{
				clear_ped_tasks_immediately(iLocal_69);
				iLocal_108 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
				attach_synchronized_scene_to_entity(iLocal_108, iLocal_80, get_entity_bone_index_by_name(iLocal_80, "seat_pside_f"));
				task_synchronized_scene(iLocal_69, iLocal_108, sLocal_477, "get_out", 1000f, -8f, 10, 0, 1000f, 0);
				_0x2208438012482A1A(iLocal_69, 0, 0);
				iLocal_107 = 13;
			}
			break;
		
		case 13:
			func_72();
			if ((is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && GAMEPLAY::GET_GAME_TIMER() - iLocal_479 > 1500) && !func_113(PLAYER::PLAYER_PED_ID(), -828834893))
			{
				task_leave_any_vehicle(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (!is_synchronized_scene_running(iLocal_108) || (is_synchronized_scene_running(iLocal_108) && get_synchronized_scene_phase(iLocal_108) > 0.99f))
			{
				task_go_straight_to_coord_relative_to_entity(iLocal_69, iLocal_69, 0f, 5f, 0f, 1f, 20000);
				iLocal_107 = 15;
			}
			break;
		
		case 14:
			if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_107 = 15;
			}
			else
			{
				func_65();
				if (((!is_help_message_being_displayed() && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, 5)) && !func_19()) && !is_player_switch_in_progress())
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), 5);
					func_15("CHOP_H_BIKE", -1);
				}
			}
			break;
		
		case 15:
			func_72();
			if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_57();
				func_99(0, 0, 0);
				remove_anim_dict("misschop_vehicleenter_exit");
				remove_anim_dict(sLocal_477);
				iLocal_62 = GAMEPLAY::GET_GAME_TIMER();
				func_56();
				func_55(&iLocal_80);
				iLocal_80 = false;
				iLocal_54 = -1;
				clear_ped_tasks(iLocal_69);
				set_entity_invincible(iLocal_69, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_69, 185, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
				func_121(2, 1);
			}
			else if (!func_113(PLAYER::PLAYER_PED_ID(), -828834893))
			{
				task_leave_any_vehicle(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			break;
	}
}

void func_55(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		is_entity_dead(*iParam0, 0);
		if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

void func_56()
{
	if (((iLocal_491 == 1 && func_125(_0xB2D06FAEDE65B577())) && get_vehicle_max_number_of_passengers(_0xB2D06FAEDE65B577()) > 1) && !is_vehicle_door_damaged(_0xB2D06FAEDE65B577(), iLocal_118))
	{
		set_vehicle_door_latched(_0xB2D06FAEDE65B577(), iLocal_118, 0, 1, 0);
	}
}

void func_57()
{
	if ((!does_blip_exist(iLocal_70) && func_125(iLocal_69)) && !is_ped_in_any_vehicle(iLocal_69, 1))
	{
		if (func_178(126))
		{
			func_61(139, 0, 0);
		}
		else
		{
			func_61(138, 0, 0);
		}
		iLocal_70 = func_58(iLocal_69, 0, 145);
		set_blip_sprite(iLocal_70, 273);
	}
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_59(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_60(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_60(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_60(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_60(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!iParam2)
	{
		iVar1 = GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, 15);
		if (iVar1 == iParam1)
		{
			return;
		}
	}
	if (iParam1 != GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, false))
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 18);
		if (Global_25430 == 1)
		{
			Global_25431 = 1;
		}
		Global_25430 = 1;
	}
	if (iParam1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), false);
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 15);
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_25433[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), false);
		GAMEPLAY::CLEAR_BIT(&(Global_25433[iVar0 /*23*/].f_11), 15);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_25433[iVar0 /*23*/].f_11, false))
	{
		if (does_blip_exist(Global_25433[iVar0 /*23*/].f_19))
		{
			set_this_script_can_remove_blips_created_by_any_script(1);
			remove_blip(&(Global_25433[iVar0 /*23*/].f_19));
			set_this_script_can_remove_blips_created_by_any_script(0);
		}
	}
}

void func_62()
{
	if (func_125(iLocal_69) && func_125(iLocal_80))
	{
		if (iLocal_478 > -1)
		{
			if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_478 > 500 && get_entity_speed(iLocal_80) > 5f) && has_entity_collided_with_anything(iLocal_80))
			{
				task_play_anim(iLocal_69, sLocal_477, "shunt_from_back", 8f, -8f, -1, 0, 0, 0, 0, 0);
				_0x2208438012482A1A(iLocal_69, 0, 0);
				func_122("GROWL");
				iLocal_478 = -1;
				iLocal_57 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
		else if (!is_entity_playing_anim(iLocal_69, sLocal_477, "shunt_from_back", 3) || (is_entity_playing_anim(iLocal_69, sLocal_477, "shunt_from_back", 3) && get_entity_anim_current_time(iLocal_69, sLocal_477, "shunt_from_back") > 0.98f))
		{
			task_play_anim(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			_0x2208438012482A1A(iLocal_69, 0, 0);
			iLocal_478 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_57 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
}

void func_63()
{
	if (iLocal_478 > -1 && GAMEPLAY::GET_GAME_TIMER() - iLocal_54 > iLocal_55)
	{
		if (((get_player_radio_station_genre() == 7 || get_player_radio_station_genre() == 8) || get_player_radio_station_genre() == 9) || get_player_radio_station_genre() == 13)
		{
			func_64();
			iLocal_54 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_55 = get_random_int_in_range(6000, 8000);
		}
	}
}

void func_64()
{
	if (GAMEPLAY::GET_GAME_TIMER() - iLocal_57 > 500)
	{
		iLocal_57 = GAMEPLAY::GET_GAME_TIMER();
		if (func_125(iLocal_69) && is_ped_in_any_vehicle(iLocal_69, 0))
		{
			open_sequence_task(&iLocal_119);
			task_play_anim(false, sLocal_477, "bark", 4f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			close_sequence_task(iLocal_119);
			task_perform_sequence(iLocal_69, iLocal_119);
			clear_sequence_task(&iLocal_119);
			_0x2208438012482A1A(iLocal_69, 0, 0);
		}
	}
}

void func_65()
{
	if (get_player_wanted_level(player_id()) == 0 && iLocal_395 == 1)
	{
		if (iLocal_59 == -1)
		{
			iLocal_59 = GAMEPLAY::GET_GAME_TIMER();
		}
		if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_59 > 10000 && iLocal_478 > -1) && func_38())
		{
			if (func_35())
			{
				if (func_125(iLocal_69))
				{
					if (is_ped_in_any_vehicle(iLocal_69, 0))
					{
						func_64();
					}
					else
					{
						func_122("BARK");
					}
				}
			}
			iLocal_59 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
}

bool func_66()
{
	float fVar0;
	Vector3 vVar1;
	
	if (func_125(iLocal_80))
	{
		if (is_entity_in_water(iLocal_80))
		{
			vVar1 = {get_entity_coords(iLocal_80, 1)};
			if (iLocal_68 == -1)
			{
				iLocal_68 = GAMEPLAY::GET_GAME_TIMER();
			}
			if (get_water_height(vVar1, &fVar0))
			{
				if (fVar0 - vVar1.z > 1f)
				{
					return true;
				}
				else if (GAMEPLAY::GET_GAME_TIMER() - iLocal_68 > 3000)
				{
					func_122("AGITATED");
					iLocal_68 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			iLocal_68 = -1;
		}
	}
	return false;
}

void func_67(int iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_route(*iParam0, false);
		remove_blip(iParam0);
	}
}

void func_68(Vector3 vParam0, int iParam1)
{
	if (func_125(PLAYER::PLAYER_PED_ID()) && func_125(iLocal_69))
	{
		if (func_125(iLocal_80))
		{
			if ((iParam3 == 1 && !is_vehicle_door_damaged(iLocal_80, iLocal_118)) && get_vehicle_door_angle_ratio(iLocal_80, true) < 0.9f)
			{
				set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
			}
			if (is_synchronized_scene_running(iLocal_108))
			{
				detach_synchronized_scene(iLocal_108);
			}
			clear_ped_tasks_immediately(iLocal_69);
			func_124(iLocal_69, get_offset_from_entity_in_world_coords(iLocal_80, vParam0), get_entity_heading(iLocal_69), 1, 0);
			_0x2208438012482A1A(iLocal_69, 0, 0);
			func_69(0, 0);
			iLocal_107 = 15;
		}
		else
		{
			if (is_synchronized_scene_running(iLocal_108))
			{
				detach_synchronized_scene(iLocal_108);
			}
			clear_ped_tasks_immediately(iLocal_69);
			func_124(iLocal_69, get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), vParam0.x + 1f, vParam0.y, vParam0.z), get_entity_heading(iLocal_69), 1, 0);
			_0x2208438012482A1A(iLocal_69, 0, 0);
			func_69(0, 0);
			iLocal_107 = 15;
		}
	}
}

void func_69(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	Vector3 vVar7;
	Vector3 vVar10;
	Vector3 vVar13;
	
	if (iParam0 == 1)
	{
		if (!does_cam_exist(iLocal_486) && func_125(iLocal_80))
		{
			iVar6 = get_random_int_in_range(false, 4);
			if (iVar6 == 0)
			{
				vVar0 = {1.11573f, -1.40338f, 0.555789f};
				vVar3 = {0.5f, 0f, 0.3f};
			}
			else if (iVar6 == 1)
			{
				vVar0 = {-1.15872f, 1.75252f, 0.761228f};
				vVar3 = {0f, 0f, 0.3f};
			}
			else if (iVar6 == 2)
			{
				vVar0 = {-1.89975f, 0.339287f, 0.661881f};
				vVar3 = {0f, 0f, 0.3f};
			}
			else
			{
				vVar0 = {1.38134f, -0.1248f, 0.580783f};
				vVar3 = {0f, 0f, 0.3f};
			}
			iLocal_486 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
			vVar7 = {get_world_position_of_entity_bone(iLocal_80, get_entity_bone_index_by_name(iLocal_80, "seat_pside_f"))};
			vVar10 = {get_offset_from_entity_given_world_coords(iLocal_80, vVar7)};
			vVar13 = {vVar0 + vVar10};
			attach_cam_to_entity(iLocal_486, iLocal_80, vVar13, 1);
			point_cam_at_entity(iLocal_486, iLocal_80, vVar10 + vVar3, 1);
			set_cam_fov(iLocal_486, 50f);
			shake_cam(iLocal_486, "HAND_SHAKE", 0.3f);
			set_cam_dof_planes(iLocal_486, 0f, 0f, 100000f, 100000f);
			render_script_cams(true, false, 3000, 1, 0, 0);
		}
	}
	else if (does_cam_exist(iLocal_486))
	{
		if (iParam1 == 1)
		{
			set_gameplay_cam_relative_pitch(0f, 1f);
			set_gameplay_cam_relative_heading(0f);
		}
		render_script_cams(false, false, 3000, 1, 0, 0);
		destroy_all_cams(0);
	}
}

bool func_70()
{
	if (func_125(iLocal_80))
	{
		if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_479 > 500 || is_vehicle_door_damaged(iLocal_80, iLocal_118)) || func_77())
		{
			return true;
		}
	}
	return false;
}

void func_71()
{
	task_play_anim(PLAYER::PLAYER_PED_ID(), "misschop_vehicleenter_exit", sLocal_476, 8f, -8f, -1, 40, 0, 0, 0, 0);
	iLocal_479 = GAMEPLAY::GET_GAME_TIMER();
}

void func_72()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 23, 1);
}

bool func_73()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_74()
{
	if (!func_113(iLocal_69, 713668775) && func_4(PLAYER::PLAYER_PED_ID(), iLocal_69, 1) > 1f)
	{
		task_follow_nav_mesh_to_coord(iLocal_69, get_offset_from_entity_in_world_coords(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1), 2f, 0f, 0f), 2f, 20000, 0.25f, 0, 40000f);
	}
}

void func_75(int iParam0)
{
	if (iParam0 == 1)
	{
		set_gameplay_cam_relative_pitch(0f, 1f);
		set_gameplay_cam_relative_heading(0f);
	}
	func_67(&iLocal_70);
	set_entity_invincible(iLocal_69, true);
	set_ped_into_vehicle(iLocal_69, iLocal_80, false);
	task_play_anim(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
	_0x2208438012482A1A(iLocal_69, 0, 0);
}

bool func_76()
{
	float fVar0;
	
	if (func_125(iLocal_80) && func_125(iLocal_69))
	{
		if (iLocal_66 == -1)
		{
			fVar0 = func_4(iLocal_80, iLocal_69, 1);
			iLocal_66 = floor(fVar0 * 1000f);
			if (iLocal_66 < 5000)
			{
				iLocal_66 = 5000;
			}
		}
		if (((func_39(iLocal_69, get_offset_from_entity_in_world_coords(iLocal_80, 2f, 0f, 0f), 0) < 1f || is_control_pressed(0, 71)) || is_control_pressed(0, 72)) || (iLocal_65 > -1 && GAMEPLAY::GET_GAME_TIMER() - iLocal_65 > iLocal_66))
		{
			return true;
		}
	}
	return false;
}

bool func_77()
{
	int iVar0;
	
	if (func_125(iLocal_80))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1));
		if (((((((((((((((((((((((iVar0 == joaat("airbus") || iVar0 == joaat("barracks")) || iVar0 == joaat("barracks2")) || iVar0 == joaat("biff")) || iVar0 == joaat("bus")) || iVar0 == joaat("coach")) || iVar0 == joaat("hauler")) || iVar0 == joaat("mixer")) || iVar0 == joaat("mixer2")) || iVar0 == joaat("packer")) || iVar0 == joaat("pbus")) || iVar0 == joaat("phantom")) || iVar0 == joaat("pounder")) || iVar0 == joaat("riot")) || iVar0 == joaat("rubble")) || iVar0 == joaat("scrap")) || iVar0 == joaat("stockade")) || iVar0 == joaat("stockade3")) || iVar0 == joaat("tiptruck")) || iVar0 == joaat("tiptruck2")) || iVar0 == joaat("towtruck")) || iVar0 == joaat("towtruck2")) || iVar0 == get_hash_key("monster")) || iVar0 == get_hash_key("marshall"))
		{
			return true;
		}
	}
	return false;
}

void func_78()
{
	int iVar0;
	
	if (func_125(iLocal_80))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_80);
		if (iVar0 == joaat("coach"))
		{
			iLocal_118 = false;
		}
		else
		{
			iLocal_118 = true;
		}
	}
}

void func_79()
{
	if (func_125(iLocal_80))
	{
		iLocal_475 = get_vehicle_layout_hash(iLocal_80);
		switch (iLocal_475)
		{
			case -1965057835:
			case 919485892:
			case -1838563680:
			case 1768419516:
			case 1576485197:
			case 929009548:
			case -497732145:
			case -1659990386:
			case -662028469:
			case 1939145032:
				sLocal_477 = "creatures@rottweiler@in_vehicle@van";
				sLocal_476 = "van_ds_open_door_for_chop";
				break;
			
			case -2066252141:
			case 1105669833:
			case 542797648:
			case 68566729:
			case -782720499:
			case -1150063973:
			case 1630950849:
			case -463340997:
			case 2033852426:
				sLocal_477 = "creatures@rottweiler@in_vehicle@low_car";
				sLocal_476 = "low_ds_open_door_for_chop";
				break;
			
			case 434478421:
			case 1816176348:
			case 1710903184:
				sLocal_477 = "creatures@rottweiler@in_vehicle@4x4";
				sLocal_476 = "std_ds_open_door_for_chop";
				break;
			
			default:
				sLocal_477 = "creatures@rottweiler@in_vehicle@std_car";
				sLocal_476 = "std_ds_open_door_for_chop";
				break;
		}
		if (ENTITY::GET_ENTITY_MODEL(iLocal_80) == joaat("brawler"))
		{
			sLocal_477 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_476 = "std_ds_open_door_for_chop";
		}
	}
}

bool func_80()
{
	if ((((((((is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0)) && !is_ped_on_any_bike(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_plane(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_heli(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_boat(PLAYER::PLAYER_PED_ID())) && get_vehicle_max_number_of_passengers(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) >= 1) && is_vehicle_seat_free(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), false)) && !func_23())
	{
		return true;
	}
	return false;
}

bool func_81()
{
	if (is_valid_interior(get_interior_from_entity(PLAYER::PLAYER_PED_ID())))
	{
		if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(-14.5f, -1437.2f, 31.1f))
		{
			return true;
		}
		if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(7.6f, 537.3f, 176f))
		{
			return true;
		}
		if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(130.2632f, -1295.035f, 28.2695f))
		{
			return true;
		}
	}
	return false;
}

void func_82()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	
	vVar0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	vVar3 = {get_offset_from_entity_in_world_coords(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1), 2f, 0f, 0f)};
	vVar9 = {vVar3 - vVar0};
	vVar6 = {get_offset_from_entity_in_world_coords(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1), -2f, 0f, 0f)};
	vVar12 = {vVar6 - vVar0};
	if (vmag(vVar9) < vmag(vVar12))
	{
		iLocal_117 = 1;
	}
	else
	{
		iLocal_117 = 0;
	}
}

void func_83()
{
	Vector3 vVar0;
	float fVar3;
	int iVar4;
	
	if ((iLocal_339 != 5 || GAMEPLAY::GET_GAME_TIMER() - iLocal_340 < 1000) || iLocal_395 == 0)
	{
		return;
	}
	func_97();
	iVar4 = false;
	iVar4 = false;
	while (iVar4 < 102)
	{
		if (func_96(iVar4))
		{
			vVar0 = {func_95(iVar4, 1)};
			if (!func_94(vVar0))
			{
				fVar3 = get_distance_between_coords(get_entity_coords(iLocal_69, 1), vVar0, 1);
				if (fVar3 < fLocal_347[2] && fVar3 < fLocal_392)
				{
					iLocal_341[2] = iVar4;
					fLocal_347[2] = fVar3;
					vLocal_353[2 /*3*/] = {func_95(iVar4, 0)};
					vLocal_369[2 /*3*/] = {vVar0};
				}
			}
		}
		iVar4++;
	}
	iVar4 = false;
	iVar4 = false;
	while (iVar4 < 76)
	{
		if (func_93(iVar4))
		{
			vVar0 = {func_92(iVar4, 1)};
			if (!func_94(vVar0))
			{
				fVar3 = get_distance_between_coords(get_entity_coords(iLocal_69, 1), vVar0, 1);
				if (fVar3 < fLocal_347[1] && fVar3 < fLocal_392)
				{
					iLocal_341[1] = iVar4;
					fLocal_347[1] = fVar3;
					vLocal_353[1 /*3*/] = {func_92(iVar4, 0)};
					vLocal_369[1 /*3*/] = {vVar0};
				}
			}
		}
		iVar4++;
	}
	iVar4 = false;
	iVar4 = false;
	while (iVar4 < 45)
	{
		if (func_91(iVar4))
		{
			vVar0 = {func_90(iVar4, 1)};
			if (!func_94(vVar0))
			{
				fVar3 = get_distance_between_coords(get_entity_coords(iLocal_69, 1), vVar0, 1);
				if (fVar3 < fLocal_347[0] && fVar3 < fLocal_392)
				{
					iLocal_341[0] = iVar4;
					fLocal_347[0] = fVar3;
					vLocal_353[0 /*3*/] = {func_90(iVar4, 0)};
					vLocal_369[0 /*3*/] = {vVar0};
				}
			}
		}
		iVar4++;
	}
	if (func_89())
	{
		iVar4 = false;
		iVar4 = false;
		while (iVar4 < 50)
		{
			if (!func_26(iVar4) && func_88(iVar4))
			{
				vVar0 = {func_87(iVar4, 1)};
				if (!func_94(vVar0))
				{
					fVar3 = get_distance_between_coords(get_entity_coords(iLocal_69, 1), vVar0, 1);
					if (fVar3 < fLocal_347[3] && fVar3 < fLocal_392)
					{
						iLocal_341[3] = iVar4;
						fLocal_347[3] = fVar3;
						vLocal_353[3 /*3*/] = {func_87(iVar4, 0)};
						vLocal_369[3 /*3*/] = {vVar0};
					}
				}
			}
			iVar4++;
		}
	}
	if (func_86())
	{
		iVar4 = false;
		iVar4 = false;
		while (iVar4 < 50)
		{
			if (!func_25(iVar4) && func_85(iVar4))
			{
				vVar0 = {func_84(iVar4, 1)};
				if (!func_94(vVar0))
				{
					fVar3 = get_distance_between_coords(get_entity_coords(iLocal_69, 1), vVar0, 1);
					if (fVar3 < fLocal_347[4] && fVar3 < fLocal_392)
					{
						iLocal_341[4] = iVar4;
						fLocal_347[4] = fVar3;
						vLocal_353[4 /*3*/] = {func_84(iVar4, 0)};
						vLocal_369[4 /*3*/] = {vVar0};
					}
				}
			}
			iVar4++;
		}
	}
	iLocal_340 = GAMEPLAY::GET_GAME_TIMER();
}

Vector3 func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606.8925f, -3250.188f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.79f, -16.5774f;
			}
			break;
		
		case 2:
			return 1590.6f, -2810.174f, 3.4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.106f, 42.6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134.422f, -2607.024f, 14.77071f;
			}
			else
			{
				return 1133.688f, -2605.073f, 14.9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368.9316f, -2118.533f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.756f, 16.1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.024f, -1618.777f, 111.8313f;
			}
			break;
		
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		
		case 8:
			return 17.5926f, -1213.207f, 28.3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910.0172f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.551f, 31.8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237.728f, -1099.15f, 37.52579f;
			}
			else
			{
				return 1231.973f, -1102.308f, 34.4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87.69075f, 810.3736f, 210.1258f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900.951f, 1389.582f, 218.1509f;
			}
			else
			{
				return -1907.515f, 1388.69f, 217.9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467.369f, -730.7552f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183.152f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.538f, -525.5859f, 39.9114f;
			}
			break;
		
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169.397f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.488f, -65.4649f, 44.6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679.056f, 39.44059f, 160.7736f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24.21706f, 637.1212f, 206.3897f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531.895f, 870.3203f, 180.6775f;
			}
			else
			{
				return -1529.722f, 871.4257f, 180.6421f;
			}
			break;
		
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		
		case 26:
			return -2809.354f, 1449.643f, 99.928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			else
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			break;
		
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		
		case 31:
			return 1367.413f, 2180.632f, 96.6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.131f, 89.7842f;
			}
			break;
		
		case 33:
			return 889.3209f, 2870.052f, 55.2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		
		case 35:
			return -390.384f, 2963.26f, 18.2713f;
			break;
		
		case 36:
			return 71.6642f, 3279.368f, 30.3918f;
			break;
		
		case 37:
			return 1924.186f, 3471.256f, 50.3238f;
			break;
		
		case 38:
			return -583.1569f, 3580.375f, 266.2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514.302f, 3789.519f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517.613f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.047f, 3857.217f, 22.2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530.2739f, 4474.358f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.644f, 31.7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.813f, 4441.683f, 1.8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.055f, 4585.194f, 46.6362f;
			}
			break;
		
		case 44:
			return 2437.545f, 4779.959f, 33.5101f;
			break;
		
		case 45:
			return -1441.495f, 5414.888f, 23.3f;
			break;
		
		case 46:
			return 2196.251f, 5599.034f, 52.7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.61f, 48.8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378.4192f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		
		case 49:
			return 440.9546f, 6459.642f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_85(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 14:
		case 18:
		case 25:
			return false;
			break;
		
		case 16:
			if (GAMEPLAY::IS_BIT_SET(Global_25277, 7))
			{
				return false;
			}
			break;
	}
	return true;
}

auto func_86()
{
	return Global_101154.f_8739.f_125.f_2;
}

Vector3 func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 3:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 6:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 9:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 10:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 11:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 12:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 16:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 17:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 21:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 22:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 25:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 34:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 40:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 45:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 46:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 47:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_88(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 9:
		case 10:
		case 13:
		case 27:
		case 38:
			return false;
			break;
		
		case 14:
			if (GAMEPLAY::IS_BIT_SET(Global_25277, 7))
			{
				return false;
			}
			break;
	}
	return true;
}

auto func_89()
{
	return Global_101154.f_8739.f_122.f_2;
}

Vector3 func_90(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 473.1829f, -2643.184f, 4.7209f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 291.41f, -2090.78f, 16.29f;
			}
			else
			{
				return 289.2062f, -2091.221f, 16.0234f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return 1173.839f, -1499.781f, 33.84875f;
			}
			else
			{
				return 1173.566f, -1495.763f, 34.1121f;
			}
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return -461.7139f, -1699.202f, 17.85122f;
			}
			else
			{
				return -462f, -1701f, 18.8f;
			}
			break;
		
		case 4:
			return -1384.628f, -521.0416f, 30.084f;
			break;
		
		case 5:
			return -521.5692f, -601.7532f, 29.4482f;
			break;
		
		case 6:
			return -664.5f, 165.4552f, 58.3821f;
			break;
		
		case 7:
			return 329.3609f, -190.5986f, 53.2262f;
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -477.44f, -1052.99f, 39.81f;
			}
			else
			{
				return -478.7744f, -1051.079f, 40.93f;
			}
			break;
		
		case 9:
			return -1268.071f, -1917.408f, 4.8583f;
			break;
		
		case 10:
			return -1221.908f, -2771.762f, 13.0545f;
			break;
		
		case 11:
			return -3088.668f, 652.9629f, 0.989f;
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -629.3048f, 2036.067f, 157.3307f;
			}
			else
			{
				return -627.2166f, 2035.032f, 157.5585f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return -2071.903f, 3411.504f, 30.36414f;
			}
			else
			{
				return -2048.483f, 3406.162f, 31.1504f;
			}
			break;
		
		case 14:
			return -424.0321f, 4012.767f, 80.4744f;
			break;
		
		case 15:
			return 1983.1f, 5174.5f, 47.6f;
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return 2341.1f, 2576f, 45.7f;
			}
			else
			{
				return 2340.17f, 2573.89f, 45.77f;
			}
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 1663.9f, -25.91945f, 172.7747f;
			}
			else
			{
				return 1663.96f, -24.1101f, 172.7747f;
			}
			break;
		
		case 18:
			if (iParam1 == 1)
			{
				return 2614.451f, 1695.127f, 26.59907f;
			}
			else
			{
				return 2617.729f, 1693.417f, 30.8743f;
			}
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -187.31f, 1545.16f, 314.07f;
			}
			else
			{
				return -187.0338f, 1555.677f, 321.2431f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 859.5025f, 2426.04f, 53.18517f;
			}
			else
			{
				return 868.7573f, 2423.536f, 60.8942f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return -1822.075f, 805.7814f, 137.7265f;
			}
			else
			{
				return -1822.967f, 803.8147f, 138.2005f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return -1852.922f, 2054.42f, 139.9841f;
			}
			else
			{
				return -1851.628f, 2053.836f, 139.9841f;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return -1075.515f, 4898.497f, 213.2767f;
			}
			else
			{
				return -1070.651f, 4898.934f, 213.2752f;
			}
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 1301.56f, 4306.6f, 36.39f;
			}
			else
			{
				return 1300.1f, 4308.1f, 37.3f;
			}
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return -436.44f, 5983.5f, 30.49f;
			}
			else
			{
				return -437.94f, 5985.04f, 31.29f;
			}
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 1840.569f, 3693.77f, 33.2668f;
			}
			else
			{
				return 1838.577f, 3692.028f, 33.6172f;
			}
			break;
		
		case 27:
			return 533.1f, -23.8f, 70.6f;
			break;
		
		case 28:
			if (iParam1 == 1)
			{
				return 445.83f, -986.48f, 29.69f;
			}
			else
			{
				return 446.4f, -988.5f, 29.77f;
			}
			break;
		
		case 29:
			return -1119.498f, -847.3371f, 18.6886f;
			break;
		
		case 30:
			return 391.2f, -1603.9f, 28.38f;
			break;
		
		case 31:
			return -890.8f, -2386.2f, 13.4f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 282.75f, 953.05f, 209.95f;
			}
			else
			{
				return 284.7f, 954.2f, 210.1514f;
			}
			break;
		
		case 33:
			return -2003.115f, 544.7549f, 114.5077f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return -397.5786f, 1127.353f, 321.7291f;
			}
			else
			{
				return -386.8739f, 1142.42f, 321.5892f;
			}
			break;
		
		case 35:
			return -1521.811f, 1560.201f, 106.9392f;
			break;
		
		case 36:
			return 1391.945f, 3616.655f, 37.9259f;
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				return 45.37f, -1911.45f, 20.79f;
			}
			else
			{
				return 40.5177f, -1910.727f, 20.9706f;
			}
			break;
		
		case 38:
			if (iParam1 == 1)
			{
				return 68.14f, 3749.36f, 38.73f;
			}
			else
			{
				return 70.3786f, 3755.605f, 38.7487f;
			}
			break;
		
		case 39:
			return 119.45f, -755.29f, 258.15f;
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 156.35f, -1192.1f, 28.37f;
			}
			else
			{
				return 160.4134f, -1191.7f, 28.87f;
			}
			break;
		
		case 41:
			return 23.9296f, -633.9206f, 6.5084f;
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 31.67f, 6542.78f, 30.44f;
			}
			else
			{
				return 30.9162f, 6546.791f, 30.4058f;
			}
			break;
		
		case 43:
			if (iParam1)
			{
				return 1333.057f, 4381.278f, 43.3703f;
			}
			else
			{
				return 1331.355f, 4392.887f, 44.012f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -1147.31f, 4939.27f, 221.27f;
			}
			else
			{
				return -1149.392f, 4938.771f, 221.3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_91(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 39:
		case 41:
			return false;
			break;
	}
	return true;
}

Vector3 func_92(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 131.2f, 6920.1f, 20.8f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1048.569f, 4917.414f, 208.4216f;
			}
			else
			{
				return -1046.277f, 4918.739f, 211.5379f;
			}
			break;
		
		case 2:
			return -2358.46f, 3251.397f, 100.5504f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return -247.6219f, 6331.341f, 31.42602f;
			}
			else
			{
				return -249.9504f, 6331.219f, 32.7262f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return -140.9f, -2491.45f, 43.45f;
			}
			else
			{
				return -141.0976f, -2498.239f, 40.0124f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return -2924.697f, 46.50282f, 10.60369f;
			}
			else
			{
				return -2925.7f, 47.4f, 11.6f;
			}
			break;
		
		case 6:
			return -793.1981f, -726.4421f, 26.28f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return 124.0092f, -673.0096f, 41.02729f;
			}
			else
			{
				return 123.5196f, -674.2917f, 41.4945f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return 1195.737f, -1481.694f, 33.8595f;
			}
			else
			{
				return 1194.709f, -1482.472f, 33.9594f;
			}
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -35.88743f, 1945.738f, 189.1868f;
			}
			else
			{
				return -35.5254f, 1947.289f, 189.186f;
			}
			break;
		
		case 10:
			if (iParam1)
			{
				return 753.4579f, 4174.996f, 39.8011f;
			}
			else
			{
				return 751.72f, 4175.14f, 40.95f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 1791.256f, 4592.383f, 36.68283f;
			}
			else
			{
				return 1789.8f, 4592.4f, 36.78f;
			}
			break;
		
		case 12:
			return 341.311f, 2618.918f, 43.5124f;
			break;
		
		case 13:
			return 442.3755f, -223.602f, 55.0215f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return 1291.02f, -1760.94f, 51.05f;
			}
			else
			{
				return 1286.5f, -1754.4f, 52f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 1659.438f, 5.4271f, 165.1176f;
			}
			else
			{
				return 1658.621f, 6.7752f, 166.1676f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return 1645.91f, 4866.72f, 40.98f;
			}
			else
			{
				return 1647.399f, 4865.839f, 41f;
			}
			break;
		
		case 17:
			return -1144.589f, -2004.452f, 12.3803f;
			break;
		
		case 18:
			if (iParam1 == 1)
			{
				return -1047.3f, -520.6f, 35f;
			}
			else
			{
				return -1048.32f, -521.2f, 35.14f;
			}
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1576.046f, -587.8257f, 33.97909f;
			}
			else
			{
				return -1576.817f, -586.3887f, 34.8528f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 953.44f, -123.42f, 73.35f;
			}
			else
			{
				return 954.5f, -121.34f, 74.18f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1134.201f, -665.9413f, 56.08261f;
			}
			else
			{
				return 1135.401f, -663.7875f, 56.088f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return -2196.198f, 248.9123f, 173.612f;
			}
			else
			{
				return -2195.029f, 250.4256f, 173.6017f;
			}
			break;
		
		case 23:
			return 29.2f, 3635.4f, 39.8f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 1724.429f, 3299.023f, 40.2235f;
			}
			else
			{
				return 1721.96f, 3300.464f, 40.3835f;
			}
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 2617.321f, 3659.452f, 100.3867f;
			}
			else
			{
				return 2612.712f, 3662.564f, 101.1074f;
			}
			break;
		
		case 26:
			return -459.9625f, 1101.076f, 328.0211f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 2432.607f, 4994.333f, 45.25828f;
			}
			else
			{
				return 2430.906f, 4995.561f, 45.2685f;
			}
			break;
		
		case 28:
			if (iParam1 == 1)
			{
				return 3722.456f, 4521.837f, 20.39456f;
			}
			else
			{
				return 3724.5f, 4524.5f, 21.6f;
			}
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return -446.9024f, 5997.598f, 30.3407f;
			}
			else
			{
				return -446.045f, 6000.882f, 31.9163f;
			}
			break;
		
		case 30:
			return 3291.4f, 5192.5f, 18.4f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 390.81f, -1436.07f, 28.45f;
			}
			else
			{
				return 388.7f, -1434.3f, 29.8f;
			}
			break;
		
		case 32:
			return -445.26f, -442.49f, 32.26f;
			break;
		
		case 33:
			if (iParam1)
			{
				return -1501.46f, 858.17f, 180.59f;
			}
			else
			{
				return -1500.08f, 857.59f, 180.59f;
			}
			break;
		
		case 34:
			return 2822.2f, -741.4f, 1.8f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return -3166.978f, 1102.622f, 19.80827f;
			}
			else
			{
				return -3165.613f, 1102.24f, 19.8928f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1842.882f, 3670.457f, 32.68f;
			}
			else
			{
				return 1841.114f, 3675.253f, 34.086f;
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				return 1828.794f, 2605.504f, 44.61582f;
			}
			else
			{
				return 1830.535f, 2603.828f, 45.7491f;
			}
			break;
		
		case 38:
			if (iParam1 == 1)
			{
				return -32.61f, -1089.67f, 25.42f;
			}
			else
			{
				return -40.0528f, -1084.016f, 26.6224f;
			}
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 1439.012f, 6336.812f, 22.96477f;
			}
			else
			{
				return 1445.544f, 6334.057f, 23.975f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return -782.5126f, -1352.245f, 8.0001f;
			}
			else
			{
				return -784.4851f, -1351.364f, 8.1001f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return 962.8806f, -1826.419f, 30.07195f;
			}
			else
			{
				return 963.1673f, -1831.149f, 36.2055f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return -1246.155f, -1531.647f, 3.2962f;
			}
			else
			{
				return -1246.494f, -1533.677f, 4.5262f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -765.5466f, 698.8101f, 143.3693f;
			}
			else
			{
				return -761.1058f, 701.9452f, 145.05f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -512.1094f, 28.86313f, 43.6153f;
			}
			else
			{
				return -513.4391f, 30.9069f, 43.9018f;
			}
			break;
		
		case 45:
			if (iParam1 == 1)
			{
				return 781.3839f, 1292.073f, 359.2997f;
			}
			else
			{
				return 780.3879f, 1295.705f, 361.6941f;
			}
			break;
		
		case 46:
			return 208.69f, 337.76f, 104.64f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -1889.99f, 2078.38f, 140f;
			}
			else
			{
				return -1890.24f, 2073.26f, 140.11f;
			}
			break;
		
		case 48:
			return 153.6156f, -3073.998f, 4.8962f;
			break;
		
		case 49:
			if (iParam1)
			{
				return -306.2449f, -1180.538f, 22.711f;
			}
			else
			{
				return -304.0894f, -1180.886f, 23.9493f;
			}
			break;
		
		case 50:
			return -2006.987f, -556.4998f, 11.8813f;
			break;
		
		case 51:
			if (iParam1 == 1)
			{
				return -590.2079f, -289.8196f, 40.68631f;
			}
			else
			{
				return -588.1934f, -290.4782f, 43.7101f;
			}
			break;
		
		case 52:
			return -1795.826f, -855.7111f, 8.2048f;
			break;
		
		case 53:
			return -1557.108f, -1155.246f, 2.9158f;
			break;
		
		case 54:
			if (iParam1 == 1)
			{
				return -1470.71f, -1389.33f, 1.58f;
			}
			else
			{
				return -1467.483f, -1387.507f, 3.1432f;
			}
			break;
		
		case 55:
			return -684.8126f, -180.648f, 48.02f;
			break;
		
		case 56:
			if (iParam1 == 1)
			{
				return -1311.413f, 640.1154f, 136.9244f;
			}
			else
			{
				return -1307.062f, 641.4211f, 138.0582f;
			}
			break;
		
		case 57:
			return 2493.686f, 4963.541f, 43.7358f;
			break;
		
		case 58:
			if (iParam1 == 1)
			{
				return 1392.76f, 3602.94f, 33.98f;
			}
			else
			{
				return 1392.609f, 3605.799f, 34.9939f;
			}
			break;
		
		case 59:
			if (iParam1 == 1)
			{
				return -527.33f, 5295.7f, 73.17f;
			}
			else
			{
				return -535.4436f, 5297.496f, 76.3891f;
			}
			break;
		
		case 60:
			if (iParam1 == 1)
			{
				return -564.26f, 5353.13f, 69.23f;
			}
			else
			{
				return -551.5837f, 5349.404f, 75.253f;
			}
			break;
		
		case 61:
			if (iParam1 == 1)
			{
				return 3.18f, -1827.1f, 24.22f;
			}
			else
			{
				return 0.1911f, -1825.905f, 24.3295f;
			}
			break;
		
		case 62:
			if (iParam1 == 1)
			{
				return 62.25f, 3681.06f, 38.84f;
			}
			else
			{
				return 63.8867f, 3683.49f, 39.1543f;
			}
			break;
		
		case 63:
			return 155.384f, -741.179f, 258.6519f;
			break;
		
		case 64:
			if (iParam1 == 1)
			{
				return 126.61f, -1206.29f, 28.3f;
			}
			else
			{
				return 124.265f, -1205.882f, 28.2951f;
			}
			break;
		
		case 65:
			return 27.449f, -625.31f, 15.462f;
			break;
		
		case 66:
			if (iParam1 == 1)
			{
				return -129.04f, -662.04f, 39.51f;
			}
			else
			{
				return -129.0374f, -659.2689f, 41.0016f;
			}
			break;
		
		case 67:
			if (iParam1)
			{
				return 1138.62f, -1598.56f, 33.69f;
			}
			else
			{
				return 1138.63f, -1596.61f, 35.07f;
			}
			break;
		
		case 68:
			if (iParam1)
			{
				return 1149.68f, -1525.56f, 33.84f;
			}
			else
			{
				return 1147.55f, -1527.83f, 36.01f;
			}
			break;
		
		case 69:
			if (iParam1)
			{
				return 297.48f, -1448.79f, 28.97f;
			}
			else
			{
				return 296.44f, -1450.75f, 30.4f;
			}
			break;
		
		case 70:
			if (iParam1)
			{
				return 324.21f, -1392.68f, 31.51f;
			}
			else
			{
				return 322.27f, -1393.75f, 32.79f;
			}
			break;
		
		case 71:
			if (iParam1)
			{
				return 293.2f, -597.92f, 42.28f;
			}
			else
			{
				return 294.3f, -598.1f, 43.73f;
			}
			break;
		
		case 72:
			if (iParam1)
			{
				return 358f, -592.66f, 27.79f;
			}
			else
			{
				return 357.07f, -590.63f, 29.08f;
			}
			break;
		
		case 73:
			if (iParam1)
			{
				return -495.45f, -326.18f, 33.5f;
			}
			else
			{
				return -496.4f, -324.7f, 34.75f;
			}
			break;
		
		case 74:
			if (iParam1)
			{
				return -450.91f, -351.93f, 33.5f;
			}
			else
			{
				return -449.82f, -353.49f, 34.75f;
			}
			break;
		
		case 75:
			return -2258.833f, 323.9413f, 184.9015f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_93(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 17:
		case 55:
		case 63:
		case 65:
			return false;
			break;
	}
	return true;
}

bool func_94(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_95(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return -1760.36f, 428.6f, 126.31f;
			}
			else
			{
				return -1756.974f, 427.531f, 126.7f;
			}
			break;
		
		case 1:
			return -1595.742f, 2799.371f, 16.0205f;
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -197.1486f, 1482.685f, 288.253f;
			}
			else
			{
				return -200.0114f, 1481.697f, 289.4303f;
			}
			break;
		
		case 3:
			return 256.77f, 2841.047f, 42.6599f;
			break;
		
		case 4:
			return -1360.223f, 4435.751f, 27.7754f;
			break;
		
		case 5:
			return 64.63f, 7051.253f, 15.8272f;
			break;
		
		case 6:
			return -456.2838f, 1593.799f, 358.0119f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -3114.617f, 749.8445f, 11.59352f;
			}
			else
			{
				return -3111.614f, 749.2816f, 12.6285f;
			}
			break;
		
		case 8:
			return 713.6797f, 4095.969f, 33.765f;
			break;
		
		case 9:
			return 255.2671f, 2586.281f, 43.9619f;
			break;
		
		case 10:
			return -1292.64f, -3345.82f, 23.27f;
			break;
		
		case 11:
			return 3111.531f, 2214.848f, -8.6457f;
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return 555.82f, -839.05f, 39.84f;
			}
			else
			{
				return 555f, -837.81f, 55.08f;
			}
			break;
		
		case 13:
			return -2360f, 3245f, 91.9f;
			break;
		
		case 14:
			return 1691.152f, 2640.859f, 54.0693f;
			break;
		
		case 15:
			return 1982.37f, 6203.64f, 41.15f;
			break;
		
		case 16:
			return -2979f, 1588f, 23.3f;
			break;
		
		case 17:
			return 963.5308f, -1824.04f, 30.0708f;
			break;
		
		case 18:
			return -295.4187f, 6188.786f, 30.48932f;
			break;
		
		case 19:
			return -1778f, 124f, 67.9f;
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 157.5759f, 3133.994f, 42.45733f;
			}
			else
			{
				return 161.2925f, 3131.854f, 42.5892f;
			}
			break;
		
		case 21:
			return -888f, 5406f, 30.5f;
			break;
		
		case 22:
			return -1840f, 793f, 138.7f;
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return -495.8039f, -1750.207f, 17.42509f;
			}
			else
			{
				return -495.9968f, -1747.231f, 18.5194f;
			}
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1764.695f, -265.5809f, 47.6187f;
			}
			else
			{
				return -1763.359f, -263.2062f, 47.1481f;
			}
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 548.0715f, -1642.451f, 27.2033f;
			}
			else
			{
				return 548.5943f, -1642.603f, 27.4425f;
			}
			break;
		
		case 26:
			return 736.0563f, 2595.556f, 72.9165f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 701.0009f, -1179.702f, 23.28737f;
			}
			else
			{
				return 699.2748f, -1181.671f, 33.2608f;
			}
			break;
		
		case 28:
			if (iParam1 == 1)
			{
				return -1146.74f, 4938.93f, 221.27f;
			}
			else
			{
				return -1149.437f, 4940.362f, 221.3282f;
			}
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 2543.91f, -432.76f, 93.12f;
			}
			else
			{
				return 2513.535f, -442.8484f, 113.0888f;
			}
			break;
		
		case 30:
			return -553.1764f, -2239.877f, 121.3704f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 987.16f, -108.02f, 73.3f;
			}
			else
			{
				return 987.15f, -105.88f, 74.13f;
			}
			break;
		
		case 32:
			return -1048f, -836f, 10.5f;
			break;
		
		case 33:
			return 312.6026f, 6606.896f, 27.8835f;
			break;
		
		case 34:
			return -37.21f, 2871.26f, 58.61f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 61.91f, 3690.51f, 38.83f;
			}
			else
			{
				return 59f, 3692f, 38.92f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 2933.33f, 4617.07f, 47.72f;
			}
			else
			{
				return 2934.499f, 4617.067f, 47.736f;
			}
			break;
		
		case 37:
			return 57.8219f, -1932.121f, 20.4939f;
			break;
		
		case 38:
			return 378.26f, -334.3f, 45.63f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2673.662f, 2793.702f, 31.8124f;
			}
			else
			{
				return 2676.045f, 2793.249f, 39.5934f;
			}
			break;
		
		case 40:
			return -1582.278f, 770.3486f, 188.1942f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1641.139f, -1032.815f, 4.63165f;
			}
			else
			{
				return -1640.546f, -1034.129f, 4.6074f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return -151.09f, -214.36f, 44.73f;
			}
			else
			{
				return -159.7137f, -209.1721f, 48.938f;
			}
			break;
		
		case 43:
			return -1276.986f, -2451.886f, 72.0481f;
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -403.5827f, 1056.212f, 322.8414f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		
		case 45:
			return 2728.987f, 1576.382f, 65.5818f;
			break;
		
		case 46:
			if (iParam1 == 1)
			{
				return -221.27f, 6133.62f, 30.48f;
			}
			else
			{
				return -215.9002f, 6125.27f, 56.278f;
			}
			break;
		
		case 47:
			return 2092.225f, 2492.302f, 89.4046f;
			break;
		
		case 48:
			return -1124.666f, -967.1614f, 5.6319f;
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return -405.5299f, 323.4063f, 107.7227f;
			}
			else
			{
				return -405f, 325f, 108.7f;
			}
			break;
		
		case 50:
			return -1087.31f, -2429.3f, 13f;
			break;
		
		case 51:
			return -1042.645f, 879.7763f, 160.2144f;
			break;
		
		case 52:
			if (iParam1 == 1)
			{
				return -1081.229f, 678.9454f, 141.8056f;
			}
			else
			{
				return -1078.35f, 682.2944f, 144.904f;
			}
			break;
		
		case 53:
			return -402.0679f, 1355.062f, 329.8384f;
			break;
		
		case 54:
			return 153.3876f, 713.6584f, 207.2551f;
			break;
		
		case 55:
			return 186.9f, 243.0269f, 140.55f;
			break;
		
		case 56:
			if (iParam1 == 1)
			{
				return 302.01f, -3254.45f, 4.8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		
		case 57:
			if (iParam1 == 1)
			{
				return -398.57f, -1883.96f, 20.54f;
			}
			else
			{
				return -397f, -1885f, 21.5f;
			}
			break;
		
		case 58:
			return 780.7208f, -211.0616f, 65.1143f;
			break;
		
		case 59:
			return -1755.011f, 184.3929f, 63.3711f;
			break;
		
		case 60:
			if (iParam1 == 1)
			{
				return 788.84f, 2164.06f, 52.1f;
			}
			else
			{
				return 786.0139f, 2164.951f, 52.0981f;
			}
			break;
		
		case 61:
			return 1707.228f, 4920.156f, 41.0637f;
			break;
		
		case 62:
			return -684.9417f, 5793.045f, 16.331f;
			break;
		
		case 63:
			return -2188f, 4251f, 48f;
			break;
		
		case 64:
			if (iParam1 == 1)
			{
				return -1099.08f, 2711.35f, 18.11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		
		case 65:
			return 581f, -2805f, 5.5f;
			break;
		
		case 66:
			if (iParam1 == 1)
			{
				return -663.95f, -1998.85f, 6.1f;
			}
			else
			{
				return -665.4316f, -2002.04f, 7.5968f;
			}
			break;
		
		case 67:
			return 1442.905f, -1479.759f, 62.2245f;
			break;
		
		case 68:
			if (iParam1 == 1)
			{
				return -361.92f, -141.76f, 37.58f;
			}
			else
			{
				return -356.5324f, -145.0359f, 41.7413f;
			}
			break;
		
		case 69:
			return 624.0116f, 558.6531f, 129.2455f;
			break;
		
		case 70:
			return 2833f, 2807f, 56.3785f;
			break;
		
		case 71:
			if (iParam1 == 1)
			{
				return 92.14449f, 6360.182f, 30.37612f;
			}
			else
			{
				return 94.0769f, 6356.961f, 30.3761f;
			}
			break;
		
		case 72:
			return -2231.514f, 3477.792f, 29.3291f;
			break;
		
		case 73:
			return 377f, 3582f, 32.5f;
			break;
		
		case 74:
			if (iParam1 == 1)
			{
				return -2947.47f, 445.6f, 14.29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		
		case 75:
			if (iParam1 == 1)
			{
				return 1292.88f, -3341.78f, 4.9f;
			}
			else
			{
				return 1296f, -3348f, 5.2f;
			}
			break;
		
		case 76:
			if (iParam1 == 1)
			{
				return -1165.46f, -2054.09f, 13.2f;
			}
			else
			{
				return -1165.883f, -2051.026f, 13.2268f;
			}
			break;
		
		case 77:
			if (iParam1 == 1)
			{
				return 1235.57f, -452.01f, 65.7f;
			}
			else
			{
				return 1235f, -450f, 66.5f;
			}
			break;
		
		case 78:
			return -467.0458f, -934.8019f, 46.9844f;
			break;
		
		case 79:
			return 226.7f, -1761f, 28.5f;
			break;
		
		case 80:
			if (iParam1 == 1)
			{
				return 1218.07f, 1898.69f, 76.87f;
			}
			else
			{
				return 1221f, 1898f, 77.4f;
			}
			break;
		
		case 81:
			if (iParam1 == 1)
			{
				return 1545.99f, 3802.7f, 32.42f;
			}
			else
			{
				return 1535.829f, 3798.217f, 33.4563f;
			}
			break;
		
		case 82:
			return 756.8601f, 6462.329f, 30.4229f;
			break;
		
		case 83:
			return -2319f, 4124f, 26f;
			break;
		
		case 84:
			return -3185f, 1053f, 20.2f;
			break;
		
		case 85:
			return 818.9215f, -3188.167f, 4.9007f;
			break;
		
		case 86:
			if (iParam1 == 1)
			{
				return -451.05f, -2264.24f, 6.61f;
			}
			else
			{
				return -457.3656f, -2262.646f, 7.5212f;
			}
			break;
		
		case 87:
			if (iParam1 == 1)
			{
				return 1409.86f, -757.22f, 65.8f;
			}
			else
			{
				return 1410.091f, -752.1061f, 66.2362f;
			}
			break;
		
		case 88:
			return 8.4875f, -441.2103f, 44.5639f;
			break;
		
		case 89:
			if (iParam1 == 1)
			{
				return -935.04f, 387.39f, 76.62f;
			}
			else
			{
				return -937.0176f, 391.544f, 80.2377f;
			}
			break;
		
		case 90:
			if (iParam1 == 1)
			{
				return 2748.49f, 3463.02f, 54.77f;
			}
			else
			{
				return 2746.554f, 3463.525f, 54.7144f;
			}
			break;
		
		case 91:
			return 1898.896f, 4921.975f, 47.8088f;
			break;
		
		case 92:
			if (iParam1 == 1)
			{
				return -315.51f, 6310.89f, 31.37f;
			}
			else
			{
				return -315.9772f, 6307.385f, 31.4906f;
			}
			break;
		
		case 93:
			return -1171f, 4927f, 224f;
			break;
		
		case 94:
			return -281.1712f, 2528.012f, 73.6376f;
			break;
		
		case 95:
			if (iParam1 == 1)
			{
				return 68.45f, 3756.27f, 38.74f;
			}
			else
			{
				return 68.453f, 3758.967f, 38.7395f;
			}
			break;
		
		case 96:
			return 25.2888f, -634.2637f, 6.5084f;
			break;
		
		case 97:
			if (iParam1 == 1)
			{
				return -1146.67f, 4939.11f, 221.27f;
			}
			else
			{
				return -1145.283f, 4940.286f, 221.3038f;
			}
			break;
		
		case 98:
			return 441.64f, 5570.38f, 780.45f;
			break;
		
		case 99:
			if (iParam1)
			{
				return 1353.152f, 4377.223f, 43.3416f;
			}
			else
			{
				return 1357.209f, 4388.445f, 43.872f;
			}
			break;
		
		case 100:
			return -102.0671f, -968.1538f, 295.5635f;
			break;
		
		case 101:
			return 2492.69f, 4963.014f, 43.6478f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_96(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 11:
		case 13:
		case 14:
		case 30:
		case 34:
		case 43:
		case 45:
		case 50:
		case 55:
		case 88:
		case 96:
		case 98:
		case 100:
			return false;
			break;
	}
	return true;
}

void func_97()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_341[iVar0] = -1;
		fLocal_347[iVar0] = 999999f;
		vLocal_353[iVar0 /*3*/] = {0f, 0f, 0f};
		vLocal_369[iVar0 /*3*/] = {0f, 0f, 0f};
		iVar0++;
	}
}

void func_98(int iParam0)
{
	set_ped_model_is_suppressed(joaat("a_c_retriever"), iParam0);
	set_ped_model_is_suppressed(joaat("a_c_rottweiler"), iParam0);
	set_ped_model_is_suppressed(joaat("a_c_boar"), iParam0);
	set_ped_model_is_suppressed(joaat("a_c_coyote"), iParam0);
	set_ped_model_is_suppressed(joaat("a_c_deer"), iParam0);
	set_ped_model_is_suppressed(joaat("a_c_mtlion"), iParam0);
	set_ped_model_is_suppressed(joaat("a_c_pig"), iParam0);
}

void func_99(int iParam0, int iParam1, int iParam2)
{
	if (!has_ped_got_weapon(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"), 0) || get_ammo_in_ped_weapon(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball")) == 0)
	{
		give_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"), true, iParam0, iParam2);
		_0x72C1056D678BB7D8(joaat("weapon_ball"));
		if (iParam1 == 1)
		{
			play_sound_frontend(iLocal_490, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
		}
	}
}

void func_100()
{
	if (!is_ped_in_group(iLocal_69))
	{
		set_ped_as_group_member(iLocal_69, get_ped_group_index(PLAYER::PLAYER_PED_ID()));
	}
	if (is_ped_in_group(iLocal_69))
	{
		set_ped_never_leaves_group(iLocal_69, 1);
		set_group_formation_spacing(func_101(), 1f, 0.9f, 3f);
		set_ped_can_teleport_to_group_leader(iLocal_69, get_ped_group_index(PLAYER::PLAYER_PED_ID()), 1);
	}
}

int func_101()
{
	return get_player_group(get_player_index());
}

void func_102()
{
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_entity_in_water(PLAYER::PLAYER_PED_ID()))
	{
		if (func_106(PLAYER::PLAYER_PED_ID(), iLocal_69) > 10f || func_105("CHOP_H_WHIS"))
		{
			if (GAMEPLAY::GET_GAME_TIMER() - iLocal_412 > 4000 && is_control_just_pressed(2, 47))
			{
				iLocal_412 = GAMEPLAY::GET_GAME_TIMER();
				func_103(PLAYER::PLAYER_PED_ID(), "CALL_CHOP", 3);
				if (func_105("CHOP_H_WHIS"))
				{
					clear_help(1);
				}
				if (iLocal_51 == 15 && iLocal_52 > 1)
				{
				}
				else
				{
					func_40(0);
					if (iLocal_51 == 2)
					{
						func_121(2, 0);
					}
					else
					{
						func_121(2, 1);
					}
				}
			}
			if (((!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, 8) && !is_help_message_being_displayed()) && !func_19()) && !is_player_switch_in_progress())
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), 8);
				func_15("CHOP_H_WHIS", -1);
			}
		}
	}
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

int func_105(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

float func_106(int iParam0, int iParam1)
{
	return func_4(iParam0, iParam1, 1);
}

bool func_107()
{
	if ((get_script_task_status(iLocal_69, 242628503) == 7 || is_ped_ragdoll(iLocal_69)) || has_entity_been_damaged_by_any_ped(iLocal_69))
	{
		clear_ped_last_weapon_damage(iLocal_69);
		return true;
	}
	return false;
}

void func_108(char* sParam0, int iParam1)
{
	func_111(&uLocal_172, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	func_109(&uLocal_172, "CHOP_AU", sParam0, 3, iParam1, 0);
}

void func_109(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_110(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_14578, false);
	Global_15715 = iParam3;
	StringCopy(&Global_15702, sParam2, 24);
}

void func_110(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_111(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_112()
{
	int iVar0;
	
	iVar0 = get_random_int_in_range(false, 6);
	if (iVar0 == 0)
	{
		task_play_anim(iLocal_69, sLocal_82[1], "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_a";
	}
	else if (iVar0 == 1)
	{
		task_play_anim(iLocal_69, sLocal_82[1], "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_c";
	}
	else
	{
		task_play_anim(iLocal_69, sLocal_82[1], "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_86 = "idle_b";
	}
}

bool func_113(int iParam0, int iParam1)
{
	if (func_114(iParam0))
	{
		if (get_script_task_status(iParam0, iParam1) == 1 || get_script_task_status(iParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_114(int iParam0)
{
	if (func_125(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_465 == 0)
	{
		iVar0 = get_random_int_in_range(false, 8);
		if (!is_entity_at_coord(iLocal_69, vLocal_440[iVar0 /*3*/], 2f, 2f, 4f, false, true, 0) && !is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_440[iVar0 /*3*/], 2f, 2f, 4f, false, true, 0))
		{
			task_follow_nav_mesh_to_coord(iLocal_69, vLocal_440[iVar0 /*3*/], 1f, 20000, 0.25f, 8192, 40000f);
			iLocal_465 = 1;
		}
	}
	else if (!func_113(iLocal_69, 713668775))
	{
		if (func_43() == 2)
		{
			iVar1 = 15;
		}
		else if (func_43() == 0)
		{
			iVar1 = 10;
		}
		else
		{
			iVar1 = -1;
		}
		iVar2 = get_random_int_in_range(false, 100);
		if (iVar2 < iVar1 && iLocal_422 == 0)
		{
			iLocal_422 = 1;
			func_121(13, 1);
		}
		else if (iVar2 < 50)
		{
			iLocal_81 = 1;
			sLocal_82[0] = "creatures@rottweiler@amb@world_dog_barking@enter";
			sLocal_82[1] = "creatures@rottweiler@amb@world_dog_barking@base";
			sLocal_82[2] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_121(17, 1);
		}
		else
		{
			iLocal_81 = 0;
			sLocal_82[0] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			sLocal_82[1] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			sLocal_82[2] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_121(17, 1);
		}
	}
}

void func_116()
{
	if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_484 > 2000 && func_125(iLocal_69)) && is_bullet_in_area(get_entity_coords(iLocal_69, 1), 5f, 1))
	{
		func_122("WHINE");
		iLocal_484 = GAMEPLAY::GET_GAME_TIMER();
	}
}

void func_117()
{
	if (func_43() == 2 && GAMEPLAY::GET_GAME_TIMER() - iLocal_413 > iLocal_414)
	{
		iLocal_413 = GAMEPLAY::GET_GAME_TIMER();
		iLocal_414 = get_random_int_in_range(10000, 15000);
		func_122("WHINE");
	}
}

bool func_118(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if ((func_125(iLocal_69) && func_125(PLAYER::PLAYER_PED_ID())) && func_120(iParam0, vLocal_397, 30f))
	{
		if (iParam1 == 1)
		{
			if (func_119(&uLocal_120, get_entity_coords(iParam0, 1)))
			{
				vVar0 = {get_entity_coords(iLocal_69, 1)};
				vVar3 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
				if (absf(vVar0.z - vVar3.z) < 2.5f)
				{
					return true;
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

int func_119(auto uParam0, struct<2> Param1, Vector3 fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (*uParam0.f_46 < 3)
	{
	}
	iVar0 = false;
	iVar1 = 0;
	iVar2 = *uParam0.f_46 - 1;
	while (iVar1 < *uParam0.f_46)
	{
		if ((*(uParam0[iVar1 /*3*/]).f_1 < Param1.f_1 && *(uParam0[iVar2 /*3*/]).f_1 >= Param1.f_1) || (*(uParam0[iVar2 /*3*/]).f_1 < Param1.f_1 && *(uParam0[iVar1 /*3*/]).f_1 >= Param1.f_1))
		{
			if (*uParam0[iVar1 /*3*/] + Param1.f_1 - *(uParam0[iVar1 /*3*/]).f_1 / *(uParam0[iVar2 /*3*/]).f_1 - *(uParam0[iVar1 /*3*/]).f_1 * *uParam0[iVar2 /*3*/] - *uParam0[iVar1 /*3*/] < Param1)
			{
				iVar0 = !iVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return iVar0;
}

int func_120(int iParam0, Vector3 vParam1, float fParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {get_entity_coords(iParam0, 1)};
	vVar3 = {vParam1 - vVar0};
	return vVar3.x * vVar3.x + vVar3.y * vVar3.y <= fParam4 * fParam4;
}

void func_121(int iParam0, int iParam1)
{
	iLocal_107 = 0;
	if (func_125(iLocal_69))
	{
		set_blocking_of_non_temporary_events(iLocal_69, true);
		clear_ped_last_weapon_damage(iLocal_69);
		if (!is_ped_in_any_vehicle(iLocal_69, 0))
		{
			if (iParam1 == 1)
			{
				clear_ped_tasks(iLocal_69);
			}
			set_entity_invincible(iLocal_69, false);
		}
	}
	iLocal_51 = iParam0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	iLocal_385 = -1;
	vLocal_386 = {0f, 0f, 0f};
	vLocal_389 = {0f, 0f, 0f};
	iLocal_339 = 5;
	func_34();
	iLocal_465 = 0;
	iLocal_439 = 0;
	iLocal_484 = GAMEPLAY::GET_GAME_TIMER();
	set_audio_flag("DisableBarks", 0);
}

void func_122(char* sParam0)
{
	_0xEE066C7006C49C0A(iLocal_69, 3, sParam0);
}

bool func_123()
{
	if (func_118(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (GAMEPLAY::GET_GAME_TIMER() - iLocal_406 > iLocal_407)
		{
			return true;
		}
		if (func_39(PLAYER::PLAYER_PED_ID(), vLocal_397.f_5, 1) < 8f)
		{
			func_108("CHOP_KENNEL", 0);
			return true;
		}
	}
	return false;
}

int func_124(int iParam0, Vector3 vParam1, Vector3 fParam2, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	
	iVar0 = false;
	if (func_125(iParam0))
	{
		if (iParam5 == 1)
		{
			fVar1 = 0f;
			iVar0 = get_ground_z_for_3d_coord(vParam1, &fVar1, 0);
			if (iVar0)
			{
				vParam1.z = fVar1;
			}
		}
		set_entity_coords(iParam0, vParam1, 1, false, 0, iParam6);
		set_entity_heading(iParam0, fParam4);
		if (iParam5)
		{
			return iVar0;
		}
		return true;
	}
	return false;
}

bool func_125(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_126()
{
	if (GAMEPLAY::GET_GAME_TIMER() - iLocal_488 > 60000)
	{
		iLocal_488 = GAMEPLAY::GET_GAME_TIMER();
		if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
		{
			if (func_43() == 1)
			{
				func_127(115, 1);
			}
			else
			{
				func_127(116, 1);
			}
		}
	}
}

void func_127(int iParam0, int iParam1)
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

void func_128()
{
	if (GAMEPLAY::GET_GAME_TIMER() - iLocal_485 > 500)
	{
		iLocal_485 = GAMEPLAY::GET_GAME_TIMER();
		if (iLocal_51 != 15 && _0x82FDE6A57EE4EE44(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"), 1.5f, &uLocal_468, &iLocal_467, 0))
		{
			func_40(1);
		}
	}
}

void func_129()
{
	int iVar0;
	
	if (((((((((((func_144() && func_143()) && !func_142()) && iLocal_53 == 0) && iLocal_51 != 6) && func_19()) && !is_player_switch_in_progress()) && !is_ped_in_combat(iLocal_69, false)) && !func_81()) && !func_16()) && !func_3(0)) && !func_141())
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 19, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 44, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 262, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 261, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
		if (iLocal_396 == 0)
		{
			func_138(floor(Global_101154.f_24643.f_254), 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1);
		}
		else
		{
			func_138(100, 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1);
		}
		if (func_137())
		{
			if (Global_25266 == 0)
			{
				Global_25266 = 1;
			}
			if (is_gameplay_hint_active())
			{
				_0xCCD078C2665D2973(1);
			}
			else
			{
				set_gameplay_entity_hint(iLocal_69, 0f, 0f, 0f, 1, -1, 1000, 1000, 193150208);
				iLocal_492 = 0;
			}
			set_input_exclusive(func_136(), func_135(0));
			set_input_exclusive(func_136(), func_135(1));
			set_input_exclusive(func_136(), func_135(2));
			set_input_exclusive(func_136(), func_135(3));
			set_input_exclusive(func_136(), func_135(4));
			set_input_exclusive(func_136(), func_135(5));
			if (_is_input_disabled(0))
			{
				CONTROLS::DISABLE_CONTROL_ACTION(func_136(), func_135(0), 1);
				CONTROLS::DISABLE_CONTROL_ACTION(func_136(), func_135(1), 1);
				CONTROLS::DISABLE_CONTROL_ACTION(func_136(), func_135(2), 1);
				CONTROLS::DISABLE_CONTROL_ACTION(func_136(), func_135(3), 1);
				CONTROLS::DISABLE_CONTROL_ACTION(func_136(), func_135(4), 1);
				CONTROLS::DISABLE_CONTROL_ACTION(func_136(), func_135(5), 1);
			}
			enable_control_action(0, 25, 1);
			if (is_disabled_control_just_released(func_136(), func_135(0)) && func_134())
			{
				switch (iLocal_51)
				{
					case 1:
					case 3:
					case 4:
						iLocal_75 = 1;
						func_133(0);
						func_122("PLAYFUL");
						func_108("CHOP_WALK", 0);
						func_121(2, 1);
						break;
					
					case 2:
					case 5:
					case 15:
						iLocal_75 = 0;
						func_133(0);
						func_121(3, 1);
						break;
					
					case 17:
					case 18:
						iLocal_75 = 1;
						func_133(0);
						func_108("CHOP_WALK", 0);
						iLocal_53 = 2;
						break;
				}
				if (iLocal_75 == 1 && STATS::STAT_GET_INT(joaat("sp_chop_walk_done"), &iLocal_487, -1))
				{
					iLocal_487++;
					STATS::STAT_SET_INT(joaat("sp_chop_walk_done"), iLocal_487, 1);
				}
			}
			if (iLocal_395 == 1)
			{
				if (is_disabled_control_just_pressed(func_136(), func_135(1)) && func_134())
				{
					if (iLocal_51 == 17 || iLocal_51 == 18)
					{
						iLocal_53 = 5;
					}
					else
					{
						func_121(5, 1);
					}
				}
				if (func_43() == 2 && iLocal_396 == 0)
				{
					if (func_132() >= 1)
					{
						if (is_disabled_control_just_pressed(func_136(), func_135(2)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 2)
					{
						if (is_disabled_control_just_pressed(func_136(), func_135(3)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 3)
					{
						if (is_disabled_control_just_pressed(func_136(), func_135(4)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 4)
					{
						if (is_disabled_control_just_pressed(func_136(), func_135(5)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
				}
				else
				{
					if (func_132() >= 1)
					{
						if (is_disabled_control_just_pressed(func_136(), func_135(2)) && func_134())
						{
							func_108("CHOP_SIT", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 8;
							}
							else
							{
								func_121(8, 1);
							}
						}
					}
					if (func_132() >= 2)
					{
						if (is_disabled_control_just_pressed(func_136(), func_135(3)) && func_134())
						{
							func_108("CHOP_PAW", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 9;
							}
							else
							{
								func_121(9, 1);
							}
						}
					}
					if (func_132() >= 3)
					{
						if (is_disabled_control_just_pressed(func_136(), func_135(4)) && func_134())
						{
							func_108("CHOP_BEG", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 7;
							}
							else
							{
								func_121(7, 1);
							}
						}
					}
					if (func_132() >= 4)
					{
						if (is_disabled_control_just_pressed(func_136(), func_135(5)) && func_134())
						{
							func_108("CHOP_PET", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 10;
							}
							else
							{
								func_121(10, 1);
							}
						}
					}
				}
			}
		}
		else
		{
			clear_help(1);
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, false))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), false);
			}
			if (iLocal_395 == 0)
			{
				iLocal_395 = func_131();
			}
			if (iLocal_395 == 1)
			{
				iVar0 = func_132();
				if (iVar0 > 4)
				{
					iVar0 = 4;
				}
				if ((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18) || iLocal_51 == 3) || iLocal_51 == 4)
				{
					if ((func_43() == 2 && iLocal_396 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_109, "CHOP_H_WAIT_H", 32);
					}
					else
					{
						StringCopy(&Local_109, "CHOP_H_WAIT_", 32);
					}
					StringIntConCat(&Local_109, iVar0, 32);
					if (_is_input_disabled(0))
					{
						StringConCat(&Local_109, "_KM", 32);
					}
				}
				else if (iLocal_51 == 2 || iLocal_51 == 15)
				{
					if ((func_43() == 2 && iLocal_396 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_109, "CHOP_H_WALK_H", 32);
					}
					else
					{
						StringCopy(&Local_109, "CHOP_H_WALK_", 32);
					}
					StringIntConCat(&Local_109, iVar0, 32);
					if (_is_input_disabled(0))
					{
						StringConCat(&Local_109, "_KM", 32);
					}
				}
				func_130(&Local_109);
			}
			else if (iLocal_51 == 2 || iLocal_51 == 15)
			{
				if (_is_input_disabled(0))
				{
					func_130("CHOP_H_HOME_KM");
				}
				else
				{
					func_130("CHOP_H_HOME");
				}
			}
			else if (_is_input_disabled(0))
			{
				func_130("CHOP_H_NOAPP_KM");
			}
			else
			{
				func_130("CHOP_H_NOAPP");
			}
		}
	}
	else
	{
		func_133(1);
	}
}

void func_130(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

bool func_131()
{
	if (Global_101154.f_24643.f_263)
	{
		return true;
	}
	return false;
}

auto func_132()
{
	return Global_101154.f_24643.f_254.f_3;
}

void func_133(int iParam0)
{
	if (func_137())
	{
		clear_help(1);
	}
	if (iParam0 == 1 && is_gameplay_hint_active())
	{
		stop_gameplay_hint(0);
	}
}

bool func_134()
{
	if (((iLocal_51 == 8 || iLocal_51 == 7) || iLocal_51 == 9) || iLocal_51 == 10)
	{
		return false;
	}
	return true;
}

int func_135(int iParam0)
{
	if (_is_input_disabled(0))
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 22;
			
			case 2:
				return 44;
			
			case 3:
				return 45;
			
			case 4:
				return 51;
			
			case 5:
				return 23;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 227;
			
			case 1:
				return 229;
			
			case 2:
				return 224;
			
			case 3:
				return 225;
			
			case 4:
				return 223;
			
			case 5:
				return 222;
			}
		
		default:
	}
	return 0;
}

int func_136()
{
	if (_is_input_disabled(0))
	{
		return 0;
	}
	return 2;
}

bool func_137()
{
	if (is_help_message_being_displayed())
	{
		if (((((((((((((((((((func_105("CHOP_H_WAIT_0") || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_NOAPP"))
		{
			return true;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (is_help_message_being_displayed())
		{
			if (((((((((((((((((((func_105("CHOP_H_WAIT_0_KM") || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_138(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_140(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_139(0, iVar0);
		Global_1339940.f_946[iVar0] = iParam0;
		Global_1339940.f_946.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1339940.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1339940.f_946.f_194[iVar0] = iParam3;
		Global_1339940.f_946.f_183[iVar0] = iParam4;
		Global_1339940.f_946.f_216[iVar0] = iParam5;
		Global_1339940.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1339940.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1339940.f_946.f_258[iVar0] = iParam8;
		Global_1339940.f_946.f_269[iVar0] = iParam9;
		Global_1339940.f_946.f_312[iVar0] = iParam10;
		Global_1339940.f_946.f_323[iVar0] = iParam11;
		Global_1339940.f_946.f_334[iVar0] = iParam12;
		Global_1339940.f_946.f_345[iVar0] = iParam13;
		Global_1339940.f_941 = 1;
		Global_1339940.f_946.f_356[iVar0] = iParam14;
		Global_1339940.f_946.f_367[iVar0] = iParam15;
		Global_1339940.f_946.f_378[iVar0] = iParam16;
		Global_1339940.f_946.f_389[iVar0] = iParam17;
		Global_1339940.f_946.f_400[iVar0] = iParam18;
		Global_1339940.f_946.f_411[iVar0] = iParam19;
	}
}

void func_139(int iParam0, int iParam1)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_140(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4726[iParam0], iParam1);
}

auto func_141()
{
	return Global_68058;
}

int func_142()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

bool func_143()
{
	if (iLocal_51 == 12)
	{
		return false;
	}
	if (iLocal_51 == 13 || (iLocal_51 == 14 && func_113(iLocal_69, 242628503)))
	{
		if (iLocal_439 == 0 && is_control_pressed(2, 228))
		{
			func_108("CHOP_BUSY", 0);
			iLocal_439 = 1;
		}
		return false;
	}
	return true;
}

bool func_144()
{
	if (func_106(PLAYER::PLAYER_PED_ID(), iLocal_69) < 10f)
	{
		if (iLocal_51 == 15 && iLocal_52 < 4)
		{
		}
		else if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
		{
			func_148(0);
			func_147(0);
			return false;
		}
		else
		{
			func_145();
			func_148(1);
			func_147(1);
			return true;
		}
	}
	func_148(0);
	func_147(0);
	if (func_105("CHOP_H_INTRO") || (GAMEPLAY::IS_PC_VERSION() && func_105("CHOP_H_INTRO_KM")))
	{
		clear_help(1);
	}
	return false;
}

void func_145()
{
	if ((((((((!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, false) && !(func_105("CHOP_H_INTRO") || (GAMEPLAY::IS_PC_VERSION() && func_105("CHOP_H_INTRO_KM")))) && !func_105("PW_HELP_1")) && !func_105("PW_HELP_2")) && !func_146()) && !is_player_switch_in_progress()) && !func_3(0)) && !func_142()) && !func_141())
	{
		if ((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18)
		{
			if (func_118(PLAYER::PLAYER_PED_ID(), 1))
			{
				clear_help(1);
				if (_is_input_disabled(0))
				{
					func_130("CHOP_H_INTRO_KM");
				}
				else
				{
					func_130("CHOP_H_INTRO");
				}
			}
		}
	}
	if ((GAMEPLAY::IS_PC_VERSION() && func_105("CHOP_H_INTRO_KM")) || func_105("CHOP_H_INTRO"))
	{
		if ((((func_146() || is_player_switch_in_progress()) || func_3(0)) || func_142()) || func_141())
		{
			clear_help(1);
		}
	}
}

bool func_146()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

void func_147(int iParam0)
{
	if (iParam0 == 1)
	{
		if (func_125(iLocal_69))
		{
			task_look_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_69, -1, 48, 2);
			iLocal_73 = 1;
		}
	}
	else if (iLocal_73 == 1 && func_125(PLAYER::PLAYER_PED_ID()))
	{
		task_clear_look_at(PLAYER::PLAYER_PED_ID());
		iLocal_73 = 0;
	}
}

void func_148(int iParam0)
{
	int iVar0;
	
	get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
	if (iLocal_74 == 1 && iVar0 != joaat("weapon_unarmed"))
	{
		iParam0 = 0;
	}
	if (iParam0 == 1)
	{
		if (iLocal_74 == 0 && iVar0 == joaat("weapon_unarmed"))
		{
			set_ped_can_be_targetted(iLocal_69, true);
			set_entity_is_target_priority(iLocal_69, 1, 0f);
			_0x061CB768363D6424(iLocal_69, 1);
			set_time_exclusive_display_texture(iLocal_69, 1);
			iLocal_74 = 1;
		}
	}
	else if (iLocal_74 == 1)
	{
		set_ped_can_be_targetted(iLocal_69, false);
		set_entity_is_target_priority(iLocal_69, 0, 0f);
		_0x061CB768363D6424(iLocal_69, 0);
		iLocal_74 = 0;
	}
}

void func_149()
{
	int iVar0;
	var[] uVar1 = new var[5];
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if ((iLocal_51 != 6 && iLocal_107 == 0) && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15) || (iLocal_51 == 14 && !func_113(iLocal_69, 242628503)))
		{
			if (_0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 100f) > 0 || _0x336B3D200AB007CB(iLocal_69, get_entity_coords(iLocal_69, 1), 100f) > 0)
			{
				request_anim_dict("creatures@rottweiler@melee@streamed_taunts@");
				iVar0 = 0;
				while (iVar0 < get_ped_nearby_peds(PLAYER::PLAYER_PED_ID(), &uVar1, -1))
				{
					if ((((!func_125(iVar7) && func_125(uVar1[iVar0])) && (is_ped_in_combat(uVar1[iVar0], PLAYER::PLAYER_PED_ID()) || is_ped_in_combat(uVar1[iVar0], iLocal_69))) && !is_ped_in_any_vehicle(uVar1[iVar0], 0)) && uVar1[iVar0] != iLocal_69)
					{
						iVar7 = uVar1[iVar0];
					}
					iVar0++;
				}
				if (func_125(iVar7))
				{
					task_combat_ped(iLocal_69, iVar7, 0, 16);
					func_108("CHOP_ATTACK2", 0);
					if (((!is_help_message_being_displayed() && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, 6)) && !func_19()) && !is_player_switch_in_progress())
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), 6);
						func_15("CHOP_H_ATTACK", -1);
					}
					func_40(0);
					func_121(6, 0);
				}
			}
			else
			{
				get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar8, 1);
				if (iVar8 != joaat("weapon_ball") && !(iLocal_51 == 15 && iLocal_52 == 1))
				{
					if (get_player_target_entity(player_id(), &iVar9) || get_entity_player_is_free_aiming_at(player_id(), &iVar9))
					{
						if (is_entity_a_ped(iVar9))
						{
							iVar10 = get_ped_index_from_entity_index(iVar9);
							if (((!PED::IS_PED_INJURED(iVar10) && iVar10 != iLocal_69) && !is_ped_in_any_vehicle(iVar10, 0)) && func_4(PLAYER::PLAYER_PED_ID(), iVar10, 1) < 50f)
							{
								task_combat_ped(iLocal_69, iVar10, 0, 16);
								iLocal_480++;
								if (iLocal_480 >= 3)
								{
									set_wanted_level_difficulty(player_id(), 0f);
									set_player_wanted_level_no_drop(player_id(), 2, 0);
								}
								func_108("CHOP_ATTACK1", 0);
								if (((!is_help_message_being_displayed() && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, 11)) && !func_19()) && !is_player_switch_in_progress())
								{
									GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), 11);
									func_15("CHOP_H_AIM", -1);
								}
								func_40(0);
								func_121(6, 0);
							}
						}
					}
				}
			}
		}
	}
	if (GAMEPLAY::GET_GAME_TIMER() - iLocal_481 > 60000)
	{
		iLocal_481 = GAMEPLAY::GET_GAME_TIMER();
		if (iLocal_480 > 0)
		{
			iLocal_480--;
		}
	}
}

void func_150()
{
	if ((iLocal_51 != 16 && Global_25125 == 1) && is_entity_attached_to_any_object(PLAYER::PLAYER_PED_ID()))
	{
		func_121(16, 1);
	}
}

void func_151()
{
	if (iLocal_438 == 0)
	{
		if (func_118(PLAYER::PLAYER_PED_ID(), 1))
		{
			func_108("CHOP_DUMP", 0);
			iLocal_438 = 1;
		}
	}
}

void func_152()
{
	if (iLocal_466 != func_153() && func_125(iLocal_69))
	{
		if (func_131())
		{
			iLocal_466 = func_153();
			set_ped_component_variation(iLocal_69, 3, 0, iLocal_466, 0);
		}
		else if (iLocal_466 != 4)
		{
			iLocal_466 = 4;
			set_ped_component_variation(iLocal_69, 3, 0, iLocal_466, 0);
		}
	}
}

auto func_153()
{
	return Global_101154.f_24643.f_254.f_4;
}

void func_154()
{
	int iVar0;
	
	Global_25266 = 0;
	STREAMING::REQUEST_MODEL(func_162());
	if (!STREAMING::HAS_MODEL_LOADED(func_162()))
	{
		return;
	}
	if (func_177(6))
	{
		vLocal_397.f_4 = 6;
		vLocal_397 = {18.1531f, 535.2469f, 169.6324f};
		vLocal_397.f_3 = 204.8112f;
		vLocal_397.f_5 = {19.52771f, 537.436f, 170.143f};
		vLocal_397.f_8 = 151.3064f;
		vLocal_419 = {19.45963f, 535.7817f, 169.6277f};
		vLocal_440[0 /*3*/] = {17.36033f, 528.8973f, 169.6277f};
		vLocal_440[1 /*3*/] = {19.46877f, 529.1785f, 169.6277f};
		vLocal_440[2 /*3*/] = {20.82979f, 531.5168f, 169.6277f};
		vLocal_440[3 /*3*/] = {22.83555f, 532.3281f, 169.6277f};
		vLocal_440[4 /*3*/] = {20.79285f, 535.001f, 169.6277f};
		vLocal_440[5 /*3*/] = {18.05178f, 535.6321f, 169.6277f};
		vLocal_440[6 /*3*/] = {18.92047f, 534.0938f, 169.6277f};
		vLocal_440[7 /*3*/] = {17.51333f, 533.4775f, 169.6277f};
		func_161(&uLocal_120);
		func_160(&uLocal_120, 12.41124f, 535.5469f, 169.6277f);
		func_160(&uLocal_120, 19.04497f, 538.5729f, 169.6277f);
		func_160(&uLocal_120, 25.00015f, 534.4414f, 169.6277f);
		func_160(&uLocal_120, 28.0998f, 527.7639f, 169.4277f);
		func_160(&uLocal_120, 17.75896f, 523.3129f, 169.2277f);
		func_159(&uLocal_120);
	}
	else
	{
		vLocal_397.f_4 = 5;
		vLocal_397 = {-10.25168f, -1422.907f, 29.67775f};
		vLocal_397.f_3 = 157.9037f;
		vLocal_397.f_5 = {-9.73f, -1421.55f, 30.1f};
		vLocal_397.f_8 = 148.26f;
		vLocal_419 = {-10.6379f, -1424.561f, 29.67365f};
		vLocal_440[0 /*3*/] = {-10.03643f, -1423.529f, 29.67602f};
		vLocal_440[1 /*3*/] = {-10.78779f, -1425.306f, 29.70937f};
		vLocal_440[2 /*3*/] = {-12.7048f, -1424.748f, 29.72222f};
		vLocal_440[3 /*3*/] = {-12.47465f, -1422.485f, 29.74699f};
		vLocal_440[4 /*3*/] = {-14.26666f, -1424.855f, 29.71964f};
		vLocal_440[5 /*3*/] = {-14.55816f, -1423.048f, 29.78372f};
		vLocal_440[6 /*3*/] = {-16.13293f, -1424.489f, 29.76139f};
		vLocal_440[7 /*3*/] = {-16.25662f, -1423.325f, 29.81294f};
		func_161(&uLocal_120);
		func_160(&uLocal_120, -7.26821f, -1427.065f, 29.67468f);
		func_160(&uLocal_120, -7.39631f, -1418.851f, 29.5858f);
		func_160(&uLocal_120, -14.27201f, -1421.59f, 29.76819f);
		func_160(&uLocal_120, -22.85347f, -1423.173f, 29.74042f);
		func_160(&uLocal_120, -22.77974f, -1427.168f, 29.65953f);
		func_159(&uLocal_120);
	}
	iLocal_395 = func_131();
	func_156();
	if (func_43() == 2)
	{
		clear_area_of_objects(vLocal_419, 2f, 2);
		STREAMING::REQUEST_MODEL(joaat("prop_big_shit_02"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("prop_big_shit_02")))
		{
			wait(0);
		}
		iLocal_418 = create_object(joaat("prop_big_shit_02"), vLocal_419, 1, true, false);
		set_model_as_no_longer_needed(joaat("prop_big_shit_02"));
		iLocal_438 = 0;
	}
	else
	{
		iLocal_438 = 1;
	}
	iLocal_422 = 0;
	if (get_random_int_in_range(false, 2) == 0)
	{
		iLocal_407 = -1;
	}
	else
	{
		iLocal_407 = get_random_int_in_range(20000, 30000);
	}
	if (iLocal_393 == 1)
	{
		iLocal_51 = 7;
		iLocal_75 = 1;
	}
	else if (iLocal_394 == 1)
	{
		iLocal_51 = 2;
	}
	else if (iLocal_407 > -1)
	{
		iLocal_51 = 11;
		iLocal_75 = 0;
	}
	else
	{
		iLocal_51 = 1;
		iLocal_75 = 0;
	}
	iLocal_87 = add_navmesh_blocking_object(11.23f, 515.4f, 168f, 9f, 21f, 4f, func_155(113f), 0, 7);
	iLocal_88 = add_navmesh_blocking_object(24f, 528f, 168f, 5f, 5f, 4f, func_155(113f), 0, 7);
	vLocal_89[0 /*3*/] = {444.1685f, 5569.016f, 780.1895f};
	vLocal_89[1 /*3*/] = {443.8968f, 5574.931f, 780.1895f};
	vLocal_89[2 /*3*/] = {-739.1624f, 5596.784f, 40.6594f};
	vLocal_89[3 /*3*/] = {-738.8002f, 5593.269f, 40.6594f};
	fLocal_102[0] = 270f;
	fLocal_102[1] = 270f;
	fLocal_102[2] = 95f;
	fLocal_102[3] = 95f;
	func_97();
	iLocal_73 = 0;
	iLocal_408 = 0;
	iLocal_412 = GAMEPLAY::GET_GAME_TIMER();
	iVar0 = func_132();
	if (iVar0 > 4)
	{
		iVar0 = 4;
	}
	StringCopy(&Local_109, "CHOP_H_WAIT_", 32);
	StringIntConCat(&Local_109, iVar0, 32);
	if (_is_input_disabled(0))
	{
		StringConCat(&Local_109, "_KM", 32);
	}
	Global_25268 = 0;
	iLocal_50 = 1;
}

float func_155(float fParam0)
{
	return fParam0 * 0.01745329f;
}

void func_156()
{
	if (iLocal_393 == 1)
	{
		if (func_158())
		{
			set_entity_as_mission_entity(iLocal_69, true, 1);
			clear_ped_tasks(iLocal_69);
			func_152();
			while (func_146())
			{
				wait(0);
			}
		}
	}
	else if (iLocal_394 == 1)
	{
		if (func_125(PLAYER::PLAYER_PED_ID()))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_80 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				func_79();
				func_78();
				func_157(&iLocal_69, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 0, 1);
				if (func_125(iLocal_69))
				{
					set_blocking_of_non_temporary_events(iLocal_69, true);
					set_ped_allow_vehicles_override(iLocal_69, 1);
					set_ped_can_play_ambient_anims(iLocal_69, 0);
					set_ped_can_play_ambient_base_anims(iLocal_69, 0);
					func_100();
					set_entity_invincible(iLocal_69, true);
					set_ped_into_vehicle(iLocal_69, iLocal_80, false);
					iLocal_107 = 8;
					func_152();
					_0x2208438012482A1A(iLocal_69, 0, 0);
				}
				while (func_146())
				{
					if (func_125(iLocal_69) && !func_113(iLocal_69, -2017877118))
					{
						request_anim_dict(sLocal_477);
						if (has_anim_dict_loaded(sLocal_477))
						{
							task_play_anim(iLocal_69, sLocal_477, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
						}
					}
					wait(0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		func_157(&iLocal_69, vLocal_397, vLocal_397.f_3, 1);
	}
	if (func_125(iLocal_69))
	{
		add_relationship_group("rel_group_chop", &iLocal_71);
		iLocal_72 = 1;
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_71);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_71, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1157867945, iLocal_71);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_71, 1157867945);
		PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_69, iLocal_71);
		set_blocking_of_non_temporary_events(iLocal_69, true);
		set_ped_allow_vehicles_override(iLocal_69, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 185, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 26, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 32, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 29, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 116, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 118, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 132, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 268, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 107, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 281, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 137, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 146, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 157, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 45, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 167, true);
		set_ped_can_play_ambient_anims(iLocal_69, 0);
		set_ped_can_play_ambient_base_anims(iLocal_69, 0);
		give_weapon_to_ped(iLocal_69, joaat("weapon_animal"), true, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_69, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_69, 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_69, 46, true);
		set_ped_hearing_range(iLocal_69, 100f);
		set_ped_seeing_range(iLocal_69, 100f);
		set_ped_flee_attributes(iLocal_69, 512, true);
		set_ped_suffers_critical_hits(iLocal_69, 0);
		set_ped_max_health(iLocal_69, 800);
		set_entity_health(iLocal_69, 800);
		set_entity_lod_dist(iLocal_69, 200);
		if (!is_ped_in_any_vehicle(iLocal_69, 0))
		{
			func_57();
		}
		func_111(&uLocal_172, 3, iLocal_69, "CHOP", 0, 1);
		set_ped_can_be_targetted(iLocal_69, false);
		set_entity_is_target_priority(iLocal_69, 0, 0f);
		_0x061CB768363D6424(iLocal_69, 0);
		iLocal_74 = 0;
		Global_25265 = 0;
		iLocal_480 = 0;
		iLocal_481 = GAMEPLAY::GET_GAME_TIMER();
	}
}

bool func_157(int iParam0, Vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_162();
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			delete_ped(iParam0);
		}
		*iParam0 = PED::CREATE_PED(26, iVar0, vParam1, fParam4, 0, false);
		set_ped_component_variation(*iParam0, false, 0, 0, 0);
		set_ped_component_variation(*iParam0, true, 0, 0, 0);
		set_ped_component_variation(*iParam0, 2, 0, 0, 0);
		if (Global_101154.f_24643.f_263)
		{
			set_ped_component_variation(*iParam0, 3, 0, Global_101154.f_24643.f_254.f_4, 0);
		}
		else
		{
			set_ped_component_variation(*iParam0, 3, 0, 4, 0);
		}
		set_ped_component_variation(*iParam0, 4, 0, 0, 0);
		set_ped_component_variation(*iParam0, 5, 0, 0, 0);
		set_ped_component_variation(*iParam0, 6, 0, 0, 0);
		set_ped_component_variation(*iParam0, 7, 0, 0, 0);
		set_ped_component_variation(*iParam0, 8, 0, 0, 0);
		set_ped_component_variation(*iParam0, 9, 0, 0, 0);
		set_ped_component_variation(*iParam0, 10, 0, 0, 0);
		set_ped_component_variation(*iParam0, 11, 0, 0, 0);
		clear_all_ped_props(*iParam0);
		if (iParam5)
		{
			set_model_as_no_longer_needed(iVar0);
		}
		return true;
	}
	return false;
}

bool func_158()
{
	var[] uVar0 = new var[10];
	int iVar11;
	int iVar12;
	
	if (func_125(Global_91064) && is_ped_model(Global_91064, func_162()))
	{
		iLocal_69 = Global_91064;
		return true;
	}
	iVar11 = get_ped_nearby_peds(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if ((uVar0[iVar12] != 0 && func_125(uVar0[iVar12])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar12]) == func_162())
		{
			iLocal_69 = uVar0[iVar12];
			return true;
		}
		iVar12++;
	}
	return false;
}

void func_159(auto uParam0)
{
	int iVar0;
	float fVar1;
	
	if (*uParam0.f_51 == 0)
	{
	}
	if (*uParam0.f_46 < 3)
	{
	}
	iVar0 = false;
	while (iVar0 < *uParam0.f_46)
	{
		*uParam0.f_47 = {*uParam0.f_47 + *(uParam0[iVar0 /*3*/])};
		iVar0++;
	}
	*uParam0.f_47 = {*uParam0.f_47 / FtoV(to_float(iVar0))};
	iVar0 = false;
	while (iVar0 < *uParam0.f_46)
	{
		fVar1 = vdist2(*uParam0.f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > *uParam0.f_50)
		{
			*uParam0.f_50 = fVar1;
		}
		iVar0++;
	}
	*uParam0.f_50 = sqrt(*uParam0.f_50);
	*uParam0.f_51 = 0;
}

void func_160(auto uParam0, Vector3 vParam1)
{
	if (*uParam0.f_51 == 0)
	{
	}
	if (*uParam0.f_46 >= 15)
	{
	}
	*(uParam0[*uParam0.f_46 /*3*/]) = {vParam1};
	*uParam0.f_46++;
}

void func_161(auto uParam0)
{
	if (*uParam0.f_51)
	{
	}
	*uParam0.f_46 = 0;
	*uParam0.f_47 = {0f, 0f, 0f};
	*uParam0.f_50 = 0f;
	*uParam0.f_51 = 1;
}

int func_162()
{
	return joaat("a_c_chop");
}

bool func_163()
{
	float fVar0;
	Vector3 vVar1;
	float fVar4;
	
	if (iLocal_50 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
		{
			if (func_167(0) && Global_25125 == 0)
			{
				return true;
			}
			if (!func_170(1))
			{
				return true;
			}
			if (Global_101144 == 1)
			{
				return true;
			}
			if (((((((((((Global_69487 == 1 && Global_25125 == 0) && Global_2287 == 0) && Global_25371 == 0) && Global_25372 == 0) && Global_25373 == 0) && Global_52930 == 0) && !func_146()) && !func_16()) && Global_92778 == 0) && func_125(PLAYER::PLAYER_PED_ID())) && !func_165())
			{
				return true;
			}
			if (Global_88531 == 1)
			{
				return true;
			}
			if (is_entity_dead(iLocal_69, 0))
			{
				if (is_player_playing(player_id()) && has_entity_been_damaged_by_entity(iLocal_69, PLAYER::PLAYER_PED_ID(), 1))
				{
					Global_25265 = 1;
					if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, 9) && !is_player_switch_in_progress())
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), 9);
						func_15("CHOP_H_DEAD", -1);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, 12) && !is_player_switch_in_progress())
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), 12);
					func_15("CHOP_H_DEAD2", -1);
				}
				return true;
			}
			else
			{
				if (is_player_switch_in_progress())
				{
					func_164();
				}
				else
				{
					if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
					{
						fVar0 = 200f;
					}
					else
					{
						fVar0 = 100f;
					}
					if (func_4(PLAYER::PLAYER_PED_ID(), iLocal_69, 1) > fVar0)
					{
						if ((!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_94, 4) && is_player_playing(player_id())) && !is_player_switch_in_progress())
						{
							if (((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 11) || iLocal_51 == 4) || iLocal_51 == 3) || iLocal_51 == 13)
							{
							}
							else
							{
								GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_94), 4);
								func_15("CHOP_H_RANGE", -1);
							}
						}
						return true;
					}
				}
				if (!is_ped_in_any_vehicle(iLocal_69, 0) && get_entity_health(iLocal_69) > 0)
				{
					if (is_entity_in_water(iLocal_69))
					{
						vVar1 = {get_entity_coords(iLocal_69, 1)};
						if (get_water_height(vVar1, &fVar4))
						{
							if (fVar4 - vVar1.z > 0.1f)
							{
								set_entity_health(iLocal_69, false);
							}
						}
					}
					if (is_entity_on_fire(iLocal_69))
					{
						set_entity_health(iLocal_69, false);
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

void func_164()
{
	if (is_help_message_being_displayed())
	{
		if ((((((((((((((((((((((((((((((func_105("CHOP_H_INTRO") || func_105("CHOP_H_WAIT_0")) || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_HUNT")) || func_105("CHOP_H_NOVEH")) || func_105("CHOP_H_CAR")) || func_105("CHOP_H_BIKE")) || func_105("CHOP_H_ATTACK")) || func_105("CHOP_H_BALL")) || func_105("CHOP_H_WHIS")) || func_105("CHOP_H_NOAPP")) || func_105("CHOP_H_BEHAVE")) || func_105("CHOP_H_BEHAVA")) || func_105("CHOP_H_AIM"))
		{
			clear_help(1);
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (is_help_message_being_displayed())
		{
			if ((((((((((((((((((((func_105("CHOP_H_INTRO_KM") || func_105("CHOP_H_WAIT_0_KM")) || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				clear_help(1);
			}
		}
	}
}

auto func_165()
{
	return Global_88920;
}

int func_166()
{
	if (is_player_switch_in_progress())
	{
		return Global_89453;
	}
	if (func_146())
	{
		return Global_89453;
	}
	return 318;
}

bool func_167(int iParam0)
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

int func_170(int iParam0)
{
	func_171();
	return iParam0 == Global_101154.f_1826.f_539.f_3549;
}

void func_171()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_175(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_174(PLAYER::PLAYER_PED_ID());
			if (func_173(iVar0) && (!func_172(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_173(Global_101154.f_1826.f_539.f_3549))
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

int func_172(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_173(int iParam0)
{
	return iParam0 < 3;
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_175(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_175(int iParam0)
{
	if (func_173(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_176(Vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= 10 - 1)
	{
		if (Global_86649[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86649[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_177(iVar0) || iParam4 == 0)
				{
					fVar1 = get_distance_between_coords(vParam0, Global_86649[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_177(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[iParam0], false);
}

int func_178(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

void func_179()
{
	int iVar0;
	int iVar1;
	
	if (_get_number_of_instances_of_streamed_script(_get_this_script_hash()) > 1)
	{
	}
	else
	{
		Global_25266 = 0;
		func_147(0);
		if (is_gameplay_hint_active() && !iLocal_492)
		{
			stop_gameplay_hint(0);
		}
		func_67(&iLocal_70);
		if (func_178(63))
		{
			if (is_player_playing(player_id()))
			{
				if (func_178(126))
				{
					if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 19.3f, 528.24f, 169.63f, 1) > 50f)
					{
						func_61(139, 1, 0);
					}
				}
				else if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), -11.15f, -1425.56f, 29.67f, 1) > 50f)
				{
					func_61(138, 1, 0);
				}
			}
		}
		func_40(1);
		func_42(&iLocal_418, 0);
		func_42(&iLocal_423, 0);
		if (does_particle_fx_looped_exist(iLocal_79))
		{
			stop_particle_fx_looped(iLocal_79, 0);
		}
		remove_ptfx_asset();
		if (has_ped_got_weapon(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"), 0))
		{
			remove_weapon_from_ped(PLAYER::PLAYER_PED_ID(), joaat("weapon_ball"));
		}
		if (func_125(PLAYER::PLAYER_PED_ID()) && !func_172(0))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
		{
			if (func_186())
			{
				func_185(&iLocal_69);
			}
			else
			{
				if (!is_entity_dead(iLocal_69, 0) && func_125(PLAYER::PLAYER_PED_ID()))
				{
					if (is_ped_in_group(iLocal_69))
					{
						remove_ped_from_group(iLocal_69);
					}
					if (is_synchronized_scene_running(iLocal_108) || is_ped_in_any_vehicle(iLocal_69, 0))
					{
						if (func_125(iLocal_80))
						{
							iVar0 = false;
							while (!iVar0)
							{
								wait(0);
								if (!func_184() || func_183(iLocal_80, 1093140480, 1, 1056964608, 0, 1, 0))
								{
									iVar0 = true;
								}
							}
							if (func_184())
							{
								if (!is_vehicle_door_damaged(iLocal_80, iLocal_118))
								{
									set_vehicle_door_open(iLocal_80, iLocal_118, 0, 0);
								}
								request_anim_dict(sLocal_477);
								while (!has_anim_dict_loaded(sLocal_477))
								{
									wait(0);
								}
							}
							if (func_184())
							{
								iLocal_108 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
								attach_synchronized_scene_to_entity(iLocal_108, iLocal_80, get_entity_bone_index_by_name(iLocal_80, "seat_pside_f"));
								clear_ped_tasks_immediately(iLocal_69);
								task_synchronized_scene(iLocal_69, iLocal_108, sLocal_477, "get_out", 1000f, -8f, 10, 0, 1000f, 0);
								_0x2208438012482A1A(iLocal_69, 0, 0);
								iVar1 = false;
								while (!iVar1)
								{
									wait(0);
									if (!func_184() || (is_synchronized_scene_running(iLocal_108) && get_synchronized_scene_phase(iLocal_108) > 0.99f))
									{
										iVar1 = true;
									}
								}
								wait(0);
								if (func_184() && !is_vehicle_door_damaged(iLocal_80, iLocal_118))
								{
									set_vehicle_door_shut(iLocal_80, iLocal_118, 0);
								}
							}
						}
						else if (func_182() == 1)
						{
							if (iLocal_51 == 2 || iLocal_51 == 15)
							{
								clear_ped_tasks_immediately(iLocal_69);
								func_124(iLocal_69, get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), 1.75f, 0f, 0f), get_entity_heading(iLocal_69), 1, 1);
								_0x2208438012482A1A(iLocal_69, 0, 0);
							}
						}
					}
					if (func_125(iLocal_69))
					{
						set_ped_keep_task(iLocal_69, true);
						task_smart_flee_ped(iLocal_69, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					}
				}
				func_181(&iLocal_69, 1, 0, 1);
			}
		}
		func_56();
		func_55(&iLocal_80);
		func_98(0);
		remove_anim_dict("creatures@rottweiler@move");
		remove_anim_dict("creatures@rottweiler@amb@world_dog_barking@enter");
		remove_anim_dict("creatures@rottweiler@amb@world_dog_barking@base");
		remove_anim_dict("creatures@rottweiler@amb@world_dog_barking@idle_a");
		remove_anim_dict("creatures@rottweiler@amb@world_dog_barking@exit");
		remove_anim_dict("creatures@rottweiler@in_vehicle@4x4");
		remove_anim_dict("creatures@rottweiler@in_vehicle@low_car");
		remove_anim_dict("creatures@rottweiler@in_vehicle@std_car");
		remove_anim_dict("creatures@rottweiler@in_vehicle@van");
		remove_anim_dict("creatures@rottweiler@amb@world_dog_sitting@enter");
		remove_anim_dict("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		remove_anim_dict("creatures@rottweiler@amb@world_dog_sitting@exit");
		remove_anim_dict("creatures@rottweiler@tricks@");
		remove_anim_dict("creatures@rottweiler@amb@sleep_in_kennel@");
		remove_anim_dict("creatures@rottweiler@indication@");
		remove_anim_dict("misschop_vehicleenter_exit");
		remove_anim_dict("creatures@rottweiler@melee@streamed_taunts@");
		func_180(&uLocal_172, 1);
		func_180(&uLocal_172, 3);
		func_164();
		destroy_all_cams(0);
		if (iLocal_87 > -1)
		{
			remove_navmesh_blocking_object(iLocal_87);
		}
		if (iLocal_88 > -1)
		{
			remove_navmesh_blocking_object(iLocal_88);
		}
		if (iLocal_72 == 1)
		{
			remove_relationship_group(iLocal_71);
		}
		stop_sound(iLocal_490);
	}
	terminate_this_thread();
}

void func_180(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_181(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			set_entity_load_collision_flag(*iParam0, false);
			if (iParam3 == 0)
			{
				clear_ped_secondary_task(*iParam0);
			}
			set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				set_blocking_of_non_temporary_events(*iParam0, false);
			}
		}
		set_ped_as_no_longer_needed(iParam0);
	}
}

auto func_182()
{
	func_171();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_183(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
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
	if (!is_entity_dead(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_184()
{
	if ((func_125(PLAYER::PLAYER_PED_ID()) && func_125(iLocal_80)) && func_125(iLocal_69))
	{
		return true;
	}
	return false;
}

void func_185(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!is_entity_dead(*iParam0, 0))
		{
			set_entity_load_collision_flag(*iParam0, false);
		}
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, 0);
		}
		delete_ped(iParam0);
	}
}

bool func_186()
{
	if (is_player_switch_in_progress() && func_125(iLocal_69))
	{
		if (is_synchronized_scene_running(iLocal_108) || is_ped_in_any_vehicle(iLocal_69, 0))
		{
			return true;
		}
	}
	if (Global_25267 == 1)
	{
		return true;
	}
	if (Global_25268 == 1)
	{
		Global_25268 = 0;
		return true;
	}
	if (func_125(iLocal_69))
	{
		if (iLocal_51 == 11 && is_entity_occluded(iLocal_69))
		{
			return true;
		}
		if (func_187(get_entity_coords(iLocal_69, 0), 1f, 1120403456))
		{
			return false;
		}
	}
	if (!func_167(0))
	{
		return false;
	}
	if (func_172(6) || func_172(2))
	{
		return false;
	}
	return true;
}

bool func_187(Vector3 vParam0, float fParam1, float fParam2)
{
	if (is_sphere_visible(vParam0, fParam3))
	{
		if (!is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vParam0, fParam4, fParam4, fParam4, false, false, 0))
		{
			return false;
		}
		else if (is_screen_faded_out())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

