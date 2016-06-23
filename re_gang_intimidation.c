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
	auto uLocal_43 = 0;
	auto uLocal_44 = 0;
	int iLocal_45 = 0;
	Vector3 vLocal_46 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
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
	var[] uLocal_220 = new var[3];
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	Vector3 vLocal_226 = 0;
	Vector3[] vLocal_229 = new Vector3[3];
	float[] fLocal_239 = new float[3];
	Vector3 vLocal_243 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	auto uLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	Vector3 vLocal_257 = 0;
	struct<2> Local_260 = 0;
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
	auto uLocal_277 = 5;
	auto uLocal_278 = 0;
	auto uLocal_279 = 0;
	auto uLocal_280 = 0;
	auto uLocal_281 = 0;
	auto uLocal_282 = 0;
#endregion

void main()
{
	int iVar0;
	struct<6> Var1;
	int iVar7;
	int iVar8;
	auto uVar9;
	auto uVar10;
	auto uVar11;
	int iVar12;
	int iVar13;
	Vector3 vVar14;
	Vector3 fVar17;
	int[] iVar18 = new int[3];
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
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
	iVar0 = 0;
	Var1 = 3;
	iVar7 = 0;
	iLocal_51 = 3;
	vLocal_226 = {Local_260.f_1[0 /*3*/]};
	vLocal_229[0 /*3*/] = {1283.85f, -1622.501f, 53.2255f};
	fLocal_239[0] = 198.9926f;
	vLocal_229[1 /*3*/] = {1286.655f, -1627f, 53.225f};
	fLocal_239[1] = 22.3073f;
	vLocal_229[2 /*3*/] = {1286.452f, -1624.782f, 53.225f};
	fLocal_239[2] = 49.6773f;
	vVar14 = {1298.391f, -1580.895f, 50.7937f};
	fVar17 = 332.006f;
	vLocal_243 = {1277.725f, -1617.897f, 53.2254f};
	if (func_158())
	{
		Var1[0] = joaat("g_m_y_mexgoon_02");
		Var1[1] = joaat("g_m_y_mexgoon_02");
		Var1[2] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	else
	{
		Var1[0] = joaat("g_m_y_mexgoon_02");
		Var1[1] = joaat("g_m_y_mexgoon_02");
		Var1[2] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	Var1.f_5 = "amb_sit_wall_m";
	if (has_force_cleanup_occurred(11))
	{
		func_146(Var1, iVar13, &iVar18, iVar22);
	}
	if (func_113(vLocal_226, -1, 0, 0, 0))
	{
		func_110(-1);
	}
	else
	{
		terminate_this_thread();
	}
	func_109(1, Var1);
	while (iVar0 != 7)
	{
		wait(false);
		iVar23 = 600;
		if (!is_world_point_within_brain_activation_range())
		{
			iVar23 = 0;
			iVar0 = 7;
			func_146(Var1, iVar13, &iVar18, iVar22);
		}
		if (!func_108())
		{
			if (func_107())
			{
				iVar23 = 0;
				iVar0 = 7;
				func_146(Var1, iVar13, &iVar18, iVar22);
			}
		}
		_0x208784099002BC30("RE_GI", 0);
		switch (iVar0)
		{
			case 0:
				if (func_95())
				{
					iVar23 = 0;
					iVar0 = 7;
					func_146(Var1, iVar13, &iVar18, iVar22);
				}
				if (func_109(1, Var1))
				{
					iVar23 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_84(3))
				{
					func_83(1);
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar23 = 0;
				break;
			
			case 4:
				iVar23 = 0;
				add_scenario_blocking_area(vLocal_243 - Vector(10f, 30f, 30f), vLocal_243 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
				set_ped_non_creation_area(vLocal_243 - Vector(50f, 50f, 50f), vLocal_243 + Vector(100f, 100f, 100f));
				set_all_vehicle_generators_active_in_area(vLocal_243 - Vector(15f, 15f, 15f), vLocal_243 + Vector(15f, 15f, 15f), false, 1);
				set_bit(&iVar8, 4);
				set_bit(&iVar8, true);
				set_bit(&iVar8, 5);
				add_relationship_group("GangOne", &iLocal_49);
				set_relationship_between_groups(5, iLocal_49, 1862763509);
				iVar22 = create_ped(12, Var1.f_4, vVar14, fVar17, 1, true);
				set_blocking_of_non_temporary_events(iVar22, true);
				set_model_as_no_longer_needed(Var1.f_4);
				set_ped_relationship_group_hash(iVar22, iLocal_49);
				set_ped_can_be_targetted(iVar22, false);
				set_ped_component_variation(iVar22, 2, false, false, 0);
				set_ped_component_variation(iVar22, false, false, false, 0);
				set_ped_component_variation(iVar22, 3, 2, false, 0);
				set_ped_component_variation(iVar22, 4, false, false, 0);
				set_ped_component_variation(iVar22, 8, true, true, 0);
				set_ambient_voice_name(iVar22, "G_F_Y_Vagos_01_LATINO_MINI_02");
				if (func_82() == 0)
				{
					func_81(&uLocal_55, 0, player_ped_id(), "MICHAEL", 0, 1);
				}
				else if (func_82() == 1)
				{
					func_81(&uLocal_55, 0, player_ped_id(), "FRANKLIN", 0, 1);
				}
				else if (func_82() == 2)
				{
					func_81(&uLocal_55, 0, player_ped_id(), "TREVOR", 0, 1);
				}
				func_81(&uLocal_55, 3, iVar22, "REGIFemale", 0, 1);
				func_81(&uLocal_55, 4, iVar18[2], "REGIMale", 0, 1);
				task_play_anim(iVar22, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				if (!does_blip_exist(iLocal_224))
				{
				}
				iVar24 = 0;
				while (iVar24 <= iLocal_51 - 1)
				{
					if (!does_entity_exist(iVar18[iVar24]))
					{
						iVar18[iVar24] = create_ped(12, Var1[iVar24], vLocal_229[iVar24 /*3*/], fLocal_239[iVar24], 1, true);
						set_blocking_of_non_temporary_events(iVar18[iVar24], true);
						set_model_as_no_longer_needed(Var1[iVar24]);
						set_ped_relationship_group_hash(iVar18[iVar24], iLocal_49);
						set_ped_config_flag(iVar18[iVar24], 42, true);
						give_weapon_to_ped(iVar18[iVar24], func_80(), -1, true, true);
						set_ped_combat_movement(iVar18[iVar24], 2);
						set_ped_combat_range(iVar18[iVar24], 0);
						set_ped_accuracy(iVar18[iVar24], 13);
						set_ped_money(iVar18[iVar24], get_random_int_in_range(200, 500));
					}
					iVar24++;
				}
				give_weapon_to_ped(iVar18[0], joaat("weapon_sawnoffshotgun"), 40, true, true);
				iLocal_52 = create_synchronized_scene(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!is_ped_injured(iVar18[0]))
				{
					task_synchronized_scene(iVar18[0], iLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_b", 4f, -4f, 17, 0, 1000f, 0);
				}
				if (!is_ped_injured(iVar18[1]))
				{
					task_synchronized_scene(iVar18[1], iLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_c", 4f, -4f, 17, 0, 1000f, 0);
				}
				if (!is_ped_injured(iVar18[2]))
				{
					task_synchronized_scene(iVar18[2], iLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_d", 4f, -4f, 17, 0, 1000f, 0);
				}
				set_synchronized_scene_looped(iLocal_52, true);
				iLocal_249 = 1;
				iVar0 = 5;
				break;
			
			case 5:
				set_all_random_peds_flee_this_frame(player_id());
				set_areas_generator_orientation(player_id());
				if (iVar7 < 3)
				{
					if ((((((((func_73(&iVar18, &uVar11, &uVar10, &uVar9, iVar8, iVar12, 1075838976, 0) || func_72(iVar18[0], 0)) || func_72(iVar18[1], 0)) || func_72(iVar18[2], 0)) || is_bullet_in_area(vLocal_229[0 /*3*/], 40f, 1)) || is_projectile_type_in_area(vLocal_229[0 /*3*/] - Vector(25f, 25f, 25f), vLocal_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_smokegrenade"), 1)) || is_projectile_type_in_area(vLocal_229[0 /*3*/] - Vector(25f, 25f, 25f), vLocal_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenade"), 1)) || is_projectile_type_in_area(vLocal_229[0 /*3*/] - Vector(25f, 25f, 25f), vLocal_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenadelauncher"), 1)) || is_projectile_type_in_area(vLocal_229[0 /*3*/] - Vector(25f, 25f, 25f), vLocal_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_stickybomb"), 1))
					{
						iVar25 = 0;
						while (iVar25 < iVar18)
						{
							if (!is_ped_injured(iVar18[iVar25]))
							{
								func_70();
								if (!is_ped_injured(iVar18[iVar25]))
								{
									clear_ped_tasks(iVar18[iVar25]);
									open_sequence_task(&iLocal_50);
									task_look_at_entity(false, player_ped_id(), 1000, 2048, 2);
									task_smart_flee_ped(false, player_ped_id(), 200f, -1, 0, 0);
									close_sequence_task(iLocal_50);
									task_perform_sequence(iVar18[iVar25], iLocal_50);
									clear_sequence_task(&iLocal_50);
									set_ped_keep_task(iVar18[iVar25], true);
								}
							}
							iVar25++;
						}
						if (!is_ped_injured(iVar22))
						{
							if (!is_ped_injured(iVar22))
							{
								clear_ped_tasks(iVar22);
								open_sequence_task(&iLocal_50);
								task_look_at_entity(false, player_ped_id(), 1000, 2048, 2);
								task_smart_flee_ped(false, player_ped_id(), 200f, -1, 0, 0);
								close_sequence_task(iLocal_50);
								task_perform_sequence(iVar22, iLocal_50);
								clear_sequence_task(&iLocal_50);
								set_ped_keep_task(iVar22, true);
							}
						}
						iLocal_248 = 1;
					}
				}
				else
				{
					iVar26 = 0;
					while (iVar26 < iVar18)
					{
						if (!is_ped_injured(iVar18[iVar26]))
						{
							if (has_entity_been_damaged_by_entity(iVar18[iVar26], player_ped_id(), 1))
							{
								func_70();
								iVar7 = 6;
							}
						}
						else
						{
							func_70();
							iVar7 = 6;
						}
						iVar26++;
					}
				}
				if (iLocal_247)
				{
					iVar0 = 6;
				}
				if (iLocal_54)
				{
					if (!func_69())
					{
						iVar7 = 6;
					}
				}
				if (is_ped_injured(player_ped_id()))
				{
					iVar23 = 0;
					iVar0 = 6;
					break;
				}
				if (func_68(vLocal_226, 150))
				{
					iVar0 = 6;
					break;
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar7, Var1, iVar22, &iVar18, &iVar23, &iVar13) || iLocal_248)
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar23 = 0;
				func_146(Var1, iVar13, &iVar18, iVar22);
				iVar0 = 7;
				break;
				break;
			
			case 7:
				iVar23 = 0;
				break;
		}
		if (iVar0 != 7)
		{
		}
	}
	func_146(Var1, iVar13, &iVar18, iVar22);
}

bool func_1(int iParam0, struct<6> Param1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*iParam0 >= 3)
	{
		if (!is_synchronized_scene_running(iLocal_53))
		{
			if ((!is_entity_at_coord(player_ped_id(), vLocal_257, 9f, 9f, 9f, false, true, 0) && !is_entity_at_coord(player_ped_id(), 1276.21f, -1613.05f, 53f, 9f, 9f, 9f, false, true, 0)) || is_ped_running(player_ped_id()))
			{
				*iParam0 = 6;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (func_54(iParam7, iParam8))
			{
				if (iLocal_256)
				{
					*iParam0 = 2;
				}
				if (!is_ped_injured(iParam7))
				{
					set_ped_reset_flag(iParam7, 247, true);
					if (!func_72(iParam7, 0))
					{
						if (is_entity_at_entity(player_ped_id(), iParam7, 15f, 15f, 15f, 0, 1, 0))
						{
							if ((is_ped_armed(player_ped_id(), 6) && _0x6CD5A433374D4CFB(iParam7, player_ped_id())) && !is_ped_in_any_vehicle(player_ped_id(), 0))
							{
								if ((is_ped_armed(player_ped_id(), 6) || is_player_free_aiming_at_entity(player_id(), iParam7)) || is_player_targetting_entity(player_id(), iParam7))
								{
									clear_ped_secondary_task(iParam7);
									task_look_at_entity(iParam7, player_ped_id(), 5000, 1024, 2);
									func_70();
									wait(1000);
									func_44(&uLocal_55, "REGIAU", "REGIN_ARM", 4, 0, 0, 0);
									iVar0 = 0;
									while (iVar0 < *iParam8)
									{
										if (!is_ped_injured(*iParam8[iVar0]))
										{
											clear_ped_secondary_task(*iParam8[iVar0]);
											task_smart_flee_ped(*iParam8[iVar0], player_ped_id(), 200f, -1, 0, 0);
											set_ped_keep_task(*iParam8[iVar0], true);
										}
										iVar0++;
									}
									if (!is_ped_injured(iParam7))
									{
										task_smart_flee_ped(iParam7, player_ped_id(), 200f, -1, 0, 0);
										set_ped_keep_task(iParam7, true);
									}
									iLocal_248 = 1;
								}
							}
						}
					}
					else
					{
						func_42();
						if (!is_ped_injured(iParam7))
						{
							clear_ped_tasks(iParam7);
							task_smart_flee_ped(iParam7, player_ped_id(), 200f, -1, 0, 0);
							set_ped_keep_task(iParam7, true);
						}
						iLocal_248 = 1;
					}
				}
				if ((is_ped_injured(*iParam8[0]) || is_ped_injured(*iParam8[1])) || is_ped_injured(*iParam8[2]))
				{
					func_41(iParam8, iParam7);
				}
				if (is_ped_injured(iParam7))
				{
					if (iLocal_255 > 2)
					{
						func_41(iParam8, iParam7);
					}
					else
					{
						*iParam0 = 9;
					}
				}
				else if (is_ped_ragdoll(iParam7))
				{
					if (is_entity_playing_anim(iParam7, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 3))
					{
						stop_anim_task(iParam7, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", -8f);
					}
				}
			}
			else
			{
				*iParam0 = 9;
			}
			break;
		
		case 2:
			unk_0x0A25F80D5BADC013(get_entity_coords(player_ped_id(), 1), vLocal_243, 0, 0, 255, 255);
			task_pause(player_ped_id(), 1000);
			vLocal_257 = {get_entity_coords(player_ped_id(), 1)};
			if (!is_ped_injured(*iParam8[1]))
			{
				if (!does_blip_exist(uLocal_220[1]))
				{
				}
				trigger_music_event("RE28_OS");
				iLocal_53 = create_synchronized_scene(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!is_ped_injured(*iParam8[0]))
				{
					task_synchronized_scene(*iParam8[0], iLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_b", 4f, -4f, 17, 0, 1000f, 0);
				}
				if (!is_ped_injured(*iParam8[1]))
				{
					task_synchronized_scene(*iParam8[1], iLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_c", 4f, -4f, 16, 0, 1000f, 0);
				}
				if (!is_ped_injured(*iParam8[2]))
				{
					task_synchronized_scene(*iParam8[2], iLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_d", 4f, -4f, 17, 0, 1000f, 0);
				}
				*iParam0 = 3;
			}
			break;
		
		case 3:
			*iParam9 = 0;
			if (is_synchronized_scene_running(iLocal_53))
			{
				if (get_synchronized_scene_phase(iLocal_53) > 0.3f)
				{
					if (!is_ped_injured(*iParam8[0]))
					{
						set_ped_reset_flag(*iParam8[0], 156, true);
						open_sequence_task(&iLocal_50);
						task_go_to_coord_while_aiming_at_entity(0, get_entity_coords(player_ped_id(), 1) - Vector(0f, 0f, 1f), player_ped_id(), 2f, false, 3.5f, 5f, true, 0, 0, -957453492, 20000);
						task_aim_gun_at_entity(false, player_ped_id(), 25000, 0);
						close_sequence_task(iLocal_50);
						task_perform_sequence(*iParam8[0], iLocal_50);
						clear_sequence_task(&iLocal_50);
						iLocal_50 = 0;
					}
				}
				if (get_synchronized_scene_phase(iLocal_53) > 0.35f)
				{
					if (!is_ped_injured(*iParam8[1]))
					{
						set_ped_reset_flag(*iParam8[1], 156, true);
						open_sequence_task(&iLocal_50);
						task_go_to_entity_while_aiming_at_entity(false, player_ped_id(), player_ped_id(), 2f, 0, 5f, 4f, 1, 0, -957453492);
						task_aim_gun_at_entity(false, player_ped_id(), 25000, 0);
						close_sequence_task(iLocal_50);
						task_perform_sequence(*iParam8[1], iLocal_50);
						clear_sequence_task(&iLocal_50);
						iLocal_50 = 0;
					}
				}
				if (get_synchronized_scene_phase(iLocal_53) > 0.275f)
				{
					if (!is_ped_injured(*iParam8[2]))
					{
						set_ped_reset_flag(*iParam8[2], 156, true);
						open_sequence_task(&iLocal_50);
						task_go_to_entity_while_aiming_at_entity(false, player_ped_id(), player_ped_id(), 2f, 0, 3.5f, 4f, 1, 0, -957453492);
						task_aim_gun_at_entity(false, player_ped_id(), 25000, 0);
						close_sequence_task(iLocal_50);
						task_perform_sequence(*iParam8[2], iLocal_50);
						clear_sequence_task(&iLocal_50);
						iLocal_50 = 0;
					}
				}
			}
			if (!is_ped_injured(*iParam8[2]))
			{
				if (is_entity_at_entity(*iParam8[2], player_ped_id(), 4f, 4f, 2f, 0, 1, 0))
				{
					func_40(iLocal_224);
					func_40(iLocal_225);
					func_36(iParam8);
					if (!is_ped_injured(*iParam8[0]))
					{
						open_sequence_task(&iLocal_50);
						task_go_to_coord_while_aiming_at_entity(0, get_entity_coords(player_ped_id(), 1) - Vector(0f, 0f, 1f), player_ped_id(), 2f, false, 3.5f, 5f, true, 0, 0, -957453492, 20000);
						task_aim_gun_at_entity(false, player_ped_id(), 25000, 0);
						close_sequence_task(iLocal_50);
						task_perform_sequence(*iParam8[0], iLocal_50);
						clear_sequence_task(&iLocal_50);
						iLocal_50 = 0;
					}
					if (!is_ped_injured(*iParam8[1]))
					{
						open_sequence_task(&iLocal_50);
						task_go_to_entity_while_aiming_at_entity(false, player_ped_id(), player_ped_id(), 2f, 0, 5f, 4f, 1, 0, -957453492);
						task_aim_gun_at_entity(false, player_ped_id(), 25000, 0);
						close_sequence_task(iLocal_50);
						task_perform_sequence(*iParam8[1], iLocal_50);
						clear_sequence_task(&iLocal_50);
						iLocal_50 = 0;
					}
					if (!is_ped_injured(*iParam8[2]))
					{
						open_sequence_task(&iLocal_50);
						task_go_to_entity_while_aiming_at_entity(false, player_ped_id(), player_ped_id(), 2f, 0, 3.5f, 4f, 1, 0, -957453492);
						task_aim_gun_at_entity(false, player_ped_id(), 25000, 0);
						close_sequence_task(iLocal_50);
						task_perform_sequence(*iParam8[2], iLocal_50);
						clear_sequence_task(&iLocal_50);
						iLocal_50 = 0;
					}
					iLocal_251 = get_game_timer();
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (func_34(Param1, *iParam8[2], iParam8))
			{
				func_40(uLocal_220[2]);
			}
			else if (is_ped_armed(player_ped_id(), 6))
			{
				*iParam0 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_250)
			{
				func_70();
				wait(false);
				func_44(&uLocal_55, "REGIAU", "REGIN_WARN2", 4, 0, 0, 0);
				set_wanted_level_multiplier(0.5f);
				func_36(iParam8);
				func_41(iParam8, iParam7);
				func_40(iLocal_225);
				func_40(iLocal_224);
				iLocal_250 = 1;
			}
			func_33(iParam8);
			func_32(iParam8);
			if (func_31(iParam8))
			{
				*iParam10 = 1;
				if (!is_ped_injured(iParam7))
				{
					if (is_entity_at_entity(player_ped_id(), iParam7, 8f, 8f, 8f, 0, 1, 0))
					{
						func_44(&uLocal_55, "REGIAU", "REGIN_SORRY", 4, 0, 0, 0);
					}
				}
				if (!does_blip_exist(iLocal_225))
				{
				}
				while (func_69())
				{
					wait(false);
				}
				while (!func_30())
				{
					wait(false);
				}
				func_5(-1, 0);
				func_2();
				return true;
				*iParam0 = 9;
			}
			break;
		
		case 8:
			break;
		
		case 9:
			return true;
			break;
	}
	return false;
}

void func_2()
{
	func_3();
}

bool func_3()
{
	if (func_4(0))
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

int func_4(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_5(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_28();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_27(iParam0))
	{
		func_26(iParam0, iParam1);
		if (!func_25(51))
		{
			func_16("RE_REWARD", 1, 0, 4000, 10000, func_19(), 0, 138, 0);
			func_15(51);
		}
		if (func_14(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_13(iParam0, iParam1) != 322)
		{
			func_7(func_13(iParam0, iParam1), vLocal_46.x, vLocal_46.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_6(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_6(int iParam0)
{
	Global_101140 = iParam0;
}

void func_7(int iParam0, auto uParam1, auto uParam2)
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
		func_11(891 + iParam0, 1, -1, 1);
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
		func_8();
	}
}

void func_8()
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
		func_10(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_9() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_3();
				}
			}
		}
	}
}

auto func_9()
{
	return Global_25120;
}

int func_10(int iParam0, int iParam1)
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

int func_11(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_12();
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

auto func_12()
{
	return Global_1312747;
}

int func_13(int iParam0, int iParam1)
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

bool func_14(int iParam0)
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

void func_15(int iParam0)
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

void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_17(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_18();
	}
}

void func_18()
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

int func_19()
{
	func_20();
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

void func_20()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_24(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_23(player_ped_id());
			if (func_22(iVar0) && (!func_21(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_22(Global_101154.f_1826.f_539.f_3549))
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

int func_21(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_22(int iParam0)
{
	return iParam0 < 3;
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)
{
	if (func_22(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_25(int iParam0)
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

void func_26(int iParam0, int iParam1)
{
	set_bit(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_27(int iParam0)
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

auto func_28()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_29(cVar0);
	return uVar16;
}

int func_29(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_30()
{
	return true;
}

bool func_31(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (does_entity_exist(*uParam0[iVar0]))
		{
			if (!is_ped_injured(*uParam0[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_32(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (is_ped_injured(*uParam0[iVar0]))
		{
			func_40(uLocal_220[iVar0]);
		}
		iVar0++;
	}
}

void func_33(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iLocal_254 == 0)
	{
		iVar2 = 0;
		while (iVar2 <= iLocal_51 - 1)
		{
			if (!is_ped_injured(*uParam0[iVar2]))
			{
				iVar0++;
				iVar1 = iVar2;
			}
			iVar2++;
		}
		if (iVar0 == 1)
		{
			if (!is_ped_injured(*uParam0[iVar1]))
			{
				set_ped_combat_attributes(*uParam0[iVar1], 0, true);
				set_ped_combat_range(*uParam0[iVar1], 0);
				iLocal_254 = 1;
			}
		}
	}
}

bool func_34(struct<6> Param0, int iParam1, auto uParam2)
{
	switch (iLocal_252)
	{
		case 0:
			if (func_35(iLocal_251, 0))
			{
				if (!func_69())
				{
					if (func_82() == 0)
					{
						func_44(&uLocal_55, "REGIAU", "REGIN_MONEYM", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
					else if (func_82() == 1)
					{
						func_44(&uLocal_55, "REGIAU", "REGIN_MONEYF", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
					else if (func_82() == 2)
					{
						func_44(&uLocal_55, "REGIAU", "REGIN_MONEYT", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
				}
				iLocal_50 = 0;
			}
			break;
		
		case 1:
			if (!is_ped_injured(iParam6))
			{
				if (get_script_task_status(iParam6, 242628503) == 7 || is_entity_at_entity(iParam6, player_ped_id(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (!func_69())
					{
						func_44(&uLocal_55, "REGIAU", "REGIN_KILL", 4, 0, 0, 0);
						settimera(false);
						iLocal_54 = 1;
						iLocal_252 = 4;
					}
				}
			}
			break;
		
		case 2:
			if (!is_ped_injured(*uParam7[2]))
			{
				if (!is_ped_injured(*uParam7[0]))
				{
					open_sequence_task(&iLocal_50);
					task_stand_still(false, 700);
					task_follow_nav_mesh_to_coord(false, vLocal_229[0 /*3*/], 1f, -1, 0.25f, 0, 1193033728);
					task_achieve_heading(false, fLocal_239[0], 0);
					task_play_anim_advanced(false, Param0.f_5, "sit_down_idle_01", vLocal_229[0 /*3*/], 0f, 0f, fLocal_239[0], 1000f, -4f, -1, 1, 0, 2, 0);
					close_sequence_task(iLocal_50);
					task_perform_sequence(*uParam7[0], iLocal_50);
					clear_sequence_task(&iLocal_50);
					iLocal_50 = 0;
				}
				if (!is_ped_injured(*uParam7[1]))
				{
					open_sequence_task(&iLocal_50);
					task_stand_still(false, 200);
					task_follow_nav_mesh_to_coord(false, vLocal_229[1 /*3*/], 1f, -1, 0.25f, 0, 1193033728);
					task_wander_standard(false, 1193033728, 0);
					close_sequence_task(iLocal_50);
					task_perform_sequence(*uParam7[1], iLocal_50);
					clear_sequence_task(&iLocal_50);
					iLocal_50 = 0;
				}
				if (!is_ped_injured(*uParam7[2]))
				{
					open_sequence_task(&iLocal_50);
					task_stand_still(false, 1000);
					task_follow_to_offset_of_entity(false, *uParam7[0], 0f, -0.5f, 0f, 1f, 10000, 0.1f, 1);
					task_wander_standard(false, 1193033728, 0);
					close_sequence_task(iLocal_50);
					task_perform_sequence(*uParam7[2], iLocal_50);
					clear_sequence_task(&iLocal_50);
					iLocal_50 = 0;
				}
			}
			iLocal_252 = 3;
			break;
		
		case 3:
			if (!func_69())
			{
				if (func_82() == 0)
				{
					func_44(&uLocal_55, "REGIAU", "REGIN_REALM", 4, 0, 0, 0);
				}
				else if (func_82() == 1)
				{
					func_44(&uLocal_55, "REGIAU", "REGIN_REALF", 4, 0, 0, 0);
				}
				else if (func_82() == 2)
				{
					func_44(&uLocal_55, "REGIAU", "REGIN_REALT", 4, 0, 0, 0);
				}
				iLocal_252 = 4;
			}
			break;
		
		case 4:
			return true;
			break;
	}
	return false;
}

bool func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_game_timer();
	iVar1 = iVar0 - iParam0;
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

void func_36(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (!does_blip_exist(uLocal_220[iVar0]))
		{
			if (!is_ped_injured(*uParam0[iVar0]))
			{
				uLocal_220[iVar0] = func_37(*uParam0[iVar0], 1, 145);
				set_entity_is_target_priority(*uParam0[iVar0], 1, 0f);
			}
		}
		iVar0++;
	}
}

int func_37(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_38(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_38(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_39(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_39(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_39(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_39(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_40(int iParam0)
{
	if (does_blip_exist(iParam0))
	{
		remove_blip(&iParam0);
	}
}

void func_41(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (!is_ped_injured(*uParam0[iVar0]))
		{
			task_combat_ped(*uParam0[iVar0], player_ped_id(), 0, 16);
			set_ped_combat_attributes(*uParam0[iVar0], 0, true);
			set_ped_keep_task(*uParam0[iVar0], true);
		}
		iVar0++;
	}
	if (!is_entity_dead(iParam1, 0))
	{
		clear_ped_secondary_task(iParam1);
		task_cower(iParam1, -1);
		set_ped_keep_task(iParam1, true);
	}
}

void func_42()
{
	Global_14578 = 0;
	func_43();
}

void func_43()
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

int func_44(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_45(sParam2, iParam3, 0);
}

bool func_45(char* sParam0, int iParam1, int iParam2)
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
					func_43();
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
		if (func_52(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_51();
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
				func_50();
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
				if (func_49())
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
			if (func_48())
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
			func_47();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_46();
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
		func_43();
	}
	return false;
}

void func_46()
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

void func_47()
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

bool func_48()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_49()
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

void func_50()
{
	if (func_21(14))
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
		Global_14413 = func_82();
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

void func_51()
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

int func_52(int iParam0, int iParam1)
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

void func_53(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

bool func_54(int iParam0, auto uParam1)
{
	switch (iLocal_255)
	{
		case 0:
			if (!is_ped_injured(iParam0))
			{
				if ((is_entity_in_angled_area(player_ped_id(), 1272.878f, -1532.84f, 36.4104f, 1339.482f, -1623.636f, 71.4792f, 105.1875f, 0, true, 0) && !is_entity_occluded(iParam0)) || is_entity_at_entity(player_ped_id(), iParam0, 15f, 15f, 15f, 0, 1, 0))
				{
					if (!func_108())
					{
						func_58(1);
					}
					if (does_blip_exist(iLocal_224))
					{
						func_40(iLocal_224);
					}
					if (!does_blip_exist(iLocal_225))
					{
						iLocal_225 = func_37(iParam0, 0, 145);
						_0x75A16C3DA34F1245(iLocal_225, false);
					}
					if (is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						if (!is_ped_in_any_police_vehicle(player_ped_id()))
						{
							if (get_entity_speed(get_vehicle_ped_is_in(player_ped_id(), 0)) < 5f)
							{
								if (is_entity_at_entity(player_ped_id(), iParam0, 10f, 10f, 10f, 0, 1, 0))
								{
									clear_ped_secondary_task(iParam0);
									open_sequence_task(&iLocal_50);
									task_turn_ped_to_face_entity(false, player_ped_id(), -1);
									task_look_at_entity(false, player_ped_id(), 20000, 1024, 2);
									close_sequence_task(iLocal_50);
									task_perform_sequence(iParam0, iLocal_50);
									clear_sequence_task(&iLocal_50);
									if (does_blip_exist(iLocal_225))
									{
										_0x75A16C3DA34F1245(iLocal_225, true);
									}
									set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
									if (is_ped_facing_ped(iParam0, player_ped_id(), 45f))
									{
										func_42();
										wait(false);
										func_44(&uLocal_55, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
										iLocal_255 = 1;
									}
								}
							}
							else if (iLocal_246 == 0)
							{
								func_44(&uLocal_55, "REGIAU", "REGIN_CAR", 4, 0, 0, 0);
								if (!is_ped_injured(iParam0))
								{
									open_sequence_task(&iLocal_50);
									task_look_at_entity(false, player_ped_id(), 20000, 1024, 2);
									task_play_anim(false, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
									task_turn_ped_to_face_entity(false, player_ped_id(), -1);
									close_sequence_task(iLocal_50);
									task_perform_sequence(iParam0, iLocal_50);
									clear_sequence_task(&iLocal_50);
								}
								iLocal_246 = 1;
							}
						}
						else
						{
							func_42();
							wait(false);
							func_44(&uLocal_55, "REGIAU", "REGIN_POLICE", 4, 0, 0, 0);
							if (!is_ped_injured(iParam0))
							{
								clear_ped_tasks(iParam0);
								task_smart_flee_ped(iParam0, player_ped_id(), 200f, -1, 0, 0);
								set_ped_keep_task(iParam0, true);
								iLocal_247 = 1;
							}
						}
					}
					else if (!is_ped_injured(iParam0))
					{
						if (is_entity_at_entity(player_ped_id(), iParam0, 8f, 8f, 8f, 0, 1, 0))
						{
							open_sequence_task(&iLocal_50);
							task_turn_ped_to_face_entity(false, player_ped_id(), -1);
							task_look_at_entity(false, player_ped_id(), 20000, 1024, 2);
							close_sequence_task(iLocal_50);
							task_perform_sequence(iParam0, iLocal_50);
							clear_sequence_task(&iLocal_50);
							if (is_ped_facing_ped(iParam0, player_ped_id(), 45f))
							{
								func_42();
								wait(false);
								func_44(&uLocal_55, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
								iLocal_255 = 1;
							}
						}
					}
				}
			}
			if (!is_ped_injured(*uParam1[2]))
			{
				if (is_entity_in_angled_area(player_ped_id(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, true, 0) && !func_57())
				{
					iLocal_255 = 3;
				}
				else if (is_entity_in_angled_area(player_ped_id(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, true, 0))
				{
					func_56(iParam0, uParam1);
				}
			}
			break;
		
		case 1:
			if (!is_ped_injured(*uParam1[2]))
			{
				if (is_entity_in_angled_area(player_ped_id(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, true, 0) && !func_57())
				{
					iLocal_255 = 3;
				}
				else if (is_entity_in_angled_area(player_ped_id(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, true, 0))
				{
					func_56(iParam0, uParam1);
				}
			}
			if (!is_ped_injured(iParam0) && !is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				clear_area_of_vehicles(vLocal_243, 13f, 0, 0, 0, 0, false);
				clear_ped_secondary_task(iParam0);
				if (!is_ped_injured(iParam0))
				{
					open_sequence_task(&iLocal_50);
					task_follow_nav_mesh_to_coord(false, vLocal_243, 2f, 20000, 0.25f, 0, 32.2195f);
					task_look_at_entity(false, player_ped_id(), -1, 1024, 2);
					task_turn_ped_to_face_entity(false, player_ped_id(), -1);
					close_sequence_task(iLocal_50);
					task_perform_sequence(iParam0, iLocal_50);
					clear_sequence_task(&iLocal_50);
					iLocal_50 = 0;
					if ((is_ped_armed(player_ped_id(), 6) && is_entity_at_entity(player_ped_id(), iParam0, 6f, 6f, 6f, 0, 1, 0)) && !is_ped_in_any_vehicle(player_ped_id(), 0))
					{
					}
				}
				iLocal_255 = 2;
			}
			break;
		
		case 2:
			if (!is_ped_injured(iParam0) && !func_69())
			{
				if (func_44(&uLocal_55, "REGIAU", "REGIN_LR1G", 4, 0, 0, 0))
				{
					settimera(false);
					iLocal_255 = 3;
				}
			}
			break;
		
		case 3:
			if (is_entity_in_angled_area(player_ped_id(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, true, 0) && !func_57())
			{
				func_55(iParam0);
				iLocal_255 = 4;
			}
			else if (is_entity_in_angled_area(player_ped_id(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, true, 0))
			{
				func_56(iParam0, uParam1);
			}
			else if (!is_ped_injured(iParam0))
			{
				if (timera() > 8000 && is_entity_at_coord(iParam0, vLocal_243, 3f, 3f, 3f, false, true, 0))
				{
					if (is_ped_facing_ped(iParam0, player_ped_id(), 60f))
					{
						if (func_158())
						{
							task_play_anim(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_a", 2f, -2f, -1, 48, 0, 0, 0, 0);
						}
						else
						{
							task_play_anim(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 0, 0, 0, 0, 0);
						}
						func_44(&uLocal_55, "REGIAU", "REGIN_HERE", 4, 0, 0, 0);
						settimera(false);
					}
				}
				if ((is_ped_armed(player_ped_id(), 6) && _0x6CD5A433374D4CFB(iParam0, player_ped_id())) && !is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					if (is_player_free_aiming_at_entity(player_id(), iParam0) || is_player_targetting_entity(player_id(), iParam0))
					{
						func_56(iParam0, uParam1);
					}
				}
			}
			break;
		
		case 4:
			if (!is_ped_injured(iParam0))
			{
				open_sequence_task(&iLocal_50);
				task_stand_still(false, 500);
				task_follow_nav_mesh_to_coord(false, vLocal_243, 2f, 20000, 0.25f, 0, 1193033728);
				close_sequence_task(iLocal_50);
				clear_sequence_task(&iLocal_50);
				iLocal_50 = 0;
			}
			func_70();
			wait(false);
			if (!func_69())
			{
				func_44(&uLocal_55, "REGIAU", "REGIN_THRT", 4, 0, 0, 0);
				iLocal_255 = 5;
			}
			break;
		
		case 5:
			func_36(uParam1);
			func_40(iLocal_225);
			iLocal_256 = true;
			return true;
			break;
	}
	return true;
}

void func_55(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		clear_ped_tasks(iParam0);
		open_sequence_task(&iLocal_50);
		task_follow_nav_mesh_to_coord(false, 1286.037f, -1623.207f, 53.2297f, 2f, -1, 0.25f, 0, 1193033728);
		task_cower(false, -1);
		close_sequence_task(iLocal_50);
		task_perform_sequence(iParam0, iLocal_50);
		clear_sequence_task(&iLocal_50);
		iLocal_50 = 0;
		set_ped_can_be_targetted(iParam0, true);
		func_40(iLocal_225);
	}
}

void func_56(int iParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!is_ped_injured(*uParam1[iVar0]) && !is_ped_injured(iParam0))
		{
			if ((_0x6CD5A433374D4CFB(*uParam1[iVar0], player_ped_id()) || can_ped_hear_player(player_id(), *uParam1[iVar0])) || _0x6CD5A433374D4CFB(iParam0, player_ped_id()))
			{
				func_70();
				if (!is_ped_injured(*uParam1[iVar0]))
				{
					clear_ped_tasks(*uParam1[iVar0]);
					open_sequence_task(&iLocal_50);
					task_look_at_entity(false, player_ped_id(), 1000, 2048, 2);
					task_smart_flee_ped(false, player_ped_id(), 200f, -1, 0, 0);
					close_sequence_task(iLocal_50);
					task_perform_sequence(*uParam1[iVar0], iLocal_50);
					clear_sequence_task(&iLocal_50);
					set_ped_keep_task(*uParam1[iVar0], true);
				}
				if (!is_ped_injured(iParam0))
				{
					clear_ped_tasks(iParam0);
					open_sequence_task(&iLocal_50);
					task_look_at_entity(false, player_ped_id(), 1000, 2048, 2);
					task_smart_flee_ped(false, player_ped_id(), 200f, -1, 0, 0);
					close_sequence_task(iLocal_50);
					task_perform_sequence(iParam0, iLocal_50);
					clear_sequence_task(&iLocal_50);
					set_ped_keep_task(iParam0, true);
				}
				iLocal_248 = 1;
			}
		}
		else
		{
			func_70();
			if (!is_ped_injured(*uParam1[iVar0]))
			{
				clear_ped_tasks(*uParam1[iVar0]);
				open_sequence_task(&iLocal_50);
				task_look_at_entity(false, player_ped_id(), 1000, 2048, 2);
				task_smart_flee_ped(false, player_ped_id(), 200f, -1, 0, 0);
				close_sequence_task(iLocal_50);
				task_perform_sequence(*uParam1[iVar0], iLocal_50);
				clear_sequence_task(&iLocal_50);
				set_ped_keep_task(*uParam1[iVar0], true);
			}
			if (!is_ped_injured(iParam0))
			{
				clear_ped_tasks(iParam0);
				open_sequence_task(&iLocal_50);
				task_look_at_entity(false, player_ped_id(), 1000, 2048, 2);
				task_smart_flee_ped(false, player_ped_id(), 200f, -1, 0, 0);
				close_sequence_task(iLocal_50);
				task_perform_sequence(iParam0, iLocal_50);
				clear_sequence_task(&iLocal_50);
				set_ped_keep_task(iParam0, true);
			}
			iLocal_248 = 1;
		}
		iVar0++;
	}
}

bool func_57()
{
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
		{
			if (is_ped_in_model(player_ped_id(), joaat("rhino")))
			{
				return true;
			}
		}
	}
	if (is_ped_in_flying_vehicle(player_ped_id()) || is_ped_in_any_police_vehicle(player_ped_id()))
	{
		return true;
	}
	return false;
}

bool func_58(int iParam0)
{
	if (func_62())
	{
		Global_101144 = 1;
		Global_101141 = get_game_timer();
		if (func_14(Global_101143))
		{
			func_59(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_14(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_60(func_61(iParam0), -1);
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
					func_60(func_61(iParam0), -1);
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
					func_60(func_61(iParam0), -1);
					Global_101154.f_29520.f_4++;
					set_bit(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_60(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

char* func_61(int iParam0)
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

bool func_62()
{
	switch (func_63(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_63(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_67(0))
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
		if (!func_65(iParam2))
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
			func_64(uParam0, iParam4);
		}
	}
	return 2;
}

void func_64(auto uParam0, int iParam1)
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

int func_65(int iParam0)
{
	return func_66(iParam0, Global_35711);
}

bool func_66(int iParam0, int iParam1)
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

bool func_67(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_65(iParam0))
	{
		return false;
	}
	return true;
}

bool func_68(Vector3 vParam0, int iParam1)
{
	if (!is_ped_injured(player_ped_id()))
	{
		if (vdist(get_entity_coords(player_ped_id(), 1), vParam0) > IntToFloat(iParam3))
		{
			return true;
		}
	}
	return false;
}

bool func_69()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_70()
{
	Global_14578 = 0;
	func_71();
}

void func_71()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

bool func_72(int iParam0, int iParam1)
{
	if (is_ped_on_foot(player_ped_id()))
	{
		if (has_entity_been_damaged_by_entity(iParam0, player_ped_id(), 1))
		{
			return true;
		}
	}
	else if (has_entity_been_damaged_by_entity(iParam0, player_ped_id(), 1))
	{
		if (get_ped_max_health(iParam0) - get_entity_health(iParam0) > iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_73(int iParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	int iVar0;
	
	fParam6 = fParam6;
	if (!iParam5)
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_74(*iParam0[iVar0], uParam2, uParam3, iParam4, iParam5, fParam6, iParam7))
			{
				*uParam1 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_74(int iParam0, auto uParam1, auto uParam2, int iParam3, int iParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 fVar9;
	
	iVar2 = false;
	if (!is_entity_dead(iParam0, 0) && !iParam4)
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
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if (!is_entity_dead(iParam0, 0) && !iParam4)
		{
			vVar3 = {get_entity_coords(player_ped_id(), 1)};
			vVar6 = {get_entity_coords(iParam0, 1)};
			fVar9 = vdist(vVar3, vVar6);
			if (!is_bit_set(iParam3, 3))
			{
				if (func_72(iParam0, iParam6))
				{
					func_79("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_79("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_78(iParam0);
					return true;
				}
			}
			if (!is_bit_set(iParam3, true))
			{
				if (fVar1 < 20f)
				{
				}
				if (is_bullet_in_area(vVar6, fParam5, 1))
				{
					func_79("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_79("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_78(iParam0);
					return true;
				}
				if (is_projectile_in_area(vVar6 - Vector(fParam5 / 2f, fParam5 / 2f, fParam5 / 2f), vVar6 + Vector(fParam5 / 2f, fParam5 / 2f, fParam5 / 2f), 0))
				{
					func_79("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_79("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_78(iParam0);
					return true;
				}
			}
			if (!is_bit_set(iParam3, 2))
			{
				fVar0 = _get_lockon_range_of_current_ped_weapon(player_ped_id());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (is_ped_armed(player_ped_id(), 6))
				{
					if (is_player_targetting_entity(player_id(), iParam0) || is_player_free_aiming_at_entity(player_id(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (has_entity_clear_los_to_entity(iParam0, player_ped_id(), 17))
							{
								func_79("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_79("	aggro Ped knows player is pointing gun\n");
								func_75("		lockOnTimer = ", *uParam2);
								func_79("\n");
								func_75("		time since not LockedOn = ", get_game_timer() - iLocal_45);
								func_79("\n");
								iVar2 = true;
								if (get_game_timer() > iLocal_45 + *uParam2)
								{
									func_79("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_78(iParam0);
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
			if (!is_bit_set(iParam3, false))
			{
				if (is_player_wanted_level_greater(player_id(), 0))
				{
					func_79("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_79("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_78(iParam0);
					return true;
				}
			}
		}
	}
	if (!iVar2)
	{
		iLocal_45 = get_game_timer();
	}
	return false;
}

void func_75(char* sParam0, int iParam1)
{
	func_77(sParam0);
	func_76(iParam1);
}

void func_76(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_77(char* sParam0)
{
	if (are_strings_equal(sParam0, sParam0))
	{
	}
}

void func_78(int iParam0)
{
	stop_current_playing_ambient_speech(iParam0);
}

void func_79(char* sParam0)
{
	func_77(sParam0);
}

int func_80()
{
	int iVar0;
	
	iVar0 = get_random_int_in_range(false, 5);
	if (iVar0 == 0)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iVar0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iVar0 == 2)
	{
		return joaat("weapon_pistol");
	}
	else if (iVar0 == 3)
	{
		return joaat("weapon_pistol");
	}
	else
	{
		return joaat("weapon_pistol");
	}
	return joaat("weapon_pistol");
}

void func_81(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

auto func_82()
{
	func_20();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_83(int iParam0)
{
	if (iParam0)
	{
	}
}

bool func_84(int iParam0)
{
	if (is_world_point_within_brain_activation_range())
	{
		if (func_85(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_21(6) || func_21(7))
			{
				return 1;
			}
			else
			{
				return func_85(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_65(5))
			{
				if (func_86(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_86(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_82();
				if (!func_22(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_94()) || Global_100201) || Global_25122) || func_93()) || func_52(8, -1)) || func_92()) || func_91()) || func_90()) || func_89()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_94()) || Global_25122) || func_93()) || func_52(8, -1)) || func_90()) || func_92()) || func_91()) || func_89()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_94()) || Global_100201) || Global_25122) || func_93()) || func_52(8, -1)) || func_90()) || func_92()) || func_91()) || func_89()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(player_ped_id(), false)) || func_94()) || Global_100201) || Global_25122) || func_93()) || func_52(8, -1)) || func_92()) || func_91()) || func_89()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_94() || get_player_wanted_level(player_id()) > 0) || func_52(8, -1)) || func_89()) || func_88()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_52(8, -1) || func_92()) || func_91()) || func_88()) || func_87())
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
							if ((((((((((((((is_ped_in_combat(player_ped_id(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_94()) || Global_25122) || func_93()) || func_52(8, -1)) || func_91()) || func_90()) || func_89()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || func_94()) || func_91()) || Global_100201) || Global_25122) || func_93()) || Global_36839) || func_52(8, -1)) || func_90()) || func_88()) || func_89()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), 1)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_94()) || Global_100201) || Global_25122) || func_93()) || func_52(8, -1)) || func_90()) || func_88()) || func_92()) || func_91()) || func_89())
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

auto func_87()
{
	return Global_91317.f_1;
}

int func_88()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_89()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_90()
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

int func_91()
{
	return Global_91330.f_297 > 0;
}

int func_92()
{
	return Global_91330.f_296 > 0;
}

auto func_93()
{
	return Global_1315913;
}

int func_94()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_95()
{
	if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
	{
		if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_46) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_106())
		{
			return false;
		}
	}
	if (func_102())
	{
		return true;
	}
	if (func_96(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_96(float fParam0, int iParam1)
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
		if (func_22(func_82()))
		{
			iVar36 = func_19();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 2) && !is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_97(iVar32, &Var0);
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

void func_97(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_98(uParam1, "Abigail1", func_100(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 1:
			func_98(uParam1, "Abigail2", func_100(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 2:
			func_98(uParam1, "Barry1", func_100(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 3:
			func_98(uParam1, "Barry2", func_100(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 4:
			func_98(uParam1, "Barry3", func_100(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 5:
			func_98(uParam1, "Barry3A", func_100(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 6:
			func_98(uParam1, "Barry3C", func_100(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 7:
			func_98(uParam1, "Barry4", func_100(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_99(iParam0), 0, 0);
			break;
		
		case 8:
			func_98(uParam1, "Dreyfuss1", func_100(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 9:
			func_98(uParam1, "Epsilon1", func_100(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 10:
			func_98(uParam1, "Epsilon2", func_100(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 11:
			func_98(uParam1, "Epsilon3", func_100(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 12:
			func_98(uParam1, "Epsilon4", func_100(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 13:
			func_98(uParam1, "Epsilon5", func_100(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 14:
			func_98(uParam1, "Epsilon6", func_100(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 15:
			func_98(uParam1, "Epsilon7", func_100(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 16:
			func_98(uParam1, "Epsilon8", func_100(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 17:
			func_98(uParam1, "Extreme1", func_100(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 18:
			func_98(uParam1, "Extreme2", func_100(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 19:
			func_98(uParam1, "Extreme3", func_100(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 20:
			func_98(uParam1, "Extreme4", func_100(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 21:
			func_98(uParam1, "Fanatic1", func_100(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_99(iParam0), 1, 0);
			break;
		
		case 22:
			func_98(uParam1, "Fanatic2", func_100(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_99(iParam0), 1, 0);
			break;
		
		case 23:
			func_98(uParam1, "Fanatic3", func_100(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_99(iParam0), 0, 1);
			break;
		
		case 24:
			func_98(uParam1, "Hao1", func_100(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_99(iParam0), 0, 1);
			break;
		
		case 25:
			func_98(uParam1, "Hunting1", func_100(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 26:
			func_98(uParam1, "Hunting2", func_100(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 27:
			func_98(uParam1, "Josh1", func_100(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 28:
			func_98(uParam1, "Josh2", func_100(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 29:
			func_98(uParam1, "Josh3", func_100(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 30:
			func_98(uParam1, "Josh4", func_100(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 31:
			func_98(uParam1, "Maude1", func_100(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 32:
			func_98(uParam1, "Minute1", func_100(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 33:
			func_98(uParam1, "Minute2", func_100(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 34:
			func_98(uParam1, "Minute3", func_100(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 35:
			func_98(uParam1, "MrsPhilips1", func_100(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 36:
			func_98(uParam1, "MrsPhilips2", func_100(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 37:
			func_98(uParam1, "Nigel1", func_100(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 38:
			func_98(uParam1, "Nigel1A", func_100(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 39:
			func_98(uParam1, "Nigel1B", func_100(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_99(iParam0), 1, 1);
			break;
		
		case 40:
			func_98(uParam1, "Nigel1C", func_100(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_99(iParam0), 1, 1);
			break;
		
		case 41:
			func_98(uParam1, "Nigel1D", func_100(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_99(iParam0), 1, 1);
			break;
		
		case 42:
			func_98(uParam1, "Nigel2", func_100(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 43:
			func_98(uParam1, "Nigel3", func_100(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 44:
			func_98(uParam1, "Omega1", func_100(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 45:
			func_98(uParam1, "Omega2", func_100(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 46:
			func_98(uParam1, "Paparazzo1", func_100(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 47:
			func_98(uParam1, "Paparazzo2", func_100(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 48:
			func_98(uParam1, "Paparazzo3", func_100(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 49:
			func_98(uParam1, "Paparazzo3A", func_100(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 50:
			func_98(uParam1, "Paparazzo3B", func_100(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 51:
			func_98(uParam1, "Paparazzo4", func_100(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 52:
			func_98(uParam1, "Rampage1", func_100(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 54:
			func_98(uParam1, "Rampage3", func_100(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 55:
			func_98(uParam1, "Rampage4", func_100(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 56:
			func_98(uParam1, "Rampage5", func_100(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 53:
			func_98(uParam1, "Rampage2", func_100(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 57:
			func_98(uParam1, "TheLastOne", func_100(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 58:
			func_98(uParam1, "Tonya1", func_100(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 59:
			func_98(uParam1, "Tonya2", func_100(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 60:
			func_98(uParam1, "Tonya3", func_100(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 61:
			func_98(uParam1, "Tonya4", func_100(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 62:
			func_98(uParam1, "Tonya5", func_100(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_98(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_99(int iParam0)
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

struct<2> func_100(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_101(iParam0)};
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

struct<2> func_101(int iParam0)
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

bool func_102()
{
	if (func_105() && !func_106())
	{
		return true;
	}
	if (func_104() && func_103())
	{
		return true;
	}
	return false;
}

int func_103()
{
	return Global_100872 > 0;
}

bool func_104()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_105()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_106()
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

bool func_107()
{
	if (!func_65(5))
	{
		return true;
	}
	if (func_102())
	{
		return true;
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_106())
		{
			return false;
		}
	}
	if (func_96(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_108()
{
	if ((Global_101143 == func_28() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

bool func_109(int iParam0, struct<5> Param1, auto uParam2)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= iLocal_51 - 1)
		{
			request_model(Param1[iVar0]);
			iVar0++;
		}
		request_model(Param1.f_4);
		request_anim_dict("random@gang_intimidation@");
		prepare_music_event("RE28_OS");
		if (!has_model_loaded(Param1.f_4))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= iLocal_51 - 1)
		{
			if (!has_model_loaded(Param1[iVar0]))
			{
				return false;
			}
			iVar0++;
		}
		if (has_anim_dict_loaded("random@gang_intimidation@"))
		{
			return true;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= iLocal_51 - 1)
		{
			set_model_as_no_longer_needed(Param1[iVar0]);
			iVar0++;
		}
		set_model_as_no_longer_needed(Param1.f_4);
	}
	return false;
}

void func_110(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_28();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_112(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_111();
}

void func_111()
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

void func_112(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_113(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_28();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_145())
		{
			return false;
		}
	}
	vLocal_46 = {vParam0};
	iVar0 = false;
	if (!iVar0)
	{
		if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
		{
			vVar1 = {get_entity_coords(player_ped_id(), 1)};
			if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_106())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_4(0))
		{
			return false;
		}
		if (func_102())
		{
			return false;
		}
		if (func_144())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_22(func_82()))
		{
			if (func_96(100f, 1) != -1)
			{
				return false;
			}
		}
		if (is_player_playing(player_id()) && !iParam6)
		{
			if (vVar1.z - vLocal_46.z > 50f)
			{
				return false;
			}
		}
		if (!func_143(iParam3))
		{
			return false;
		}
		if (func_22(func_82()))
		{
			if (func_142(func_82()) == 4 || func_142(func_82()) == 5)
			{
				return false;
			}
		}
		if (func_22(func_82()))
		{
			if (!func_141(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_140(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_139())
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
		if (!func_86(4))
		{
			return false;
		}
		if (!func_65(5))
		{
			return false;
		}
		if (func_138(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_138(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_143(30) && !func_138(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_22(func_82()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_137(iVar8))
				{
					if (func_115(iVar4))
					{
						if (!func_114(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(player_ped_id(), 0), vVar5) < 210f * 210f)
							{
								if (func_82() != iVar4)
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

int func_114(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_116(iVar0);
}

int func_116(int iParam0)
{
	return func_117(iParam0, 1);
}

bool func_117(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_137(iParam0))
	{
		return false;
	}
	func_118(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_118(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_119(func_130(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_119(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_129(iParam0, iParam1))
	{
		iVar0 = func_128(iParam1);
		iVar1 = func_126(iParam0);
		iVar2 = func_126(iParam0) - func_126(iParam1);
		iVar3 = func_128(iParam0) - func_128(iParam1);
		iVar4 = func_125(iParam0) - func_125(iParam1);
		iVar5 = func_124(iParam0) - func_124(iParam1);
		iVar6 = func_123(iParam0) - func_123(iParam1);
		iVar7 = func_122(iParam0) - func_122(iParam1);
	}
	else
	{
		iVar0 = func_128(iParam0);
		iVar1 = func_126(iParam1);
		iVar2 = func_126(iParam1) - func_126(iParam0);
		iVar3 = func_128(iParam1) - func_128(iParam0);
		iVar4 = func_125(iParam1) - func_125(iParam0);
		iVar5 = func_124(iParam1) - func_124(iParam0);
		iVar6 = func_123(iParam1) - func_123(iParam0);
		iVar7 = func_122(iParam1) - func_122(iParam0);
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
		iVar4 += func_121(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_120(to_float(iVar0 + 1), 0f, 12f));
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

float func_120(Vector3 fParam0, float fParam1, float fParam2)
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

int func_121(int iParam0, int iParam1)
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

int func_122(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_123(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_124(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_125(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_126(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_127(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_128(int iParam0)
{
	return (iParam0 && 15);
}

bool func_129(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_137(iParam1) || !func_137(iParam0))
	{
		return true;
	}
	iVar0 = func_126(iParam0);
	iVar1 = func_126(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_128(iParam0);
	iVar1 = func_128(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_125(iParam0);
	iVar1 = func_125(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_124(iParam0);
	iVar1 = func_124(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_123(iParam0);
	iVar1 = func_123(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_122(iParam0);
	iVar1 = func_122(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_130()
{
	auto uVar0;
	
	func_136(&uVar0, get_clock_seconds());
	func_135(&uVar0, get_clock_minutes());
	func_134(&uVar0, get_clock_hours());
	func_133(&uVar0, get_clock_day_of_month());
	func_132(&uVar0, get_clock_month());
	func_131(&uVar0, get_clock_year());
	return uVar0;
}

void func_131(auto uParam0, int iParam1)
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

void func_132(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_133(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_128(*uParam0);
	iVar1 = func_126(*uParam0);
	if (iParam1 < 1 || iParam1 > func_121(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_134(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_135(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_136(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_137(int iParam0)
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
	iVar0 = func_122(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_123(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_124(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_126(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_128(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_125(iParam0);
	if (iVar5 < 1 || iVar5 > func_121(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_138(int iParam0, int iParam1)
{
	if (is_bit_set(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_139()
{
	func_50();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_140(int iParam0)
{
	return func_129(func_130(), iParam0);
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_82();
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

int func_142(int iParam0)
{
	if (!func_22(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_145())
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

bool func_144()
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

bool func_145()
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

void func_146(struct<6> Param0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam6 == 0)
	{
	}
	if (iLocal_249)
	{
		remove_scenario_blocking_areas();
		set_all_vehicle_generators_active_in_area(vLocal_243 - Vector(10f, 10f, 10f), vLocal_243 + Vector(10f, 10f, 10f), true, 1);
		set_wanted_level_multiplier(1f);
		func_40(uLocal_220[0]);
		func_40(uLocal_220[1]);
		func_40(uLocal_220[2]);
		iVar0 = 0;
		while (iVar0 <= iLocal_51 - 1)
		{
			if (!is_ped_injured(*iParam7[iVar0]))
			{
			}
			iVar0++;
		}
		if (!is_ped_injured(iParam8))
		{
			set_blocking_of_non_temporary_events(iParam8, false);
		}
		func_83(0);
		func_109(0, Param0);
	}
	func_147(-1);
	terminate_this_thread();
}

void func_147(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_28();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_108())
	{
		func_151(iParam0);
		set_mission_name(0, 0);
		Global_101145 = get_game_timer();
		func_150(30000);
		StringCopy(&cVar0, func_149(Global_101143, 1), 64);
		if (func_27(Global_101143) > 0)
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
	func_148(&Global_25179);
	Global_101144 = 0;
	func_112(-1);
}

void func_148(auto uParam0)
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

char* func_149(int iParam0, int iParam1)
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

void func_150(int iParam0)
{
	Global_36262 = get_game_timer() + iParam0;
}

void func_151(int iParam0)
{
	func_152(iParam0, 0, func_157(iParam0));
}

void func_152(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_130();
	func_155(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_154(uParam0, &uVar0);
	Var1 = {func_153(&uVar0)};
}

struct<16> func_153(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_124(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_123(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_122(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_125(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_128(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_126(*uParam0), 64);
	return cVar0;
}

void func_154(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_155(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_126(*uParam0);
	iVar1 = func_128(*uParam0);
	iVar2 = func_125(*uParam0);
	iVar3 = func_124(*uParam0);
	iVar4 = func_123(*uParam0);
	iVar5 = func_122(*uParam0);
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
	iVar6 = func_121(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_121(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_156(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_156(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_136(uParam0, iParam1);
	func_135(uParam0, iParam2);
	func_134(uParam0, iParam3);
	func_132(uParam0, iParam5);
	func_133(uParam0, iParam4);
	func_131(uParam0, iParam6);
}

int func_157(int iParam0)
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

bool func_158()
{
	if (is_bit_set(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

