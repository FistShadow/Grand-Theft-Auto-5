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
	int[] iLocal_52 = new int[2];
	Vector3[] vLocal_55 = new Vector3[2];
	float[] fLocal_62 = new float[2];
	int iLocal_65 = 0;
	Vector3 vLocal_66 = 0;
	Vector3 fLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	Vector3 vLocal_73 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	struct<6> Local_78 = 0;
	struct<6> Local_84 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	Vector3 vLocal_93 = 0;
	Vector3 vLocal_96 = 0;
	Vector3 vLocal_99 = 0;
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
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	auto uLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	var[] uLocal_121 = new var[2];
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	auto uLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	auto uLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	auto uLocal_154 = 16;
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
	struct<2> Local_319 = 0;
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
	auto uLocal_336 = 5;
	auto uLocal_337 = 0;
	auto uLocal_338 = 0;
	auto uLocal_339 = 0;
	auto uLocal_340 = 0;
	auto uLocal_341 = 0;
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
	StringCopy(&Local_78, "", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			if (is_ped_in_group(iLocal_72))
			{
				remove_ped_from_group(iLocal_72);
			}
		}
		func_204();
	}
	if (func_162(Local_319.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_159(-1);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(false);
		if ((is_world_point_within_brain_activation_range() || iLocal_108) || iLocal_137)
		{
			if (!func_158())
			{
				if (func_157())
				{
					func_204();
				}
			}
			_0x208784099002BC30("RE_RA", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_145())
					{
						func_204();
					}
					if (!iLocal_103)
					{
						func_144();
					}
					else
					{
						func_143();
					}
					if (iLocal_104)
					{
						iLocal_102 = 1;
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					if (is_player_playing(player_id()))
					{
						switch (iLocal_49)
						{
							case 0:
								func_133();
								iLocal_49 = 1;
								break;
							
							case 1:
								if (!func_132())
								{
									if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_73, 75f, 75f, 75f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_72)) || is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 15f, 15f, 15f, 0, 1, 0))
									{
										if (!func_158())
										{
											task_look_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, -1, 0, 2);
											set_wanted_level_multiplier(0.1f);
											func_131();
											func_122(1);
										}
										iLocal_111 = true;
									}
									if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_131();
											iLocal_111 = true;
										}
									}
									if (iLocal_111)
									{
										func_116();
									}
									if (!PED::IS_PED_INJURED(iLocal_72) && is_vehicle_driveable(iLocal_65, 0))
									{
										if (is_ped_in_vehicle(iLocal_72, iLocal_65, 0))
										{
											iLocal_137 = 1;
										}
									}
									if (iLocal_138)
									{
										if (is_vehicle_driveable(iLocal_65, 0))
										{
											if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_65, 150f, 150f, 150f, 0, 1, 0))
											{
												iLocal_49 = 9;
											}
										}
									}
								}
								if (func_115())
								{
									func_131();
									iLocal_49 = 3;
								}
								else if (func_132())
								{
									func_131();
									func_113();
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_132)
								{
									case 0:
										iLocal_49 = 3;
										break;
									
									case 1:
										iLocal_49 = 3;
										break;
									
									case 3:
										iLocal_49 = 3;
										break;
									
									case 4:
										iLocal_49 = 3;
										break;
									
									case 5:
										if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
										{
											iLocal_140 = 1;
											iLocal_51 = 9;
										}
										else
										{
											iLocal_51 = 13;
										}
										iLocal_49 = 1;
										break;
								}
								if (func_132())
								{
									switch (iLocal_50)
									{
										case 2:
											func_112();
											break;
										
										case 4:
											func_111();
											break;
										
										case 5:
											func_110();
											break;
										}
								}
								break;
							
							case 3:
								func_107();
								task_clear_look_at(PLAYER::PLAYER_PED_ID());
								if (!PED::IS_PED_INJURED(iLocal_72))
								{
									play_pain(iLocal_72, 3, 0f, 0);
									if (!is_ped_in_any_vehicle(iLocal_72, 0))
									{
										if (!iLocal_117)
										{
											if (is_entity_playing_anim(iLocal_72, "random@homelandsecurity", "idle_girl", 3) && !PED::IS_PED_RAGDOLL(iLocal_72))
											{
												_set_ped_ragdoll_flag(iLocal_72, 16);
												open_sequence_task(&iLocal_136);
												AI::TASK_PLAY_ANIM(false, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0, 0, 0, 0);
												AI::TASK_PLAY_ANIM(false, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0, 0, 0, 0);
												close_sequence_task(iLocal_136);
												task_perform_sequence(iLocal_72, iLocal_136);
												clear_sequence_task(&iLocal_136);
												iLocal_117 = 1;
											}
											else
											{
												task_cower(iLocal_72, -1);
												iLocal_117 = 1;
											}
										}
										else if ((((!is_entity_playing_anim(iLocal_72, "random@homelandsecurity", "idle_girl", 3) && !is_entity_playing_anim(iLocal_72, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !is_entity_playing_anim(iLocal_72, "random@homelandsecurity", "knees_loop_girl", 1)) && AI::GET_SCRIPT_TASK_STATUS(iLocal_72, 474215631) != 0) && AI::GET_SCRIPT_TASK_STATUS(iLocal_72, 474215631) != 1)
										{
											iLocal_117 = 0;
										}
									}
									else if (is_vehicle_driveable(iLocal_65, 0))
									{
										if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_65, 0))
										{
											if (does_blip_exist(iLocal_120))
											{
												remove_blip(&iLocal_120);
											}
										}
									}
								}
								else
								{
									func_106();
								}
								if (!func_105())
								{
									if (iLocal_129 < GAMEPLAY::GET_GAME_TIMER())
									{
										if (func_104())
										{
											if (!PED::IS_PED_INJURED(iLocal_52[0]))
											{
												func_103(&uLocal_154, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!PED::IS_PED_INJURED(iLocal_52[1]))
										{
											func_103(&uLocal_154, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_129 = GAMEPLAY::GET_GAME_TIMER() + GAMEPLAY::GET_RANDOM_INT_IN_RANGE(4500, 5000);
									}
								}
								if (PED::IS_PED_INJURED(iLocal_52[0]))
								{
									if (does_blip_exist(uLocal_121[0]))
									{
										remove_blip(&(uLocal_121[0]));
									}
									func_102(&uLocal_154, 5);
								}
								else if (_0x6CD5A433374D4CFB(iLocal_52[0], PLAYER::PLAYER_PED_ID()) || is_entity_at_entity(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (does_blip_exist(uLocal_121[0]))
								{
									remove_blip(&(uLocal_121[0]));
								}
								if (PED::IS_PED_INJURED(iLocal_52[1]))
								{
									if (does_blip_exist(uLocal_121[1]))
									{
										remove_blip(&(uLocal_121[1]));
									}
									func_102(&uLocal_154, 4);
								}
								else if (_0x6CD5A433374D4CFB(iLocal_52[1], PLAYER::PLAYER_PED_ID()) || is_entity_at_entity(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (does_blip_exist(uLocal_121[1]))
								{
									remove_blip(&(uLocal_121[1]));
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
								{
									if (((has_entity_been_damaged_by_weapon(iLocal_52[0], joaat("weapon_stungun"), 0) && has_entity_been_damaged_by_weapon(iLocal_52[1], joaat("weapon_stungun"), 0)) || (PED::IS_PED_DEAD_OR_DYING(iLocal_52[0], 1) && PED::IS_PED_DEAD_OR_DYING(iLocal_52[1], 1))) || func_101())
									{
										if (does_blip_exist(uLocal_121[0]))
										{
											remove_blip(&(uLocal_121[0]));
										}
										if (does_blip_exist(uLocal_121[1]))
										{
											remove_blip(&(uLocal_121[1]));
										}
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 15f, 15f, 15f, 0, 1, 0))
											{
												if (!func_105())
												{
													func_103(&uLocal_154, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													iLocal_90 = false;
													iLocal_108 = 1;
													_set_ped_reset_ragdoll_flag(iLocal_72, 16);
													clear_entity_last_damage_entity(iLocal_72);
													iLocal_49 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!iLocal_90)
								{
									if (!PED::IS_PED_INJURED(iLocal_72))
									{
										if ((is_entity_playing_anim(iLocal_72, "random@homelandsecurity", "idle_to_knees_girl", 1) || is_entity_playing_anim(iLocal_72, "random@homelandsecurity", "knees_loop_girl", 1)) && !PED::IS_PED_RAGDOLL(iLocal_72))
										{
											AI::TASK_PLAY_ANIM(iLocal_72, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, 0, 0, 0);
										}
										else
										{
											AI::CLEAR_PED_TASKS(iLocal_72);
										}
										set_ped_group_member_passenger_index(iLocal_72, false);
										set_ped_as_group_member(iLocal_72, func_100());
										set_ped_never_leaves_group(iLocal_72, 1);
										func_99();
										iLocal_90 = true;
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_72))
								{
									if (is_entity_playing_anim(iLocal_72, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (get_entity_anim_current_time(iLocal_72, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											AI::CLEAR_PED_TASKS(iLocal_72);
										}
									}
								}
								if (!iLocal_92)
								{
									if (!func_105())
									{
										if (func_103(&uLocal_154, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_92 = 1;
										}
									}
								}
								else if (!iLocal_91)
								{
									if (!func_105())
									{
										if (func_98() == 0)
										{
											func_103(&uLocal_154, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_98() == 1)
										{
											func_103(&uLocal_154, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_91 = 1;
									}
								}
								if (iLocal_90)
								{
									if (!PED::IS_PED_INJURED(iLocal_72))
									{
										if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 8f, 8f, 8f, 0, 1, 0) || is_ped_in_any_taxi(PLAYER::PLAYER_PED_ID()))
										{
											if (does_blip_exist(iLocal_120))
											{
												remove_blip(&iLocal_120);
											}
										}
										else if (!does_blip_exist(iLocal_120))
										{
											iLocal_120 = func_96(iLocal_72, 0, 145);
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_52[0]))
								{
									if (_0x6CD5A433374D4CFB(iLocal_52[0], PLAYER::PLAYER_PED_ID()))
									{
										if (get_player_wanted_level(player_id()) < 2)
										{
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_52[1]))
								{
									if (_0x6CD5A433374D4CFB(iLocal_52[1], PLAYER::PLAYER_PED_ID()))
									{
										if (get_player_wanted_level(player_id()) < 2)
										{
										}
									}
								}
								if (iLocal_91 && func_95())
								{
									if (!func_105())
									{
										func_93();
										wait(false);
										func_103(&uLocal_154, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										set_ped_as_no_longer_needed(&(iLocal_52[0]));
										set_ped_as_no_longer_needed(&(iLocal_52[1]));
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											if (is_ped_in_group(iLocal_72))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_52)
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar0]))
													{
														set_ped_as_no_longer_needed(&(iLocal_52[iVar0]));
													}
													iVar0++;
												}
												set_wanted_level_multiplier(1f);
												iLocal_49 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_87();
								func_82();
								func_81();
								func_78();
								func_77();
								if (func_76(vLocal_93))
								{
									func_62(0);
									func_93();
									wait(false);
									func_103(&uLocal_154, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_60())
								{
									func_62(0);
									func_93();
									wait(false);
									func_103(&uLocal_154, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_72))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_93, Global_22, true, true, 0) && is_entity_at_entity(iLocal_72, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, 0, 1, 0))
									{
										if (is_ped_in_group(iLocal_72))
										{
											if (does_blip_exist(iLocal_120))
											{
												remove_blip(&iLocal_120);
											}
											if (does_blip_exist(iLocal_124))
											{
												remove_blip(&iLocal_124);
											}
											if (does_blip_exist(iLocal_125))
											{
												remove_blip(&iLocal_125);
											}
											if (is_ped_in_group(iLocal_72))
											{
												remove_ped_from_group(iLocal_72);
											}
											if (func_95())
											{
												if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
												{
													_task_bring_vehicle_to_halt(get_players_last_vehicle(), 5f, 2, 0);
												}
												iLocal_49 = 6;
											}
											else
											{
												func_93();
												wait(false);
												func_103(&uLocal_154, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!PED::IS_PED_INJURED(iLocal_72))
												{
													open_sequence_task(&iLocal_136);
													task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 5000, 2052, 2);
													task_follow_nav_mesh_to_coord(false, vLocal_96, 1f, -1, 0.25f, 0, 38.9844f);
													task_start_scenario_in_place(false, "WORLD_HUMAN_SMOKING", 0, 1);
													close_sequence_task(iLocal_136);
													task_perform_sequence(iLocal_72, iLocal_136);
													clear_sequence_task(&iLocal_136);
													set_ped_keep_task(iLocal_72, true);
												}
												func_34(func_98(), 1, 80, 0, 1);
												iLocal_49 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_33();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_106();
								break;
						}
						if (iLocal_150 && !iLocal_151)
						{
							if (iLocal_49 != 6)
							{
								if (is_synchronized_scene_running(iLocal_149))
								{
									if (get_synchronized_scene_phase(iLocal_149) > 0.85f)
									{
										if (is_vehicle_driveable(iLocal_65, 0))
										{
											if (!PED::IS_PED_INJURED(iLocal_72))
											{
												if (!is_ped_in_vehicle(iLocal_72, iLocal_65, 0))
												{
													if (!PED::IS_PED_RAGDOLL(iLocal_72))
													{
														AI::CLEAR_PED_TASKS(iLocal_72);
														set_ped_into_vehicle(iLocal_72, iLocal_65, 2);
														set_ped_keep_task(iLocal_72, true);
														iLocal_151 = 1;
													}
													else
													{
														iLocal_151 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_72))
							{
								PED::DELETE_PED(&iLocal_72);
							}
							func_4();
						}
						if ((iLocal_49 != 0 && iLocal_49 != 6) && iLocal_49 != 7)
						{
							if (func_1())
							{
								iLocal_49 = 9;
							}
						}
						if (iLocal_49 == 4 || iLocal_49 == 5)
						{
							if (!PED::IS_PED_INJURED(iLocal_72))
							{
								if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 150f, 150f, 150f, 0, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), 1))
								{
									AI::TASK_SMART_FLEE_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
									func_93();
									func_106();
								}
							}
						}
						if (iLocal_49 < 5)
						{
							set_all_random_peds_flee_this_frame(player_id());
						}
						if (PED::IS_PED_INJURED(iLocal_52[0]))
						{
							if (does_blip_exist(uLocal_121[0]))
							{
								remove_blip(&(uLocal_121[0]));
							}
						}
						if (PED::IS_PED_INJURED(iLocal_52[1]))
						{
							if (does_blip_exist(uLocal_121[1]))
							{
								remove_blip(&(uLocal_121[1]));
							}
						}
						if (PED::IS_PED_INJURED(iLocal_72))
						{
							if (does_blip_exist(iLocal_120))
							{
								remove_blip(&iLocal_120);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_204();
		}
	}
}

bool func_1()
{
	int[] iVar0 = new int[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]))
	{
		if (PED::IS_PED_INJURED(iLocal_52[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
	{
		if (PED::IS_PED_INJURED(iLocal_52[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_72))
	{
		if (PED::IS_PED_INJURED(iLocal_72))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return true;
	}
	return false;
}

bool func_2()
{
	if (Global_25355)
	{
		func_3(4);
		return true;
	}
	return false;
}

void func_3(int iParam0)
{
	Global_101140 = iParam0;
}

void func_4()
{
	while (func_105())
	{
		wait(false);
	}
	while (!func_32())
	{
		wait(false);
	}
	func_8(-1, 0);
	func_5();
	func_204();
}

void func_5()
{
	func_6();
}

bool func_6()
{
	if (func_7(0))
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

int func_7(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_8(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_3(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, auto uParam1, auto uParam2)
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
		func_13(891 + iParam0, 1, -1, 1);
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
		func_10();
	}
}

void func_10()
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
		func_12(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_11() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_6();
				}
			}
		}
	}
}

auto func_11()
{
	return Global_25120;
}

int func_12(int iParam0, int iParam1)
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

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_14();
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

auto func_14()
{
	return Global_1312747;
}

int func_15(int iParam0, int iParam1)
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

bool func_16(int iParam0)
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

void func_17(int iParam0)
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

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_20();
	}
}

void func_20()
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

int func_21()
{
	func_22();
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

void func_22()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_26(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_25(PLAYER::PLAYER_PED_ID());
			if (func_24(iVar0) && (!func_23(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_24(Global_101154.f_1826.f_539.f_3549))
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

int func_23(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_27(int iParam0)
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

void func_28(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)
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

auto func_30()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_31(cVar0);
	return uVar16;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_32()
{
	return true;
}

void func_33()
{
	switch (iLocal_152)
	{
		case 0:
			func_93();
			wait(false);
			func_103(&uLocal_154, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_152++;
			break;
		
		case 1:
			iLocal_152++;
			break;
		
		case 2:
			iLocal_152++;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				open_sequence_task(&iLocal_136);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 5000, 2052, 2);
				task_follow_nav_mesh_to_coord(false, vLocal_96, 1f, -1, 0.25f, 0, 38.9844f);
				task_start_scenario_in_place(false, "WORLD_HUMAN_SMOKING", 0, 1);
				close_sequence_task(iLocal_136);
				task_perform_sequence(iLocal_72, iLocal_136);
				clear_sequence_task(&iLocal_136);
				set_ped_keep_task(iLocal_72, true);
			}
			iLocal_152++;
			break;
		
		case 4:
			func_34(func_98(), 1, 80, 0, 1);
			set_player_control(player_id(), true, 0);
			func_4();
			break;
	}
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	func_35(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

bool func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_59();
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
					func_58(99, 1);
					func_57(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_57(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_57(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_43(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_42(5))
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
							func_57(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_42(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_57(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_57(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_57(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_property"), iParam3);
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
									func_57(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_57(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_42(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_57(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_57(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_41(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_58(95, iParam3);
					break;
				
				case 1:
					func_58(97, iParam3);
					break;
				
				case 2:
					func_58(96, iParam3);
					break;
			}
			func_58(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_38(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_38(iVar1);
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
					func_57(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_57(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_57(joaat("sp2_total_cash_earned"), iParam3);
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
	func_37(iParam0);
	if (Global_35711 == 15)
	{
		func_36(0);
	}
	return true;
}

void func_36(int iParam0)
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

void func_37(int iParam0)
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

void func_38(int iParam0)
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
	else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_40() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_40() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_39(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_39(int iParam0)
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

int func_40()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_41(int iParam0)
{
	func_58(93, iParam0);
	func_58(29, iParam0);
	func_58(30, iParam0);
}

int func_42(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_40() /*10375*/].f_7704.f_10, iParam0);
}

bool func_43(int iParam0)
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
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_44(27, 1);
	return true;
}

int func_44(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_45(iParam0, iParam1);
}

bool func_45(int iParam0, int iParam1)
{
	if (func_23(14) && !func_56(iParam0))
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
	if (func_55(&Global_2563627))
	{
		if (func_53(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_46(&Global_2563627, iParam0))
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

bool func_46(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_23(14) && !func_56(iParam1))
	{
		return false;
	}
	if (func_53(uParam0, iParam1))
	{
		return false;
	}
	if (func_52(uParam0) < 0f)
	{
		func_51(uParam0, 0);
	}
	func_49(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_47(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_47(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_23(14) && !func_56(iParam1))
	{
		return false;
	}
	if (func_53(uParam0, iParam1))
	{
		return false;
	}
	if (func_52(uParam0) < 0f)
	{
		func_51(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_48(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_48(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_49(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_50(uParam0, iVar0);
		iVar0++;
	}
	func_51(uParam0, Global_2563626 - 0.5f);
}

void func_50(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_51(auto uParam0, float fParam1)
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

auto func_52(auto uParam0)
{
	return *uParam0.f_72;
}

int func_53(auto uParam0, int iParam1)
{
	return func_54(uParam0, iParam1) != -1;
}

int func_54(auto uParam0, int iParam1)
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

int func_55(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_56(int iParam0)
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

void func_57(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_58(int iParam0, int iParam1)
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

void func_59()
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

bool func_60()
{
	if (func_98() == 2)
	{
		if (func_61())
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

auto func_61()
{
	return Global_25354;
}

void func_62(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_77)
		{
			if (func_65(&uLocal_154, "REHOMAU", &Local_84, &Local_78, 8, 0, 0))
			{
				iLocal_77 = 0;
			}
		}
	}
	else if (!iLocal_77 && is_scripted_conversation_ongoing())
	{
		Local_84 = {func_64()};
		Local_78 = {func_63()};
		func_113();
		iLocal_77 = 1;
	}
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

struct<6> func_64()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
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
	if (func_23(14))
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
		Global_14413 = func_98();
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

bool func_76(Vector3 vParam0)
{
	if (func_98() == 2)
	{
		if (func_61() && !Global_25357)
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

void func_77()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (!iLocal_105)
		{
			if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
			{
				if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), get_players_last_vehicle(), 1) && is_ped_in_vehicle(iLocal_72, get_players_last_vehicle(), 0))
				{
					func_62(0);
					func_93();
					wait(false);
					func_103(&uLocal_154, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_105 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
		{
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), get_players_last_vehicle(), 0) && is_ped_in_vehicle(iLocal_72, get_players_last_vehicle(), 0))
			{
				iLocal_105 = 0;
			}
		}
		if (!iLocal_106)
		{
			if (is_ped_jacking(PLAYER::PLAYER_PED_ID()))
			{
				func_62(0);
				func_93();
				wait(false);
				func_103(&uLocal_154, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_106 = 1;
			}
		}
		else if (!is_ped_jacking(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_106 = 0;
		}
		if (!iLocal_107)
		{
			if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
			{
				func_62(0);
				func_93();
				wait(false);
				func_103(&uLocal_154, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_107 = 1;
			}
		}
		else if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_107 = 0;
		}
	}
}

void func_78()
{
	if (!func_79())
	{
		func_62(1);
	}
	if (!func_105())
	{
		switch (iLocal_130)
		{
			case 0:
				if (func_98() == 0)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			
			case 1:
				func_103(&uLocal_154, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_130++;
				break;
			
			case 2:
				func_103(&uLocal_154, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_130++;
				break;
			
			case 3:
				if (func_98() == 0)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			
			case 4:
				func_103(&uLocal_154, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_130++;
				break;
			
			case 5:
				if (func_98() == 0)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			
			case 6:
				func_103(&uLocal_154, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_130++;
				break;
			
			case 7:
				func_103(&uLocal_154, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_130++;
				break;
			
			case 8:
				if (func_98() == 0)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			
			case 9:
				func_103(&uLocal_154, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_130++;
				break;
			}
	}
}

bool func_79()
{
	if (((((((((func_80("REHOM_QM") || func_80("REHOM_GETOUT")) || func_80("REHOM_SHOOT")) || func_80("REHOM_JACK")) || func_80("REHOM_WRONG")) || func_80("REHOM_CULT")) || func_80("REHOM_STOP")) || func_80("REHOM_NOVEH")) || func_80("REHOM_UNS1")) || func_80("REHOM_UNS2"))
	{
		return true;
	}
	return false;
}

bool func_80(char* sParam0)
{
	auto uVar0;
	
	if (func_105())
	{
		MemCopy(&uVar0, {func_64()}, 4);
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

void func_81()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (is_ped_on_foot(iLocal_72))
		{
			if (!iLocal_142)
			{
				iLocal_143 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_142 = 1;
			}
			else
			{
				iLocal_144 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_142 = 0;
		}
		if (iLocal_144 - iLocal_143 > 180000)
		{
			if (is_ped_in_group(iLocal_72))
			{
				remove_ped_from_group(iLocal_72);
				func_103(&uLocal_154, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_106();
			}
		}
	}
}

void func_82()
{
	if (is_ped_stopped(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_145)
		{
			iLocal_147 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_145 = 1;
		}
		else
		{
			iLocal_148 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_148 = 0;
		iLocal_145 = 0;
		iLocal_146 = 0;
	}
	if (iLocal_148 - iLocal_147 > 50000 && !iLocal_146)
	{
		func_62(0);
		func_93();
		wait(false);
		func_103(&uLocal_154, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_146 = 1;
	}
	if (iLocal_148 - iLocal_147 > 60000 && iLocal_146)
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			AI::TASK_SMART_FLEE_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			func_83(iLocal_72, 120000, 0);
			set_ped_keep_task(iLocal_72, true);
			if (is_ped_in_group(iLocal_72))
			{
				remove_ped_from_group(iLocal_72);
			}
		}
		func_106();
	}
}

bool func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = func_86(iParam0);
	if (!iVar0 == -1)
	{
		return true;
	}
	iVar1 = func_85(iParam0);
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
	iVar2 = func_84();
	if (iVar2 == -1)
	{
		return false;
	}
	Global_36616[iVar2 /*5*/] = 0;
	Global_36616[iVar2 /*5*/].f_1 = iParam0;
	Global_36616[iVar2 /*5*/].f_2 = iParam1;
	Global_36616[iVar2 /*5*/].f_3 = iParam1;
	Global_36616[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		Global_36837 = 1;
	}
	Global_36615++;
	return true;
}

int func_84()
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

int func_85(int iParam0)
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

int func_86(int iParam0)
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

void func_87()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 8f, 8f, 8f, 0, 1, 0) || is_ped_in_any_taxi(PLAYER::PLAYER_PED_ID()))
		{
			if (does_blip_exist(iLocal_120))
			{
				remove_blip(&iLocal_120);
			}
			if (!is_ped_in_group(iLocal_72))
			{
				set_ped_as_group_member(iLocal_72, get_player_group(player_id()));
				set_ped_group_member_passenger_index(iLocal_72, false);
			}
			if (!is_player_wanted_level_greater(player_id(), 0))
			{
				if (!does_blip_exist(iLocal_124))
				{
					iLocal_124 = func_91(vLocal_93, 1);
				}
				if (is_ped_in_any_taxi(PLAYER::PLAYER_PED_ID()))
				{
					if (!does_blip_exist(iLocal_124))
					{
						iLocal_124 = func_91(vLocal_93, 1);
					}
				}
				if (func_98() == 2 && !func_90())
				{
					if (!does_blip_exist(iLocal_125))
					{
						iLocal_125 = func_91(vLocal_99, 0);
						set_blip_sprite(iLocal_125, 269);
						func_88();
					}
				}
			}
		}
		else
		{
			if (!does_blip_exist(iLocal_120))
			{
				iLocal_120 = func_96(iLocal_72, 0, 145);
			}
			if (does_blip_exist(iLocal_124))
			{
				remove_blip(&iLocal_124);
			}
		}
	}
}

void func_88()
{
	if (func_98() == 2)
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

bool func_90()
{
	if (Global_101154.f_29520.f_5 == 1000)
	{
		return true;
	}
	return false;
}

int func_91(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_92(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_92(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_93()
{
	Global_14578 = 0;
	func_94();
}

void func_94()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

bool func_95()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_118 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (is_vehicle_driveable(iLocal_118, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (is_ped_sitting_in_vehicle(iLocal_72, iLocal_118))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_97(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_97(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_92(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_92(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_92(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

auto func_98()
{
	func_22();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_99()
{
	if (!func_90())
	{
		if (func_98() == 2)
		{
			Global_25354 = 1;
		}
	}
}

int func_100()
{
	return get_player_group(get_player_index());
}

bool func_101()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
	{
		if (((is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_65, 0) && is_ped_in_vehicle(iLocal_72, iLocal_65, 0)) && !is_ped_in_vehicle(iLocal_52[0], iLocal_65, 0)) && !is_ped_in_vehicle(iLocal_52[1], iLocal_65, 0))
		{
			return true;
		}
	}
	return false;
}

void func_102(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

int func_103(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_104()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_105()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_106()
{
	func_204();
}

void func_107()
{
	if (!iLocal_109)
	{
		if (!PED::IS_PED_INJURED(iLocal_52[0]))
		{
			set_ped_combat_movement(iLocal_52[0], 0);
			AI::CLEAR_PED_TASKS(iLocal_52[0]);
			open_sequence_task(&iLocal_136);
			task_clear_look_at(false);
			task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
			close_sequence_task(iLocal_136);
			task_perform_sequence(iLocal_52[0], iLocal_136);
			clear_sequence_task(&iLocal_136);
			set_ped_keep_task(iLocal_52[0], true);
			if (does_blip_exist(uLocal_121[0]))
			{
				set_blip_as_friendly(uLocal_121[0], false);
			}
			settimerb(false);
			iLocal_109 = 1;
		}
		else
		{
			settimerb(500);
			iLocal_109 = 1;
		}
	}
	if (!iLocal_110)
	{
		if (does_blip_exist(uLocal_121[1]))
		{
			set_blip_as_friendly(uLocal_121[1], false);
		}
		func_93();
		wait(false);
		if (!PED::IS_PED_INJURED(iLocal_52[1]))
		{
			func_108(iLocal_52[1], "GENERIC_INSULT_HIGH", 24);
			set_ped_combat_movement(iLocal_52[1], 2);
			if ((is_entity_playing_anim(iLocal_52[1], "random@homelandsecurity", "idle_cop_ground", 3) || is_synchronized_scene_running(iLocal_149)) && !PED::IS_PED_RAGDOLL(iLocal_52[1]))
			{
				_set_ped_ragdoll_flag(iLocal_52[1], 16);
				open_sequence_task(&iLocal_136);
				AI::TASK_PLAY_ANIM(false, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0, 0, 0, 0);
				task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
				close_sequence_task(iLocal_136);
				task_perform_sequence(iLocal_52[1], iLocal_136);
				clear_sequence_task(&iLocal_136);
				set_ped_keep_task(iLocal_52[1], true);
				iLocal_110 = 1;
			}
			else
			{
				task_combat_ped(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_52[1], true);
				iLocal_110 = 1;
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_52[1]))
	{
		if (((!is_entity_playing_anim(iLocal_52[1], "random@homelandsecurity", "idle_cop_ground", 3) && !is_entity_playing_anim(iLocal_52[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && AI::GET_SCRIPT_TASK_STATUS(iLocal_52[1], 780511057) != 0) && AI::GET_SCRIPT_TASK_STATUS(iLocal_52[1], 780511057) != 1)
		{
			iLocal_110 = 1;
		}
	}
}

void func_108(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_109(iParam2), 1);
}

int func_109(int iParam0)
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

void func_110()
{
	iLocal_49 = 3;
}

void func_111()
{
	func_93();
	wait(false);
	func_103(&uLocal_154, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_49 = 3;
}

void func_112()
{
	iLocal_49 = 3;
}

void func_113()
{
	Global_14578 = 0;
	func_114();
}

void func_114()
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

bool func_115()
{
	iLocal_126 = 0;
	while (iLocal_126 <= 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_52[iLocal_126], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52[iLocal_126], PLAYER::PLAYER_PED_ID(), 1))
			{
				return true;
			}
		}
		iLocal_126++;
	}
	return false;
}

void func_116()
{
	iLocal_128 = GAMEPLAY::GET_GAME_TIMER();
	if (!iLocal_138)
	{
		switch (iLocal_51)
		{
			case 0:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if (func_103(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_51 = 1;
				}
				break;
			
			case 1:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if (func_103(&uLocal_154, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_51 = 2;
				}
				break;
			
			case 2:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if (iLocal_128 - iLocal_127 > 6000)
				{
					if (func_103(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_51 = 3;
					}
				}
				break;
			
			case 3:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if (func_103(&uLocal_154, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_51 = 4;
				}
				break;
			
			case 4:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if (iLocal_128 - iLocal_127 > 5500)
				{
					if (func_103(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_51 = 5;
					}
				}
				break;
			
			case 5:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if (!iLocal_115 && timera() > 5000)
				{
					open_sequence_task(&iLocal_136);
					task_look_at_entity(false, iLocal_72, -1, 2054, 2);
					task_turn_ped_to_face_entity(false, iLocal_72, -1);
					close_sequence_task(iLocal_136);
					task_perform_sequence(iLocal_52[0], iLocal_136);
					set_ped_keep_task(iLocal_52[0], true);
					iLocal_115 = 1;
				}
				if (iLocal_128 - iLocal_127 > 3000 || iLocal_114)
				{
					if (((is_vehicle_driveable(iLocal_65, 0) && !PED::IS_PED_INJURED(iLocal_52[0])) && !PED::IS_PED_INJURED(iLocal_52[1])) && !PED::IS_PED_INJURED(iLocal_72))
					{
						if (is_synchronized_scene_running(iLocal_149))
						{
							if (get_synchronized_scene_phase(iLocal_149) > 0.98f)
							{
								if (!func_105())
								{
									if (is_ped_facing_ped(iLocal_52[0], iLocal_72, 10f))
									{
										if (func_103(&uLocal_154, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											task_clear_look_at(iLocal_52[0]);
											iLocal_149 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
											attach_synchronized_scene_to_entity(iLocal_149, iLocal_65, 0);
											task_synchronized_scene(iLocal_72, iLocal_149, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1000f, 0);
											task_synchronized_scene(iLocal_52[0], iLocal_149, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1000f, 0);
											task_synchronized_scene(iLocal_52[1], iLocal_149, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1000f, 0);
											play_entity_anim(iLocal_65, "exit_car", "random@homelandsecurity", 4f, false, 0, 0, 0f, 0);
											iLocal_150 = 1;
											iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
											iLocal_51 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_119())
				{
					iLocal_51 = 15;
				}
				break;
			
			case 15:
				if (((is_vehicle_driveable(iLocal_65, 0) && !PED::IS_PED_INJURED(iLocal_52[0])) && !PED::IS_PED_INJURED(iLocal_52[1])) && !PED::IS_PED_INJURED(iLocal_72))
				{
					if (is_synchronized_scene_running(iLocal_149))
					{
						if (!func_105())
						{
							if (is_ped_facing_ped(iLocal_52[0], iLocal_72, 10f))
							{
								if (func_103(&uLocal_154, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									task_clear_look_at(iLocal_52[0]);
									iLocal_149 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
									attach_synchronized_scene_to_entity(iLocal_149, iLocal_65, 0);
									task_synchronized_scene(iLocal_72, iLocal_149, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1000f, 0);
									task_synchronized_scene(iLocal_52[0], iLocal_149, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1000f, 0);
									task_synchronized_scene(iLocal_52[1], iLocal_149, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1000f, 0);
									play_entity_anim(iLocal_65, "exit_car", "random@homelandsecurity", 2f, false, 0, 0, 0f, 0);
									iLocal_150 = 1;
									iLocal_127 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_51 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_117();
				if (is_synchronized_scene_running(iLocal_149))
				{
					if (get_synchronized_scene_phase(iLocal_149) > 0.45f)
					{
						if ((is_vehicle_driveable(iLocal_65, 0) && !PED::IS_PED_INJURED(iLocal_72)) && !PED::IS_PED_INJURED(iLocal_52[0]))
						{
						}
					}
				}
				if (is_synchronized_scene_running(iLocal_149))
				{
					if (get_synchronized_scene_phase(iLocal_149) > 0.9f)
					{
						if (is_vehicle_driveable(iLocal_65, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_52[0]))
							{
								task_enter_vehicle(iLocal_52[0], iLocal_65, -1, -1, 1f, 9, 0);
								iLocal_51 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_117();
				if (is_synchronized_scene_running(iLocal_149))
				{
					if (get_synchronized_scene_phase(iLocal_149) > 0.95f)
					{
						if (is_vehicle_driveable(iLocal_65, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_52[1]))
							{
								task_enter_vehicle(iLocal_52[1], iLocal_65, -1, false, 1f, 9, 0);
								set_ped_keep_task(iLocal_52[1], true);
								iLocal_51 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_117();
				if ((is_vehicle_driveable(iLocal_65, 0) && !PED::IS_PED_INJURED(iLocal_52[0])) && !PED::IS_PED_INJURED(iLocal_52[1]))
				{
					if ((is_ped_sitting_in_vehicle(iLocal_72, iLocal_65) && is_ped_sitting_in_vehicle(iLocal_52[0], iLocal_65)) && is_ped_sitting_in_vehicle(iLocal_52[1], iLocal_65))
					{
						task_vehicle_drive_wander(iLocal_52[0], iLocal_65, 15f, 786468);
						set_vehicle_siren(iLocal_65, true);
						iLocal_138 = true;
					}
				}
				break;
			
			case 9:
				open_sequence_task(&iLocal_136);
				task_clear_look_at(false);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 20000, 0, 2);
				task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 0);
				close_sequence_task(iLocal_136);
				if (!PED::IS_PED_INJURED(iLocal_52[0]))
				{
					task_perform_sequence(iLocal_52[0], iLocal_136);
				}
				clear_sequence_task(&iLocal_136);
				if (!iLocal_112)
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3))
					{
						func_93();
						wait(false);
						func_103(&uLocal_154, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
					{
						func_93();
						wait(false);
						if (!PED::IS_PED_INJURED(iLocal_52[0]))
						{
							func_108(iLocal_52[0], "GUN_COOL", 24);
						}
					}
					iLocal_112 = 1;
					iLocal_134 = GAMEPLAY::GET_GAME_TIMER();
				}
				iLocal_51 = 10;
				break;
			
			case 10:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
				}
				else
				{
					iLocal_51 = 13;
				}
				if ((iLocal_135 - iLocal_134 > 6000 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && !iLocal_113)
				{
					if (func_103(&uLocal_154, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_134 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_113 = 1;
					}
					iLocal_51 = 11;
				}
				break;
			
			case 11:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
				}
				else
				{
					iLocal_51 = 13;
				}
				if ((iLocal_135 - iLocal_134 > 9000 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) || iLocal_140)
				{
					if (func_103(&uLocal_154, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_51 = 12;
					}
				}
				break;
			
			case 12:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
				}
				else
				{
					iLocal_51 = 13;
				}
				if (iLocal_135 - iLocal_134 > 13000)
				{
					iLocal_49 = 3;
				}
				break;
			
			case 13:
				if (!PED::IS_PED_INJURED(iLocal_52[0]))
				{
					open_sequence_task(&iLocal_136);
					task_clear_look_at(false);
					task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), -1);
					close_sequence_task(iLocal_136);
					task_perform_sequence(iLocal_52[0], iLocal_136);
					clear_sequence_task(&iLocal_136);
				}
				if (iLocal_141)
				{
					if (!PED::IS_PED_INJURED(iLocal_52[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_72))
						{
							if (AI::GET_SCRIPT_TASK_STATUS(iLocal_52[1], 1785177548) != 1)
							{
								open_sequence_task(&iLocal_136);
								task_clear_look_at(false);
								task_turn_ped_to_face_entity(false, iLocal_72, false);
								task_look_at_entity(false, iLocal_72, 20000, 0, 2);
								task_follow_to_offset_of_entity(false, iLocal_72, -1f, 0f, 0f, 1f, -1, 0.1f, 1);
								close_sequence_task(iLocal_136);
								task_perform_sequence(iLocal_52[1], iLocal_136);
								clear_sequence_task(&iLocal_136);
							}
						}
						else if (AI::GET_SCRIPT_TASK_STATUS(iLocal_52[1], 1785177548) != 1)
						{
							open_sequence_task(&iLocal_136);
							task_clear_look_at(false);
							task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
							task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 20000, 0, 2);
							close_sequence_task(iLocal_136);
							task_perform_sequence(iLocal_52[1], iLocal_136);
							clear_sequence_task(&iLocal_136);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_72))
					{
						if (AI::GET_SCRIPT_TASK_STATUS(iLocal_72, 1785177548) != 1)
						{
							task_seek_cover_from_ped(iLocal_72, PLAYER::PLAYER_PED_ID(), -1, 0);
							set_ped_keep_task(iLocal_72, true);
						}
					}
				}
				iLocal_51 = 14;
				break;
			
			case 14:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_119())
				{
					if (is_synchronized_scene_running(iLocal_149))
					{
						if (!iLocal_141)
						{
							if (!PED::IS_PED_INJURED(iLocal_52[1]))
							{
							}
							if (!PED::IS_PED_INJURED(iLocal_72))
							{
								task_seek_cover_from_ped(iLocal_72, PLAYER::PLAYER_PED_ID(), -1, 0);
								set_ped_keep_task(iLocal_72, true);
							}
							iLocal_141 = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_52[0]))
				{
					if (!func_105() && !iLocal_114)
					{
						if (func_104())
						{
							func_103(&uLocal_154, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_103(&uLocal_154, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_114 = 1;
					}
					iLocal_115 = 0;
					settimera(false);
					iLocal_127 = GAMEPLAY::GET_GAME_TIMER() - 4500;
					iLocal_51 = 5;
				}
			}
	}
}

void func_117()
{
	if (!func_105())
	{
		if (is_vehicle_driveable(iLocal_65, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (is_ped_in_vehicle(iLocal_72, iLocal_65, 0))
				{
					if (func_118(iLocal_72, 0) == 2)
					{
						if (iLocal_129 < GAMEPLAY::GET_GAME_TIMER())
						{
							func_103(&uLocal_154, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_129 = GAMEPLAY::GET_GAME_TIMER() + GAMEPLAY::GET_RANDOM_INT_IN_RANGE(3500, 4000);
						}
					}
				}
			}
		}
	}
}

int func_118(int iParam0, int iParam1)
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
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
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

bool func_119()
{
	if ((!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1])) && !PED::IS_PED_INJURED(iLocal_72))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if ((is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 1.5f, 1.5f, 5f, 0, 1, 2) || is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_52[1], 2.5f, 2.5f, 5f, 0, 1, 2)) || is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 1.5f, 1.5f, 5f, 0, 1, 2))
			{
				return true;
			}
		}
		else if ((is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 0.5f, 0.5f, 5f, 0, 1, 1) || is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_52[1], 0.5f, 0.5f, 5f, 0, 1, 1)) || is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 0.5f, 0.5f, 5f, 0, 1, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_120()
{
	if (!PED::IS_PED_INJURED(iLocal_52[1]))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_52[1], 6f, 6f, 6f, 0, 1, 0))
		{
			if (is_ped_facing_ped(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return true;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52[0]))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 6f, 6f, 6f, 0, 1, 0))
		{
			if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_121()
{
	if (!PED::IS_PED_INJURED(iLocal_52[1]))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_52[1], 6f, 6f, 6f, 0, 1, 1))
		{
			if (is_ped_facing_ped(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return true;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52[0]))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_52[0], 6f, 6f, 6f, 0, 1, 1))
		{
			if (is_ped_facing_ped(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_122(int iParam0)
{
	if (func_125())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_16(Global_101143))
		{
			func_123(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_16(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_89(func_124(iParam0), -1);
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
					func_89(func_124(iParam0), -1);
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
					func_89(func_124(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

char* func_124(int iParam0)
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

bool func_125()
{
	switch (func_126(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_126(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_130(0))
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
		if (!func_128(iParam2))
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
			func_127(uParam0, iParam4);
		}
	}
	return 2;
}

void func_127(auto uParam0, int iParam1)
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

int func_128(int iParam0)
{
	return func_129(iParam0, Global_35711);
}

bool func_129(int iParam0, int iParam1)
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

bool func_130(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_128(iParam0))
	{
		return false;
	}
	return true;
}

void func_131()
{
	if (does_blip_exist(iLocal_119))
	{
		remove_blip(&iLocal_119);
	}
	if (!does_blip_exist(iLocal_120))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72, 0))
		{
			iLocal_120 = func_96(iLocal_72, 0, 145);
			_0x75A16C3DA34F1245(iLocal_120, false);
		}
	}
	else
	{
		_0x75A16C3DA34F1245(iLocal_120, true);
	}
	iLocal_126 = 0;
	while (iLocal_126 <= 1)
	{
		if (!does_blip_exist(uLocal_121[iLocal_126]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_52[iLocal_126], 0))
			{
				uLocal_121[iLocal_126] = func_96(iLocal_52[iLocal_126], 0, 145);
				_0x75A16C3DA34F1245(uLocal_121[iLocal_126], false);
			}
		}
		else
		{
			_0x75A16C3DA34F1245(uLocal_121[iLocal_126], true);
		}
		iLocal_126++;
	}
}

bool func_132()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_133)
	{
		if (is_projectile_in_area(vLocal_66 - Vector(30f, 30f, 30f), vLocal_66 + Vector(30f, 30f, 30f), 1) || is_bullet_in_box(vLocal_66 - Vector(30f, 30f, 30f), vLocal_66 + Vector(30f, 30f, 30f), 1))
		{
			iLocal_50 = 2;
			return true;
		}
		if (!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1]))
		{
			if (is_entity_at_entity(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()) && is_entity_at_entity(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 6f, 6f, 6f, 0, 1, 0)))
				{
					if (((is_player_targetting_entity(player_id(), iLocal_52[0]) || is_player_free_aiming_at_entity(player_id(), iLocal_52[0])) || is_player_targetting_entity(player_id(), iLocal_52[1])) || is_player_free_aiming_at_entity(player_id(), iLocal_52[1]))
					{
						if (_0x6CD5A433374D4CFB(iLocal_52[0], PLAYER::PLAYER_PED_ID()) || _0x6CD5A433374D4CFB(iLocal_52[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_50 = 2;
							return true;
						}
					}
				}
			}
		}
		iVar0 = get_players_last_vehicle();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_65, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_65, PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_50 = 2;
					return true;
				}
				if (is_ped_on_specific_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_65) && get_entity_speed(PLAYER::PLAYER_PED_ID()) > 0.1f)
				{
					iLocal_50 = 2;
					return true;
				}
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_65, 0))
				{
					iLocal_50 = 2;
					return true;
				}
				if (is_vehicle_driveable(iVar0, 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_65, iVar0, 1))
					{
						iLocal_50 = 2;
						return true;
					}
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_65, PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_50 = 2;
				return true;
			}
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				iVar1 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_65, 0))
				{
					if (is_vehicle_attached_to_tow_truck(iVar1, iLocal_65))
					{
						iLocal_50 = 2;
						return true;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_52[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_52[0], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_50 = 5;
				return true;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[0]) && get_entity_speed(PLAYER::PLAYER_PED_ID()) > 0.1f)
			{
				iLocal_50 = 5;
				return true;
			}
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52[0], iVar0, 1))
				{
					iLocal_50 = 5;
					return true;
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_52[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_52[1], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_50 = 5;
				return true;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52[1]) && get_entity_speed(PLAYER::PLAYER_PED_ID()) > 0.1f)
			{
				iLocal_50 = 5;
				return true;
			}
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52[1], iVar0, 1))
				{
					iLocal_50 = 5;
					return true;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_50 = 4;
				return true;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72))
			{
				iLocal_50 = 4;
				return true;
			}
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_72, iVar0, 1))
				{
					iLocal_50 = 4;
					return true;
				}
			}
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_50 = 4;
			return true;
		}
	}
	return false;
}

void func_133()
{
	func_135(39, 1);
	func_135(40, 1);
	func_135(41, 1);
	func_135(42, 1);
	func_135(43, 1);
	func_135(44, 1);
	add_scenario_blocking_area(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, 0, 1, 1, 1);
	add_scenario_blocking_area(vLocal_96 - Vector(20f, 20f, 20f), vLocal_96 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	clear_area_of_peds(vLocal_73, 50f, 0);
	set_ped_paths_in_area(419f, -1387f, 28f, 427f, -1370f, 29f, false, 0);
	GAMEPLAY::SET_BIT(&uLocal_131, 5);
	iLocal_72 = PED::CREATE_PED(26, iLocal_76, vLocal_73, 0, 1, true);
	set_blocking_of_non_temporary_events(iLocal_72, true);
	set_model_as_no_longer_needed(iLocal_76);
	set_ped_can_be_targetted(iLocal_72, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_72, 185, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_72, 206, true);
	set_ped_flee_attributes(iLocal_72, 2, false);
	stop_ped_speaking(iLocal_72, 1);
	set_ambient_voice_name(iLocal_72, "REHOMGirl");
	set_ped_component_variation(iLocal_72, false, 2, true, 0);
	set_ped_component_variation(iLocal_72, 2, false, false, 0);
	set_ped_component_variation(iLocal_72, 3, true, 4, 0);
	set_ped_component_variation(iLocal_72, 4, false, 5, 0);
	set_ped_component_variation(iLocal_72, 6, true, false, 0);
	add_relationship_group("OFFICERS", &iLocal_153);
	iLocal_126 = 0;
	while (iLocal_126 <= 1)
	{
		iLocal_52[iLocal_126] = PED::CREATE_PED(6, iLocal_70, vLocal_55[iLocal_126 /*3*/], fLocal_62[iLocal_126], 1, true);
		set_blocking_of_non_temporary_events(iLocal_52[iLocal_126], true);
		set_model_as_no_longer_needed(iLocal_70);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_52[iLocal_126], iLocal_153);
		PED::SET_PED_CONFIG_FLAG(iLocal_52[iLocal_126], 42, true);
		iLocal_126++;
	}
	give_weapon_to_ped(iLocal_52[0], joaat("weapon_pistol"), -1, true, true);
	give_weapon_to_ped(iLocal_52[1], joaat("weapon_pistol"), -1, false, true);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_153, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_153, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_153);
	iLocal_65 = create_vehicle(iLocal_71, vLocal_66, fLocal_69, 1, true);
	set_vehicle_model_is_suppressed(iLocal_71, true);
	set_vehicle_on_ground_properly(iLocal_65);
	set_vehicle_siren(iLocal_65, true);
	func_134(&uLocal_154, 5, iLocal_52[0], "ACULTMember1", 0, 1);
	func_134(&uLocal_154, 4, iLocal_52[1], "ACULTMember2", 0, 1);
	func_134(&uLocal_154, 3, iLocal_72, "REHOMGirl", 0, 1);
	if (func_98() == 0)
	{
		func_134(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_98() == 1)
	{
		func_134(&uLocal_154, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	iLocal_149 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
	attach_synchronized_scene_to_entity(iLocal_149, iLocal_65, 0);
	task_synchronized_scene(iLocal_72, iLocal_149, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1000f, 0);
	task_synchronized_scene(iLocal_52[0], iLocal_149, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1000f, 0);
	task_synchronized_scene(iLocal_52[1], iLocal_149, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1000f, 0);
	set_synchronized_scene_looped(iLocal_149, true);
}

void func_134(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_135(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_142(iParam0, 2, 1))
		{
			func_141(iParam0, 2, 1);
		}
	}
	else if (func_142(iParam0, 2, 1))
	{
		func_136(iParam0, 2, 1);
	}
}

void func_136(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			iVar0 = func_139(func_140(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_137(func_140(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_137(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_138(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

int func_139(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_138(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_140(int iParam0)
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

void func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			iVar0 = func_139(func_140(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_137(func_140(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_142(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_139(func_140(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_143()
{
	STREAMING::REQUEST_MODEL(iLocal_76);
	STREAMING::REQUEST_MODEL(iLocal_70);
	STREAMING::REQUEST_MODEL(iLocal_71);
	request_anim_dict("random@homelandsecurity");
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_76) && STREAMING::HAS_MODEL_LOADED(iLocal_70)) && STREAMING::HAS_MODEL_LOADED(iLocal_71)) && has_anim_dict_loaded("random@homelandsecurity"))
	{
		iLocal_104 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_76);
		STREAMING::REQUEST_MODEL(iLocal_70);
		STREAMING::REQUEST_MODEL(iLocal_71);
		request_anim_dict("random@homelandsecurity");
	}
}

void func_144()
{
	iLocal_76 = joaat("a_f_y_tourist_01");
	iLocal_70 = joaat("a_m_o_acult_01");
	iLocal_71 = joaat("fugitive");
	vLocal_73 = {-174.0522f, 1905.611f, 197.0466f};
	vLocal_55[0 /*3*/] = {-174.3279f, 1903.972f, 197.0502f};
	fLocal_62[0] = 147.8596f;
	vLocal_55[1 /*3*/] = {-174.3233f, 1906.384f, 197.0145f};
	fLocal_62[1] = 164.5974f;
	vLocal_66 = {-172.4207f, 1905.183f, 197.1163f};
	fLocal_69 = 187.3899f;
	vLocal_93 = {469.8768f, 2617.532f, 42.2566f};
	vLocal_96 = {472.2393f, 2611.611f, 42.2676f};
	vLocal_99 = {-1034.6f, 4918.6f, 205.9f};
	iLocal_103 = 1;
}

bool func_145()
{
	if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_44) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_156())
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
		if (func_24(func_98()))
		{
			iVar36 = func_21();
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

bool func_157()
{
	if (!func_128(5))
	{
		return true;
	}
	if (func_152())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_156())
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

bool func_158()
{
	if ((Global_101143 == func_30() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_159(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_161(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_160();
}

void func_160()
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

void func_161(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_162(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_30();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_203())
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
			if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_156())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_7(0))
		{
			return false;
		}
		if (func_152())
		{
			return false;
		}
		if (func_202())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_24(func_98()))
		{
			if (func_146(100f, 1) != -1)
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
		if (!func_201(iParam3))
		{
			return false;
		}
		if (func_24(func_98()))
		{
			if (func_200(func_98()) == 4 || func_200(func_98()) == 5)
			{
				return false;
			}
		}
		if (func_24(func_98()))
		{
			if (!func_199(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_198(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_197())
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
		if (!func_188(4))
		{
			return false;
		}
		if (!func_128(5))
		{
			return false;
		}
		if (func_187(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_187(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_201(30) && !func_187(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_24(func_98()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_186(iVar8))
				{
					if (func_164(iVar4))
					{
						if (!func_163(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_98() != iVar4)
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

int func_163(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_164(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_165(iVar0);
}

int func_165(int iParam0)
{
	return func_166(iParam0, 1);
}

bool func_166(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_186(iParam0))
	{
		return false;
	}
	func_167(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_167(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_168(func_179(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_168(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_178(iParam0, iParam1))
	{
		iVar0 = func_177(iParam1);
		iVar1 = func_175(iParam0);
		iVar2 = func_175(iParam0) - func_175(iParam1);
		iVar3 = func_177(iParam0) - func_177(iParam1);
		iVar4 = func_174(iParam0) - func_174(iParam1);
		iVar5 = func_173(iParam0) - func_173(iParam1);
		iVar6 = func_172(iParam0) - func_172(iParam1);
		iVar7 = func_171(iParam0) - func_171(iParam1);
	}
	else
	{
		iVar0 = func_177(iParam0);
		iVar1 = func_175(iParam1);
		iVar2 = func_175(iParam1) - func_175(iParam0);
		iVar3 = func_177(iParam1) - func_177(iParam0);
		iVar4 = func_174(iParam1) - func_174(iParam0);
		iVar5 = func_173(iParam1) - func_173(iParam0);
		iVar6 = func_172(iParam1) - func_172(iParam0);
		iVar7 = func_171(iParam1) - func_171(iParam0);
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
		iVar4 += func_170(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_169(to_float(iVar0 + 1), 0f, 12f));
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

float func_169(Vector3 fParam0, float fParam1, float fParam2)
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

int func_170(int iParam0, int iParam1)
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

int func_171(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_172(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_173(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_174(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_175(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_176(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_177(int iParam0)
{
	return (iParam0 && 15);
}

bool func_178(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_186(iParam1) || !func_186(iParam0))
	{
		return true;
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
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_172(iParam0);
	iVar1 = func_172(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_171(iParam0);
	iVar1 = func_171(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_179()
{
	auto uVar0;
	
	func_185(&uVar0, get_clock_seconds());
	func_184(&uVar0, get_clock_minutes());
	func_183(&uVar0, TIME::GET_CLOCK_HOURS());
	func_182(&uVar0, get_clock_day_of_month());
	func_181(&uVar0, get_clock_month());
	func_180(&uVar0, get_clock_year());
	return uVar0;
}

void func_180(auto uParam0, int iParam1)
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

void func_181(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_182(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_175(*uParam0);
	if (iParam1 < 1 || iParam1 > func_170(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_183(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_184(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_185(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_186(int iParam0)
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
	iVar0 = func_171(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_172(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_173(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_175(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_177(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_174(iParam0);
	if (iVar5 < 1 || iVar5 > func_170(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_187(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_188(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_98();
				if (!func_24(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_196()) || Global_100201) || Global_25122) || func_195()) || func_73(8, -1)) || func_194()) || func_193()) || func_192()) || func_191()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_196()) || Global_25122) || func_195()) || func_73(8, -1)) || func_192()) || func_194()) || func_193()) || func_191()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_196()) || Global_100201) || Global_25122) || func_195()) || func_73(8, -1)) || func_192()) || func_194()) || func_193()) || func_191()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_196()) || Global_100201) || Global_25122) || func_195()) || func_73(8, -1)) || func_194()) || func_193()) || func_191()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_196() || get_player_wanted_level(player_id()) > 0) || func_73(8, -1)) || func_191()) || func_190()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_73(8, -1) || func_194()) || func_193()) || func_190()) || func_189())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_196()) || Global_25122) || func_195()) || func_73(8, -1)) || func_193()) || func_192()) || func_191()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_196()) || func_193()) || Global_100201) || Global_25122) || func_195()) || Global_36839) || func_73(8, -1)) || func_192()) || func_190()) || func_191()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_196()) || Global_100201) || Global_25122) || func_195()) || func_73(8, -1)) || func_192()) || func_190()) || func_194()) || func_193()) || func_191())
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

auto func_189()
{
	return Global_91317.f_1;
}

int func_190()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_191()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_192()
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

int func_193()
{
	return Global_91330.f_297 > 0;
}

int func_194()
{
	return Global_91330.f_296 > 0;
}

auto func_195()
{
	return Global_1315913;
}

int func_196()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_197()
{
	func_71();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_198(int iParam0)
{
	return func_178(func_179(), iParam0);
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_98();
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

int func_200(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_201(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_203())
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

bool func_202()
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

bool func_203()
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

void func_204()
{
	int iVar0;
	
	if (iLocal_102)
	{
		func_218(0);
		if (Global_25358)
		{
			trigger_music_event("AC_STOP");
		}
		func_217();
		remove_scenario_blocking_areas();
		set_ped_paths_back_to_original(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		reset_wanted_level_difficulty(player_id());
		set_wanted_level_multiplier(1f);
		func_93();
		if (iLocal_103)
		{
			set_model_as_no_longer_needed(iLocal_76);
			set_model_as_no_longer_needed(iLocal_70);
			set_model_as_no_longer_needed(iLocal_71);
			set_vehicle_model_is_suppressed(iLocal_71, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_52)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_52[iVar0]))
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						task_aim_gun_at_coord(iLocal_52[iVar0], func_216(player_id()), -1, 0, 0);
						set_ped_keep_task(iLocal_52[iVar0], true);
						if (!PED::IS_PED_INJURED(iLocal_72))
						{
							task_cower(iLocal_72, -1);
							set_ped_keep_task(iLocal_72, true);
						}
					}
					set_blocking_of_non_temporary_events(iLocal_52[iVar0], false);
				}
				set_ped_as_no_longer_needed(&(iLocal_52[iVar0]));
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_72))
		{
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_72, 317, true);
				if (is_ped_in_group(iLocal_72))
				{
					remove_ped_from_group(iLocal_72);
				}
				if (!is_ped_in_any_vehicle(iLocal_72, 0))
				{
					reset_ped_last_vehicle(iLocal_72);
				}
				set_blocking_of_non_temporary_events(iLocal_72, false);
			}
			set_ped_as_no_longer_needed(&iLocal_72);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
		{
			set_vehicle_as_no_longer_needed(&iLocal_65);
		}
		_0xDC0F817884CDD856(5, true);
		if (is_player_playing(player_id()))
		{
			if (!is_player_control_on(player_id()))
			{
				set_player_control(player_id(), true, 0);
			}
		}
	}
	func_205(-1);
	terminate_this_thread();
}

void func_205(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_158())
	{
		func_209(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_208(30000);
		StringCopy(&cVar0, func_207(Global_101143, 1), 64);
		if (func_29(Global_101143) > 0)
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
	func_206(&Global_25179);
	Global_101144 = 0;
	func_161(-1);
}

void func_206(auto uParam0)
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

char* func_207(int iParam0, int iParam1)
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

void func_208(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_209(int iParam0)
{
	func_210(iParam0, 0, func_215(iParam0));
}

void func_210(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_179();
	func_213(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_212(uParam0, &uVar0);
	Var1 = {func_211(&uVar0)};
}

struct<16> func_211(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_172(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_171(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_174(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_177(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_175(*uParam0), 64);
	return cVar0;
}

void func_212(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_213(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_175(*uParam0);
	iVar1 = func_177(*uParam0);
	iVar2 = func_174(*uParam0);
	iVar3 = func_173(*uParam0);
	iVar4 = func_172(*uParam0);
	iVar5 = func_171(*uParam0);
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
	iVar6 = func_170(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_170(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_214(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_214(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_185(uParam0, iParam1);
	func_184(uParam0, iParam2);
	func_183(uParam0, iParam3);
	func_181(uParam0, iParam5);
	func_182(uParam0, iParam4);
	func_180(uParam0, iParam6);
}

int func_215(int iParam0)
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

Vector3 func_216(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

void func_217()
{
	Global_25354 = 0;
	Global_25355 = 0;
	Global_25357 = 0;
	Global_25358 = 0;
	Global_25359 = 0;
}

void func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_135(iVar0, iParam0);
		iVar0++;
	}
}

