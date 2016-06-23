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
	Vector3 vLocal_44 = 0;
	auto uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
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
	auto uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	Vector3 vLocal_65 = 0;
	Vector3 vLocal_68 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	auto uLocal_78 = 16;
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
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	Vector3 vLocal_250 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	char* sLocal_256 = 0;
	char* sLocal_257 = 0;
	char* sLocal_258 = 0;
	char* sLocal_259 = 0;
	char* sLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	char* sLocal_265 = 0;
	char* sLocal_266 = 0;
	char* sLocal_267 = 0;
	char* sLocal_268 = 0;
	char* sLocal_269 = 0;
	char* sLocal_270 = 0;
	char* sLocal_271 = 0;
	char* sLocal_272 = 0;
	char* sLocal_273 = 0;
	char* sLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	Vector3 vLocal_279 = 0;
	Vector3 vLocal_282 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	Vector3 vLocal_295 = 0;
	int iLocal_298 = 0;
	struct<2> Local_299 = 0;
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
	auto uLocal_316 = 5;
	auto uLocal_317 = 0;
	auto uLocal_318 = 0;
	auto uLocal_319 = 0;
	auto uLocal_320 = 0;
	auto uLocal_321 = 0;
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
	iLocal_244 = 8000;
	iLocal_247 = 8;
	iLocal_249 = 1;
	sLocal_257 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_258 = "RANDOM@ARRESTS";
	sLocal_259 = "RANDOM@ARRESTS@BUSTED";
	iLocal_263 = 1;
	vLocal_65 = {Local_299.f_1[0 /*3*/]};
	if (has_force_cleanup_occurred(11))
	{
		iLocal_76 = true;
		func_196();
		func_164();
	}
	if (vdist(2411.32f, 4958.76f, 45.19f, vLocal_65) < 10f)
	{
		iLocal_53 = 1;
	}
	else
	{
		iLocal_53 = 2;
	}
	if (func_121(vLocal_65, 15, iLocal_53, 0, 0))
	{
		func_116(15);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(0);
		if (is_player_playing(player_id()))
		{
			set_all_random_peds_flee_this_frame(player_id());
		}
		switch (iLocal_48)
		{
			case 0:
				if ((is_world_point_within_brain_activation_range() && !func_115()) && !func_102())
				{
					if (func_99())
					{
						iLocal_48 = 1;
					}
				}
				else
				{
					func_164();
				}
				break;
			
			case 1:
				if (func_95())
				{
					set_roads_in_angled_area(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 0, true, 1);
					set_wanted_level_multiplier(0f);
					func_84(1);
					iLocal_48 = 2;
				}
				else if (!func_83(200f))
				{
					func_164();
				}
				break;
			
			case 2:
				if (func_83(1128792064))
				{
					func_1();
				}
				else
				{
					func_164();
				}
				break;
		}
	}
}

void func_1()
{
	auto uVar0;
	Vector3 vVar1;
	Vector3 fVar4;
	int iVar5;
	Vector3 fVar6;
	
	set_bit(&uVar0, 3);
	set_bit(&uVar0, 4);
	iVar5 = 0;
	func_82();
	if (!is_ped_injured(iLocal_55))
	{
		set_ped_reset_flag(iLocal_55, 129, true);
	}
	if (func_81(iLocal_55))
	{
		if (is_ped_being_stunned(iLocal_55, 0))
		{
			iLocal_298 = true;
		}
	}
	if (!is_ped_injured(iLocal_54) && (iLocal_49 != 2 && iLocal_49 != 1))
	{
		if (!is_ped_injured(iLocal_55))
		{
			switch (iLocal_52)
			{
				case 0:
					draw_debug_text_2d("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (timera() > 10)
					{
						if (!iLocal_74)
						{
							if (get_script_task_status(iLocal_54, 1227113341) == 7)
							{
								task_go_to_entity(iLocal_54, iLocal_55, -1, 1f, 3f, 2f, 0);
							}
						}
					}
					if (timera() > 4000)
					{
						if (!iLocal_74)
						{
							if (get_script_task_status(iLocal_55, 1805844857) == 7)
							{
								if (get_script_task_status(iLocal_55, -2017877118) == 1)
								{
									stop_anim_playback(iLocal_55, 2, 1);
								}
								task_smart_flee_ped(iLocal_55, iLocal_54, 150f, -1, 0, 0);
							}
						}
					}
					fVar4 = get_distance_between_coords(get_entity_coords(iLocal_54, 1), get_entity_coords(iLocal_55, 1), 1);
					if (timera() > 8000 || fVar4 < 1.5f)
					{
						iVar5 = func_77();
						if (iVar5 == 1)
						{
							task_go_to_entity(iLocal_54, iLocal_55, -1, 1f, 0.01f, 2f, 0);
						}
					}
					if (timera() > 30000 && fVar4 < 10f)
					{
						iVar5 = 1;
					}
					if (timera() > 2000)
					{
						if (iVar5 || iLocal_278 == 1)
						{
							if (!func_76())
							{
								if (func_66(&uLocal_78, "REARRAU", "REARR_PCUFF", 4, iLocal_254, 0, 0))
								{
								}
								iLocal_294 = (is_ped_ragdoll(iLocal_55) || is_ped_getting_up(iLocal_55));
								if (!has_ped_got_weapon(iLocal_54, joaat("weapon_pistol"), 0))
								{
									give_weapon_to_ped(iLocal_54, joaat("weapon_pistol"), -1, false, true);
								}
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54, joaat("weapon_pistol"), true);
								vLocal_68 = {get_entity_coords(iLocal_55, 1)};
								clear_ped_tasks(iLocal_54);
								open_sequence_task(&iLocal_73);
								if (!iLocal_294 && fVar4 > 2f)
								{
									task_shoot_at_coord(false, vLocal_68.x, vLocal_68.y, vLocal_68.z + 4f, 1000, 1566631136);
								}
								task_look_at_entity(false, iLocal_55, -1, 2048, 2);
								task_go_to_entity_while_aiming_at_entity(false, iLocal_55, iLocal_55, 1f, 0, 3f, 4f, 1, 0, -957453492);
								task_aim_gun_at_entity(false, iLocal_55, 5000, 0);
								close_sequence_task(iLocal_73);
								task_perform_sequence(iLocal_54, iLocal_73);
								clear_sequence_task(&iLocal_73);
								clear_entity_last_damage_entity(iLocal_54);
								set_ped_keep_task(iLocal_54, true);
								settimera(false);
								iLocal_246 = get_game_timer();
								if (iLocal_294)
								{
									clear_ped_tasks(iLocal_55);
									set_ped_drops_weapon(iLocal_55);
									iLocal_52 = 4;
								}
								else
								{
									iLocal_52 = 2;
								}
							}
							else if (!iLocal_278)
							{
								task_go_to_entity(iLocal_54, iLocal_55, -1, 1f, 0.01f, 2f, 0);
								iLocal_278 = 1;
							}
						}
						else
						{
							func_65();
						}
					}
					else
					{
						draw_debug_text_2d("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						if (!is_ped_injured(iLocal_54) && !is_entity_dead(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
						{
							if (is_entity_touching_entity(get_vehicle_ped_is_in(player_ped_id(), 0), iLocal_54))
							{
								clear_ped_tasks(iLocal_54);
								iLocal_52 = 1;
								task_stand_still(iLocal_54, 500);
							}
						}
					}
					break;
				
				case 1:
					if (get_script_task_status(iLocal_54, -982327190) == 7)
					{
						task_go_to_entity(iLocal_54, iLocal_55, -1, 1f, 3f, 2f, 0);
						iLocal_52 = 0;
					}
					break;
				
				case 2:
					if (get_game_timer() - iLocal_246 > 1000)
					{
						vVar1 = {0f, 0f, get_entity_heading(iLocal_55) * 3f};
						task_follow_nav_mesh_to_coord(iLocal_55, vVar1, 2f, -1, 1f, 1024, 1193033728);
						iLocal_52 = 3;
					}
					break;
				
				case 3:
					if (get_game_timer() - iLocal_246 > 4500)
					{
						iLocal_52 = 4;
					}
					break;
				
				case 4:
					iLocal_74 = true;
					open_sequence_task(&iLocal_73);
					task_play_anim(false, sLocal_258, "idle_2_hands_up", 2f, -8f, -1, 0, 0, 0, 0, 0);
					task_play_anim(false, sLocal_258, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					close_sequence_task(iLocal_73);
					task_perform_sequence(iLocal_55, iLocal_73);
					clear_sequence_task(&iLocal_73);
					clear_entity_last_damage_entity(iLocal_55);
					set_ped_keep_task(iLocal_55, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_55, 1);
					iLocal_52 = 5;
					break;
				
				case 5:
					if (iLocal_50 == 3)
					{
						if (get_script_task_status(iLocal_54, 242628503) == 7)
						{
							clear_ped_tasks(iLocal_54);
							if (!has_ped_got_weapon(iLocal_54, joaat("weapon_pistol"), 0))
							{
								give_weapon_to_ped(iLocal_54, joaat("weapon_pistol"), -1, false, true);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54, joaat("weapon_pistol"), true);
							open_sequence_task(&iLocal_73);
							task_aim_gun_at_entity(false, iLocal_55, -1, 0);
							close_sequence_task(iLocal_73);
							task_perform_sequence(iLocal_54, iLocal_73);
							clear_sequence_task(&iLocal_73);
							set_ped_keep_task(iLocal_54, true);
							iLocal_52 = 6;
						}
					}
					break;
				
				case 6:
					if (is_vehicle_driveable(iLocal_57, 0) && !is_ped_injured(iLocal_56))
					{
						_0xBE5C1255A1830FF5(iLocal_57, 1);
						if (get_script_task_status(iLocal_54, -2017877118) == 7)
						{
							if (get_script_task_status(iLocal_56, -1273030092) == 7)
							{
								if (_0x639431E895B9AA57(iLocal_55, iLocal_57, 2, 0, false))
								{
									if (!is_ped_injured(iLocal_55))
									{
										if (!is_ped_sitting_in_vehicle(iLocal_55, iLocal_57))
										{
											if (!is_ped_in_combat(iLocal_55, false))
											{
												if (get_script_task_status(iLocal_55, -1794415470) == 7)
												{
													open_sequence_task(&iLocal_73);
													task_play_anim(false, sLocal_258, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0, 0, 0, 0);
													close_sequence_task(iLocal_73);
													task_perform_sequence(iLocal_55, iLocal_73);
													clear_sequence_task(&iLocal_73);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_72, iLocal_71);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_71, iLocal_72);
												}
											}
										}
									}
									if (!is_ped_injured(iLocal_54))
									{
										_0x570389D1C3DE3C6B(iLocal_54);
										if (!is_ped_in_combat(iLocal_54, false))
										{
											if (is_vehicle_driveable(iLocal_57, 0))
											{
												if (!func_76())
												{
													if (func_66(&uLocal_78, "REARRAU", "REARR_INCAR", 4, iLocal_254, 0, 0))
													{
														if (func_64(iLocal_54, iLocal_57) == 2)
														{
															if (is_ped_facing_ped(iLocal_56, iLocal_55, 180f))
															{
																vLocal_295 = {2.978f, -0.75f, 1f};
															}
															else
															{
																vLocal_295 = {2.978f, 0.75f, 1f};
															}
														}
														else if (is_ped_facing_ped(iLocal_56, iLocal_55, 180f))
														{
															vLocal_295 = {-2.978f, -0.75f, 1f};
														}
														else
														{
															vLocal_295 = {-2.978f, 0.75f, 1f};
														}
														open_sequence_task(&iLocal_73);
														task_go_to_coord_while_aiming_at_entity(0, get_offset_from_entity_in_world_coords(iLocal_57, vLocal_295), iLocal_55, 0.75f, false, 0.5f, 4f, true, 0, 0, -957453492, 60000);
														task_aim_gun_at_entity(false, iLocal_55, -1, 0);
														close_sequence_task(iLocal_73);
														task_perform_sequence(iLocal_54, iLocal_73);
														clear_sequence_task(&iLocal_73);
														set_ped_keep_task(iLocal_54, true);
														set_vehicle_siren(iLocal_57, false);
														iLocal_244 = 8000;
														settimerb(false);
														iLocal_277 = get_game_timer();
														iLocal_52 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_63();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!is_ped_injured(iLocal_54))
					{
						if (is_entity_at_entity(player_ped_id(), iLocal_54, 35f, 35f, 35f, 0, 1, 0))
						{
							if (get_game_timer() - iLocal_277 > 8000)
							{
								if (!func_76())
								{
									task_look_at_entity(iLocal_54, player_ped_id(), 6000, 2048, 2);
									func_66(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
									iLocal_244 = 8000;
									iLocal_277 = get_game_timer();
								}
							}
						}
						if (is_vehicle_driveable(iLocal_57, 0))
						{
							if (iLocal_64)
							{
								if (func_64(iLocal_54, iLocal_57) == 2)
								{
									task_enter_vehicle(iLocal_55, iLocal_57, -1, 2, 1f, 1, 0);
								}
								else
								{
									task_enter_vehicle(iLocal_55, iLocal_57, -1, true, 1f, 1, 0);
								}
								iLocal_52 = 8;
							}
							else if (iLocal_63)
							{
								fVar6 = get_distance_between_coords(get_entity_coords(iLocal_55, 1), get_entity_coords(iLocal_57, 1), 1);
								if (fVar6 < 4f && iLocal_285 == 0)
								{
									task_goto_entity_offset_xy(iLocal_55, iLocal_57, 60000, 0.5f, vLocal_295.x, vLocal_295.y, 1f, 1);
									iLocal_285 = 1;
								}
								else if (fVar6 < 3f)
								{
									clear_ped_tasks(iLocal_55);
									iLocal_64 = 1;
								}
							}
							else if (!is_entity_playing_anim(iLocal_55, sLocal_258, "kneeling_arrest_get_up", 3))
							{
								if (func_64(iLocal_54, iLocal_57) == 2)
								{
									vLocal_295 = {1.578f, -0.5f, 1f};
								}
								else
								{
									vLocal_295 = {-1.578f, -0.5f, 1f};
								}
								task_goto_entity_offset_xy(iLocal_55, iLocal_57, 60000, 0.5f, vLocal_295.x, vLocal_295.y, 1f, 1);
								if (iLocal_298)
								{
									set_ped_movement_clipset(iLocal_55, "MOVE_M@BAIL_BOND_TAZERED", 0.25f);
								}
								else
								{
									set_ped_movement_clipset(iLocal_55, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
								}
								iLocal_63 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (is_vehicle_driveable(iLocal_57, 0))
					{
						if (!is_ped_injured(iLocal_56))
						{
							if (is_ped_sitting_in_vehicle(iLocal_55, iLocal_57))
							{
								if (does_blip_exist(iLocal_58))
								{
									remove_blip(&iLocal_58);
								}
								if (does_blip_exist(iLocal_59))
								{
									remove_blip(&iLocal_59);
								}
								if (is_ped_sitting_in_vehicle(iLocal_54, iLocal_57))
								{
									task_vehicle_drive_wander(iLocal_56, iLocal_57, 10f, 786603);
									set_ped_keep_task(iLocal_56, true);
									set_blocking_of_non_temporary_events(iLocal_54, false);
									func_164();
								}
								else if (get_script_task_status(iLocal_54, -1794415470) == 7)
								{
									clear_ped_tasks(iLocal_54);
									task_enter_vehicle(iLocal_54, iLocal_57, 20000, false, 1f, 1, 0);
									set_ped_keep_task(iLocal_54, true);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_49();
	if (is_ped_injured(iLocal_55))
	{
	}
	if (is_ped_injured(iLocal_54))
	{
		if (!is_ped_injured(iLocal_55))
		{
			if (iLocal_49 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_49 == 1 || iLocal_49 == 3)
				{
					if (!func_76())
					{
						if (get_distance_between_coords(get_entity_coords(iLocal_55, 1), get_entity_coords(player_ped_id(), 1), 1) < 20f)
						{
							func_66(&uLocal_78, "REARRAU", sLocal_274, 4, iLocal_254, 0, 0);
						}
					}
				}
				if (is_entity_playing_anim(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
				{
					open_sequence_task(&iLocal_73);
					task_play_anim(false, sLocal_258, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0, 0, 0, 0);
					task_smart_flee_ped(false, player_ped_id(), 150f, -1, 0, 0);
					close_sequence_task(iLocal_73);
					task_perform_sequence(iLocal_55, iLocal_73);
					clear_sequence_task(&iLocal_73);
				}
				else
				{
					task_smart_flee_ped(iLocal_55, player_ped_id(), 150f, -1, 0, 0);
					set_ped_keep_task(iLocal_55, true);
				}
				wait(0);
				if (iLocal_49 == 0)
				{
					iLocal_49 = 2;
				}
				func_164();
			}
		}
	}
	if (is_ped_injured(iLocal_55))
	{
		if (!iLocal_61)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_52 == 5 || iLocal_52 == 6)
	{
		if (!iLocal_61)
		{
			if (iLocal_49 == 3)
			{
				if (func_11())
				{
					func_3(0);
				}
			}
			else
			{
				func_3(1);
			}
		}
	}
	func_2();
}

void func_2()
{
	int iVar0;
	Vector3 vVar1;
	
	vVar1 = {40f, 40f, 20f};
	if (get_game_timer() > iLocal_255 + 1000)
	{
		if (!is_ped_injured(iLocal_54))
		{
			if (!is_entity_at_entity(iLocal_54, player_ped_id(), vVar1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!is_ped_injured(iLocal_55))
		{
			if (!is_entity_at_entity(iLocal_55, player_ped_id(), vVar1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			iLocal_254 = 1;
		}
		else
		{
			iLocal_254 = 0;
		}
		iLocal_255 = get_game_timer();
	}
}

void func_3(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (iParam0)
	{
		sVar0 = "radio_enter";
		sVar1 = "radio_chatter";
		sVar2 = "radio_exit";
	}
	else
	{
		sVar0 = "generic_radio_enter";
		sVar1 = "generic_radio_chatter";
		sVar2 = "generic_radio_exit";
	}
	if (!is_ped_injured(iLocal_54))
	{
		switch (iLocal_50)
		{
			case 0:
				if ((iLocal_243 == 3 || iLocal_52 == 5) || iLocal_52 == 6)
				{
					if (!func_76())
					{
						clear_ped_tasks(iLocal_54);
						open_sequence_task(&iLocal_73);
						task_look_at_coord(false, get_entity_coords(iLocal_55, 0), 10000, 0, 2);
						task_play_anim(false, sLocal_258, sVar0, 8f, -4f, -1, 0, 0, 0, 0, 0);
						task_play_anim(false, sLocal_258, sVar1, 16f, -8f, -1, 1, 0, 0, 0, 0);
						close_sequence_task(iLocal_73);
						task_perform_sequence(iLocal_54, iLocal_73);
						clear_sequence_task(&iLocal_73);
						iLocal_50 = 1;
					}
				}
				break;
			
			case 1:
				if (is_entity_playing_anim(iLocal_54, sLocal_258, sVar1, 3))
				{
					if (!is_ped_injured(iLocal_55))
					{
						if (!func_76())
						{
							if (func_66(&uLocal_78, "REARRAU", "REARR_PRAD1", 4, iLocal_254, 0, 0))
							{
								iLocal_50 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_76())
						{
							if (func_66(&uLocal_78, "REARRAU", "REARR_PRAD2", 4, iLocal_254, 0, 0))
							{
								iLocal_50 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_76())
				{
					if (func_10())
					{
						if (is_vehicle_driveable(iLocal_57, 0))
						{
							disable_vehicle_impact_explosion_activation(iLocal_57, 0);
							set_vehicle_siren(iLocal_57, true);
						}
						clear_ped_tasks(iLocal_54);
						open_sequence_task(&iLocal_73);
						task_play_anim(false, sLocal_258, sVar2, 8f, -1.5f, -1, 0, 0, 0, 0, 0);
						close_sequence_task(iLocal_73);
						task_perform_sequence(iLocal_54, iLocal_73);
						clear_sequence_task(&iLocal_73);
						_0x2208438012482A1A(iLocal_54, 0, 0);
						func_8();
						iLocal_50 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_74)
				{
					func_7();
				}
				if (does_entity_exist(iLocal_55) || !is_entity_dead(iLocal_55, 0))
				{
					if (is_entity_touching_entity(player_ped_id(), iLocal_55))
					{
						if (!func_76())
						{
							func_66(&uLocal_78, "REARRAU", "REARR_PWTF", 4, iLocal_254, 0, 0);
						}
					}
				}
				if (is_entity_at_entity(player_ped_id(), iLocal_54, 35f, 35f, 35f, 0, 1, 0))
				{
					set_ik_target(iLocal_54, 1, player_ped_id(), 31086, 0f, 0f, 0f, 0, -1, -1);
					set_ik_target(player_ped_id(), 1, iLocal_54, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (timerb() > iLocal_244 || iLocal_262)
					{
						if (iLocal_49 == 3 || iLocal_49 == 0)
						{
							if (!is_ped_injured(iLocal_55))
							{
								if (iLocal_244 == 8000 || iLocal_262)
								{
									if (iLocal_261)
									{
										func_6();
									}
									else
									{
										func_4();
									}
								}
								else if (!func_76())
								{
									task_look_at_entity(iLocal_54, player_ped_id(), 500, 2048, 2);
									func_66(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
									iLocal_244 = 8000;
								}
							}
							else if (iLocal_244 == 8000)
							{
								if (!func_76())
								{
									func_66(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
									iLocal_244 = 20000;
								}
							}
							else if (!func_76())
							{
								func_66(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
								iLocal_244 = 8000;
							}
							settimerb(false);
						}
						else
						{
							if (is_ped_injured(iLocal_55))
							{
								if (!func_76())
								{
									func_66(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
									iLocal_244 = 30000;
								}
							}
							else if (!func_76())
							{
								task_look_at_entity(iLocal_54, player_ped_id(), 6000, 2048, 2);
								func_66(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
								iLocal_244 = get_random_int_in_range(8, 22);
								iLocal_244 *= 30000;
							}
							settimerb(false);
						}
					}
				}
				if (iLocal_52 != 8)
				{
					if (is_vehicle_driveable(iLocal_57, 0))
					{
						if (!is_ped_injured(iLocal_55))
						{
							if (!is_ped_in_vehicle(iLocal_55, iLocal_57, 0))
							{
								func_63();
							}
						}
					}
					else
					{
						func_63();
					}
				}
				break;
			}
	}
}

void func_4()
{
	if (!iLocal_262)
	{
		switch (get_random_int_in_range(false, 3))
		{
			case 0:
				sLocal_260 = "idle_a";
				break;
			
			case 1:
				sLocal_260 = "idle_b";
				break;
			
			case 2:
				sLocal_260 = "idle_c";
				break;
		}
		open_sequence_task(&iLocal_73);
		task_play_anim(false, sLocal_259, "enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		task_play_anim(false, sLocal_259, sLocal_260, 8f, -4f, -1, 0, 0, 0, 0, 0);
		task_play_anim(false, sLocal_259, "exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
		task_play_anim(false, sLocal_258, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
		close_sequence_task(iLocal_73);
		task_perform_sequence(iLocal_55, iLocal_73);
		clear_sequence_task(&iLocal_73);
		iLocal_262 = 1;
	}
	else if (is_entity_playing_anim(iLocal_55, sLocal_259, "enter", 3))
	{
		if (func_5())
		{
			func_66(&uLocal_78, "REARRAU", "REARR_PRAND", 4, iLocal_254, 0, 0);
		}
	}
	else if (is_entity_playing_anim(iLocal_55, sLocal_259, "exit", 3))
	{
	}
	else if (is_entity_playing_anim(iLocal_55, sLocal_259, sLocal_260, 3))
	{
		func_66(&uLocal_78, "REARRAU", sLocal_272, 4, iLocal_254, 0, 0);
	}
	else
	{
		func_8();
	}
}

bool func_5()
{
	if (get_game_timer() > iLocal_264 + 6000)
	{
		iLocal_264 = get_game_timer();
		return true;
	}
	return false;
}

void func_6()
{
	if (!iLocal_262)
	{
		open_sequence_task(&iLocal_73);
		task_play_anim(false, sLocal_258, "radio_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		task_play_anim(false, sLocal_258, "radio_chatter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		task_play_anim(false, sLocal_258, "radio_exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		task_aim_gun_at_entity(false, iLocal_55, -1, 0);
		close_sequence_task(iLocal_73);
		task_perform_sequence(iLocal_54, iLocal_73);
		clear_sequence_task(&iLocal_73);
		iLocal_262 = 1;
	}
	else if (is_entity_playing_anim(iLocal_54, sLocal_258, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_66(&uLocal_78, "REARRAU", "REARR_PRAD3", 4, iLocal_254, 0, 0);
		}
	}
	else if (is_entity_playing_anim(iLocal_54, sLocal_258, "radio_exit", 3))
	{
		iLocal_263 = 0;
		func_8();
	}
}

void func_7()
{
	switch (iLocal_51)
	{
		case 0:
			if (!iLocal_74)
			{
				if (iLocal_49 == 3)
				{
					iLocal_51 = 1;
				}
				else if (iLocal_49 == 0)
				{
					iLocal_51 = 1;
				}
				is_entity_dead(iLocal_54, 0);
				is_entity_dead(iLocal_55, 0);
				if (does_entity_exist(iLocal_54) && does_entity_exist(iLocal_55))
				{
					task_goto_entity_offset_xy(iLocal_54, iLocal_55, -1, 3f, 0f, 0f, 1f, 0);
				}
				settimerb(false);
			}
			break;
		
		case 1:
			if (does_blip_exist(iLocal_58))
			{
				remove_blip(&iLocal_58);
			}
			iLocal_51 = 2;
			iLocal_244 = 8000;
			iLocal_291 = get_game_timer();
			break;
		
		case 2:
			if (is_vehicle_driveable(iLocal_57, 0))
			{
				if (get_game_timer() - iLocal_291 > 20000)
				{
					if (!is_ped_injured(iLocal_56))
					{
						if (get_script_task_status(iLocal_56, -1273030092) == 7)
						{
							task_enter_vehicle(iLocal_54, iLocal_57, -1, false, 1f, 1, 0);
							iLocal_51 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (is_vehicle_driveable(iLocal_57, 0))
			{
				if (!is_ped_injured(iLocal_56))
				{
					if (is_ped_sitting_in_vehicle(iLocal_54, iLocal_57))
					{
						task_vehicle_drive_wander(iLocal_56, iLocal_57, 10f, 786603);
						set_ped_keep_task(iLocal_56, true);
						func_164();
					}
				}
			}
			break;
	}
}

void func_8()
{
	iLocal_261 = func_9();
	iLocal_261 = iLocal_263;
	iLocal_244 = 20000;
	iLocal_262 = 0;
}

bool func_9()
{
	if (is_bit_set(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_10()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	auto uVar9;
	int iVar12;
	
	iVar12 = joaat("pranger");
	if (is_vehicle_driveable(iLocal_57, 0))
	{
		return true;
	}
	request_model(iVar12);
	if (has_model_loaded(iVar12))
	{
		if (get_nth_closest_vehicle_node(get_entity_coords(iLocal_54, 0), 1, &vVar0, 1, 3f, 0f))
		{
			if (_0xA4822F1CF23F4810(&vVar0, &vVar6, &uVar9, 0f, 180f, 50f, true, 1, 1))
			{
				iLocal_57 = create_vehicle(iVar12, vVar6, 0, 1, true);
				iLocal_56 = PED::CREATE_PED_inside_vehicle(iLocal_57, 6, joaat("s_m_y_ranger_01"), -1, 1, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_56, 294, true);
				if (!has_ped_got_weapon(iLocal_56, joaat("weapon_pistol"), 0))
				{
					give_weapon_to_ped(iLocal_56, joaat("weapon_pistol"), -1, false, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_56, joaat("weapon_pistol"), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_56, iLocal_71);
				set_vehicle_doors_locked(iLocal_57, 3);
				set_blocking_of_non_temporary_events(iLocal_56, true);
				set_vehicle_on_ground_properly(iLocal_57);
				_0x2B6747FAA9DB9D6B(iLocal_57, 1);
				_0x25367DE49D64CF16(iLocal_57, 1);
				vVar0 = {get_entity_coords(iLocal_57, 1)};
				vVar3 = {get_entity_coords(player_ped_id(), 1) - vVar0};
				set_entity_heading(iLocal_57, get_heading_from_vector_2d(vVar3.x, vVar3.y));
				get_nth_closest_vehicle_node(get_entity_coords(iLocal_54, 0), 1, &vVar0, 1, 3f, 0f);
				if (get_distance_between_coords(vVar0, 2528.563f, 2639.115f, 36.9446f, 1) < 75f)
				{
					vVar0 = {2473.601f, 2496.765f, 40.87f};
				}
				if (get_distance_between_coords(2538.71f, 2592.007f, 36.9446f, vVar0, 1) < 16f)
				{
					vVar0 = {2473.601f, 2496.765f, 40.87f};
				}
				task_vehicle_mission_coors_target(iLocal_56, iLocal_57, vVar0, 4, 7f, 786471, 5f, -1f, 1);
				set_vehicle_forward_speed(iLocal_57, 4f);
				set_vehicle_siren(iLocal_57, true);
				iLocal_77 = 1;
				set_random_trains(0);
				return true;
			}
		}
	}
	return false;
}

bool func_11()
{
	if (iLocal_49 != 3)
	{
		iLocal_243 = 3;
	}
	switch (iLocal_243)
	{
		case 0:
			if (get_script_task_status(iLocal_54, 242628503) == 7 || get_game_timer() > iLocal_246 + 15000)
			{
				if (is_entity_at_entity(player_ped_id(), iLocal_54, 25f, 25f, 25f, 0, 1, 0))
				{
					if (!is_ped_injured(iLocal_54))
					{
						clear_ped_tasks(iLocal_54);
						open_sequence_task(&iLocal_73);
						if (!is_entity_dead(iLocal_55, 0))
						{
							task_go_to_entity(false, iLocal_55, -1, 3.5f, 2f, 2f, 0);
						}
						task_turn_ped_to_face_entity(false, player_ped_id(), 2000);
						close_sequence_task(iLocal_73);
						task_perform_sequence(iLocal_54, iLocal_73);
						clear_sequence_task(&iLocal_73);
						iLocal_243 = 1;
					}
				}
				else
				{
					iLocal_243 = 3;
				}
			}
			break;
		
		case 1:
			if (get_script_task_status(iLocal_54, 242628503) == 1)
			{
				if (get_sequence_progress(iLocal_54) > 0)
				{
					if (!func_76())
					{
						if (iLocal_245 < 2)
						{
							func_66(&uLocal_78, "REARRAU", "REARR_PTHANK", 4, iLocal_254, 0, 0);
							if (does_blip_exist(iLocal_58))
							{
								set_blip_as_friendly(iLocal_58, true);
							}
						}
						else
						{
							func_66(&uLocal_78, "REARRAU", "REARR_PHELP", 4, iLocal_254, 0, 0);
						}
						iLocal_243 = 2;
					}
				}
			}
			else if (!func_76())
			{
				if (iLocal_245 < 2)
				{
					func_66(&uLocal_78, "REARRAU", "REARR_PTHANK", 4, iLocal_254, 0, 0);
					if (does_blip_exist(iLocal_58))
					{
						set_blip_as_friendly(iLocal_58, true);
					}
				}
				else
				{
					func_66(&uLocal_78, "REARRAU", "REARR_PHELP", 4, iLocal_254, 0, 0);
				}
				iLocal_243 = 2;
			}
			break;
		
		case 2:
			if (!func_76())
			{
				iLocal_243 = 3;
			}
			task_turn_ped_to_face_entity(iLocal_54, player_ped_id(), 100);
			break;
		
		case 3:
			return true;
			break;
	}
	return false;
}

void func_12()
{
	int iVar0;
	int iVar1;
	
	iVar0 = has_entity_been_damaged_by_entity(iLocal_55, player_ped_id(), 1);
	iVar1 = func_48();
	if (iVar1)
	{
	}
	if (!is_ped_injured(iLocal_55))
	{
		if (!iVar0)
		{
			if (!iVar1)
			{
				if (iLocal_49 == 2 || iLocal_74 == 1)
				{
					switch (iLocal_247)
					{
						case 8:
							draw_debug_text_2d("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							set_blip_as_friendly(iLocal_59, true);
							if (!is_entity_dead(iLocal_55, 0) && is_entity_playing_anim(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
							{
								open_sequence_task(&iLocal_73);
								task_play_anim(false, sLocal_258, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0, 0, 0, 0);
								close_sequence_task(iLocal_73);
								task_perform_sequence(iLocal_55, iLocal_73);
								clear_sequence_task(&iLocal_73);
								iLocal_247 = 9;
							}
							else
							{
								iLocal_247 = 3;
							}
							break;
						
						case 9:
							draw_debug_text_2d("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (get_script_task_status(iLocal_55, 242628503) == 7)
							{
								iLocal_247 = 0;
							}
							break;
						
						case 0:
							draw_debug_text_2d("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (is_entity_at_entity(iLocal_55, player_ped_id(), 75f, 75f, 75f, 0, 1, 0))
							{
								stop_ped_speaking(iLocal_55, 1);
								iLocal_247 = 3;
							}
							break;
						
						case 1:
							draw_debug_text_2d("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (is_entity_at_coord(iLocal_55, get_entity_coords(iLocal_54, 0), 4f, 4f, 3f, false, true, 0))
							{
								iLocal_247 = 2;
							}
							else
							{
								clear_ped_tasks(iLocal_55);
								open_sequence_task(&iLocal_73);
								task_look_at_coord(false, get_entity_coords(iLocal_54, 0), 1000, 0, 2);
								task_follow_nav_mesh_to_coord(false, get_entity_coords(iLocal_54, 0), 2f, -1, 3f, 0, 1193033728);
								close_sequence_task(iLocal_73);
								task_perform_sequence(iLocal_55, iLocal_73);
								clear_sequence_task(&iLocal_73);
								iLocal_247 = 2;
							}
							break;
						
						case 2:
							draw_debug_text_2d("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (is_entity_at_coord(iLocal_55, get_entity_coords(iLocal_54, 0), 4f, 4f, 3f, false, true, 0))
							{
								if (get_script_task_status(iLocal_55, 242628503) == 7 || func_66(&uLocal_78, "REARRAU", sLocal_271, 4, iLocal_254, 0, 0))
								{
									iLocal_247 = 6;
								}
							}
							else if (get_script_task_status(iLocal_55, 242628503) == 7)
							{
								open_sequence_task(&iLocal_73);
								task_look_at_coord(false, get_entity_coords(iLocal_54, 0), 1000, 0, 2);
								task_follow_nav_mesh_to_coord(false, get_entity_coords(iLocal_54, 0), 2f, -1, 3f, 0, 1193033728);
								close_sequence_task(iLocal_73);
								task_perform_sequence(iLocal_55, iLocal_73);
								clear_sequence_task(&iLocal_73);
							}
							break;
						
						case 3:
							draw_debug_text_2d("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (is_entity_at_entity(iLocal_55, player_ped_id(), 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_247 = 4;
							}
							else if (is_entity_at_entity(iLocal_55, player_ped_id(), 75f, 75f, 75f, 0, 1, 0))
							{
								if (!func_76())
								{
									clear_ped_tasks(iLocal_55);
									open_sequence_task(&iLocal_73);
									task_go_to_entity(false, player_ped_id(), -1, 8f, 2f, 2f, 0);
									close_sequence_task(iLocal_73);
									task_perform_sequence(iLocal_55, iLocal_73);
									clear_sequence_task(&iLocal_73);
									iLocal_247 = 4;
								}
							}
							else
							{
								iLocal_247 = 6;
							}
							break;
						
						case 4:
							draw_debug_text_2d("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (is_entity_at_entity(iLocal_55, player_ped_id(), 9f, 9f, 9f, 0, 1, 0))
							{
								iLocal_292 = get_game_timer();
								iLocal_247 = 7;
							}
							break;
						
						case 7:
							draw_debug_text_2d("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!is_ped_headtracking_ped(iLocal_55, player_ped_id()))
							{
								task_look_at_entity(iLocal_55, player_ped_id(), -1, 2064, 2);
							}
							if (!is_ped_facing_ped(iLocal_55, player_ped_id(), 30f))
							{
								task_turn_ped_to_face_entity(iLocal_55, player_ped_id(), -1);
							}
							if (get_game_timer() - iLocal_292 > 2000)
							{
								iLocal_247 = 5;
							}
							break;
						
						case 5:
							draw_debug_text_2d("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (is_entity_playing_anim(iLocal_55, sLocal_258, "Thanks_Male_05", 3) || get_script_task_status(iLocal_55, 242628503) == 7)
							{
								if (!func_76())
								{
									if (iLocal_245 < 2)
									{
										func_66(&uLocal_78, "REARRAU", sLocal_266, 4, iLocal_254, 0, 0);
										task_play_anim(iLocal_55, sLocal_258, "Thanks_Male_05", 16f, -16f, -1, 16, 0, 0, 0, 0);
									}
									else
									{
										func_66(&uLocal_78, "REARRAU", sLocal_270, 4, iLocal_254, 0, 0);
									}
									func_15(func_43(), 1, 250, 0, 0);
									task_clear_look_at(iLocal_55);
									iLocal_247 = 6;
								}
							}
							break;
						
						case 6:
							draw_debug_text_2d("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_76())
							{
								task_smart_flee_ped(iLocal_55, player_ped_id(), 150f, -1, 0, 0);
								func_164();
							}
							break;
						}
				}
			}
			else
			{
				if (!func_76())
				{
					func_66(&uLocal_78, "REARRAU", sLocal_273, 4, iLocal_254, 0, 0);
				}
				task_smart_flee_ped(iLocal_55, player_ped_id(), 150f, -1, 0, 0);
				func_164();
			}
		}
		else
		{
			func_13();
			task_smart_flee_ped(iLocal_55, player_ped_id(), 150f, -1, 0, 0);
			if (iVar0 == 1)
			{
				iLocal_49 = 1;
			}
			if (!func_76())
			{
				func_66(&uLocal_78, "REARRAU", sLocal_270, 4, iLocal_254, 0, 0);
			}
			func_164();
		}
	}
}

void func_13()
{
	Global_14578 = 0;
	func_14();
}

void func_14()
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

void func_15(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	func_16(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

bool func_16(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_42();
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
					func_41(99, 1);
					func_40(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_23(5))
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
							func_40(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_23(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_40(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_property"), iParam3);
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
									func_40(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_23(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_22(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_41(95, iParam3);
					break;
				
				case 1:
					func_41(97, iParam3);
					break;
				
				case 2:
					func_41(96, iParam3);
					break;
			}
			func_41(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
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
					func_40(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_total_cash_earned"), iParam3);
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
	func_18(iParam0);
	if (Global_35711 == 15)
	{
		func_17(0);
	}
	return true;
}

void func_17(int iParam0)
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

void func_18(int iParam0)
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

void func_19(int iParam0)
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
	else if (is_bit_set(Global_101154.f_25089.f_471, iParam0) || is_bit_set(Global_2097152[func_21() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		clear_bit(&(Global_2097152[func_21() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_20(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)
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

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0)
{
	func_41(93, iParam0);
	func_41(29, iParam0);
	func_41(30, iParam0);
}

int func_23(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return is_bit_set(Global_101154.f_25089.f_471, iParam0);
	}
	return is_bit_set(Global_2097152[func_21() /*10375*/].f_7704.f_10, iParam0);
}

bool func_24(int iParam0)
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
	func_25(27, 1);
	return true;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

bool func_26(int iParam0, int iParam1)
{
	if (func_38(14) && !func_37(iParam0))
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
	if (func_36(&Global_2563627))
	{
		if (func_34(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_27(&Global_2563627, iParam0))
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

bool func_27(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return false;
	}
	if (func_34(uParam0, iParam1))
	{
		return false;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	func_30(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_28(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_28(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return false;
	}
	if (func_34(uParam0, iParam1))
	{
		return false;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_29(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_29(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_30(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_31(uParam0, iVar0);
		iVar0++;
	}
	func_32(uParam0, Global_2563626 - 0.5f);
}

void func_31(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_32(auto uParam0, float fParam1)
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

auto func_33(auto uParam0)
{
	return *uParam0.f_72;
}

int func_34(auto uParam0, int iParam1)
{
	return func_35(uParam0, iParam1) != -1;
}

int func_35(auto uParam0, int iParam1)
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

int func_36(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_37(int iParam0)
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

int func_38(int iParam0)
{
	return Global_35711 == iParam0;
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

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stat_set_int(iParam0, iVar0, 1);
}

void func_41(int iParam0, int iParam1)
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

void func_42()
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

auto func_43()
{
	func_44();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_44()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_47(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_46(player_ped_id());
			if (func_45(iVar0) && (!func_38(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_45(Global_101154.f_1826.f_539.f_3549))
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

int func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_48()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (is_vehicle_driveable(iLocal_57, 0))
	{
		if (is_entity_at_entity(iLocal_57, iLocal_55, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			return true;
		}
	}
	iVar1 = get_random_ped_at_coord(get_entity_coords(iLocal_55, 0), fVar0, fVar0, fVar0, -1);
	if (!is_ped_injured(iVar1))
	{
		if (get_entity_model(iVar1) == joaat("s_f_y_cop_01") || get_entity_model(iVar1) == joaat("s_m_y_cop_01"))
		{
			return true;
		}
	}
	iVar1 = get_random_ped_at_coord(get_entity_coords(player_ped_id(), 0), fVar0, fVar0, fVar0, -1);
	if (!is_ped_injured(iVar1))
	{
		if (get_entity_model(iVar1) == joaat("s_f_y_cop_01") || get_entity_model(iVar1) == joaat("s_m_y_cop_01"))
		{
			return true;
		}
	}
	iVar2 = get_random_vehicle_in_sphere(get_entity_coords(iLocal_55, 0), fVar0, false, 1024);
	if (is_vehicle_driveable(iVar2, 0))
	{
		return true;
	}
	iVar2 = get_random_vehicle_in_sphere(get_entity_coords(player_ped_id(), 0), fVar0, false, 1024);
	if (is_vehicle_driveable(iVar2, 0))
	{
		return true;
	}
	return false;
}

void func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!is_ped_injured(iLocal_55))
	{
		iVar0 = is_entity_touching_entity(player_ped_id(), iLocal_55);
		iVar1 = has_entity_been_damaged_by_entity(iLocal_55, player_ped_id(), 1);
		if (((iVar1 || func_62()) || func_60()) || iVar0)
		{
			func_59();
			if (iLocal_74)
			{
				if (((iVar0 || iVar1) && !is_ped_ragdoll(iLocal_55)) && !is_ped_in_any_vehicle(iLocal_55, 0))
				{
					clear_ped_tasks(iLocal_55);
					set_ped_to_ragdoll(iLocal_55, 500, 2000, 0, 0, 0, 0);
					task_cower(iLocal_55, -1);
					set_ped_keep_task(iLocal_55, true);
				}
				else if (!is_ped_in_any_vehicle(iLocal_55, 0) && !is_ped_ragdoll(iLocal_55))
				{
					clear_ped_tasks(iLocal_55);
					task_cower(iLocal_55, -1);
					set_ped_keep_task(iLocal_55, true);
				}
				func_55(0);
				if (!func_76())
				{
					if (!is_ped_injured(iLocal_54) && iLocal_286 == 0)
					{
						if (func_66(&uLocal_78, "REARRAU", "REARR_PWTF", 4, iLocal_254, 0, 0))
						{
							iLocal_286 = 1;
						}
					}
				}
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 3;
			}
		}
	}
	else
	{
		if (does_blip_exist(iLocal_59))
		{
			remove_blip(&iLocal_59);
			func_54(&uLocal_78, 2);
		}
		func_59();
		if (has_entity_been_damaged_by_entity(iLocal_55, player_ped_id(), 1))
		{
			if (iLocal_74)
			{
				func_55(1);
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 3;
			}
		}
	}
	if (!is_ped_injured(iLocal_54))
	{
		if (iLocal_61)
		{
			if (!is_player_wanted_level_greater(player_id(), 0))
			{
				func_164();
			}
		}
		if (is_player_wanted_level_greater(player_id(), 0))
		{
		}
		iVar2 = 0;
		if (does_entity_exist(iLocal_56))
		{
			if (!is_ped_injured(iLocal_56))
			{
				if ((has_entity_been_damaged_by_entity(iLocal_56, player_ped_id(), 1) && get_entity_health(iLocal_56) < 190) || (has_entity_been_damaged_by_entity(iLocal_56, player_ped_id(), 1) && is_ped_ragdoll(iLocal_56)))
				{
					iVar2 = 1;
				}
				if (does_entity_exist(iLocal_57) && has_entity_been_damaged_by_entity(iLocal_57, player_ped_id(), 1))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((has_entity_been_damaged_by_entity(iLocal_54, player_ped_id(), 1) && get_entity_health(iLocal_54) < 190) || func_53()) || is_player_wanted_level_greater(player_id(), 0)) || func_52()) || (has_entity_been_damaged_by_entity(iLocal_54, player_ped_id(), 1) && is_ped_ragdoll(iLocal_54))) || iVar2 == 1)
		{
			func_55(1);
			if (iLocal_49 == 3 || iLocal_49 == 1)
			{
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 2;
			}
		}
	}
	else
	{
		if (has_entity_been_damaged_by_entity(iLocal_54, player_ped_id(), 1))
		{
			if (iLocal_287 == 0)
			{
				iLocal_287 = 1;
				iLocal_290 = get_game_timer();
			}
			if (iLocal_49 == 3 || iLocal_49 == 1)
			{
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 2;
			}
		}
		if (!is_ped_injured(iLocal_55))
		{
			clear_entity_last_damage_entity(iLocal_55);
		}
		if (does_blip_exist(iLocal_58))
		{
			remove_blip(&iLocal_58);
			func_54(&uLocal_78, 1);
		}
	}
	if (iLocal_287)
	{
		if (get_game_timer() - iLocal_290 > 5000)
		{
			set_player_wanted_level_no_drop(player_id(), 3, 0);
			set_player_wanted_level_now(player_id(), 0);
			iLocal_287 = 0;
		}
	}
	if (!is_ped_injured(iLocal_54) && !is_ped_injured(iLocal_55))
	{
		if (has_entity_been_damaged_by_entity(iLocal_54, player_ped_id(), 1) && has_entity_been_damaged_by_entity(iLocal_55, player_ped_id(), 1))
		{
			if (get_entity_health(iLocal_54) < 190 && get_entity_health(iLocal_55) < 190)
			{
				func_59();
				func_55(1);
				iLocal_49 = 1;
			}
		}
		if (!is_entity_at_entity(iLocal_55, iLocal_54, 110f, 110f, 40f, 0, 1, 0))
		{
			if (is_entity_at_entity(player_ped_id(), iLocal_54, 20f, 20f, 20f, 0, 1, 0))
			{
				func_50();
				wait(0);
				func_66(&uLocal_78, "REARRAU", "REARR_PORUN", 4, iLocal_254, 0, 0);
			}
			else if (is_entity_at_entity(player_ped_id(), iLocal_55, 40f, 40f, 40f, 0, 1, 0))
			{
				func_50();
				wait(0);
				func_66(&uLocal_78, "REARRAU", sLocal_267, 4, iLocal_254, 0, 0);
			}
			func_164();
		}
	}
	if (is_ped_injured(iLocal_54) && is_ped_injured(iLocal_55))
	{
		func_164();
	}
	if (is_ped_injured(iLocal_55))
	{
		if (!is_ped_injured(iLocal_54))
		{
			if (!is_entity_at_entity(player_ped_id(), iLocal_54, 100f, 100f, 40f, 0, 1, 0))
			{
				func_164();
			}
		}
	}
}

void func_50()
{
	Global_14578 = 0;
	func_51();
}

void func_51()
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

int func_52()
{
	int iVar0;
	
	iVar0 = false;
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (get_entity_model(get_vehicle_ped_is_in(player_ped_id(), 0)) == joaat("bulldozer"))
		{
			if (!is_ped_injured(iLocal_54))
			{
				if (is_entity_touching_entity(get_vehicle_ped_is_in(player_ped_id(), 0), iLocal_54))
				{
					iVar0 = true;
				}
			}
		}
		if (is_vehicle_driveable(iLocal_57, 0))
		{
			if (is_entity_touching_entity(get_vehicle_ped_is_in(player_ped_id(), 0), iLocal_57))
			{
				iVar0 = true;
			}
		}
		else if (iLocal_77)
		{
			if (has_entity_been_damaged_by_entity(iLocal_57, player_ped_id(), 1))
			{
				iVar0 = true;
			}
		}
	}
	if (iVar0)
	{
	}
	return iVar0;
}

bool func_53()
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	
	vVar0 = {3f, 3f, 3f};
	vVar3 = {-3f, -3f, -3f};
	if (is_bullet_in_area(get_ped_bone_coords(iLocal_54, 31086, 0f, 0f, 0f), 0.5f, 1))
	{
		if (is_ped_injured(iLocal_55))
		{
			return true;
		}
		else if (!is_bullet_in_area(get_ped_bone_coords(iLocal_55, 31086, 0f, 0f, 0f), 2f, 1))
		{
			return true;
		}
	}
	if (_0x2F09F7976C512404(get_ped_bone_coords(iLocal_54, 31086, 0f, 0f, 0f), 3f))
	{
		return true;
	}
	if (is_entity_at_entity(player_ped_id(), iLocal_54, 5f, 5f, 5f, 0, 1, 0))
	{
		if (!is_ped_injured(iLocal_54))
		{
			if (is_player_targetting_entity(player_id(), iLocal_54) || is_player_free_aiming_at_entity(player_id(), iLocal_54))
			{
				if (get_current_ped_weapon(player_ped_id(), &iVar6, 1))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						return true;
					}
				}
			}
		}
		if (!is_ped_injured(iLocal_55))
		{
			if (is_player_targetting_entity(player_id(), iLocal_55) || is_player_free_aiming_at_entity(player_id(), iLocal_55))
			{
				if (get_current_ped_weapon(player_ped_id(), &iVar6, 1))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						if (iLocal_74)
						{
							return true;
						}
					}
				}
			}
		}
	}
	vVar0 = {vVar0 + get_ped_bone_coords(iLocal_54, 31086, 0f, 0f, 0f)};
	vVar3 = {vVar3 + get_ped_bone_coords(iLocal_54, 31086, 0f, 0f, 0f)};
	if (((is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_smokegrenade"), 1) || is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_grenade"), 1)) || is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_stickybomb"), 1)) || is_projectile_type_in_area(vVar3, vVar0, joaat("vehicle_weapon_tank"), 1))
	{
		return true;
	}
	return false;
}

void func_54(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_55(int iParam0)
{
	if (!is_ped_injured(iLocal_54))
	{
		clear_entity_last_damage_entity(iLocal_54);
		if (!iLocal_61)
		{
			set_player_wanted_level_no_drop(player_id(), 2, 0);
			set_player_wanted_level_now(player_id(), 0);
			set_ped_can_be_targetted(iLocal_54, true);
			if (does_blip_exist(iLocal_58))
			{
				set_blip_as_friendly(iLocal_58, false);
			}
			if (iParam0 == 1)
			{
				if (!is_ped_injured(iLocal_55))
				{
					if (get_script_task_status(iLocal_55, 1805844857) == 7)
					{
						if (is_entity_playing_anim(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
						{
							open_sequence_task(&iLocal_73);
							task_play_anim(false, sLocal_258, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							task_smart_flee_ped(false, iLocal_54, 150f, -1, 0, 0);
							close_sequence_task(iLocal_73);
							task_perform_sequence(iLocal_55, iLocal_73);
							clear_sequence_task(&iLocal_73);
							force_ped_motion_state(iLocal_55, -530524, false, 0, 0);
							set_ped_keep_task(iLocal_55, true);
						}
						else
						{
							clear_ped_tasks(iLocal_55);
							task_smart_flee_ped(iLocal_55, iLocal_54, 150f, -1, 0, 0);
						}
					}
				}
				if ((!is_entity_dead(iLocal_55, 0) && !is_ped_injured(iLocal_55)) && !is_entity_dead(player_ped_id(), 0))
				{
					if (get_distance_between_coords(get_entity_coords(iLocal_55, 1), get_entity_coords(player_ped_id(), 1), 1) < 20f)
					{
						if (!func_76())
						{
							func_66(&uLocal_78, "REARRAU", sLocal_273, 4, iLocal_254, 0, 0);
						}
					}
				}
			}
			clear_ped_tasks(iLocal_54);
			open_sequence_task(&iLocal_73);
			task_look_at_entity(false, player_ped_id(), -1, 2048, 2);
			task_combat_ped(false, player_ped_id(), 0, 16);
			close_sequence_task(iLocal_73);
			task_perform_sequence(iLocal_54, iLocal_73);
			clear_sequence_task(&iLocal_73);
			set_ped_keep_task(iLocal_54, true);
			set_entity_is_target_priority(iLocal_54, 1, 0f);
			if (is_vehicle_driveable(iLocal_57, 0))
			{
				set_vehicle_doors_locked(iLocal_57, 1);
			}
			func_57();
			wait(0);
			wait(0);
			if (!is_ped_injured(iLocal_54))
			{
				if (!is_ped_ragdoll(iLocal_54))
				{
				}
			}
			if (does_entity_exist(iLocal_56))
			{
				func_56();
			}
			iLocal_61 = true;
		}
	}
}

void func_56()
{
	if (does_entity_exist(iLocal_56))
	{
		if (!is_ped_injured(iLocal_56))
		{
			open_sequence_task(&iLocal_73);
			task_look_at_entity(false, player_ped_id(), -1, 2048, 2);
			task_combat_ped(false, player_ped_id(), 0, 16);
			close_sequence_task(iLocal_73);
			task_perform_sequence(iLocal_56, iLocal_73);
			clear_sequence_task(&iLocal_73);
			set_ped_keep_task(iLocal_56, true);
			set_entity_is_target_priority(iLocal_56, 1, 0f);
		}
	}
}

void func_57()
{
	Global_14578 = 0;
	func_58();
}

void func_58()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_59()
{
	if (!is_ped_injured(iLocal_55))
	{
		if (does_blip_exist(iLocal_59))
		{
			set_blip_as_friendly(iLocal_59, false);
		}
		clear_entity_last_damage_entity(iLocal_55);
	}
}

bool func_60()
{
	if (!is_entity_dead(iLocal_54, 0))
	{
		if (iLocal_74)
		{
			if (is_entity_touching_entity(player_ped_id(), iLocal_54))
			{
				if (get_game_timer() - iLocal_276 > 1000)
				{
					func_61();
				}
			}
		}
	}
	if (iLocal_275 >= 3)
	{
		return true;
	}
	return false;
}

void func_61()
{
	if (!func_76())
	{
		if (iLocal_275 < 3)
		{
			task_look_at_entity(iLocal_54, player_ped_id(), 6000, 2048, 2);
			func_66(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
		}
	}
	iLocal_275++;
	iLocal_276 = get_game_timer();
}

bool func_62()
{
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (is_entity_touching_entity(get_vehicle_ped_is_in(player_ped_id(), 0), iLocal_55))
		{
			if (iLocal_74)
			{
				if (iLocal_52 != 7)
				{
					if (vdist(get_entity_coords(iLocal_55, 1), vLocal_68) > 2.5f)
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	if (iLocal_74)
	{
		if (is_entity_touching_entity(player_ped_id(), iLocal_55))
		{
			if (is_ped_ragdoll(iLocal_55))
			{
				if (iLocal_52 != 7)
				{
					if (vdist(get_entity_coords(iLocal_55, 1), vLocal_68) > 2.5f)
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
			else if (iLocal_74)
			{
				if (get_game_timer() - iLocal_276 > 1000)
				{
					func_61();
				}
			}
		}
	}
	if (iLocal_275 >= 3)
	{
		return true;
	}
	return false;
}

void func_63()
{
	if (!iLocal_75)
	{
		switch (iLocal_245)
		{
			case 0:
				if (!iLocal_61)
				{
					if (timera() > 80000)
					{
						if (!is_ped_injured(iLocal_54))
						{
							if (!is_ped_injured(iLocal_55))
							{
								func_50();
								wait(0);
								func_66(&uLocal_78, "REARRAU", "REARR_PRAD3", 4, iLocal_254, 0, 0);
							}
						}
						iLocal_245 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_76())
				{
					if (!is_ped_injured(iLocal_55))
					{
						if (is_entity_playing_anim(iLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
						{
							open_sequence_task(&iLocal_73);
							task_play_anim(false, sLocal_258, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							task_smart_flee_ped(false, iLocal_54, 150f, -1, 0, 0);
							close_sequence_task(iLocal_73);
							task_perform_sequence(iLocal_55, iLocal_73);
							clear_sequence_task(&iLocal_73);
							force_ped_motion_state(iLocal_55, -530524, false, 0, 0);
							set_ped_keep_task(iLocal_55, true);
						}
						else
						{
							task_smart_flee_ped(iLocal_55, iLocal_54, 150f, -1, 0, 0);
						}
						set_ped_keep_task(iLocal_55, true);
						set_entity_health(iLocal_55, 101);
						func_66(&uLocal_78, "REARRAU", sLocal_269, 4, iLocal_254, 0, 0);
						iLocal_245 = 2;
					}
					if (!is_ped_injured(iLocal_54))
					{
						clear_ped_tasks(iLocal_54);
						iLocal_245 = 2;
					}
				}
				break;
			
			case 2:
				if (!is_ped_injured(iLocal_54))
				{
					if (!is_ped_injured(iLocal_55))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_72, iLocal_71);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_71, iLocal_72);
						task_combat_ped(iLocal_54, iLocal_55, 0, 16);
					}
					else
					{
						task_wander_standard(iLocal_54, 1193033728, 0);
						func_164();
					}
					set_ped_keep_task(iLocal_54, true);
				}
				iLocal_75 = 1;
				break;
			}
	}
}

int func_64(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	
	if (is_vehicle_driveable(iParam1, 0))
	{
		if (!is_ped_injured(iParam0))
		{
			vVar0 = {get_entity_coords(iParam0, 1)};
		}
		else
		{
			return -1;
		}
		vVar3 = {get_offset_from_entity_in_world_coords(iParam1, 1f, -0.5f, 0f)};
		vVar9 = {vVar3 - vVar0};
		vVar6 = {get_offset_from_entity_in_world_coords(iParam1, -1f, -0.5f, 0f)};
		vVar12 = {vVar6 - vVar0};
		if (vmag(vVar9) < vmag(vVar12))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_65()
{
	if (!func_76())
	{
		if (!iLocal_293)
		{
			if (is_entity_at_entity(player_ped_id(), iLocal_54, 30f, 30f, 30f, 0, 1, 0))
			{
				func_66(&uLocal_78, "REARRAU", "REARR_PSTOP", 4, iLocal_254, 0, 0);
				iLocal_293 = 1;
				settimerb(false);
			}
		}
		else if (timerb() > 8000)
		{
			if (get_random_int_in_range(false, 99) > 50)
			{
				func_66(&uLocal_78, "REARRAU", "REARR_PRAND", 4, iLocal_254, 0, 0);
			}
			else if (is_entity_at_entity(player_ped_id(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
			{
				func_66(&uLocal_78, "REARRAU", sLocal_268, 4, iLocal_254, 0, 0);
			}
			else if (is_entity_at_entity(player_ped_id(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
			{
				func_66(&uLocal_78, "REARRAU", sLocal_268, 4, iLocal_254, 0, 0);
			}
			else
			{
				func_66(&uLocal_78, "REARRAU", sLocal_272, 4, iLocal_254, 0, 0);
			}
			settimerb(false);
		}
	}
}

int func_66(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	return func_67(sParam2, iParam3, 0);
}

bool func_67(char* sParam0, int iParam1, int iParam2)
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
					func_51();
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
		if (func_74(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_73();
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
				func_72();
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
				if (func_71())
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
			if (func_70())
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
			func_69();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_68();
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
		func_51();
	}
	return false;
}

void func_68()
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

void func_69()
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

bool func_70()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_71()
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

void func_72()
{
	if (func_38(14))
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
		Global_14413 = func_43();
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

void func_73()
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

int func_74(int iParam0, int iParam1)
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

void func_75(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

bool func_76()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_77()
{
	if (is_entity_at_entity(iLocal_55, iLocal_54, 3.5f, 3.5f, 3.5f, 0, 1, 0) || func_80())
	{
		if (!func_78(1063675494))
		{
			return true;
		}
	}
	return false;
}

bool func_78(float fParam0)
{
	auto uVar0;
	Vector3 vVar1;
	
	if (_0x8BDC7BFC57A81E76(get_entity_coords(iLocal_55, 1), &uVar0, &vVar1))
	{
		if (func_79(vVar1, 0f, 0f, 1f) < fParam0)
		{
			return true;
		}
	}
	return false;
}

float func_79(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

bool func_80()
{
	return false;
}

bool func_81(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_82()
{
	if (get_game_timer() - iLocal_253 > 500)
	{
		if ((iLocal_49 != 1 && iLocal_49 != 3) && iLocal_49 != 2)
		{
			if (does_blip_exist(iLocal_59))
			{
				set_blip_as_friendly(iLocal_59, iLocal_248);
				if (iLocal_248 == 1)
				{
					iLocal_248 = false;
				}
				else
				{
					iLocal_248 = true;
				}
			}
		}
		else
		{
			iLocal_288 = true;
		}
		if (!iLocal_61)
		{
			if (does_blip_exist(iLocal_58))
			{
				set_blip_as_friendly(iLocal_58, iLocal_249);
				if (iLocal_249 == 1)
				{
					iLocal_249 = false;
				}
				else
				{
					iLocal_249 = true;
				}
			}
		}
		else
		{
			iLocal_288 = true;
		}
		iLocal_253 = get_game_timer();
	}
	if (!iLocal_289 == iLocal_288)
	{
		if (iLocal_288)
		{
			if (does_blip_exist(iLocal_59))
			{
				_0x75A16C3DA34F1245(iLocal_59, true);
			}
			if (does_blip_exist(iLocal_58))
			{
				_0x75A16C3DA34F1245(iLocal_58, true);
			}
		}
		else
		{
			if (does_blip_exist(iLocal_59))
			{
				_0x75A16C3DA34F1245(iLocal_59, false);
			}
			if (does_blip_exist(iLocal_58))
			{
				_0x75A16C3DA34F1245(iLocal_58, false);
			}
		}
		iLocal_289 = iLocal_288;
	}
}

int func_83(float fParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	
	iVar0 = 0;
	vVar2 = {fParam0, fParam0, 50f};
	if (is_entity_in_angled_area(player_ped_id(), vLocal_279, vLocal_282, 194.75f, 0, true, 0))
	{
		return 1;
	}
	if (!is_ped_injured(iLocal_54))
	{
		if (is_entity_at_entity(iLocal_54, player_ped_id(), vVar2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (!is_ped_injured(iLocal_55))
	{
		if (is_entity_at_entity(iLocal_55, player_ped_id(), vVar2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (iVar1 == 2)
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_84(int iParam0)
{
	if (func_89())
	{
		Global_101144 = 1;
		Global_101141 = get_game_timer();
		if (func_88(Global_101143))
		{
			func_85(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_88(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_86(func_87(iParam0), -1);
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
					func_86(func_87(iParam0), -1);
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
					func_86(func_87(iParam0), -1);
					Global_101154.f_29520.f_4++;
					set_bit(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_86(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

char* func_87(int iParam0)
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

bool func_88(int iParam0)
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

bool func_89()
{
	switch (func_90(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_90(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_94(0))
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
		if (!func_92(iParam2))
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
			func_91(uParam0, iParam4);
		}
	}
	return 2;
}

void func_91(auto uParam0, int iParam1)
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

int func_92(int iParam0)
{
	return func_93(iParam0, Global_35711);
}

bool func_93(int iParam0, int iParam1)
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

bool func_94(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_92(iParam0))
	{
		return false;
	}
	return true;
}

bool func_95()
{
	float fVar0;
	
	fVar0 = 50f;
	if (!is_ped_injured(iLocal_54))
	{
		if (!is_ped_injured(iLocal_55))
		{
			if ((is_entity_at_entity(player_ped_id(), iLocal_54, fVar0, fVar0, fVar0, 0, 1, 0) || is_entity_at_entity(player_ped_id(), iLocal_55, fVar0, fVar0, fVar0, 0, 1, 0)) || is_entity_in_angled_area(player_ped_id(), vLocal_279, vLocal_282, 194.75f, 0, true, 0))
			{
				if (!does_blip_exist(iLocal_59))
				{
					iLocal_59 = func_96(iLocal_55, 0, 145);
				}
				if (!does_blip_exist(iLocal_58))
				{
					iLocal_58 = func_96(iLocal_54, 0, 145);
				}
				_0x75A16C3DA34F1245(iLocal_59, false);
				_0x75A16C3DA34F1245(iLocal_58, false);
				settimera(false);
				return true;
			}
		}
		else
		{
			if (!is_ped_injured(iLocal_54))
			{
				if (!does_blip_exist(iLocal_58))
				{
					iLocal_58 = func_96(iLocal_54, 0, 145);
				}
			}
			if (does_blip_exist(iLocal_59))
			{
				remove_blip(&iLocal_59);
			}
			return true;
		}
	}
	else
	{
		if (!is_ped_injured(iLocal_55))
		{
			if (!does_blip_exist(iLocal_59))
			{
				iLocal_59 = func_96(iLocal_55, 0, 145);
			}
		}
		if (does_blip_exist(iLocal_58))
		{
			remove_blip(&iLocal_58);
		}
		return true;
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
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_98(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_98(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_98(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_98(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_99()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 fVar8;
	Vector3 fVar9;
	
	iVar0 = joaat("s_m_y_ranger_01");
	if (iLocal_53 == 1)
	{
		vVar2 = {2429.822f, 4952.938f, 44.8892f};
		fVar8 = 218.3434f;
		vVar5 = {2431.685f, 4945.31f, 44.6996f};
		fVar9 = 220.0087f;
		vLocal_279 = {2378.284f, 4863.027f, 32.50883f};
		vLocal_282 = {2512.797f, 4998.586f, 90.12283f};
		sLocal_256 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_265 = "arrestcriminal";
		sLocal_266 = "REARR_CTHANK";
		sLocal_267 = "REARR_CORUN";
		sLocal_268 = "REARR_CWTF";
		sLocal_269 = "REARR_CTURN";
		sLocal_270 = "REARR_CHELP";
		sLocal_271 = "REARR_HATE";
		sLocal_272 = "REARR_CRAND";
		sLocal_273 = "REARR_CRAND";
		sLocal_274 = "REARR_CRAND";
		iVar1 = joaat("a_m_m_hillbilly_02");
	}
	else if (iLocal_53 == 2)
	{
		vVar2 = {2592.637f, 2540.05f, 30.4162f};
		fVar8 = 90.5639f;
		vVar5 = {2586.005f, 2541.41f, 31.0379f};
		fVar9 = 75.5943f;
		vLocal_279 = {2543.135f, 2683.917f, 0.307461f};
		vLocal_282 = {2597.603f, 2408.885f, 121.901f};
		sLocal_256 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_265 = "arrestcriminal2";
		sLocal_266 = "REARR_THANK2";
		sLocal_267 = "REARR_CORUN2";
		sLocal_268 = "REARR_CWTF2";
		sLocal_269 = "REARR_CTURN2";
		sLocal_270 = "REARR_CHELP2";
		sLocal_271 = "REARR_HATE2";
		sLocal_272 = "REARR_CRAND2";
		sLocal_273 = "REARR_CRAND2";
		sLocal_274 = "REARR_CRAND2";
		iVar1 = joaat("g_m_m_armgoon_01");
	}
	request_model(iVar0);
	request_model(iVar1);
	request_model(joaat("prop_ld_binbag_01"));
	request_anim_dict(sLocal_258);
	request_anim_dict(sLocal_259);
	request_clip_set("MOVE_M@BAIL_BOND_NOT_TAZERED");
	request_clip_set("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((has_model_loaded(iVar0) && has_model_loaded(iVar1)) && has_model_loaded(joaat("prop_ld_binbag_01"))) && has_anim_dict_loaded(sLocal_258)) && has_anim_dict_loaded(sLocal_259)) && has_clip_set_loaded("MOVE_M@BAIL_BOND_NOT_TAZERED")) && has_clip_set_loaded("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_54 = PED::CREATE_PED(6, iVar0, vVar2, fVar8, 1, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_54, 294, true);
		set_entity_is_target_priority(iLocal_54, 1, 0f);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_54, 1);
		set_blocking_of_non_temporary_events(iLocal_54, true);
		func_101(&uLocal_78, 1, iLocal_54, "ArrestCop", 0, 1);
		set_entity_load_collision_flag(iLocal_54, true);
		set_ped_target_loss_response(iLocal_54, 1);
		iLocal_55 = PED::CREATE_PED(26, iVar1, vVar5, fVar9, 1, true);
		set_entity_is_target_priority(iLocal_55, 1, 0f);
		PED::SET_PED_CONFIG_FLAG(iLocal_55, 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_55, 281, true);
		set_blocking_of_non_temporary_events(iLocal_55, true);
		func_101(&uLocal_78, 2, iLocal_55, sLocal_265, 0, 1);
		set_entity_load_collision_flag(iLocal_55, true);
		if (iLocal_53 == 1)
		{
			set_ped_component_variation(iLocal_55, false, false, 2, 0);
			set_ped_component_variation(iLocal_55, 2, false, false, 0);
			set_ped_component_variation(iLocal_55, 3, 2, false, 0);
			set_ped_component_variation(iLocal_55, 4, false, false, 0);
		}
		func_100();
		if (func_43() == 0)
		{
			func_101(&uLocal_78, 0, player_ped_id(), "MICHAEL", 0, 1);
		}
		else if (func_43() == 1)
		{
			func_101(&uLocal_78, 0, player_ped_id(), "FRANKLIN", 0, 1);
		}
		else if (func_43() == 2)
		{
			func_101(&uLocal_78, 0, player_ped_id(), "TREVOR", 0, 1);
		}
		if (!has_ped_got_weapon(iLocal_54, joaat("weapon_pistol"), 0))
		{
			give_weapon_to_ped(iLocal_54, joaat("weapon_pistol"), -1, false, true);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54, joaat("weapon_pistol"), true);
		iLocal_60 = create_object(joaat("prop_ld_binbag_01"), vLocal_65.x, vLocal_65.y, vLocal_65.z + 100f, 1, true, false);
		set_entity_visible(iLocal_60, false, 0);
		if (vdist(2411.32f, 4958.76f, 45.19f, vLocal_65) < 10f)
		{
			iLocal_53 = 1;
			open_sequence_task(&iLocal_73);
			task_follow_nav_mesh_to_coord_advanced(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, vLocal_250, 40000f);
			task_smart_flee_ped(false, iLocal_54, 150f, -1, 0, 0);
			close_sequence_task(iLocal_73);
			task_perform_sequence(iLocal_55, iLocal_73);
			set_ped_keep_task(iLocal_55, true);
			clear_sequence_task(&iLocal_73);
			disable_navmesh_in_area(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, 1);
		}
		else
		{
			iLocal_53 = 2;
			open_sequence_task(&iLocal_73);
			task_follow_nav_mesh_to_coord_advanced(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, vLocal_250, 40000f);
			task_smart_flee_ped(false, iLocal_54, 150f, -1, 0, 0);
			close_sequence_task(iLocal_73);
			task_perform_sequence(iLocal_55, iLocal_73);
			set_ped_keep_task(iLocal_55, true);
			clear_sequence_task(&iLocal_73);
		}
		if (iLocal_53 == 1)
		{
		}
		task_go_to_entity(iLocal_54, iLocal_55, -1, 1f, 3f, 2f, 0);
		set_ped_keep_task(iLocal_54, true);
		return true;
	}
	return false;
}

void func_100()
{
	vLocal_250.x = 0f;
	vLocal_250.y = 10f;
	set_ped_combat_movement(iLocal_54, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 11, false);
	set_ped_combat_range(iLocal_54, 0);
	set_ped_combat_movement(iLocal_55, 3);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_55, 17, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_55, 6, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_55, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_55, 11, false);
	set_ped_flee_attributes(iLocal_55, 128, true);
	set_ped_flee_attributes(iLocal_55, 1, false);
	add_relationship_group("RE_ARREST_COP", &iLocal_71);
	add_relationship_group("RE_ARREST_CRIM", &iLocal_72);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54, iLocal_71);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_55, iLocal_72);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_72, iLocal_71);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_71, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_72, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_72, -1533126372);
	set_ambient_voice_name(iLocal_54, sLocal_257);
	set_ambient_voice_name(iLocal_55, sLocal_256);
}

void func_101(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_102()
{
	if (!func_92(5))
	{
		return true;
	}
	if (func_111())
	{
		return true;
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_110())
		{
			return false;
		}
	}
	if (func_103(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_103(float fParam0, int iParam1)
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
		if (func_45(func_43()))
		{
			iVar36 = func_109();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 2) && !is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_104(iVar32, &Var0);
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

void func_104(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_105(uParam1, "Abigail1", func_107(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 1:
			func_105(uParam1, "Abigail2", func_107(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 2:
			func_105(uParam1, "Barry1", func_107(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 3:
			func_105(uParam1, "Barry2", func_107(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 4:
			func_105(uParam1, "Barry3", func_107(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 5:
			func_105(uParam1, "Barry3A", func_107(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 6:
			func_105(uParam1, "Barry3C", func_107(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 7:
			func_105(uParam1, "Barry4", func_107(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_106(iParam0), 0, 0);
			break;
		
		case 8:
			func_105(uParam1, "Dreyfuss1", func_107(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 9:
			func_105(uParam1, "Epsilon1", func_107(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 10:
			func_105(uParam1, "Epsilon2", func_107(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 11:
			func_105(uParam1, "Epsilon3", func_107(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 12:
			func_105(uParam1, "Epsilon4", func_107(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 13:
			func_105(uParam1, "Epsilon5", func_107(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 14:
			func_105(uParam1, "Epsilon6", func_107(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 15:
			func_105(uParam1, "Epsilon7", func_107(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 16:
			func_105(uParam1, "Epsilon8", func_107(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 17:
			func_105(uParam1, "Extreme1", func_107(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 18:
			func_105(uParam1, "Extreme2", func_107(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 19:
			func_105(uParam1, "Extreme3", func_107(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 20:
			func_105(uParam1, "Extreme4", func_107(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 21:
			func_105(uParam1, "Fanatic1", func_107(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_106(iParam0), 1, 0);
			break;
		
		case 22:
			func_105(uParam1, "Fanatic2", func_107(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_106(iParam0), 1, 0);
			break;
		
		case 23:
			func_105(uParam1, "Fanatic3", func_107(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_106(iParam0), 0, 1);
			break;
		
		case 24:
			func_105(uParam1, "Hao1", func_107(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_106(iParam0), 0, 1);
			break;
		
		case 25:
			func_105(uParam1, "Hunting1", func_107(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 26:
			func_105(uParam1, "Hunting2", func_107(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 27:
			func_105(uParam1, "Josh1", func_107(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 28:
			func_105(uParam1, "Josh2", func_107(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 29:
			func_105(uParam1, "Josh3", func_107(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 30:
			func_105(uParam1, "Josh4", func_107(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 31:
			func_105(uParam1, "Maude1", func_107(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 32:
			func_105(uParam1, "Minute1", func_107(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 33:
			func_105(uParam1, "Minute2", func_107(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 34:
			func_105(uParam1, "Minute3", func_107(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 35:
			func_105(uParam1, "MrsPhilips1", func_107(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 36:
			func_105(uParam1, "MrsPhilips2", func_107(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 37:
			func_105(uParam1, "Nigel1", func_107(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 38:
			func_105(uParam1, "Nigel1A", func_107(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 39:
			func_105(uParam1, "Nigel1B", func_107(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_106(iParam0), 1, 1);
			break;
		
		case 40:
			func_105(uParam1, "Nigel1C", func_107(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_106(iParam0), 1, 1);
			break;
		
		case 41:
			func_105(uParam1, "Nigel1D", func_107(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_106(iParam0), 1, 1);
			break;
		
		case 42:
			func_105(uParam1, "Nigel2", func_107(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 43:
			func_105(uParam1, "Nigel3", func_107(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 44:
			func_105(uParam1, "Omega1", func_107(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 45:
			func_105(uParam1, "Omega2", func_107(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 46:
			func_105(uParam1, "Paparazzo1", func_107(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 47:
			func_105(uParam1, "Paparazzo2", func_107(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 48:
			func_105(uParam1, "Paparazzo3", func_107(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 49:
			func_105(uParam1, "Paparazzo3A", func_107(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 50:
			func_105(uParam1, "Paparazzo3B", func_107(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 51:
			func_105(uParam1, "Paparazzo4", func_107(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 52:
			func_105(uParam1, "Rampage1", func_107(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 54:
			func_105(uParam1, "Rampage3", func_107(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 55:
			func_105(uParam1, "Rampage4", func_107(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 56:
			func_105(uParam1, "Rampage5", func_107(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 53:
			func_105(uParam1, "Rampage2", func_107(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 57:
			func_105(uParam1, "TheLastOne", func_107(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 58:
			func_105(uParam1, "Tonya1", func_107(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 59:
			func_105(uParam1, "Tonya2", func_107(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 60:
			func_105(uParam1, "Tonya3", func_107(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 61:
			func_105(uParam1, "Tonya4", func_107(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 62:
			func_105(uParam1, "Tonya5", func_107(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_105(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_106(int iParam0)
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

struct<2> func_107(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_108(iParam0)};
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

struct<2> func_108(int iParam0)
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

int func_109()
{
	func_44();
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

bool func_110()
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

bool func_111()
{
	if (func_114() && !func_110())
	{
		return true;
	}
	if (func_113() && func_112())
	{
		return true;
	}
	return false;
}

int func_112()
{
	return Global_100872 > 0;
}

bool func_113()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_114()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_115()
{
	if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
	{
		if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_44) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_110())
		{
			return false;
		}
	}
	if (func_111())
	{
		return true;
	}
	if (func_103(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

void func_116(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_119();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_118(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_117();
}

void func_117()
{
	if (!is_ped_injured(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			set_vehicle_model_is_suppressed(get_entity_model(get_vehicle_ped_is_in(player_ped_id(), 0)), true);
		}
		PED::SET_PED_CONFIG_FLAG(player_ped_id(), 32, false);
	}
}

void func_118(int iParam0)
{
	Global_101143 = iParam0;
}

auto func_119()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_120(cVar0);
	return uVar16;
}

int func_120(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_121(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_119();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_163())
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
			if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_110())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_162(0))
		{
			return false;
		}
		if (func_111())
		{
			return false;
		}
		if (func_161())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_45(func_43()))
		{
			if (func_103(100f, 1) != -1)
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
		if (!func_160(iParam3))
		{
			return false;
		}
		if (func_45(func_43()))
		{
			if (func_159(func_43()) == 4 || func_159(func_43()) == 5)
			{
				return false;
			}
		}
		if (func_45(func_43()))
		{
			if (!func_158(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_157(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_156())
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
		if (!func_147(4))
		{
			return false;
		}
		if (!func_92(5))
		{
			return false;
		}
		if (func_146(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_146(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_160(30) && !func_146(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_45(func_43()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_145(iVar8))
				{
					if (func_123(iVar4))
					{
						if (!func_122(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(player_ped_id(), 0), vVar5) < 210f * 210f)
							{
								if (func_43() != iVar4)
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

int func_122(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_124(iVar0);
}

int func_124(int iParam0)
{
	return func_125(iParam0, 1);
}

bool func_125(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_145(iParam0))
	{
		return false;
	}
	func_126(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_126(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_127(func_138(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_127(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_137(iParam0, iParam1))
	{
		iVar0 = func_136(iParam1);
		iVar1 = func_134(iParam0);
		iVar2 = func_134(iParam0) - func_134(iParam1);
		iVar3 = func_136(iParam0) - func_136(iParam1);
		iVar4 = func_133(iParam0) - func_133(iParam1);
		iVar5 = func_132(iParam0) - func_132(iParam1);
		iVar6 = func_131(iParam0) - func_131(iParam1);
		iVar7 = func_130(iParam0) - func_130(iParam1);
	}
	else
	{
		iVar0 = func_136(iParam0);
		iVar1 = func_134(iParam1);
		iVar2 = func_134(iParam1) - func_134(iParam0);
		iVar3 = func_136(iParam1) - func_136(iParam0);
		iVar4 = func_133(iParam1) - func_133(iParam0);
		iVar5 = func_132(iParam1) - func_132(iParam0);
		iVar6 = func_131(iParam1) - func_131(iParam0);
		iVar7 = func_130(iParam1) - func_130(iParam0);
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
		iVar4 += func_129(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_128(to_float(iVar0 + 1), 0f, 12f));
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

float func_128(Vector3 fParam0, float fParam1, float fParam2)
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

int func_129(int iParam0, int iParam1)
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

int func_130(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_131(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_132(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_133(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_134(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_135(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_135(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_136(int iParam0)
{
	return (iParam0 && 15);
}

bool func_137(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_145(iParam1) || !func_145(iParam0))
	{
		return true;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
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
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_131(iParam0);
	iVar1 = func_131(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_138()
{
	auto uVar0;
	
	func_144(&uVar0, get_clock_seconds());
	func_143(&uVar0, get_clock_minutes());
	func_142(&uVar0, get_clock_hours());
	func_141(&uVar0, get_clock_day_of_month());
	func_140(&uVar0, get_clock_month());
	func_139(&uVar0, get_clock_year());
	return uVar0;
}

void func_139(auto uParam0, int iParam1)
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

void func_140(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_134(*uParam0);
	if (iParam1 < 1 || iParam1 > func_129(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_142(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_143(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_144(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_145(int iParam0)
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
	iVar0 = func_130(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_131(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_132(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_134(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_136(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_133(iParam0);
	if (iVar5 < 1 || iVar5 > func_129(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_146(int iParam0, int iParam1)
{
	if (is_bit_set(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_147(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_43();
				if (!func_45(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_155()) || Global_100201) || Global_25122) || func_154()) || func_74(8, -1)) || func_153()) || func_152()) || func_151()) || func_150()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_155()) || Global_25122) || func_154()) || func_74(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_155()) || Global_100201) || Global_25122) || func_154()) || func_74(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(player_ped_id(), false)) || func_155()) || Global_100201) || Global_25122) || func_154()) || func_74(8, -1)) || func_153()) || func_152()) || func_150()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_155() || get_player_wanted_level(player_id()) > 0) || func_74(8, -1)) || func_150()) || func_149()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_74(8, -1) || func_153()) || func_152()) || func_149()) || func_148())
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
							if ((((((((((((((is_ped_in_combat(player_ped_id(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_155()) || Global_25122) || func_154()) || func_74(8, -1)) || func_152()) || func_151()) || func_150()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || func_155()) || func_152()) || Global_100201) || Global_25122) || func_154()) || Global_36839) || func_74(8, -1)) || func_151()) || func_149()) || func_150()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), 1)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_155()) || Global_100201) || Global_25122) || func_154()) || func_74(8, -1)) || func_151()) || func_149()) || func_153()) || func_152()) || func_150())
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

auto func_148()
{
	return Global_91317.f_1;
}

int func_149()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_150()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_151()
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

int func_152()
{
	return Global_91330.f_297 > 0;
}

int func_153()
{
	return Global_91330.f_296 > 0;
}

auto func_154()
{
	return Global_1315913;
}

int func_155()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_156()
{
	func_72();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_157(int iParam0)
{
	return func_137(func_138(), iParam0);
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_43();
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

int func_159(int iParam0)
{
	if (!func_45(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_163())
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

bool func_161()
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

int func_162(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

bool func_163()
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

void func_164()
{
	if (get_random_event_flag())
	{
		switch (iLocal_49)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				func_195(6);
				func_178();
				break;
			
			case 3:
				func_195(5);
				func_178();
				break;
		}
		if (does_entity_exist(iLocal_55))
		{
			if (!is_ped_injured(iLocal_55) && !is_entity_dead(iLocal_55, 0))
			{
				is_entity_dead(iLocal_54, 0);
				if (does_entity_exist(iLocal_54))
				{
					task_smart_flee_coord(iLocal_55, get_entity_coords(iLocal_54, 1), 9000f, -1, 0, 0);
				}
				else
				{
					task_smart_flee_coord(iLocal_55, get_entity_coords(iLocal_55, 1), 9000f, -1, 0, 0);
				}
				set_blocking_of_non_temporary_events(iLocal_55, false);
				set_ped_keep_task(iLocal_55, true);
			}
		}
		if (does_entity_exist(iLocal_54))
		{
			if (!is_ped_injured(iLocal_54))
			{
				set_ped_keep_task(iLocal_54, true);
				set_blocking_of_non_temporary_events(iLocal_54, false);
				set_ped_as_cop(iLocal_54, 1);
				set_ped_can_be_targetted(iLocal_54, true);
			}
		}
		if (does_entity_exist(iLocal_56))
		{
			if (!is_ped_injured(iLocal_56))
			{
				if (is_player_wanted_level_greater(player_id(), 0))
				{
					func_56();
				}
				set_blocking_of_non_temporary_events(iLocal_56, false);
				set_ped_as_cop(iLocal_56, 1);
			}
		}
		if (func_177())
		{
			set_wanted_level_multiplier(1f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_72, iLocal_71);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_71, iLocal_72);
		}
		if (iLocal_77)
		{
			set_random_trains(1);
		}
	}
	set_roads_back_to_original_in_angled_area(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_287)
	{
		set_player_wanted_level_no_drop(player_id(), 3, 0);
		set_player_wanted_level_now(player_id(), 0);
	}
	func_165(-1);
	wait(0);
	terminate_this_thread();
}

void func_165(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_119();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_177())
	{
		func_170(iParam0);
		set_mission_name(0, 0);
		Global_101145 = get_game_timer();
		func_169(30000);
		StringCopy(&cVar0, func_168(Global_101143, 1), 64);
		if (func_167(Global_101143) > 0)
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
	func_166(&Global_25179);
	Global_101144 = 0;
	func_118(-1);
}

void func_166(auto uParam0)
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

int func_167(int iParam0)
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

char* func_168(int iParam0, int iParam1)
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

void func_169(int iParam0)
{
	Global_36262 = get_game_timer() + iParam0;
}

void func_170(int iParam0)
{
	func_171(iParam0, 0, func_176(iParam0));
}

void func_171(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_138();
	func_174(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_173(uParam0, &uVar0);
	Var1 = {func_172(&uVar0)};
}

struct<16> func_172(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_132(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_131(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_130(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_133(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_136(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_134(*uParam0), 64);
	return cVar0;
}

void func_173(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_174(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_136(*uParam0);
	iVar2 = func_133(*uParam0);
	iVar3 = func_132(*uParam0);
	iVar4 = func_131(*uParam0);
	iVar5 = func_130(*uParam0);
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
	iVar6 = func_129(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_129(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_175(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_175(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_144(uParam0, iParam1);
	func_143(uParam0, iParam2);
	func_142(uParam0, iParam3);
	func_140(uParam0, iParam5);
	func_141(uParam0, iParam4);
	func_139(uParam0, iParam6);
}

int func_176(int iParam0)
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

bool func_177()
{
	if ((Global_101143 == func_119() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_178()
{
	if (!iLocal_76)
	{
		func_194();
	}
	func_181(15, iLocal_53);
	func_179();
}

void func_179()
{
	func_180();
}

bool func_180()
{
	if (func_162(0))
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

void func_181(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_119();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_167(iParam0))
	{
		func_193(iParam0, iParam1);
		if (!func_192(51))
		{
			func_189("RE_REWARD", 1, 0, 4000, 10000, func_109(), 0, 138, 0);
			func_188(51);
		}
		if (func_88(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_187(iParam0, iParam1) != 322)
		{
			func_182(func_187(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_195(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_195(7);
			}
			else
			{
				func_195(1);
			}
		}
	}
}

void func_182(int iParam0, auto uParam1, auto uParam2)
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
		func_185(891 + iParam0, 1, -1, 1);
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
		func_183();
	}
}

void func_183()
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
			if (func_184() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_180();
				}
			}
		}
	}
}

auto func_184()
{
	return Global_25120;
}

int func_185(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_186();
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

auto func_186()
{
	return Global_1312747;
}

int func_187(int iParam0, int iParam1)
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

void func_188(int iParam0)
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

void func_189(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_190(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_190(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_191();
	}
}

void func_191()
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

int func_192(int iParam0)
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

void func_193(int iParam0, int iParam1)
{
	set_bit(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

bool func_194()
{
	return true;
}

void func_195(int iParam0)
{
	Global_101140 = iParam0;
}

void func_196()
{
	if (!iLocal_74 && iLocal_51 == 0)
	{
		if (!is_ped_injured(iLocal_54) && !is_ped_injured(iLocal_55))
		{
			task_go_straight_to_coord(iLocal_54, get_entity_coords(iLocal_55, 1), 3f, 20000, 1193033728, 0.5f);
			set_ped_keep_task(iLocal_54, true);
			wait(0);
		}
	}
}

