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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	Vector3 vLocal_51 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	Vector3 vLocal_60 = 0;
	Vector3 vLocal_63 = 0;
	Vector3 fLocal_66 = 0;
	Vector3 fLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<6> Local_72 = 0;
	struct<6> Local_78 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var[] uLocal_102 = new var[2];
	int iLocal_105 = 0;
	Vector3 vLocal_106 = 0;
	Vector3 vLocal_109 = 0;
	Vector3 vLocal_112 = 0;
	Vector3 vLocal_115 = 0;
	Vector3 vLocal_118 = 0;
	int[] iLocal_121 = new int[11];
	int iLocal_133 = 0;
	auto uLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	auto uLocal_146 = 0;
	auto uLocal_147 = 0;
	auto uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	char* sLocal_153 = 0;
	char* sLocal_154 = 0;
	auto uLocal_155 = 16;
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
	auto uLocal_319 = 0;
	struct<2> Local_320 = 0;
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
	auto uLocal_337 = 5;
	auto uLocal_338 = 0;
	auto uLocal_339 = 0;
	auto uLocal_340 = 0;
	auto uLocal_341 = 0;
	auto uLocal_342 = 0;
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
	StringCopy(&Local_72, "", 24);
	vLocal_118 = {-1034.6f, 4918.6f, 205.9f};
	iLocal_135 = -1;
	vLocal_51 = {Local_320.f_1[0 /*3*/]};
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			if (is_ped_in_group(iLocal_58))
			{
				remove_ped_from_group(iLocal_58);
			}
		}
		func_218();
	}
	if (func_217(256, 1))
	{
		terminate_this_thread();
	}
	if (func_175(vLocal_51, -1, 0, 0, 0))
	{
		func_172(-1);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(false);
		if ((is_world_point_within_brain_activation_range() || iLocal_49 == 4) || iLocal_68 > 18)
		{
			if (!func_171())
			{
				if (func_170())
				{
					func_218();
				}
			}
			_0x208784099002BC30("RE_DO", 0);
			if (is_player_playing(player_id()))
			{
				switch (iLocal_48)
				{
					case 0:
						if (!iLocal_50)
						{
							if (func_158())
							{
								func_218();
							}
							if (!iLocal_59)
							{
								func_157();
							}
							if (iLocal_59)
							{
								func_156();
							}
						}
						if (iLocal_50)
						{
							iLocal_48 = 1;
						}
						break;
					
					case 1:
						func_148();
						if (iLocal_69 > 3)
						{
							if (!iLocal_92 && !func_147())
							{
								func_146(&uLocal_155, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								iLocal_92 = 1;
							}
						}
						switch (iLocal_49)
						{
							case 0:
								func_142();
								iLocal_49 = 1;
								break;
							
							case 1:
								if (!iLocal_99)
								{
									if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(vLocal_106, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_106, 20f, 20f, 20f, false, true, 0))
									{
										func_141();
										func_132(1);
										iLocal_99 = 1;
									}
								}
								else
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_106, 50f, 50f, 50f, false, true, 0))
									{
										func_130();
									}
									if (!PED::IS_PED_INJURED(iLocal_58))
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_58, vLocal_63, 30f, 30f, 30f, false, true, 0))
										{
											iLocal_49 = 11;
										}
									}
								}
								break;
							
							case 3:
								func_128();
								if (iLocal_68 > 18)
								{
									func_127();
								}
								else if (!func_147())
								{
									func_127();
								}
								break;
							
							case 7:
								func_128();
								func_123();
								break;
							
							case 4:
								func_128();
								func_75();
								if (func_74(vLocal_112))
								{
									func_56(0);
									func_54();
									wait(false);
									func_146(&uLocal_155, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
								if (func_52())
								{
									func_56(0);
									func_54();
									wait(false);
									func_146(&uLocal_155, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
								if (!iLocal_89)
								{
									if (func_51())
									{
										if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_112, 23f, 60f, 20f, false, true, 0))
										{
											func_56(0);
											func_54();
											wait(false);
											if (!func_147())
											{
												func_146(&uLocal_155, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												iLocal_89 = 1;
											}
										}
									}
								}
								break;
							
							case 11:
								func_50();
								break;
						}
						if (!PED::IS_PED_INJURED(iLocal_57))
						{
							if (is_entity_playing_anim(iLocal_57, "random@domestic", "f_attack_end", 3))
							{
								func_48(iLocal_57, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
						}
						if ((func_47() && !func_46()) && iLocal_48 != 2)
						{
							if (!PED::IS_PED_INJURED(iLocal_58))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_58, vLocal_118, 5f, 5f, 5f, false, true, 0))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
									{
										iLocal_121[8] = create_object(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, true, false);
										attach_entity_to_entity(iLocal_121[8], iLocal_58, get_ped_bone_index(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
									}
									func_45(0);
									wait(false);
									func_54();
									iLocal_48 = 2;
								}
							}
						}
						if (func_44())
						{
							func_50();
						}
						break;
					
					case 2:
						if (func_43())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
							{
								PED::DELETE_PED(&iLocal_58);
							}
							func_14();
						}
						break;
					
					case 3:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_218();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_150 && !iLocal_149)
	{
		func_3(0);
		if (Global_25358)
		{
			trigger_music_event("AC_STOP");
		}
		func_2();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
		{
			iLocal_133 = create_pickup_rotate(joaat("pickup_weapon_golfclub"), ENTITY::GET_ENTITY_COORDS(iLocal_121[8], 1), get_entity_rotation(iLocal_121[8], 2) + Vector(2.8157f, -159.5768f, -14.1956f), false, -1, 2, 1, false);
			delete_object(&(iLocal_121[8]));
		}
		set_all_vehicle_generators_active_in_area(vLocal_63 - Vector(10f, 10f, 10f), vLocal_63 + Vector(10f, 10f, 10f), true, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_152, 1862763509);
		if (iLocal_59)
		{
			set_model_as_no_longer_needed(iLocal_96);
			set_model_as_no_longer_needed(iLocal_97);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				set_blocking_of_non_temporary_events(iLocal_57, false);
			}
			set_ped_as_no_longer_needed(&iLocal_57);
		}
		if (does_blip_exist(iLocal_105))
		{
			remove_blip(&iLocal_105);
		}
		if (does_blip_exist(uLocal_102[0]))
		{
			remove_blip(&(uLocal_102[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
		{
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (!is_ped_in_any_vehicle(iLocal_58, 0))
				{
					reset_ped_last_vehicle(iLocal_58);
				}
				remove_ped_from_group(iLocal_58);
				set_blocking_of_non_temporary_events(iLocal_58, false);
				set_ped_can_be_targetted(iLocal_58, true);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[iVar0]))
			{
				detach_entity(iLocal_121[iVar0], 1, true);
			}
			iVar0++;
		}
		set_roads_back_to_original_in_angled_area(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		remove_scenario_blocking_areas();
		iLocal_149 = 1;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_63, 80f, 80f, 80f, false, true, 0) || has_pickup_been_collected(iLocal_133)) || !(ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]) && !does_pickup_exist(iLocal_133)))
	{
		func_218();
	}
}

void func_2()
{
	Global_25354 = 0;
	Global_25355 = 0;
	Global_25357 = 0;
	Global_25358 = 0;
	Global_25359 = 0;
}

void func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_4(iVar0, iParam0);
		iVar0++;
	}
}

void func_4(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_13(iParam0, 2, 1))
		{
			func_12(iParam0, 2, 1);
		}
	}
	else if (func_13(iParam0, 2, 1))
	{
		func_5(iParam0, 2, 1);
	}
}

void func_5(int iParam0, int iParam1, int iParam2)
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
			iVar0 = func_9(func_10(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_6(func_10(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_6(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_7(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

auto func_8()
{
	return Global_1312747;
}

int func_9(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_7(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10(int iParam0)
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

auto func_11()
{
	return Global_25120;
}

void func_12(int iParam0, int iParam1, int iParam2)
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
			iVar0 = func_9(func_10(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_6(func_10(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_9(func_10(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_14()
{
	while (func_147())
	{
		wait(false);
	}
	while (!func_42())
	{
		wait(false);
	}
	Global_101154.f_17264.f_383 = func_41() + 1;
	func_18(-1, 0);
	func_15();
	iLocal_48 = 3;
}

void func_15()
{
	func_16();
}

bool func_16()
{
	if (func_17(0))
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

int func_17(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_18(int iParam0, int iParam1)
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
			func_20(func_24(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_19(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_19(7);
			}
			else
			{
				func_19(1);
			}
		}
	}
}

void func_19(int iParam0)
{
	Global_101140 = iParam0;
}

void func_20(int iParam0, auto uParam1, auto uParam2)
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
		func_21();
	}
}

void func_21()
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
			if (func_11() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_16();
				}
			}
		}
	}
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
		iParam2 = func_8();
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

int func_41()
{
	return Global_101154.f_8706.f_21 + Global_101154.f_17264.f_380;
}

bool func_42()
{
	return true;
}

bool func_43()
{
	if (Global_25355)
	{
		func_19(4);
		return true;
	}
	return false;
}

bool func_44()
{
	if (PED::IS_PED_INJURED(iLocal_57) && PED::IS_PED_INJURED(iLocal_58))
	{
		return true;
	}
	return false;
}

void func_45(int iParam0)
{
	Global_16723 = iParam0;
}

bool func_46()
{
	if (Global_101154.f_29520.f_5 == 1000)
	{
		return true;
	}
	return false;
}

auto func_47()
{
	return Global_25354;
}

void func_48(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_49(iParam3), 0);
}

int func_49(int iParam0)
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

void func_50()
{
	iLocal_48 = 3;
}

bool func_51()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_151 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (is_vehicle_driveable(iLocal_151, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (is_ped_sitting_in_vehicle(iLocal_58, iLocal_151))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_52()
{
	if (func_53() == 2)
	{
		if (func_47())
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

auto func_53()
{
	func_31();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_54()
{
	Global_14578 = 0;
	func_55();
}

void func_55()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_56(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_71)
		{
			if (func_63(&uLocal_155, "REDO2AU", &Local_78, &Local_72, 8, 0, 0))
			{
				iLocal_71 = 0;
			}
		}
	}
	else if ((!iLocal_71 && is_scripted_conversation_ongoing()) && !func_61())
	{
		Local_78 = {func_60()};
		Local_72 = {func_59()};
		func_57();
		iLocal_71 = 1;
	}
}

void func_57()
{
	Global_14578 = 0;
	func_58();
}

void func_58()
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

struct<6> func_59()
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

struct<6> func_60()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

bool func_61()
{
	if (((((((func_62("REDO2_DRP") || func_62("REDO2_UV")) || func_62("REDO2_UV2")) || func_62("REDO2_CULT")) || func_62("REDO2_NEAR")) || func_62("REDO2_GETOUT")) || func_62("REDO2_JACK")) || func_62("REDO2_SHOOT"))
	{
		return true;
	}
	return false;
}

bool func_62(char* sParam0)
{
	auto uVar0;
	
	if (func_147())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

int func_63(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_73(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_64(sParam2, iParam4, 0);
}

bool func_64(char* sParam0, int iParam1, int iParam2)
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
					func_72();
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
		if (func_71(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_70();
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
				func_69();
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
				if (func_68())
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
			if (func_67())
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
			func_66();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_65();
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
		func_72();
	}
	return false;
}

void func_65()
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

void func_66()
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

bool func_67()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_68()
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

void func_69()
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
		Global_14413 = func_53();
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

void func_70()
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

int func_71(int iParam0, int iParam1)
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

void func_72()
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

void func_73(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_74(Vector3 vParam0)
{
	if (func_53() == 2)
	{
		if (func_47() && !Global_25357)
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

void func_75()
{
	switch (iLocal_70)
	{
		case 0:
			if (iLocal_68 > 18)
			{
				iLocal_70++;
			}
			else if (!PED::IS_PED_INJURED(iLocal_58))
			{
				set_ped_max_move_blend_ratio(iLocal_58, 1f);
				if (is_entity_at_entity(iLocal_58, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (iLocal_68 < 19)
					{
						if (func_146(&uLocal_155, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
						{
							iLocal_70++;
						}
					}
					else
					{
						iLocal_70++;
					}
				}
			}
			break;
		
		case 1:
			func_119();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
			{
				if (!PED::IS_PED_INJURED(iLocal_58))
				{
					if (is_vehicle_driveable(get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID()), 0))
					{
						if (is_ped_getting_into_a_vehicle(iLocal_58))
						{
							delete_object(&(iLocal_121[8]));
						}
					}
					if (is_ped_sitting_in_any_vehicle(iLocal_58))
					{
						func_117();
						func_111();
						if (func_146(&uLocal_155, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							settimerb(false);
							iLocal_70++;
						}
					}
					else
					{
						set_ped_max_move_blend_ratio(iLocal_58, 1f);
					}
				}
			}
			break;
		
		case 2:
			func_111();
			func_110();
			func_119();
			func_109();
			if (timerb() > 1500)
			{
				func_108();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_112, 10f, 10f, 10f, false, true, 0))
			{
				clear_all_help_messages();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
			{
				if (!PED::IS_PED_INJURED(iLocal_58))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_58, vLocal_112, Global_19, true, true, 0) && func_107(1, 0, 1))
					{
						if (does_blip_exist(iLocal_100))
						{
							remove_blip(&iLocal_100);
						}
						if (does_blip_exist(iLocal_101))
						{
							remove_blip(&iLocal_101);
						}
						if (is_ped_in_any_vehicle(iLocal_58, 0))
						{
							_task_bring_vehicle_to_halt(get_vehicle_ped_is_in(iLocal_58, 0), 10.5f, 3, 0);
							iLocal_70++;
						}
						else
						{
							iLocal_70 = 4;
						}
					}
				}
			}
			break;
		
		case 3:
			func_106();
			if (iLocal_145)
			{
				set_player_control(player_id(), true, 0);
				func_14();
			}
			break;
		
		case 4:
			func_76();
			if (iLocal_145)
			{
				set_player_control(player_id(), true, 0);
				func_14();
			}
			break;
	}
}

void func_76()
{
	switch (iLocal_143)
	{
		case 0:
			clear_all_help_messages();
			func_57();
			if (func_146(&uLocal_155, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_143++;
			}
			break;
		
		case 1:
			iLocal_143++;
			break;
		
		case 2:
			clear_all_help_messages();
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				remove_ped_from_group(iLocal_58);
				open_sequence_task(&iLocal_95);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
				task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 4000);
				task_follow_nav_mesh_to_coord(false, vLocal_115, 1f, -1, 0.25f, 0, 311.3569f);
				task_start_scenario_in_place(false, "WORLD_HUMAN_SMOKING", 0, 1);
				close_sequence_task(iLocal_95);
				task_perform_sequence(iLocal_58, iLocal_95);
				clear_sequence_task(&iLocal_95);
				set_ped_keep_task(iLocal_58, true);
				iLocal_144 = GAMEPLAY::GET_GAME_TIMER() + 4000;
				iLocal_143++;
			}
			break;
		
		case 3:
			if (iLocal_144 < GAMEPLAY::GET_GAME_TIMER())
			{
				clear_all_help_messages();
				iLocal_143++;
			}
			break;
		
		case 4:
			if (!func_147())
			{
				func_105("DOM_GOLF", -1);
				func_104(&(Global_101154.f_17669), 16);
				if (func_53() == 0)
				{
					func_103(&(Global_101154.f_17669.f_24), 1);
				}
				else if (func_53() == 1)
				{
					func_103(&(Global_101154.f_17669.f_24), 4);
				}
				else if (func_53() == 2)
				{
					func_103(&(Global_101154.f_17669.f_24), 2);
				}
				func_77(func_53(), 1, 80, 0, 1);
				settimera(false);
				iLocal_143++;
			}
			break;
		
		case 5:
			if (timera() > 5000)
			{
				iLocal_145 = true;
			}
			break;
	}
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	func_78(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

bool func_78(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_102();
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
					func_101(99, 1);
					func_100(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_100(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_100(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_86(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_85(5))
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
							func_100(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_100(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_100(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_85(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_100(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_100(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_100(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_100(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_100(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_100(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_100(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_100(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_100(joaat("sp2_money_spent_property"), iParam3);
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
									func_100(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_100(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_100(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_100(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_100(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_100(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_85(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_100(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_100(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_100(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_100(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_100(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_100(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_84(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_101(95, iParam3);
					break;
				
				case 1:
					func_101(97, iParam3);
					break;
				
				case 2:
					func_101(96, iParam3);
					break;
			}
			func_101(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_81(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_81(iVar1);
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
					func_100(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_100(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_100(joaat("sp2_total_cash_earned"), iParam3);
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
	func_80(iParam0);
	if (Global_35711 == 15)
	{
		func_79(0);
	}
	return true;
}

void func_79(int iParam0)
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

void func_80(int iParam0)
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

void func_81(int iParam0)
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
	else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_83() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_83() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_82(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_82(int iParam0)
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

int func_83()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_84(int iParam0)
{
	func_101(93, iParam0);
	func_101(29, iParam0);
	func_101(30, iParam0);
}

int func_85(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_83() /*10375*/].f_7704.f_10, iParam0);
}

bool func_86(int iParam0)
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
		func_22(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_87(27, 1);
	return true;
}

int func_87(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_88(iParam0, iParam1);
}

bool func_88(int iParam0, int iParam1)
{
	if (func_32(14) && !func_99(iParam0))
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
	if (func_98(&Global_2563627))
	{
		if (func_96(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_89(&Global_2563627, iParam0))
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

bool func_89(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_32(14) && !func_99(iParam1))
	{
		return false;
	}
	if (func_96(uParam0, iParam1))
	{
		return false;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	func_92(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_90(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_90(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_32(14) && !func_99(iParam1))
	{
		return false;
	}
	if (func_96(uParam0, iParam1))
	{
		return false;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_91(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_91(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_92(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_93(uParam0, iVar0);
		iVar0++;
	}
	func_94(uParam0, Global_2563626 - 0.5f);
}

void func_93(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_94(auto uParam0, float fParam1)
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

auto func_95(auto uParam0)
{
	return *uParam0.f_72;
}

int func_96(auto uParam0, int iParam1)
{
	return func_97(uParam0, iParam1) != -1;
}

int func_97(auto uParam0, int iParam1)
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

int func_98(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_99(int iParam0)
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

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_101(int iParam0, int iParam1)
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

void func_102()
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

void func_103(auto uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_104(auto uParam0, int iParam1)
{
	*uParam0.f_23 = (*uParam0.f_23 || iParam1);
}

void func_105(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_106()
{
	switch (iLocal_143)
	{
		case 0:
			clear_all_help_messages();
			func_57();
			if (func_146(&uLocal_155, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_143++;
			}
			break;
		
		case 1:
			clear_all_help_messages();
			iLocal_143++;
			break;
		
		case 2:
			clear_all_help_messages();
			iLocal_143++;
			break;
		
		case 3:
			clear_all_help_messages();
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				remove_ped_from_group(iLocal_58);
				open_sequence_task(&iLocal_95);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
				task_pause(false, 300);
				task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 4000);
				task_follow_nav_mesh_to_coord(false, vLocal_115, 1f, -1, 0.25f, 0, 311.3569f);
				task_start_scenario_in_place(false, "WORLD_HUMAN_SMOKING", 0, 1);
				close_sequence_task(iLocal_95);
				task_perform_sequence(iLocal_58, iLocal_95);
				clear_sequence_task(&iLocal_95);
				set_ped_keep_task(iLocal_58, true);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
				{
					iLocal_121[8] = create_object(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, true, false);
					attach_entity_to_entity(iLocal_121[8], iLocal_58, get_ped_bone_index(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
				}
				iLocal_144 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				iLocal_143++;
			}
			break;
		
		case 4:
			clear_all_help_messages();
			if (iLocal_144 < GAMEPLAY::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_58))
				{
					set_player_control(player_id(), true, 0);
					iLocal_144 = GAMEPLAY::GET_GAME_TIMER() + 3000;
					iLocal_143++;
				}
			}
			break;
		
		case 5:
			if (iLocal_144 < GAMEPLAY::GET_GAME_TIMER())
			{
				clear_all_help_messages();
				iLocal_143++;
			}
			break;
		
		case 6:
			if (!func_147())
			{
				func_105("DOM_GOLF", -1);
				func_104(&(Global_101154.f_17669), 16);
				if (func_53() == 0)
				{
					func_103(&(Global_101154.f_17669.f_24), 1);
				}
				else if (func_53() == 1)
				{
					func_103(&(Global_101154.f_17669.f_24), 4);
				}
				else if (func_53() == 2)
				{
					func_103(&(Global_101154.f_17669.f_24), 2);
				}
				func_77(func_53(), 1, 80, 0, 1);
				settimera(false);
				iLocal_143++;
			}
			break;
		
		case 7:
			if (timera() > 5000)
			{
				iLocal_145 = true;
			}
			break;
	}
}

bool func_107(int iParam0, int iParam1, int iParam2)
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

void func_108()
{
	if (!func_61())
	{
		func_56(1);
	}
	if (!func_147())
	{
		switch (iLocal_141)
		{
			case 0:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 1:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 2:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 3:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 4:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 5:
				func_146(&uLocal_155, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 6:
				iLocal_142 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				iLocal_141++;
				break;
			
			case 7:
				if (iLocal_142 < GAMEPLAY::GET_GAME_TIMER())
				{
					if (func_53() == 0)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					}
					else if (func_53() == 1)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					}
					else if (func_53() == 2)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
					}
					iLocal_141++;
				}
				break;
			
			case 8:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 9:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 10:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 11:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 12:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 13:
				iLocal_142 = GAMEPLAY::GET_GAME_TIMER() + 600;
				iLocal_141++;
				break;
			
			case 14:
				if (iLocal_142 < GAMEPLAY::GET_GAME_TIMER())
				{
					if (func_53() == 0)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_53() == 1)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_53() == 2)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
					}
					iLocal_141++;
				}
				break;
			
			case 15:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 16:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 17:
				iLocal_142 = GAMEPLAY::GET_GAME_TIMER() + 800;
				iLocal_141++;
				break;
			
			case 18:
				if (iLocal_142 < GAMEPLAY::GET_GAME_TIMER())
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_141++;
				}
				break;
			
			case 19:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 20:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_141++;
				break;
			}
	}
}

void func_109()
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		if (!iLocal_84)
		{
			if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
			{
				if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), get_players_last_vehicle(), 1) && is_ped_in_vehicle(iLocal_58, get_players_last_vehicle(), 0))
				{
					func_56(0);
					func_54();
					wait(false);
					func_146(&uLocal_155, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					iLocal_84 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(get_players_last_vehicle(), 0))
		{
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), get_players_last_vehicle(), 0) && is_ped_in_vehicle(iLocal_58, get_players_last_vehicle(), 0))
			{
				iLocal_84 = 0;
			}
		}
		if (!iLocal_85)
		{
			if (is_ped_jacking(PLAYER::PLAYER_PED_ID()))
			{
				func_56(0);
				func_54();
				wait(false);
				func_146(&uLocal_155, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				iLocal_85 = 1;
			}
		}
		else if (!is_ped_jacking(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_85 = 0;
		}
		if (!iLocal_86)
		{
			if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
			{
				func_56(0);
				func_54();
				wait(false);
				func_146(&uLocal_155, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				iLocal_86 = 1;
			}
		}
		else if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_86 = 0;
		}
	}
}

void func_110()
{
	if (is_ped_stopped(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_136 == 0)
		{
			iLocal_136 = GAMEPLAY::GET_GAME_TIMER();
		}
		else
		{
			iLocal_137 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_137 = 0;
		iLocal_136 = 0;
	}
	if (iLocal_137 - iLocal_136 > 60000)
	{
		func_54();
		wait(false);
		func_146(&uLocal_155, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_58, vLocal_115, 200f, 200f, 200f, false, true, 0))
			{
				task_follow_nav_mesh_to_coord(iLocal_58, vLocal_115, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				task_wander_standard(iLocal_58, 1193033728, 0);
			}
			set_ped_keep_task(iLocal_58, true);
			remove_ped_from_group(iLocal_58);
		}
		func_50();
	}
}

void func_111()
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_58, 8f, 8f, 8f, 0, 1, 0) || is_ped_in_any_taxi(PLAYER::PLAYER_PED_ID()))
		{
			if ((is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_in_any_vehicle(iLocal_58, 0)) && !is_ped_in_any_taxi(PLAYER::PLAYER_PED_ID()))
			{
				if (!does_blip_exist(uLocal_102[0]))
				{
					uLocal_102[0] = func_115(iLocal_58, 0, 145);
				}
				if (does_blip_exist(iLocal_100))
				{
					remove_blip(&iLocal_100);
				}
			}
			else
			{
				if (does_blip_exist(uLocal_102[0]))
				{
					remove_blip(&(uLocal_102[0]));
				}
				if (!does_blip_exist(iLocal_100))
				{
					iLocal_100 = func_113(vLocal_112, 1);
				}
				if (func_53() == 2 && !func_46())
				{
					if (!does_blip_exist(iLocal_101))
					{
						iLocal_101 = func_113(vLocal_118, 0);
						set_blip_sprite(iLocal_101, 269);
						func_112();
					}
				}
			}
		}
		else
		{
			if (!does_blip_exist(uLocal_102[0]))
			{
				uLocal_102[0] = func_115(iLocal_58, 0, 145);
			}
			if (does_blip_exist(iLocal_100))
			{
				remove_blip(&iLocal_100);
			}
		}
	}
}

void func_112()
{
	if (func_53() == 2)
	{
		if (!Global_25356)
		{
			func_105("CULT_BLIP_HELP", -1);
			Global_25356 = 1;
		}
	}
}

int func_113(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_114(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_114(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_115(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_116(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_114(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_114(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_114(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_117()
{
	int iVar0;
	
	set_ped_as_no_longer_needed(&iLocal_57);
	func_118(&uLocal_155, 4);
	iVar0 = 0;
	while (iVar0 < iLocal_121)
	{
		set_object_as_no_longer_needed(&(iLocal_121[iVar0]));
		iVar0++;
	}
	remove_anim_dict("random@domestic");
}

void func_118(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_119()
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_122())
			{
				if (is_ped_in_group(iLocal_58))
				{
					remove_ped_from_group(iLocal_58);
				}
				if (AI::GET_SCRIPT_TASK_STATUS(iLocal_58, 1227113341) != 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_58, 1227113341) != 0)
				{
					task_go_to_entity(iLocal_58, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (is_ped_in_any_vehicle(iLocal_58, 0))
				{
					task_leave_any_vehicle(iLocal_58, false, 0);
				}
				if (!iLocal_91)
				{
					func_56(0);
					func_54();
					wait(false);
					if (!func_147())
					{
						if (!func_121())
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_91 = 1;
					}
				}
			}
			else
			{
				iLocal_91 = 0;
				if (AI::GET_SCRIPT_TASK_STATUS(iLocal_58, 1227113341) == 1 && AI::GET_SCRIPT_TASK_STATUS(iLocal_58, 1227113341) == 0)
				{
					AI::CLEAR_PED_TASKS(iLocal_58);
				}
			}
		}
		else if (!is_ped_in_group(iLocal_58))
		{
			set_ped_as_group_member(iLocal_58, func_120());
			set_ped_never_leaves_group(iLocal_58, 1);
			set_ped_group_member_passenger_index(iLocal_58, false);
		}
	}
}

int func_120()
{
	return get_player_group(get_player_index());
}

bool func_121()
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

bool func_122()
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

void func_123()
{
	switch (iLocal_69)
	{
		case 0:
			if (!func_147())
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_122())
					{
						if (func_53() == 0)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
						}
						if (func_53() == 1)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
						}
						if (func_53() == 2)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
						}
						iLocal_69 = 2;
					}
					else
					{
						if (func_53() == 0)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
						}
						if (func_53() == 1)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
						}
						if (func_53() == 2)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
						}
						iLocal_69++;
					}
				}
				else
				{
					if (func_53() == 0)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					}
					if (func_53() == 1)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					}
					if (func_53() == 2)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					}
					iLocal_69++;
				}
			}
			break;
		
		case 1:
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!func_122())
				{
					if (!func_147())
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_139 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_69++;
					}
				}
				else
				{
					iLocal_69++;
				}
			}
			else if (!func_147())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_139 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_69++;
			}
			break;
		
		case 2:
			iLocal_140 = GAMEPLAY::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_58, 12f, 12f, 5f, 0, 1, 2))
				{
					if (func_122())
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_152, 1862763509);
						if (func_126("REDO2_WT"))
						{
							func_54();
							wait(false);
						}
						iLocal_69++;
					}
					else if (!func_147() && !iLocal_87)
					{
						if (!func_121())
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_87 = 1;
					}
				}
			}
			if (iLocal_139 != 0)
			{
				if (iLocal_140 - iLocal_139 > 60000)
				{
					if (func_146(&uLocal_155, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						wait(2000);
						if (!PED::IS_PED_INJURED(iLocal_58))
						{
							open_sequence_task(&iLocal_95);
							task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 2000);
							task_use_mobile_phone_timed(false, -1);
							task_wander_standard(false, 1193033728, 0);
							close_sequence_task(iLocal_95);
							task_perform_sequence(iLocal_58, iLocal_95);
							clear_sequence_task(&iLocal_95);
							set_ped_keep_task(iLocal_58, true);
							wait(3000);
							iLocal_49 = 11;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_58) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
			{
				open_sequence_task(&iLocal_95);
				if (iLocal_68 > 18)
				{
				}
				task_follow_nav_mesh_to_coord(false, ENTITY::GET_ENTITY_COORDS(iLocal_121[8], 1) + Vector(0f, 0.39f, 0.35f), 1f, -1, 0f, 512, func_125(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_121[8], 1)));
				AI::TASK_PLAY_ANIM(false, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
				AI::TASK_PLAY_ANIM(false, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
				close_sequence_task(iLocal_95);
				task_perform_sequence(iLocal_58, iLocal_95);
				clear_sequence_task(&iLocal_95);
				settimerb(false);
				iLocal_69++;
			}
			break;
		
		case 4:
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_121[8], 0))
			{
				if (is_entity_playing_anim(iLocal_58, "random@domestic", "pickup_low", 3))
				{
					set_entity_no_collision_entity(iLocal_58, iLocal_121[8], 0);
					if (get_entity_anim_current_time(iLocal_58, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_69 = 7;
					}
				}
				else if (timerb() > 10000 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_121[8], 1), 1.5f, 1.5f, 3f, false, true, 0))
				{
					if (!is_entity_attached(iLocal_121[8]))
					{
						open_sequence_task(&iLocal_95);
						AI::TASK_PLAY_ANIM(false, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
						AI::TASK_PLAY_ANIM(false, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
						close_sequence_task(iLocal_95);
						task_perform_sequence(iLocal_58, iLocal_95);
						clear_sequence_task(&iLocal_95);
						iLocal_69 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_121[8], 0))
			{
				if (is_entity_playing_anim(iLocal_58, "random@domestic", "pickup_low", 3))
				{
					set_entity_no_collision_entity(iLocal_58, iLocal_121[8], 0);
					if (get_entity_anim_current_time(iLocal_58, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_69++;
					}
				}
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (is_entity_at_entity(iLocal_58, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					attach_entity_to_entity(iLocal_121[8], iLocal_58, get_ped_bone_index(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
					set_ped_as_group_member(iLocal_58, get_player_group(player_id()));
					set_ped_never_leaves_group(iLocal_58, 1);
					set_ped_group_member_passenger_index(iLocal_58, false);
					func_124();
					iLocal_49 = 4;
				}
			}
			break;
	}
}

void func_124()
{
	if (!func_46())
	{
		if (func_53() == 2)
		{
			Global_25354 = 1;
		}
	}
}

float func_125(struct<2> Param0, Vector3 fParam1, struct<2> Param2, Vector3 fParam3)
{
	return get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

bool func_126(char* sParam0)
{
	auto uVar0;
	
	if (func_147())
	{
		MemCopy(&uVar0, {func_59()}, 4);
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return true;
		}
	}
	return false;
}

void func_127()
{
	if (!iLocal_98)
	{
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			if (is_entity_at_entity(iLocal_58, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, 0, 1, 0))
			{
				AI::CLEAR_PED_TASKS(iLocal_58);
				open_sequence_task(&iLocal_95);
				task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 18000, 0, 2);
				close_sequence_task(iLocal_95);
				task_perform_sequence(iLocal_58, iLocal_95);
				clear_sequence_task(&iLocal_95);
				task_look_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_58, 15000, 0, 2);
				iLocal_98 = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		if (is_entity_at_entity(iLocal_58, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, 0, 1, 0))
		{
			if (!iLocal_138)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					AI::CLEAR_PED_TASKS(iLocal_58);
					open_sequence_task(&iLocal_95);
					task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), -1);
					close_sequence_task(iLocal_95);
					task_perform_sequence(iLocal_58, iLocal_95);
					clear_sequence_task(&iLocal_95);
					iLocal_138 = true;
				}
				else
				{
					AI::CLEAR_PED_TASKS(iLocal_58);
					open_sequence_task(&iLocal_95);
					task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), -1);
					close_sequence_task(iLocal_95);
					task_perform_sequence(iLocal_58, iLocal_95);
					clear_sequence_task(&iLocal_95);
					iLocal_138 = true;
				}
			}
			if (iLocal_138)
			{
				if (iLocal_54)
				{
					func_57();
					wait(false);
					if (!PED::IS_PED_INJURED(iLocal_58))
					{
						if (!func_147())
						{
							if (is_ped_facing_ped(iLocal_58, PLAYER::PLAYER_PED_ID(), 90f))
							{
								if (func_146(&uLocal_155, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									settimera(false);
									iLocal_49 = 7;
								}
							}
						}
					}
				}
				else if (!func_147())
				{
					if (func_146(&uLocal_155, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						settimera(false);
						iLocal_49 = 7;
					}
				}
			}
		}
	}
}

void func_128()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
		{
			if (func_129())
			{
				func_45(0);
				iLocal_90 = 0;
			}
		}
		else if (func_147() && !iLocal_90)
		{
			func_45(1);
			iLocal_90 = 1;
		}
	}
}

bool func_129()
{
	if (Global_16723 == 1)
	{
		return true;
	}
	return false;
}

void func_130()
{
	switch (iLocal_68)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_57))
			{
				if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_57, 1), 3f))
				{
					if (!func_147())
					{
						if (func_146(&uLocal_155, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							AI::TASK_PLAY_ANIM(iLocal_58, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							AI::TASK_PLAY_ANIM(iLocal_57, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							iLocal_68++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
			{
				attach_entity_to_entity(iLocal_121[8], iLocal_57, get_ped_bone_index(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
				iLocal_68++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
			{
				if (is_entity_playing_anim(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (get_entity_anim_current_time(iLocal_57, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						detach_entity(iLocal_121[8], 0, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_121[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 3:
			if (!iLocal_88 && ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
			{
				if (has_entity_collided_with_anything(iLocal_121[8]))
				{
					play_sound_from_entity(-1, "CLOTHES_THROWN", iLocal_121[8], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[9]))
			{
				if (is_entity_playing_anim(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (get_entity_anim_current_time(iLocal_57, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						attach_entity_to_entity(iLocal_121[9], iLocal_57, get_ped_bone_index(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 5:
			if (!func_147() || func_129())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_68++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[9]))
			{
				if (is_entity_playing_anim(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (get_entity_anim_current_time(iLocal_57, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						detach_entity(iLocal_121[9], 0, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_121[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 7:
			if (!iLocal_88 && ENTITY::DOES_ENTITY_EXIST(iLocal_121[9]))
			{
				if (has_entity_collided_with_anything(iLocal_121[9]))
				{
					play_sound_from_entity(-1, "CLOTHES_THROWN", iLocal_121[9], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 8:
			if (!PED::IS_PED_INJURED(iLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[10]))
			{
				if (is_entity_playing_anim(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (get_entity_anim_current_time(iLocal_57, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						attach_entity_to_entity(iLocal_121[10], iLocal_57, get_ped_bone_index(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 9:
			if (!PED::IS_PED_INJURED(iLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[10]))
			{
				if (is_entity_playing_anim(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (get_entity_anim_current_time(iLocal_57, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						detach_entity(iLocal_121[10], 0, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_121[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 10:
			if (!iLocal_88 && ENTITY::DOES_ENTITY_EXIST(iLocal_121[10]))
			{
				if (has_entity_collided_with_anything(iLocal_121[10]))
				{
					play_sound_from_entity(-1, "CLOTHES_THROWN", iLocal_121[10], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 11:
			if (!PED::IS_PED_INJURED(iLocal_57) && !PED::IS_PED_INJURED(iLocal_58))
			{
				if (is_entity_playing_anim(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (get_entity_anim_current_time(iLocal_57, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						task_turn_ped_to_face_entity(iLocal_57, iLocal_58, false);
					}
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_68 = 14;
			}
			break;
		
		case 14:
			if (!func_147())
			{
				if (func_146(&uLocal_155, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_131();
					iLocal_68++;
				}
			}
			break;
		
		case 15:
			if (!func_147())
			{
				if (func_146(&uLocal_155, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
				{
					iLocal_68++;
				}
			}
			break;
		
		case 16:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				open_sequence_task(&iLocal_95);
				task_clear_look_at(false);
				task_turn_ped_to_face_coord(false, vLocal_109, 0);
				close_sequence_task(iLocal_95);
				task_perform_sequence(iLocal_58, iLocal_95);
				clear_sequence_task(&iLocal_95);
				iLocal_68++;
			}
			break;
		
		case 17:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_57, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_57, vLocal_109, 1f, 1f, 5f, false, true, 0) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_57))
					{
						PED::DELETE_PED(&iLocal_57);
					}
				}
			}
			if (iLocal_93 < GAMEPLAY::GET_GAME_TIMER())
			{
				if (!func_147())
				{
					if (func_146(&uLocal_155, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_93 = GAMEPLAY::GET_GAME_TIMER() + 5000;
						iLocal_94++;
					}
				}
			}
			if (iLocal_94 > 0)
			{
				iLocal_68++;
			}
			break;
		
		case 18:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (!func_147())
				{
					if (func_146(&uLocal_155, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						task_wander_standard(iLocal_58, 1193033728, 0);
						iLocal_68++;
					}
				}
			}
			break;
	}
	if (!iLocal_54)
	{
		if (iLocal_68 > 2 && iLocal_68 < 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_58, 6f, 4f, 5f, 0, 1, 0) || (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_58, 12f, 12f, 5f, 0, 1, 2) && is_player_pressing_horn(player_id())))
				{
					AI::CLEAR_PED_TASKS(iLocal_58);
					func_131();
					if (iLocal_68 > 18)
					{
						iLocal_49 = 3;
					}
					else
					{
						func_57();
						while (func_147())
						{
							wait(false);
						}
						if (func_146(&uLocal_155, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							iLocal_54 = true;
							iLocal_49 = 3;
						}
					}
				}
			}
		}
		else if (iLocal_68 > 7)
		{
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_58, 6f, 8f, 5f, 0, 1, 0))
				{
					if (does_blip_exist(uLocal_102[0]))
					{
						_0x75A16C3DA34F1245(uLocal_102[0], true);
					}
					AI::CLEAR_PED_TASKS(iLocal_58);
					func_131();
					if (iLocal_68 > 18)
					{
						iLocal_49 = 3;
					}
					else
					{
						func_54();
						while (func_147())
						{
							wait(false);
						}
						if (func_146(&uLocal_155, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							iLocal_54 = true;
							iLocal_49 = 3;
						}
					}
				}
			}
		}
	}
	if (iLocal_56)
	{
		if (iLocal_55 < GAMEPLAY::GET_GAME_TIMER())
		{
			func_57();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
			{
				func_131();
			}
			iLocal_49 = 3;
		}
	}
}

void func_131()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		open_sequence_task(&iLocal_95);
		task_go_straight_to_coord(false, vLocal_109, 1f, -1, 1193033728, 0.5f);
		AI::TASK_PLAY_ANIM(false, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0, 0, 0, 0);
		close_sequence_task(iLocal_95);
		task_perform_sequence(iLocal_57, iLocal_95);
		clear_sequence_task(&iLocal_95);
		set_ped_keep_task(iLocal_57, true);
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[iVar0]))
			{
				detach_entity(iLocal_121[iVar0], 1, true);
			}
			iVar0++;
		}
	}
}

bool func_132(int iParam0)
{
	if (func_135())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_25(Global_101143))
		{
			func_133(0);
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

void func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_105(func_134(iParam0), -1);
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
					func_105(func_134(iParam0), -1);
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
					func_105(func_134(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

char* func_134(int iParam0)
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

bool func_135()
{
	switch (func_136(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_136(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_140(0))
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
		if (!func_138(iParam2))
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
			func_137(uParam0, iParam4);
		}
	}
	return 2;
}

void func_137(auto uParam0, int iParam1)
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

int func_138(int iParam0)
{
	return func_139(iParam0, Global_35711);
}

bool func_139(int iParam0, int iParam1)
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

bool func_140(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_138(iParam0))
	{
		return false;
	}
	return true;
}

void func_141()
{
	if (does_blip_exist(iLocal_105))
	{
		remove_blip(&iLocal_105);
	}
	if (!does_blip_exist(uLocal_102[0]))
	{
		uLocal_102[0] = func_115(iLocal_58, 0, 145);
		_0x75A16C3DA34F1245(uLocal_102[0], false);
	}
}

void func_142()
{
	func_4(39, 1);
	func_4(40, 1);
	func_4(41, 1);
	func_4(42, 1);
	func_4(43, 1);
	func_4(44, 1);
	clear_area(vLocal_63, 2f, 1, 0, 0, false);
	clear_area(vLocal_60, 2f, 1, 0, 0, false);
	set_all_vehicle_generators_active_in_area(vLocal_63 - Vector(10f, 10f, 10f), vLocal_63 + Vector(10f, 10f, 10f), false, 1);
	set_roads_in_angled_area(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 0, false, 1);
	add_scenario_blocking_area(vLocal_63 - Vector(10f, 10f, 10f), vLocal_63 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	add_scenario_blocking_area(vLocal_112 - Vector(3f, 2f, 2f), vLocal_112 + Vector(3f, 2f, 2f), 0, 1, 1, 1);
	add_scenario_blocking_area(Vector(53.1038f, 56.6649f, -1366.481f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.481f) + Vector(1f, 1f, 1f), 0, 1, 1, 1);
	add_relationship_group("rghDomestic", &iLocal_152);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_152, 1862763509);
	iLocal_57 = PED::CREATE_PED(26, iLocal_96, vLocal_60, fLocal_66, 1, true);
	set_blocking_of_non_temporary_events(iLocal_57, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_57, 17, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_57, 8, false);
	set_ped_flee_attributes(iLocal_57, 1, false);
	set_ped_flee_attributes(iLocal_57, 2, false);
	set_ped_flee_attributes(iLocal_57, 128, true);
	set_ped_flee_attributes(iLocal_57, 8, false);
	AI::TASK_PLAY_ANIM(iLocal_57, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_57, iLocal_152);
	func_145(iLocal_57, "GENERIC_WHATEVER", 24);
	set_model_as_no_longer_needed(iLocal_96);
	PED::SET_PED_CONFIG_FLAG(iLocal_57, 185, true);
	iLocal_58 = PED::CREATE_PED(26, iLocal_97, vLocal_63, fLocal_67, 1, true);
	set_blocking_of_non_temporary_events(iLocal_58, true);
	set_ped_flee_attributes(iLocal_58, 1, true);
	set_ped_flee_attributes(iLocal_58, 2, false);
	set_ped_flee_attributes(iLocal_58, 128, true);
	set_ped_flee_attributes(iLocal_58, 8, false);
	set_ped_flee_attributes(iLocal_58, 65536, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_58, 185, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_58, 206, true);
	set_ped_helmet(iLocal_58, 0);
	set_ped_can_be_targetted(iLocal_58, false);
	AI::TASK_PLAY_ANIM(iLocal_58, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_58, iLocal_152);
	func_145(iLocal_58, "GENERIC_WHATEVER", 24);
	set_model_as_no_longer_needed(iLocal_97);
	task_look_at_entity(iLocal_58, iLocal_57, -1, 0, 2);
	task_look_at_entity(iLocal_57, iLocal_58, -1, 0, 2);
	set_ped_component_variation(iLocal_57, false, true, false, 0);
	set_ped_component_variation(iLocal_57, 2, true, true, 0);
	set_ped_component_variation(iLocal_57, 3, true, true, 0);
	set_ped_component_variation(iLocal_57, 4, true, 2, 0);
	set_ped_component_variation(iLocal_58, false, false, false, 0);
	set_ped_component_variation(iLocal_58, 2, true, false, 0);
	set_ped_component_variation(iLocal_58, 3, true, 2, 0);
	set_ped_component_variation(iLocal_58, 4, true, true, 0);
	set_ped_component_variation(iLocal_58, 8, false, false, 0);
	func_144();
	GAMEPLAY::SET_BIT(&uLocal_134, 5);
	if (func_53() == 0)
	{
		func_143(&uLocal_155, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (func_53() == 1)
	{
		func_143(&uLocal_155, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (func_53() == 2)
	{
		func_143(&uLocal_155, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_143(&uLocal_155, 3, iLocal_58, "REDOCastro", 0, 1);
	set_ambient_voice_name(iLocal_58, sLocal_153);
	func_143(&uLocal_155, 4, iLocal_57, "NATHALIA", 0, 1);
	set_ambient_voice_name(iLocal_57, sLocal_154);
	settimera(false);
	iLocal_150 = 1;
}

void func_143(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_144()
{
	iLocal_121[0] = create_object(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, 1, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[0], -13.7262f, 0.5001f, -0.5886f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[0], true);
	set_model_as_no_longer_needed(joaat("prop_ld_tshirt_02"));
	iLocal_121[1] = create_object(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, 1, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[1], -7.3906f, -12.8136f, -63.733f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[1], true);
	set_model_as_no_longer_needed(joaat("prop_ld_jeans_02"));
	iLocal_121[2] = create_object(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, 1, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[2], -7.041683f, 10.17298f, 45.7617f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[2], true);
	set_model_as_no_longer_needed(joaat("prop_ld_shoe_01"));
	iLocal_121[3] = create_object(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, 1, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[3], -8.5884f, 12.6893f, 57.1792f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[3], true);
	set_model_as_no_longer_needed(joaat("prop_ld_jeans_01"));
	iLocal_121[4] = create_object(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, 1, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[4], -16.4886f, 2.4979f, -3.8769f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[4], true);
	set_model_as_no_longer_needed(joaat("prop_ld_shoe_02"));
	iLocal_121[5] = create_object(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, 1, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[5], -3.5946f, -15.0978f, -75.5026f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[5], true);
	set_model_as_no_longer_needed(joaat("prop_ld_shirt_01"));
	iLocal_121[6] = create_object(joaat("prop_porn_mag_03"), -472.7543f, 542.3022f, 119.7628f, 1, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[6], 6.402527f, -15.68665f, -104.1308f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[6], true);
	set_model_as_no_longer_needed(joaat("prop_porn_mag_03"));
	iLocal_121[7] = create_object(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, 1, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[7], -8.3642f, 1.9344f, 2.6889f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[7], true);
	set_model_as_no_longer_needed(joaat("prop_porn_mag_01"));
	iLocal_121[8] = create_object(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, true, false);
	iLocal_121[9] = create_object(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, 1, true, false);
	set_model_as_no_longer_needed(joaat("prop_cs_rub_binbag_01"));
	iLocal_121[10] = create_object(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, 1, true, false);
	set_model_as_no_longer_needed(joaat("prop_golf_bag_01"));
}

void func_145(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_49(iParam2), 1);
}

int func_146(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_73(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_64(sParam2, iParam3, 0);
}

bool func_147()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_148()
{
	if (!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_57))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (_0x6CD5A433374D4CFB(iLocal_58, PLAYER::PLAYER_PED_ID()) || _0x6CD5A433374D4CFB(iLocal_57, PLAYER::PLAYER_PED_ID()))
			{
				if (((is_player_targetting_entity(player_id(), iLocal_58) || is_player_free_aiming_at_entity(player_id(), iLocal_58)) || is_player_targetting_entity(player_id(), iLocal_57)) || is_player_free_aiming_at_entity(player_id(), iLocal_57))
				{
					if (iLocal_135 == -1)
					{
						iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_135 = -1;
				}
			}
			if ((iLocal_135 != -1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_135 + 500) || is_ped_shooting(PLAYER::PLAYER_PED_ID()))
			{
				func_155();
			}
		}
	}
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		func_155();
	}
	if (iLocal_49 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
		{
			if (func_154(iLocal_58))
			{
				func_153();
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, false, true, 0))
	{
		func_152();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (func_151(iLocal_57))
		{
			func_149();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		if (func_151(iLocal_58) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_149();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (func_151(iLocal_57) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_149();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_58, 250f, 250f, 250f, 0, 1, 0) || is_entity_in_water(iLocal_58))
		{
			iLocal_49 = 11;
		}
	}
	if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
	{
		func_149();
	}
}

void func_149()
{
	func_54();
	wait(false);
	if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
	{
		func_146(&uLocal_155, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	}
	else
	{
		func_146(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		AI::CLEAR_PED_TASKS(iLocal_58);
		open_sequence_task(&iLocal_95);
		AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		close_sequence_task(iLocal_95);
		task_perform_sequence(iLocal_58, iLocal_95);
		clear_sequence_task(&iLocal_95);
		set_ped_keep_task(iLocal_58, true);
		wait(3000);
	}
	func_150();
	wait(false);
	func_50();
	iLocal_49 = 11;
}

void func_150()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		task_cower(iLocal_57, -1);
		set_ped_keep_task(iLocal_57, true);
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[iVar0]))
			{
				detach_entity(iLocal_121[iVar0], 1, true);
			}
			iVar0++;
		}
	}
}

bool func_151(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_152()
{
	func_150();
	func_54();
	wait(false);
	func_146(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		AI::CLEAR_PED_TASKS(iLocal_58);
		open_sequence_task(&iLocal_95);
		AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		close_sequence_task(iLocal_95);
		task_perform_sequence(iLocal_58, iLocal_95);
		clear_sequence_task(&iLocal_95);
		set_ped_keep_task(iLocal_58, true);
		wait(3000);
	}
	func_50();
	iLocal_49 = 11;
}

void func_153()
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		AI::CLEAR_PED_TASKS(iLocal_58);
		task_smart_flee_coord(iLocal_58, ENTITY::GET_ENTITY_COORDS(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 1), 150f, -1, 0, 0);
		set_ped_keep_task(iLocal_58, true);
	}
	iLocal_49 = 11;
}

bool func_154(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!is_ped_in_any_vehicle(iParam0, 0) && is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, 1.5f, 1.5f, 8f, 0, 1, 2))
		{
			if (get_entity_speed(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) > 4f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_155()
{
	func_54();
	wait(false);
	func_146(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		open_sequence_task(&iLocal_95);
		task_leave_any_vehicle(false, false, 4096);
		AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		close_sequence_task(iLocal_95);
		task_perform_sequence(iLocal_58, iLocal_95);
		clear_sequence_task(&iLocal_95);
		set_ped_keep_task(iLocal_58, true);
		wait(3000);
	}
	func_50();
	iLocal_49 = 11;
}

void func_156()
{
	STREAMING::REQUEST_MODEL(iLocal_96);
	STREAMING::REQUEST_MODEL(iLocal_97);
	STREAMING::REQUEST_MODEL(joaat("prop_golf_iron_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_rub_binbag_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_golf_bag_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_tshirt_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shirt_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_03"));
	STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_01"));
	request_anim_dict("random@domestic");
	request_anim_dict("random@security_van");
	if ((((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_96) && STREAMING::HAS_MODEL_LOADED(iLocal_97)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_golf_iron_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_rub_binbag_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_golf_bag_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_tshirt_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_jeans_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shoe_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_jeans_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shoe_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shirt_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_porn_mag_03"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_porn_mag_01"))) && has_anim_dict_loaded("random@domestic")) && has_anim_dict_loaded("random@security_van"))
	{
		iLocal_50 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_96);
		STREAMING::REQUEST_MODEL(iLocal_97);
		STREAMING::REQUEST_MODEL(joaat("prop_golf_iron_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_cs_rub_binbag_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_golf_bag_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_tshirt_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shirt_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_03"));
		STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_01"));
		request_anim_dict("random@domestic");
		request_anim_dict("random@security_van");
	}
}

void func_157()
{
	vLocal_106 = {-470.4934f, 540.0073f, 120.3715f};
	iLocal_96 = joaat("a_f_y_business_02");
	iLocal_97 = joaat("a_m_y_golfer_01");
	sLocal_153 = "REDOCastro";
	sLocal_154 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	vLocal_60 = {-472.6554f, 536.469f, 123.3555f};
	fLocal_66 = 348.9152f;
	vLocal_63 = {-470.1328f, 542.9949f, 119.6873f};
	fLocal_67 = 156.0666f;
	vLocal_109 = {-469.082f, 535.0479f, 123.3553f};
	vLocal_112 = {-1378.273f, 40.2254f, 52.6774f};
	vLocal_115 = {-1368.188f, 57.2309f, 52.7045f};
	iLocal_59 = true;
}

bool func_158()
{
	if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_44) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_169())
		{
			return false;
		}
	}
	if (func_165())
	{
		return true;
	}
	if (func_159(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_159(float fParam0, int iParam1)
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
		if (func_33(func_53()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_160(iVar32, &Var0);
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

void func_160(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_161(uParam1, "Abigail1", func_163(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 1:
			func_161(uParam1, "Abigail2", func_163(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 2:
			func_161(uParam1, "Barry1", func_163(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 3:
			func_161(uParam1, "Barry2", func_163(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 4:
			func_161(uParam1, "Barry3", func_163(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 5:
			func_161(uParam1, "Barry3A", func_163(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 6:
			func_161(uParam1, "Barry3C", func_163(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 7:
			func_161(uParam1, "Barry4", func_163(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_162(iParam0), 0, 0);
			break;
		
		case 8:
			func_161(uParam1, "Dreyfuss1", func_163(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 9:
			func_161(uParam1, "Epsilon1", func_163(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 10:
			func_161(uParam1, "Epsilon2", func_163(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 11:
			func_161(uParam1, "Epsilon3", func_163(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 12:
			func_161(uParam1, "Epsilon4", func_163(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 13:
			func_161(uParam1, "Epsilon5", func_163(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 14:
			func_161(uParam1, "Epsilon6", func_163(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 15:
			func_161(uParam1, "Epsilon7", func_163(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 16:
			func_161(uParam1, "Epsilon8", func_163(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 17:
			func_161(uParam1, "Extreme1", func_163(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 18:
			func_161(uParam1, "Extreme2", func_163(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 19:
			func_161(uParam1, "Extreme3", func_163(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 20:
			func_161(uParam1, "Extreme4", func_163(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 21:
			func_161(uParam1, "Fanatic1", func_163(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_162(iParam0), 1, 0);
			break;
		
		case 22:
			func_161(uParam1, "Fanatic2", func_163(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_162(iParam0), 1, 0);
			break;
		
		case 23:
			func_161(uParam1, "Fanatic3", func_163(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_162(iParam0), 0, 1);
			break;
		
		case 24:
			func_161(uParam1, "Hao1", func_163(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_162(iParam0), 0, 1);
			break;
		
		case 25:
			func_161(uParam1, "Hunting1", func_163(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 26:
			func_161(uParam1, "Hunting2", func_163(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 27:
			func_161(uParam1, "Josh1", func_163(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 28:
			func_161(uParam1, "Josh2", func_163(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 29:
			func_161(uParam1, "Josh3", func_163(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 30:
			func_161(uParam1, "Josh4", func_163(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 31:
			func_161(uParam1, "Maude1", func_163(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 32:
			func_161(uParam1, "Minute1", func_163(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 33:
			func_161(uParam1, "Minute2", func_163(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 34:
			func_161(uParam1, "Minute3", func_163(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 35:
			func_161(uParam1, "MrsPhilips1", func_163(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 36:
			func_161(uParam1, "MrsPhilips2", func_163(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 37:
			func_161(uParam1, "Nigel1", func_163(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 38:
			func_161(uParam1, "Nigel1A", func_163(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 39:
			func_161(uParam1, "Nigel1B", func_163(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_162(iParam0), 1, 1);
			break;
		
		case 40:
			func_161(uParam1, "Nigel1C", func_163(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_162(iParam0), 1, 1);
			break;
		
		case 41:
			func_161(uParam1, "Nigel1D", func_163(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_162(iParam0), 1, 1);
			break;
		
		case 42:
			func_161(uParam1, "Nigel2", func_163(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 43:
			func_161(uParam1, "Nigel3", func_163(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 44:
			func_161(uParam1, "Omega1", func_163(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 45:
			func_161(uParam1, "Omega2", func_163(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 46:
			func_161(uParam1, "Paparazzo1", func_163(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 47:
			func_161(uParam1, "Paparazzo2", func_163(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 48:
			func_161(uParam1, "Paparazzo3", func_163(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 49:
			func_161(uParam1, "Paparazzo3A", func_163(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 50:
			func_161(uParam1, "Paparazzo3B", func_163(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 51:
			func_161(uParam1, "Paparazzo4", func_163(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 52:
			func_161(uParam1, "Rampage1", func_163(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 54:
			func_161(uParam1, "Rampage3", func_163(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 55:
			func_161(uParam1, "Rampage4", func_163(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 56:
			func_161(uParam1, "Rampage5", func_163(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 53:
			func_161(uParam1, "Rampage2", func_163(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 57:
			func_161(uParam1, "TheLastOne", func_163(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 58:
			func_161(uParam1, "Tonya1", func_163(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 59:
			func_161(uParam1, "Tonya2", func_163(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 60:
			func_161(uParam1, "Tonya3", func_163(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 61:
			func_161(uParam1, "Tonya4", func_163(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 62:
			func_161(uParam1, "Tonya5", func_163(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_161(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_162(int iParam0)
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

struct<2> func_163(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_164(iParam0)};
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

struct<2> func_164(int iParam0)
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

bool func_165()
{
	if (func_168() && !func_169())
	{
		return true;
	}
	if (func_167() && func_166())
	{
		return true;
	}
	return false;
}

int func_166()
{
	return Global_100872 > 0;
}

bool func_167()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_168()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_169()
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

bool func_170()
{
	if (!func_138(5))
	{
		return true;
	}
	if (func_165())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_169())
		{
			return false;
		}
	}
	if (func_159(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_171()
{
	if ((Global_101143 == func_39() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_172(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_174(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_173();
}

void func_173()
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

void func_174(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_175(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (!func_216())
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
			if (vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_169())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_17(0))
		{
			return false;
		}
		if (func_165())
		{
			return false;
		}
		if (func_215())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_33(func_53()))
		{
			if (func_159(100f, 1) != -1)
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
		if (!func_214(iParam3))
		{
			return false;
		}
		if (func_33(func_53()))
		{
			if (func_213(func_53()) == 4 || func_213(func_53()) == 5)
			{
				return false;
			}
		}
		if (func_33(func_53()))
		{
			if (!func_212(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_211(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_210())
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
		if (!func_201(4))
		{
			return false;
		}
		if (!func_138(5))
		{
			return false;
		}
		if (func_200(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_200(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_214(30) && !func_200(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_33(func_53()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_199(iVar8))
				{
					if (func_177(iVar4))
					{
						if (!func_176(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_53() != iVar4)
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

int func_176(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_177(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_178(iVar0);
}

int func_178(int iParam0)
{
	return func_179(iParam0, 1);
}

bool func_179(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_199(iParam0))
	{
		return false;
	}
	func_180(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_180(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_181(func_192(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_181(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_191(iParam0, iParam1))
	{
		iVar0 = func_190(iParam1);
		iVar1 = func_188(iParam0);
		iVar2 = func_188(iParam0) - func_188(iParam1);
		iVar3 = func_190(iParam0) - func_190(iParam1);
		iVar4 = func_187(iParam0) - func_187(iParam1);
		iVar5 = func_186(iParam0) - func_186(iParam1);
		iVar6 = func_185(iParam0) - func_185(iParam1);
		iVar7 = func_184(iParam0) - func_184(iParam1);
	}
	else
	{
		iVar0 = func_190(iParam0);
		iVar1 = func_188(iParam1);
		iVar2 = func_188(iParam1) - func_188(iParam0);
		iVar3 = func_190(iParam1) - func_190(iParam0);
		iVar4 = func_187(iParam1) - func_187(iParam0);
		iVar5 = func_186(iParam1) - func_186(iParam0);
		iVar6 = func_185(iParam1) - func_185(iParam0);
		iVar7 = func_184(iParam1) - func_184(iParam0);
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
		iVar4 += func_183(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_182(to_float(iVar0 + 1), 0f, 12f));
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

float func_182(Vector3 fParam0, float fParam1, float fParam2)
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

int func_183(int iParam0, int iParam1)
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

int func_184(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_185(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_186(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_187(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_188(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_189(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_190(int iParam0)
{
	return (iParam0 && 15);
}

bool func_191(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_199(iParam1) || !func_199(iParam0))
	{
		return true;
	}
	iVar0 = func_188(iParam0);
	iVar1 = func_188(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_190(iParam0);
	iVar1 = func_190(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_187(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_186(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_184(iParam0);
	iVar1 = func_184(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_192()
{
	auto uVar0;
	
	func_198(&uVar0, get_clock_seconds());
	func_197(&uVar0, get_clock_minutes());
	func_196(&uVar0, TIME::GET_CLOCK_HOURS());
	func_195(&uVar0, get_clock_day_of_month());
	func_194(&uVar0, get_clock_month());
	func_193(&uVar0, get_clock_year());
	return uVar0;
}

void func_193(auto uParam0, int iParam1)
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

void func_194(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_195(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_190(*uParam0);
	iVar1 = func_188(*uParam0);
	if (iParam1 < 1 || iParam1 > func_183(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_196(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_197(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_198(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_199(int iParam0)
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
	iVar0 = func_184(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_185(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_186(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_188(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_190(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_187(iParam0);
	if (iVar5 < 1 || iVar5 > func_183(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_200(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_201(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_53();
				if (!func_33(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_209()) || Global_100201) || Global_25122) || func_208()) || func_71(8, -1)) || func_207()) || func_206()) || func_205()) || func_204()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_209()) || Global_25122) || func_208()) || func_71(8, -1)) || func_205()) || func_207()) || func_206()) || func_204()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_209()) || Global_100201) || Global_25122) || func_208()) || func_71(8, -1)) || func_205()) || func_207()) || func_206()) || func_204()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_209()) || Global_100201) || Global_25122) || func_208()) || func_71(8, -1)) || func_207()) || func_206()) || func_204()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_209() || get_player_wanted_level(player_id()) > 0) || func_71(8, -1)) || func_204()) || func_203()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_71(8, -1) || func_207()) || func_206()) || func_203()) || func_202())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_209()) || Global_25122) || func_208()) || func_71(8, -1)) || func_206()) || func_205()) || func_204()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_209()) || func_206()) || Global_100201) || Global_25122) || func_208()) || Global_36839) || func_71(8, -1)) || func_205()) || func_203()) || func_204()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_209()) || Global_100201) || Global_25122) || func_208()) || func_71(8, -1)) || func_205()) || func_203()) || func_207()) || func_206()) || func_204())
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

auto func_202()
{
	return Global_91317.f_1;
}

int func_203()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_204()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_205()
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

int func_206()
{
	return Global_91330.f_297 > 0;
}

int func_207()
{
	return Global_91330.f_296 > 0;
}

auto func_208()
{
	return Global_1315913;
}

int func_209()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_210()
{
	func_69();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_211(int iParam0)
{
	return func_191(func_192(), iParam0);
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_53();
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

int func_213(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_216())
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

bool func_215()
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

bool func_216()
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

bool func_217(int iParam0, int iParam1)
{
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	return false;
}

void func_218()
{
	int iVar0;
	
	if (iLocal_150 && !iLocal_149)
	{
		func_3(0);
		if (Global_25358)
		{
			trigger_music_event("AC_STOP");
		}
		func_2();
		set_all_vehicle_generators_active_in_area(vLocal_63 - Vector(10f, 10f, 10f), vLocal_63 + Vector(10f, 10f, 10f), true, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_152, 1862763509);
		if (iLocal_59)
		{
			set_model_as_no_longer_needed(iLocal_96);
			set_model_as_no_longer_needed(iLocal_97);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_57, 317, true);
				set_blocking_of_non_temporary_events(iLocal_57, false);
			}
			set_ped_as_no_longer_needed(&iLocal_57);
		}
		if (does_blip_exist(iLocal_105))
		{
			remove_blip(&iLocal_105);
		}
		if (does_blip_exist(uLocal_102[0]))
		{
			remove_blip(&(uLocal_102[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
		{
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_58, 317, true);
				if (!is_ped_in_any_vehicle(iLocal_58, 0))
				{
					reset_ped_last_vehicle(iLocal_58);
				}
				remove_ped_from_group(iLocal_58);
				set_blocking_of_non_temporary_events(iLocal_58, false);
				set_ped_can_be_targetted(iLocal_58, true);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[iVar0]))
			{
				detach_entity(iLocal_121[iVar0], 1, true);
			}
			iVar0++;
		}
		set_roads_back_to_original_in_angled_area(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		remove_scenario_blocking_areas();
	}
	func_219(-1);
	terminate_this_thread();
}

void func_219(int iParam0)
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
	if (func_171())
	{
		func_223(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_222(30000);
		StringCopy(&cVar0, func_221(Global_101143, 1), 64);
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
	func_220(&Global_25179);
	Global_101144 = 0;
	func_174(-1);
}

void func_220(auto uParam0)
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

char* func_221(int iParam0, int iParam1)
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

void func_222(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_223(int iParam0)
{
	func_224(iParam0, 0, func_229(iParam0));
}

void func_224(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_192();
	func_227(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_226(uParam0, &uVar0);
	Var1 = {func_225(&uVar0)};
}

struct<16> func_225(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_186(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_185(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_184(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_187(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_190(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_188(*uParam0), 64);
	return cVar0;
}

void func_226(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_227(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_188(*uParam0);
	iVar1 = func_190(*uParam0);
	iVar2 = func_187(*uParam0);
	iVar3 = func_186(*uParam0);
	iVar4 = func_185(*uParam0);
	iVar5 = func_184(*uParam0);
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
	iVar6 = func_183(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_183(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_228(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_228(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_198(uParam0, iParam1);
	func_197(uParam0, iParam2);
	func_196(uParam0, iParam3);
	func_194(uParam0, iParam5);
	func_195(uParam0, iParam4);
	func_193(uParam0, iParam6);
}

int func_229(int iParam0)
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

