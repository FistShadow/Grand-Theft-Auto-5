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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int[] iLocal_54 = new int[2];
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int[] iLocal_61 = new int[2];
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	auto uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	Vector3 vLocal_78 = 0;
	Vector3[] vLocal_81 = new Vector3[2];
	Vector3 vLocal_88 = 0;
	Vector3 vLocal_91 = 0;
	Vector3 vLocal_94 = 0;
	Vector3 fLocal_97 = 0;
	float[] fLocal_98 = new float[2];
	Vector3 fLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	Vector3 vLocal_107 = 0;
	int iLocal_110 = 0;
	var[] uLocal_111 = new var[2];
	int iLocal_114 = 0;
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
	auto uLocal_127 = 0;
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
	Vector3 vLocal_139 = 0;
	Vector3 vLocal_142 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	auto uLocal_148 = 0;
	int iLocal_149 = 0;
	struct<6> Local_150 = 0;
	struct<6> Local_156 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	auto uLocal_178 = 16;
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
	int iLocal_343 = 0;
	struct<2> Local_344 = 0;
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
	auto uLocal_361 = 5;
	auto uLocal_362 = 0;
	auto uLocal_363 = 0;
	auto uLocal_364 = 0;
	auto uLocal_365 = 0;
	auto uLocal_366 = 0;
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
	iLocal_18 = 3;
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
	vLocal_107 = {154.92f, 6841.12f, 19.14f};
	iLocal_125 = 200;
	vLocal_139 = {-1161.199f, 934.5912f, 196.7591f};
	vLocal_142 = {-1034.6f, 4918.6f, 205.9f};
	StringCopy(&Local_150, "", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (is_ped_in_group(iLocal_53))
			{
				remove_ped_from_group(iLocal_53);
			}
		}
		func_206();
	}
	if (func_164(Local_344.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_161(-1);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(false);
		if (is_world_point_within_brain_activation_range() || iLocal_131)
		{
			if (!func_160())
			{
				if (func_159())
				{
					func_206();
				}
			}
			_0x208784099002BC30("RE_BU", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_147())
					{
						func_206();
					}
					if (!iLocal_66)
					{
						func_146();
					}
					else
					{
						func_145();
					}
					if (iLocal_52)
					{
						iLocal_162 = 1;
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					if (is_player_playing(player_id()))
					{
						func_144();
						switch (iLocal_49)
						{
							case 0:
								func_134();
								iLocal_49 = 1;
								break;
							
							case 1:
								if ((!func_127(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0) && !func_127(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0)) && !func_126())
								{
									switch (iLocal_50)
									{
										case 0:
											func_125();
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_78, 50f, 35f, 50f, false, true, 0))
											{
												func_124();
											}
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_78, 80f, 65f, 50f, false, true, 0))
											{
												func_123();
											}
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_58, 0))
											{
												if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_88 - Vector(0f, 0f, 7f), 20f, 15f, 50f, false, true, 0))
												{
													func_122();
													if (does_blip_exist(iLocal_114))
													{
														_0x75A16C3DA34F1245(iLocal_114, false);
													}
													iLocal_64 = 0;
													while (iLocal_64 <= 1)
													{
														if (does_blip_exist(uLocal_111[iLocal_64]))
														{
															_0x75A16C3DA34F1245(uLocal_111[iLocal_64], false);
														}
														iLocal_64++;
													}
													if (!func_160())
													{
														func_113(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_122();
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if ((func_127(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0) || func_127(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0)) || iLocal_129)
								{
									iLocal_129 = 1;
									if (!func_160())
									{
										func_113(1);
									}
									if (does_blip_exist(iLocal_114))
									{
										_0x75A16C3DA34F1245(iLocal_114, true);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (does_blip_exist(uLocal_111[iLocal_64]))
										{
											_0x75A16C3DA34F1245(uLocal_111[iLocal_64], true);
										}
										iLocal_64++;
									}
									switch (iLocal_128)
									{
										case 0:
											func_112();
											break;
										
										case 1:
											func_112();
											break;
										
										case 2:
											func_112();
											break;
										
										case 3:
											func_112();
											break;
										
										case 4:
											func_112();
											break;
										
										case 5:
											func_112();
											break;
										}
								}
								if (func_126())
								{
									iLocal_75 = 1;
									if (does_blip_exist(iLocal_114))
									{
										_0x75A16C3DA34F1245(iLocal_114, true);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (does_blip_exist(uLocal_111[iLocal_64]))
										{
											_0x75A16C3DA34F1245(uLocal_111[iLocal_64], true);
										}
										iLocal_64++;
									}
									if (!func_111())
									{
										switch (iLocal_51)
										{
											case 1:
												func_108();
												break;
											
											case 3:
												func_107();
												break;
											
											case 4:
												func_106();
												break;
											
											case 5:
												func_104();
												wait(false);
												if (!PED::IS_PED_INJURED(iLocal_54[0]))
												{
													func_102(iLocal_54[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!PED::IS_PED_INJURED(iLocal_54[1]))
												{
													func_102(iLocal_54[1], "GENERIC_WAR_CRY", 24);
												}
												func_112();
												break;
											
											case 6:
												func_104();
												wait(false);
												if (!PED::IS_PED_INJURED(iLocal_54[0]))
												{
													func_102(iLocal_54[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!PED::IS_PED_INJURED(iLocal_54[1]))
												{
													func_102(iLocal_54[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_112();
												break;
										}
									}
									else
									{
										func_104();
										wait(false);
										iVar0 = 0;
										while (iVar0 < iLocal_54)
										{
											if (!PED::IS_PED_INJURED(iLocal_54[iVar0]))
											{
												play_pain(iLocal_54[iVar0], 5, 0f, 0);
												AI::TASK_SMART_FLEE_PED(iLocal_54[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
												set_ped_keep_task(iLocal_54[iVar0], true);
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
												{
													if (is_entity_attached(iLocal_60))
													{
														detach_entity(iLocal_60, 1, true);
													}
												}
												if (does_blip_exist(uLocal_111[iVar0]))
												{
													remove_blip(&(uLocal_111[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_49 = 3;
									}
								}
								break;
							
							case 3:
								if (!iLocal_130)
								{
									func_101();
								}
								if (is_player_playing(player_id()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_107, 100f, 100f, 100f, true, true, 0))
								{
									set_wanted_level_multiplier(1f);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]))
									{
										set_ped_as_no_longer_needed(&(iLocal_54[0]));
										set_ped_as_no_longer_needed(&(iLocal_54[1]));
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_139, 200f, 200f, 200f, true, true, 0))
									{
										STREAMING::REQUEST_MODEL(joaat("s_m_m_highsec_01"));
										STREAMING::REQUEST_MODEL(joaat("granger"));
										if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_highsec_01")) && STREAMING::HAS_MODEL_LOADED(joaat("granger")))
										{
											iLocal_59 = create_vehicle(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, 1, true);
											set_entity_lod_dist(iLocal_59, 200);
											set_vehicle_lod_multiplier(iLocal_59, 1.5f);
											iLocal_57 = PED::CREATE_PED_inside_vehicle(iLocal_59, 26, joaat("s_m_m_highsec_01"), -1, 1, true);
											set_ped_component_variation(iLocal_57, false, false, 2, 0);
											set_ped_component_variation(iLocal_57, 3, false, false, 0);
											set_ped_component_variation(iLocal_57, 4, false, false, 0);
											give_weapon_to_ped(iLocal_57, joaat("weapon_pistol"), -1, true, true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_57, iLocal_177);
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_53))
								{
									if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (get_vehicle_max_number_of_passengers(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) < 1)
										{
											if (!iLocal_132)
											{
												func_81(0);
												func_104();
												wait(false);
												func_70(&uLocal_178, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_132 = 1;
											}
										}
									}
									else
									{
										iLocal_132 = 0;
									}
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_139, Global_22, true, true, 0) && is_entity_at_entity(iLocal_53, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (is_ped_in_group(iLocal_53))
										{
											if (does_blip_exist(iLocal_137))
											{
												remove_blip(&iLocal_137);
											}
											if (does_blip_exist(iLocal_138))
											{
												remove_blip(&iLocal_138);
											}
											if (func_69())
											{
												iLocal_49 = 5;
											}
											else
											{
												iLocal_49 = 6;
											}
										}
									}
									else
									{
										func_64();
										func_63();
										func_62();
										func_58();
										func_57();
										func_51();
										if (func_50(vLocal_139))
										{
											func_81(0);
											func_104();
											wait(false);
											func_70(&uLocal_178, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_49())
										{
											func_81(0);
											func_104();
											wait(false);
											func_70(&uLocal_178, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_47();
								}
								if (iLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 6:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_46();
								}
								if (iLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
								{
									if (is_entity_attached(iLocal_60))
									{
										if (!PED::IS_PED_INJURED(iLocal_54[0]))
										{
											if (is_entity_playing_anim(iLocal_54[0], "random@burial", "a_burial_stop", 3))
											{
												if (get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													detach_entity(iLocal_60, 1, true);
												}
											}
											else
											{
												detach_entity(iLocal_60, 1, true);
											}
										}
									}
								}
								if (PED::IS_PED_INJURED(iLocal_54[0]) || PED::IS_PED_INJURED(iLocal_54[1]))
								{
									iLocal_147 = true;
								}
								if (iLocal_147)
								{
									if (is_vehicle_driveable(iLocal_58, 0))
									{
										if (!PED::IS_PED_INJURED(iLocal_54[0]))
										{
											_0xF1C03A5352243A30(iLocal_54[0]);
											if (_0x639431E895B9AA57(iLocal_54[0], iLocal_58, -1, 0, false) || _0x639431E895B9AA57(iLocal_54[0], iLocal_58, 0, 0, false))
											{
												if (!iLocal_164)
												{
													AI::CLEAR_PED_TASKS(iLocal_54[0]);
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
													{
														if (is_entity_attached(iLocal_60))
														{
															detach_entity(iLocal_60, 1, true);
														}
													}
													open_sequence_task(&iLocal_65);
													task_clear_look_at(false);
													task_go_to_coord_while_aiming_at_entity(0, get_offset_from_entity_in_world_coords(iLocal_58, -0.5f, 0.5f, 0f), PLAYER::PLAYER_PED_ID(), 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
													task_enter_vehicle(false, iLocal_58, -1, -1, 3f, 9, 0);
													task_vehicle_mission_ped_target(false, iLocal_58, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
													close_sequence_task(iLocal_65);
													task_perform_sequence(iLocal_54[0], iLocal_65);
													clear_sequence_task(&iLocal_65);
													set_ped_keep_task(iLocal_54[0], true);
													_0x25367DE49D64CF16(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (AI::GET_SCRIPT_TASK_STATUS(iLocal_54[0], 242628503) == 1)
												{
													if (get_sequence_progress(iLocal_54[0]) == 3)
													{
														if (!is_entity_at_entity(iLocal_54[0], PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_54[0], vLocal_88, 10f, 10f, 10f, false, true, 0))
														{
															set_ped_as_no_longer_needed(&(iLocal_54[0]));
														}
													}
												}
											}
											else
											{
												task_combat_ped(iLocal_54[0], PLAYER::PLAYER_PED_ID(), 0, 16);
												set_ped_keep_task(iLocal_54[0], true);
											}
										}
										if (!PED::IS_PED_INJURED(iLocal_54[1]))
										{
											_0xF1C03A5352243A30(iLocal_54[1]);
											if (_0x639431E895B9AA57(iLocal_54[1], iLocal_58, -1, 0, false) || _0x639431E895B9AA57(iLocal_54[1], iLocal_58, 0, 0, false))
											{
												if (!iLocal_164)
												{
													AI::CLEAR_PED_TASKS(iLocal_54[1]);
													open_sequence_task(&iLocal_65);
													task_clear_look_at(false);
													task_go_to_coord_while_aiming_at_entity(0, get_offset_from_entity_in_world_coords(iLocal_58, -0.5f, 0.5f, 0f), PLAYER::PLAYER_PED_ID(), 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
													task_enter_vehicle(false, iLocal_58, -1, -1, 3f, 9, 0);
													task_vehicle_mission_ped_target(false, iLocal_58, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
													close_sequence_task(iLocal_65);
													task_perform_sequence(iLocal_54[1], iLocal_65);
													clear_sequence_task(&iLocal_65);
													set_ped_keep_task(iLocal_54[1], true);
													_0x25367DE49D64CF16(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (AI::GET_SCRIPT_TASK_STATUS(iLocal_54[1], 242628503) == 1)
												{
													if (get_sequence_progress(iLocal_54[1]) == 3)
													{
														if (!is_entity_at_entity(iLocal_54[1], PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_54[1], vLocal_88, 10f, 10f, 10f, false, true, 0))
														{
															set_ped_as_no_longer_needed(&(iLocal_54[1]));
														}
													}
												}
											}
											else
											{
												task_combat_ped(iLocal_54[1], PLAYER::PLAYER_PED_ID(), 0, 16);
												set_ped_keep_task(iLocal_54[1], true);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_49 != 9)
						{
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, vLocal_142, 5f, 5f, 5f, false, true, 0))
								{
									func_8(0);
									wait(false);
									func_104();
									iLocal_49 = 9;
								}
							}
						}
						if (func_6())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
							{
								PED::DELETE_PED(&iLocal_53);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_49 != 3)
						{
							if (func_1())
							{
								trigger_music_event("RE6_BOTH_DEAD");
								if (!iLocal_74)
								{
									settimera(false);
									iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + 8500;
									iLocal_74 = 1;
								}
								if (!PED::IS_PED_INJURED(iLocal_53))
								{
									if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_53, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_49 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_49 == 1 || iLocal_49 == 2) || iLocal_49 == 3) || iLocal_49 == 7)
						{
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								if (!iLocal_130)
								{
									if (AI::GET_SCRIPT_TASK_STATUS(iLocal_53, 1785177548) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_53, 1785177548) != 0)
									{
										AI::CLEAR_PED_TASKS_immediately(iLocal_53);
										iLocal_343 = create_synchronized_scene(vLocal_78, -2f, -4f, 18f, 2);
										task_synchronized_scene(iLocal_53, iLocal_343, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1000f, 0);
										play_synchronized_entity_anim(iLocal_61[0], iLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1000f);
										play_synchronized_entity_anim(iLocal_61[1], iLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1000f);
										set_synchronized_scene_looped(iLocal_343, true);
										set_ped_keep_task(iLocal_53, true);
									}
									if (is_entity_on_fire(iLocal_53))
									{
										set_enable_handcuffs(iLocal_53, 1);
										set_enable_bound_ankles(iLocal_53, 1);
										ENTITY::SET_ENTITY_HEALTH(iLocal_53, false);
									}
								}
								if ((has_entity_been_damaged_by_any_object(iLocal_53) || has_entity_been_damaged_by_any_vehicle(iLocal_53)) || iLocal_125 - get_entity_health(iLocal_53) >= 50)
								{
									set_enable_handcuffs(iLocal_53, 1);
									set_enable_bound_ankles(iLocal_53, 1);
									ENTITY::SET_ENTITY_HEALTH(iLocal_53, false);
								}
								if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
								{
									if (get_entity_speed(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) < 5f)
									{
									}
									else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), iLocal_53))
									{
										set_enable_handcuffs(iLocal_53, 1);
										set_enable_bound_ankles(iLocal_53, 1);
										ENTITY::SET_ENTITY_HEALTH(iLocal_53, false);
									}
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_58, 0))
								{
									if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_58, iLocal_53))
									{
										set_enable_handcuffs(iLocal_53, 1);
										set_enable_bound_ankles(iLocal_53, 1);
										ENTITY::SET_ENTITY_HEALTH(iLocal_53, false);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_206();
		}
	}
}

bool func_1()
{
	if (!iLocal_130)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]))
		{
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_54[0]) && PED::IS_PED_INJURED(iLocal_54[1]))
			{
				return true;
			}
			if (is_ped_hurt(iLocal_54[0]) && is_ped_hurt(iLocal_54[1]))
			{
				return true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_54[0]))
			{
				return true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_54[1]))
			{
				return true;
			}
		}
	}
	return false;
}

void func_2()
{
	if (PED::IS_PED_INJURED(iLocal_54[0]))
	{
		if (does_blip_exist(uLocal_111[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
			{
				if (is_entity_attached(iLocal_60))
				{
					detach_entity(iLocal_60, 1, true);
				}
			}
			func_3(&uLocal_178, 4);
			remove_blip(&(uLocal_111[0]));
		}
	}
	if (PED::IS_PED_INJURED(iLocal_54[1]))
	{
		if (does_blip_exist(uLocal_111[1]))
		{
			func_3(&uLocal_178, 3);
			remove_blip(&(uLocal_111[1]));
		}
	}
	if (PED::IS_PED_INJURED(iLocal_53))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, 0))
		{
		}
		if (does_blip_exist(iLocal_114))
		{
			func_3(&uLocal_178, 5);
			remove_blip(&iLocal_114);
		}
	}
}

void func_3(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_4()
{
	trigger_music_event("RE6_END");
	func_206();
}

bool func_5()
{
	if (PED::IS_PED_INJURED(iLocal_53))
	{
		return true;
	}
	return false;
}

bool func_6()
{
	if (Global_25355)
	{
		func_7(4);
		return true;
	}
	return false;
}

void func_7(int iParam0)
{
	Global_101140 = iParam0;
}

void func_8(int iParam0)
{
	Global_16723 = iParam0;
}

bool func_9()
{
	if (Global_101154.f_29520.f_5 == 1000)
	{
		return true;
	}
	return false;
}

auto func_10()
{
	return Global_25354;
}

void func_11()
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (!PED::IS_PED_INJURED(iLocal_54[0]) || !PED::IS_PED_INJURED(iLocal_54[1]))
		{
			if (!func_12())
			{
				switch (iLocal_168)
				{
					case 0:
						if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(3500, 5000);
								iLocal_168++;
							}
						}
						break;
					
					case 1:
						if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(3500, 5000);
								iLocal_168++;
							}
						}
						break;
					
					case 2:
						if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(3500, 5000);
								iLocal_168++;
							}
						}
						break;
					
					case 3:
						if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(3500, 5000);
								iLocal_168 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

bool func_12()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_13()
{
	while (!func_45())
	{
		wait(false);
	}
	if (!func_6())
	{
		if (func_44() == 0)
		{
			func_41(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 1)
		{
			func_41(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 2)
		{
			func_41(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	special_ability_fill_meter(player_id(), 1);
	func_17(-1, 0);
	func_14();
	func_206();
}

void func_14()
{
	func_15();
}

bool func_15()
{
	if (func_16(0))
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

int func_16(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_38(iParam0))
	{
		func_37(iParam0, iParam1);
		if (!func_36(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_7(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, auto uParam1, auto uParam2)
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
		func_22(891 + iParam0, 1, -1, 1);
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
		func_19();
	}
}

void func_19()
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
		func_21(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_20() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_15();
				}
			}
		}
	}
}

auto func_20()
{
	return Global_25120;
}

int func_21(int iParam0, int iParam1)
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

int func_22(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_23();
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

auto func_23()
{
	return Global_1312747;
}

int func_24(int iParam0, int iParam1)
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

bool func_25(int iParam0)
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

void func_26(int iParam0)
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_29();
	}
}

void func_29()
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

int func_30()
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

void func_31()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER::PLAYER_PED_ID());
			if (func_33(iVar0) && (!func_32(14) || Global_100106))
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

int func_32(int iParam0)
{
	return Global_35711 == iParam0;
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

int func_36(int iParam0)
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

void func_37(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_38(int iParam0)
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

auto func_39()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_40(cVar0);
	return uVar16;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_16(0))
	{
		return false;
	}
	if (iParam5 < 0)
	{
		return false;
	}
	if (iParam6 < 0)
	{
		return false;
	}
	if (iParam8 == 76)
	{
		return false;
	}
	if (iParam9 == 235)
	{
		return false;
	}
	if (iParam3 < 3)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam2, iParam3))
		{
			return false;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return false;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return false;
	}
	if (Global_101154.f_6378.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_101154.f_6378.f_911 == Var0)
		{
			Global_101154.f_6378.f_911 = -1;
		}
		Var0.f_3 = func_43(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = GAMEPLAY::GET_GAME_TIMER() + iParam5;
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		GAMEPLAY::CLEAR_BIT(&(Var0.f_1), true);
		GAMEPLAY::CLEAR_BIT(&(Var0.f_1), false);
		if (iParam7 != -1)
		{
			GAMEPLAY::SET_BIT(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			GAMEPLAY::SET_BIT(&(Var0.f_1), 10);
		}
		Global_101154.f_6378[Global_101154.f_6378.f_136 /*15*/] = {Var0};
		Global_101154.f_6378.f_136++;
		iVar15 = false;
		while (iVar15 < 3)
		{
			if (GAMEPLAY::IS_BIT_SET(iParam2, iVar15))
			{
				func_42(iVar15);
			}
			iVar15++;
		}
		return true;
	}
	return false;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_6378[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_101154.f_6378[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_101154.f_6378[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101154.f_6378.f_764)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_6378.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_101154.f_6378.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101154.f_6378.f_919[iParam0] = iVar1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

auto func_44()
{
	func_31();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_45()
{
	return true;
}

void func_46()
{
	switch (iLocal_136)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_53) && is_vehicle_driveable(iLocal_59, 0))
			{
				if (is_ped_in_group(iLocal_53))
				{
					remove_ped_from_group(iLocal_53);
				}
				set_blocking_of_non_temporary_events(iLocal_53, false);
				set_ped_can_be_targetted(iLocal_53, true);
				open_sequence_task(&iLocal_65);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
				task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
				task_enter_vehicle(false, iLocal_59, -1, false, 1f, 1, 0);
				close_sequence_task(iLocal_65);
				task_perform_sequence(iLocal_53, iLocal_65);
				clear_sequence_task(&iLocal_65);
				set_ped_keep_task(iLocal_53, true);
				func_104();
				wait(false);
				func_70(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_136++;
			break;
		
		case 1:
			if (is_vehicle_driveable(iLocal_59, 0))
			{
				if (is_ped_in_vehicle(iLocal_53, iLocal_59, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_57))
					{
						task_vehicle_drive_wander(iLocal_57, iLocal_58, 10f, 786599);
						set_ped_keep_task(iLocal_57, true);
					}
					_0x25367DE49D64CF16(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 2:
			iLocal_136++;
			break;
		
		case 3:
			iLocal_136++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_136++;
			}
			break;
		
		case 5:
			settimera(false);
			func_13();
			break;
	}
}

void func_47()
{
	switch (iLocal_136)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_177, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_177);
			if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
			{
				_task_bring_vehicle_to_halt(get_players_last_vehicle(), 5f, 2, 0);
				if (!PED::IS_PED_INJURED(iLocal_53) && is_vehicle_driveable(iLocal_59, 0))
				{
					if (is_ped_in_group(iLocal_53))
					{
						remove_ped_from_group(iLocal_53);
					}
					set_blocking_of_non_temporary_events(iLocal_53, false);
					set_ped_can_be_targetted(iLocal_53, true);
					open_sequence_task(&iLocal_65);
					task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
					task_enter_vehicle(false, iLocal_59, -1, false, 1f, 1, 0);
					close_sequence_task(iLocal_65);
					task_perform_sequence(iLocal_53, iLocal_65);
					clear_sequence_task(&iLocal_65);
					set_ped_keep_task(iLocal_53, true);
					func_104();
					wait(false);
					func_70(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			wait(2700);
			set_player_control(player_id(), true, 0);
			iLocal_136++;
			break;
		
		case 1:
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
				{
					if (!is_vehicle_door_damaged(get_players_last_vehicle(), true))
					{
						if (get_vehicle_door_angle_ratio(get_players_last_vehicle(), true) > 0.1f)
						{
							if (func_44() == 0)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_44() == 1)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_44() == 2)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_136++;
			break;
		
		case 2:
			if (is_vehicle_driveable(iLocal_59, 0))
			{
				if (is_ped_in_vehicle(iLocal_53, iLocal_59, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_57))
					{
						task_vehicle_drive_wander(iLocal_57, iLocal_59, 10f, 786599);
						set_ped_keep_task(iLocal_57, true);
					}
					_0x25367DE49D64CF16(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				iLocal_124 = true;
			}
			break;
	}
}

bool func_48(int iParam0, int iParam1, int iParam2)
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

bool func_49()
{
	if (func_44() == 2)
	{
		if (func_10())
		{
			if (get_distance_between_coords(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(get_player_ped(get_player_index()), 0), 1) < 400f)
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

bool func_50(Vector3 vParam0)
{
	if (func_44() == 2)
	{
		if (func_10() && !Global_25357)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vParam0);
			}
			if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vParam0) > fLocal_47 + 200f || get_distance_between_coords(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(get_player_ped(get_player_index()), 0), 1) < 400f)
			{
				Global_25357 = 1;
				return true;
			}
		}
	}
	return false;
}

void func_51()
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if ((((((func_55("REBU2_LV2_2") || func_55("REBU2_LV2_3")) || func_55("REBU2_LV2_4")) || func_55("REBU2_LV2_5")) || func_55("REBU2_LV2_6")) || func_55("REBU2_LV2_7")) || func_55("REBU2_LV2_8"))
		{
			task_use_mobile_phone(iLocal_53, 1, 1);
			task_clear_look_at(iLocal_53);
		}
		if (func_55("REBU2_LV2_9") || iLocal_72 > 1)
		{
			task_use_mobile_phone(iLocal_53, 0, 1);
		}
	}
	if (func_69() && !func_12())
	{
		if (!func_52())
		{
			func_81(1);
		}
		switch (iLocal_72)
		{
			case 0:
				func_70(&uLocal_178, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 1:
				iLocal_73 = GAMEPLAY::GET_GAME_TIMER() + 1500;
				iLocal_72++;
				break;
			
			case 2:
				if (iLocal_73 < GAMEPLAY::GET_GAME_TIMER())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 3:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 4:
				iLocal_73 = GAMEPLAY::GET_GAME_TIMER() + 500;
				iLocal_72++;
				break;
			
			case 5:
				if (iLocal_73 < GAMEPLAY::GET_GAME_TIMER())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 6:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 7:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 8:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 9:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 10:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 11:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 12:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 13:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 14:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 15:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 16:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 17:
				iLocal_73 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				iLocal_72++;
				break;
			
			case 18:
				if (iLocal_73 < GAMEPLAY::GET_GAME_TIMER())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 19:
				iLocal_73 = GAMEPLAY::GET_GAME_TIMER() + 2500;
				iLocal_72++;
				break;
			
			case 20:
				if (iLocal_73 < GAMEPLAY::GET_GAME_TIMER())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_44() == 1)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_44() == 2)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_72++;
				}
				break;
			}
	}
}

bool func_52()
{
	if (((((((((func_53("REBU2_WV") || func_53("REBU2_UNS1")) || func_53("REBU2_UNS2")) || func_53("REBU2_CULT")) || func_53("REBU2_NEAR")) || func_53("REBU2_WRONG")) || func_53("REBU2_STOP")) || func_53("REBU2_GETOUT")) || func_53("REBU2_JACK")) || func_53("REBU2_SHOOT"))
	{
		return true;
	}
	return false;
}

bool func_53(char* sParam0)
{
	auto uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_54()}, 4);
		if (are_strings_equal(sParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

struct<6> func_54()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

bool func_55(char* sParam0)
{
	auto uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_56()}, 4);
		if (are_strings_equal(sParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

struct<6> func_56()
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

void func_57()
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (!iLocal_133)
		{
			if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
			{
				if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), get_players_last_vehicle(), 1) && is_ped_in_vehicle(iLocal_53, get_players_last_vehicle(), 0))
				{
					if (!func_53("REBU2_LV2"))
					{
						func_81(0);
						func_104();
						wait(false);
						func_70(&uLocal_178, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_133 = 1;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
		{
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), get_players_last_vehicle(), 0) && is_ped_in_vehicle(iLocal_53, get_players_last_vehicle(), 0))
			{
				iLocal_133 = 0;
			}
		}
		if (!iLocal_134)
		{
			if (is_ped_jacking(PLAYER::PLAYER_PED_ID()))
			{
				func_81(0);
				func_104();
				wait(false);
				func_70(&uLocal_178, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_134 = 1;
			}
		}
		else if (!is_ped_jacking(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_134 = 0;
		}
		if (!iLocal_135)
		{
			if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
			{
				func_81(0);
				func_104();
				wait(false);
				func_70(&uLocal_178, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_135 = 1;
			}
		}
		else if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_135 = 0;
		}
	}
}

void func_58()
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_61())
			{
				if (is_ped_in_group(iLocal_53))
				{
					remove_ped_from_group(iLocal_53);
				}
				if (AI::GET_SCRIPT_TASK_STATUS(iLocal_53, 1227113341) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_53, 1227113341) != 0)
				{
					task_go_to_entity(iLocal_53, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (is_ped_in_any_vehicle(iLocal_53, 0))
				{
					task_leave_any_vehicle(iLocal_53, false, 4194304);
				}
				if (!iLocal_132)
				{
					func_81(0);
					func_104();
					wait(false);
					iLocal_132 = 1;
					if (!func_60())
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_132 = 0;
				if (((AI::GET_SCRIPT_TASK_STATUS(iLocal_53, 1227113341) == 1 || AI::GET_SCRIPT_TASK_STATUS(iLocal_53, 1227113341) == 0) || AI::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 1) || AI::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 0)
				{
					AI::CLEAR_PED_TASKS(iLocal_53);
				}
			}
		}
		else if (((!is_ped_in_group(iLocal_53) && !is_ped_in_any_vehicle(iLocal_53, 0)) && AI::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) != 1) && AI::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) != 0)
		{
			set_ped_as_group_member(iLocal_53, func_59());
			set_ped_never_leaves_group(iLocal_53, 1);
			set_ped_group_member_passenger_index(iLocal_53, false);
		}
	}
}

int func_59()
{
	return get_player_group(get_player_index());
}

bool func_60()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (is_vehicle_driveable(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), 1))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1))) || is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1)))) || is_this_model_a_quadbike(ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1))))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_61()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (((((!is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()) && !is_ped_in_any_plane(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_boat(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_sub(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_train(PLAYER::PLAYER_PED_ID())) && !is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (get_vehicle_max_number_of_passengers(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) >= 1)
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
			if ((((!is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID()))) && !is_this_model_a_plane(ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())))) && !is_this_model_a_boat(ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())))) && !is_this_model_a_train(ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_62()
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (is_ped_on_foot(iLocal_53))
		{
			if (!iLocal_170)
			{
				iLocal_171 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_170 = 1;
			}
			else
			{
				iLocal_172 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_170 = 0;
		}
	}
	if (iLocal_172 - iLocal_171 > 180000)
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (is_ped_in_group(iLocal_53))
			{
				remove_ped_from_group(iLocal_53);
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, vLocal_139, 100f, 100f, 100f, false, true, 0))
				{
					task_follow_nav_mesh_to_coord(iLocal_53, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 0.25f, 0, 1193033728);
					set_ped_keep_task(iLocal_53, true);
				}
				func_104();
				wait(false);
				func_70(&uLocal_178, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_63()
{
	if (is_ped_stopped(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_173)
		{
			iLocal_174 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_173 = 1;
		}
		else
		{
			iLocal_175 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_173 = 0;
	}
	if (iLocal_175 - iLocal_174 > 120000)
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (is_ped_in_group(iLocal_53))
			{
				remove_ped_from_group(iLocal_53);
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, vLocal_139, 100f, 100f, 100f, false, true, 0))
				{
					task_follow_nav_mesh_to_coord(iLocal_53, vLocal_139, 1f, -1, 0.25f, 0, 1193033728);
					set_ped_keep_task(iLocal_53, true);
				}
				else
				{
					task_leave_any_vehicle(iLocal_53, false, 4194304);
				}
				func_104();
				wait(false);
				func_70(&uLocal_178, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_53, 8f, 8f, 8f, 0, 1, 0) || is_ped_in_any_taxi(PLAYER::PLAYER_PED_ID()))
		{
			if ((is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_in_vehicle(iLocal_53, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0)) && !is_ped_in_any_taxi(PLAYER::PLAYER_PED_ID()))
			{
				if (!does_blip_exist(iLocal_114))
				{
					iLocal_114 = func_67(iLocal_53, 0, 145);
				}
				if (does_blip_exist(iLocal_137))
				{
					remove_blip(&iLocal_137);
				}
			}
			else
			{
				if (!is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
				{
					if (does_blip_exist(iLocal_114))
					{
						remove_blip(&iLocal_114);
					}
				}
				if (!does_blip_exist(iLocal_137))
				{
					iLocal_137 = func_65(vLocal_139, 1);
				}
			}
		}
		else if (!does_blip_exist(iLocal_114))
		{
			iLocal_114 = func_67(iLocal_53, 0, 145);
		}
		if (!is_ped_in_group(iLocal_53))
		{
			if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_53, 8f, 8f, 8f, 0, 1, 0))
			{
				AI::CLEAR_PED_TASKS(iLocal_53);
				set_ped_as_group_member(iLocal_53, func_59());
				set_ped_never_leaves_group(iLocal_53, 1);
				set_ped_group_member_passenger_index(iLocal_53, false);
			}
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				AI::CLEAR_PED_TASKS(iLocal_53);
				set_ped_as_group_member(iLocal_53, func_59());
				set_ped_never_leaves_group(iLocal_53, 1);
				set_ped_group_member_passenger_index(iLocal_53, false);
			}
		}
		if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_53, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

int func_65(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_66(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_66(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_68(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_66(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_66(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_66(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_69()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_169 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (is_vehicle_driveable(iLocal_169, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				if (is_ped_sitting_in_vehicle(iLocal_53, iLocal_169))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_70(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_71(sParam2, iParam3, 0);
}

bool func_71(char* sParam0, int iParam1, int iParam2)
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
					func_79();
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
		if (func_78(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_77();
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
				func_76();
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
				if (func_75())
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
			if (func_74())
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
			func_73();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_72();
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
		func_79();
	}
	return false;
}

void func_72()
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

void func_73()
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

bool func_74()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_75()
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

void func_76()
{
	if (func_32(14))
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
		Global_14413 = func_44();
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

void func_77()
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

int func_78(int iParam0, int iParam1)
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

void func_79()
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

void func_80(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_81(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_149)
		{
			if (!is_string_null_or_empty(&Local_156))
			{
				if (func_84(&uLocal_178, "REBU2AU", &Local_156, &Local_150, 8, 0, 0))
				{
					iLocal_149 = 0;
				}
			}
			else
			{
				iLocal_149 = 0;
			}
		}
	}
	else if ((!iLocal_149 && func_12()) && !func_52())
	{
		Local_156 = {func_54()};
		Local_150 = {func_56()};
		func_82();
		iLocal_149 = 1;
	}
}

void func_82()
{
	Global_14578 = 0;
	func_83();
}

void func_83()
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

int func_84(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_71(sParam2, iParam4, 0);
}

void func_85()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			set_ped_reset_flag(iLocal_53, 394, true);
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				AI::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				set_ped_keep_task(iLocal_53, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_177, 1862763509);
				task_combat_ped(iLocal_57, PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_57, true);
			}
			func_104();
			wait(false);
			func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_53))
				{
					AI::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					set_ped_keep_task(iLocal_53, true);
				}
				if (!PED::IS_PED_INJURED(iLocal_57))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_177, 1862763509);
					task_combat_ped(iLocal_57, PLAYER::PLAYER_PED_ID(), 0, 16);
					set_ped_keep_task(iLocal_57, true);
				}
				func_104();
				wait(false);
				func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_51 = 4;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (get_player_wanted_level(player_id()) > 1)
		{
			AI::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			set_ped_keep_task(iLocal_53, true);
			func_104();
			wait(false);
			func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
	}
}

void func_86()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if ((is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_53, 1.2f, 1.2f, 5f, 0, 1, 0) && is_ped_on_foot(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_48(1, 0, 1))
			{
				iLocal_130 = true;
				if (!iLocal_115)
				{
					func_93(1, 1, 1, 0);
					set_player_control(player_id(), false, 24);
					clear_help(1);
					display_hud(false);
					display_radar(false);
					hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), true);
					if (ENTITY::DOES_ENTITY_EXIST(get_players_last_vehicle()))
					{
						set_entity_as_mission_entity(get_players_last_vehicle(), true, 0);
						if (is_entity_on_fire(get_players_last_vehicle()))
						{
							func_92(get_players_last_vehicle());
							set_vehicle_engine_health(get_players_last_vehicle(), 200f);
						}
						if (is_entity_at_entity(get_players_last_vehicle(), iLocal_53, 5f, 5f, 5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(get_players_last_vehicle(), vLocal_88, 5f, 5f, 5f, false, true, 0))
						{
							set_entity_coords(get_players_last_vehicle(), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1) - Vector(0f, 3f, 5f), 0, false, 0, 1);
							if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
							{
								set_vehicle_on_ground_properly(get_players_last_vehicle());
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
					{
						if (is_entity_on_fire(iLocal_58))
						{
							func_92(iLocal_58);
							set_vehicle_engine_health(iLocal_58, 200f);
						}
						if (is_entity_at_entity(iLocal_58, iLocal_53, 8f, 8f, 8f, 0, 1, 0))
						{
							set_entity_coords(iLocal_58, vLocal_88, 0, false, 0, 1);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_58, 0))
							{
								set_vehicle_on_ground_properly(iLocal_58);
							}
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						iLocal_169 = get_closest_vehicle(ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), 5f, false, 2);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_169, 0))
						{
							if (is_entity_on_fire(iLocal_169))
							{
								func_92(iLocal_169);
								set_vehicle_engine_health(iLocal_169, 200f);
							}
							set_entity_coords(iLocal_169, ENTITY::GET_ENTITY_COORDS(iLocal_53, 1) + Vector(0f, 5f, 5f), 1, false, 0, 1);
						}
					}
					stop_fire_in_range(vLocal_78, 10f);
					clear_area_of_projectiles(vLocal_78, 10f, 0);
					clear_area_of_vehicles(vLocal_78, 4.5f, 0, 0, 0, 0, false);
					set_entity_coords(iLocal_53, vLocal_78, 1, false, 0, 1);
					set_entity_coords(PLAYER::PLAYER_PED_ID(), vLocal_78, 1, false, 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_54)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[iVar0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_54[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_53, 0), 1.5f, 1.5f, 1.5f, false, true, 0))
							{
								PED::DELETE_PED(&(iLocal_54[iVar0]));
							}
						}
						iVar0++;
					}
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						iLocal_343 = create_synchronized_scene(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						iLocal_77 = create_cam("DEFAULT_ANIMATED_CAMERA", false);
						play_synchronized_cam_anim(iLocal_77, iLocal_343, "untie_cam", "random@burial");
						AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
						set_entity_coords(PLAYER::PLAYER_PED_ID(), 162.6699f, 6839.238f, 18.8314f, 0, false, 0, 1);
						set_entity_heading(PLAYER::PLAYER_PED_ID(), 18.2311f);
						ENTITY::SET_ENTITY_HEALTH(iLocal_53, 200);
						set_enable_handcuffs(iLocal_53, 0);
						set_enable_bound_ankles(iLocal_53, 0);
						AI::CLEAR_PED_TASKS_immediately(iLocal_53);
						task_synchronized_scene(iLocal_53, iLocal_343, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1000f, 0);
						_0x2208438012482A1A(iLocal_53, 0, 0);
						task_synchronized_scene(PLAYER::PLAYER_PED_ID(), iLocal_343, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1000f, 0);
						_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						play_synchronized_entity_anim(iLocal_61[0], iLocal_343, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1000f);
						play_synchronized_entity_anim(iLocal_61[1], iLocal_343, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1000f);
						set_cam_active(iLocal_77, true);
						render_script_cams(true, false, 3000, 1, 0, 0);
						iLocal_120 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_115 = 1;
					}
				}
			}
		}
	}
	if (iLocal_115 && !iLocal_117)
	{
		hide_hud_and_radar_this_frame();
		if (is_synchronized_scene_running(iLocal_343))
		{
			if ((get_synchronized_scene_phase(iLocal_343) > 0.115f && get_synchronized_scene_phase(iLocal_343) < 0.12f) || (get_synchronized_scene_phase(iLocal_343) > 0.355f && get_synchronized_scene_phase(iLocal_343) < 0.36f))
			{
				play_sound_frontend(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 1);
			}
			if (get_synchronized_scene_phase(iLocal_343) > 0.6f)
			{
				if (!iLocal_116)
				{
					func_104();
					wait(false);
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_116 = 1;
					}
				}
			}
		}
		iLocal_119 = GAMEPLAY::GET_GAME_TIMER();
		if ((iLocal_119 - iLocal_120 > 9700 && !iLocal_123) && get_follow_ped_cam_view_mode() == 4)
		{
			_start_screen_effect("CamPushInNeutral", false, 0);
			play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_123 = 1;
		}
		if (iLocal_119 - iLocal_120 > 10000)
		{
			iLocal_117 = 1;
		}
		if (func_90(1000))
		{
			func_104();
			do_screen_fade_out(800);
			while (is_screen_fading_out())
			{
				wait(false);
			}
			iLocal_117 = 1;
			iLocal_118 = true;
		}
	}
	if (iLocal_117 && !iLocal_122)
	{
		display_hud(true);
		display_radar(true);
		set_synchronized_scene_phase(iLocal_343, 1f);
		AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
		_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
		set_entity_coords(PLAYER::PLAYER_PED_ID(), 162.5284f, 6839.658f, 18.8198f, 1, false, 0, 1);
		set_entity_heading(PLAYER::PLAYER_PED_ID(), 256.7693f);
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			AI::CLEAR_PED_TASKS_immediately(iLocal_53);
			_0x2208438012482A1A(iLocal_53, 0, 0);
			set_ped_can_ragdoll(iLocal_53, 1);
			set_entity_coords(iLocal_53, 164.4963f, 6839.333f, 18.9657f, 1, false, 0, 1);
			set_entity_heading(iLocal_53, 73.449f);
		}
		set_gameplay_cam_relative_heading(26.1578f);
		set_gameplay_cam_relative_pitch(-8.1198f, 1f);
		set_cam_active(iLocal_77, false);
		render_script_cams(false, false, 3000, 1, 0, 0);
		destroy_cam(iLocal_77, 0);
		hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), false);
		if (iLocal_118)
		{
			do_screen_fade_in(800);
			while (is_screen_fading_in())
			{
				wait(false);
			}
		}
		iLocal_122 = true;
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (iLocal_122)
		{
			if (!iLocal_121)
			{
				if (!func_12())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_44() == 1)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_44() == 2)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_177, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_177);
					open_sequence_task(&iLocal_65);
					task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 4000);
					if (is_vehicle_driveable(get_players_last_vehicle(), 0))
					{
						if (is_entity_at_entity(iLocal_53, get_players_last_vehicle(), 20f, 20f, 20f, 0, 1, 0) && get_vehicle_max_number_of_passengers(get_players_last_vehicle()) > 0)
						{
							task_enter_vehicle(false, get_players_last_vehicle(), -1, false, 1f, 1, 0);
						}
						else if (!is_ped_in_group(iLocal_53))
						{
							set_ped_as_group_member(iLocal_53, func_59());
							set_ped_never_leaves_group(iLocal_53, 1);
							set_ped_group_member_passenger_index(iLocal_53, false);
						}
					}
					else if (!is_ped_in_group(iLocal_53))
					{
						set_ped_as_group_member(iLocal_53, func_59());
						set_ped_never_leaves_group(iLocal_53, 1);
						set_ped_group_member_passenger_index(iLocal_53, false);
					}
					close_sequence_task(iLocal_65);
					task_perform_sequence(iLocal_53, iLocal_65);
					clear_sequence_task(&iLocal_65);
					if (does_blip_exist(iLocal_114))
					{
						remove_blip(&iLocal_114);
					}
					if (!does_blip_exist(iLocal_137))
					{
						iLocal_137 = func_65(vLocal_139, 1);
					}
					if (func_44() == 2 && !func_9())
					{
						if (!does_blip_exist(iLocal_138))
						{
							iLocal_138 = func_65(vLocal_142, 0);
							set_blip_sprite(iLocal_138, 269);
							func_88();
						}
					}
					func_87();
					iLocal_131 = 1;
					iLocal_121 = 1;
					settimera(false);
					remove_vehicles_from_generators_in_area(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					set_all_vehicle_generators_active_in_area(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, false, 1);
					func_93(0, 1, 1, 0);
					set_player_control(player_id(), true, 4);
					clear_entity_last_damage_entity(PLAYER::PLAYER_PED_ID());
					iLocal_49 = 4;
				}
			}
		}
	}
}

void func_87()
{
	if (!func_9())
	{
		if (func_44() == 2)
		{
			Global_25354 = 1;
		}
	}
}

void func_88()
{
	if (func_44() == 2)
	{
		if (!Global_25356)
		{
			func_89("CULT_BLIP_HELP", -1);
			Global_25356 = 1;
		}
	}
}

void func_89(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_90(int iParam0)
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
			if (func_91())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
	}
	return false;
}

bool func_91()
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

void func_92(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (is_entity_on_fire(iParam0))
			{
				stop_entity_fire(iParam0);
				ENTITY::SET_ENTITY_HEALTH(iParam0, get_entity_health(iParam0) + 200);
				set_vehicle_engine_health(iParam0, get_vehicle_engine_health(iParam0) + 200f);
				set_vehicle_petrol_tank_health(iParam0, get_vehicle_petrol_tank_health(iParam0) + 200f);
				stop_fire_in_range(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 5f);
				clear_area(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 2.5f, 1, 0, 0, false);
			}
		}
	}
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
			if (!func_74())
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
		iVar1 = func_23();
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
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, 0))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(4000, 5500);
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(4000, 5500);
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(4000, 5500);
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(4000, 5500);
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_102(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_103(iParam2), 1);
}

int func_103(int iParam0)
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

void func_104()
{
	Global_14578 = 0;
	func_105();
}

void func_105()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_106()
{
	if (!iLocal_67 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_107, 30f, 30f, 30f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_54[1]))
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_67 = 1;
			}
		}
	}
	if (is_vehicle_driveable(iLocal_58, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_54[0]))
		{
			task_vehicle_mission_ped_target(iLocal_54[0], iLocal_58, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
			set_ped_keep_task(iLocal_54[0], true);
		}
		if (!PED::IS_PED_INJURED(iLocal_54[1]))
		{
			task_enter_vehicle(iLocal_54[1], iLocal_58, -1, false, 3f, 1, 0);
			set_ped_keep_task(iLocal_54[1], true);
		}
	}
	else
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_54[iLocal_64]))
			{
				AI::TASK_SMART_FLEE_PED(iLocal_54[iLocal_64], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				set_ped_keep_task(iLocal_54[iLocal_64], true);
			}
			iLocal_64++;
		}
	}
	wait(false);
	func_4();
}

void func_107()
{
	if (!PED::IS_PED_INJURED(iLocal_54[0]) && !PED::IS_PED_INJURED(iLocal_54[1]))
	{
		if (!has_entity_been_damaged_by_any_ped(iLocal_54[0]) && !has_entity_been_damaged_by_any_ped(iLocal_54[1]))
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!is_ped_shooting(iLocal_54[1]))
				{
					AI::CLEAR_PED_TASKS(iLocal_54[1]);
					task_shoot_at_entity(iLocal_54[1], PLAYER::PLAYER_PED_ID(), -1, -957453492);
				}
			}
		}
	}
	iLocal_49 = 7;
}

void func_108()
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_54[0]) && !PED::IS_PED_INJURED(iLocal_54[1]))
	{
		if (!iLocal_69)
		{
			if (!iLocal_68)
			{
				open_sequence_task(&iLocal_65);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
				close_sequence_task(iLocal_65);
				task_perform_sequence(iLocal_54[1], iLocal_65);
				clear_sequence_task(&iLocal_65);
				iLocal_68 = 1;
			}
			if (is_ped_facing_ped(iLocal_54[1], PLAYER::PLAYER_PED_ID(), 90f))
			{
				func_104();
				wait(false);
				func_70(&uLocal_178, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_54[0]) && !PED::IS_PED_INJURED(iLocal_54[1]))
				{
					fVar0 = func_110(iLocal_54[0], PLAYER::PLAYER_PED_ID(), 1);
					if (fVar0 > 5f)
					{
						fVar0 -= 2f;
					}
					else
					{
						fVar0 -= 0.5f;
					}
					detach_entity(iLocal_60, 0, true);
					attach_entity_to_entity(iLocal_60, iLocal_54[0], get_ped_bone_index(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					AI::CLEAR_PED_TASKS(iLocal_54[0]);
					open_sequence_task(&iLocal_65);
					task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					AI::TASK_PLAY_ANIM(false, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
					close_sequence_task(iLocal_65);
					task_perform_sequence(iLocal_54[0], iLocal_65);
					clear_sequence_task(&iLocal_65);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54[1], joaat("weapon_sawnoffshotgun"), true);
					AI::CLEAR_PED_TASKS(iLocal_54[1]);
					open_sequence_task(&iLocal_65);
					task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), -1, fVar0, 1f, 2f, 0);
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
					close_sequence_task(iLocal_65);
					task_perform_sequence(iLocal_54[1], iLocal_65);
					clear_sequence_task(&iLocal_65);
					iLocal_69 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
		{
			if (is_entity_attached(iLocal_60))
			{
				if (is_entity_playing_anim(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						detach_entity(iLocal_60, 1, true);
					}
				}
			}
		}
		if (iLocal_69 && !iLocal_165)
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				open_sequence_task(&iLocal_65);
				task_go_to_entity_while_aiming_at_entity(false, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 3.5f, 4f, 1, 0, -957453492);
				task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 0);
				close_sequence_task(iLocal_65);
				task_perform_sequence(iLocal_54[1], iLocal_65);
				clear_sequence_task(&iLocal_65);
				trigger_music_event("RE6_START");
				iLocal_165 = 1;
			}
		}
		if (iLocal_165 && !iLocal_166)
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					task_aim_gun_at_entity(iLocal_54[0], PLAYER::PLAYER_PED_ID(), -1, 0);
				}
				iLocal_166 = 1;
				settimerb(false);
			}
		}
		if (iLocal_166 && !iLocal_167)
		{
			if (timerb() > 15000 && !func_12())
			{
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					task_turn_ped_to_face_entity(iLocal_54[0], PLAYER::PLAYER_PED_ID(), false);
					task_turn_ped_to_face_entity(iLocal_54[1], PLAYER::PLAYER_PED_ID(), false);
					func_70(&uLocal_178, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					iLocal_167 = true;
				}
			}
		}
		if (((!iLocal_70 && iLocal_165) && !PED::IS_PED_INJURED(iLocal_54[0])) && !PED::IS_PED_INJURED(iLocal_54[1]))
		{
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_109())
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				open_sequence_task(&iLocal_65);
				task_go_to_entity(false, iLocal_54[1], -1, 2f, 1f, 2f, 0);
				task_turn_ped_to_face_entity(false, iLocal_54[1], false);
				task_start_scenario_in_place(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				close_sequence_task(iLocal_65);
				task_perform_sequence(iLocal_54[0], iLocal_65);
				clear_sequence_task(&iLocal_65);
				open_sequence_task(&iLocal_65);
				task_go_to_entity(false, iLocal_54[0], -1, 2f, 1f, 2f, 0);
				task_turn_ped_to_face_entity(false, iLocal_54[0], false);
				task_start_scenario_in_place(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				close_sequence_task(iLocal_65);
				task_perform_sequence(iLocal_54[1], iLocal_65);
				clear_sequence_task(&iLocal_65);
				settimerb(15000);
				iLocal_145 = 0;
				iLocal_166 = 1;
				iLocal_70 = 1;
			}
		}
		if (iLocal_167)
		{
			func_11();
			func_112();
		}
		if (((_0x6CD5A433374D4CFB(iLocal_54[0], PLAYER::PLAYER_PED_ID()) || _0x6CD5A433374D4CFB(iLocal_54[1], PLAYER::PLAYER_PED_ID())) || can_ped_hear_player(player_id(), iLocal_54[0])) || can_ped_hear_player(player_id(), iLocal_54[1]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3))
			{
				if (is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_76)
					{
						func_104();
						wait(false);
						if (func_70(&uLocal_178, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_112();
						}
					}
				}
			}
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_76)
					{
						func_104();
						wait(false);
						if (func_70(&uLocal_178, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_112();
						}
					}
				}
			}
			if (is_player_targetting_anything(player_id()) || is_ped_shooting(PLAYER::PLAYER_PED_ID()))
			{
				func_112();
			}
		}
	}
}

bool func_109()
{
	if (GAMEPLAY::IS_BIT_SET(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

auto func_110(int iParam0, int iParam1, int iParam2)
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

bool func_111()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if ((((is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("rhino")) || is_ped_in_any_police_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("annihilator"))) || is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("buzzard"))) || is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID()))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_112()
{
	func_11();
	trigger_music_event("RE6_START");
	if (!iLocal_145)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_54[0]))
			{
				set_ped_reset_flag(iLocal_54[0], 156, true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
				{
					_0xF1C03A5352243A30(iLocal_54[0]);
					if (is_entity_attached(iLocal_60))
					{
						if (!iLocal_70)
						{
							detach_entity(iLocal_60, 0, true);
							attach_entity_to_entity(iLocal_60, iLocal_54[0], get_ped_bone_index(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							AI::CLEAR_PED_TASKS(iLocal_54[0]);
							open_sequence_task(&iLocal_65);
							task_clear_look_at(false);
							AI::TASK_PLAY_ANIM(false, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
							close_sequence_task(iLocal_65);
							task_perform_sequence(iLocal_54[0], iLocal_65);
							clear_sequence_task(&iLocal_65);
							set_ped_keep_task(iLocal_54[0], true);
							_0x2208438012482A1A(iLocal_54[0], 0, 0);
							iLocal_145 = 1;
						}
					}
					else
					{
						open_sequence_task(&iLocal_65);
						task_clear_look_at(false);
						task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
						close_sequence_task(iLocal_65);
						task_perform_sequence(iLocal_54[0], iLocal_65);
						clear_sequence_task(&iLocal_65);
						set_ped_keep_task(iLocal_54[0], true);
						iLocal_145 = 1;
					}
				}
			}
			else
			{
				iLocal_145 = 1;
			}
		}
		else
		{
			iLocal_145 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		if (is_entity_attached(iLocal_60))
		{
			if (!PED::IS_PED_INJURED(iLocal_54[0]))
			{
				if (is_entity_playing_anim(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						detach_entity(iLocal_60, 1, true);
					}
				}
			}
		}
	}
	if (!iLocal_146)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_54[1]))
			{
				set_ped_reset_flag(iLocal_54[1], 156, true);
				_0xF1C03A5352243A30(iLocal_54[1]);
				open_sequence_task(&iLocal_65);
				task_clear_look_at(false);
				task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 500);
				task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
				close_sequence_task(iLocal_65);
				task_perform_sequence(iLocal_54[1], iLocal_65);
				clear_sequence_task(&iLocal_65);
				set_ped_keep_task(iLocal_54[1], true);
				iLocal_146 = 1;
			}
			else
			{
				iLocal_146 = 1;
			}
		}
		else
		{
			iLocal_146 = 1;
		}
	}
	if (iLocal_146 && iLocal_145)
	{
		iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + 8500;
		settimera(false);
		iLocal_49 = 7;
	}
}

bool func_113(int iParam0)
{
	if (func_116())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_25(Global_101143))
		{
			func_114(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_25(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_89(func_115(iParam0), -1);
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
					func_89(func_115(iParam0), -1);
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
					func_89(func_115(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

char* func_115(int iParam0)
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

bool func_116()
{
	switch (func_117(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_117(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_121(0))
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
		if (!func_119(iParam2))
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
			func_118(uParam0, iParam4);
		}
	}
	return 2;
}

void func_118(auto uParam0, int iParam1)
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

int func_119(int iParam0)
{
	return func_120(iParam0, Global_35711);
}

bool func_120(int iParam0, int iParam1)
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

bool func_121(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_119(iParam0))
	{
		return false;
	}
	return true;
}

void func_122()
{
	if (does_blip_exist(iLocal_163))
	{
		remove_blip(&iLocal_163);
	}
	if (!does_blip_exist(iLocal_114))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, 0))
		{
			iLocal_114 = func_67(iLocal_53, 0, 145);
		}
	}
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		if (!does_blip_exist(uLocal_111[iLocal_64]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[iLocal_64], 0))
			{
				uLocal_111[iLocal_64] = func_67(iLocal_54[iLocal_64], 1, 145);
			}
		}
		iLocal_64++;
	}
}

void func_123()
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(4500, 6500);
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(4500, 6500);
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(4500, 6500);
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < GAMEPLAY::GET_GAME_TIMER())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(4500, 6500);
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_124()
{
	switch (iLocal_110)
	{
		case 0:
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_110++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 4:
			iLocal_106 = GAMEPLAY::GET_GAME_TIMER() + 3000;
			iLocal_110++;
			break;
		
		case 5:
			break;
	}
}

void func_125()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		if (is_entity_attached(iLocal_60))
		{
			if (!PED::IS_PED_INJURED(iLocal_54[0]))
			{
				if (is_entity_playing_anim(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial_stop") > 0.124f && get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial") < 0.127f)
					{
						start_particle_fx_non_looped_on_entity("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1f, 0, 0, 0);
					}
				}
				if (is_entity_playing_anim(iLocal_54[0], "random@burial", "a_burial", 3))
				{
					if (((((get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial") > 0.04f && get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial") < 0.043f) || (get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial") > 0.24f && get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial") < 0.243f)) || (get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial") > 0.44f && get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial") < 0.443f)) || (get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial") > 0.64f && get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial") < 0.643f)) || (get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial") > 0.84f && get_entity_anim_current_time(iLocal_54[0], "random@burial", "a_burial") < 0.843f))
					{
						start_particle_fx_non_looped_on_entity("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1f, 0, 0, 0);
					}
				}
			}
		}
	}
}

bool func_126()
{
	if (!iLocal_129)
	{
		if (is_bullet_in_area(vLocal_88, 100f, 1) || is_bullet_in_area(vLocal_88, 100f, 1))
		{
			if (PED::IS_PED_INJURED(iLocal_54[0]) || PED::IS_PED_INJURED(iLocal_54[1]))
			{
				iLocal_51 = 1;
				return true;
			}
			else if (!is_bullet_in_area(vLocal_88, 100f, 1) || !is_bullet_in_area(vLocal_88, 100f, 1))
			{
				iLocal_51 = 1;
				return true;
			}
		}
		if (((((((((is_projectile_type_in_angled_area(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || is_projectile_type_in_angled_area(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || is_projectile_type_in_angled_area(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || is_projectile_type_in_angled_area(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || is_projectile_type_in_angled_area(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || is_projectile_type_in_angled_area(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || is_projectile_type_in_angled_area(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || is_explosion_in_area(2, vLocal_88 - Vector(100f, 100f, 100f), vLocal_88 + Vector(100f, 100f, 100f))) || is_explosion_in_area(4, vLocal_88 - Vector(100f, 100f, 100f), vLocal_88 + Vector(100f, 100f, 100f))) || is_explosion_in_area(0, vLocal_88 - Vector(100f, 100f, 100f), vLocal_88 + Vector(100f, 100f, 100f)))
		{
			iLocal_51 = 1;
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_58, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), 1) || is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_58, 0))
				{
					clear_entity_last_damage_entity(iLocal_58);
					func_112();
					iLocal_51 = 3;
					return true;
				}
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
					{
						if (is_vehicle_attached_to_tow_truck(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), iLocal_58))
						{
							func_112();
							iLocal_51 = 3;
							return true;
						}
					}
				}
			}
		}
		if (!iLocal_75)
		{
			if (!PED::IS_PED_INJURED(iLocal_54[0]) && !PED::IS_PED_INJURED(iLocal_54[1]))
			{
				if ((((_0x6CD5A433374D4CFB(iLocal_54[0], PLAYER::PLAYER_PED_ID()) || _0x6CD5A433374D4CFB(iLocal_54[1], PLAYER::PLAYER_PED_ID())) || can_ped_hear_player(player_id(), iLocal_54[0])) || can_ped_hear_player(player_id(), iLocal_54[1])) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_88 - Vector(0f, 0f, 7f), 20f, 15f, 35f, false, true, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_88 - Vector(0f, 0f, 7f), 28f, 18f, 35f, false, true, 0))
					{
						iLocal_51 = 1;
						return true;
					}
				}
			}
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_54[0]) && !PED::IS_PED_INJURED(iLocal_54[1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(get_players_last_vehicle(), iLocal_54[0]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(get_players_last_vehicle(), iLocal_54[1]))
					{
						iLocal_51 = 5;
						return true;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 0) || has_entity_been_damaged_by_weapon(iLocal_53, joaat("weapon_stungun"), 0))
			{
				iLocal_51 = 4;
				return true;
			}
		}
		else
		{
			iLocal_51 = 4;
			return true;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_54[0], 0) || ENTITY::IS_ENTITY_DEAD(iLocal_54[1], 0))
		{
			iLocal_51 = 6;
			return true;
		}
		if (iLocal_75)
		{
			return true;
		}
	}
	return false;
}

bool func_127(int iParam0, auto uParam1, auto uParam2, int iParam3, int iParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 fVar9;
	
	iVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !iParam4)
	{
		if (is_ped_on_foot(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = fParam5 + 3f;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !iParam4)
		{
			vVar3 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			vVar6 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
			fVar9 = vdist(vVar3, vVar6);
			if (!GAMEPLAY::IS_BIT_SET(iParam3, 3))
			{
				if (func_133(iParam0, iParam6))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_131(iParam0);
					return true;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(iParam3, true))
			{
				if (fVar1 < 20f)
				{
				}
				if (is_bullet_in_area(vVar6, fParam5, 1))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return true;
				}
				if (is_projectile_in_area(vVar6 - Vector(fParam5 / 2f, fParam5 / 2f, fParam5 / 2f), vVar6 + Vector(fParam5 / 2f, fParam5 / 2f, fParam5 / 2f), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return true;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(iParam3, 2))
			{
				fVar0 = _get_lockon_range_of_current_ped_weapon(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (is_player_targetting_entity(player_id(), iParam0) || is_player_free_aiming_at_entity(player_id(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (has_entity_clear_los_to_entity(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_132("	aggro Ped knows player is pointing gun\n");
								func_128("		lockOnTimer = ", *uParam2);
								func_132("\n");
								func_128("		time since not LockedOn = ", GAMEPLAY::GET_GAME_TIMER() - iLocal_19);
								func_132("\n");
								iVar2 = true;
								if (GAMEPLAY::GET_GAME_TIMER() > iLocal_19 + *uParam2)
								{
									func_132("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_131(iParam0);
									return true;
								}
							}
						}
						else
						{
							iVar2 = false;
						}
					}
					else
					{
						iVar2 = false;
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(iParam3, false))
			{
				if (is_player_wanted_level_greater(player_id(), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_131(iParam0);
					return true;
				}
			}
		}
	}
	if (!iVar2)
	{
		iLocal_19 = GAMEPLAY::GET_GAME_TIMER();
	}
	return false;
}

void func_128(char* sParam0, int iParam1)
{
	func_130(sParam0);
	func_129(iParam1);
}

void func_129(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_130(char* sParam0)
{
	if (are_strings_equal(sParam0, sParam0))
	{
	}
}

void func_131(int iParam0)
{
	stop_current_playing_ambient_speech(iParam0);
}

void func_132(char* sParam0)
{
	func_130(sParam0);
}

bool func_133(int iParam0, int iParam1)
{
	if (is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return true;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		if (get_ped_max_health(iParam0) - get_entity_health(iParam0) > iParam1)
		{
			return true;
		}
	}
	return false;
}

void func_134()
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	func_136(39, 1);
	func_136(40, 1);
	func_136(41, 1);
	func_136(42, 1);
	func_136(43, 1);
	func_136(44, 1);
	add_scenario_blocking_area(vLocal_139 - Vector(20f, 40f, 40f), vLocal_139 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	add_scenario_blocking_area(vLocal_78 - Vector(20f, 50f, 60f), vLocal_78 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	set_vehicle_model_is_suppressed(iLocal_105, true);
	_0xDC0F817884CDD856(5, false);
	_0xDC0F817884CDD856(3, false);
	set_wanted_level_multiplier(0f);
	iLocal_53 = PED::CREATE_PED(26, iLocal_102, vLocal_78, fLocal_97, 1, true);
	set_blocking_of_non_temporary_events(iLocal_53, true);
	set_ped_can_be_targetted(iLocal_53, false);
	set_ped_flee_attributes(iLocal_53, 2, false);
	set_ped_flee_attributes(iLocal_53, 128, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 6, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_53, 206, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_53, 318, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_53, 118, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_53, 208, true);
	set_model_as_no_longer_needed(iLocal_102);
	ENTITY::SET_ENTITY_HEALTH(iLocal_53, iLocal_125);
	set_ped_can_ragdoll_from_player_impact(PLAYER::PLAYER_PED_ID(), 0);
	add_relationship_group("rghKidnappers", &iLocal_176);
	add_relationship_group("rghVictim", &iLocal_177);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, iLocal_177);
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		iLocal_54[iLocal_64] = PED::CREATE_PED(26, iLocal_103, vLocal_81[iLocal_64 /*3*/], fLocal_98[iLocal_64], 1, true);
		set_blocking_of_non_temporary_events(iLocal_54[iLocal_64], true);
		set_ped_as_enemy(iLocal_54[iLocal_64], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54[iLocal_64], 0, true);
		set_ped_flee_attributes(iLocal_54[iLocal_64], 2, false);
		set_ped_flee_attributes(iLocal_54[iLocal_64], 128, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_54[iLocal_64], 42, true);
		set_ped_combat_movement(iLocal_54[0], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54[0], 50, true);
		set_ped_shoot_rate(iLocal_54[iLocal_64], 50);
		set_ped_accuracy(iLocal_54[iLocal_64], 13);
		set_entity_load_collision_flag(iLocal_54[iLocal_64], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54[iLocal_64], iLocal_176);
		set_ped_money(iLocal_54[iLocal_64], get_random_int_in_range(800, 2000));
		iLocal_64++;
	}
	set_model_as_no_longer_needed(iLocal_104);
	set_model_as_no_longer_needed(iLocal_103);
	set_ped_shoot_rate(iLocal_54[1], 100);
	set_ped_firing_pattern(iLocal_54[1], -687903391);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_176, 1862763509);
	give_weapon_to_ped(iLocal_54[0], joaat("weapon_pistol"), -1, false, true);
	give_weapon_to_ped(iLocal_54[1], joaat("weapon_sawnoffshotgun"), -1, false, true);
	iLocal_58 = create_vehicle(iLocal_105, vLocal_88, fLocal_101, 1, true);
	set_vehicle_on_ground_properly(iLocal_58);
	set_vehicle_lights(iLocal_58, 3);
	set_vehicle_door_open(iLocal_58, 5, 0, 0);
	set_model_as_no_longer_needed(iLocal_105);
	iLocal_60 = create_object(joaat("prop_ld_shovel"), vLocal_107, 1, true, false);
	set_model_as_no_longer_needed(joaat("prop_ld_shovel"));
	iLocal_61[0] = create_object(joaat("p_arm_bind_cut_s"), vLocal_107, 1, true, false);
	iLocal_61[1] = create_object(joaat("p_arm_bind_cut_s"), vLocal_107 + Vector(1f, 1f, 1f), 1, true, false);
	STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
	attach_entity_to_entity(iLocal_60, iLocal_54[0], get_ped_bone_index(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	set_ped_component_variation(iLocal_54[0], false, false, false, 0);
	set_ped_component_variation(iLocal_54[0], 3, false, true, 0);
	set_ped_component_variation(iLocal_54[0], 4, true, false, 0);
	set_ped_component_variation(iLocal_54[1], false, false, 2, 0);
	set_ped_component_variation(iLocal_54[1], 3, 2, true, 0);
	set_ped_component_variation(iLocal_54[1], 4, true, true, 0);
	vVar0 = {vLocal_78};
	vVar3 = {-2f, -4f, 18f};
	iLocal_343 = create_synchronized_scene(vVar0, vVar3, 2);
	task_synchronized_scene(iLocal_53, iLocal_343, "random@burial", "b_burial", 4f, -4f, 1, 0, 1000f, 0);
	play_synchronized_entity_anim(iLocal_61[0], iLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1000f);
	play_synchronized_entity_anim(iLocal_61[1], iLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1000f);
	set_synchronized_scene_looped(iLocal_343, true);
	set_ped_keep_task(iLocal_53, true);
	AI::TASK_PLAY_ANIM(iLocal_54[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(iLocal_54[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	set_ped_angled_defensive_area(iLocal_54[0], vLocal_91, vLocal_94, 2.75f, 0, 0);
	set_ped_angled_defensive_area(iLocal_54[1], vLocal_91, vLocal_94, 2.75f, 0, 0);
	if (func_44() == 0)
	{
		func_135(&uLocal_178, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_135(&uLocal_178, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_135(&uLocal_178, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	set_ambient_voice_name(iLocal_54[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	set_ambient_voice_name(iLocal_54[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	set_ambient_voice_name(iLocal_53, "KIDNAPPEDFEMALE");
	func_135(&uLocal_178, 4, iLocal_54[0], "KIDNAPPER2", 0, 1);
	func_135(&uLocal_178, 3, iLocal_54[1], "KIDNAPPER1", 0, 1);
	func_135(&uLocal_178, 5, iLocal_53, "KIDNAPPEDFEMALE", 0, 1);
}

void func_135(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_136(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_143(iParam0, 2, 1))
		{
			func_142(iParam0, 2, 1);
		}
	}
	else if (func_143(iParam0, 2, 1))
	{
		func_137(iParam0, 2, 1);
	}
}

void func_137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_20() == 0)
		{
			iVar0 = func_140(func_141(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_138(func_141(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_138(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_139(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_140(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_139(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141(int iParam0)
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

void func_142(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_20() == 0)
		{
			iVar0 = func_140(func_141(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_138(func_141(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_143(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_20() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_140(func_141(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_144()
{
	int iVar0;
	int iVar1;
	
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID());
		if (is_vehicle_driveable(iVar0, 0))
		{
			iVar1 = get_ped_in_vehicle_seat(iVar0, false);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						if (!is_ped_headtracking_entity(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							task_look_at_entity(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_145()
{
	STREAMING::REQUEST_MODEL(iLocal_102);
	STREAMING::REQUEST_MODEL(iLocal_104);
	STREAMING::REQUEST_MODEL(iLocal_103);
	STREAMING::REQUEST_MODEL(iLocal_105);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shovel"));
	STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
	request_anim_dict("random@burial");
	request_ptfx_asset();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false);
	prepare_music_event("RE6_BOTH_DEAD_OS");
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_102) && STREAMING::HAS_MODEL_LOADED(iLocal_104)) && STREAMING::HAS_MODEL_LOADED(iLocal_103)) && STREAMING::HAS_MODEL_LOADED(iLocal_105)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shovel"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_arm_bind_cut_s"))) && has_anim_dict_loaded("random@burial")) && has_ptfx_asset_loaded()) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false)) && prepare_music_event("RE6_BOTH_DEAD_OS"))
	{
		iLocal_52 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_102);
		STREAMING::REQUEST_MODEL(iLocal_104);
		STREAMING::REQUEST_MODEL(iLocal_103);
		STREAMING::REQUEST_MODEL(iLocal_105);
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shovel"));
		STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
		request_anim_dict("random@burial");
		request_ptfx_asset();
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false);
		prepare_music_event("RE6_BOTH_DEAD_OS");
	}
}

void func_146()
{
	iLocal_102 = joaat("u_f_y_mistress");
	iLocal_103 = joaat("a_m_m_salton_01");
	iLocal_104 = joaat("a_m_m_salton_01");
	iLocal_105 = joaat("bison");
	vLocal_78 = {163.4486f, 6839.993f, 18.86f};
	fLocal_97 = 0f;
	vLocal_81[0 /*3*/] = {162.8193f, 6837.257f, 18.9614f};
	fLocal_98[0] = 297.0056f;
	vLocal_81[1 /*3*/] = {162.5046f, 6841.68f, 18.8426f};
	fLocal_98[1] = 193.3866f;
	vLocal_88 = {169.3462f, 6837.805f, 19.1421f};
	fLocal_101 = 265.6862f;
	vLocal_91 = {164.0896f, 6836.923f, 19.03899f};
	vLocal_94 = {168.9638f, 6834.302f, 24.99057f};
	iLocal_66 = 1;
}

bool func_147()
{
	if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_44) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_158())
		{
			return false;
		}
	}
	if (func_154())
	{
		return true;
	}
	if (func_148(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_148(float fParam0, int iParam1)
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
		if (func_33(func_44()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_149(iVar32, &Var0);
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

void func_149(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_150(uParam1, "Abigail1", func_152(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 1:
			func_150(uParam1, "Abigail2", func_152(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 2:
			func_150(uParam1, "Barry1", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 3:
			func_150(uParam1, "Barry2", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 4:
			func_150(uParam1, "Barry3", func_152(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 5:
			func_150(uParam1, "Barry3A", func_152(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 6:
			func_150(uParam1, "Barry3C", func_152(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 7:
			func_150(uParam1, "Barry4", func_152(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_151(iParam0), 0, 0);
			break;
		
		case 8:
			func_150(uParam1, "Dreyfuss1", func_152(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 9:
			func_150(uParam1, "Epsilon1", func_152(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 10:
			func_150(uParam1, "Epsilon2", func_152(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 11:
			func_150(uParam1, "Epsilon3", func_152(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 12:
			func_150(uParam1, "Epsilon4", func_152(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 13:
			func_150(uParam1, "Epsilon5", func_152(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 14:
			func_150(uParam1, "Epsilon6", func_152(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 15:
			func_150(uParam1, "Epsilon7", func_152(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 16:
			func_150(uParam1, "Epsilon8", func_152(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 17:
			func_150(uParam1, "Extreme1", func_152(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 18:
			func_150(uParam1, "Extreme2", func_152(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 19:
			func_150(uParam1, "Extreme3", func_152(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 20:
			func_150(uParam1, "Extreme4", func_152(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 21:
			func_150(uParam1, "Fanatic1", func_152(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 22:
			func_150(uParam1, "Fanatic2", func_152(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 23:
			func_150(uParam1, "Fanatic3", func_152(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_151(iParam0), 0, 1);
			break;
		
		case 24:
			func_150(uParam1, "Hao1", func_152(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_151(iParam0), 0, 1);
			break;
		
		case 25:
			func_150(uParam1, "Hunting1", func_152(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 26:
			func_150(uParam1, "Hunting2", func_152(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 27:
			func_150(uParam1, "Josh1", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 28:
			func_150(uParam1, "Josh2", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 29:
			func_150(uParam1, "Josh3", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 30:
			func_150(uParam1, "Josh4", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 31:
			func_150(uParam1, "Maude1", func_152(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 32:
			func_150(uParam1, "Minute1", func_152(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 33:
			func_150(uParam1, "Minute2", func_152(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 34:
			func_150(uParam1, "Minute3", func_152(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 35:
			func_150(uParam1, "MrsPhilips1", func_152(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 36:
			func_150(uParam1, "MrsPhilips2", func_152(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 37:
			func_150(uParam1, "Nigel1", func_152(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 38:
			func_150(uParam1, "Nigel1A", func_152(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 39:
			func_150(uParam1, "Nigel1B", func_152(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 40:
			func_150(uParam1, "Nigel1C", func_152(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 41:
			func_150(uParam1, "Nigel1D", func_152(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 42:
			func_150(uParam1, "Nigel2", func_152(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 43:
			func_150(uParam1, "Nigel3", func_152(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 44:
			func_150(uParam1, "Omega1", func_152(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 45:
			func_150(uParam1, "Omega2", func_152(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 46:
			func_150(uParam1, "Paparazzo1", func_152(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 47:
			func_150(uParam1, "Paparazzo2", func_152(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 48:
			func_150(uParam1, "Paparazzo3", func_152(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 49:
			func_150(uParam1, "Paparazzo3A", func_152(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 50:
			func_150(uParam1, "Paparazzo3B", func_152(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 51:
			func_150(uParam1, "Paparazzo4", func_152(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 52:
			func_150(uParam1, "Rampage1", func_152(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 54:
			func_150(uParam1, "Rampage3", func_152(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 55:
			func_150(uParam1, "Rampage4", func_152(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 56:
			func_150(uParam1, "Rampage5", func_152(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 53:
			func_150(uParam1, "Rampage2", func_152(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 57:
			func_150(uParam1, "TheLastOne", func_152(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 58:
			func_150(uParam1, "Tonya1", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 59:
			func_150(uParam1, "Tonya2", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 60:
			func_150(uParam1, "Tonya3", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 61:
			func_150(uParam1, "Tonya4", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 62:
			func_150(uParam1, "Tonya5", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_150(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_151(int iParam0)
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

struct<2> func_152(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_153(iParam0)};
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

struct<2> func_153(int iParam0)
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

bool func_154()
{
	if (func_157() && !func_158())
	{
		return true;
	}
	if (func_156() && func_155())
	{
		return true;
	}
	return false;
}

int func_155()
{
	return Global_100872 > 0;
}

bool func_156()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_157()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_158()
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

bool func_159()
{
	if (!func_119(5))
	{
		return true;
	}
	if (func_154())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_158())
		{
			return false;
		}
	}
	if (func_148(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_160()
{
	if ((Global_101143 == func_39() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_161(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_163(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_162();
}

void func_162()
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

void func_163(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_164(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_39();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_205())
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
			if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_158())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_16(0))
		{
			return false;
		}
		if (func_154())
		{
			return false;
		}
		if (func_204())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_33(func_44()))
		{
			if (func_148(100f, 1) != -1)
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
		if (!func_203(iParam3))
		{
			return false;
		}
		if (func_33(func_44()))
		{
			if (func_202(func_44()) == 4 || func_202(func_44()) == 5)
			{
				return false;
			}
		}
		if (func_33(func_44()))
		{
			if (!func_201(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_200(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_199())
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
		if (!func_190(4))
		{
			return false;
		}
		if (!func_119(5))
		{
			return false;
		}
		if (func_189(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_189(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_203(30) && !func_189(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_33(func_44()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_188(iVar8))
				{
					if (func_166(iVar4))
					{
						if (!func_165(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_44() != iVar4)
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

int func_165(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_167(iVar0);
}

int func_167(int iParam0)
{
	return func_168(iParam0, 1);
}

bool func_168(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_188(iParam0))
	{
		return false;
	}
	func_169(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_169(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_170(func_181(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_170(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_180(iParam0, iParam1))
	{
		iVar0 = func_179(iParam1);
		iVar1 = func_177(iParam0);
		iVar2 = func_177(iParam0) - func_177(iParam1);
		iVar3 = func_179(iParam0) - func_179(iParam1);
		iVar4 = func_176(iParam0) - func_176(iParam1);
		iVar5 = func_175(iParam0) - func_175(iParam1);
		iVar6 = func_174(iParam0) - func_174(iParam1);
		iVar7 = func_173(iParam0) - func_173(iParam1);
	}
	else
	{
		iVar0 = func_179(iParam0);
		iVar1 = func_177(iParam1);
		iVar2 = func_177(iParam1) - func_177(iParam0);
		iVar3 = func_179(iParam1) - func_179(iParam0);
		iVar4 = func_176(iParam1) - func_176(iParam0);
		iVar5 = func_175(iParam1) - func_175(iParam0);
		iVar6 = func_174(iParam1) - func_174(iParam0);
		iVar7 = func_173(iParam1) - func_173(iParam0);
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
		iVar4 += func_172(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_171(to_float(iVar0 + 1), 0f, 12f));
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

float func_171(Vector3 fParam0, float fParam1, float fParam2)
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

int func_172(int iParam0, int iParam1)
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

int func_173(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_174(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_175(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_176(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_177(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_178(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_178(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_179(int iParam0)
{
	return (iParam0 && 15);
}

bool func_180(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_188(iParam1) || !func_188(iParam0))
	{
		return true;
	}
	iVar0 = func_177(iParam0);
	iVar1 = func_177(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_176(iParam0);
	iVar1 = func_176(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_181()
{
	auto uVar0;
	
	func_187(&uVar0, get_clock_seconds());
	func_186(&uVar0, get_clock_minutes());
	func_185(&uVar0, get_clock_hours());
	func_184(&uVar0, get_clock_day_of_month());
	func_183(&uVar0, get_clock_month());
	func_182(&uVar0, get_clock_year());
	return uVar0;
}

void func_182(auto uParam0, int iParam1)
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

void func_183(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(*uParam0);
	iVar1 = func_177(*uParam0);
	if (iParam1 < 1 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_185(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_186(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_187(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_188(int iParam0)
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
	iVar0 = func_173(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_174(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_175(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_177(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_179(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_176(iParam0);
	if (iVar5 < 1 || iVar5 > func_172(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_189(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_190(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_44();
				if (!func_33(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_198()) || Global_100201) || Global_25122) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_194()) || func_193()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_198()) || Global_25122) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_198()) || Global_100201) || Global_25122) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_198()) || Global_100201) || Global_25122) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_193()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_198() || get_player_wanted_level(player_id()) > 0) || func_78(8, -1)) || func_193()) || func_192()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_196()) || func_195()) || func_192()) || func_191())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_198()) || Global_25122) || func_197()) || func_78(8, -1)) || func_195()) || func_194()) || func_193()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_198()) || func_195()) || Global_100201) || Global_25122) || func_197()) || Global_36839) || func_78(8, -1)) || func_194()) || func_192()) || func_193()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_198()) || Global_100201) || Global_25122) || func_197()) || func_78(8, -1)) || func_194()) || func_192()) || func_196()) || func_195()) || func_193())
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

auto func_191()
{
	return Global_91317.f_1;
}

int func_192()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_193()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_194()
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

int func_195()
{
	return Global_91330.f_297 > 0;
}

int func_196()
{
	return Global_91330.f_296 > 0;
}

auto func_197()
{
	return Global_1315913;
}

int func_198()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_199()
{
	func_76();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_200(int iParam0)
{
	return func_180(func_181(), iParam0);
}

int func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_44();
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

int func_202(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_203(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_205())
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

bool func_204()
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

bool func_205()
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

void func_206()
{
	int iVar0;
	
	if (iLocal_162)
	{
		func_219(0);
		remove_scenario_blocking_areas();
		cancel_music_event("RE6_BOTH_DEAD_OS");
		if (iLocal_145 || iLocal_165)
		{
			if (Global_25358)
			{
				trigger_music_event("AC_STOP");
			}
			else
			{
				trigger_music_event("RE6_END");
			}
		}
		func_218();
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_177, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_177);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_53, 317, true);
				if (!is_ped_in_any_vehicle(iLocal_53, 0))
				{
					reset_ped_last_vehicle(iLocal_53);
				}
				if (is_ped_in_group(iLocal_53))
				{
					remove_ped_from_group(iLocal_53);
				}
				set_blocking_of_non_temporary_events(iLocal_53, false);
				set_ped_can_be_targetted(iLocal_53, true);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, 0))
			{
				set_enable_handcuffs(iLocal_53, 1);
				set_enable_bound_ankles(iLocal_53, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_54)
		{
			if (!PED::IS_PED_INJURED(iLocal_54[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				_0xF1C03A5352243A30(iLocal_54[iVar0]);
				if (iLocal_69 || iLocal_76)
				{
					task_combat_ped(iLocal_54[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				else
				{
					AI::TASK_SMART_FLEE_PED(iLocal_54[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					func_104();
				}
				set_ped_keep_task(iLocal_54[iVar0], true);
			}
			iVar0++;
		}
		delete_object(&(iLocal_61[0]));
		delete_object(&(iLocal_61[1]));
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
		{
			set_vehicle_as_no_longer_needed(&iLocal_58);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
		{
			if (is_entity_attached(iLocal_60))
			{
				detach_entity(iLocal_60, 1, true);
			}
			set_object_as_no_longer_needed(&iLocal_60);
		}
		if (does_blip_exist(iLocal_163))
		{
			remove_blip(&iLocal_163);
		}
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (does_blip_exist(uLocal_111[iLocal_64]))
			{
				remove_blip(&(uLocal_111[iLocal_64]));
			}
			iLocal_64++;
		}
		if (does_blip_exist(iLocal_114))
		{
			remove_blip(&iLocal_114);
		}
		if (does_cam_exist(iLocal_77))
		{
			destroy_cam(iLocal_77, 0);
		}
		_0xDC0F817884CDD856(5, true);
		_0xDC0F817884CDD856(3, true);
		set_wanted_level_multiplier(1f);
		set_all_vehicle_generators_active_in_area(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, true, 1);
	}
	func_207(-1);
	terminate_this_thread();
}

void func_207(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_160())
	{
		func_211(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_210(30000);
		StringCopy(&cVar0, func_209(Global_101143, 1), 64);
		if (func_38(Global_101143) > 0)
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
	func_208(&Global_25179);
	Global_101144 = 0;
	func_163(-1);
}

void func_208(auto uParam0)
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

char* func_209(int iParam0, int iParam1)
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

void func_210(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_211(int iParam0)
{
	func_212(iParam0, 0, func_217(iParam0));
}

void func_212(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_181();
	func_215(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_214(uParam0, &uVar0);
	Var1 = {func_213(&uVar0)};
}

struct<16> func_213(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_175(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_174(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_176(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_179(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_177(*uParam0), 64);
	return cVar0;
}

void func_214(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_215(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_179(*uParam0);
	iVar2 = func_176(*uParam0);
	iVar3 = func_175(*uParam0);
	iVar4 = func_174(*uParam0);
	iVar5 = func_173(*uParam0);
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
	iVar6 = func_172(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_172(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_216(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_216(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_187(uParam0, iParam1);
	func_186(uParam0, iParam2);
	func_185(uParam0, iParam3);
	func_183(uParam0, iParam5);
	func_184(uParam0, iParam4);
	func_182(uParam0, iParam6);
}

int func_217(int iParam0)
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

void func_218()
{
	Global_25354 = 0;
	Global_25355 = 0;
	Global_25357 = 0;
	Global_25358 = 0;
	Global_25359 = 0;
}

void func_219(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_136(iVar0, iParam0);
		iVar0++;
	}
}

