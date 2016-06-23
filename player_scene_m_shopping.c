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
	auto uLocal_44 = 0;
	auto uLocal_45 = 0;
	auto uLocal_46 = 0;
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 0;
	Vector3 vLocal_57 = 0;
	Vector3 vLocal_60 = 0;
	int iLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 8;
	auto uLocal_66 = 0;
	auto uLocal_67 = 0;
	auto uLocal_68 = 0;
	auto uLocal_69 = 0;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 2;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 8;
	auto uLocal_78 = 0;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 8;
	auto uLocal_87 = 0;
	auto uLocal_88 = 0;
	auto uLocal_89 = 0;
	auto uLocal_90 = 0;
	auto uLocal_91 = 0;
	auto uLocal_92 = 0;
	auto uLocal_93 = 0;
	auto uLocal_94 = 0;
	auto uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	auto uLocal_98 = 16;
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
	auto uLocal_263 = 5;
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
	int iLocal_284 = 0;
	auto uLocal_285 = 0;
	auto uLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	Vector3 vLocal_292 = 0;
	Vector3 vLocal_295 = 0;
	Vector3 vLocal_298 = 0;
	float fLocal_301 = 0;
	Vector3 vLocal_302 = 0;
	float fLocal_305 = 0;
	char[64] cLocal_306 = 0;
	char[64] cLocal_322 = 0;
	char[64] cLocal_338 = 0;
	char[64] cLocal_354 = 0;
	Vector3 vLocal_370 = 0;
	float fLocal_373 = 0;
	float fLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
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
	vLocal_57 = {0f, 0f, 0f};
	vLocal_60 = {0f, 0f, 0f};
	iLocal_63 = -1;
	iLocal_97 = 318;
	iLocal_287 = 1;
	StringCopy(&cLocal_354, "", 64);
	fLocal_374 = -1f;
	iLocal_376 = -1;
	if (has_force_cleanup_occurred(3))
	{
		func_151();
	}
	wait(0);
	func_130();
	func_128();
	func_124();
	while (iLocal_287 && func_120(1, 0))
	{
		wait(0);
		switch (iLocal_96)
		{
			case 0:
				if (func_117())
				{
					iLocal_96 = 1;
				}
				break;
			
			case 1:
				if (func_2())
				{
					iLocal_96 = 2;
				}
				break;
			
			case 2:
				func_1();
				break;
		}
	}
	func_151();
}

void func_1()
{
	iLocal_287 = 0;
}

bool func_2()
{
	func_3(&Global_91064);
	return false;
}

bool func_3(int iParam0)
{
	float fVar0;
	float fVar1;
	auto uVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 vVar15;
	
	if (!is_ped_injured(*iParam0))
	{
		if (!func_120(1, *iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, 1);
			delete_ped(iParam0);
			func_116(-2, "ped dead baby, ped dead");
			return false;
		}
		if (iLocal_288 >= 0)
		{
			if (is_entity_on_fire(*iParam0))
			{
				if (get_script_task_status(*iParam0, 1805844857) != 1)
				{
					stop_anim_playback(*iParam0, 0, 0);
				}
				clear_ped_tasks(*iParam0);
				func_116(-1, "ped on fire");
				return false;
			}
		}
		switch (iLocal_288)
		{
			case 0:
				if (is_synchronized_scene_running(Global_88940) || is_synchronized_scene_running(Global_88941))
				{
					func_116(1, "loop or exit synch started");
					return true;
				}
				break;
			
			case 1:
				if (is_synchronized_scene_running(Global_88940))
				{
				}
				else if (is_synchronized_scene_running(Global_88941))
				{
					_0xCD9CC7E200A52A6F(Global_88941);
					if (!is_entity_playing_anim(*iParam0, &cLocal_306, &cLocal_338, 2))
					{
						clear_ped_tasks(*iParam0);
						stop_synchronized_entity_anim(*iParam0, -16f, 1);
						set_ped_move_anims_blend_out(*iParam0);
						task_follow_nav_mesh_to_coord(*iParam0, vLocal_298 + vLocal_302, 1f, -1, fLocal_305 * 0.1f, 0, 1193033728);
						force_ped_motion_state(*iParam0, -668482597, false, 0, 0);
						_set_ped_reset_ragdoll_flag(*iParam0, 2);
						func_116(3, "not playing exit synch anim");
						return true;
					}
					else
					{
						fVar0 = get_synchronized_scene_phase(Global_88941);
						if (!find_anim_event_phase(&cLocal_306, &cLocal_338, "WalkInterruptible", &fVar1, &uVar2))
						{
						}
						else
						{
							if (fLocal_374 >= 0f)
							{
								if (fVar0 >= fLocal_374)
								{
									func_115(*iParam0, "DISMISS_MICHAEL", "AMANDA_NORMAL", 24);
									fLocal_374 = -1f;
								}
							}
							if (fVar0 >= fVar1)
							{
								clear_ped_tasks(*iParam0);
								stop_synchronized_entity_anim(*iParam0, -16f, 1);
								set_ped_move_anims_blend_out(*iParam0);
								task_follow_nav_mesh_to_coord(*iParam0, vLocal_298 + vLocal_302, 1f, -1, fLocal_305 * 0.1f, 0, 1193033728);
								force_ped_motion_state(*iParam0, -668482597, false, 0, 0);
								_set_ped_reset_ragdoll_flag(*iParam0, 2);
								func_116(3, "WalkInterruptible phase reached");
								return true;
							}
						}
					}
				}
				else if (iLocal_97 != 151)
				{
					clear_ped_tasks(*iParam0);
					if (is_string_null_or_empty(&cLocal_354))
					{
						task_follow_nav_mesh_to_coord(*iParam0, vLocal_298 + vLocal_302, 1f, -1, fLocal_305 * 0.1f, 0, 1193033728);
						force_ped_motion_state(*iParam0, -668482597, false, 0, 0);
						_set_ped_reset_ragdoll_flag(*iParam0, 2);
						func_116(3, "not playing synch scene (navmesh)");
						return true;
					}
					else
					{
						task_start_scenario_at_position(*iParam0, &cLocal_354, vLocal_298 + vLocal_370, fLocal_301 + fLocal_373, 0, 0, 1);
						func_116(6, "not playing synch scene (scenario)");
						return true;
					}
				}
				else
				{
					func_116(7, "not playing synch scene (anim)");
					return true;
				}
				break;
			
			case 2:
				if (is_ped_in_any_vehicle(*iParam0, 0))
				{
					disable_control_action(0, 71, 1);
					disable_control_action(0, 72, 1);
					disable_control_action(0, 59, 1);
					disable_control_action(0, 60, 1);
					disable_control_action(0, 69, 1);
					disable_control_action(0, 70, 1);
				}
				else
				{
					if (is_ped_ragdoll(*iParam0) || is_ped_getting_up(*iParam0))
					{
						return false;
					}
					clear_ped_tasks(*iParam0);
					if (func_114(vLocal_302, 0f, 0f, 0f, 0))
					{
						vVar3 = {get_offset_from_entity_in_world_coords(player_ped_id(), 5f, 0f, 0f)};
						vLocal_302 = {vVar3 - vLocal_298 * Vector(4f, 4f, 4f)};
					}
					clear_ped_tasks(*iParam0);
					task_follow_nav_mesh_to_coord(*iParam0, vLocal_298 + vLocal_302, 1f, -1, fLocal_305 * 0.1f, 0, 1193033728);
					func_116(3, "not in vehicle");
					return true;
				}
				break;
			
			case 3:
				if (func_113(*iParam0, 1))
				{
					func_116(8, 0);
					return false;
				}
				if (func_112(iParam0))
				{
					return false;
				}
				if (is_ped_ragdoll(*iParam0) || is_ped_getting_up(*iParam0))
				{
					return false;
				}
				func_7(*iParam0);
				if (get_script_task_status(*iParam0, 713668775) != 1)
				{
					if (vdist2(get_entity_coords(*iParam0, 1), vLocal_298 + vLocal_302) < fLocal_305 * fLocal_305)
					{
						if (fLocal_305 == 0f)
						{
							fLocal_305 = vmag(vLocal_302) * 0.75f;
						}
						task_wander_in_area(*iParam0, vLocal_298 + vLocal_302, fLocal_305, 3f, 6f);
						func_116(4, 0);
						return true;
					}
				}
				break;
			
			case 4:
				if (func_113(*iParam0, 1))
				{
					func_116(8, 0);
					return false;
				}
				if (func_112(iParam0))
				{
					return false;
				}
				if (is_ped_ragdoll(*iParam0) || is_ped_getting_up(*iParam0))
				{
					return false;
				}
				func_7(*iParam0);
				if (vdist2(get_entity_coords(*iParam0, 1), vLocal_298 + vLocal_302) < fLocal_305 * fLocal_305)
				{
					if (does_scenario_exist_in_area(vLocal_298 + vLocal_302, fLocal_305, 1))
					{
						task_use_nearest_scenario_to_coord(*iParam0, vLocal_298 + vLocal_302, fLocal_305, 0);
						remove_scenario_blocking_area(iLocal_375, 0);
						func_116(5, 0);
						return true;
					}
				}
				break;
			
			case 5:
				if (func_113(*iParam0, 1))
				{
					func_116(8, 0);
					return false;
				}
				if (func_112(iParam0))
				{
					return false;
				}
				func_7(*iParam0);
				if (ped_has_use_scenario_task(*iParam0))
				{
				}
				else
				{
					if (is_ped_ragdoll(*iParam0) || is_ped_getting_up(*iParam0))
					{
						return false;
					}
					vVar6 = {func_4(vLocal_298 + vLocal_302, fLocal_305 * 0.9f, 0f)};
					if (get_safe_coord_for_ped(vVar6, 0, &vVar9, 14))
					{
						if (vdist2(get_entity_coords(*iParam0, 1), vVar9) > 100f)
						{
							task_follow_nav_mesh_to_coord(*iParam0, vVar9, 1f, -1, 0.25f, 0, 1193033728);
							vVar12 = {get_entity_coords(*iParam0, 1) - Vector(2f, 2f, 2f)};
							vVar15 = {get_entity_coords(*iParam0, 1) + Vector(2f, 2f, 2f)};
							iLocal_375 = add_scenario_blocking_area(vVar12, vVar15, 0, 0, 1, 1);
							func_116(3, "not using scenario");
							return true;
						}
					}
				}
				break;
			
			case 6:
				if (func_113(*iParam0, 1))
				{
					func_116(8, 0);
					return false;
				}
				if (func_112(iParam0))
				{
					return false;
				}
				func_7(*iParam0);
				if (ped_has_use_scenario_task(*iParam0))
				{
				}
				else
				{
					func_7(*iParam0);
				}
				break;
			
			case 7:
				if (func_113(*iParam0, 0))
				{
					func_116(8, 0);
					return false;
				}
				if (func_112(iParam0))
				{
					return false;
				}
				func_7(*iParam0);
				if (is_entity_playing_anim(*iParam0, &cLocal_306, &cLocal_322, 2))
				{
				}
				else if (is_entity_playing_anim(*iParam0, &cLocal_306, &cLocal_338, 2))
				{
				}
				break;
			
			case 8:
				if (func_112(iParam0))
				{
					return false;
				}
				if (get_script_task_status(*iParam0, 1805844857) != 1)
				{
					task_smart_flee_ped(*iParam0, player_ped_id(), 50f, 20000, 1, 0);
					return true;
				}
				if (vdist2(get_entity_coords(*iParam0, 1), get_entity_coords(*iParam0, 1)) > 50f * 1.25f)
				{
					task_follow_nav_mesh_to_coord(*iParam0, vLocal_298 + vLocal_302, 1f, -1, fLocal_305 * 0.1f, 0, 1193033728);
					func_116(3, "flee to navmesh");
					return true;
				}
				break;
			
			case -1:
				break;
			
			default:
				return false;
				break;
		}
		return true;
	}
	else
	{
		if (iLocal_288 != -2)
		{
			func_116(-2, 0);
		}
		if (does_entity_exist(*iParam0))
		{
			func_7(*iParam0);
		}
	}
	return false;
}

Vector3 func_4(Vector3 vParam0, Vector3 fParam1, float fParam2)
{
	Vector3 vVar0;
	float fVar3;
	Vector3 fVar4;
	int iVar5;
	
	fVar3 = fParam3 * fParam3;
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = {get_random_float_in_range(-fParam3, fParam3), get_random_float_in_range(-fParam3, fParam3), 0f};
		if (vVar0.x * vVar0.x + vVar0.y * vVar0.y <= fVar3)
		{
			fVar4 = fParam4 / 2f;
			vVar0.z = get_random_float_in_range(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_5(vParam0, fParam3, fParam4);
}

Vector3 func_5(Vector3 vParam0, Vector3 fParam1, float fParam2)
{
	Vector3 vVar0;
	Vector3 fVar3;
	
	vVar0 = {get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f};
	fVar3 = fParam4 / 2f;
	vVar0 = {func_6(vVar0, get_random_float_in_range(0f, fParam3))};
	vVar0.z = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_6(Vector3 vParam0, Vector3 fParam1)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * Vector(fParam3 / fVar0, fParam3 / fVar0, fParam3 / fVar0);
	}
	return 0f, 0f, 0f;
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (is_ped_injured(iParam0))
	{
		if (!iLocal_378 && has_entity_been_damaged_by_entity(iParam0, player_ped_id(), 1))
		{
			iVar0 = func_111(iParam0);
			iVar1 = func_110(iVar0);
			iVar2 = func_109(iVar1);
			if (iVar2 != -1)
			{
				iVar3 = func_107(iParam0);
				if (iVar3 != 0)
				{
					if (!func_106(iVar2) || func_98(iVar2) == 6)
					{
						func_97(75, get_entity_coords(iParam0, 0), 250f, -1);
						if (func_40(Global_87345, iVar0, 2, 0, iVar3, iVar2, 75))
						{
							iLocal_378 = 1;
						}
					}
				}
			}
		}
		return;
	}
	func_10(iParam0, 138, &uLocal_98, "FMMAUD", &uLocal_263, &iLocal_284, 3);
	fVar4 = vdist2(get_entity_coords(iParam0, 1), get_entity_coords(player_ped_id(), 1));
	if (fVar4 > 8f * 8f)
	{
		iLocal_376 = -1;
	}
	else if (is_any_speech_playing(iParam0))
	{
		iLocal_376 = -1;
	}
	else
	{
		if (iLocal_376 <= 0)
		{
			iLocal_376 = get_game_timer();
		}
		if (iLocal_376 > 0)
		{
			if (iLocal_377 == 0)
			{
				if (iLocal_376 + 15000 < get_game_timer())
				{
					func_8(iParam0, "FRIEND_FOLLOWED_BY_PLAYER", 24);
					iLocal_376 = -1;
					iLocal_377++;
				}
			}
			else if (iLocal_376 + 10000 < get_game_timer())
			{
				func_8(iParam0, "HIT_BY_PLAYER", 24);
				iLocal_376 = -1;
				iLocal_377++;
			}
		}
	}
}

void func_8(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_9(iParam2), 1);
}

int func_9(int iParam0)
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

bool func_10(int iParam0, int iParam1, auto uParam2, char* sParam3, auto uParam4, int iParam5, int iParam6)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	int iVar12;
	int iVar13;
	char[16] cVar14;
	int iVar18;
	
	vVar0 = {get_entity_coords(iParam0, 1)};
	vVar3 = {get_entity_coords(player_ped_id(), 1)};
	iVar6 = func_37();
	iVar7 = func_33(iParam0);
	StringCopy(&Var8, "", 16);
	switch (iVar7)
	{
		case 0:
			if (Global_86617[0] == 18)
			{
				return false;
			}
			StringCopy(&Var8, "FMM_0", 16);
			break;
		
		case 1:
			if (Global_86617[1] == 42)
			{
				return false;
			}
			StringCopy(&Var8, "FMM_1", 16);
			break;
		
		case 2:
			if (Global_86617[2] == 65 || Global_86617[2] == 66)
			{
				return false;
			}
			StringCopy(&Var8, "FMM_2", 16);
			break;
		
		case 3:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return false;
			}
			StringCopy(&Var8, "FMM_3", 16);
			break;
		
		case 4:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return false;
			}
			StringCopy(&Var8, "FMM_4", 16);
			break;
		
		case 5:
			if (iVar6 == 0 || iVar6 == 2)
			{
				return false;
			}
			StringCopy(&Var8, "FMF_0", 16);
			break;
		
		case 6:
			if (iVar6 == 0)
			{
				return false;
			}
			StringCopy(&Var8, "FMF_1", 16);
			break;
		
		case 10:
			if (iVar6 == 1)
			{
				return false;
			}
			StringCopy(&Var8, "FMT_0", 16);
			break;
		
		case 11:
			if (iVar6 == 1 || iVar6 == 0)
			{
				return false;
			}
			StringCopy(&Var8, "FMT_3", 16);
			break;
		
		default:
			return false;
			break;
	}
	switch (iVar6)
	{
		case 0:
			if (((iVar7 == 0 || iVar7 == 1) || iVar7 == 3) || iVar7 == 4)
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else if (!func_32(131))
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else
			{
				StringConCat(&Var8, "_M1", 16);
			}
			break;
		
		case 1:
			StringConCat(&Var8, "_F", 16);
			break;
		
		case 2:
			if (iVar7 == 11)
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else if (!func_32(130))
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else
			{
				StringConCat(&Var8, "_T1", 16);
			}
			break;
	}
	if (vdist2(vVar0, vVar3) > 100f)
	{
		return false;
	}
	if (iParam1 == 6 || iParam1 == 31)
	{
		if (absf(vVar3.z - vVar0.z) > 2f)
		{
			return false;
		}
	}
	else if (!is_entity_on_screen(iParam0) || !is_entity_visible(iParam0))
	{
		return false;
	}
	iVar12 = false;
	switch (iParam1)
	{
		case 10:
		case 8:
		case 1:
		case 39:
		case 40:
		case 30:
		case 136:
			iVar12 = true;
			break;
	}
	if (!is_control_just_pressed(0, 46) && !is_disabled_control_just_pressed(0, 46))
	{
		return false;
	}
	if (!iVar12)
	{
		iVar13 = get_room_key_from_entity(iParam0);
		if (Global_91330.f_295 != iVar13)
		{
			return false;
		}
	}
	cVar14 = {Var8};
	StringConCat(&cVar14, "_01", 16);
	if (does_text_label_exist(&cVar14))
	{
		iVar18 = 1;
	}
	else
	{
		iVar18 = 0;
	}
	if (iVar18 || func_31(sParam3, &Var8, uParam4))
	{
		if (iVar7 == 5)
		{
			if (iVar6 == 0)
			{
				func_30(uParam2, 0, player_ped_id(), "MICHAEL", 0, 1);
			}
			else if (iVar6 == 1)
			{
				func_30(uParam2, 0, player_ped_id(), "FRANKLIN", 0, 1);
			}
			else if (iVar6 == 2)
			{
				func_30(uParam2, 0, player_ped_id(), "TREVOR", 0, 1);
			}
		}
		if (func_14(sParam3, &Var8, uParam2, iParam6, uParam4, 0))
		{
			func_11(iParam5);
			return true;
		}
	}
	iParam1 = iParam1;
	return false;
}

void func_11(int iParam0)
{
	func_12(iParam0, 0f);
}

void func_12(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_13(is_bit_set(*iParam0, 4)) - fParam1;
	set_bit(iParam0, true);
	clear_bit(iParam0, 2);
	*iParam0.f_2 = 0f;
}

float func_13(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(get_game_timer()) / 1000f;
	}
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time();
		return to_float(iVar0) / 1000f;
	}
	return to_float(get_game_timer()) / 1000f;
}

bool func_14(char* sParam0, char* sParam1, auto uParam2, int iParam3, auto uParam4, char* sParam5)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (func_28(sParam0, 7))
	{
		sVar0 = "";
		switch (func_37())
		{
			case 0:
				sVar0 = "MICHAEL";
				break;
			
			case 1:
				sVar0 = "FRANKLIN";
				break;
			
			case 2:
				sVar0 = "TREVOR";
				break;
		}
		if (is_string_null_or_empty(sParam5))
		{
			func_30(uParam2, 0, player_ped_id(), sVar0, 0, 1);
			if (func_16(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				iVar1 = *uParam4 - 1;
				while (iVar1 > 0)
				{
					*(uParam4[iVar1 /*4*/]) = {*(uParam4[iVar1 - 1 /*4*/])};
					iVar1--;
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return true;
			}
		}
		else
		{
			func_30(uParam2, 0, player_ped_id(), sVar0, 0, 1);
			if (func_16(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				func_15(1);
				iVar2 = *uParam4 - 1;
				while (iVar2 > 0)
				{
					*(uParam4[iVar2 /*4*/]) = {*(uParam4[iVar2 - 1 /*4*/])};
					iVar2--;
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return true;
			}
		}
	}
	return false;
}

void func_15(int iParam0)
{
	Global_16723 = iParam0;
}

int func_16(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_17(sParam2, iParam3, 0);
}

bool func_17(char* sParam0, int iParam1, int iParam2)
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
					func_26();
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
		if (func_25(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_24();
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
				func_22();
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
				if (func_21())
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
			if (func_20())
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
			func_19();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_18();
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
		func_26();
	}
	return false;
}

void func_18()
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

void func_19()
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

bool func_20()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_21()
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

void func_22()
{
	if (func_23(14))
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
		Global_14413 = func_37();
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

int func_23(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_24()
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

int func_25(int iParam0, int iParam1)
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

void func_26()
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

void func_27(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

bool func_28(char* sParam0, int iParam1)
{
	if (has_this_additional_text_loaded(sParam0, iParam1))
	{
		return true;
	}
	else if (!func_29() && !is_mobile_phone_call_ongoing())
	{
		if (!is_streaming_additional_text(iParam1))
		{
			request_additional_text(sParam0, iParam1);
		}
	}
	return false;
}

bool func_29()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_30(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_31(char* sParam0, char* sParam1, auto uParam2)
{
	char[16] cVar0;
	struct<4> Var4;
	int iVar8;
	struct<4>[] Var9 = new struct<4>[15];
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (func_28(sParam0, 7))
	{
		cVar0 = {*sParam1};
		StringCopy(&Var4, "", 16);
		iVar8 = -1;
		cVar0 = {*sParam1};
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &Var4, 16);
		StringConCat(&cVar0, "1", 16);
		if (does_text_label_exist(&cVar0))
		{
			StringCopy(&Var4, "", 16);
		}
		else
		{
			StringCopy(&Var4, "0", 16);
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "a", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
			}
			else
			{
				return false;
			}
		}
		iVar70 = true;
		cVar0 = {*sParam1};
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &Var4, 16);
		StringConCat(&cVar0, "1", 16);
		if (does_text_label_exist(&cVar0))
		{
			iVar8++;
			Var9[iVar8 /*4*/] = {*sParam1};
			StringConCat(&(Var9[iVar8 /*4*/]), "a", 16);
			iVar70 = false;
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "b", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "b", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "c", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "c", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "d", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "d", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "e", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "e", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "f", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "f", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "g", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "g", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "h", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "h", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "i", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "i", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "j", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "j", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "k", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "k", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "JJJ", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "JJJ", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "m", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "m", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "n", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "n", 16);
				iVar70 = false;
			}
		}
		if (!iVar70)
		{
			iVar70 = true;
			cVar0 = {*sParam1};
			StringConCat(&cVar0, "o", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &Var4, 16);
			StringConCat(&cVar0, "1", 16);
			if (does_text_label_exist(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = {*sParam1};
				StringConCat(&(Var9[iVar8 /*4*/]), "o", 16);
				iVar70 = false;
			}
		}
		iVar71 = iVar8;
		iVar72 = 0;
		while (iVar72 < *uParam2)
		{
			if (!is_string_null_or_empty(uParam2[iVar72 /*4*/]))
			{
				iVar73 = 0;
				while (iVar73 < Var9)
				{
					if (!is_string_null_or_empty(&(Var9[iVar73 /*4*/])))
					{
						if (are_strings_equal(uParam2[iVar72 /*4*/], &(Var9[iVar73 /*4*/])))
						{
							iVar74 = iVar73;
							while (iVar74 <= Var9 - 1)
							{
								if (iVar74 + 1 < Var9)
								{
									Var9[iVar74 /*4*/] = {Var9[iVar74 + 1 /*4*/]};
								}
								else
								{
									StringCopy(&(Var9[iVar74 /*4*/]), "", 16);
								}
								iVar74++;
							}
							iVar71--;
						}
					}
					iVar73++;
				}
			}
			iVar72++;
		}
		iVar75 = get_random_int_in_range(false, iVar71 + 1);
		*sParam1 = {Var9[iVar75 /*4*/]};
		if (is_string_null_or_empty(sParam1))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_32(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = get_entity_model(iParam0);
	if (iVar0 == func_36(14))
	{
		return 0;
	}
	if (iVar0 == func_36(15))
	{
		return 1;
	}
	if (iVar0 == func_36(17))
	{
		return 2;
	}
	if (iVar0 == joaat("s_f_m_maid_01"))
	{
		return 3;
	}
	if (iVar0 == joaat("s_m_m_gardener_01"))
	{
		return 4;
	}
	if (iVar0 == joaat("ig_denise"))
	{
		return 5;
	}
	if (iVar0 == func_36(19))
	{
		return 6;
	}
	if (iVar0 == func_36(37))
	{
		return 7;
	}
	if (iVar0 == func_34(0))
	{
		return 8;
	}
	if (iVar0 == func_34(2))
	{
		return 9;
	}
	if (iVar0 == func_36(20))
	{
		return 10;
	}
	if (iVar0 == func_36(40))
	{
		return 11;
	}
	if (iVar0 == joaat("s_f_m_maid_01"))
	{
		return 12;
	}
	if (iVar0 == func_36(32))
	{
		return 13;
	}
	if (iVar0 == func_36(24))
	{
		return 14;
	}
	return 16;
}

int func_34(int iParam0)
{
	if (func_35(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_35(int iParam0)
{
	return iParam0 < 3;
}

int func_36(int iParam0)
{
	if (!func_35(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

auto func_37()
{
	func_38();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_38()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_34(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_39(player_ped_id());
			if (func_35(iVar0) && (!func_23(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_35(Global_101154.f_1826.f_539.f_3549))
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

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

bool func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	
	iVar0 = 3;
	iVar1 = func_110(iParam1);
	iVar2 = func_96(iParam0);
	iVar3 = 10000;
	if (iParam3 == 0)
	{
		if (func_94(iVar1, iParam2, -1, &iVar4, &iVar5))
		{
			if (iParam5 == -1)
			{
				return false;
			}
			iVar6 = 0;
			if (((((iParam5 == 2091854273 || iParam5 == 328868333) || iParam5 == -1813399915) || iParam5 == 465306446) || iParam5 == -816460512) || iParam5 == -702667427)
			{
				iVar6 = 262144;
			}
			iVar7 = -1;
			if (iParam5 == 2091854273)
			{
				iVar7 = 24;
			}
			else if (iParam5 == 328868333)
			{
				iVar7 = 25;
			}
			else if (iParam5 == -1813399915)
			{
				iVar7 = 26;
			}
			else if (iParam5 == 465306446)
			{
				iVar7 = 27;
			}
			else if (iParam5 == -816460512)
			{
				iVar7 = 28;
			}
			else if (iParam5 == -702667427)
			{
				iVar7 = 29;
			}
			if (func_90(iParam5, iVar4, iVar5, iVar0, iVar2, iParam1, iVar3, 10000, iParam6, iParam4, iVar7, iVar6, 1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	else if (func_86(iVar1, iParam2, -1, &sVar8))
	{
		if (func_74(iParam1, &sVar8, 1, 0, 0, 0, 0, 1, 0, 1))
		{
			if (iParam4 != 0)
			{
				switch (iParam4)
				{
					case 202:
						func_73();
						break;
					
					case 203:
						func_72();
						break;
					
					case 204:
						func_71();
						break;
					
					case 205:
						func_70();
						break;
					
					case 206:
						func_41();
						break;
					}
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_41()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_37();
	iVar1 = func_69(iVar0);
	if (iVar1 > 10000)
	{
		func_42(iVar0, 128, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_42(iVar0, 128, iVar1 / 10);
	}
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_43(Global_101154.f_32575[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

bool func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_68();
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
					func_67(99, 1);
					func_66(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_66(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_66(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_51(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_50(5))
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
							func_66(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_66(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_66(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_50(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_66(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_66(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_66(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_66(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_66(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_66(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_66(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_66(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_66(joaat("sp2_money_spent_property"), iParam3);
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
									func_66(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_66(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_66(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_66(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_66(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_66(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_50(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_66(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_66(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_66(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_66(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_66(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_66(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_49(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_67(95, iParam3);
					break;
				
				case 1:
					func_67(97, iParam3);
					break;
				
				case 2:
					func_67(96, iParam3);
					break;
			}
			func_67(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_46(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_46(iVar1);
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
					func_66(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_66(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_66(joaat("sp2_total_cash_earned"), iParam3);
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
	func_45(iParam0);
	if (Global_35711 == 15)
	{
		func_44(0);
	}
	return true;
}

void func_44(int iParam0)
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

void func_45(int iParam0)
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

void func_46(int iParam0)
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
	else if (is_bit_set(Global_101154.f_25089.f_471, iParam0) || is_bit_set(Global_2097152[func_48() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		clear_bit(&(Global_2097152[func_48() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_47(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_47(int iParam0)
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

int func_48()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_49(int iParam0)
{
	func_67(93, iParam0);
	func_67(29, iParam0);
	func_67(30, iParam0);
}

int func_50(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return is_bit_set(Global_101154.f_25089.f_471, iParam0);
	}
	return is_bit_set(Global_2097152[func_48() /*10375*/].f_7704.f_10, iParam0);
}

bool func_51(int iParam0)
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
		func_65(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_52(27, 1);
	return true;
}

int func_52(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_53(iParam0, iParam1);
}

bool func_53(int iParam0, int iParam1)
{
	if (func_23(14) && !func_64(iParam0))
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
	if (func_63(&Global_2563627))
	{
		if (func_61(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_54(&Global_2563627, iParam0))
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

bool func_54(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_23(14) && !func_64(iParam1))
	{
		return false;
	}
	if (func_61(uParam0, iParam1))
	{
		return false;
	}
	if (func_60(uParam0) < 0f)
	{
		func_59(uParam0, 0);
	}
	func_57(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_55(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_55(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_23(14) && !func_64(iParam1))
	{
		return false;
	}
	if (func_61(uParam0, iParam1))
	{
		return false;
	}
	if (func_60(uParam0) < 0f)
	{
		func_59(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_56(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_56(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_57(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_58(uParam0, iVar0);
		iVar0++;
	}
	func_59(uParam0, Global_2563626 - 0.5f);
}

void func_58(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_59(auto uParam0, float fParam1)
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

auto func_60(auto uParam0)
{
	return *uParam0.f_72;
}

int func_61(auto uParam0, int iParam1)
{
	return func_62(uParam0, iParam1) != -1;
}

int func_62(auto uParam0, int iParam1)
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

int func_63(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_64(int iParam0)
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

int func_65(int iParam0, int iParam1)
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

void func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stat_set_int(iParam0, iVar0, 1);
}

void func_67(int iParam0, int iParam1)
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

void func_68()
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

int func_69(int iParam0)
{
	auto uVar0;
	
	switch (iParam0)
	{
		case 0:
			stat_get_int(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			stat_get_int(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			stat_get_int(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

void func_70()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_37();
	iVar1 = func_69(iVar0);
	if (iVar1 > 10000)
	{
		func_42(iVar0, 127, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_42(iVar0, 127, iVar1 / 10);
	}
}

void func_71()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_37();
	iVar1 = func_69(iVar0);
	if (iVar1 > 10000)
	{
		func_42(iVar0, 126, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_42(iVar0, 126, iVar1 / 10);
	}
}

void func_72()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_37();
	iVar1 = func_69(iVar0);
	if (iVar1 > 10000)
	{
		func_42(iVar0, 125, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_42(iVar0, 125, iVar1 / 10);
	}
}

void func_73()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_37();
	iVar1 = func_69(iVar0);
	if (iVar1 > 10000)
	{
		func_42(iVar0, 124, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_42(iVar0, 124, iVar1 / 10);
	}
}

bool func_74(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	clear_bit(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_75(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
			Global_2970 = iParam0;
			set_bit(&Global_2283, true);
			set_bit(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_75(auto uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, auto uParam8, auto uParam9, int iParam10, auto uParam11, auto uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_22();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (is_player_playing(player_id()))
		{
			if (is_ped_swimming_under_water(player_ped_id()))
			{
				return false;
			}
		}
		if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
	}
	if (func_85() == 0)
	{
		func_83();
		return false;
	}
	func_82(Global_16779);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/]), sParam1, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_25 = iParam7;
	Global_101154.f_12831[Global_16779 /*104*/].f_26 = uParam8;
	Global_101154.f_12831[Global_16779 /*104*/].f_29 = uParam9;
	Global_101154.f_12831[Global_16779 /*104*/].f_30 = uParam12;
	Global_101154.f_12831[Global_16779 /*104*/].f_31 = uParam11;
	Global_101154.f_12831[Global_16779 /*104*/].f_28 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), sParam15, 64);
	if (is_bit_set(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_81(0);
		func_81(2);
		func_81(1);
	}
	else
	{
		func_22();
		switch (iParam16)
		{
			case 3:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_81(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_81(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_81(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_81(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (is_bit_set(Global_2283, 10))
		{
			Global_101154.f_12741[0 /*20*/].f_17 = 1;
			Global_101154.f_12741[1 /*20*/].f_17 = 1;
			Global_101154.f_12741[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101154.f_12741[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101154.f_12741[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101154.f_12741[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101154.f_12741[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (iParam10)
	{
		func_22();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_80())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_79(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_76(1);
			func_79(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_76(int iParam0)
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
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = false;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_23(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (is_bit_set(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_78(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_77(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101154.f_12831[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101154.f_12831[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101154.f_12831[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_77(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_77(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36844;
											break;
										
										case 1:
											iVar5 = Global_36845;
											break;
										
										case 2:
											iVar5 = Global_36846;
											break;
										
										default:
											break;
									}
									func_77(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_77(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_78(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(Global_2289);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2)
							{
								if (is_bit_set(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_78(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar6);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3)
							{
								if (is_bit_set(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_78(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar7);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 8)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_78(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && is_bit_set(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_78(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_77(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_77(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_77(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_push_scaleform_movie_function_parameter_int(round(fParam2));
	if (fParam3 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam6));
	}
	if (!is_string_null_or_empty(sParam7))
	{
		func_78(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_78(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_78(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_78(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_78(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_78(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_79(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_push_scaleform_movie_function_parameter_int(round(fParam2));
	if (fParam3 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam6));
	}
	_pop_scaleform_movie_function_void();
}

auto func_80()
{
	return Global_1315913;
}

void func_81(int iParam0)
{
	auto uVar0;
	auto uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_82(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = get_clock_hours();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_101154.f_12831[uParam0 /*104*/].f_18 = iVar0;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_1 = iVar1;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_2 = iVar2;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_3 = iVar3;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_83()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_84(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_84(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

bool func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return true;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0 || Global_101154.f_12831[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_84(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return false;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 0;
	return true;
}

bool func_86(int iParam0, int iParam1, int iParam2, auto uParam3)
{
	char[16] cVar0;
	struct<4>[] Var4 = new struct<4>[2];
	int iVar13;
	
	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		StringCopy(&cVar0, "FTX_", 16);
		StringConCat(&cVar0, func_89(iParam0), 16);
		StringConCat(&cVar0, "_", 16);
		switch (iParam1)
		{
			case 0:
				StringConCat(&cVar0, "LOST", 16);
				break;
			
			case 1:
				StringConCat(&cVar0, "LATE", 16);
				break;
			
			case 2:
				StringConCat(&cVar0, "HOSP", 16);
				break;
			
			case 3:
				StringConCat(&cVar0, "PDIED", 16);
				break;
			
			case 4:
				StringConCat(&cVar0, "PBUST", 16);
				break;
			
			default:
				StringConCat(&cVar0, "X", 16);
				StringIntConCat(&cVar0, iParam1, 16);
				*uParam3 = {cVar0};
				return false;
				break;
		}
		Var4[0 /*4*/] = {cVar0};
		StringConCat(&(Var4[0 /*4*/]), "a", 16);
		Var4[1 /*4*/] = {cVar0};
		StringConCat(&(Var4[1 /*4*/]), "b", 16);
		if (iParam2 == -1)
		{
			iVar13 = func_88(iParam0);
			if (func_87(&(Var4[0 /*4*/]), iVar13))
			{
				iParam2 = true;
			}
			else if (func_87(&(Var4[1 /*4*/]), iVar13))
			{
				iParam2 = false;
			}
			else
			{
				iParam2 = get_random_int_in_range(false, 2);
			}
		}
		*uParam3 = {Var4[iParam2 /*4*/]};
		return true;
	}
	return false;
}

bool func_87(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam1 > 3)
	{
		return false;
	}
	while (iVar0 < 35)
	{
		if (!is_string_null(&(Global_101154.f_12831[iVar0 /*104*/])))
		{
			if (are_strings_equal(&(Global_101154.f_12831[iVar0 /*104*/]), sParam0))
			{
				if (Global_101154.f_12831[iVar0 /*104*/].f_99[iParam1])
				{
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		return true;
	}
	return false;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 19;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 17;
			break;
	}
	return 145;
}

char* func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "M";
			break;
		
		case 1:
			return "F";
			break;
		
		case 2:
			return "T";
			break;
		
		case 3:
			return "L";
			break;
		
		case 4:
			return "J";
			break;
		
		case 5:
			return "A";
			break;
	}
	return "X";
}

bool func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_93(0))
	{
		return false;
	}
	if (iParam6 < 0)
	{
		return false;
	}
	if (iParam7 < 0)
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
	if (iParam5 < 3)
	{
		if (is_bit_set(iParam4, iParam5))
		{
			return false;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return false;
	}
	if (Global_101154.f_6378.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_92(iParam3);
		Var0.f_4 = get_game_timer() + iParam6;
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		clear_bit(&(Var0.f_1), false);
		Global_101154.f_6378.f_651[Global_101154.f_6378.f_764 /*14*/] = {Var0};
		Global_101154.f_6378.f_764++;
		func_91(0);
		func_91(1);
		func_91(2);
		return true;
	}
	return false;
}

void func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_35(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (is_bit_set(Global_101154.f_6378[iVar0 /*15*/].f_2, iParam0))
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
		if (is_bit_set(Global_101154.f_6378.f_651[iVar2 /*14*/].f_2, iParam0))
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

int func_92(int iParam0)
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

int func_93(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

bool func_94(int iParam0, int iParam1, int iParam2, auto uParam3, auto uParam4)
{
	struct<4>[] Var0 = new struct<4>[2];
	int iVar9;
	
	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		switch (iParam0)
		{
			case 0:
				*uParam3 = 61;
				break;
			
			case 1:
				*uParam3 = 62;
				break;
			
			case 2:
				*uParam3 = 63;
				break;
			
			case 3:
				*uParam3 = 64;
				break;
			
			case 4:
				*uParam3 = 65;
				break;
			
			case 5:
				*uParam3 = 66;
				break;
		}
		if (iParam2 == -1)
		{
			if (func_86(iParam0, iParam1, 0, &(Var0[0 /*4*/])) && func_86(iParam0, iParam1, 1, &(Var0[1 /*4*/])))
			{
				iVar9 = func_88(iParam0);
				if (func_87(&(Var0[0 /*4*/]), iVar9))
				{
					iParam2 = true;
				}
				else if (func_87(&(Var0[1 /*4*/]), iVar9))
				{
					iParam2 = false;
				}
				else
				{
					iParam2 = get_random_int_in_range(false, 2);
				}
			}
			else
			{
				iParam2 = get_random_int_in_range(false, 2);
			}
		}
		*uParam4 = func_95(iParam1, iParam2);
		return true;
	}
	return false;
}

int func_95(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == 1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam1 == 0)
				{
					return 67;
				}
				else
				{
					return 68;
				}
				break;
			
			case 1:
				if (iParam1 == 0)
				{
					return 69;
				}
				else
				{
					return 70;
				}
				break;
			
			case 2:
				if (iParam1 == 0)
				{
					return 71;
				}
				else
				{
					return 72;
				}
				break;
			
			case 3:
				if (iParam1 == 0)
				{
					return 73;
				}
				else
				{
					return 74;
				}
				break;
			
			case 4:
				if (iParam1 == 0)
				{
					return 75;
				}
				else
				{
					return 76;
				}
				break;
			}
	}
	return 75;
}

int func_96(int iParam0)
{
	switch (iParam0)
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

void func_97(int iParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	if (iParam0 == iParam5)
	{
		return;
	}
	if (iParam0 == 76)
	{
		return;
	}
	if (iParam5 == 76)
	{
		return;
	}
	Global_35712[iParam0 /*5*/] = {vParam1};
	Global_35712[iParam0 /*5*/].f_3 = fParam4;
	Global_35712[iParam0 /*5*/].f_4 = iParam5;
}

int func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_game_timer();
	iVar1 = 0;
	while (iVar1 < Global_101154.f_6378.f_136)
	{
		if (Global_101154.f_6378[iVar1 /*15*/] == iParam0)
		{
			return func_104(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_101154.f_6378.f_764)
	{
		if (Global_101154.f_6378.f_651[iVar1 /*14*/] == iParam0)
		{
			return func_102(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_101154.f_6378.f_866)
	{
		if (Global_101154.f_6378.f_765[iVar1 /*10*/] == iParam0)
		{
			return func_99(iParam0, iVar0);
		}
		iVar1++;
	}
	return 6;
}

int func_99(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	
	Var0 = {func_101(iParam0)};
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!func_35(func_37()))
	{
		return 6;
	}
	iVar10 = false;
	if (is_bit_set(Var0.f_2, func_100()))
	{
		iVar10 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (iVar10)
	{
		if (Var0.f_3 < Global_101154.f_6378.f_919[func_100()])
		{
			return 5;
		}
	}
	if (Var0.f_6 != 144)
	{
		if (Global_36263[Var0.f_6] > iParam1)
		{
			return 3;
		}
	}
	if (Global_36262 > iParam1)
	{
		return 2;
	}
	return 1;
}

auto func_100()
{
	func_38();
	return Global_101154.f_1826.f_539.f_3549;
}

struct<10> func_101(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_866)
	{
		if (Global_101154.f_6378.f_765[iVar0 /*10*/] == iParam0)
		{
			return Global_101154.f_6378.f_765[iVar0 /*10*/];
		}
		iVar0++;
	}
	return Var1;
}

int func_102(int iParam0, int iParam1)
{
	struct<14> Var0;
	int iVar14;
	
	Var0 = {func_103(iParam0)};
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!func_35(func_37()))
	{
		return 6;
	}
	iVar14 = false;
	if (is_bit_set(Var0.f_2, func_100()))
	{
		iVar14 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (iVar14)
	{
		if (Var0.f_3 < Global_101154.f_6378.f_919[func_100()])
		{
			return 5;
		}
	}
	if (Global_36263[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_36262 > iParam1)
	{
		return 2;
	}
	return 1;
}

struct<14> func_103(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_764)
	{
		if (Global_101154.f_6378.f_651[iVar0 /*14*/] == iParam0)
		{
			return Global_101154.f_6378.f_651[iVar0 /*14*/];
		}
		iVar0++;
	}
	return Var1;
}

int func_104(int iParam0, int iParam1)
{
	struct<15> Var0;
	int iVar15;
	
	Var0 = {func_105(iParam0)};
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!func_35(func_37()))
	{
		return 1;
	}
	if (Global_36258 != -1)
	{
		if (Global_101154.f_6378[Global_36258 /*15*/] == iParam0)
		{
			return 0;
		}
	}
	iVar15 = false;
	if (is_bit_set(Var0.f_2, func_100()))
	{
		iVar15 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (iVar15)
	{
		if (Var0.f_3 < Global_101154.f_6378.f_919[func_100()])
		{
			return 5;
		}
	}
	if (Global_36263[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_36262 > iParam1)
	{
		return 2;
	}
	return 1;
}

struct<15> func_105(int iParam0)
{
	int iVar0;
	struct<15> Var1;
	
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (Global_101154.f_6378[iVar0 /*15*/] == iParam0)
		{
			return Global_101154.f_6378[iVar0 /*15*/];
		}
		iVar0++;
	}
	return Var1;
}

bool func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (Global_101154.f_6378[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_650)
	{
		if (Global_101154.f_6378.f_199[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_198)
	{
		if (Global_101154.f_6378.f_137[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_764)
	{
		if (Global_101154.f_6378.f_651[iVar0 /*14*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_866)
	{
		if (Global_101154.f_6378.f_765[iVar0 /*10*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_107(int iParam0)
{
	Vector3 vVar0;
	
	if (does_entity_exist(iParam0))
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
		if (!does_entity_exist(player_ped_id()) || has_entity_been_damaged_by_entity(iParam0, player_ped_id(), 1))
		{
			switch (func_108(vVar0, 1))
			{
				case 0:
					return 202;
					break;
				
				case 1:
					return 203;
					break;
				
				case 2:
					return 204;
					break;
				
				case 3:
					return 205;
					break;
				
				case 4:
					return 206;
					break;
			}
			return 202;
		}
	}
	return 0;
}

int func_108(Vector3 vParam0, int iParam1)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	fVar2 = 1E+07f;
	iVar3 = 5;
	iVar0 = 0;
	while (iVar0 <= 5 - 1)
	{
		if (Global_86814[iVar0 /*9*/].f_7 != 263)
		{
			if (!iParam3 || is_bit_set(Global_101154.f_5919.f_11[iVar0], false))
			{
				fVar1 = get_distance_between_coords(vParam0, Global_86814[iVar0 /*9*/].f_3, 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_109(int iParam0)
{
	if (iParam0 == 0)
	{
		return 2091854273;
	}
	else if (iParam0 == 1)
	{
		return 328868333;
	}
	else if (iParam0 == 2)
	{
		return -1813399915;
	}
	else if (iParam0 == 3)
	{
		return 465306446;
	}
	else if (iParam0 == 4)
	{
		return -816460512;
	}
	else if (iParam0 == 5)
	{
		return -702667427;
	}
	return -1;
}

int func_110(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 147)
	{
		return Global_101154.f_32575[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 147)
	{
		return 6;
	}
	if (iParam0 == 148)
	{
		return 6;
	}
	return 6;
}

int func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 3;
		while (iVar0 <= 147 - 1)
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

bool func_112(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {get_entity_coords(*iParam0, 1)};
	vVar3 = {get_entity_coords(player_ped_id(), 1)};
	if (vdist2(vVar0, vVar3) < 75f * 75f)
	{
		return false;
	}
	if (is_entity_on_screen(*iParam0))
	{
		return false;
	}
	set_entity_as_mission_entity(*iParam0, true, 1);
	delete_ped(iParam0);
	return true;
}

bool func_113(int iParam0, int iParam1)
{
	if (has_entity_been_damaged_by_entity(iParam0, player_ped_id(), 1))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, player_ped_id()))
	{
		return true;
	}
	if (iParam1)
	{
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			return true;
		}
		if (has_ped_received_event(iParam0, 122))
		{
			return true;
		}
	}
	return false;
}

int func_114(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_115(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_9(iParam3), 0);
}

void func_116(int iParam0, char* sParam1)
{
	sParam1 = sParam1;
	iLocal_288 = iParam0;
}

bool func_117()
{
	if (!func_119())
	{
		func_30(&uLocal_98, 0, player_ped_id(), "MICHAEL", 0, 1);
		switch (func_33(Global_91064))
		{
			case 0:
				func_30(&uLocal_98, 1, Global_91064, func_118(0), 0, 1);
				break;
			
			case 1:
				func_30(&uLocal_98, 2, Global_91064, func_118(1), 0, 1);
				break;
			
			case 2:
				func_30(&uLocal_98, 3, Global_91064, func_118(2), 0, 1);
				break;
			
			default:
				break;
		}
		func_3(&Global_91064);
		return true;
	}
	func_3(&Global_91064);
	if (iLocal_291 != 0)
	{
		if (!does_entity_exist(iLocal_290))
		{
			iLocal_290 = get_closest_object_of_type(vLocal_298 + vLocal_292, 1f, iLocal_291, 1, 0, 1);
			if (does_entity_exist(iLocal_290))
			{
				set_entity_coords(iLocal_290, vLocal_298 + vLocal_292, 1, false, 0, 1);
				set_entity_rotation(iLocal_290, Vector(fLocal_301, 0f, 0f) + vLocal_295, 2, 1);
				freeze_entity_position(iLocal_290, true);
			}
		}
	}
	return false;
}

char* func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "JIMMY";
			break;
		
		case 1:
			return "TRACEY";
			break;
		
		case 2:
			return "AMANDA";
			break;
		
		case 3:
			return "MAID";
			break;
		
		case 4:
			return "GARDENER";
			break;
		
		case 5:
			return "DENISE";
			break;
		
		case 6:
			return "LAMAR";
			break;
		
		case 7:
			return "STRETCH";
			break;
		
		case 10:
			return "NERVOUSRON";
			break;
		
		case 8:
			return "MICHAEL";
			break;
		
		case 9:
			return "TREVOR";
			break;
		
		case 11:
			return "PATRICIA";
			break;
		
		case 12:
			return "TREVORMOM";
			break;
		
		case 13:
			return "FLOYD";
			break;
		
		case 14:
			return "WADE";
			break;
	}
	return "NULL";
}

bool func_119()
{
	if (!is_player_switch_in_progress() || get_player_switch_type() == 3)
	{
		return false;
	}
	if (get_player_switch_state() > 8)
	{
		if (get_player_switch_state() != 11)
		{
			return false;
		}
		if (get_player_switch_state() == 11)
		{
			if (set_player_inverted_up() > 0)
			{
				if (_0x5B48A06DD0E792A5() > 100)
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool func_120(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	
	if (is_player_switch_in_progress())
	{
		if (get_player_switch_type() != 3)
		{
			if (get_player_switch_state() <= 2 && get_player_switch_state() != 1)
			{
				return true;
			}
		}
	}
	if (!is_player_switch_in_progress())
	{
		if (func_23(14))
		{
			return false;
		}
		if (_0x9689123E3F213AA5())
		{
			return false;
		}
		if (!func_122(iParam0, func_123()))
		{
			return false;
		}
		if (does_entity_exist(iParam1))
		{
			vVar0 = {get_entity_coords(iParam1, 0)};
			fVar3 = vdist(get_entity_coords(player_ped_id(), 0), vVar0);
			if (fVar3 > 250f)
			{
				if (!is_entity_dead(iParam1, 0))
				{
					if (!is_entity_on_screen(iParam1))
					{
						return false;
					}
				}
				else if (!is_sphere_visible(vVar0, 1.5f))
				{
					return false;
				}
			}
		}
		else if (iParam1 == func_121(Global_91064) && iParam1 != 0)
		{
			Global_91064 = 0;
		}
	}
	return true;
}

auto func_121(auto uParam0)
{
	return uParam0;
}

int func_122(auto uParam0, auto uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_123()
{
	func_38();
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

void func_124()
{
	if (!is_player_switch_in_progress())
	{
		if (is_screen_faded_out())
		{
			func_127();
		}
		return;
	}
	if (get_player_switch_type() == 3)
	{
		func_127();
		return;
	}
	func_125();
	if (Global_91066 > 0)
	{
		return;
	}
	_0x74DE2E8739086740();
}

void func_125()
{
	func_126(Global_91066 - 1);
}

void func_126(int iParam0)
{
	Global_91066 = iParam0;
}

void func_127()
{
	func_126(0);
}

void func_128()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_289 != 0)
	{
		request_vehicle_asset(iLocal_289, 3);
	}
	iVar0 = 0;
	iVar1 = false;
	while (!iVar1 && iVar0 < 400)
	{
		iVar1 = true;
		if (!does_entity_exist(Global_91064))
		{
			iVar1 = false;
		}
		if (iLocal_289 != 0)
		{
			if (!has_vehicle_asset_loaded(iLocal_289))
			{
				iVar1 = false;
			}
		}
		if (!iVar1)
		{
			iVar0++;
		}
		wait(0);
	}
	set_entity_as_mission_entity(Global_91064, true, 1);
	func_129(&Global_91064, Global_86614);
	set_ped_config_flag(Global_91064, 132, true);
	set_ped_config_flag(Global_91064, 317, true);
}

void func_129(auto uParam0, int iParam1)
{
	set_ped_can_be_targetted(*uParam0, false);
	set_ped_config_flag(*uParam0, 20, true);
	_set_ped_ragdoll_flag(*uParam0, 16);
	if (iParam1 != -86095805)
	{
		set_ped_relationship_group_hash(*uParam0, iParam1);
	}
}

void func_130()
{
	char* sVar0;
	struct<82> Var8;
	auto uVar106;
	auto uVar109;
	auto uVar110;
	auto uVar113;
	auto uVar114;
	auto uVar115;
	
	iLocal_97 = Global_90746;
	func_144(iLocal_97, &vLocal_298, &fLocal_301, &sVar0);
	switch (iLocal_97)
	{
		case 98:
			vLocal_302 = {-25f, -35f, 0f};
			fLocal_305 = 30f;
			fLocal_374 = 0.73f;
			break;
		
		case 99:
			vLocal_302 = {Vector(24.3224f, -700.7733f, -1306.836f) - vLocal_298};
			fLocal_305 = 40f;
			iLocal_288 = 2;
			break;
		
		case 100:
			vLocal_302 = {Vector(82.0206f + 1f, 272.6104f, -566.2225f) - vLocal_298};
			fLocal_305 = 30f;
			iLocal_288 = 2;
			break;
		
		case 101:
			vLocal_302 = {Vector(53.6418f + 1f, -217.321f, 77.2686f) - vLocal_298};
			fLocal_305 = 25f;
			iLocal_288 = 2;
			break;
		
		case 102:
			vLocal_302 = {Vector(102.0191f + 1f, 313.2252f, 412.1519f) - vLocal_298};
			fLocal_305 = 15f;
			iLocal_288 = 2;
			break;
		
		case 170:
			vLocal_302 = {Vector(37.8417f + 1f, -275.1926f, -616.7041f) - vLocal_298};
			fLocal_305 = 30f;
			break;
		
		case 171:
			vLocal_302 = {Vector(56.8469f + 1f, -125.1416f, -106.3491f) - vLocal_298};
			fLocal_305 = 25f;
			break;
		
		case 172:
			vLocal_302 = {Vector(56.8469f + 1f, -125.1416f, -106.3491f) - vLocal_298};
			fLocal_305 = 25f;
			break;
		
		case 94:
			vLocal_302 = {Vector(112.1615f + 1f, 328.301f, -16.8925f) - vLocal_298};
			fLocal_305 = 25f;
			break;
		
		case 152:
			vLocal_302 = {0f, 0f, 0f};
			fLocal_305 = 0f;
			StringCopy(&cLocal_354, "PROP_HUMAN_SEAT_SUNLOUNGER", 64);
			vLocal_370 = {1.358f, 2.385f, -0.608f};
			fLocal_373 = 160f;
			iLocal_291 = joaat("prop_patio_lounger1");
			vLocal_292 = {Vector(63.082f, 357.697f, -1352.644f) - Vector(64.08f, 355.1845f, -1353.791f)};
			vLocal_295 = {0f, 0f, 54.35f - 72f};
			break;
		
		case 151:
			vLocal_302 = {0f, 0f, 0f};
			fLocal_305 = 0f;
			iLocal_291 = joaat("prop_chateau_chair_01");
			vLocal_292 = {0.8706f, 2.0176f, -0.4948f};
			vLocal_295 = {0f, 0f, 0f};
			break;
		
		default:
			vLocal_302 = {get_random_float_in_range(-50f, 50f), get_random_float_in_range(-50f, 50f), 0f};
			fLocal_305 = vmag(vLocal_302) * 0.75f;
			break;
	}
	if ((iLocal_97 != 94 && iLocal_97 != 152) && iLocal_97 != 151)
	{
		Var8.f_11 = 12;
		Var8.f_31 = 49;
		Var8.f_81 = 2;
		if (func_133(0, iLocal_97, &Var8, &uVar106, &uVar109, &uVar110, &uVar113))
		{
			iLocal_289 = Var8;
		}
	}
	else
	{
		iLocal_289 = false;
	}
	if (iLocal_288 == 0)
	{
		func_131(iLocal_97, &cLocal_306, &cLocal_322, &cLocal_338, &uVar114, &uVar115);
		iLocal_288 = 0;
	}
	else
	{
		StringCopy(&cLocal_306, "", 64);
		StringCopy(&cLocal_322, "", 64);
		StringCopy(&cLocal_338, "", 64);
		iLocal_288 = 2;
	}
}

bool func_131(int iParam0, char* sParam1, char* sParam2, char* sParam3, auto uParam4, auto uParam5)
{
	*uParam4 = 9;
	*uParam5 = 8;
	switch (iParam0)
	{
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_REACT_Amanda", 64);
			return true;
			break;
		
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_EXIT_Amanda", 64);
			return true;
			break;
		
		case 79:
			func_132(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@SITTING", "IDLE", "EXIT_FORWARD");
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Jimmy", 64);
			StringCopy(sParam3, "EXIT_Jimmy", 64);
			return true;
			break;
		
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Amanda", 64);
			StringCopy(sParam3, "EXIT_Amanda", 64);
			return true;
			break;
		
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_amanda", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_amanda", 64);
			return true;
			break;
		
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_AMA", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_AMA", 64);
			return true;
			break;
		
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_RON", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_RON", 64);
			return true;
			break;
		
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_AMA", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_AMA", 64);
			return true;
			break;
		
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_JMY", 64);
			return true;
			break;
		
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_TRA", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_TRA", 64);
			return true;
			break;
		
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_AMA", 64);
			*uParam5 |= 262144;
			return true;
			break;
		
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_AMANDA", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_AMANDA", 64);
			return true;
			break;
		
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Jimmy", 64);
			return true;
			break;
		
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_AMA", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_AMA", 64);
			*uParam5 |= 262144;
			return true;
			break;
		
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_HOOKER", 64);
			StringCopy(sParam3, "EXIT_HOOKER", 64);
			return true;
			break;
		
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_JMY", 64);
			return true;
			break;
		
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_JMY", 64);
			return true;
			break;
		
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_AMA", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_AMA", 64);
			return true;
			break;
		
		case 203:
		case 206:
		case 207:
			if (func_131(205, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return true;
			}
			break;
		
		case 204:
			if (func_131(205, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return true;
			}
			break;
		
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE_ROT", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT_ROT", 64);
			return true;
			break;
		
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Tanisha", 64);
			StringCopy(sParam3, "Tanisha_Argue_Tanisha", 64);
			return true;
			break;
		
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_GIRL", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_GIRL", 64);
			return true;
			break;
		
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Hooker", 64);
			StringCopy(sParam3, "switch_ped_Hooker", 64);
			return true;
			break;
		
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_exit_lamar", 64);
			return true;
			break;
		
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_lamar", 64);
			return true;
			break;
		
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_lamar", 64);
			return true;
			break;
		
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_lamar", 64);
			return true;
			break;
		
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped_f_a", 64);
			return true;
			break;
		
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			return true;
			break;
		
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Bartender", 64);
			StringCopy(sParam3, "EXIT_Bartender", 64);
			return true;
			break;
		
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_BOUNCER", 64);
			StringCopy(sParam3, "EXIT_BOUNCER", 64);
			return true;
			break;
		
		case 289:
			func_132(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@PIER", "pier_lean_smoke_idle", "pier_lean_smoke_idle");
			return true;
			break;
		
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_NBR", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_NBR", 64);
			return true;
			break;
		
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_GENERIC", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_GENERIC", 64);
			return true;
			break;
		
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_BUSKER", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_BUSKER", 64);
			return true;
			break;
		
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_1_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_2_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Get_Along_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_floyd", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_floyd", 64);
			return true;
			break;
		
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_floyd", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_floyd", 64);
			return true;
			break;
		
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Pineapple_EXIT_FLOYD", 64);
			return true;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return false;
}

void func_132(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	StringCopy(sParam0, sParam3, 64);
	StringCopy(sParam1, sParam4, 64);
	StringCopy(sParam2, sParam5, 64);
}

int func_133(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	*uParam2.f_3 = 1000;
	*uParam2.f_1 = 0;
	*uParam2.f_84 = 255;
	*uParam2.f_85 = 255;
	*uParam2.f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = {Global_90747[iParam0 /*98*/]};
			if (Global_91042[iParam0] != 2)
			{
				if (is_point_in_angled_area(Global_91050[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, true))
				{
					if (Global_91042[iParam0] == 1)
					{
						*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
						*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
						if (vmag2(*uParam3) > 5f * 5f)
						{
							*uParam3 = {0f, 0f, 0f};
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
				*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
				if (vmag2(*uParam3) < 0.5f * 0.5f)
				{
					*uParam3 = {*uParam3 * Vector(1.5f, 1.5f, 1.5f)};
				}
			}
			else
			{
				*uParam3 = {0f, 0f, 0f};
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = {Global_90747[iParam0 /*98*/]};
			if (Global_91042[iParam0] != 2)
			{
				*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
				*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
				if (vmag2(*uParam3) < 0.5f * 0.5f)
				{
					*uParam3 = {*uParam3 * Vector(1.5f, 1.5f, 1.5f)};
				}
			}
			else
			{
				*uParam3 = {0f, 0f, 0f};
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = {Global_90747[iParam0 /*98*/]};
			if (Global_91042[iParam0] != 2)
			{
				*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
				*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
				if (vmag2(*uParam3) < 0.5f * 0.5f)
				{
					*uParam3 = {*uParam3 * Vector(1.5f, 1.5f, 1.5f)};
				}
			}
			else
			{
				*uParam3 = {0f, 0f, 0f};
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {37.43f, -23.81f, 0f};
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f)};
			*uParam4 = 1.27f - 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_133(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_133(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 5f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_135(iParam0, uParam2, 2);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("frogger");
			*uParam2.f_5 = 34;
			*uParam2.f_6 = 34;
			*uParam2.f_7 = 0;
			*uParam2.f_8 = 0;
			*uParam2.f_9 = 0;
			*uParam2.f_11[0] = 1;
			*uParam2.f_11[1] = 1;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 1;
			*uParam2.f_11[4] = 1;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam5 = {0f, 50f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f)};
			*uParam4 = 246.1684f - 90f;
			return 1;
			break;
		
		case 56:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = {Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f)};
			*uParam4 = 141.28f - 90.0339f;
			return 1;
			break;
		
		case 12:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("taxi");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam5 = {0f, 5f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 15f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 15f, 0f};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_133(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_135(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {21.6401f, 38.5601f, 1.9708f};
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = {0f, 50f, 0f};
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_135(iParam0, uParam2, 1);
			*uParam2.f_91 = 2;
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_135(iParam0, uParam2, 2);
			*uParam2.f_91 = 2;
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {-2.72f, 0.45f, 1f};
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = {Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f)};
			*uParam4 = 0.72f - 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = {Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f)};
			*uParam4 = 2.23f - 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = {Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f)};
			*uParam4 = -1f - 97.2736f;
			return 1;
			break;
		
		case 40:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {16.5182f, -8.5576f, -2.3291f};
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("polmav");
			*uParam2.f_11[0] = 1;
			*uParam2.f_11[1] = 1;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 1;
			*uParam2.f_11[4] = 1;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {16.5182f, -8.5576f, -2.3291f};
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {2.5f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {2.5f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f)};
			*uParam4 = 246.1684f - 90f;
			return 1;
			break;
		
		case 43:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f)};
			*uParam4 = 247.4806f - 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = {Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f)};
			*uParam4 = 253.776f - 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = {Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f)};
			*uParam4 = 2.62f - 299.0519f;
			return 1;
			break;
		
		case 47:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("cavalcade");
			*uParam2.f_5 = 0;
			*uParam2.f_6 = 0;
			*uParam2.f_7 = 0;
			*uParam2.f_8 = 0;
			*uParam2.f_9 = 0;
			StringCopy(uParam2.f_27, "22LJK483", 16);
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam5 = {0f, 10f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {-1.5f, 35f, 3f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {3.8721f, -5.9568f, 0f};
			*uParam4 = 164.2466f - 180f;
			return 1;
			break;
		
		case 50:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 10f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = {Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f)};
			*uParam4 = 310.4708f - 220.9554f;
			return 1;
			break;
		
		case 52:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {-2.9117f, -15.0499f, -0.3468f};
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = {Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f)};
			*uParam4 = 64.1848f - 180f;
			return 1;
			break;
		
		case 65:
		case 54:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("frogger2");
			*uParam2.f_5 = 40;
			*uParam2.f_6 = 0;
			*uParam2.f_7 = 0;
			*uParam2.f_8 = 0;
			*uParam2.f_9 = 0;
			*uParam2.f_11[0] = 1;
			*uParam2.f_11[1] = 1;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 1;
			*uParam2.f_11[4] = 1;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam2.f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = {5.5414f, -6.6035f, 1.0473f};
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = {5.7209f, -12.3958f, 1.0746f};
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
			*uParam4 = get_random_float_in_range(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_133(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("scorcher");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam5 = {1f, 12.5f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_133(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {5f, 20f, 0f};
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_133(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 30f, 0f};
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0.1f;
			*uParam5 = {0.1f, 0.1f, 0.1f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {-1.9002f, 1.205f, -0.3537f};
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_135(iParam0, uParam2, 1);
			*uParam5 = {0f, 0.1f, 0f};
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_133(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_133(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0.1f;
			*uParam5 = {0.1f, 0.1f, 0.1f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam5 = {0f, 0f, 0f};
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_133(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_133(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_133(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {3.2267f, 1.0966f, -0.354f};
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {-13.7322f, 1.8783f, 1.0593f};
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("tropic");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam2.f_11[0] = 0;
			*uParam2.f_11[1] = 0;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 0;
			*uParam2.f_11[4] = 0;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 0f, 0f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {15.4538f, -8.711f, 5.79f};
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_133(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-8.1f, -9.01f, 0.4439f};
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {18.8468f, 40.7721f, 0f};
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f)};
			*uParam4 = 177.259f - 180f - 69f;
			return 1;
			break;
		
		case 116:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {1.7826f, 12.2098f, -0.6964f};
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {11.8705f, -1.4684f, -1.6487f};
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {-13.1578f, 16.3962f, 0.6396f};
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {-21.0518f, 0.5037f, 0.4091f};
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {10.8971f, 2.0809f, -0.7983f};
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {79.9901f, -52.83f, -0.3533f};
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
			*uParam4 = get_random_float_in_range(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_133(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_133(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_133(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_133(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {2.4845f, 2.3286f, -0.383f};
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_133(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 15f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_133(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 40f, 0f};
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_135(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_133(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_133(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_133(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_133(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_133(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 15f, 0f};
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_133(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_133(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_133(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-13.2213f, 16.331f, 0f};
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_133(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {10.3876f, -10.3585f, -1.2183f};
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {1.0793f, 15.631f, 1.1744f};
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_133(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0.1f;
			*uParam5 = {0.1f, 0.1f, 0.1f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_133(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_133(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_135(iParam0, uParam2, 1);
			*uParam5 = {0f, 0.1f, 0f};
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_133(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_133(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_134(iParam0, uParam2, 2);
			*uParam2.f_91 = 2;
			*uParam3 = {-2.19f, -1.23f, 0f};
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam2.f_2 = 0f;
			*uParam3 = {-1.3547f, 2.1615f, -0.3723f};
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_133(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-4.2075f, 1.0943f, 0f};
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam2.f_2 = 0f;
			*uParam3 = {2.291f, 1.0879f, 0.0635f};
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("taxi");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {-0.9714f, 1.6112f, -0.2773f};
			*uParam4 = -7.0583f;
			*uParam5 = {Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f)};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("taxi");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f)};
			*uParam4 = 89.0026f - -1.5f;
			*uParam5 = {Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f)};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f)};
			*uParam4 = 357.1407f - 84.96f;
			return 1;
			break;
		
		case 216:
			if (func_133(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-2.1752f, -2.3781f, 0f};
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_133(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-3.9761f, 0.2542f, 0f};
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f)};
			*uParam4 = 162.098f - 109.0206f;
			return 1;
			break;
		
		case 192:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f)};
			*uParam4 = 302.182f - 105.981f;
			return 1;
			break;
		
		case 193:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f)};
			*uParam4 = 302.182f - 172.9187f;
			return 1;
			break;
		
		case 194:
			if (func_133(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {12.74f, 3.26f, 0f};
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_133(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-1.34f, 7.684f, 0f};
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.4055f, -1607.568f, 44.4802f) - Vector(28.2858f - 0.5f + 1.5f, -1607.286f, 2.8895f)};
			*uParam4 = 318.2674f - 310.879f - 180f;
			return 1;
			break;
		
		case 201:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f)};
			*uParam4 = 322.6286f - 130.879f;
			return 1;
			break;
		
		case 202:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {91.3579f, 18.1788f, -0.1911f};
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {12.5073f, -3.4625f, -0.3702f};
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_133(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {21.87f, -10.5f, 0f};
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_133(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f)};
			*uParam4 = 270.1767f - 160f - 180f;
			return 1;
			break;
		
		case 227:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {-19.8544f, -10.4863f, -0.0334f};
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {21.5897f, -6.8544f, 0.6015f};
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {-7.6041f, 0.1369f, 0.5812f};
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {-1.6f, 7.6802f, 0.6947f};
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {22.322f, -6.2034f, 0f};
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {-1.2901f, -5.5798f, -0.0357f};
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_133(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-4.0739f, 7.7692f, -0.2984f};
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_133(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-5.778f, -4.2397f, 0.9091f};
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_133(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {0.6968f, 1.1033f, 0.912f};
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 8f, 0.6f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_133(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_133(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_133(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam2.f_97 = 0;
				*uParam2 = joaat("faggio2");
				*uParam2.f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_134(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 8f, 0.6f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_133(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_133(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				*uParam2.f_97 = 0;
				*uParam2 = joaat("tropic");
				*uParam2.f_11[0] = 0;
				*uParam2.f_11[1] = 0;
				*uParam2.f_11[2] = 1;
				*uParam2.f_11[3] = 0;
				*uParam2.f_11[4] = 0;
				*uParam2.f_11[5] = 1;
				*uParam2.f_11[6] = 1;
				*uParam2.f_11[7] = 1;
				*uParam2.f_11[8] = 1;
			}
			else
			{
				*uParam2.f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = {Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f)};
			*uParam3.f_2 += 0.5f;
			*uParam4 = 340.0835f - 4.44f;
			*uParam3 = {Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f)};
			*uParam4 = 23.6441f + 90f;
			*uParam3 = {-4.0164f, 19.9594f, 0f};
			*uParam4 = 113.6465f;
			*uParam3 = {*uParam3 * Vector(1.1f, 1.1f, 1.1f)};
			return 1;
			break;
		
		case 247:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = {9.8707f, 13.0084f, 0f};
			*uParam4 = -114f - 43f + 133f;
			return 1;
			break;
		
		case 288:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = {-7.7078f, 23.9099f, 1.7307f};
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {-4.5662f, -3.2485f, 0.9455f - 1.7f};
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f)};
			*uParam4 = 315.9865f - 122.5269f;
			return 1;
			break;
		
		case 310:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {10.5999f, 3.3997f, 1.0212f};
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = {-13.2279f, -7.5348f, 0f};
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = {11.9596f, 0.345f, -1.0016f};
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = {3.424f, 7.6462f, 0.8227f};
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f)};
			*uParam4 = 14.0848f - 120f;
			return 1;
			break;
		
		case 257:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f)};
			*uParam4 = 144.9416f - 171.253f;
			return 1;
			break;
		
		case 258:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f)};
			*uParam4 = 130.9896f - 10.247f;
			return 1;
			break;
		
		case 314:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = {0f, 150f, 20f};
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(32.5629f, -387.5143f, -147.166f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 341.4322f - 133f;
			return 1;
			break;
		
		case 111:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(24.4283f, -689.1462f, -1306.782f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 214.6826f - 33f;
			return 1;
			break;
		
		case 153:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.3324f, 254.0631f, -708.9244f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 115.2022f - -176.25f;
			return 1;
			break;
		
		case 154:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.3324f, 254.0631f, -708.9244f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 115.2022f - -147.192f;
			return 1;
			break;
		
		case 165:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(35.0054f, -441.1681f, -1100.878f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 297.5568f - -144.622f;
			return 1;
			break;
		
		case 159:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(36.3852f, -199.5354f, -825.3141f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 29.4869f - -62.5f;
			return 1;
			break;
		
		case 160:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(36.2086f, -144.1027f, -730.8218f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 28.532f - 119f;
			return 1;
			break;
		
		case 167:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(31.7307f, -523.2257f, -1144.174f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 299.2956f - -22.32f;
			return 1;
			break;
		
		case 152:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(60.9436f, 314.6989f, -1421.8f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 335.4134f - 72f;
			return 1;
			break;
		
		case 157:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.469f, 255.3143f, -706.187f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 117.3069f - 37.27f;
			return 1;
			break;
		
		case 225:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.7165f, -1677.734f, 185.4888f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 54.2538f - -83.8f;
			return 1;
			break;
		
		case 218:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.3218f, -1405.159f, -17.556f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 91.3098f - -70.4124f;
			return 1;
			break;
		
		case 219:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(30.2611f, -1492.151f, -219.3172f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 139.2572f - -12f;
			return 1;
			break;
		
		case 220:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(25.3018f, -1811.693f, -22.6138f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 141.0423f - -117.356f;
			return 1;
			break;
		
		case 206:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(208.5337f, 773.6719f, 164.1308f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 136.3104f - -36f;
			return 1;
			break;
		
		case 207:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(108.9995f, 396.924f, -263.3745f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 284.4611f - -95.588f;
			return 1;
			break;
		
		case 274:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(139.5782f, 2030.446f, -1883.836f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 340.5746f - 9f;
			return 1;
			break;
		
		case 312:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(10.0296f, 6560.557f, -200.684f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 134.5505f - 110.5931f;
			return 1;
			break;
		
		case 271:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(6.4647f, -1083.751f, -1278.023f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 115.8919f - 26.3597f;
			return 1;
			break;
		
		case 248:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(102.4417f, 164.5124f, 325.8113f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 68.4108f - 10.77f;
			return 1;
			break;
		
		case 242:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(56.616f, -122.9896f, -1622.22f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 210.8653f - 13.7207f;
			return 1;
			break;
		
		case 254:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(53.0019f, -213.7796f, 172.442f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 250.3032f - -40f;
			return 1;
			break;
		
		case 287:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(17.3426f, -836.0328f, -887.9977f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 270.8607f - -81f;
			return 1;
			break;
		
		case 286:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(4.8359f, -1182.704f, -1264.218f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 298.4328f - -150f;
			return 1;
			break;
		
		case 239:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(104.8218f, 289.0073f, -80.4564f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 247.6446f - -122f;
			return 1;
			break;
		
		case 243:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.2762f, -1477.282f, 434.9171f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 228.6353f - 18f;
			return 1;
			break;
		
		case 244:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.2762f, -1477.282f, 434.9171f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 228.6353f - -51f;
			return 1;
			break;
		
		case 249:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(103.1881f, 177.7729f, 288.977f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 68.9831f - 138f - 180f;
			return 1;
			break;
		
		case 273:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(32.7794f, -432.4635f, -161.4589f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 340.0368f - -153f;
			return 1;
			break;
		
		case 92:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(202.1143f, 828.3607f, -806.8813f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 101.1612f - -54.347f;
			return 1;
			break;
		
		case 103:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(12.0174f, -1108.081f, -1724.72f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 319.8931f - 143.4931f;
			return 1;
			break;
		
		case 109:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(10.2248f, -628.4899f, -1859.505f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 229.0784f - 99f;
			return 1;
			break;
		
		case 81:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(53.1469f, 90.4242f, -1393.442f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 123.1782f - -45f;
			return 1;
			break;
		
		case 95:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(101.921f, 186.1865f, 370.5876f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 159.7861f - 70f;
			return 1;
			break;
		
		case 97:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(45.9871f, -188.5636f, -1391.156f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 36.5172f - -45f;
			return 1;
			break;
		
		case 134:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(46.0567f, 3076.742f, 2001.918f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 328.101f - -33.128f;
			return 1;
			break;
		
		case 88:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(60.9442f, 314.7191f, -1421.821f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 336.5938f - -132f;
			return 1;
			break;
		
		case 306:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(37.4888f, 5643.726f, -569.3535f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 296.1685f - get_heading_from_vector_2d(7.4998f, -7.4995f);
			return 1;
			break;
		
		case 307:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(47.4526f, 4717.728f, -1555.593f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 236.223f - get_heading_from_vector_2d(-10.6345f, -0.7246f);
			return 1;
			break;
		
		case 308:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(22.7549f, 4629.148f, -1553.861f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 332.7842f - get_heading_from_vector_2d(3.4271f, 13.6787f);
			return 1;
			break;
		
		case 278:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(35.9161f, -1009.745f, 631.8275f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 98.8128f - -33.77f;
			return 1;
			break;
		
		case 279:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(234.6825f, 900.8749f, -111.9033f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 6.1087f - 155.68f;
			return 1;
			break;
		
		case 240:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(33.5351f, 3636.151f, 1546.323f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 298.4009f - -4.124f;
			return 1;
			break;
		
		case 241:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(30.512f, 6439.667f, -179.4242f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 225.5593f - 108f;
			return 1;
			break;
		
		case 264:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.2977f, -1390.545f, 486.7419f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 178.298f - -90f;
			return 1;
			break;
		
		case 266:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(10.5662f, 143.2342f, -3052.895f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 85.3429f - 68.8227f;
			return 1;
			break;
		
		case 267:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(39.9155f, 4934.08f, 2202.375f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 314.2654f - 56.2037f;
			return 1;
			break;
		
		case 269:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.149f, -782.0952f, 401.2502f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 179.9905f - -106.6605f;
			return 1;
			break;
		
		case 246:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(3.3919f, -1534.507f, -1195.256f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 305.8221f - -165f;
			return 1;
			break;
		
		case 263:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(12.8792f, -1241.213f, -573.3765f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 316.9941f - -171f;
			return 1;
			break;
		
		case 259:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(4.0002f, -1298.539f, -724.429f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 230.5715f - -32.488f;
			return 1;
			break;
		
		case 260:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(61.203f, 250.8387f, -1309.114f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 10.7756f - -29.093f;
			return 1;
			break;
		
		case 261:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.764f, 60.3233f, 917.6678f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 148.021f - 229.6085f;
			return 1;
			break;
		
		case 270:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {Vector(350f, 8588f, 2919f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = get_random_float_in_range(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_135(iParam0, uParam2, 0);
			*uParam3 = {-48.5171f, 28.4211f, 3.0057f};
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_134(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	
	*uParam1.f_88 = 1;
	*uParam1.f_84 = 255;
	*uParam1.f_85 = 255;
	*uParam1.f_86 = 255;
	*uParam1.f_97 = 1;
	*uParam1.f_3 = 1000;
	*uParam1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101154.f_7775.f_99.f_58[128] && !Global_101154.f_7775.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 3f;
					*uParam1.f_4 = 0;
					*uParam1.f_9 = 1;
					*uParam1.f_11[0] = 1;
					StringCopy(uParam1.f_27, "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14.9f;
					*uParam1.f_5 = 43;
					*uParam1.f_6 = 43;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_9 = 0;
					StringCopy(uParam1.f_27, "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14f;
					*uParam1.f_5 = 32;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "BETTY 32", 16);
					if (Global_101154.f_7775.f_99.f_58[119])
					{
						*uParam1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101154.f_7775.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 6f;
					*uParam1.f_5 = 53;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 59;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 0f;
					*uParam1.f_5 = 111;
					*uParam1.f_6 = 111;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_10 = 1;
					StringCopy(uParam1.f_27, "FC1988", 16);
					*uParam1.f_11[0] = 1;
					*uParam1.f_11[1] = 1;
					*uParam1.f_11[2] = 1;
					*uParam1.f_11[3] = 1;
					*uParam1.f_11[4] = 1;
					*uParam1.f_11[5] = 1;
					*uParam1.f_11[6] = 1;
					*uParam1.f_11[7] = 1;
					*uParam1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_135(int iParam0, auto uParam1, int iParam2)
{
	if (Global_90747[iParam0 /*98*/] == 0)
	{
		func_134(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("blimp"))
	{
		func_134(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (func_143(iParam0))
	{
		func_134(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_boat(Global_90747[iParam0 /*98*/]))
	{
		func_134(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_plane(Global_90747[iParam0 /*98*/]))
	{
		func_134(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_heli(Global_90747[iParam0 /*98*/]))
	{
		func_134(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_train(Global_90747[iParam0 /*98*/]))
	{
		func_134(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (iParam2 == 1)
	{
		if (!is_this_model_a_car(Global_90747[iParam0 /*98*/]))
		{
			func_134(iParam0, uParam1, iParam2);
			*uParam1.f_91 = iParam2;
			return true;
		}
	}
	else if (iParam2 == 2)
	{
		if (!is_this_model_a_bike(Global_90747[iParam0 /*98*/]))
		{
			func_134(iParam0, uParam1, iParam2);
			*uParam1.f_91 = iParam2;
			return true;
		}
	}
	if (!func_136(Global_90747[iParam0 /*98*/], 0))
	{
		func_134(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (iParam2 != 0)
	{
		func_134(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		if (Global_90747[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = {Global_90747[iParam0 /*98*/]};
			*uParam1.f_91 = 0;
			return false;
		}
	}
	else
	{
		func_134(iParam0, uParam1, 1);
		*uParam1.f_91 = 1;
		if (Global_90747[iParam0 /*98*/] == *uParam1)
		{
			func_134(iParam0, uParam1, 1);
			*uParam1.f_91 = 1;
			return true;
		}
		func_134(iParam0, uParam1, 2);
		*uParam1.f_91 = 2;
		if (Global_90747[iParam0 /*98*/] == *uParam1)
		{
			func_134(iParam0, uParam1, 2);
			*uParam1.f_91 = 2;
			return true;
		}
		*uParam1 = {Global_90747[iParam0 /*98*/]};
		*uParam1.f_91 = 0;
		return false;
	}
	func_134(iParam0, uParam1, iParam2);
	*uParam1.f_91 = iParam2;
	return true;
}

bool func_136(int iParam0, int iParam1)
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
		if (!func_142())
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
		if ((((!func_141() && !func_140()) && !func_139()) && !func_138()) && !func_142())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_139())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_137(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_137(int iParam0)
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

bool func_138()
{
	return false;
}

bool func_139()
{
	return true;
}

bool func_140()
{
	return true;
}

bool func_141()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_142()
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

bool func_143(int iParam0)
{
	if (Global_90747[iParam0 /*98*/] == joaat("blimp") || Global_90747[iParam0 /*98*/] == joaat("blimp2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("submersible") || Global_90747[iParam0 /*98*/] == joaat("submersible2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("freight"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("packer"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("asea2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("burrito2") || Global_90747[iParam0 /*98*/] == joaat("fbi2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("entityxf") && !Global_101154.f_7775.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("cheetah") && !Global_101154.f_7775.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("policeb") && !Global_101154.f_7775.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("ztype") && !Global_101154.f_7775.f_330[9 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("polmav") && !Global_101154.f_7775.f_330[9 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("jb700") && !Global_101154.f_7775.f_330[10 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("monroe") && !Global_101154.f_7775.f_330[11 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == 1938952078)
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("handler"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("monroe"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("phantom"))
	{
		return true;
	}
	if (((Global_90747[iParam0 /*98*/] == joaat("gauntlet") && !Global_101154.f_7775.f_330[80 /*6*/]) && !Global_101154.f_7775.f_330[81 /*6*/]) && !Global_101154.f_7775.f_330[82 /*6*/])
	{
		return true;
	}
	return false;
}

bool func_144(int iParam0, auto uParam1, auto uParam2, char* sParam3)
{
	int iVar0;
	
	if (func_146(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return false;
				break;
			
			case 1:
				func_145(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = {Global_86814[iVar0 /*9*/].f_3};
					*uParam2 = Global_86814[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return true;
				}
				else
				{
					*uParam1 = {Global_86814[0 /*9*/].f_3};
					*uParam2 = Global_86814[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return true;
				}
				break;
			
			case 2:
				*uParam1 = {Global_89454[0 /*109*/].f_4};
				*uParam2 = Global_89454[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return true;
				break;
			
			case 3:
				*uParam1 = {Global_89454[1 /*109*/].f_4};
				*uParam2 = Global_89454[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return true;
				break;
			
			case 4:
				*uParam1 = {Global_89454[2 /*109*/].f_4};
				*uParam2 = Global_89454[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return true;
				break;
			
			case 5:
				*uParam1 = {Global_101154.f_1826.f_539.f_1528[0 /*3*/] + Vector(-1f, 0f, 0f)};
				*uParam2 = Global_101154.f_1826.f_539.f_1538[0];
				StringCopy(sParam3, "", 32);
				return true;
				break;
			
			case 6:
				*uParam1 = {Global_101154.f_1826.f_539.f_1528[1 /*3*/] + Vector(-1f, 0f, 0f)};
				*uParam2 = Global_101154.f_1826.f_539.f_1538[1];
				StringCopy(sParam3, "", 32);
				return true;
				break;
			
			case 7:
				*uParam1 = {Global_101154.f_1826.f_539.f_1528[2 /*3*/] + Vector(-1f, 0f, 0f)};
				*uParam2 = Global_101154.f_1826.f_539.f_1538[2];
				StringCopy(sParam3, "", 32);
				return true;
				break;
		}
		*uParam1 = {Global_89782[iParam0 /*3*/]};
		return true;
	}
	return false;
}

int func_145(auto uParam0)
{
	auto uVar0;
	Vector3 vVar1;
	Vector3 fVar4;
	int iVar5;
	Vector3 vVar6;
	Vector3 fVar9;
	
	uVar0 = Global_101154.f_1826.f_539.f_3551;
	vVar1 = {Global_101154.f_1826.f_539.f_1528[uVar0 /*3*/]};
	if (func_114(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = {get_entity_coords(player_ped_id(), 0)};
	}
	*uParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (is_bit_set(Global_101154.f_5919.f_11[iVar5], false))
		{
			vVar6 = {Global_86814[iVar5 /*9*/].f_3};
			fVar9 = vdist(vVar1, vVar6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*uParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *uParam0 != 5;
}

int func_146(int iParam0, auto uParam1, char* sParam2)
{
	Vector3 vVar0;
	int iVar3;
	auto uVar4;
	float fVar7;
	Vector3 vVar8;
	Vector3 vVar11;
	Vector3 vVar14;
	Vector3 vVar17;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			func_145(&iVar3);
			if (iVar3 < 5)
			{
				*uParam1 = Global_86814[iVar3 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_86814[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = Global_89454[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = Global_89454[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = Global_89454[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = Global_101154.f_1826.f_539.f_1538[0];
			StringCopy(sParam2, func_150(Global_101154.f_1826.f_539.f_1542[0]), 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = Global_101154.f_1826.f_539.f_1538[1];
			StringCopy(sParam2, func_150(Global_101154.f_1826.f_539.f_1542[1]), 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = Global_101154.f_1826.f_539.f_1538[2];
			StringCopy(sParam2, func_150(Global_101154.f_1826.f_539.f_1542[2]), 32);
			return 1;
			break;
		
		case 11:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_146(8, uParam1, sParam2);
			break;
		
		case 10:
			return func_146(8, uParam1, sParam2);
			break;
		
		case 13:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 14:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 15:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 12:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 16:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 17:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 18:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 19:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 20:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 22:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 74:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 23:
			return func_146(208, uParam1, sParam2);
			break;
		
		case 24:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 67:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 25:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 26:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 27:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 28:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 58:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 59:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 60:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 38:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 40:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 42:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 43:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 44:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 45:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 47:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 49:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 48:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 124:
			vVar0 = {-803.734f, 168.148f, 76.3542f};
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 50:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 51:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 52:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 66:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 54:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 55:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 56:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 57:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 61:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 62:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 63:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 69:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 64:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 65:
			if (func_149(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 234:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 316:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 315:
			*uParam1 = 41.654f - 180f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 75:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 76:
			*uParam1 = 181.8927f - 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 79:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = -48.53f + 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 82:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 83:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 84:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 87:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 89:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 90:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 91:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 92:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 96:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 98:
			*uParam1 = -150.6148f + 0.0095f;
			*uParam1 += 0.0004f;
			*uParam1 += 0.0015f;
			*uParam1 += 0.0002f;
			*uParam1 += -0.0009f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 100:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 101:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 103:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 106:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 112:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 135:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 136:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 137:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 138:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 139:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 140:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 143:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 144:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 145:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 146:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 147:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 148:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 149:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 150:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 117:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 118:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 119:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 121:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 122:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 126:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 127:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 128:
			*uParam1 = 30f + 180f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 129:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 130:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 131:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 132:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 133:
			*uParam1 = 226.5579f - 270f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 134:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 153:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 154:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 155:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 156:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 157:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 158:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 159:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 161:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 165:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 166:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 167:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 168:
			if (func_147(0, 25, &uVar4, &fVar7))
			{
				*uParam1 = fVar7 + 222.8314f;
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 170:
			*uParam1 = -103.8158f + 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 171:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 173:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 172:
			*uParam1 = -30.185f;
			*uParam1 += 0.003f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 174:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 178:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 179:
			*uParam1 = -16.0627f + 180f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 181:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 183:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 184:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 185:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 186:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 189:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 191:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 196:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 192:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 193:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 194:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 195:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 198:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 199:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 200:
			*uParam1 = 310.879f - 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 201:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 202:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 204:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 205:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 207:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 209:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 210:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 212:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 214:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 215:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 221:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 222:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 223:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 224:
			return func_146(222, uParam1, sParam2);
			break;
		
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 227:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 229:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 230:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 218:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 220:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 225:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 231:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 232:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 233:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 240:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 242:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 245:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 248:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 249:
			*uParam1 = 138f - 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 251:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 252:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 255:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 265:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 266:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 267:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 269:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 271:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 272:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 275:
			*uParam1 = 277.613f - 360f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 276:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 277:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 278:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 279:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 280:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 281:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 282:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 283:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 284:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 285:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 257:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 258:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 259:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 260:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 261:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 289:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 292:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 293:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 294:
			return func_146(293, uParam1, sParam2);
			break;
		
		case 295:
			return func_146(292, uParam1, sParam2);
			break;
		
		case 299:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 300:
			return func_146(303, uParam1, sParam2);
			break;
		
		case 301:
			return func_146(303, uParam1, sParam2);
			break;
		
		case 302:
			return func_146(303, uParam1, sParam2);
			break;
		
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 296:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 297:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 304:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 305:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		
		case 306:
			vVar8 = {-7.4998f, 7.4995f, -0.5258f};
			*uParam1 = get_heading_from_vector_2d(-vVar8.x, -vVar8.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 307:
			vVar11 = {10.6345f, 0.7246f, 1.2508f};
			*uParam1 = get_heading_from_vector_2d(-vVar11.x, -vVar11.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 308:
			vVar14 = {-3.4271f, -13.6787f, -1.4107f};
			*uParam1 = get_heading_from_vector_2d(-vVar14.x, -vVar14.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 309:
			vVar17 = {-19.6582f, 7.896f, 0.1334f};
			*uParam1 = get_heading_from_vector_2d(-vVar17.x, -vVar17.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 310:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 312:
			*uParam1 = 103.2841f + 88.7571f / 2f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 313:
			*uParam1 = -177f + 180f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 314:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_147(int iParam0, int iParam1, auto uParam2, auto uParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {13.904f, 1.193f, 0.7f};
					*uParam3 = -144f;
					return 1;
					break;
				
				case 1:
					if (func_147(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, -1.1731f, 0.809f)};
						*uParam3 += 456.7661f - 360f;
						return 1;
					}
					break;
				
				case 2:
					*uParam2 = {Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = 16f - 222.8314f + 360f;
					return 1;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {10.9793f, -5.9f, 4.6f};
					*uParam3 = 163.0716f;
					return 1;
					break;
				
				case 1:
					if (func_147(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, 0.25f, -0.6f)};
						*uParam3 += 0f;
						return 1;
					}
					break;
				
				case 2:
					if (func_147(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, -0.5f, -1.2f)};
						*uParam3 += 0f;
						return 1;
					}
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = {Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = 16f + 90f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = {6.8878f, -5.5247f, 1.5228f};
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {4.1937f, -9.0309f, 4.5877f};
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {4.4577f, -9.6399f, 4.5876f};
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {3.799f, -9.41f, 4.5877f};
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_147(0, 5, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, 0f, 0f)};
						*uParam3 += 0f;
						return 1;
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {12.552f, 4.373f, 4.6f + 1f};
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {-0.4395f, -11.0022f, 0.0747f};
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {5.5001f, -12.4406f, 4.6f};
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {3.5f, -9.1f, 4.6f};
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {0.849f, 1.575f, 0f};
					*uParam3 = 272.857f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = {8.183f, -3.0467f, 5.5876f};
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = {9.383f, -3.3887f, 5.73f};
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = {Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = -159.23f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = {Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = -159.23f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {4.488f, -9.098f, 5.4864f};
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {9.04f, 5.71f, 1.44f};
					*uParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {3.25f, -9.53f, 4.588f};
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {Vector(0f, -11.0022f, -0.4395f) + Vector(0f, get_random_float_in_range(-0.5f, 0.5f), get_random_float_in_range(-0.5f, 0.5f))};
					*uParam3 = 306f + get_random_float_in_range(10f, 10f);
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f)};
					*uParam2 = {*uParam2 * Vector(0.95f, 0.95f, 0.95f)};
					*uParam3 = get_heading_from_vector_2d(*uParam2, *uParam2.f_1);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = 26.087f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = {Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = 13f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = {Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = -28.7112f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {27.9648f, 8.3766f, 0.7f};
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f)};
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {-0.3142f, -10.9926f, 0.0747f};
					*uParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {10.3f, -6.5f, 4.6f};
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_147(1, 32, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, 0f, 0f)};
						*uParam3 += 0f;
						return 1;
					}
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {8.505f, -10.9717f, 4.6019f};
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {12.7165f, 4.7109f, 4.6f + 1f};
					*uParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {9.0529f, -8.9175f, 1.6907f};
					*uParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {8.4799f, -7.5315f, 0.682f};
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {9.352f, -3.356f, 5.7338f};
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {8.3003f, -10.3127f, 4.5874f};
					*uParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {10.76f, -5.95f, 4.59f};
					*uParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {9.6691f, -7.6405f, 0.6817f};
					*uParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {1.228f, 4.044f, 0.7665f};
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {10.2365f, -7.6073f, 6.2761f};
					*uParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {8.161f, -7.562f, 2.17f};
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {10.7668f, -7.8757f, 5.5559f};
					*uParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {10.6257f, -9.4927f, 5.5876f};
					*uParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_147(iParam0, 26, uParam2, uParam3);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = {8.4451f, 3.1568f, 1.47f};
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {9.0477f, -7.9397f, 0.6817f};
					*uParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {0f, 0f, 0f};
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {21.7f, 9f, 1.7029f};
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {1.3278f, 1.534f, 0f};
					*uParam3 = 159.72f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {-3.0265f, 1.7627f, 0.1273f};
					*uParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {15.2374f, 8.723f, 1.4495f};
					*uParam3 = 205.677f;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {28.7f, 8.8241f, 0.6f};
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {Vector(1.1936f, -9.0107f, 9.0567f) + Vector(0.03f - 0.02f, 0f, 0f)};
					*uParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {Vector(5.2891f, 2.0403f, -2.8213f) + Vector(0.03f - 0.05f, 0f, 0f)};
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = {5.5782f, 5.7755f, 3.84f};
					*uParam3 = 311.4f;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = {5.5782f, 5.7755f, 3.8418f};
					*uParam3 = 306.6f;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = {5.8092f, 5.7965f, 3.85f};
					*uParam3 = 337.4f;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {13.3221f, 0.0684f, 0.6817f};
					*uParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		
		case 60:
			if (func_147(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = {*uParam2 + Vector(0f, get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f))};
				*uParam3 += get_random_float_in_range(-10f, 10f);
				return 1;
			}
			break;
		
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {-2.235f, 1.725f, 4.5877f};
					*uParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = -158f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f)};
					*uParam3 = -164f - 222.8314f + 360f;
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = {7.394f, 5.368f, 1.451f};
					*uParam3 = 235.0656f;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = {1.0704f, -1.4624f, 0.999f};
					*uParam3 = 157.44f;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {14.8186f, 6.8253f, 0.5f};
					*uParam3 = 87.3368f;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {13.6486f, 6.2253f, 0.45f};
					*uParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		
		case 77:
			if (func_147(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = {*uParam2 + Vector(0f, 0f, 0f)};
				*uParam3 += 0f;
				return 1;
			}
			break;
		
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {16.319f, -1.375f, 0.6817f};
					*uParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {-0.39f, 3.27f, 0f};
					*uParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {15.0213f, 6.9622f, 1.39f};
					*uParam3 = 142.889f;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = {15.128f, 6.842f, 0.4524f};
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {-10.9019f, -23.8349f, -2.1f};
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {-10.9937f, -24.9005f, -2.18f};
					*uParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {31.7401f, -1.0943f, 0.6822f};
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {-27.1728f, -3.75f, -1.626f};
					*uParam3 = 147f + 90f;
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {14.7722f, -10.9336f, -0.537f};
					*uParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {-17.2536f, 2.451f, -0.6f};
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = {23.9716f, -20.3533f, -3.18f};
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = {3.1416f, -2.0799f, -0.0145f};
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = {3.2746f, -4.1995f, -0.0144f};
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = {2.983f, -4.094f, 0.4629f};
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = {5.5235f, 2.9133f, 0.7288f};
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = {Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f)};
					*uParam3 = 84.7009f - 188.5817f;
					return 1;
					break;
				
				case 7:
					*uParam2 = {Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f)};
					*uParam3 = 90.6417f - 188.5817f;
					return 1;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {2.0126f, 0.3422f, -0.0086f};
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {1.2931f, 1.4476f, 1.0127f};
					*uParam3 = 61.7525f;
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {0.0158f, 1.4182f, 0.9913f};
					*uParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {-3.467f, 0.074f, 0f};
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {-2.1014f, -5.4089f, -0.013f};
					*uParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {-2.802f, -6.3295f, -0.01f};
					*uParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = {-2.156f, -4.9564f, 1.4886f};
					*uParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = {7.2656f, 3.022f, -0.9061f};
					*uParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = {0.5066f, 1.6992f, 0.0168f};
					*uParam3 = 115.77f;
					return 1;
					break;
			}
			break;
		
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = {-0.2121f, -6.2791f, -0.0089f};
					*uParam3 = 114.3391f;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = {8.2458f, -0.7136f, -0.2503f};
					*uParam3 = 252.2687f;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = {2.334f, 1.6889f, 0.586f};
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = {-0.6331f, 1.2093f, -0.0086f};
					*uParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = {-3.887f, -0.166f, 0f};
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = {3.5179f, 9.1355f, -1f};
					*uParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = {Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f)};
					*uParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {10.2823f, 2.2595f, -1.0742f};
					*uParam3 = 170.2796f - 180f;
					return 1;
					break;
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {1.077f, -5.1446f, 0.9904f};
					*uParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {-12.903f, -6.623f, -0.0406f};
					*uParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = {10.5514f, 5.393f, -0.0998f};
					*uParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = {0.9794f, -0.3043f, 0f};
					*uParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = {11.9759f, 1f, -1.0728f};
					*uParam3 = 238.9422f;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = {-0.576f, 1.671f, 0.601f};
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = {-0.6532f, 0.9556f, -0.0087f};
					*uParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {-0.18f, -4.173f, 0.9981f};
					*uParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {6.5937f, 0.3521f, 1f};
					*uParam3 = 119.4f;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_101154.f_17223[2] == 299)
					{
						*uParam2 = {Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f)};
						*uParam3 = 34.661f - 90.6729f;
						return 1;
					}
					else if (((Global_101154.f_17223[2] == 300 || Global_101154.f_17223[2] == 301) || Global_101154.f_17223[2] == 302) || Global_101154.f_17223[2] == 303)
					{
						*uParam2 = {Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f)};
						*uParam3 = 32f - 90.6729f;
						return 1;
					}
					if (func_148())
					{
						*uParam2 = {Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f)};
						*uParam3 = 34.661f - 90.6729f;
						return 1;
					}
					else
					{
						*uParam2 = {Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f)};
						*uParam3 = 32f - 90.6729f;
						return 1;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f)};
					*uParam3 = 102f - 90.6729f;
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {-2.8352f, 0.0552f, 0f};
					*uParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_147(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = {*uParam2 + Vector(0f, get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f))};
						*uParam3 += get_random_float_in_range(-10f, 10f);
						return 1;
					}
					break;
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {-7.213f, -1.4536f, 0.9981f};
					*uParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {Vector(9.6327f + 1f, -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f)};
					*uParam3 = get_random_float_in_range(0f, 360f);
					return 1;
					break;
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {5.24f, 6.217f, 0.998f};
					*uParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {6.6447f, 0.7635f, 1.0507f};
					*uParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = {3.968f, -1.04f, 0f};
					*uParam3 = 214.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = {4.617f, -1.1314f, 0f};
					*uParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		
		case 137:
		case 138:
			*uParam2 = {0f, 0f, 0f};
			*uParam3 = 0f;
			return 0;
			break;
		
		case 140:
		case 141:
			*uParam2 = {0f, 0f, 0f};
			*uParam3 = 0f;
			return 0;
			break;
		
		default:
			*uParam2 = {get_random_float_in_range(-10f, 10f), get_random_float_in_range(-10f, 10f), 0f};
			*uParam3 = get_random_float_in_range(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = {get_random_float_in_range(-10f, 10f), get_random_float_in_range(-10f, 10f), 0f};
	*uParam3 = get_random_float_in_range(0f, 360f);
	return 0;
}

bool func_148()
{
	if (is_bit_set(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

int func_149(int iParam0, auto uParam1, auto uParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = {115.1569f, -1286.684f, 28.2613f};
			*uParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
			*uParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_149(8, uParam1, uParam2);
			break;
		
		case 10:
			return func_149(8, uParam1, uParam2);
			break;
		
		case 13:
			*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
			*uParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = {1432.34f, -1887.383f, 70.5768f};
			*uParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = {1666.204f, 1967.25f, 143.3213f};
			*uParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = {-1440.22f, -127.02f, 50f};
			*uParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = {135.055f, -1759.64f, 27.8957f};
			*uParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = {687.6992f, -1744.03f, 28.3624f};
			*uParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = {56.5117f, -744.6122f, 43.1356f};
			*uParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = {506.485f, -1884.967f, 24.764f};
			*uParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = {1555.958f, 953.6136f, 77.2063f};
			*uParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = {220.72f, -64.4177f, 68.2922f};
			*uParam2 = 250.4535f - 360f;
			return 1;
			break;
		
		case 74:
			*uParam1 = {2048.07f, 3840.84f, 34.2238f};
			*uParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = {-464.22f, -1592.98f, 38.73f};
			*uParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
			*uParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = {-9f, 508.1f, 173.6278f};
			*uParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = {72.2278f, -1464.68f, 28.2915f};
			*uParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = {763f, -906f, 24.2312f};
			*uParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = {257.9167f, -1120.786f, 28.3684f};
			*uParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = {422.5858f, -978.6332f, 69.7073f};
			*uParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = {294.8521f, 882.9366f, 197.8527f};
			*uParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
			*uParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = {1495.595f, -1848.821f, 70.2075f};
			*uParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = {2897.554f, 4032.241f, 50.1419f};
			*uParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*uParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*uParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = {1397f, 3725.8f, 33.0673f};
			*uParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
			*uParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = {709.0244f, -2916.479f, 5.0589f};
			*uParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = {643.5248f, -2917.325f, 5.1337f};
			*uParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = {595.2742f, -2819.183f, 5.0559f};
			*uParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = {314.4171f, 965.207f, 208.4024f};
			*uParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = {3321.537f, 4975.455f, 25.9097f};
			*uParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
			*uParam2 = 42f + 180f;
			return 1;
			break;
		
		case 50:
			*uParam1 = {-731.3261f, 106.68f, 54.7169f};
			*uParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
			*uParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = {736.9869f, -2050.678f, 28.2718f};
			*uParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = {262.5499f, -2540.15f, 4.8433f};
			*uParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
			*uParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = {118.0988f, -1264.916f, 32.3637f};
			*uParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = {37.5988f, -1351.52f, 28.2954f};
			*uParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = {-558.2693f, 261.1167f, 82.07f};
			*uParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = {-196.9999f, 507.9999f, 132.477f};
			*uParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = {1312.01f, -1645.87f, 51.2f};
			*uParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
			*uParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = {2091.258f, 4714.852f, 40.1936f};
			*uParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = {1762.59f, 3247.212f, 40.735f};
			*uParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = {1764.013f, 3252.902f, 40.735f};
			*uParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = {0f, 0f, 0f};
			*uParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_150(int iParam0)
{
	switch (iParam0)
	{
		case 2014101067:
			return "v_chopshop";
			break;
		
		case 551019620:
			return "v_franklins";
			break;
		
		case 223682799:
			return "v_franklinshouse";
			break;
		
		case 2081281344:
			return "v_methlab";
			break;
		
		case -1021412233:
			return "v_michael";
			break;
		
		case 1314234446:
			return "v_strip3";
			break;
		
		case 1681413451:
			return "v_trailer";
			break;
		
		case 1724779208:
			return "v_Trevors";
			break;
	}
	return "";
}

void func_151()
{
	if (iLocal_289 != 0)
	{
		remove_vehicle_asset(iLocal_289);
	}
	set_game_paused(false);
	terminate_this_thread();
}

