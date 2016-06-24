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
	int iLocal_29 = 0;
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
	auto uLocal_49 = 0;
	Vector3 vLocal_50 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	Vector3 vLocal_59 = 0;
	int iLocal_62 = 0;
	Vector3 vLocal_63 = 0;
	Vector3 vLocal_66 = 0;
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
	int[] iLocal_82 = new int[2];
	int iLocal_85 = 0;
	Vector3 vLocal_86 = 0;
	Vector3 fLocal_89 = 0;
	int iLocal_90 = 0;
	Vector3 vLocal_91 = 0;
	auto uLocal_94 = 0;
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
	auto uLocal_107 = 0;
	int iLocal_108 = 0;
	float fLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	Vector3 vLocal_114 = 0;
	Vector3 vLocal_117 = 0;
	Vector3 vLocal_120 = 0;
	Vector3 vLocal_123 = 0;
	Vector3 vLocal_126 = 0;
	Vector3 vLocal_129 = 0;
	Vector3 vLocal_132 = 0;
	Vector3 vLocal_135 = 0;
	Vector3 vLocal_138 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	auto uLocal_148 = 16;
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
	struct<2> Local_313 = 0;
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
	auto uLocal_330 = 5;
	auto uLocal_331 = 0;
	auto uLocal_332 = 0;
	auto uLocal_333 = 0;
	auto uLocal_334 = 0;
	auto uLocal_335 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = _0x4A9923385BDB9DAD();
	iLocal_48 = _get_blip_info_id_iterator();
	vLocal_63 = {1492.31f, 2136.53f, 89.15f};
	vLocal_66 = {1408.24f, 2522.803f, 41.0419f};
	vLocal_114 = {370.2576f, -1597.488f, 35.94954f};
	vLocal_117 = {824.992f, -1289.267f, 27.24564f};
	vLocal_120 = {450.1889f, -981.6754f, 42.69174f};
	vLocal_123 = {-1088.37f, -842.2911f, 30.27554f};
	vLocal_126 = {608.9076f, 0.806411f, 100.2497f};
	vLocal_129 = {-562.0159f, -130.8113f, 37.4369f};
	vLocal_132 = {1855.237f, 3683.236f, 33.29165f};
	vLocal_135 = {-443.5063f, 6016.231f, 30.71787f};
	vLocal_138 = {1693.518f, 2579.21f, 44.95713f};
	vLocal_59 = {Local_313.f_1[0 /*3*/]};
	func_185();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			if (is_ped_in_group(iLocal_72))
			{
				remove_ped_from_group(iLocal_72);
			}
		}
		func_170();
	}
	if (is_player_playing(player_id()))
	{
		if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			terminate_this_thread();
		}
	}
	if (func_128(vLocal_59, 22, iLocal_69, 0, 0))
	{
		func_125(22);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(false);
		if (is_world_point_within_brain_activation_range() || iLocal_96)
		{
			if (!func_124())
			{
				if (func_123())
				{
					func_170();
				}
			}
			_0x208784099002BC30("RE_PL", 0);
			switch (iLocal_53)
			{
				case 0:
					if (func_111())
					{
						func_170();
					}
					if (!iLocal_58)
					{
						func_110();
					}
					else
					{
						func_109();
					}
					if (iLocal_57)
					{
						iLocal_141 = 1;
						iLocal_53 = 1;
					}
					break;
				
				case 1:
					if (is_player_playing(player_id()))
					{
						switch (iLocal_54)
						{
							case 0:
								switch (iLocal_55)
								{
									case 0:
										func_102();
										break;
									
									case 1:
										if (iLocal_56 == 0)
										{
											if (!PED::IS_PED_INJURED(iLocal_72))
											{
												if ((is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 100f, 100f, 100f, 0, 1, 0) && !is_entity_occluded(iLocal_72)) || is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													if (does_blip_exist(iLocal_105))
													{
														_0x75A16C3DA34F1245(iLocal_105, true);
													}
													func_89();
													if (!func_88())
													{
														if (is_entity_playing_anim(iLocal_72, "random@prisoner_lift", "arms_waving", 3) || is_entity_playing_anim(iLocal_72, "random@prisoner_lift", "loop2_idlelook2", 3))
														{
															clear_ped_tasks(iLocal_72);
														}
														func_87(&uLocal_107);
													}
												}
											}
											else
											{
												func_86();
											}
											func_85();
											func_84();
										}
										else if (iLocal_56 == 1)
										{
											if (!PED::IS_PED_INJURED(iLocal_72))
											{
												if ((is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 105f, 105f, 105f, 0, 1, 0) && !is_entity_occluded(iLocal_72)) || is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (!is_entity_dead(iLocal_72, 0))
												{
													if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
													{
														if (does_blip_exist(iLocal_105))
														{
															_0x75A16C3DA34F1245(iLocal_105, true);
														}
														func_89();
													}
												}
												if (iLocal_99)
												{
													if (timera() > 2000 && timera() < 2100)
													{
														clear_ped_secondary_task(iLocal_72);
													}
													if (timera() > 3000)
													{
														if (!iLocal_102)
														{
															if (!func_83())
															{
																func_72(&uLocal_148, "PRI2AU", "PRI2_ASK", 4, 0, 0, 0);
																iLocal_102 = 1;
															}
														}
													}
												}
												if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
												{
													if (is_vehicle_driveable(get_players_last_vehicle(), 0))
													{
														if (!func_71(get_players_last_vehicle()))
														{
															if (is_entity_at_entity(get_players_last_vehicle(), iLocal_72, 40f, 40f, 20f, 0, 1, 0) && has_entity_clear_los_to_entity(iLocal_72, get_players_last_vehicle(), 17))
															{
																clear_ped_tasks(iLocal_72);
																if (!is_entity_a_mission_entity(get_players_last_vehicle()))
																{
																	set_entity_as_mission_entity(get_players_last_vehicle(), true, 0);
																}
																task_vehicle_mission_ped_target(iLocal_72, get_players_last_vehicle(), PLAYER::PLAYER_PED_ID(), 8, 22f, 786469, 1f, 1f, 1);
																set_ped_keep_task(iLocal_72, true);
																iLocal_55 = 13;
															}
															else if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0) && has_entity_clear_los_to_entity(iLocal_72, PLAYER::PLAYER_PED_ID(), 17))
															{
																func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
																func_86();
															}
														}
														else
														{
															func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
													else
													{
														func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
														func_86();
													}
												}
												if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
												{
													if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
													{
														if (((is_ped_in_any_police_vehicle(PLAYER::PLAYER_PED_ID()) || is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("rhino"))) || is_ped_in_any_heli(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
														{
															func_72(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
												}
											}
											if (func_70())
											{
												if (!is_entity_dead(iLocal_72, 0))
												{
													if (!is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("bus")))
													{
														if (func_69(PLAYER::PLAYER_PED_ID(), iLocal_72) < 2.5f)
														{
															if (get_entity_speed(iLocal_75) < 1f)
															{
																func_68();
															}
														}
													}
													else if (func_69(PLAYER::PLAYER_PED_ID(), iLocal_72) < 10f)
													{
														if (get_entity_speed(iLocal_75) < 1f)
														{
															func_68();
														}
													}
												}
											}
										}
										if (func_64())
										{
											if (!PED::IS_PED_INJURED(iLocal_72))
											{
												clear_ped_tasks(iLocal_72);
												if (is_ped_in_group(iLocal_72))
												{
													remove_ped_from_group(iLocal_72);
												}
											}
											func_86();
										}
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											set_ped_can_play_ambient_base_anims(iLocal_72, 0);
										}
										break;
									
									case 2:
										func_63();
										func_84();
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											set_ped_can_play_ambient_base_anims(iLocal_72, 0);
										}
										break;
									
									case 3:
										if (func_62())
										{
											iLocal_55 = 9;
										}
										func_54();
										func_84();
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											set_ped_can_play_ambient_base_anims(iLocal_72, 0);
										}
										break;
									
									case 5:
										func_53();
										break;
									
									case 6:
										if (!iLocal_104 && !PED::IS_PED_INJURED(iLocal_72))
										{
											open_sequence_task(&iLocal_74);
											task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
											task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
											task_pause(false, 1500);
											task_follow_nav_mesh_to_coord(false, vLocal_91, 1f, -1, 0.25f, 0, 333.9002f);
											task_start_scenario_in_place(false, "WORLD_HUMAN_SMOKING", 0, 1);
											close_sequence_task(iLocal_74);
											task_perform_sequence(iLocal_72, iLocal_74);
											clear_sequence_task(&iLocal_74);
											set_ped_keep_task(iLocal_72, true);
											func_72(&uLocal_148, "PRI1AU", "PRI1_THK", 4, 0, 0, 0);
											remove_ped_from_group(iLocal_72);
											iLocal_104 = 1;
										}
										if (func_64())
										{
											if (!PED::IS_PED_INJURED(iLocal_72))
											{
												clear_ped_tasks(iLocal_72);
												if (is_ped_in_group(iLocal_72))
												{
													remove_ped_from_group(iLocal_72);
												}
												func_51();
												wait(false);
												func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
												task_smart_flee_coord(iLocal_72, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												set_ped_keep_task(iLocal_72, true);
												wait(false);
											}
											func_86();
										}
										if (!func_83())
										{
											func_16();
										}
										break;
									
									case 7:
										func_15();
										break;
									
									case 9:
										func_13();
										break;
									
									case 10:
										func_10();
										func_8();
										if (!is_player_wanted_level_greater(player_id(), 0))
										{
											if (!does_blip_exist(iLocal_70))
											{
												iLocal_70 = func_6(vLocal_86, 1);
											}
											if (func_72(&uLocal_148, "PRI1AU", "PRI1_LOS", 4, 0, 0, 0))
											{
												iLocal_55 = 3;
											}
										}
										if (iLocal_100)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
											{
												if (!is_player_wanted_level_greater(player_id(), 0) || func_5(PLAYER::PLAYER_PED_ID(), iLocal_85, 1) > 200f)
												{
													set_ped_as_no_longer_needed(&(iLocal_82[0]));
													set_ped_as_no_longer_needed(&(iLocal_82[1]));
													set_vehicle_as_no_longer_needed(&iLocal_85);
												}
											}
										}
										if (func_64())
										{
											if (!PED::IS_PED_INJURED(iLocal_72))
											{
												clear_ped_tasks(iLocal_72);
												if (is_ped_in_group(iLocal_72))
												{
													remove_ped_from_group(iLocal_72);
												}
												task_smart_flee_coord(iLocal_72, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												set_ped_keep_task(iLocal_72, true);
												func_51();
												wait(false);
												func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
											}
											func_86();
										}
										break;
									
									case 11:
										set_wanted_level_multiplier(0.1f);
										if (is_vehicle_driveable(iLocal_75, 0))
										{
											if (!func_71(iLocal_75))
											{
												if (!iLocal_101)
												{
													if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_in_any_vehicle(iLocal_72, 0))
													{
														if (!PED::IS_PED_INJURED(iLocal_72))
														{
															if (!iLocal_103)
															{
																func_72(&uLocal_148, "PRI2AU", "PRI2_STEAL", 4, 0, 0, 0);
																iLocal_103 = 1;
															}
															task_enter_vehicle(iLocal_72, iLocal_75, -1, -1, 2f, 1, 0);
															set_ped_keep_task(iLocal_72, true);
															iLocal_55 = 12;
														}
													}
													if (!PED::IS_PED_INJURED(iLocal_72))
													{
														if (((has_entity_been_damaged_by_entity(iLocal_72, PLAYER::PLAYER_PED_ID(), 1) || (is_player_free_aiming_at_entity(player_id(), iLocal_72) && is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))) || (is_player_targetting_entity(player_id(), iLocal_72) && is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))) || (get_entity_speed(iLocal_75) > 2.5f && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_75, 0)))
														{
															task_combat_ped(iLocal_72, PLAYER::PLAYER_PED_ID(), 0, 16);
															func_51();
															iLocal_101 = 1;
														}
													}
												}
											}
											else
											{
												if (does_blip_exist(iLocal_105))
												{
													remove_blip(&iLocal_105);
												}
												if (!PED::IS_PED_INJURED(iLocal_72))
												{
													open_sequence_task(&iLocal_74);
													task_smart_flee_coord(false, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													task_smart_flee_coord(false, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
													close_sequence_task(iLocal_74);
													task_perform_sequence(iLocal_72, iLocal_74);
													clear_sequence_task(&iLocal_74);
													set_ped_keep_task(iLocal_72, true);
													iLocal_55 = 13;
												}
											}
										}
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 150f, 150f, 150f, 0, 1, 0))
											{
												open_sequence_task(&iLocal_74);
												task_smart_flee_coord(false, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												task_smart_flee_coord(false, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												close_sequence_task(iLocal_74);
												task_perform_sequence(iLocal_72, iLocal_74);
												clear_sequence_task(&iLocal_74);
												set_ped_keep_task(iLocal_72, true);
												iLocal_55 = 13;
											}
										}
										else
										{
											iLocal_55 = 13;
										}
										break;
									
									case 12:
										set_wanted_level_multiplier(0.1f);
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											if (has_entity_been_damaged_by_entity(iLocal_72, PLAYER::PLAYER_PED_ID(), 1))
											{
												if (does_blip_exist(iLocal_105))
												{
													set_blip_as_friendly(iLocal_105, false);
													clear_entity_last_damage_entity(iLocal_72);
												}
											}
											if (is_vehicle_driveable(iLocal_75, 0))
											{
												if (!func_71(iLocal_75))
												{
													if (is_ped_in_vehicle(iLocal_72, iLocal_75, 0))
													{
														if (!is_entity_a_mission_entity(iLocal_75))
														{
															set_entity_as_mission_entity(iLocal_75, true, 0);
														}
														task_vehicle_mission_ped_target(iLocal_72, iLocal_75, PLAYER::PLAYER_PED_ID(), 8, 22f, 786469, 1f, 1f, 1);
														set_ped_keep_task(iLocal_72, true);
														iLocal_55 = 13;
													}
													else if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_75, 0))
													{
														if (iLocal_110)
														{
															task_combat_ped(iLocal_72, PLAYER::PLAYER_PED_ID(), 0, 16);
															func_51();
															iLocal_101 = 1;
															iLocal_55 = 11;
														}
														else
														{
															func_68();
														}
													}
													else if (get_script_task_status(iLocal_72, -1794415470) != 1 && get_script_task_status(iLocal_72, -1794415470) != 0)
													{
														if (get_script_task_status(iLocal_72, 780511057) != 1 && get_script_task_status(iLocal_72, 780511057) != 0)
														{
														}
														else
														{
															iLocal_55 = 11;
														}
													}
												}
												else
												{
													if (does_blip_exist(iLocal_105))
													{
														remove_blip(&iLocal_105);
													}
													open_sequence_task(&iLocal_74);
													task_smart_flee_coord(false, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													task_smart_flee_coord(false, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
													close_sequence_task(iLocal_74);
													task_perform_sequence(iLocal_72, iLocal_74);
													clear_sequence_task(&iLocal_74);
													set_ped_keep_task(iLocal_72, true);
													iLocal_55 = 13;
												}
											}
											else
											{
												open_sequence_task(&iLocal_74);
												task_smart_flee_coord(false, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												task_smart_flee_coord(false, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												close_sequence_task(iLocal_74);
												task_perform_sequence(iLocal_72, iLocal_74);
												clear_sequence_task(&iLocal_74);
												set_ped_keep_task(iLocal_72, true);
												iLocal_55 = 13;
											}
											if (!iLocal_101)
											{
												if (((has_entity_been_damaged_by_entity(iLocal_72, PLAYER::PLAYER_PED_ID(), 1) || (is_player_free_aiming_at_entity(player_id(), iLocal_72) && is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))) || (is_player_targetting_entity(player_id(), iLocal_72) && is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))) || (get_entity_speed(iLocal_75) > 2.5f && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_75, 0)))
												{
													task_combat_ped(iLocal_72, PLAYER::PLAYER_PED_ID(), 0, 16);
													func_51();
													iLocal_101 = 1;
												}
											}
										}
										else
										{
											iLocal_55 = 13;
										}
										break;
									
									case 13:
										iLocal_96 = 1;
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											if (is_ped_being_jacked(iLocal_72))
											{
												func_51();
											}
											if (is_ped_in_any_vehicle(iLocal_72, 0))
											{
												if (does_blip_exist(iLocal_105))
												{
													set_blip_as_friendly(iLocal_105, false);
												}
												if (is_vehicle_model(get_vehicle_ped_is_in(iLocal_72, 0), joaat("towtruck")) || is_vehicle_model(get_vehicle_ped_is_in(iLocal_72, 0), joaat("towtruck2")))
												{
													iLocal_81 = get_entity_attached_to_tow_truck(get_vehicle_ped_is_in(iLocal_72, 0));
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_81))
													{
														iLocal_80 = get_vehicle_index_from_entity_index(iLocal_81);
														if (!is_entity_dead(get_vehicle_ped_is_in(iLocal_72, 0), 0) && !is_entity_dead(iLocal_80, 0))
														{
															if (is_vehicle_attached_to_tow_truck(get_vehicle_ped_is_in(iLocal_72, 0), iLocal_80))
															{
																detach_vehicle_from_tow_truck(get_vehicle_ped_is_in(iLocal_72, 0), iLocal_80);
															}
														}
													}
												}
												if (is_ped_on_specific_vehicle(PLAYER::PLAYER_PED_ID(), get_vehicle_ped_is_in(iLocal_72, 0)))
												{
													open_sequence_task(&iLocal_74);
													task_leave_any_vehicle(false, false, 0);
													task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
													close_sequence_task(iLocal_74);
													task_perform_sequence(iLocal_72, iLocal_74);
													clear_sequence_task(&iLocal_74);
													set_ped_keep_task(iLocal_72, true);
												}
												if (!iLocal_113)
												{
													if ((func_1(get_vehicle_ped_is_in(iLocal_72, 0)) || !is_vehicle_driveable(get_vehicle_ped_is_in(iLocal_72, 0), 0)) || func_71(get_vehicle_ped_is_in(iLocal_72, 0)))
													{
														if (does_blip_exist(iLocal_105))
														{
															set_blip_as_friendly(iLocal_105, false);
														}
														open_sequence_task(&iLocal_74);
														task_smart_flee_coord(false, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
														task_smart_flee_coord(false, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
														close_sequence_task(iLocal_74);
														task_perform_sequence(iLocal_72, iLocal_74);
														clear_sequence_task(&iLocal_74);
														set_ped_keep_task(iLocal_72, true);
														iLocal_113 = 1;
													}
												}
												if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 245f, 245f, 245f, 0, 1, 0))
												{
													func_86();
												}
											}
											else if (get_script_task_status(iLocal_72, 242628503) != 1 && get_script_task_status(iLocal_72, 242628503) != 0)
											{
												iLocal_55 = 11;
											}
											else if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 200f, 200f, 200f, 0, 1, 0))
											{
												func_16();
											}
										}
										else
										{
											func_16();
										}
										break;
								}
								break;
							
							case 1:
								switch (iLocal_95)
								{
									case 1:
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											clear_ped_tasks(iLocal_72);
											if (is_ped_in_group(iLocal_72))
											{
												remove_ped_from_group(iLocal_72);
											}
											task_smart_flee_coord(iLocal_72, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											set_ped_keep_task(iLocal_72, true);
											wait(false);
											func_86();
										}
										break;
									
									case 2:
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											clear_ped_tasks(iLocal_72);
											if (is_ped_in_group(iLocal_72))
											{
												remove_ped_from_group(iLocal_72);
											}
											task_smart_flee_coord(iLocal_72, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											set_ped_keep_task(iLocal_72, true);
											wait(false);
											func_86();
										}
										break;
									
									case 3:
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											clear_ped_tasks(iLocal_72);
											if (is_ped_in_group(iLocal_72))
											{
												remove_ped_from_group(iLocal_72);
											}
											task_smart_flee_coord(iLocal_72, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											set_ped_keep_task(iLocal_72, true);
											wait(false);
											func_86();
										}
										break;
									
									case 4:
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											clear_ped_tasks(iLocal_72);
											if (is_ped_in_group(iLocal_72))
											{
												remove_ped_from_group(iLocal_72);
											}
											task_smart_flee_coord(iLocal_72, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											set_ped_keep_task(iLocal_72, true);
											wait(false);
											func_86();
										}
										break;
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_170();
		}
	}
}

bool func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_4(PLAYER::PLAYER_PED_ID()) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && func_2(iParam0))
	{
		iVar0 = get_players_last_vehicle();
		if (func_2(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (is_vehicle_attached_to_tow_truck(iVar0, iParam0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_2(int iParam0)
{
	if (func_3(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_3(int iParam0)
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

bool func_4(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return true;
		}
	}
	return false;
}

auto func_5(int iParam0, int iParam1, int iParam2)
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

int func_6(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_7(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_8()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_88())
			{
				if (get_script_task_status(iLocal_72, 1227113341) != 1 && get_script_task_status(iLocal_72, 1227113341) != 0)
				{
					task_go_to_entity(iLocal_72, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (is_ped_in_any_vehicle(iLocal_72, 0))
				{
					task_leave_any_vehicle(iLocal_72, false, 0);
				}
				if (!iLocal_111)
				{
					if (!func_83())
					{
						if (func_9())
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						iLocal_111 = 1;
					}
				}
			}
			else
			{
				iLocal_111 = 0;
				if (get_script_task_status(iLocal_72, 1227113341) == 1 && get_script_task_status(iLocal_72, 1227113341) == 0)
				{
					clear_ped_tasks(iLocal_72);
				}
			}
		}
	}
}

bool func_9()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (is_vehicle_driveable(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), 1))
		{
			if ((is_this_model_a_bicycle(ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1))) || is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1)))) || is_this_model_a_quadbike(ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1))))
			{
				return true;
			}
		}
	}
	return false;
}

void func_10()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 8f, 8f, 8f, 0, 1, 0))
		{
			if (!is_player_wanted_level_greater(player_id(), 0))
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (is_ped_in_vehicle(iLocal_72, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						if (does_blip_exist(iLocal_105))
						{
							remove_blip(&iLocal_105);
						}
						if (iLocal_55 != 10)
						{
							if (!does_blip_exist(iLocal_70))
							{
								iLocal_70 = func_6(vLocal_86, 1);
							}
						}
					}
				}
				else
				{
					if (does_blip_exist(iLocal_105))
					{
						remove_blip(&iLocal_105);
					}
					if (iLocal_55 != 10)
					{
						if (!does_blip_exist(iLocal_70))
						{
							iLocal_70 = func_6(vLocal_86, 1);
						}
					}
				}
			}
			else if (does_blip_exist(iLocal_70))
			{
				remove_blip(&iLocal_70);
			}
		}
		else
		{
			if (!does_blip_exist(iLocal_105))
			{
				iLocal_105 = func_11(iLocal_72, 0, 145);
			}
			if (does_blip_exist(iLocal_70))
			{
				remove_blip(&iLocal_70);
			}
		}
	}
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_12(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_13()
{
	switch (iLocal_106)
	{
		case 0:
			if (func_14())
			{
				if (is_ped_in_group(iLocal_72))
				{
					remove_ped_from_group(iLocal_72);
				}
				func_51();
				wait(false);
				func_72(&uLocal_148, "PRI1AU", "PRI1_STA", 4, 0, 0, 0);
				settimera(false);
				iLocal_106++;
			}
			break;
		
		case 1:
			if (func_14())
			{
				if (timera() > 500)
				{
					if (is_vehicle_driveable(iLocal_75, 0))
					{
						set_vehicle_steer_bias(iLocal_75, -1f);
						if (does_blip_exist(iLocal_70))
						{
							remove_blip(&iLocal_70);
						}
						iLocal_106++;
					}
				}
			}
			break;
		
		case 2:
			if (func_14())
			{
				if (timera() > 2000)
				{
					if (is_vehicle_driveable(iLocal_75, 0))
					{
						set_player_control(player_id(), false, 0);
						task_vehicle_temp_action(PLAYER::PLAYER_PED_ID(), iLocal_75, 24, 2000);
						iLocal_106++;
					}
				}
			}
			break;
		
		case 3:
			if (func_14())
			{
				if (timera() > 4000)
				{
					set_player_control(player_id(), true, 0);
					if (is_vehicle_driveable(iLocal_75, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_72))
						{
							remove_ped_from_group(iLocal_72);
							set_vehicle_steer_bias(iLocal_75, 0f);
							task_leave_vehicle(iLocal_72, iLocal_75, 320);
							if (!does_blip_exist(iLocal_105))
							{
								iLocal_105 = func_11(iLocal_72, 1, 145);
							}
							iLocal_106++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (is_vehicle_driveable(iLocal_75, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_72) && !is_ped_in_vehicle(iLocal_72, iLocal_75, 0))
				{
					task_smart_flee_coord(iLocal_72, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					set_ped_keep_task(iLocal_72, true);
					func_51();
					wait(false);
					func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
					iLocal_106++;
				}
			}
			break;
		
		case 5:
			wait(false);
			func_86();
			break;
	}
}

bool func_14()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_75 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (is_vehicle_driveable(iLocal_75, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (is_ped_sitting_in_vehicle(iLocal_72, iLocal_75))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_15()
{
	if ((!iLocal_104 && !PED::IS_PED_INJURED(iLocal_72)) && is_vehicle_driveable(iLocal_75, 0))
	{
		remove_ped_from_group(iLocal_72);
		open_sequence_task(&iLocal_74);
		task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
		task_leave_any_vehicle(false, false, 0);
		task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
		task_follow_nav_mesh_to_coord(false, vLocal_91, 1f, -1, 0.25f, 0, 333.9002f);
		task_start_scenario_in_place(false, "WORLD_HUMAN_SMOKING", 0, 1);
		close_sequence_task(iLocal_74);
		task_perform_sequence(iLocal_72, iLocal_74);
		clear_sequence_task(&iLocal_74);
		set_ped_keep_task(iLocal_72, true);
		set_player_control(player_id(), true, 0);
		iLocal_104 = 1;
	}
	if (func_64())
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			clear_ped_tasks(iLocal_72);
			if (is_ped_in_group(iLocal_72))
			{
				remove_ped_from_group(iLocal_72);
			}
			task_smart_flee_coord(iLocal_72, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			set_ped_keep_task(iLocal_72, true);
			func_51();
			wait(false);
			func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (!func_83())
	{
		func_16();
	}
}

void func_16()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		set_blocking_of_non_temporary_events(iLocal_72, false);
	}
	while (!func_50())
	{
		wait(false);
	}
	if (iLocal_56 == 0)
	{
		func_45(func_49(), 4, 3);
	}
	func_20(22, iLocal_69);
	func_17();
	func_170();
}

void func_17()
{
	func_18();
}

bool func_18()
{
	if (func_19(0))
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

int func_19(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_20(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_42(iParam0))
	{
		func_41(iParam0, iParam1);
		if (!func_40(51))
		{
			func_31("RE_REWARD", 1, 0, 4000, 10000, func_34(), 0, 138, 0);
			func_30(51);
		}
		if (func_29(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_28(iParam0, iParam1) != 322)
		{
			func_22(func_28(iParam0, iParam1), vLocal_50.x, vLocal_50.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_21(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_21(7);
			}
			else
			{
				func_21(1);
			}
		}
	}
}

void func_21(int iParam0)
{
	Global_101140 = iParam0;
}

void func_22(int iParam0, auto uParam1, auto uParam2)
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
		func_26(891 + iParam0, 1, -1, 1);
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
		func_23();
	}
}

void func_23()
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
		func_25(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_24() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_18();
				}
			}
		}
	}
}

auto func_24()
{
	return Global_25120;
}

int func_25(int iParam0, int iParam1)
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

int func_26(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_27();
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

auto func_27()
{
	return Global_1312747;
}

int func_28(int iParam0, int iParam1)
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

bool func_29(int iParam0)
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

void func_30(int iParam0)
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

void func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_32(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_32(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_33();
	}
}

void func_33()
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

int func_34()
{
	func_35();
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

void func_35()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_39(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_38(PLAYER::PLAYER_PED_ID());
			if (func_37(iVar0) && (!func_36(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_37(Global_101154.f_1826.f_539.f_3549))
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

int func_36(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_40(int iParam0)
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

void func_41(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_42(int iParam0)
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

auto func_43()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_44(cVar0);
	return uVar16;
}

int func_44(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_101154.f_1826.f_539.f_1475[iParam1 /*4*/][iParam0] += iParam2;
			break;
		
		case 3:
			iVar1 = 3949;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 3949)
			{
				iVar0 = func_48(iVar1, -1, 0);
				iVar0 += iParam2;
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_46(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_47(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_47(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_48(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_47(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

auto func_49()
{
	func_35();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_50()
{
	return true;
}

void func_51()
{
	Global_14578 = 0;
	func_52();
}

void func_52()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_53()
{
	if (does_blip_exist(iLocal_70))
	{
		set_blip_route(iLocal_70, false);
		remove_blip(&iLocal_70);
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			clear_prints();
			func_51();
			wait(false);
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_THK", 4, 0, 0, 0))
			{
			}
		}
	}
	if (timera() > 1000)
	{
		iLocal_55 = 7;
	}
}

void func_54()
{
	Vector3[] vVar0 = new Vector3[4];
	
	func_10();
	func_61();
	func_60();
	func_8();
	if (!iLocal_97 && !iLocal_98)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT1", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT2", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
	}
	if (iLocal_97 && !iLocal_98)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT1b", 4, 0, 0, 0))
			{
				iLocal_98 = 1;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT2b", 4, 0, 0, 0))
			{
				iLocal_98 = 1;
			}
		}
	}
	if (iLocal_97 && iLocal_98)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT1c", 4, 0, 0, 0))
			{
				iLocal_97 = 0;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_CHAT2c", 4, 0, 0, 0))
			{
				iLocal_97 = 0;
			}
		}
	}
	if (func_64())
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			clear_ped_tasks(iLocal_72);
			if (is_ped_in_group(iLocal_72))
			{
				remove_ped_from_group(iLocal_72);
			}
			task_smart_flee_coord(iLocal_72, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			set_ped_keep_task(iLocal_72, true);
			func_51();
			wait(false);
			func_72(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (func_59(PLAYER::PLAYER_PED_ID(), vLocal_59, 1) > 200f)
	{
		if (!iLocal_100)
		{
			vVar0[0 /*3*/] = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1) - Vector(0f, 9f, 0f)};
			get_safe_coord_for_ped(vVar0[0 /*3*/], 0, &(vVar0[0 /*3*/]), 0);
			vVar0[1 /*3*/] = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, 9f, 0f)};
			get_safe_coord_for_ped(vVar0[1 /*3*/], 0, &(vVar0[1 /*3*/]), 0);
			vVar0[2 /*3*/] = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1) - Vector(0f, 0f, 9f)};
			get_safe_coord_for_ped(vVar0[2 /*3*/], 0, &(vVar0[2 /*3*/]), 0);
			vVar0[3 /*3*/] = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, 0f, 9f)};
			get_safe_coord_for_ped(vVar0[3 /*3*/], 0, &(vVar0[3 /*3*/]), 0);
			if (!is_sphere_visible(vVar0[0 /*3*/], 3f))
			{
				iLocal_85 = create_vehicle(joaat("sheriff"), vVar0[0 /*3*/], func_57(vVar0[0 /*3*/], func_58(player_id())), 1, true);
				iLocal_82[0] = PED::CREATE_PED_inside_vehicle(iLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, true);
				iLocal_82[1] = PED::CREATE_PED_inside_vehicle(iLocal_85, 6, joaat("s_m_y_ranger_01"), false, 1, true);
				give_weapon_to_ped(iLocal_82[0], joaat("weapon_pistol"), -1, false, true);
				give_weapon_to_ped(iLocal_82[1], joaat("weapon_pistol"), -1, false, true);
				set_player_wanted_level_no_drop(player_id(), true, 0);
				set_player_wanted_level_now(player_id(), 0);
				iLocal_100 = true;
			}
			else if (!is_sphere_visible(vVar0[1 /*3*/], 3f))
			{
				iLocal_85 = create_vehicle(joaat("sheriff"), vVar0[1 /*3*/], func_57(vVar0[1 /*3*/], func_58(player_id())), 1, true);
				iLocal_82[0] = PED::CREATE_PED_inside_vehicle(iLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, true);
				iLocal_82[1] = PED::CREATE_PED_inside_vehicle(iLocal_85, 6, joaat("s_m_y_ranger_01"), false, 1, true);
				give_weapon_to_ped(iLocal_82[0], joaat("weapon_pistol"), -1, false, true);
				give_weapon_to_ped(iLocal_82[1], joaat("weapon_pistol"), -1, false, true);
				set_player_wanted_level_no_drop(player_id(), true, 0);
				set_player_wanted_level_now(player_id(), 0);
				iLocal_100 = true;
			}
			else if (!is_sphere_visible(vVar0[2 /*3*/], 3f))
			{
				iLocal_85 = create_vehicle(joaat("sheriff"), vVar0[2 /*3*/], func_57(vVar0[2 /*3*/], func_58(player_id())), 1, true);
				iLocal_82[0] = PED::CREATE_PED_inside_vehicle(iLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, true);
				iLocal_82[1] = PED::CREATE_PED_inside_vehicle(iLocal_85, 6, joaat("s_m_y_ranger_01"), false, 1, true);
				give_weapon_to_ped(iLocal_82[0], joaat("weapon_pistol"), -1, false, true);
				give_weapon_to_ped(iLocal_82[1], joaat("weapon_pistol"), -1, false, true);
				set_player_wanted_level_no_drop(player_id(), true, 0);
				set_player_wanted_level_now(player_id(), 0);
				iLocal_100 = true;
			}
			else if (!is_sphere_visible(vVar0[3 /*3*/], 3f))
			{
				iLocal_85 = create_vehicle(joaat("sheriff"), vVar0[3 /*3*/], func_57(vVar0[3 /*3*/], func_58(player_id())), 1, true);
				iLocal_82[0] = PED::CREATE_PED_inside_vehicle(iLocal_85, 6, joaat("s_m_y_ranger_01"), -1, 1, true);
				iLocal_82[1] = PED::CREATE_PED_inside_vehicle(iLocal_85, 6, joaat("s_m_y_ranger_01"), false, 1, true);
				give_weapon_to_ped(iLocal_82[0], joaat("weapon_pistol"), -1, false, true);
				give_weapon_to_ped(iLocal_82[1], joaat("weapon_pistol"), -1, false, true);
				set_player_wanted_level_no_drop(player_id(), true, 0);
				set_player_wanted_level_now(player_id(), 0);
				iLocal_100 = true;
			}
		}
	}
	if (!is_entity_at_coord(PLAYER::PLAYER_PED_ID(), get_entity_coords(iLocal_79, 0), 10f, 10f, 10f, false, false, 0) || is_player_wanted_level_greater(player_id(), 0))
	{
		func_56();
	}
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (((!is_player_wanted_level_greater(player_id(), 0) && is_entity_in_angled_area(iLocal_72, 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, true, 0)) && is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, true, 0)) || (is_entity_at_coord(iLocal_72, vLocal_86, Global_19, true, true, 0) && func_55(1, 0, 1)))
		{
			settimera(false);
			if (func_14())
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					_task_bring_vehicle_to_halt(get_players_last_vehicle(), 10.5f, 2, 0);
				}
				clear_prints();
				iLocal_55 = 5;
			}
			else
			{
				iLocal_55 = 6;
			}
		}
	}
}

bool func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_minigame_in_progress())
	{
		return false;
	}
	if (iParam0)
	{
		if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
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
			if (is_entity_dead(iVar0, 0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!is_entity_dead(iVar0, 0))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1) != PLAYER::PLAYER_PED_ID())
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

void func_56()
{
	Vector3 vVar0;
	
	vVar0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		if (func_14())
		{
			func_51();
			wait(false);
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				iLocal_55 = 10;
			}
		}
		else if (is_cop_vehicle_in_area_3d(vVar0.x - 50f, vVar0.y - 50f, vVar0.z - 50f, vVar0.x + 50f, vVar0.y + 50f, vVar0.z + 50f))
		{
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				clear_ped_tasks(iLocal_72);
				if (is_ped_in_group(iLocal_72))
				{
					remove_ped_from_group(iLocal_72);
				}
				task_smart_flee_coord(iLocal_72, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
				set_ped_keep_task(iLocal_72, true);
				wait(false);
			}
			func_86();
		}
	}
	else if (func_14())
	{
		if (is_cop_vehicle_in_area_3d(vVar0.x - 10f, vVar0.y - 10f, vVar0.z - 10f, vVar0.x + 10f, vVar0.y + 10f, vVar0.z + 10f))
		{
			func_51();
			wait(false);
			if (func_72(&uLocal_148, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				set_player_wanted_level(player_id(), 3, 0);
				set_player_wanted_level_now(player_id(), 0);
				set_wanted_level_difficulty(player_id(), 0f);
				if (does_blip_exist(iLocal_70))
				{
					remove_blip(&iLocal_70);
				}
				iLocal_55 = 10;
			}
		}
	}
	else if (is_cop_vehicle_in_area_3d(vVar0.x - 10f, vVar0.y - 10f, vVar0.z - 10f, vVar0.x + 10f, vVar0.y + 10f, vVar0.z + 10f))
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			clear_ped_tasks(iLocal_72);
			if (is_ped_in_group(iLocal_72))
			{
				remove_ped_from_group(iLocal_72);
			}
			task_smart_flee_coord(iLocal_72, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			set_ped_keep_task(iLocal_72, true);
			wait(false);
		}
		func_86();
	}
}

float func_57(struct<2> Param0, auto uParam1, struct<2> Param2, auto uParam3)
{
	return get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

Vector3 func_58(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

auto func_59(int iParam0, Vector3 vParam1, int iParam2)
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

void func_60()
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
	}
	if (iLocal_144 - iLocal_143 > 120000)
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			if (is_ped_in_group(iLocal_72))
			{
				if (func_72(&uLocal_148, "PRI1AU", "PRI1_WLK", 4, 0, 0, 0))
				{
					remove_ped_from_group(iLocal_72);
					func_86();
				}
			}
		}
	}
}

void func_61()
{
	if (is_ped_stopped(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_145)
		{
			iLocal_146 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_145 = 1;
		}
		else
		{
			iLocal_147 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_145 = 0;
	}
	if (iLocal_147 - iLocal_146 > 60000)
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			if (is_ped_in_group(iLocal_72))
			{
				if (func_72(&uLocal_148, "PRI1AU", "PRI1_SLO", 4, 0, 0, 0))
				{
					remove_ped_from_group(iLocal_72);
					func_86();
				}
			}
		}
	}
}

bool func_62()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (is_ped_in_group(iLocal_72))
		{
			if ((((((((is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_114, 50f, 50f, 50f, false, true, 0) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_117, 50f, 50f, 50f, false, true, 0)) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_120, 50f, 50f, 50f, false, true, 0)) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_123, 50f, 50f, 50f, false, true, 0)) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_126, 50f, 50f, 50f, false, true, 0)) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_129, 50f, 50f, 50f, false, true, 0)) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_132, 50f, 50f, 50f, false, true, 0)) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_135, 50f, 50f, 50f, false, true, 0)) || func_59(PLAYER::PLAYER_PED_ID(), vLocal_138, 1) < 205f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_63()
{
	if (!PED::IS_PED_INJURED(iLocal_72) && func_88())
	{
		if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (is_ped_sitting_in_vehicle(PLAYER::PLAYER_PED_ID(), get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) && is_ped_sitting_in_vehicle(iLocal_72, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
			{
				settimera(false);
				if (!is_ped_in_group(iLocal_72))
				{
					set_ped_as_group_member(iLocal_72, get_player_group(player_id()));
					set_ped_group_member_passenger_index(iLocal_72, false);
					set_ped_never_leaves_group(iLocal_72, 1);
				}
				if (iLocal_56 == 0)
				{
					if (!func_83())
					{
						if (func_72(&uLocal_148, "PRI1AU", "PRI1_CH", 4, 0, 0, 0))
						{
							if (!does_blip_exist(iLocal_70))
							{
								iLocal_70 = func_6(vLocal_86, 1);
							}
							GAMEPLAY::CLEAR_BIT(&uLocal_94, 3);
							iLocal_96 = 1;
							iLocal_55 = 3;
						}
					}
				}
				else if (iLocal_56 == 1)
				{
					if (func_49() == 0)
					{
						func_72(&uLocal_148, "PRI2AU", "PRI2_WHTM", 4, 0, 0, 0);
					}
					else if (func_49() == 1)
					{
						func_72(&uLocal_148, "PRI2AU", "PRI2_WHTF", 4, 0, 0, 0);
					}
					else if (func_49() == 2)
					{
						func_72(&uLocal_148, "PRI2AU", "PRI2_WHTT", 4, 0, 0, 0);
					}
					set_ped_flee_attributes(iLocal_72, 2, true);
					iLocal_55 = 3;
				}
			}
		}
	}
}

bool func_64()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (is_vehicle_driveable(get_players_last_vehicle(), 0))
		{
			if (has_entity_been_damaged_by_entity(iLocal_72, get_players_last_vehicle(), 1))
			{
				func_51();
				return true;
			}
		}
		if (has_entity_been_damaged_by_entity(iLocal_72, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_51();
			return true;
		}
		if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 250f, 250f, 250f, 0, 1, 0))
		{
			return true;
		}
		if (iLocal_56 == 0)
		{
			iVar0 = 0;
			if (func_67())
			{
				iVar0 = 0;
				while (iVar0 < func_66())
				{
					if (has_entity_been_damaged_by_entity(func_65(iVar0), PLAYER::PLAYER_PED_ID(), 0))
					{
						if (get_ped_relationship_group_hash(get_ped_index_from_entity_index(func_65(iVar0))) == -1865950624)
						{
							return true;
						}
					}
					iVar0++;
				}
			}
		}
		if (iLocal_55 < 2)
		{
			if (has_ped_received_event(iLocal_72, 126))
			{
				return true;
			}
			if (iLocal_56 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_79))
				{
					if (((is_cop_ped_in_area_3d(get_entity_coords(iLocal_79, 0) + Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), get_entity_coords(iLocal_79, 0) + Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f)) || is_cop_ped_in_area_3d(get_entity_coords(iLocal_79, 0) - Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), get_entity_coords(iLocal_79, 0) - Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f))) || is_cop_ped_in_area_3d(get_entity_coords(iLocal_79, 0) + Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), get_entity_coords(iLocal_79, 0) + Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f))) || is_cop_ped_in_area_3d(get_entity_coords(iLocal_79, 0) - Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), get_entity_coords(iLocal_79, 0) - Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f)))
					{
						task_smart_flee_ped(iLocal_72, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
						set_ped_keep_task(iLocal_72, true);
						return true;
					}
				}
			}
			else if (iLocal_56 == 1)
			{
				if (is_cop_ped_in_area_3d(get_entity_coords(iLocal_72, 0) - Vector(70f, 70f, 70f), get_entity_coords(iLocal_72, 0) + Vector(70f, 70f, 70f)))
				{
					return true;
				}
			}
			if (is_bullet_in_area(get_entity_coords(iLocal_72, 1), 20f, 1))
			{
				return true;
			}
			if ((is_projectile_type_in_area(get_entity_coords(iLocal_72, 1) - Vector(15f, 15f, 15f), get_entity_coords(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1) || is_projectile_type_in_area(get_entity_coords(iLocal_72, 1) - Vector(15f, 15f, 15f), get_entity_coords(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || is_projectile_type_in_area(get_entity_coords(iLocal_72, 1) - Vector(15f, 15f, 15f), get_entity_coords(iLocal_72, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1))
			{
				return true;
			}
			if (_0x2F09F7976C512404(get_entity_coords(iLocal_72, 1), 3f))
			{
				return true;
			}
			if (is_player_wanted_level_greater(player_id(), 0))
			{
				return true;
			}
			if ((is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0) && has_entity_clear_los_to_entity_in_front(iLocal_72, PLAYER::PLAYER_PED_ID())) && is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (is_player_targetting_entity(player_id(), iLocal_72) || is_player_free_aiming_at_entity(player_id(), iLocal_72))
				{
					return true;
				}
			}
		}
	}
	else
	{
		func_51();
		return true;
	}
	return false;
}

auto func_65(int iParam0)
{
	return Global_48000.f_25[iParam0];
}

auto func_66()
{
	return Global_48000.f_24;
}

int func_67()
{
	return Global_48000.f_24 > 0;
}

void func_68()
{
	if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			if (!func_83())
			{
				if (func_9())
				{
					func_72(&uLocal_148, "PRI2AU", "PRI2_THREAT", 4, 0, 0, 0);
				}
				else
				{
					func_72(&uLocal_148, "PRI2AU", "PRI2_HIJ", 4, 0, 0, 0);
				}
				if (does_blip_exist(iLocal_105))
				{
					set_blip_as_friendly(iLocal_105, false);
				}
				clear_ped_tasks(iLocal_72);
				open_sequence_task(&iLocal_74);
				task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), 500, 1);
				task_go_to_entity_while_aiming_at_entity(false, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 1f, 0.5f, 1, 0, -957453492);
				task_enter_vehicle(false, get_players_last_vehicle(), -1, -1, 2f, 9, 0);
				close_sequence_task(iLocal_74);
				task_perform_sequence(iLocal_72, iLocal_74);
				clear_sequence_task(&iLocal_74);
				settimera(false);
				iLocal_110 = true;
				iLocal_55 = 11;
			}
		}
	}
}

auto func_69(int iParam0, int iParam1)
{
	return func_5(iParam0, iParam1, 1);
}

bool func_70()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_75 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (is_vehicle_driveable(iLocal_75, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_71(int iParam0)
{
	if ((((is_vehicle_stuck_timer_up(iParam0, 0, 3000) || is_entity_on_fire(iParam0)) || get_number_of_fires_in_range(get_entity_coords(iParam0, 0), 5f) > 0) || has_entity_been_damaged_by_weapon(iParam0, joaat("weapon_molotov"), 0)) || is_projectile_type_in_area(get_entity_coords(iParam0, 0) - Vector(5f, 5f, 5f), get_entity_coords(iParam0, 0) + Vector(5f, 5f, 5f), joaat("weapon_molotov"), 0))
	{
		return true;
	}
	return false;
}

int func_72(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_73(sParam2, iParam3, 0);
}

bool func_73(char* sParam0, int iParam1, int iParam2)
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
					func_81();
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
		if (func_80(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_79();
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
				func_78();
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
				if (func_77())
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
			if (func_76())
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
			func_75();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_74();
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
		func_81();
	}
	return false;
}

void func_74()
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

void func_75()
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

bool func_76()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_77()
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

void func_78()
{
	if (func_36(14))
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
		Global_14413 = func_49();
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

void func_79()
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

int func_80(int iParam0, int iParam1)
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

void func_81()
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

void func_82(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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
	if (!is_entity_dead(iLocal_79, 0))
	{
		if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_79, 0) && !is_vehicle_seat_free(iLocal_79, -1))
		{
			_0x9D3AF56E94C9AE98(iLocal_79, 60000f);
			_0x9C11908013EA4715(iLocal_79);
		}
	}
}

void func_85()
{
	switch (iLocal_108)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
				{
					if (get_entity_speed(PLAYER::PLAYER_PED_ID()) < 2.5f || !(is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_72, 15f, 15f, 8f, 0, 1, 0)))
					{
						open_sequence_task(&iLocal_74);
						task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 30000, 2050, 2);
						task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 2f, 0);
						close_sequence_task(iLocal_74);
						task_perform_sequence(iLocal_72, iLocal_74);
						clear_sequence_task(&iLocal_74);
						if (func_72(&uLocal_148, "PRI1AU", "PRI1_ASK", 4, 0, 0, 0))
						{
							iLocal_99 = true;
							iLocal_108++;
						}
					}
				}
			}
			break;
		
		case 1:
			func_87(&uLocal_107);
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (func_88())
				{
					iLocal_75 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					if (get_entity_speed(iLocal_75) < 9f)
					{
						if (!PED::IS_PED_INJURED(iLocal_72))
						{
							if (is_entity_at_entity(iLocal_72, iLocal_75, 20f, 20f, 5f, 0, 1, 0))
							{
								iLocal_108++;
							}
						}
					}
				}
				else if (!iLocal_110)
				{
					fLocal_109 = func_5(iLocal_72, PLAYER::PLAYER_PED_ID(), 1);
					open_sequence_task(&iLocal_74);
					task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
					task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), -1, fLocal_109 - 3f, 1f, 2f, 0);
					close_sequence_task(iLocal_74);
					task_perform_sequence(iLocal_72, iLocal_74);
					clear_sequence_task(&iLocal_74);
					if (!func_83())
					{
						if (func_9())
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_72(&uLocal_148, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						iLocal_110 = true;
						iLocal_99 = true;
					}
				}
			}
			break;
		
		case 2:
			func_87(&uLocal_107);
			if (!iLocal_112)
			{
				if (get_entity_speed(PLAYER::PLAYER_PED_ID()) < 2.5f)
				{
					if (!PED::IS_PED_INJURED(iLocal_72))
					{
						clear_ped_tasks(iLocal_72);
						task_open_vehicle_door(iLocal_72, iLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
				if (!func_83())
				{
					if (!PED::IS_PED_INJURED(iLocal_72))
					{
						clear_ped_tasks(iLocal_72);
						task_open_vehicle_door(iLocal_72, iLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
			}
			if (func_88())
			{
				iLocal_75 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if (get_entity_speed(iLocal_75) < 2.5f)
				{
					if (is_entity_at_coord(iLocal_75, get_entity_coords(iLocal_72, 1), 20f, 20f, 5f, false, true, 0))
					{
						if (iLocal_56 == 0)
						{
							if (!func_83())
							{
								if (func_49() == 0)
								{
									if (func_9())
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_GETONM", 4, 0, 0, 0);
									}
									else
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_JIM", 4, 0, 0, 0);
									}
								}
								else if (func_49() == 1)
								{
									if (func_9())
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_GETONF", 4, 0, 0, 0);
									}
									else
									{
										func_72(&uLocal_148, "PRI1AU", "PRI1_JIF", 4, 0, 0, 0);
									}
								}
								else if (func_49() == 2)
								{
									func_72(&uLocal_148, "PRI1AU", "PRI1_JIT", 4, 0, 0, 0);
								}
								iLocal_108++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_88())
			{
				iLocal_75 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if (get_entity_speed(iLocal_75) < 0.5f)
				{
					if (!PED::IS_PED_INJURED(iLocal_72))
					{
						clear_ped_tasks(iLocal_72);
						if (!is_ped_in_group(iLocal_72))
						{
							set_ped_as_group_member(iLocal_72, get_player_group(player_id()));
							set_ped_group_member_passenger_index(iLocal_72, false);
							set_ped_never_leaves_group(iLocal_72, 1);
						}
						iLocal_108++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_56 == 0)
			{
				if (!func_83())
				{
					if (func_72(&uLocal_148, "PRI1AU", "PRI1_SH", 4, 0, 0, 0))
					{
						iLocal_108++;
					}
				}
			}
			else
			{
				iLocal_108++;
			}
			break;
		
		case 5:
			if (func_88())
			{
				if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_72))
					{
						if (is_ped_sitting_in_vehicle(iLocal_72, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
						{
							if (does_blip_exist(iLocal_105))
							{
								remove_blip(&iLocal_105);
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			else
			{
				func_8();
			}
			break;
	}
}

void func_86()
{
	func_170();
}

void func_87(auto uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (!is_ped_facing_ped(iLocal_72, PLAYER::PLAYER_PED_ID(), 90f))
				{
					task_turn_ped_to_face_entity(iLocal_72, PLAYER::PLAYER_PED_ID(), false);
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (is_ped_facing_ped(iLocal_72, PLAYER::PLAYER_PED_ID(), 90f))
				{
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (!is_ped_facing_ped(iLocal_72, PLAYER::PLAYER_PED_ID(), 90f))
				{
					*uParam0 = 0;
				}
			}
			break;
	}
}

bool func_88()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
		{
			if ((((((!is_ped_in_any_police_vehicle(PLAYER::PLAYER_PED_ID()) && !is_ped_in_any_boat(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_heli(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_plane(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_sub(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_train(PLAYER::PLAYER_PED_ID())) && !is_big_vehicle(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
			{
				if (get_vehicle_max_number_of_passengers(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) >= 1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_89()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_75 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if ((is_vehicle_driveable(iLocal_75, 0) && !PED::IS_PED_INJURED(iLocal_72)) && !iLocal_99)
		{
			fLocal_109 = func_5(iLocal_72, PLAYER::PLAYER_PED_ID(), 1);
			if (fLocal_109 > 5f)
			{
				fLocal_109 -= 2.5f;
			}
			else
			{
				fLocal_109--;
			}
			clear_ped_tasks(iLocal_72);
			open_sequence_task(&iLocal_74);
			if (iLocal_56 == 0)
			{
				task_look_at_entity(false, iLocal_75, 10000, 2048, 2);
				task_play_anim(false, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				task_go_to_entity_while_aiming_at_entity(false, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, fLocal_109, 1f, 1, 0, -957453492);
			}
			else if (iLocal_56 == 1)
			{
				task_look_at_entity(false, iLocal_75, 10000, 2052, 2);
				task_play_anim(false, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				task_follow_to_offset_of_entity(false, PLAYER::PLAYER_PED_ID(), -1f, 0f, 0f, 1f, -1, 0.5f, 1);
			}
			close_sequence_task(iLocal_74);
			task_perform_sequence(iLocal_72, iLocal_74);
			clear_sequence_task(&iLocal_74);
			if (iLocal_56 == 0)
			{
				func_72(&uLocal_148, "PRI1AU", "PRI1_STO", 4, 0, 0, 0);
				settimera(false);
				iLocal_99 = true;
			}
			else if (iLocal_56 == 1)
			{
				if (func_72(&uLocal_148, "PRI2AU", "PRI2_STO", 4, 0, 0, 0))
				{
					settimera(false);
					iLocal_99 = true;
				}
			}
		}
	}
}

void func_90(int iParam0)
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

bool func_91(int iParam0)
{
	if (func_95())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_29(Global_101143))
		{
			func_92(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_29(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_93(func_94(iParam0), -1);
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
					func_93(func_94(iParam0), -1);
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
					func_93(func_94(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_93(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

char* func_94(int iParam0)
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

bool func_95()
{
	switch (func_96(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_96(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_100(0))
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
		if (!func_98(iParam2))
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
			func_97(uParam0, iParam4);
		}
	}
	return 2;
}

void func_97(auto uParam0, int iParam1)
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

int func_98(int iParam0)
{
	return func_99(iParam0, Global_35711);
}

bool func_99(int iParam0, int iParam1)
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

bool func_100(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_98(iParam0))
	{
		return false;
	}
	return true;
}

void func_101()
{
	if (does_blip_exist(iLocal_71))
	{
		remove_blip(&iLocal_71);
	}
	if (!does_blip_exist(iLocal_105))
	{
		iLocal_105 = func_11(iLocal_72, 0, 145);
		_0x75A16C3DA34F1245(iLocal_105, false);
	}
}

void func_102()
{
	int iVar0;
	int[] iVar1 = new int[2];
	
	func_104(39, 1);
	func_104(40, 1);
	func_104(41, 1);
	func_104(42, 1);
	func_104(43, 1);
	func_104(44, 1);
	_0xDC0F817884CDD856(3, false);
	_0xDC0F817884CDD856(5, false);
	_0xDC0F817884CDD856(11, false);
	iLocal_72 = PED::CREATE_PED(26, iLocal_90, vLocal_76, fLocal_89, 1, true);
	set_blocking_of_non_temporary_events(iLocal_72, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_72, 134, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_72, 137, true);
	add_relationship_group("PedPrisoner", &iLocal_73);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_72, iLocal_73);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_73);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_73, -1533126372);
	task_play_anim(iLocal_72, "random@prisoner_lift", "loop2_idlelook2", 2f, -2f, -1, 1, 0, 0, 0, 0);
	set_ped_money(iLocal_72, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_72, 8, false);
	set_ped_flee_attributes(iLocal_72, 128, true);
	set_ped_flee_attributes(iLocal_72, 2, true);
	set_ped_flee_attributes(iLocal_72, 1, false);
	GAMEPLAY::SET_BIT(&uLocal_94, 3);
	GAMEPLAY::SET_BIT(&uLocal_94, 5);
	GAMEPLAY::SET_BIT(&uLocal_94, false);
	if (iLocal_56 == 0)
	{
		set_ambient_voice_name(iLocal_72, "REPRI1Lost");
		func_103(&uLocal_148, 3, iLocal_72, "REPRI1Lost", 0, 1);
		clear_area_of_peds(vLocal_76, 50f, 0);
		clear_area(vLocal_76, 10f, 0, 0, 0, false);
		add_scenario_blocking_area(vLocal_76 - Vector(50f, 50f, 50f), vLocal_76 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		add_scenario_blocking_area(vLocal_86 - Vector(10f, 10f, 10f), vLocal_86 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
		set_all_vehicle_generators_active_in_area(vLocal_76 - Vector(10f, 10f, 10f), vLocal_76 + Vector(10f, 10f, 10f), false, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_73, -1865950624);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, iLocal_73);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_72, 17, true);
		iLocal_79 = create_vehicle(joaat("sheriff"), 1524.332f, 2173.347f, 79.0619f, 201.6806f, 1, true);
		set_vehicle_engine_health(iLocal_79, 0f);
		set_vehicle_door_open(iLocal_79, 4, 0, 0);
		set_vehicle_tyre_burst(iLocal_79, false, 0, 1000f);
		_0x0AD9E8F87FF7C16F(iLocal_79, 0);
		shoot_single_bullet_between_coords(1525.566f, 2172.512f, 80.1985f, 1524.423f, 2173.894f, 80.1342f, 100, 1, joaat("weapon_assaultrifle"), false, 1, 1, -1082130432);
		iVar0 = PED::CREATE_PED_inside_vehicle(iLocal_79, 26, joaat("s_m_y_ranger_01"), -1, 1, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 326, true);
		set_entity_health(iVar0, 99);
		set_ped_plays_head_on_horn_anim_when_dies_in_vehicle(iVar0, 1);
		iVar1[0] = create_vehicle(joaat("ratloader"), 1527.4f, 2240.33f, 73.8459f, 216.8133f, 1, true);
		iVar1[1] = create_vehicle(joaat("bfinjection"), 1594.093f, 2198.657f, 77.8709f, 85.3536f, 1, true);
		set_vehicle_on_ground_properly(iVar1[0]);
		set_vehicle_on_ground_properly(iVar1[1]);
	}
	else if (iLocal_56 == 1)
	{
		set_roads_in_angled_area(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 0, false, 1);
		set_ambient_voice_name(iLocal_72, "G_M_Y_STREETPUNK02_BLACK_MINI_04");
		func_103(&uLocal_148, 3, iLocal_72, "REPRI2Prisoner", 0, 1);
		give_weapon_to_ped(iLocal_72, joaat("weapon_pistol"), -1, false, true);
	}
	if (func_49() == 0)
	{
		func_103(&uLocal_148, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_49() == 1)
	{
		func_103(&uLocal_148, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_49() == 2)
	{
		func_103(&uLocal_148, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	iLocal_55 = 1;
}

void func_103(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_104(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_108(iParam0, 2, 1))
		{
			func_107(iParam0, 2, 1);
		}
	}
	else if (func_108(iParam0, 2, 1))
	{
		func_105(iParam0, 2, 1);
	}
}

void func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_24() == 0)
		{
			iVar0 = func_48(func_106(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_46(func_106(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_106(int iParam0)
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

void func_107(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_24() == 0)
		{
			iVar0 = func_48(func_106(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_46(func_106(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_24() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_48(func_106(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_109()
{
	STREAMING::REQUEST_MODEL(iLocal_90);
	request_anim_dict("random@prisoner_lift");
	if (iLocal_56 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("s_m_y_ranger_01"));
		STREAMING::REQUEST_MODEL(joaat("sheriff"));
		STREAMING::REQUEST_MODEL(joaat("ratloader"));
		STREAMING::REQUEST_MODEL(joaat("bfinjection"));
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_90) && has_anim_dict_loaded("random@prisoner_lift"))
	{
		if (iLocal_56 == 0)
		{
			if (((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_ranger_01")) && STREAMING::HAS_MODEL_LOADED(joaat("sheriff"))) && STREAMING::HAS_MODEL_LOADED(joaat("ratloader"))) && STREAMING::HAS_MODEL_LOADED(joaat("bfinjection")))
			{
				iLocal_57 = true;
			}
		}
		else
		{
			iLocal_57 = true;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_90);
		request_anim_dict("random@prisoner_lift");
		if (iLocal_56 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_ranger_01"));
			STREAMING::REQUEST_MODEL(joaat("sheriff"));
			STREAMING::REQUEST_MODEL(joaat("ratloader"));
			STREAMING::REQUEST_MODEL(joaat("bfinjection"));
		}
	}
}

void func_110()
{
	if (iLocal_62 == 1)
	{
		iLocal_90 = joaat("g_m_y_lost_02");
		vLocal_76 = {1538.09f, 2172.344f, 77.826f};
		fLocal_89 = 142.0201f;
		vLocal_91 = {984.3975f, -106.9935f, 73.3531f};
		vLocal_86 = {960.1481f, -139.4141f, 73.476f};
	}
	if (iLocal_62 == 2)
	{
		iLocal_90 = joaat("s_m_y_prisoner_01");
		vLocal_76 = {1401.692f, 2528.085f, 40.3762f};
		fLocal_89 = 301.2458f;
		vLocal_91 = {938.5384f, -2167.42f, 29.5153f};
		vLocal_86 = {928.9882f, -2173.248f, 29.2873f};
	}
	iLocal_58 = 1;
}

bool func_111()
{
	if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vLocal_50) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_122())
		{
			return false;
		}
	}
	if (func_118())
	{
		return true;
	}
	if (func_112(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_112(float fParam0, int iParam1)
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
		if (func_37(func_49()))
		{
			iVar36 = func_34();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_113(iVar32, &Var0);
					fVar35 = get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
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

void func_113(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_114(uParam1, "Abigail1", func_116(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 1:
			func_114(uParam1, "Abigail2", func_116(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 2:
			func_114(uParam1, "Barry1", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 3:
			func_114(uParam1, "Barry2", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 4:
			func_114(uParam1, "Barry3", func_116(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 5:
			func_114(uParam1, "Barry3A", func_116(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 6:
			func_114(uParam1, "Barry3C", func_116(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 7:
			func_114(uParam1, "Barry4", func_116(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_115(iParam0), 0, 0);
			break;
		
		case 8:
			func_114(uParam1, "Dreyfuss1", func_116(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 9:
			func_114(uParam1, "Epsilon1", func_116(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 10:
			func_114(uParam1, "Epsilon2", func_116(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 11:
			func_114(uParam1, "Epsilon3", func_116(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 12:
			func_114(uParam1, "Epsilon4", func_116(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 13:
			func_114(uParam1, "Epsilon5", func_116(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 14:
			func_114(uParam1, "Epsilon6", func_116(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 15:
			func_114(uParam1, "Epsilon7", func_116(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 16:
			func_114(uParam1, "Epsilon8", func_116(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 17:
			func_114(uParam1, "Extreme1", func_116(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 18:
			func_114(uParam1, "Extreme2", func_116(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 19:
			func_114(uParam1, "Extreme3", func_116(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 20:
			func_114(uParam1, "Extreme4", func_116(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 21:
			func_114(uParam1, "Fanatic1", func_116(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 22:
			func_114(uParam1, "Fanatic2", func_116(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 23:
			func_114(uParam1, "Fanatic3", func_116(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_115(iParam0), 0, 1);
			break;
		
		case 24:
			func_114(uParam1, "Hao1", func_116(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_115(iParam0), 0, 1);
			break;
		
		case 25:
			func_114(uParam1, "Hunting1", func_116(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 26:
			func_114(uParam1, "Hunting2", func_116(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 27:
			func_114(uParam1, "Josh1", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 28:
			func_114(uParam1, "Josh2", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 29:
			func_114(uParam1, "Josh3", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 30:
			func_114(uParam1, "Josh4", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 31:
			func_114(uParam1, "Maude1", func_116(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 32:
			func_114(uParam1, "Minute1", func_116(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 33:
			func_114(uParam1, "Minute2", func_116(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 34:
			func_114(uParam1, "Minute3", func_116(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 35:
			func_114(uParam1, "MrsPhilips1", func_116(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 36:
			func_114(uParam1, "MrsPhilips2", func_116(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 37:
			func_114(uParam1, "Nigel1", func_116(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 38:
			func_114(uParam1, "Nigel1A", func_116(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 39:
			func_114(uParam1, "Nigel1B", func_116(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 40:
			func_114(uParam1, "Nigel1C", func_116(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 41:
			func_114(uParam1, "Nigel1D", func_116(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 42:
			func_114(uParam1, "Nigel2", func_116(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 43:
			func_114(uParam1, "Nigel3", func_116(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 44:
			func_114(uParam1, "Omega1", func_116(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 45:
			func_114(uParam1, "Omega2", func_116(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 46:
			func_114(uParam1, "Paparazzo1", func_116(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 47:
			func_114(uParam1, "Paparazzo2", func_116(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 48:
			func_114(uParam1, "Paparazzo3", func_116(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 49:
			func_114(uParam1, "Paparazzo3A", func_116(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 50:
			func_114(uParam1, "Paparazzo3B", func_116(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 51:
			func_114(uParam1, "Paparazzo4", func_116(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 52:
			func_114(uParam1, "Rampage1", func_116(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 54:
			func_114(uParam1, "Rampage3", func_116(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 55:
			func_114(uParam1, "Rampage4", func_116(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 56:
			func_114(uParam1, "Rampage5", func_116(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 53:
			func_114(uParam1, "Rampage2", func_116(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 57:
			func_114(uParam1, "TheLastOne", func_116(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 58:
			func_114(uParam1, "Tonya1", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 59:
			func_114(uParam1, "Tonya2", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 60:
			func_114(uParam1, "Tonya3", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 61:
			func_114(uParam1, "Tonya4", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 62:
			func_114(uParam1, "Tonya5", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_114(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_115(int iParam0)
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

struct<2> func_116(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_117(iParam0)};
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

struct<2> func_117(int iParam0)
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

bool func_118()
{
	if (func_121() && !func_122())
	{
		return true;
	}
	if (func_120() && func_119())
	{
		return true;
	}
	return false;
}

int func_119()
{
	return Global_100872 > 0;
}

bool func_120()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_121()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_122()
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

bool func_123()
{
	if (!func_98(5))
	{
		return true;
	}
	if (func_118())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_122())
		{
			return false;
		}
	}
	if (func_112(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_124()
{
	if ((Global_101143 == func_43() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_125(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_127(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_126();
}

void func_126()
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

void func_127(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_128(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_43();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_169())
		{
			return false;
		}
	}
	vLocal_50 = {vParam0};
	iVar0 = false;
	if (!iVar0)
	{
		if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
			if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_122())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_19(0))
		{
			return false;
		}
		if (func_118())
		{
			return false;
		}
		if (func_168())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_37(func_49()))
		{
			if (func_112(100f, 1) != -1)
			{
				return false;
			}
		}
		if (is_player_playing(player_id()) && !iParam6)
		{
			if (vVar1.z - vLocal_50.z > 50f)
			{
				return false;
			}
		}
		if (!func_167(iParam3))
		{
			return false;
		}
		if (func_37(func_49()))
		{
			if (func_166(func_49()) == 4 || func_166(func_49()) == 5)
			{
				return false;
			}
		}
		if (func_37(func_49()))
		{
			if (!func_165(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_164(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_163())
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
		if (!func_154(4))
		{
			return false;
		}
		if (!func_98(5))
		{
			return false;
		}
		if (func_153(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_153(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_167(30) && !func_153(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_37(func_49()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_152(iVar8))
				{
					if (func_130(iVar4))
					{
						if (!func_129(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_49() != iVar4)
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

int func_129(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_131(iVar0);
}

int func_131(int iParam0)
{
	return func_132(iParam0, 1);
}

bool func_132(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_152(iParam0))
	{
		return false;
	}
	func_133(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_133(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_134(func_145(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_134(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_144(iParam0, iParam1))
	{
		iVar0 = func_143(iParam1);
		iVar1 = func_141(iParam0);
		iVar2 = func_141(iParam0) - func_141(iParam1);
		iVar3 = func_143(iParam0) - func_143(iParam1);
		iVar4 = func_140(iParam0) - func_140(iParam1);
		iVar5 = func_139(iParam0) - func_139(iParam1);
		iVar6 = func_138(iParam0) - func_138(iParam1);
		iVar7 = func_137(iParam0) - func_137(iParam1);
	}
	else
	{
		iVar0 = func_143(iParam0);
		iVar1 = func_141(iParam1);
		iVar2 = func_141(iParam1) - func_141(iParam0);
		iVar3 = func_143(iParam1) - func_143(iParam0);
		iVar4 = func_140(iParam1) - func_140(iParam0);
		iVar5 = func_139(iParam1) - func_139(iParam0);
		iVar6 = func_138(iParam1) - func_138(iParam0);
		iVar7 = func_137(iParam1) - func_137(iParam0);
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
		iVar4 += func_136(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_135(to_float(iVar0 + 1), 0f, 12f));
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

float func_135(Vector3 fParam0, float fParam1, float fParam2)
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

int func_136(int iParam0, int iParam1)
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

int func_137(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_138(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_139(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_140(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_141(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_142(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_142(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_143(int iParam0)
{
	return (iParam0 && 15);
}

bool func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_152(iParam1) || !func_152(iParam0))
	{
		return true;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
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
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
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
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_145()
{
	auto uVar0;
	
	func_151(&uVar0, get_clock_seconds());
	func_150(&uVar0, get_clock_minutes());
	func_149(&uVar0, get_clock_hours());
	func_148(&uVar0, get_clock_day_of_month());
	func_147(&uVar0, get_clock_month());
	func_146(&uVar0, get_clock_year());
	return uVar0;
}

void func_146(auto uParam0, int iParam1)
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

void func_147(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_148(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_143(*uParam0);
	iVar1 = func_141(*uParam0);
	if (iParam1 < 1 || iParam1 > func_136(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_149(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_150(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_151(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_152(int iParam0)
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
	iVar0 = func_137(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_138(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_139(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_141(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_143(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_140(iParam0);
	if (iVar5 < 1 || iVar5 > func_136(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_153(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_154(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_49();
				if (!func_37(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_162()) || Global_100201) || Global_25122) || func_161()) || func_80(8, -1)) || func_160()) || func_159()) || func_158()) || func_157()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_162()) || Global_25122) || func_161()) || func_80(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_162()) || Global_100201) || Global_25122) || func_161()) || func_80(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_162()) || Global_100201) || Global_25122) || func_161()) || func_80(8, -1)) || func_160()) || func_159()) || func_157()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_162() || get_player_wanted_level(player_id()) > 0) || func_80(8, -1)) || func_157()) || func_156()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_80(8, -1) || func_160()) || func_159()) || func_156()) || func_155())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_162()) || Global_25122) || func_161()) || func_80(8, -1)) || func_159()) || func_158()) || func_157()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_162()) || func_159()) || Global_100201) || Global_25122) || func_161()) || Global_36839) || func_80(8, -1)) || func_158()) || func_156()) || func_157()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_162()) || Global_100201) || Global_25122) || func_161()) || func_80(8, -1)) || func_158()) || func_156()) || func_160()) || func_159()) || func_157())
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

auto func_155()
{
	return Global_91317.f_1;
}

int func_156()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_157()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_158()
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

int func_159()
{
	return Global_91330.f_297 > 0;
}

int func_160()
{
	return Global_91330.f_296 > 0;
}

auto func_161()
{
	return Global_1315913;
}

int func_162()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_163()
{
	func_78();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_164(int iParam0)
{
	return func_144(func_145(), iParam0);
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_49();
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

int func_166(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_169())
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

bool func_168()
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

bool func_169()
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

void func_170()
{
	if (iLocal_141)
	{
		func_184(0);
		func_182();
		func_90(0);
		set_wanted_level_multiplier(1f);
		set_all_vehicle_generators_active_in_area(vLocal_76 - Vector(10f, 10f, 10f), vLocal_76 + Vector(10f, 10f, 10f), true, 1);
		reset_wanted_level_difficulty(player_id());
		set_roads_back_to_original_in_angled_area(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 1);
		if (is_player_playing(player_id()))
		{
			if (!is_player_control_on(player_id()))
			{
				set_player_control(player_id(), true, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			set_blocking_of_non_temporary_events(iLocal_72, false);
			if (iLocal_56 == 0)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_72, 317, true);
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					open_sequence_task(&iLocal_74);
					task_smart_flee_coord(false, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					task_smart_flee_coord(false, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					close_sequence_task(iLocal_74);
					task_perform_sequence(iLocal_72, iLocal_74);
					clear_sequence_task(&iLocal_74);
					set_ped_keep_task(iLocal_72, true);
				}
			}
			else if (iLocal_56 == 1)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					open_sequence_task(&iLocal_74);
					task_smart_flee_coord(false, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					task_smart_flee_coord(false, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					close_sequence_task(iLocal_74);
					task_perform_sequence(iLocal_72, iLocal_74);
					clear_sequence_task(&iLocal_74);
					set_ped_keep_task(iLocal_72, true);
				}
				else if (is_vehicle_driveable(iLocal_75, 0))
				{
					open_sequence_task(&iLocal_74);
					task_enter_vehicle(false, iLocal_75, -1, -1, 2f, 9, 0);
					task_smart_flee_coord(false, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					close_sequence_task(iLocal_74);
					task_perform_sequence(iLocal_72, iLocal_74);
					clear_sequence_task(&iLocal_74);
					set_ped_keep_task(iLocal_72, true);
				}
				else
				{
					open_sequence_task(&iLocal_74);
					task_smart_flee_coord(false, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					task_smart_flee_coord(false, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					close_sequence_task(iLocal_74);
					task_perform_sequence(iLocal_72, iLocal_74);
					clear_sequence_task(&iLocal_74);
					set_ped_keep_task(iLocal_72, true);
				}
			}
		}
		_0xDC0F817884CDD856(3, true);
		_0xDC0F817884CDD856(5, true);
		_0xDC0F817884CDD856(11, true);
		remove_scenario_blocking_areas();
	}
	func_171(-1);
	terminate_this_thread();
}

void func_171(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_124())
	{
		func_175(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_174(30000);
		StringCopy(&cVar0, func_173(Global_101143, 1), 64);
		if (func_42(Global_101143) > 0)
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
	func_172(&Global_25179);
	Global_101144 = 0;
	func_127(-1);
}

void func_172(auto uParam0)
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

char* func_173(int iParam0, int iParam1)
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

void func_174(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_175(int iParam0)
{
	func_176(iParam0, 0, func_181(iParam0));
}

void func_176(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_145();
	func_179(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_178(uParam0, &uVar0);
	Var1 = {func_177(&uVar0)};
}

struct<16> func_177(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_139(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_138(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_137(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_140(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_143(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_141(*uParam0), 64);
	return cVar0;
}

void func_178(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_179(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_143(*uParam0);
	iVar2 = func_140(*uParam0);
	iVar3 = func_139(*uParam0);
	iVar4 = func_138(*uParam0);
	iVar5 = func_137(*uParam0);
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
	iVar6 = func_136(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_136(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_180(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_180(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_151(uParam0, iParam1);
	func_150(uParam0, iParam2);
	func_149(uParam0, iParam3);
	func_147(uParam0, iParam5);
	func_148(uParam0, iParam4);
	func_146(uParam0, iParam6);
}

int func_181(int iParam0)
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

void func_182()
{
	Global_14578 = 0;
	func_183();
}

void func_183()
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

void func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_104(iVar0, iParam0);
		iVar0++;
	}
}

Vector3 func_185()
{
	Vector3 fVar0;
	
	if (is_player_playing(player_id()))
	{
		fVar0 = get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vLocal_63, 1);
		iLocal_62 = 1;
		if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vLocal_66, 1) < fVar0)
		{
			fVar0 = get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vLocal_66, 1);
			iLocal_62 = 2;
		}
		if (iLocal_62 == 1)
		{
			iLocal_69 = true;
			iLocal_56 = 0;
			return vLocal_63;
		}
		if (iLocal_62 == 2)
		{
			iLocal_69 = 2;
			iLocal_56 = 1;
			return vLocal_66;
		}
	}
	return 0f, 0f, 0f;
}

