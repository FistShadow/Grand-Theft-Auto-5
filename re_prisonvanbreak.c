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
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	auto uLocal_54 = 16;
	auto uLocal_55 = 0;
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
	Vector3 vLocal_219 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int[] iLocal_226 = new int[3];
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int[] iLocal_232 = new int[3];
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	var[] uLocal_243 = new var[16];
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	Vector3 vLocal_271 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int[] iLocal_292 = new int[2];
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	var[] uLocal_297 = new var[3];
	var[] uLocal_301 = new var[2];
	struct<2> Local_304 = 0;
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
	auto uLocal_321 = 5;
	auto uLocal_322 = 0;
	auto uLocal_323 = 0;
	auto uLocal_324 = 0;
	auto uLocal_325 = 0;
	auto uLocal_326 = 0;
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
	iLocal_18 = 3;
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
	vLocal_219 = {Local_304.f_1[0 /*3*/]};
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_142();
	}
	if (func_89(vLocal_219, -1, 0, 0, 0))
	{
		func_86(-1);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(false);
		if (is_world_point_within_brain_activation_range() || iLocal_274)
		{
			_0x208784099002BC30("RE_CR", 0);
			switch (iLocal_46)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_219, 100f, 100f, 100f, false, true, 0))
					{
						func_142();
					}
					if (iLocal_47)
					{
						iLocal_46 = 1;
					}
					else
					{
						func_85();
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					set_all_random_peds_flee_this_frame(player_id());
					func_84();
					func_82();
					if (!func_81())
					{
						func_78();
					}
					if (!iLocal_49)
					{
						func_67();
					}
					if (!iLocal_50 && !iLocal_284)
					{
						func_63();
					}
					if (iLocal_266 && !iLocal_49)
					{
						func_62(iLocal_226[0]);
						func_62(iLocal_226[1]);
						func_62(iLocal_226[2]);
					}
					if ((!iLocal_266 && !iLocal_284) && func_81())
					{
						func_61(iLocal_232[0], &(uLocal_243[0]), 1, 0.7f);
						func_61(iLocal_232[0], &(uLocal_243[1]), 5, 0.7f);
						func_61(iLocal_232[0], &(uLocal_243[2]), 0, 0.7f);
						func_61(iLocal_232[0], &(uLocal_243[3]), 4, 0.7f);
						func_61(iLocal_232[1], &(uLocal_243[4]), 1, 0.7f);
						func_61(iLocal_232[1], &(uLocal_243[5]), 5, 0.7f);
						func_61(iLocal_232[1], &(uLocal_243[6]), 0, 0.7f);
						func_61(iLocal_232[1], &(uLocal_243[7]), 4, 0.7f);
						func_61(iLocal_232[2], &(uLocal_243[8]), 1, 0.7f);
						func_61(iLocal_232[2], &(uLocal_243[9]), 5, 0.7f);
						func_61(iLocal_232[2], &(uLocal_243[10]), 0, 0.7f);
						func_61(iLocal_232[2], &(uLocal_243[11]), 4, 0.7f);
						func_61(iLocal_236, &(uLocal_243[12]), 1, 0.7f);
						func_61(iLocal_236, &(uLocal_243[13]), 5, 0.7f);
						func_61(iLocal_236, &(uLocal_243[14]), 0, 0.7f);
						func_61(iLocal_236, &(uLocal_243[15]), 4, 0.7f);
					}
					if (!iLocal_264)
					{
						func_59();
					}
					else
					{
						if (!iLocal_284)
						{
							func_58();
						}
						else if (!iLocal_281 && iLocal_49)
						{
							func_56();
						}
						if (!iLocal_285)
						{
							func_55();
						}
						func_54();
					}
					func_2();
					func_1();
					break;
			}
		}
		else
		{
			func_142();
		}
	}
}

void func_1()
{
}

void func_2()
{
	int iVar0;
	
	if (!iLocal_279)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_226[0], 0) || PED::IS_PED_INJURED(iLocal_226[0]))
		{
			func_53(&uLocal_54, 4);
			iLocal_279 = 1;
		}
	}
	if (!iLocal_260)
	{
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_222, 0) || PED::IS_PED_INJURED(iLocal_222)) || is_ped_hurt(iLocal_222))
		{
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				vLocal_271 = {get_dead_ped_pickup_coords(iLocal_222, 1067030938, 1069547520)};
				vLocal_271.z += 0.3f;
				iLocal_292[0] = create_pickup_rotate(joaat("pickup_money_case"), vLocal_271 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, false, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!does_blip_exist(uLocal_301[0]))
				{
					uLocal_301[0] = func_51(iLocal_292[0]);
				}
				iLocal_260 = true;
				func_53(&uLocal_54, 5);
			}
		}
	}
	if (!iLocal_261)
	{
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_223, 0) || PED::IS_PED_INJURED(iLocal_223)) || is_ped_hurt(iLocal_223))
		{
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				vLocal_271 = {get_dead_ped_pickup_coords(iLocal_223, 1067030938, 1069547520)};
				vLocal_271.z += 0.3f;
				iLocal_292[1] = create_pickup_rotate(joaat("pickup_money_case"), vLocal_271 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, false, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!does_blip_exist(uLocal_301[1]))
				{
					uLocal_301[1] = func_51(iLocal_292[1]);
				}
				iLocal_261 = true;
				func_53(&uLocal_54, 6);
			}
		}
	}
	if (!iLocal_284)
	{
		if (!iLocal_276)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_222))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_222, 0) || PED::IS_PED_INJURED(iLocal_222))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222, PLAYER::PLAYER_PED_ID(), 1))
					{
						remove_blip(&iLocal_295);
						iLocal_276 = 1;
						iLocal_50 = true;
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
						if (!PED::IS_PED_INJURED(iLocal_223))
						{
							task_combat_ped(iLocal_223, PLAYER::PLAYER_PED_ID(), 0, 16);
							set_ped_keep_task(iLocal_223, true);
							register_target(iLocal_223, PLAYER::PLAYER_PED_ID());
							_0x52D59AB61DDC05DD(iLocal_223, 1);
							func_53(&uLocal_54, 5);
							func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_275)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_223))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_223, 0) || PED::IS_PED_INJURED(iLocal_223))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_223, PLAYER::PLAYER_PED_ID(), 1))
					{
						remove_blip(&iLocal_296);
						iLocal_275 = 1;
						iLocal_50 = true;
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
						if (!PED::IS_PED_INJURED(iLocal_222))
						{
							task_combat_ped(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 16);
							set_ped_keep_task(iLocal_222, true);
							register_target(iLocal_222, PLAYER::PLAYER_PED_ID());
							_0x52D59AB61DDC05DD(iLocal_222, 1);
							func_38(&uLocal_54, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_37() || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, false, true, 0))
		{
			if (PED::IS_PED_INJURED(iLocal_222) && PED::IS_PED_INJURED(iLocal_223))
			{
				if (func_37() && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_219, 50f, 50f, 50f, false, true, 0))
				{
					func_7();
				}
				if (iLocal_50 && !iLocal_49)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, false, true, 0))
					{
						func_6(5);
						func_7();
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, false, true, 0))
			{
				func_5();
			}
		}
	}
	if (iLocal_284)
	{
		if (func_37())
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_222, 0) && ENTITY::IS_ENTITY_DEAD(iLocal_223, 0))
			{
				func_7();
			}
			if (iLocal_284)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_222))
				{
					if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_222, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!iLocal_50)
						{
							func_6(6);
						}
						func_7();
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_223))
				{
					if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_223, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!iLocal_50)
						{
							func_6(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_266 && !iLocal_49)
	{
		set_roads_back_to_original_in_angled_area(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		STREAMING::REQUEST_MODEL(joaat("ambulance"));
		request_anim_dict("random@countrysiderobbery");
		if (((ENTITY::IS_ENTITY_DEAD(iLocal_222, 0) && ENTITY::IS_ENTITY_DEAD(iLocal_223, 0)) && STREAMING::HAS_MODEL_LOADED(joaat("ambulance"))) && has_anim_dict_loaded("random@countrysiderobbery"))
		{
			remove_blip(&iLocal_295);
			remove_blip(&iLocal_296);
			func_53(&uLocal_54, 5);
			func_53(&uLocal_54, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (does_blip_exist(uLocal_297[iVar0]))
				{
					remove_blip(&(uLocal_297[iVar0]));
				}
				iVar0++;
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_268, 1862763509);
			_0xDC0F817884CDD856(5, true);
			_0xDC0F817884CDD856(3, true);
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 267.94f, 2700.48f, 43.6f, 15f, 15f, 15f, false, true, 0))
			{
				iLocal_237 = create_vehicle(joaat("ambulance"), 267.94f, 2700.48f, 43.1f, 180f, 1, true);
			}
			else
			{
				iLocal_237 = create_vehicle(joaat("ambulance"), 185.94f, 2603.48f, 46.9f, 0f, 1, true);
			}
			set_vehicle_siren(iLocal_237, true);
			iLocal_224 = PED::CREATE_PED_inside_vehicle(iLocal_237, 20, joaat("s_m_m_paramedic_01"), -1, 1, true);
			iLocal_225 = PED::CREATE_PED_inside_vehicle(iLocal_237, 20, joaat("s_m_m_paramedic_01"), false, 1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_224, 17, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_225, 17, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_224, 185, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_225, 185, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_222))
			{
				open_sequence_task(&iLocal_269);
				task_vehicle_drive_to_coord(false, iLocal_237, 307.1379f, 2640.042f, 43.4639f, 18f, 0, joaat("ambulance"), 786475, 5f, 5f);
				task_go_to_entity(false, iLocal_222, -1, 2f, 1f, 10f, 0);
				task_look_at_entity(false, iLocal_222, -1, 2052, 2);
				task_turn_ped_to_face_entity(false, iLocal_222, false);
				AI::TASK_PLAY_ANIM(false, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				AI::TASK_PLAY_ANIM(false, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				close_sequence_task(iLocal_269);
				task_perform_sequence(iLocal_224, iLocal_269);
				clear_sequence_task(&iLocal_269);
				set_ped_keep_task(iLocal_224, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_223))
			{
				open_sequence_task(&iLocal_269);
				task_pause(false, 15000);
				task_go_to_entity(false, iLocal_223, -1, 2f, 1f, 10f, 0);
				task_look_at_entity(false, iLocal_223, -1, 2052, 2);
				task_turn_ped_to_face_entity(false, iLocal_223, false);
				AI::TASK_PLAY_ANIM(false, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				AI::TASK_PLAY_ANIM(false, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				close_sequence_task(iLocal_269);
				task_perform_sequence(iLocal_225, iLocal_269);
				clear_sequence_task(&iLocal_269);
				set_ped_keep_task(iLocal_225, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_226[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_236))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_226[0], 185, true);
				open_sequence_task(&iLocal_269);
				task_follow_nav_mesh_to_coord(false, ENTITY::GET_ENTITY_COORDS(iLocal_236, 0) + Vector(0f, 5f, 0f), 1f, -1, 0.25f, 0, 1193033728);
				task_swap_weapon(false, 0);
				AI::TASK_PLAY_ANIM(false, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
				AI::TASK_PLAY_ANIM(false, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0, 0, 0, 0);
				close_sequence_task(iLocal_269);
				task_perform_sequence(iLocal_226[0], iLocal_269);
				clear_sequence_task(&iLocal_269);
				set_ped_keep_task(iLocal_226[0], true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_226[1], 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_230))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_226[1], 185, true);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_226[1], joaat("weapon_unarmed"), true);
				open_sequence_task(&iLocal_269);
				task_follow_nav_mesh_to_coord(false, ENTITY::GET_ENTITY_COORDS(iLocal_230, 0) + Vector(0f, 1f, 0f), 2f, -1, 0.25f, 0, 1193033728);
				task_look_at_coord(false, ENTITY::GET_ENTITY_COORDS(iLocal_230, 0), -1, 2052, 2);
				task_turn_ped_to_face_coord(false, ENTITY::GET_ENTITY_COORDS(iLocal_230, 0), 0);
				AI::TASK_PLAY_ANIM(false, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				AI::TASK_PLAY_ANIM(false, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				close_sequence_task(iLocal_269);
				task_perform_sequence(iLocal_226[1], iLocal_269);
				clear_sequence_task(&iLocal_269);
				set_ped_keep_task(iLocal_226[1], true);
			}
			if (!PED::IS_PED_INJURED(iLocal_226[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_223))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_226[2], 185, true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_223))
				{
					open_sequence_task(&iLocal_269);
					task_follow_nav_mesh_to_coord(false, ENTITY::GET_ENTITY_COORDS(iLocal_223, 0) + Vector(0f, 1f, 0f), 1f, -1, 0.25f, 0, 1193033728);
					task_swap_weapon(false, 0);
					AI::TASK_PLAY_ANIM(false, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0, 0, 0, 0);
					AI::TASK_PLAY_ANIM(false, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					close_sequence_task(iLocal_269);
					task_perform_sequence(iLocal_226[2], iLocal_269);
					clear_sequence_task(&iLocal_269);
				}
				set_ped_keep_task(iLocal_226[2], true);
			}
			func_3();
			wait(false);
			if (!PED::IS_PED_INJURED(iLocal_226[0]))
			{
				func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_226[1]))
			{
				set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_226[2]))
			{
				set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			func_3();
			wait(false);
			if (!PED::IS_PED_INJURED(iLocal_226[0]))
			{
				func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_226[1]))
			{
				set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_226[2]))
			{
				set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			settimerb(false);
			iLocal_266 = 1;
		}
	}
	if (iLocal_264 && !func_81())
	{
		func_5();
	}
	if (((((ENTITY::IS_ENTITY_DEAD(iLocal_222, 0) && ENTITY::IS_ENTITY_DEAD(iLocal_223, 0)) && ENTITY::IS_ENTITY_DEAD(iLocal_226[0], 0)) && ENTITY::IS_ENTITY_DEAD(iLocal_226[1], 0)) && ENTITY::IS_ENTITY_DEAD(iLocal_226[2], 0)) && (func_37() || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, false, true, 0)))
	{
		set_player_wanted_level_no_drop(player_id(), 2, 0);
		set_wanted_level_difficulty(player_id(), 0f);
		func_7();
	}
}

void func_3()
{
	Global_14578 = 0;
	func_4();
}

void func_4()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_5()
{
	func_142();
}

void func_6(int iParam0)
{
	Global_101140 = iParam0;
}

void func_7()
{
	if (!iLocal_49)
	{
	}
	while (func_36())
	{
		wait(false);
	}
	while (!func_35())
	{
		wait(false);
	}
	func_11(-1, 0);
	func_8();
	func_142();
}

void func_8()
{
	func_9();
}

bool func_9()
{
	if (func_10(0))
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

int func_10(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_32(iParam0))
	{
		func_31(iParam0, iParam1);
		if (!func_30(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_18(iParam0, iParam1) != 322)
		{
			func_12(func_18(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
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

void func_12(int iParam0, auto uParam1, auto uParam2)
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
		func_16(891 + iParam0, 1, -1, 1);
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
		func_13();
	}
}

void func_13()
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
		func_15(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_14() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_9();
				}
			}
		}
	}
}

auto func_14()
{
	return Global_25120;
}

int func_15(int iParam0, int iParam1)
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

int func_16(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_17();
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

auto func_17()
{
	return Global_1312747;
}

int func_18(int iParam0, int iParam1)
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

bool func_19(int iParam0)
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

void func_20(int iParam0)
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

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_23();
	}
}

void func_23()
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

int func_24()
{
	func_25();
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

void func_25()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_29(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_28(PLAYER::PLAYER_PED_ID());
			if (func_27(iVar0) && (!func_26(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_27(Global_101154.f_1826.f_539.f_3549))
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

int func_26(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_27(int iParam0)
{
	return iParam0 < 3;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_27(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_30(int iParam0)
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

void func_31(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_32(int iParam0)
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

auto func_33()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_34(cVar0);
	return uVar16;
}

int func_34(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_35()
{
	return true;
}

bool func_36()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_37()
{
	if (iLocal_260 || iLocal_261)
	{
		if (iLocal_260 && iLocal_261)
		{
			if (!does_blip_exist(uLocal_301[0]) && !does_blip_exist(uLocal_301[1]))
			{
				return true;
			}
		}
		if (iLocal_260 && !iLocal_261)
		{
			if (!does_blip_exist(uLocal_301[0]))
			{
				return true;
			}
		}
		if (iLocal_261 && !iLocal_260)
		{
			if (!does_blip_exist(uLocal_301[1]))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_38(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_49(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_39(sParam2, iParam3, 0);
}

bool func_39(char* sParam0, int iParam1, int iParam2)
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
					func_48();
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
		if (func_47(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_46();
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
				func_44();
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
				if (func_43())
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
			if (func_42())
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
			func_41();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_40();
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
		func_48();
	}
	return false;
}

void func_40()
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

void func_41()
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

bool func_42()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_43()
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

void func_44()
{
	if (func_26(14))
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
		Global_14413 = func_45();
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

auto func_45()
{
	func_25();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_46()
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

int func_47(int iParam0, int iParam1)
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

void func_48()
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

void func_49(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_50(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_51(int iParam0)
{
	int iVar0;
	
	if (!does_pickup_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_pickup(iParam0);
	set_blip_scale(iVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

float func_52(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_53(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_54()
{
	if (!iLocal_282)
	{
		if (!PED::IS_PED_INJURED(iLocal_222))
		{
			if (is_ped_in_any_vehicle(iLocal_222, 0))
			{
				iLocal_291 = get_vehicle_ped_is_in(iLocal_222, 0);
				if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_291, PLAYER::PLAYER_PED_ID(), 1) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && is_entity_at_entity(iLocal_291, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0)) || is_ped_being_jacked(iLocal_222)) || is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_291, 0)) || has_vehicle_got_projectile_attached(PLAYER::PLAYER_PED_ID(), iLocal_291, joaat("weapon_stickybomb"), -1))
				{
					set_blocking_of_non_temporary_events(iLocal_222, false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
					if (is_ped_in_any_vehicle(iLocal_222, 0))
					{
						give_weapon_to_ped(iLocal_222, joaat("weapon_microsmg"), 200, true, true);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_222, joaat("weapon_microsmg"), true);
						task_drive_by(iLocal_222, PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 200f, 50, 0, -753768974);
					}
					if (!PED::IS_PED_INJURED(iLocal_223))
					{
						if (is_ped_in_any_vehicle(iLocal_223, 0))
						{
							set_blocking_of_non_temporary_events(iLocal_223, false);
							give_weapon_to_ped(iLocal_223, joaat("weapon_microsmg"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_223, joaat("weapon_microsmg"), true);
							task_drive_by(iLocal_223, PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						}
					}
					iLocal_50 = true;
					iLocal_282 = 1;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222, PLAYER::PLAYER_PED_ID(), 1))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
				if ((is_ped_in_any_vehicle(iLocal_222, 0) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_291, 0))
				{
					if (is_entity_at_entity(iLocal_291, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
					{
						set_blocking_of_non_temporary_events(iLocal_222, false);
						give_weapon_to_ped(iLocal_222, joaat("weapon_microsmg"), 200, true, true);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_222, joaat("weapon_microsmg"), true);
						task_drive_by(iLocal_222, PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						iLocal_50 = true;
						iLocal_282 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_223))
				{
					if ((is_ped_in_any_vehicle(iLocal_223, 0) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_291, 0))
					{
						if (is_entity_at_entity(iLocal_291, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
						{
							set_blocking_of_non_temporary_events(iLocal_223, false);
							give_weapon_to_ped(iLocal_223, joaat("weapon_microsmg"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_223, joaat("weapon_microsmg"), true);
							task_drive_by(iLocal_223, PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							iLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_223))
		{
			if (is_ped_in_any_vehicle(iLocal_223, 0))
			{
				iLocal_291 = get_vehicle_ped_is_in(iLocal_223, 0);
				if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_291, PLAYER::PLAYER_PED_ID(), 1) || is_ped_being_jacked(iLocal_223)) || is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_291, 0)) || has_vehicle_got_projectile_attached(PLAYER::PLAYER_PED_ID(), iLocal_291, joaat("weapon_stickybomb"), -1))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
					if (!PED::IS_PED_INJURED(iLocal_222))
					{
						if ((is_ped_in_any_vehicle(iLocal_222, 0) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_291, 0))
						{
							if (is_entity_at_entity(iLocal_291, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
							{
								set_blocking_of_non_temporary_events(iLocal_222, false);
								give_weapon_to_ped(iLocal_222, joaat("weapon_microsmg"), 200, true, true);
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_222, joaat("weapon_microsmg"), true);
								task_drive_by(iLocal_222, PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 200f, 50, 0, -753768974);
								iLocal_50 = true;
								iLocal_282 = 1;
							}
						}
					}
					if ((is_ped_in_any_vehicle(iLocal_223, 0) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_291, 0))
					{
						if (is_entity_at_entity(iLocal_291, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
						{
							set_blocking_of_non_temporary_events(iLocal_223, false);
							give_weapon_to_ped(iLocal_223, joaat("weapon_microsmg"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_223, joaat("weapon_microsmg"), true);
							task_drive_by(iLocal_223, PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							iLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_223, PLAYER::PLAYER_PED_ID(), 1))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
				if (!PED::IS_PED_INJURED(iLocal_222))
				{
					if ((is_ped_in_any_vehicle(iLocal_222, 0) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_291, 0))
					{
						if (is_entity_at_entity(iLocal_291, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
						{
							give_weapon_to_ped(iLocal_222, joaat("weapon_microsmg"), 200, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_222, joaat("weapon_microsmg"), true);
							task_drive_by(iLocal_222, PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							iLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
				if ((is_ped_in_any_vehicle(iLocal_223, 0) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_291, 0))
				{
					if (is_entity_at_entity(iLocal_291, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
					{
						give_weapon_to_ped(iLocal_223, joaat("weapon_microsmg"), 200, true, true);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_223, joaat("weapon_microsmg"), true);
						task_drive_by(iLocal_223, PLAYER::PLAYER_PED_ID(), false, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						iLocal_50 = true;
						iLocal_282 = 1;
					}
				}
			}
		}
	}
}

void func_55()
{
	if (!PED::IS_PED_INJURED(iLocal_222) && !ENTITY::IS_ENTITY_DEAD(iLocal_236, 0))
	{
		if (!_0x639431E895B9AA57(iLocal_222, iLocal_236, -1, 0, false) && !_0x639431E895B9AA57(iLocal_222, iLocal_236, 0, 0, false))
		{
			task_smart_flee_coord(iLocal_222, vLocal_219, 1000f, -1, 0, 0);
			set_ped_keep_task(iLocal_222, true);
			iLocal_285 = 1;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_223) && !ENTITY::IS_ENTITY_DEAD(iLocal_236, 0))
	{
		if (!_0x639431E895B9AA57(iLocal_223, iLocal_236, -1, 0, false) && !_0x639431E895B9AA57(iLocal_223, iLocal_236, 0, 0, false))
		{
			task_smart_flee_coord(iLocal_223, vLocal_219, 1000f, -1, 0, 0);
			set_ped_keep_task(iLocal_223, true);
			iLocal_285 = 1;
		}
	}
}

void func_56()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_222, 0))
	{
		vLocal_271 = {ENTITY::GET_ENTITY_COORDS(iLocal_222, 1)};
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_223, 0))
	{
		vLocal_271 = {ENTITY::GET_ENTITY_COORDS(iLocal_223, 1)};
	}
	vLocal_271.z -= 0.11f;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_222, 0))
	{
		settimera(false);
		if (!iLocal_50)
		{
			func_3();
			wait(false);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_222, 0))
			{
				func_57(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_223, 0))
			{
				func_53(&uLocal_54, 5);
				func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_57(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			create_money_pickups(get_safe_pickup_coords(vLocal_271, 1.2f, 1.5f), 1000, 5, 0);
			iLocal_281 = 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_223, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_236, 0))
	{
		if (is_ped_in_vehicle(iLocal_223, iLocal_236, 0))
		{
			settimera(false);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_222, 0))
			{
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_223, 0))
			{
			}
			iLocal_281 = 1;
		}
	}
}

int func_57(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_49(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_39(sParam2, iParam4, 0);
}

void func_58()
{
	if (!iLocal_284)
	{
		set_roads_back_to_original_in_angled_area(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		if (iLocal_288)
		{
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				if (is_ped_jacking(iLocal_222))
				{
					func_3();
					wait(false);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_223))
			{
				if (is_ped_jacking(iLocal_223))
				{
					func_3();
					wait(false);
					func_53(&uLocal_54, 5);
					func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
		}
		if (iLocal_265 == 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_222) && !ENTITY::IS_ENTITY_DEAD(iLocal_236, 0))
			{
				if (is_ped_in_vehicle(iLocal_222, iLocal_236, 0))
				{
					set_ped_flee_attributes(iLocal_222, 2, true);
					open_sequence_task(&iLocal_269);
					task_vehicle_mission_ped_target(false, iLocal_236, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, 1);
					close_sequence_task(iLocal_269);
					task_perform_sequence(iLocal_222, iLocal_269);
					clear_sequence_task(&iLocal_269);
					set_ped_keep_task(iLocal_222, true);
					iLocal_284 = true;
				}
			}
		}
		if (iLocal_265 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_223) && !ENTITY::IS_ENTITY_DEAD(iLocal_236, 0))
			{
				if (is_ped_in_vehicle(iLocal_223, iLocal_236, 0))
				{
					set_ped_flee_attributes(iLocal_223, 2, true);
					open_sequence_task(&iLocal_269);
					task_vehicle_mission_ped_target(false, iLocal_236, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, 1);
					close_sequence_task(iLocal_269);
					task_perform_sequence(iLocal_223, iLocal_269);
					clear_sequence_task(&iLocal_269);
					set_ped_keep_task(iLocal_223, true);
					iLocal_284 = true;
				}
			}
		}
		if (iLocal_265 == 3)
		{
			if ((!PED::IS_PED_INJURED(iLocal_223) && !PED::IS_PED_INJURED(iLocal_222)) && !ENTITY::IS_ENTITY_DEAD(iLocal_236, 0))
			{
				if (is_ped_in_vehicle(iLocal_222, iLocal_236, 0) && is_ped_in_vehicle(iLocal_223, iLocal_236, 0))
				{
					set_ped_flee_attributes(iLocal_222, 2, true);
					set_ped_flee_attributes(iLocal_223, 2, true);
					open_sequence_task(&iLocal_269);
					task_vehicle_mission_ped_target(false, iLocal_236, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, 1);
					close_sequence_task(iLocal_269);
					task_perform_sequence(iLocal_222, iLocal_269);
					clear_sequence_task(&iLocal_269);
					set_blocking_of_non_temporary_events(iLocal_223, false);
					set_ped_keep_task(iLocal_222, true);
					iLocal_284 = true;
				}
			}
			if (PED::IS_PED_INJURED(iLocal_222) && !PED::IS_PED_INJURED(iLocal_223))
			{
				func_53(&uLocal_54, 5);
				task_enter_vehicle(iLocal_223, iLocal_236, -1, -1, 2f, 8, 0);
				iLocal_265 = 2;
			}
			if (PED::IS_PED_INJURED(iLocal_223) && !PED::IS_PED_INJURED(iLocal_222))
			{
				func_53(&uLocal_54, 6);
				task_enter_vehicle(iLocal_222, iLocal_236, -1, -1, 2f, 8, 0);
				iLocal_265 = 1;
			}
		}
		if (iLocal_265 == 4)
		{
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				AI::CLEAR_PED_TASKS(iLocal_222);
				task_smart_flee_coord(iLocal_222, vLocal_219, 1000f, -1, 0, 0);
				set_ped_keep_task(iLocal_222, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_223))
			{
				AI::CLEAR_PED_TASKS(iLocal_223);
				task_smart_flee_coord(iLocal_223, vLocal_219, 1000f, -1, 0, 0);
				set_ped_keep_task(iLocal_223, true);
			}
			iLocal_284 = true;
		}
	}
}

void func_59()
{
	if ((ENTITY::IS_ENTITY_DEAD(iLocal_226[0], 0) && ENTITY::IS_ENTITY_DEAD(iLocal_226[1], 0)) && ENTITY::IS_ENTITY_DEAD(iLocal_226[2], 0))
	{
		func_53(&uLocal_54, 4);
		iLocal_274 = 1;
		iLocal_264 = 1;
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_267, 1862763509);
		if (!iLocal_50 && iLocal_49)
		{
			remove_blip(&iLocal_295);
			remove_blip(&iLocal_296);
		}
		if (!iLocal_50)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_222, 0))
			{
				func_60(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_223, 0))
			{
				func_53(&uLocal_54, 5);
				func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_60(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (is_vehicle_driveable(iLocal_236, 0))
		{
			clear_entity_last_damage_entity(iLocal_236);
			if (!PED::IS_PED_INJURED(iLocal_222) && !is_ped_hurt(iLocal_222))
			{
				set_ped_current_weapon_visible(iLocal_222, 1, 1, 1, 0);
				iLocal_265 = 1;
				AI::CLEAR_PED_TASKS(iLocal_222);
				task_set_blocking_of_non_temporary_events(iLocal_222, 1);
				set_blocking_of_non_temporary_events(iLocal_222, true);
				clear_entity_last_damage_entity(iLocal_222);
				clear_entity_last_damage_entity(iLocal_236);
				open_sequence_task(&iLocal_269);
				task_enter_vehicle(false, iLocal_236, -1, -1, 2f, 9, 0);
				close_sequence_task(iLocal_269);
				task_perform_sequence(iLocal_222, iLocal_269);
				clear_sequence_task(&iLocal_269);
				if (!PED::IS_PED_INJURED(iLocal_223) && !is_ped_hurt(iLocal_223))
				{
					AI::CLEAR_PED_TASKS(iLocal_223);
					set_blocking_of_non_temporary_events(iLocal_223, true);
					clear_entity_last_damage_entity(iLocal_223);
					clear_entity_last_damage_entity(iLocal_236);
					task_set_blocking_of_non_temporary_events(iLocal_223, 1);
					task_enter_vehicle(iLocal_223, iLocal_236, -1, false, 2f, 1, 0);
					iLocal_265 = 3;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_223))
			{
				task_set_blocking_of_non_temporary_events(iLocal_223, 1);
				set_ped_current_weapon_visible(iLocal_223, 1, 1, 1, 0);
				AI::CLEAR_PED_TASKS(iLocal_223);
				set_blocking_of_non_temporary_events(iLocal_223, true);
				clear_entity_last_damage_entity(iLocal_223);
				clear_entity_last_damage_entity(iLocal_236);
				open_sequence_task(&iLocal_269);
				task_enter_vehicle(false, iLocal_236, -1, -1, 2f, 1, 0);
				close_sequence_task(iLocal_269);
				task_perform_sequence(iLocal_223, iLocal_269);
				clear_sequence_task(&iLocal_269);
				iLocal_265 = 2;
			}
		}
		else
		{
			iLocal_265 = 4;
		}
	}
}

int func_60(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_49(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_39(sParam2, iParam4, 0);
}

void func_61(int iParam0, auto uParam1, int iParam2, Vector3 fParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					vVar0 = {-1f, 1f, 0.5f};
					vVar3 = {-0.5f, 0.75f, 0.05f};
					iVar6 = 0;
					break;
				
				case 1:
					vVar0 = {1f, 1f, 0.5f};
					vVar3 = {0.5f, 0.75f, 0.05f};
					iVar6 = 1;
					break;
				
				case 4:
					vVar0 = {-1f, -1f, 0.5f};
					vVar3 = {-0.5f, -0.75f, 0.05f};
					iVar6 = 2;
					break;
				
				case 5:
					vVar0 = {1f, -1f, 0.5f};
					vVar3 = {0.5f, -0.75f, 0.05f};
					iVar6 = 3;
					break;
			}
			if (has_bullet_impacted_in_area(get_offset_from_entity_in_world_coords(iParam0, vVar0), fParam3, 1, 1) || has_bullet_impacted_in_area(get_offset_from_entity_in_world_coords(iParam0, vVar0), fParam3, 0, 1))
			{
				switch (*uParam1)
				{
					case 0:
						set_vehicle_tyre_burst(iParam0, iParam2, 0, 1000f);
						*uParam1++;
						break;
					
					case 1:
						smash_vehicle_window(iParam0, iVar6);
						*uParam1++;
						break;
					
					case 2:
						*uParam1++;
						break;
					
					case 3:
						*uParam1++;
						break;
					
					case 4:
						set_vehicle_damage(iParam0, vVar3, 150f, 50f, 1);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_62(int iParam0)
{
	if ((!PED::IS_PED_INJURED(iParam0) && !func_36()) && timera() > 12000)
	{
		func_50(&uLocal_54, 4, iParam0, "RECSBCop1", 0, 1);
		if (is_entity_at_entity(iParam0, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
		{
			func_38(&uLocal_54, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			settimera(false);
		}
	}
}

void func_63()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_222, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_50 = true;
			settimera(false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				task_combat_ped(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_222, true);
				register_target(iLocal_222, PLAYER::PLAYER_PED_ID());
				_0x52D59AB61DDC05DD(iLocal_222, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_223))
			{
				task_combat_ped(iLocal_223, PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_223, true);
				register_target(iLocal_223, PLAYER::PLAYER_PED_ID());
				_0x52D59AB61DDC05DD(iLocal_223, 1);
			}
			if (!iLocal_49)
			{
				func_3();
				wait(false);
				if (!PED::IS_PED_INJURED(iLocal_226[0]))
				{
					func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_226[1]))
				{
					set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_226[2]))
				{
					set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_222))
		{
			if (!func_66() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (is_player_targetting_entity(player_id(), iLocal_222) || is_player_free_aiming_at_entity(player_id(), iLocal_222))
				{
					if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_222, 20f, 20f, 20f, 0, 1, 0) && has_entity_clear_los_to_entity_in_front(iLocal_222, PLAYER::PLAYER_PED_ID()))
					{
						iLocal_240++;
						if (!iLocal_241 && !func_64("recsb_theaim"))
						{
							func_3();
							wait(false);
							if (!PED::IS_PED_INJURED(iLocal_222))
							{
								func_38(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!PED::IS_PED_INJURED(iLocal_223))
							{
								func_53(&uLocal_54, 5);
								func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
								func_38(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_241 = 1;
						}
						if (iLocal_240 > 45)
						{
							iLocal_50 = true;
							settimera(false);
							if (!iLocal_49)
							{
								func_3();
								wait(false);
								if (!PED::IS_PED_INJURED(iLocal_226[0]))
								{
									func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_226[1]))
								{
									set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_54, 4);
									func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_226[2]))
								{
									set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_54, 4);
									func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_241 || iLocal_242)
				{
					iLocal_240 = 45;
				}
				else
				{
					iLocal_240 = 0;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_223, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_223, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_50 = true;
			settimera(false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
			if (!PED::IS_PED_INJURED(iLocal_223))
			{
				task_combat_ped(iLocal_223, PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_223, true);
				register_target(iLocal_223, PLAYER::PLAYER_PED_ID());
				_0x52D59AB61DDC05DD(iLocal_223, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				task_combat_ped(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_222, true);
				register_target(iLocal_222, PLAYER::PLAYER_PED_ID());
				_0x52D59AB61DDC05DD(iLocal_222, 1);
			}
			if (!iLocal_49)
			{
				func_3();
				wait(false);
				if (!PED::IS_PED_INJURED(iLocal_226[0]))
				{
					func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_226[1]))
				{
					set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_226[2]))
				{
					set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_223))
		{
			if (!func_66() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (is_player_targetting_entity(player_id(), iLocal_223) || is_player_free_aiming_at_entity(player_id(), iLocal_223))
				{
					if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_223, 20f, 20f, 20f, 0, 1, 0) && has_entity_clear_los_to_entity_in_front(iLocal_223, PLAYER::PLAYER_PED_ID()))
					{
						if ((!iLocal_242 && !PED::IS_PED_INJURED(iLocal_222)) && !func_64("recsb_theaim"))
						{
							func_3();
							wait(false);
							if (!PED::IS_PED_INJURED(iLocal_222))
							{
								func_38(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!PED::IS_PED_INJURED(iLocal_223))
							{
								func_53(&uLocal_54, 5);
								func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
								func_38(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_242 = 1;
						}
						iLocal_239++;
						if (iLocal_239 > 45)
						{
							iLocal_50 = true;
							settimera(false);
							if (!iLocal_49)
							{
								func_3();
								wait(false);
								if (!PED::IS_PED_INJURED(iLocal_226[0]))
								{
									func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_226[1]))
								{
									set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_54, 4);
									func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_226[2]))
								{
									set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_54, 4);
									func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_241 || iLocal_242)
				{
					iLocal_240 = 45;
				}
				else
				{
					iLocal_240 = 0;
				}
			}
		}
	}
	if (!iLocal_289 && iLocal_260)
	{
		if (has_pickup_been_collected(iLocal_292[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				if (has_entity_clear_los_to_entity_in_front(iLocal_222, PLAYER::PLAYER_PED_ID()) && is_entity_at_entity(iLocal_222, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					iLocal_50 = true;
					func_3();
					wait(false);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_223))
			{
				if (has_entity_clear_los_to_entity_in_front(iLocal_223, PLAYER::PLAYER_PED_ID()) && is_entity_at_entity(iLocal_223, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					iLocal_50 = true;
					func_53(&uLocal_54, 5);
					func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_3();
					wait(false);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
		}
	}
	if (!iLocal_290 && iLocal_261)
	{
		if (has_pickup_been_collected(iLocal_292[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				if (has_entity_clear_los_to_entity_in_front(iLocal_222, PLAYER::PLAYER_PED_ID()) && is_entity_at_entity(iLocal_222, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					iLocal_50 = true;
					func_3();
					wait(false);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_290 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_223))
			{
				if (has_entity_clear_los_to_entity_in_front(iLocal_223, PLAYER::PLAYER_PED_ID()) && is_entity_at_entity(iLocal_223, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					iLocal_50 = true;
					func_53(&uLocal_54, 5);
					func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_3();
					wait(false);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_290 = 1;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_236, 0))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_236, PLAYER::PLAYER_PED_ID(), 1) || is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_236, 0)) || has_vehicle_got_projectile_attached(PLAYER::PLAYER_PED_ID(), iLocal_236, joaat("weapon_stickybomb"), -1))
		{
			iLocal_50 = true;
			settimera(false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				task_combat_ped(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_222, true);
				register_target(iLocal_222, PLAYER::PLAYER_PED_ID());
				_0x52D59AB61DDC05DD(iLocal_222, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_223))
			{
				task_combat_ped(iLocal_223, PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_223, true);
				register_target(iLocal_223, PLAYER::PLAYER_PED_ID());
				_0x52D59AB61DDC05DD(iLocal_223, 1);
			}
			func_3();
			wait(false);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_236, 0))
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_236, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_222))
					{
						func_60(&uLocal_54, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						task_enter_vehicle(iLocal_222, iLocal_236, -1, -1, 2f, 524296, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_223))
					{
						func_53(&uLocal_54, 5);
						func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
						func_60(&uLocal_54, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						task_enter_vehicle(iLocal_223, iLocal_236, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!iLocal_49)
				{
					if (!PED::IS_PED_INJURED(iLocal_226[0]))
					{
						func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_226[1]))
					{
						set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_54, 4);
						func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_226[2]))
					{
						set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_54, 4);
						func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

bool func_64(char* sParam0)
{
	auto uVar0;
	
	if (func_36())
	{
		MemCopy(&uVar0, {func_65()}, 4);
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

struct<6> func_65()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

bool func_66()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("lazer")) || is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("buzzard")))
			{
				return true;
			}
		}
	}
	return false;
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_286)
	{
		get_entity_player_is_free_aiming_at(player_id(), &iLocal_270);
		if (is_entity_a_ped(iLocal_270))
		{
			iLocal_231 = get_ped_index_from_entity_index(iLocal_270);
		}
		if ((iLocal_231 == iLocal_226[0] || iLocal_231 == iLocal_226[1]) || iLocal_231 == iLocal_226[2])
		{
			if (!PED::IS_PED_INJURED(iLocal_231))
			{
				if (!func_66() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					if (is_player_targetting_entity(player_id(), iLocal_231) || is_player_free_aiming_at_entity(player_id(), iLocal_231))
					{
						if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_231, 20f, 20f, 20f, 0, 1, 0))
						{
							if (has_entity_clear_los_to_entity_in_front(iLocal_231, PLAYER::PLAYER_PED_ID()) || is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_231, 8f, 8f, 8f, 0, 1, 0))
							{
								if (!iLocal_287)
								{
									if (!func_64("recsb_coppon"))
									{
										if (!PED::IS_PED_INJURED(iLocal_226[0]))
										{
											func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
											func_3();
											wait(false);
											func_38(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											iLocal_287 = true;
										}
										else if (!PED::IS_PED_INJURED(iLocal_226[1]))
										{
											set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_53(&uLocal_54, 4);
											func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
											func_3();
											wait(false);
											func_38(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											iLocal_287 = true;
										}
										else if (!PED::IS_PED_INJURED(iLocal_226[2]))
										{
											set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_53(&uLocal_54, 4);
											func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
											func_3();
											wait(false);
											func_38(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											iLocal_287 = true;
										}
									}
								}
								iLocal_238++;
								if (iLocal_238 > 40)
								{
									iLocal_286 = true;
									iLocal_49 = true;
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_270, 0))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, 1862763509);
										iVar0 = 0;
										while (iVar0 < iLocal_226)
										{
											if (!PED::IS_PED_INJURED(iLocal_226[iVar0]))
											{
												task_combat_ped(iLocal_226[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
												set_ped_keep_task(iLocal_226[iVar0], true);
												register_target(iLocal_226[iVar0], PLAYER::PLAYER_PED_ID());
												_0x52D59AB61DDC05DD(iLocal_226[iVar0], 1);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (iLocal_287)
					{
						iLocal_238 = 40;
					}
					else
					{
						iLocal_238 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_226)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_226[iVar1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_226[iVar1], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_49 = true;
			}
			if (is_vehicle_driveable(get_players_last_vehicle(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_226[iVar1], get_players_last_vehicle(), 1))
				{
					iLocal_49 = true;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_286)
	{
	}
	if (iLocal_266)
	{
		if (timerb() > 6000)
		{
			if (timerb() > 6000 && timerb() < 7000)
			{
				stop_fire_in_range(330.1744f, 2629.238f, 43.5056f, 30f);
			}
			if (!iLocal_262)
			{
				if (iLocal_50)
				{
					if (!func_36())
					{
						if (!PED::IS_PED_INJURED(iLocal_226[0]))
						{
							func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_226[1]))
						{
							set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_226[2]))
						{
							set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_262 = 1;
					}
				}
				else if (!iLocal_264)
				{
					if (!func_36())
					{
						if (!PED::IS_PED_INJURED(iLocal_226[0]))
						{
							func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_226[1]))
						{
							set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_226[2]))
						{
							set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_262 = 1;
					}
				}
			}
			if (is_ped_shooting_in_area(PLAYER::PLAYER_PED_ID(), Vector(43.5005f, 2626.29f, 326.6079f) - Vector(50f, 50f, 50f), Vector(43.5005f, 2626.29f, 326.6079f) + Vector(50f, 50f, 50f), 0, 1))
			{
				iLocal_49 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_236, 0))
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_236, 0))
				{
					iLocal_49 = true;
					func_3();
					wait(false);
					if (!PED::IS_PED_INJURED(iLocal_226[0]))
					{
						func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_226[1]))
					{
						set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_54, 4);
						func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_226[2]))
					{
						set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_54, 4);
						func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_226)
		{
			if (!PED::IS_PED_INJURED(iLocal_226[iVar1]))
			{
				if (has_pickup_been_collected(iLocal_292[0]) || has_pickup_been_collected(iLocal_292[1]))
				{
					if (has_entity_clear_los_to_entity_in_front(iLocal_226[iVar1], PLAYER::PLAYER_PED_ID()) && is_entity_at_entity(iLocal_226[iVar1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
					{
						iLocal_49 = true;
						func_3();
						wait(false);
						if (!PED::IS_PED_INJURED(iLocal_226[0]))
						{
							func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_226[1]))
						{
							set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_226[2]))
						{
							set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_226[iVar1]))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_268, 1862763509);
					iLocal_49 = true;
				}
			}
			iVar1++;
		}
		if (!PED::IS_PED_INJURED(iLocal_226[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_232[2], 0))
		{
			if (!is_entity_at_entity(iLocal_226[1], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
			{
				set_ped_as_no_longer_needed(&(iLocal_226[1]));
				set_vehicle_as_no_longer_needed(&(iLocal_232[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_232)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_232[iVar1], 0))
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_232[iVar1], PLAYER::PLAYER_PED_ID(), 1) || is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_232[iVar1], 0)) || has_vehicle_got_projectile_attached(PLAYER::PLAYER_PED_ID(), iLocal_232[iVar1], joaat("weapon_stickybomb"), -1))
			{
				iLocal_49 = true;
			}
			if (is_vehicle_driveable(get_players_last_vehicle(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_232[iVar1], get_players_last_vehicle(), 1))
				{
					iLocal_49 = true;
				}
			}
		}
		iVar1++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_237, PLAYER::PLAYER_PED_ID(), 1) || is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_237, 0))
		{
			iLocal_49 = true;
		}
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || is_ped_in_model(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
		{
			iVar2 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
			if (iLocal_266)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_236, 0))
				{
					if (is_vehicle_attached_to_tow_truck(iVar2, iLocal_236))
					{
						iLocal_49 = true;
						func_3();
						wait(false);
						if (!PED::IS_PED_INJURED(iLocal_226[0]))
						{
							func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_226[1]))
						{
							set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_226[2]))
						{
							set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_232)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_232[iVar1], 0))
				{
					if (is_vehicle_attached_to_tow_truck(iVar2, iLocal_232[iVar1]))
					{
						iLocal_49 = true;
					}
				}
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, 0))
			{
				if (is_vehicle_attached_to_tow_truck(iVar2, iLocal_237))
				{
					iLocal_49 = true;
				}
			}
		}
	}
	if (iLocal_49 || iLocal_286)
	{
		settimera(false);
		set_police_ignore_player(player_id(), 0);
		set_player_wanted_level_no_drop(player_id(), true, 0);
		set_player_wanted_level_now(player_id(), 0);
		set_wanted_level_difficulty(player_id(), 0f);
		set_wanted_level_multiplier(0.1f);
		set_dispatch_ideal_spawn_distance(350f);
		iLocal_49 = true;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_236, 0) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_236, 0))
		{
		}
		else
		{
			func_3();
			wait(false);
			if (!iLocal_266)
			{
				if (PED::IS_PED_INJURED(iLocal_222) && !PED::IS_PED_INJURED(iLocal_223))
				{
					func_53(&uLocal_54, 5);
					func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_226[0]))
				{
					func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_226[1]))
				{
					set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_226[2]))
				{
					set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_226[0]))
			{
				func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_226[1]))
			{
				set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_226[2]))
			{
				set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, 1862763509);
		if (!func_81())
		{
			settimera(false);
			if (!func_81())
			{
				func_68(1);
			}
		}
		if (iLocal_266)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_226)
			{
				if (!PED::IS_PED_INJURED(iLocal_226[iVar1]))
				{
					task_combat_ped(iLocal_226[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					set_ped_keep_task(iLocal_226[iVar1], true);
					register_target(iLocal_226[iVar1], PLAYER::PLAYER_PED_ID());
					set_ped_current_weapon_visible(iLocal_226[iVar1], 1, 1, 1, 0);
					_0x52D59AB61DDC05DD(iLocal_226[iVar1], 1);
					set_ped_combat_movement(iLocal_226[iVar1], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_226[iVar1], 50, true);
				}
				iVar1++;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_224))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_224, PLAYER::PLAYER_PED_ID(), 1))
		{
			set_police_ignore_player(player_id(), 0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, 1862763509);
			iLocal_49 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_225))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225, PLAYER::PLAYER_PED_ID(), 1))
		{
			set_police_ignore_player(player_id(), 0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, 1862763509);
			iLocal_49 = true;
		}
	}
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		iLocal_49 = true;
		set_police_ignore_player(player_id(), 0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, 1862763509);
	}
}

bool func_68(int iParam0)
{
	if (func_72())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_19(Global_101143))
		{
			func_69(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_19(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_70(func_71(iParam0), -1);
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
					func_70(func_71(iParam0), -1);
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
					func_70(func_71(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_70(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

char* func_71(int iParam0)
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

bool func_72()
{
	switch (func_73(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_73(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_77(0))
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
		if (!func_75(iParam2))
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
			func_74(uParam0, iParam4);
		}
	}
	return 2;
}

void func_74(auto uParam0, int iParam1)
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

int func_75(int iParam0)
{
	return func_76(iParam0, Global_35711);
}

bool func_76(int iParam0, int iParam1)
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

bool func_77(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_75(iParam0))
	{
		return false;
	}
	return true;
}

void func_78()
{
	int iVar0;
	
	if ((!PED::IS_PED_INJURED(iLocal_226[0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(iLocal_222))
	{
	}
	if ((is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 220.6075f, 2615.145f, 35.8465f, 440.8339f, 2684.23f, 72.6324f, 183.125f, 0, true, 0) && CAM::IS_SPHERE_VISIBLE(vLocal_219, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_226)
		{
			if (!PED::IS_PED_INJURED(iLocal_226[iVar0]))
			{
				set_entity_can_be_damaged_by_relationship_group(iLocal_226[iVar0], 1, iLocal_267);
				if (!does_blip_exist(uLocal_297[iVar0]))
				{
					uLocal_297[iVar0] = func_79(iLocal_226[iVar0], 0, 145);
					_0x75A16C3DA34F1245(uLocal_297[iVar0], false);
				}
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_222, 0) || (!PED::IS_PED_INJURED(iLocal_222) && !iLocal_277))
		{
			set_entity_can_be_damaged_by_relationship_group(iLocal_222, 1, iLocal_268);
			iLocal_295 = func_79(iLocal_222, 0, 145);
			_0x75A16C3DA34F1245(iLocal_295, false);
			iLocal_276 = 0;
			iLocal_277 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_223, 0) || (!PED::IS_PED_INJURED(iLocal_223) && !iLocal_278))
		{
			set_entity_can_be_damaged_by_relationship_group(iLocal_223, 1, iLocal_268);
			iLocal_296 = func_79(iLocal_223, 0, 145);
			_0x75A16C3DA34F1245(iLocal_296, false);
			iLocal_275 = 0;
			iLocal_278 = 1;
		}
		settimera(false);
		if (!func_81())
		{
			func_68(1);
		}
	}
}

int func_79(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_81()
{
	if ((Global_101143 == func_33() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_82()
{
	int iVar0;
	
	if (!iLocal_280)
	{
		if (!iLocal_49 && !iLocal_266)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, false, true, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_226)
				{
					if (does_blip_exist(uLocal_297[iVar0]))
					{
						_0x75A16C3DA34F1245(uLocal_297[iVar0], true);
					}
					iVar0++;
				}
				if (does_blip_exist(iLocal_295))
				{
					_0x75A16C3DA34F1245(iLocal_295, true);
				}
				if (does_blip_exist(iLocal_296))
				{
					_0x75A16C3DA34F1245(iLocal_296, true);
				}
				if (!PED::IS_PED_INJURED(iLocal_226[0]))
				{
					func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_226[1]))
				{
					set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_226[2]))
				{
					set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_280 = 1;
			}
		}
	}
	if ((func_81() && !iLocal_264) && !iLocal_266)
	{
		if (iLocal_283 == 0 && !func_36())
		{
			settimera(false);
			if (func_45() == 0)
			{
				func_38(&uLocal_54, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (func_45() == 1)
			{
				func_38(&uLocal_54, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (func_45() == 2)
			{
				func_38(&uLocal_54, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_283++;
			settimera(false);
		}
		if (iLocal_283 == 1 && !func_36())
		{
			settimera(false);
			if (!PED::IS_PED_INJURED(iLocal_226[0]))
			{
				func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_226[1]))
			{
				set_ambient_voice_name(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_226[2]))
			{
				set_ambient_voice_name(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_283++;
			settimera(false);
		}
		if ((iLocal_283 == 2 && timera() > 2000) && !func_36())
		{
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				func_38(&uLocal_54, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_223))
			{
				func_53(&uLocal_54, 5);
				func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			settimera(false);
			iLocal_283++;
		}
		if ((iLocal_283 == 3 && timera() > 2000) && !func_36())
		{
			if (!iLocal_50)
			{
				if (!iLocal_263)
				{
					if (!PED::IS_PED_INJURED(iLocal_222))
					{
						func_38(&uLocal_54, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_223))
					{
						func_53(&uLocal_54, 5);
						func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_263 = 1;
				}
			}
			if (!iLocal_49)
			{
				func_83(&(iLocal_226[0]), "recsb_copclo");
				func_83(&(iLocal_226[1]), "recsb_copclo");
				func_83(&(iLocal_226[2]), "recsb_copclo");
			}
		}
		if (iLocal_283 == 4 && timera() > 5000)
		{
			settimera(false);
			iLocal_283++;
		}
	}
}

void func_83(auto uParam0, char* sParam1)
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), *uParam0, 4f, 4f, 4f, 0, 1, 0))
		{
			if (!iLocal_49)
			{
				func_50(&uLocal_54, 4, *uParam0, "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", sParam1, 4, 0, 0, 0);
				task_look_at_entity(*uParam0, PLAYER::PLAYER_PED_ID(), 10000, 48, 4);
			}
			settimera(false);
			iLocal_283++;
		}
	}
}

void func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_226)
	{
		if (PED::IS_PED_INJURED(iLocal_226[iVar0]))
		{
			if (does_blip_exist(uLocal_297[iVar0]))
			{
				remove_blip(&(uLocal_297[iVar0]));
			}
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_222))
	{
		if (does_blip_exist(iLocal_295))
		{
			remove_blip(&iLocal_295);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_223))
	{
		if (does_blip_exist(iLocal_296))
		{
			remove_blip(&iLocal_296);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_232)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_232[iVar0], 0))
		{
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_232[iVar0], 0))
			{
				disable_vehicle_impact_explosion_activation(iLocal_232[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (iLocal_50)
	{
		if (!iLocal_52)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				if (does_blip_exist(iLocal_295))
				{
					remove_blip(&iLocal_295);
				}
				if (!does_blip_exist(iLocal_295))
				{
					iLocal_295 = func_79(iLocal_222, 1, 145);
					set_ped_can_be_targetted(iLocal_222, true);
				}
				task_combat_ped(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_222, true);
				register_target(iLocal_222, PLAYER::PLAYER_PED_ID());
				_0x52D59AB61DDC05DD(iLocal_222, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_223))
			{
				if (does_blip_exist(iLocal_296))
				{
					remove_blip(&iLocal_296);
				}
				if (!does_blip_exist(iLocal_296))
				{
					iLocal_296 = func_79(iLocal_223, 1, 145);
					set_ped_can_be_targetted(iLocal_223, true);
				}
				task_combat_ped(iLocal_223, PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_223, true);
				register_target(iLocal_223, PLAYER::PLAYER_PED_ID());
				_0x52D59AB61DDC05DD(iLocal_223, 1);
			}
			iLocal_52 = 1;
		}
		if (iLocal_49)
		{
			if (!iLocal_53)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, 1862763509);
				iVar0 = 0;
				while (iVar0 < iLocal_226)
				{
					if (!PED::IS_PED_INJURED(iLocal_226[iVar0]))
					{
						set_ped_can_be_targetted(iLocal_226[iVar0], true);
						if (does_blip_exist(uLocal_297[iVar0]))
						{
							remove_blip(&(uLocal_297[iVar0]));
						}
						task_combat_ped(iLocal_226[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
						set_ped_keep_task(iLocal_226[iVar0], true);
						register_target(iLocal_226[iVar0], PLAYER::PLAYER_PED_ID());
						_0x52D59AB61DDC05DD(iLocal_226[iVar0], 1);
					}
					iVar0++;
				}
				iLocal_53 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (!PED::IS_PED_INJURED(iLocal_226[iVar0]))
				{
					set_ped_can_be_targetted(iLocal_226[iVar0], false);
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_49)
	{
		if (!iLocal_51)
		{
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				set_ped_can_be_targetted(iLocal_222, false);
			}
			if (!PED::IS_PED_INJURED(iLocal_223))
			{
				set_ped_can_be_targetted(iLocal_223, false);
			}
			iLocal_51 = 1;
		}
		if (!iLocal_53)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, 1862763509);
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (!PED::IS_PED_INJURED(iLocal_226[iVar0]))
				{
					set_ped_can_be_targetted(iLocal_226[iVar0], true);
					_0xC594B315EDF2D4AF(iLocal_226[iVar0]);
					if (does_blip_exist(uLocal_297[iVar0]))
					{
						remove_blip(&(uLocal_297[iVar0]));
					}
					if (!does_blip_exist(uLocal_297[iVar0]))
					{
						uLocal_297[iVar0] = func_79(iLocal_226[iVar0], 1, 145);
					}
					task_combat_ped(iLocal_226[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					set_ped_keep_task(iLocal_226[iVar0], true);
					register_target(iLocal_226[iVar0], PLAYER::PLAYER_PED_ID());
					_0x52D59AB61DDC05DD(iLocal_226[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_53 = 1;
		}
	}
}

void func_85()
{
	STREAMING::REQUEST_MODEL(joaat("s_m_y_ranger_01"));
	STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_paramedic_01"));
	STREAMING::REQUEST_MODEL(joaat("sheriff"));
	STREAMING::REQUEST_MODEL(joaat("phoenix"));
	if ((((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_ranger_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_paramedic_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("sheriff"))) && STREAMING::HAS_MODEL_LOADED(joaat("phoenix")))
	{
		set_vehicle_model_is_suppressed(joaat("phoenix"), true);
		set_police_ignore_player(player_id(), 1);
		set_wanted_level_multiplier(0f);
		add_scenario_blocking_area(Vector(44.49f, 2630.83f, 335.22f) - Vector(20f, 50f, 50f), Vector(44.49f, 2630.83f, 335.22f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		set_roads_in_angled_area(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 0, false, 1);
		set_all_vehicle_generators_active_in_area(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), false, 1);
		clear_area_of_vehicles(328.0555f, 2612.694f, 43.4932f, 5f, 0, 0, 0, 0, false);
		iLocal_236 = create_vehicle(joaat("phoenix"), 326.78f, 2626.56f, 43.5081f, 45.21f, 1, true);
		iLocal_232[0] = create_vehicle(joaat("sheriff"), 314.1008f, 2641.67f, 43.5055f, 258.9436f, 1, true);
		iLocal_232[1] = create_vehicle(joaat("sheriff"), 330.7097f, 2646.913f, 43.685f, 120.9436f, 1, true);
		iLocal_232[2] = create_vehicle(joaat("sheriff"), 321.4496f, 2649.388f, 43.5706f, 105.9436f, 1, true);
		set_siren_with_no_driver(iLocal_232[2], 1);
		set_siren_with_no_driver(iLocal_232[1], 1);
		set_siren_with_no_driver(iLocal_232[0], 1);
		set_vehicle_siren(iLocal_232[2], true);
		set_vehicle_siren(iLocal_232[1], true);
		set_vehicle_siren(iLocal_232[0], true);
		disable_vehicle_impact_explosion_activation(iLocal_232[0], 1);
		disable_vehicle_impact_explosion_activation(iLocal_232[2], 1);
		disable_vehicle_impact_explosion_activation(iLocal_232[1], 1);
		set_vehicle_provides_cover(iLocal_236, 1);
		set_vehicle_provides_cover(iLocal_232[0], 1);
		set_vehicle_provides_cover(iLocal_232[1], 1);
		set_vehicle_provides_cover(iLocal_232[2], 1);
		iLocal_222 = PED::CREATE_PED(19, joaat("a_m_y_genstreet_01"), 321.31f, 2615.66f, 43.4963f, 346f, 1, true);
		iLocal_223 = PED::CREATE_PED(19, joaat("a_m_y_genstreet_01"), 326.25f, 2624.51f, 43.4846f, 341f, 1, true);
		iLocal_230 = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 325.3731f, 2631.16f, 43.5248f, 87f, 1, true);
		iLocal_226[0] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 310.6203f, 2642.854f, 43.5173f, 226f, 1, true);
		iLocal_226[1] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 319.5652f, 2650.067f, 43.5411f, 189f, 1, true);
		iLocal_226[2] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 324.0396f, 2650.964f, 43.5983f, 214f, 1, true);
		set_ped_name_debug(iLocal_226[0], "ped_cops[0]");
		set_ped_name_debug(iLocal_226[1], "ped_cops[1]");
		set_ped_name_debug(iLocal_226[2], "ped_cops[2]");
		set_ped_using_action_mode(iLocal_226[0], true, -1, 0);
		set_ped_using_action_mode(iLocal_226[1], true, -1, 0);
		set_ped_using_action_mode(iLocal_226[2], true, -1, 0);
		set_ped_sphere_defensive_area(iLocal_223, 326.25f, 2624.51f, 43.4846f, 3.5f, 0, 0);
		set_ped_sphere_defensive_area(iLocal_222, 321.31f, 2615.66f, 43.4963f, 3.5f, 0, 0);
		set_ped_sphere_defensive_area(iLocal_226[0], 310.6203f, 2642.854f, 43.5173f, 3.5f, 0, 0);
		set_ped_sphere_defensive_area(iLocal_226[1], 319.5652f, 2650.067f, 43.5411f, 3.5f, 0, 0);
		set_ped_sphere_defensive_area(iLocal_226[2], 324.0396f, 2650.964f, 43.5983f, 3.5f, 0, 0);
		task_stay_in_cover(iLocal_226[0]);
		task_stay_in_cover(iLocal_226[1]);
		task_stay_in_cover(iLocal_226[2]);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_226[0], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_226[1], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_226[2], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_226[0], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_226[1], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_226[2], 1, true);
		set_ped_accuracy(iLocal_226[0], 13);
		set_ped_accuracy(iLocal_226[1], 13);
		set_ped_accuracy(iLocal_226[2], 13);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_223, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_223, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222, 1, true);
		set_vehicle_door_open(iLocal_232[0], false, 0, 0);
		set_vehicle_door_open(iLocal_232[0], true, 0, 0);
		set_vehicle_door_open(iLocal_232[1], true, 0, 0);
		set_vehicle_door_open(iLocal_232[1], false, 0, 0);
		set_vehicle_door_open(iLocal_232[2], true, 0, 0);
		set_vehicle_door_open(iLocal_232[2], false, 0, 0);
		set_vehicle_door_open(iLocal_236, true, 0, 0);
		set_vehicle_door_open(iLocal_236, false, 0, 0);
		set_entity_load_collision_flag(iLocal_236, true);
		add_relationship_group("robbers", &iLocal_267);
		add_relationship_group("cops", &iLocal_268);
		ENTITY::SET_ENTITY_HEALTH(iLocal_230, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_223, iLocal_267);
		set_entity_can_be_damaged_by_relationship_group(iLocal_223, 0, iLocal_268);
		ENTITY::SET_ENTITY_HEALTH(iLocal_223, 300);
		give_weapon_to_ped(iLocal_223, joaat("weapon_pistol"), 200, true, true);
		set_ped_seeing_range(iLocal_223, 100f);
		set_ped_hearing_range(iLocal_223, 100f);
		task_guard_current_position(iLocal_223, 35f, 35f, 1);
		set_ped_accuracy(iLocal_223, 13);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_222, iLocal_267);
		set_entity_can_be_damaged_by_relationship_group(iLocal_222, 0, iLocal_268);
		ENTITY::SET_ENTITY_HEALTH(iLocal_222, 300);
		give_weapon_to_ped(iLocal_222, joaat("weapon_pistol"), 200, true, true);
		set_ped_seeing_range(iLocal_222, 100f);
		set_ped_hearing_range(iLocal_222, 100f);
		task_guard_current_position(iLocal_222, 35f, 35f, 1);
		set_ped_accuracy(iLocal_222, 13);
		set_entity_can_be_damaged_by_relationship_group(iLocal_226[0], 0, iLocal_267);
		set_entity_can_be_damaged_by_relationship_group(iLocal_226[1], 0, iLocal_267);
		set_entity_can_be_damaged_by_relationship_group(iLocal_226[2], 0, iLocal_267);
		give_weapon_to_ped(iLocal_226[0], joaat("weapon_pumpshotgun"), 200, true, true);
		give_weapon_to_ped(iLocal_226[1], joaat("weapon_pistol"), 200, true, true);
		give_weapon_to_ped(iLocal_226[2], joaat("weapon_pumpshotgun"), 200, true, true);
		set_ped_seeing_range(iLocal_226[0], 100f);
		set_ped_hearing_range(iLocal_226[0], 100f);
		set_ped_seeing_range(iLocal_226[1], 100f);
		set_ped_hearing_range(iLocal_226[1], 100f);
		set_ped_seeing_range(iLocal_226[2], 100f);
		set_ped_hearing_range(iLocal_226[2], 100f);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_226[0], iLocal_268);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_226[1], iLocal_268);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_226[2], iLocal_268);
		_0xDC0F817884CDD856(5, false);
		_0xDC0F817884CDD856(3, false);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_268, -1533126372);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_268);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_268, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_267, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, iLocal_267);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_267);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, iLocal_268);
		task_seek_cover_from_ped(iLocal_226[0], iLocal_222, 3000, 0);
		task_seek_cover_from_ped(iLocal_226[1], iLocal_222, 3000, 0);
		task_seek_cover_from_ped(iLocal_226[2], iLocal_222, 3000, 0);
		if (func_45() == 0)
		{
			func_50(&uLocal_54, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (func_45() == 1)
		{
			func_50(&uLocal_54, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (func_45() == 2)
		{
			func_50(&uLocal_54, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
		func_50(&uLocal_54, 5, iLocal_222, "RECSBRobber1", 0, 1);
		set_ambient_voice_name(iLocal_226[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		set_ambient_voice_name(iLocal_222, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		set_ambient_voice_name(iLocal_222, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_47 = 1;
	}
}

void func_86(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_88(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_87();
}

void func_87()
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

void func_88(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_89(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_33();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_141())
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
			if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_140())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_10(0))
		{
			return false;
		}
		if (func_136())
		{
			return false;
		}
		if (func_135())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_27(func_45()))
		{
			if (func_129(100f, 1) != -1)
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
		if (!func_128(iParam3))
		{
			return false;
		}
		if (func_27(func_45()))
		{
			if (func_127(func_45()) == 4 || func_127(func_45()) == 5)
			{
				return false;
			}
		}
		if (func_27(func_45()))
		{
			if (!func_126(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_125(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_124())
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
		if (!func_115(4))
		{
			return false;
		}
		if (!func_75(5))
		{
			return false;
		}
		if (func_114(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_114(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_128(30) && !func_114(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_27(func_45()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_113(iVar8))
				{
					if (func_91(iVar4))
					{
						if (!func_90(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_45() != iVar4)
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

int func_90(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_92(iVar0);
}

int func_92(int iParam0)
{
	return func_93(iParam0, 1);
}

bool func_93(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_113(iParam0))
	{
		return false;
	}
	func_94(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_94(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_95(func_106(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_95(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_105(iParam0, iParam1))
	{
		iVar0 = func_104(iParam1);
		iVar1 = func_102(iParam0);
		iVar2 = func_102(iParam0) - func_102(iParam1);
		iVar3 = func_104(iParam0) - func_104(iParam1);
		iVar4 = func_101(iParam0) - func_101(iParam1);
		iVar5 = func_100(iParam0) - func_100(iParam1);
		iVar6 = func_99(iParam0) - func_99(iParam1);
		iVar7 = func_98(iParam0) - func_98(iParam1);
	}
	else
	{
		iVar0 = func_104(iParam0);
		iVar1 = func_102(iParam1);
		iVar2 = func_102(iParam1) - func_102(iParam0);
		iVar3 = func_104(iParam1) - func_104(iParam0);
		iVar4 = func_101(iParam1) - func_101(iParam0);
		iVar5 = func_100(iParam1) - func_100(iParam0);
		iVar6 = func_99(iParam1) - func_99(iParam0);
		iVar7 = func_98(iParam1) - func_98(iParam0);
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
		iVar4 += func_97(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_96(to_float(iVar0 + 1), 0f, 12f));
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

float func_96(Vector3 fParam0, float fParam1, float fParam2)
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

int func_97(int iParam0, int iParam1)
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

int func_98(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_99(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_100(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_101(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_102(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_103(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_103(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_104(int iParam0)
{
	return (iParam0 && 15);
}

bool func_105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_113(iParam1) || !func_113(iParam0))
	{
		return true;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_102(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_101(iParam0);
	iVar1 = func_101(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_100(iParam0);
	iVar1 = func_100(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_99(iParam0);
	iVar1 = func_99(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_98(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_106()
{
	auto uVar0;
	
	func_112(&uVar0, get_clock_seconds());
	func_111(&uVar0, get_clock_minutes());
	func_110(&uVar0, TIME::GET_CLOCK_HOURS());
	func_109(&uVar0, get_clock_day_of_month());
	func_108(&uVar0, get_clock_month());
	func_107(&uVar0, get_clock_year());
	return uVar0;
}

void func_107(auto uParam0, int iParam1)
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

void func_108(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_109(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104(*uParam0);
	iVar1 = func_102(*uParam0);
	if (iParam1 < 1 || iParam1 > func_97(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_110(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_111(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_112(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_113(int iParam0)
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
	iVar0 = func_98(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_99(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_100(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_102(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_104(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_101(iParam0);
	if (iVar5 < 1 || iVar5 > func_97(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_114(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_115(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_45();
				if (!func_27(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_123()) || Global_100201) || Global_25122) || func_122()) || func_47(8, -1)) || func_121()) || func_120()) || func_119()) || func_118()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_123()) || Global_25122) || func_122()) || func_47(8, -1)) || func_119()) || func_121()) || func_120()) || func_118()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_123()) || Global_100201) || Global_25122) || func_122()) || func_47(8, -1)) || func_119()) || func_121()) || func_120()) || func_118()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_123()) || Global_100201) || Global_25122) || func_122()) || func_47(8, -1)) || func_121()) || func_120()) || func_118()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_123() || get_player_wanted_level(player_id()) > 0) || func_47(8, -1)) || func_118()) || func_117()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_47(8, -1) || func_121()) || func_120()) || func_117()) || func_116())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_123()) || Global_25122) || func_122()) || func_47(8, -1)) || func_120()) || func_119()) || func_118()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_123()) || func_120()) || Global_100201) || Global_25122) || func_122()) || Global_36839) || func_47(8, -1)) || func_119()) || func_117()) || func_118()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_123()) || Global_100201) || Global_25122) || func_122()) || func_47(8, -1)) || func_119()) || func_117()) || func_121()) || func_120()) || func_118())
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

auto func_116()
{
	return Global_91317.f_1;
}

int func_117()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_118()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_119()
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

int func_120()
{
	return Global_91330.f_297 > 0;
}

int func_121()
{
	return Global_91330.f_296 > 0;
}

auto func_122()
{
	return Global_1315913;
}

int func_123()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_124()
{
	func_44();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_125(int iParam0)
{
	return func_105(func_106(), iParam0);
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_45();
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

int func_127(int iParam0)
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_141())
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

int func_129(float fParam0, int iParam1)
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
		if (func_27(func_45()))
		{
			iVar36 = func_24();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_130(iVar32, &Var0);
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

void func_130(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_131(uParam1, "Abigail1", func_133(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 1:
			func_131(uParam1, "Abigail2", func_133(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 2:
			func_131(uParam1, "Barry1", func_133(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 3:
			func_131(uParam1, "Barry2", func_133(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 4:
			func_131(uParam1, "Barry3", func_133(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 5:
			func_131(uParam1, "Barry3A", func_133(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 6:
			func_131(uParam1, "Barry3C", func_133(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 7:
			func_131(uParam1, "Barry4", func_133(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_132(iParam0), 0, 0);
			break;
		
		case 8:
			func_131(uParam1, "Dreyfuss1", func_133(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 9:
			func_131(uParam1, "Epsilon1", func_133(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 10:
			func_131(uParam1, "Epsilon2", func_133(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 11:
			func_131(uParam1, "Epsilon3", func_133(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 12:
			func_131(uParam1, "Epsilon4", func_133(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 13:
			func_131(uParam1, "Epsilon5", func_133(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 14:
			func_131(uParam1, "Epsilon6", func_133(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 15:
			func_131(uParam1, "Epsilon7", func_133(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 16:
			func_131(uParam1, "Epsilon8", func_133(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 17:
			func_131(uParam1, "Extreme1", func_133(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 18:
			func_131(uParam1, "Extreme2", func_133(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 19:
			func_131(uParam1, "Extreme3", func_133(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 20:
			func_131(uParam1, "Extreme4", func_133(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 21:
			func_131(uParam1, "Fanatic1", func_133(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_132(iParam0), 1, 0);
			break;
		
		case 22:
			func_131(uParam1, "Fanatic2", func_133(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_132(iParam0), 1, 0);
			break;
		
		case 23:
			func_131(uParam1, "Fanatic3", func_133(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_132(iParam0), 0, 1);
			break;
		
		case 24:
			func_131(uParam1, "Hao1", func_133(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_132(iParam0), 0, 1);
			break;
		
		case 25:
			func_131(uParam1, "Hunting1", func_133(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 26:
			func_131(uParam1, "Hunting2", func_133(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 27:
			func_131(uParam1, "Josh1", func_133(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 28:
			func_131(uParam1, "Josh2", func_133(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 29:
			func_131(uParam1, "Josh3", func_133(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 30:
			func_131(uParam1, "Josh4", func_133(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 31:
			func_131(uParam1, "Maude1", func_133(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 32:
			func_131(uParam1, "Minute1", func_133(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 33:
			func_131(uParam1, "Minute2", func_133(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 34:
			func_131(uParam1, "Minute3", func_133(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 35:
			func_131(uParam1, "MrsPhilips1", func_133(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 36:
			func_131(uParam1, "MrsPhilips2", func_133(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 37:
			func_131(uParam1, "Nigel1", func_133(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 38:
			func_131(uParam1, "Nigel1A", func_133(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 39:
			func_131(uParam1, "Nigel1B", func_133(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 40:
			func_131(uParam1, "Nigel1C", func_133(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 41:
			func_131(uParam1, "Nigel1D", func_133(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 42:
			func_131(uParam1, "Nigel2", func_133(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 43:
			func_131(uParam1, "Nigel3", func_133(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 44:
			func_131(uParam1, "Omega1", func_133(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 45:
			func_131(uParam1, "Omega2", func_133(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 46:
			func_131(uParam1, "Paparazzo1", func_133(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 47:
			func_131(uParam1, "Paparazzo2", func_133(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 48:
			func_131(uParam1, "Paparazzo3", func_133(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 49:
			func_131(uParam1, "Paparazzo3A", func_133(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 50:
			func_131(uParam1, "Paparazzo3B", func_133(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 51:
			func_131(uParam1, "Paparazzo4", func_133(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 52:
			func_131(uParam1, "Rampage1", func_133(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 54:
			func_131(uParam1, "Rampage3", func_133(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 55:
			func_131(uParam1, "Rampage4", func_133(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 56:
			func_131(uParam1, "Rampage5", func_133(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 53:
			func_131(uParam1, "Rampage2", func_133(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 57:
			func_131(uParam1, "TheLastOne", func_133(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 58:
			func_131(uParam1, "Tonya1", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 59:
			func_131(uParam1, "Tonya2", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 60:
			func_131(uParam1, "Tonya3", func_133(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 61:
			func_131(uParam1, "Tonya4", func_133(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 62:
			func_131(uParam1, "Tonya5", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_131(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_132(int iParam0)
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

struct<2> func_133(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_134(iParam0)};
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

struct<2> func_134(int iParam0)
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

bool func_135()
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

bool func_136()
{
	if (func_139() && !func_140())
	{
		return true;
	}
	if (func_138() && func_137())
	{
		return true;
	}
	return false;
}

int func_137()
{
	return Global_100872 > 0;
}

bool func_138()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_139()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_140()
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

bool func_141()
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

void func_142()
{
	int iVar0;
	
	if (iLocal_48)
	{
		remove_blip(&iLocal_295);
		remove_blip(&iLocal_296);
		set_police_ignore_player(player_id(), 0);
		set_wanted_level_multiplier(1f);
		reset_dispatch_ideal_spawn_distance();
		reset_wanted_level_difficulty(player_id());
		set_roads_back_to_original_in_angled_area(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		remove_scenario_blocking_areas();
		set_all_vehicle_generators_active_in_area(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), true, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_226)
		{
			if (!PED::IS_PED_INJURED(iLocal_226[iVar0]))
			{
				set_blocking_of_non_temporary_events(iLocal_226[iVar0], false);
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					task_stay_in_cover(iLocal_226[iVar0]);
					set_ped_keep_task(iLocal_226[iVar0], true);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_222, 317, true);
				set_blocking_of_non_temporary_events(iLocal_222, false);
				if (!is_vehicle_driveable(iLocal_236, 0))
				{
					if (is_ped_in_vehicle(iLocal_222, iLocal_236, 0))
					{
						_0x25367DE49D64CF16(iLocal_236, 1);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_223))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_223, 317, true);
				set_blocking_of_non_temporary_events(iLocal_223, false);
				if (!is_vehicle_driveable(iLocal_236, 0))
				{
					if (is_ped_in_vehicle(iLocal_223, iLocal_236, 0))
					{
						_0x25367DE49D64CF16(iLocal_236, 1);
					}
				}
			}
			iVar0++;
		}
	}
	func_143(-1);
	terminate_this_thread();
}

void func_143(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_81())
	{
		func_147(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_146(30000);
		StringCopy(&cVar0, func_145(Global_101143, 1), 64);
		if (func_32(Global_101143) > 0)
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
	func_144(&Global_25179);
	Global_101144 = 0;
	func_88(-1);
}

void func_144(auto uParam0)
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

char* func_145(int iParam0, int iParam1)
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

void func_146(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_147(int iParam0)
{
	func_148(iParam0, 0, func_153(iParam0));
}

void func_148(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_106();
	func_151(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_150(uParam0, &uVar0);
	Var1 = {func_149(&uVar0)};
}

struct<16> func_149(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_100(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_99(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_98(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_101(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_104(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_102(*uParam0), 64);
	return cVar0;
}

void func_150(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_151(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_102(*uParam0);
	iVar1 = func_104(*uParam0);
	iVar2 = func_101(*uParam0);
	iVar3 = func_100(*uParam0);
	iVar4 = func_99(*uParam0);
	iVar5 = func_98(*uParam0);
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
	iVar6 = func_97(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_97(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_152(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_152(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_112(uParam0, iParam1);
	func_111(uParam0, iParam2);
	func_110(uParam0, iParam3);
	func_108(uParam0, iParam5);
	func_109(uParam0, iParam4);
	func_107(uParam0, iParam6);
}

int func_153(int iParam0)
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

