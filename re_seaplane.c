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
	Vector3 vLocal_43 = 0;
	auto uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<6>[] Local_49 = new struct<6>[11];
	struct<4>[] Local_116 = new struct<4>[5];
	char* sLocal_137 = 0;
	char* sLocal_138 = 0;
	Vector3 vLocal_139 = 0;
	Vector3 vLocal_142 = 0;
	Vector3 vLocal_145 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	auto uLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	auto uLocal_158 = 2;
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
	int iLocal_171 = 0;
	int[] iLocal_172 = new int[1];
	auto uLocal_174 = 16;
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
	auto uLocal_338 = 0;
	int iLocal_339 = 0;
	struct<2> Local_340 = 0;
	auto uLocal_342 = 0;
	auto uLocal_343 = 0;
	auto uLocal_344 = 0;
	auto uLocal_345 = 0;
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
	auto uLocal_357 = 5;
	auto uLocal_358 = 0;
	auto uLocal_359 = 0;
	auto uLocal_360 = 0;
	auto uLocal_361 = 0;
	auto uLocal_362 = 0;
#endregion

void main()
{
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
	sLocal_137 = "RE_SeaPlane1";
	sLocal_138 = "RE_SeaPlane2";
	vLocal_139 = {0f, 0f, 0f};
	vLocal_145 = {3097.46f, 2181.55f, 0.5f};
	iLocal_151 = -1;
	iLocal_152 = -1;
	iLocal_153 = joaat("dodo");
	iLocal_154 = joaat("tropic");
	iLocal_155 = joaat("g_m_y_mexgoon_02");
	iLocal_156 = joaat("suntrap");
	iLocal_157 = joaat("g_m_y_armgoon_02");
	vLocal_142 = {Local_340.f_1[0 /*3*/]};
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (func_198(Local_116[0 /*4*/]))
		{
			set_vehicle_doors_locked(Local_116[0 /*4*/], 2);
		}
		func_168(1, 0);
	}
	if (func_167() && func_124(vLocal_142, 32, 0, 0, 1))
	{
		func_121(32);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		if ((is_world_point_within_brain_activation_range() || func_120(1)) || func_120(4))
		{
			if (func_120(7))
			{
				func_81();
			}
			switch (iLocal_47)
			{
				case 0:
					func_34();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_198(Local_116[0 /*4*/]))
			{
				set_vehicle_doors_locked(Local_116[0 /*4*/], 2);
			}
			func_168(1, 0);
		}
		wait(false);
	}
}

void func_1()
{
	switch (iLocal_48)
	{
		case 0:
			iLocal_48 = 1;
			break;
		
		case 1:
			switch (iLocal_148)
			{
				case 0:
					iLocal_48 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	func_31(66, 1);
	func_31(67, 1);
	func_6(-1, 0);
	func_3();
	func_168(1, 0);
}

void func_3()
{
	func_4();
}

bool func_4()
{
	if (func_5(0))
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

int func_5(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
		if (!func_26(51))
		{
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322)
		{
			func_8(func_14(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
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

void func_7(int iParam0)
{
	Global_101140 = iParam0;
}

void func_8(int iParam0, auto uParam1, auto uParam2)
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
		func_9();
	}
}

void func_9()
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
					func_4();
				}
			}
		}
	}
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

int func_14(int iParam0, int iParam1)
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

bool func_15(int iParam0)
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

void func_16(int iParam0)
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

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_19();
	}
}

void func_19()
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

int func_20()
{
	func_21();
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

void func_21()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_25(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_24(PLAYER::PLAYER_PED_ID());
			if (func_23(iVar0) && (!func_22(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_23(Global_101154.f_1826.f_539.f_3549))
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

int func_22(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_26(int iParam0)
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

void func_27(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_28(int iParam0)
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

auto func_29()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_30(cVar0);
	return uVar16;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_31(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_33(iParam0, 0))
		{
			func_32(iParam0, 1, 0);
			func_32(iParam0, 2, 0);
			func_32(iParam0, 3, 0);
			func_32(iParam0, 4, 0);
			func_32(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_32(iParam0, 0, 0);
	}
}

void func_32(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

int func_33(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_18807[iParam0], iParam1);
}

void func_34()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			func_68();
			func_67(7);
			STREAMING::REQUEST_MODEL(iLocal_154);
			iLocal_48 = 1;
			break;
		
		case 1:
			switch (iLocal_148)
			{
				case 0:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_154))
					{
						STREAMING::REQUEST_MODEL(iLocal_153);
						iLocal_148++;
					}
					break;
				
				case 1:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_153))
					{
						STREAMING::REQUEST_MODEL(iLocal_155);
						iLocal_148++;
					}
					break;
				
				case 2:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_155))
					{
						STREAMING::REQUEST_MODEL(iLocal_156);
						iLocal_148++;
					}
					break;
				
				case 3:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_156))
					{
						STREAMING::REQUEST_MODEL(iLocal_157);
						iLocal_148++;
					}
					break;
				
				case 4:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_157))
					{
						request_waypoint_recording(sLocal_137);
						iLocal_148++;
					}
					break;
				
				case 5:
					if (get_is_waypoint_recording_loaded(sLocal_137))
					{
						request_waypoint_recording(sLocal_138);
						iLocal_148++;
					}
					break;
				
				case 6:
					if ((((((STREAMING::HAS_MODEL_LOADED(iLocal_154) && STREAMING::HAS_MODEL_LOADED(iLocal_153)) && STREAMING::HAS_MODEL_LOADED(iLocal_155)) && STREAMING::HAS_MODEL_LOADED(iLocal_157)) && STREAMING::HAS_MODEL_LOADED(iLocal_156)) && get_is_waypoint_recording_loaded(sLocal_137)) && get_is_waypoint_recording_loaded(sLocal_138))
					{
						func_63(0, vLocal_139, -1f, 1);
						set_model_as_no_longer_needed(iLocal_153);
						func_63(1, vLocal_139, -1082130432, 0);
						func_63(2, vLocal_139, -1082130432, 0);
						iVar0 = 0;
						while (iVar0 <= 4)
						{
							func_54(iVar0, 0, vLocal_139, -1082130432);
							iVar0++;
						}
						func_44(1);
						iLocal_148++;
					}
					break;
				
				case 7:
					if (func_43())
					{
						func_42(&(Local_116[0 /*4*/].f_1));
						func_67(1);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_171);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_171, 1862763509);
						func_63(3, vLocal_139, -1082130432, 0);
						func_63(4, vLocal_139, -1082130432, 0);
						set_model_as_no_longer_needed(iLocal_154);
						set_model_as_no_longer_needed(iLocal_156);
						func_54(7, 0, vLocal_139, -1082130432);
						func_54(8, 0, vLocal_139, -1082130432);
						func_54(9, 0, vLocal_139, -1082130432);
						func_54(10, 0, vLocal_139, -1082130432);
						set_model_as_no_longer_needed(iLocal_155);
						set_model_as_no_longer_needed(iLocal_157);
						iLocal_148++;
					}
					if (func_41())
					{
						if (!is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_171);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_171, 1862763509);
						}
						else if (!func_120(2))
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, iLocal_171);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_171, 1862763509);
						}
					}
					break;
				
				case 8:
					iVar1 = true;
					iVar2 = 0;
					while (iVar2 <= 10)
					{
						if (!func_38(iVar2, 0))
						{
							iVar1 = false;
						}
						iVar2++;
					}
					if (iVar1)
					{
						iLocal_148++;
					}
					break;
				
				case 9:
					if (func_198(Local_116[0 /*4*/]))
					{
						if (func_37(PLAYER::PLAYER_PED_ID(), vLocal_145, 1) >= 200f && func_37(Local_116[0 /*4*/], vLocal_145, 1) >= 200f)
						{
							iLocal_48 = 2;
						}
					}
					else
					{
						func_36();
					}
					break;
			}
			break;
		
		case 2:
			func_35(1);
			break;
	}
}

void func_35(int iParam0)
{
	iLocal_148 = 0;
	iLocal_48 = 0;
	iLocal_47 = iParam0;
}

void func_36()
{
	if (func_198(Local_116[0 /*4*/]))
	{
		set_vehicle_doors_locked(Local_116[0 /*4*/], 2);
	}
	func_168(1, 0);
}

auto func_37(int iParam0, Vector3 vParam1, int iParam2)
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

bool func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_198(Local_49[iParam0 /*6*/]))
	{
		return true;
	}
	else
	{
		if (func_40(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 1) >= 400f)
		{
			func_39(iParam0, 0);
			return true;
		}
		if (iParam1)
		{
			iVar0 = iParam0;
			if (iVar0 >= 7 && !does_blip_exist(Local_49[iParam0 /*6*/].f_1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_39(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_49[iParam0 /*6*/]))
	{
		func_42(&(Local_49[iParam0 /*6*/].f_1));
		if ((((func_198(Local_49[iParam0 /*6*/]) && is_entity_attached(Local_49[iParam0 /*6*/])) && !is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 1)) && !is_ped_sitting_in_any_vehicle(Local_49[iParam0 /*6*/])) && !is_ped_getting_into_a_vehicle(Local_49[iParam0 /*6*/]))
		{
			detach_entity(Local_49[iParam0 /*6*/], 1, true);
		}
		if (iParam1)
		{
			delete_ped(&(Local_49[iParam0 /*6*/]));
		}
		else
		{
			set_ped_as_no_longer_needed(&(Local_49[iParam0 /*6*/]));
		}
		Local_49[iParam0 /*6*/].f_3 = 0;
		Local_49[iParam0 /*6*/].f_2 = 0;
	}
}

auto func_40(int iParam0, int iParam1, int iParam2)
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

int func_41()
{
	return is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 3150.508f, 2179.343f, -3.388727f, 3064.608f, 2223.616f, 12.38177f, 103f, 0, true, 0);
}

void func_42(int iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_route(*iParam0, false);
		remove_blip(iParam0);
	}
}

bool func_43()
{
	if (func_198(Local_116[0 /*4*/]) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_116[0 /*4*/], 0))
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (func_48())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_15(Global_101143))
		{
			func_45(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_15(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_46(func_47(iParam0), -1);
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
					func_46(func_47(iParam0), -1);
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
					func_46(func_47(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_46(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

char* func_47(int iParam0)
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

bool func_48()
{
	switch (func_49(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
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

int func_49(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_53(0))
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
		if (!func_51(iParam2))
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
			func_50(uParam0, iParam4);
		}
	}
	return 2;
}

void func_50(auto uParam0, int iParam1)
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

int func_51(int iParam0)
{
	return func_52(iParam0, Global_35711);
}

bool func_52(int iParam0, int iParam1)
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

bool func_53(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_51(iParam0))
	{
		return false;
	}
	return true;
}

bool func_54(int iParam0, int iParam1, Vector3 vParam2, float fParam3)
{
	Vector3 vVar0;
	Vector3 fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	Vector3 vVar9;
	Vector3 vVar12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	char* sVar74;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_49[iParam0 /*6*/]))
	{
		iVar5 = joaat("weapon_unarmed");
		iVar6 = false;
		iVar7 = -1;
		vVar9 = {vLocal_139};
		vVar12 = {vLocal_139};
		iVar15 = 0;
		iVar16 = 1;
		iVar17 = false;
		iVar18 = false;
		iVar19 = true;
		fVar20 = 0.75f;
		fVar21 = 0.95f;
		fVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		fVar27 = 125f;
		iVar28 = iLocal_171;
		iVar29 = true;
		iVar30 = true;
		iVar31 = false;
		iVar32 = true;
		iVar33 = true;
		iVar34 = false;
		iVar35 = false;
		iVar36 = false;
		iVar37 = false;
		iVar38 = true;
		iVar39 = true;
		iVar40 = true;
		iVar41 = false;
		iVar42 = true;
		iVar43 = false;
		iVar44 = true;
		iVar45 = true;
		iVar46 = true;
		iVar47 = 1;
		iVar48 = true;
		iVar49 = true;
		iVar50 = false;
		iVar51 = false;
		iVar52 = false;
		iVar53 = false;
		iVar54 = false;
		iVar55 = false;
		iVar56 = true;
		iVar57 = 0;
		iVar58 = false;
		iVar59 = 0;
		iVar60 = 1;
		iVar61 = true;
		iVar62 = 0;
		iVar63 = false;
		iVar64 = 0;
		iVar65 = false;
		iVar66 = false;
		iVar67 = false;
		iVar68 = false;
		iVar69 = false;
		iVar70 = false;
		iVar71 = false;
		iVar72 = false;
		iVar73 = false;
		switch (iParam0)
		{
			case 0:
				iVar4 = iLocal_157;
				iVar6 = Local_116[1 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = true;
				iVar38 = false;
				iVar49 = false;
				iVar72 = true;
				break;
			
			case 1:
				iVar4 = iLocal_157;
				vVar0 = {get_offset_from_entity_in_world_coords(Local_116[1 /*4*/], 0f, -1.7f, 0.9f)};
				fVar3 = get_entity_heading(Local_116[1 /*4*/]) + 90f;
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_microsmg");
				iVar37 = true;
				iVar38 = false;
				iVar49 = false;
				iVar72 = true;
				break;
			
			case 2:
				iVar4 = iLocal_155;
				iVar6 = Local_116[2 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = true;
				iVar38 = false;
				iVar49 = false;
				iVar72 = true;
				break;
			
			case 3:
				iVar4 = iLocal_155;
				vVar0 = {get_offset_from_entity_in_world_coords(Local_116[2 /*4*/], 0f, -1.5f, 0.9f)};
				fVar3 = get_entity_heading(Local_116[2 /*4*/]) + 90f;
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_microsmg");
				iVar37 = true;
				iVar38 = false;
				iVar49 = false;
				iVar72 = true;
				break;
			
			case 4:
				iVar4 = iLocal_155;
				vVar0 = {get_offset_from_entity_in_world_coords(Local_116[2 /*4*/], 0f, -2.3f, 0.9f)};
				fVar3 = get_entity_heading(Local_116[2 /*4*/]) + 90f;
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_pistol");
				iVar37 = true;
				iVar38 = false;
				iVar49 = false;
				iVar72 = true;
				break;
			
			case 7:
				iVar4 = iLocal_155;
				iVar6 = Local_116[3 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = true;
				iVar38 = false;
				iVar49 = false;
				iVar72 = true;
				break;
			
			case 8:
				iVar4 = iLocal_155;
				iVar6 = Local_116[3 /*4*/];
				iVar7 = false;
				iVar5 = joaat("weapon_microsmg");
				iVar37 = true;
				iVar38 = false;
				iVar49 = false;
				iVar72 = true;
				break;
			
			case 9:
				iVar4 = iLocal_157;
				iVar6 = Local_116[4 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = true;
				iVar38 = false;
				iVar49 = false;
				iVar72 = true;
				break;
			
			case 10:
				iVar4 = iLocal_157;
				iVar6 = Local_116[4 /*4*/];
				iVar7 = false;
				iVar5 = joaat("weapon_microsmg");
				iVar37 = true;
				iVar38 = false;
				iVar49 = false;
				iVar72 = true;
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return false;
		}
		if (!func_62(vParam2, vLocal_139, 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				vVar0 = {vParam2};
			}
			else
			{
				vVar9 = {vParam2};
			}
		}
		if (fParam5 != -1f)
		{
			fVar3 = fParam5;
		}
		if (func_198(iVar6))
		{
			Local_49[iParam0 /*6*/] = PED::CREATE_PED_inside_vehicle(iVar6, 26, iVar4, iVar7, 1, true);
		}
		else
		{
			Local_49[iParam0 /*6*/] = PED::CREATE_PED(26, iVar4, vVar0, fVar3, 1, true);
			set_entity_collision(Local_49[iParam0 /*6*/], iVar42, 0);
			_0x9EBC85ED0FFFE51C(Local_49[iParam0 /*6*/], !iVar66, 0);
		}
		if (iVar41)
		{
			set_entity_coords_no_offset(Local_49[iParam0 /*6*/], vVar0, 0, 0, 1);
		}
		if (iParam1)
		{
			if (iVar28 == iLocal_171)
			{
				Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 1, 145);
			}
			else
			{
				Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 0, 145);
			}
		}
		set_ped_drops_weapons_when_dead(Local_49[iParam0 /*6*/], iVar60);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*6*/], 213, iVar29);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*6*/], 212, iVar30);
		set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], iVar31);
		set_ped_keep_task(Local_49[iParam0 /*6*/], iVar32);
		set_ped_dies_when_injured(Local_49[iParam0 /*6*/], iVar33);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*6*/], 188, iVar56);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*6*/], 42, !iVar34);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 9, iVar36);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 3, iVar38);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*6*/], 342, iVar58);
		set_entity_load_collision_flag(Local_49[iParam0 /*6*/], iVar37);
		set_ped_armour(Local_49[iParam0 /*6*/], iVar18);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 8, iVar40);
		set_entity_visible(Local_49[iParam0 /*6*/], iVar39, 0);
		set_entity_invincible(Local_49[iParam0 /*6*/], iVar43);
		give_weapon_to_ped(Local_49[iParam0 /*6*/], iVar5, -1, iVar35, iVar35);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 2, iVar44);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 1, iVar45);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 52, iVar46);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 13, iVar69);
		set_ped_suffers_critical_hits(Local_49[iParam0 /*6*/], iVar47);
		set_ped_can_be_targetted(Local_49[iParam0 /*6*/], iVar48);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*6*/], 118, iVar49);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*6*/], 115, iVar50);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 12, iVar51);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 36, iVar52);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 35, iVar53);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 29, iVar54);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*6*/], 185, iVar55);
		set_ped_to_load_cover(Local_49[iParam0 /*6*/], iVar57);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 17, iVar63);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 5, iVar72);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 46, iVar73);
		disable_ped_pain_audio(Local_49[iParam0 /*6*/], iVar64);
		stop_ped_speaking(Local_49[iParam0 /*6*/], iVar59);
		func_58(Local_49[iParam0 /*6*/], fVar22, fVar23, fVar24, fVar25, fVar26);
		freeze_entity_position(Local_49[iParam0 /*6*/], iVar67);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*6*/], 203, iVar68);
		_0xA9B61A329BFDCBEA(Local_49[iParam0 /*6*/], !iVar68);
		if (!iVar61)
		{
			func_57(iParam0, 2);
		}
		if (!is_string_null_or_empty(sVar74))
		{
			task_start_scenario_in_place(Local_49[iParam0 /*6*/], sVar74, -1, 0);
		}
		if (iVar17 > 0)
		{
			if (iVar17 > get_entity_max_health(Local_49[iParam0 /*6*/]) || iVar62)
			{
				set_entity_max_health(Local_49[iParam0 /*6*/], iVar17);
			}
			set_entity_health(Local_49[iParam0 /*6*/], iVar17);
		}
		if (iVar19 > 0)
		{
			set_ped_accuracy(Local_49[iParam0 /*6*/], iVar19);
		}
		if (fVar27 >= 0f)
		{
			set_ped_hearing_range(Local_49[iParam0 /*6*/], fVar27);
		}
		if (fVar20 > 0f || fVar21 > 0f)
		{
			set_ped_chance_of_firing_blanks(Local_49[iParam0 /*6*/], fVar20, fVar21);
		}
		if (iVar70)
		{
			set_ped_sphere_defensive_area(Local_49[iParam0 /*6*/], vVar0, 5f, 0, 0);
		}
		if (iVar71)
		{
			stop_ped_weapon_firing_when_dropped(Local_49[iParam0 /*6*/]);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_49[iParam0 /*6*/], iVar28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar8))
		{
			attach_entity_to_entity(Local_49[iParam0 /*6*/], iVar8, -1, vVar9, vVar12, 1, 1, 1, 0, 2, 1);
			set_ped_can_ragdoll(Local_49[iParam0 /*6*/], 0);
			func_57(iParam0, 1);
		}
		func_56(iParam0);
		func_55(iParam0);
		if (iVar15 != 0)
		{
			give_weapon_component_to_ped(Local_49[iParam0 /*6*/], iVar5, iVar15);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_49[iParam0 /*6*/], iVar5, true);
		}
		PED::SET_PED_COMBAT_ABILITY(Local_49[iParam0 /*6*/], iVar16);
		if (iVar65)
		{
			set_ped_stealth_movement(Local_49[iParam0 /*6*/], 1, "DEFAULT_ACTION");
		}
		return true;
	}
	return false;
}

void func_55(int iParam0)
{
	if (func_198(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				break;
			}
	}
}

void func_56(int iParam0)
{
	if (func_198(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				set_ped_component_variation(Local_49[iParam0 /*6*/], false, false, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 3, false, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 4, false, false, 0);
				break;
			
			case 1:
				set_ped_component_variation(Local_49[iParam0 /*6*/], false, true, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 3, true, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 4, false, true, 0);
				break;
			
			case 2:
				set_ped_component_variation(Local_49[iParam0 /*6*/], false, false, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 3, false, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 4, false, false, 0);
				break;
			
			case 3:
				set_ped_component_variation(Local_49[iParam0 /*6*/], false, true, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 3, true, false, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 4, false, true, 0);
				break;
			
			case 4:
				set_ped_component_variation(Local_49[iParam0 /*6*/], false, true, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 3, false, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 4, true, false, 0);
				break;
			
			case 7:
				set_ped_component_variation(Local_49[iParam0 /*6*/], false, false, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 3, true, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 4, true, 2, 0);
				break;
			
			case 8:
				set_ped_component_variation(Local_49[iParam0 /*6*/], false, true, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 3, false, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 4, false, 2, 0);
				break;
			
			case 9:
				set_ped_component_variation(Local_49[iParam0 /*6*/], false, true, 2, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 3, false, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 4, false, 2, 0);
				break;
			
			case 10:
				set_ped_component_variation(Local_49[iParam0 /*6*/], false, false, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 3, true, true, 0);
				set_ped_component_variation(Local_49[iParam0 /*6*/], 4, true, false, 0);
				break;
			}
	}
}

void func_57(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Local_49[iParam0 /*6*/].f_2), iParam1);
}

void func_58(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		set_ped_seeing_range(iParam0, fParam1);
		set_ped_visual_field_peripheral_range(iParam0, fParam2);
		set_ped_visual_field_center_angle(iParam0, fParam3 / 2f);
		set_ped_visual_field_min_angle(iParam0, fParam4);
		set_ped_visual_field_max_angle(iParam0, fParam5);
	}
}

int func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_60(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_61(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_62(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_63(int iParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	Vector3 fVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	Vector3 vVar27;
	Vector3 vVar30;
	char* sVar33;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_116[iParam0 /*4*/]))
	{
		iVar5 = 0;
		iVar6 = true;
		iVar7 = true;
		iVar8 = false;
		iVar9 = false;
		iVar10 = true;
		iVar11 = false;
		iVar12 = false;
		iVar13 = true;
		iVar14 = false;
		iVar15 = false;
		iVar16 = 0;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = true;
		iVar20 = false;
		iVar21 = false;
		iVar22 = 1;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0)
		{
			case 0:
				vVar0 = {vLocal_145};
				fVar3 = 163.5528f;
				iVar4 = iLocal_153;
				iVar13 = false;
				iVar18 = 1;
				iVar19 = false;
				iVar21 = true;
				iVar8 = true;
				break;
			
			case 1:
				vVar0 = {3087.114f, 2195.558f, 2f};
				fVar3 = 157.68f;
				iVar4 = iLocal_156;
				iVar20 = true;
				iVar11 = true;
				iVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = false;
				break;
			
			case 2:
				vVar0 = {3092.788f, 2197.243f, 2f};
				fVar3 = -22.32f;
				iVar4 = iLocal_154;
				iVar20 = true;
				iVar11 = true;
				iVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = false;
				break;
			
			case 3:
				vVar0 = {3170.401f, 1964.587f, 0.2889f};
				fVar3 = 341.1273f;
				iVar4 = iLocal_154;
				iVar20 = true;
				iVar11 = true;
				iVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = false;
				break;
			
			case 4:
				vVar0 = {3227.12f, 2074.91f, 0.75f};
				fVar3 = 175.16f;
				iVar4 = iLocal_156;
				iVar20 = true;
				iVar11 = true;
				iVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = false;
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return false;
		}
		if (!func_62(vParam1, vLocal_139, 0))
		{
			vVar0 = {vParam1};
		}
		if (fParam4 != -1f)
		{
			fVar3 = fParam4;
		}
		Local_116[iParam0 /*4*/] = create_vehicle(iVar4, vVar0, fVar3, 1, true);
		func_66(iParam0);
		func_65(iParam0);
		set_entity_visible(Local_116[iParam0 /*4*/], iVar7, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar26))
		{
			attach_entity_to_entity(Local_116[iParam0 /*4*/], iVar26, -1, vVar27, vVar30, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			set_entity_collision(Local_116[iParam0 /*4*/], iVar6, 0);
		}
		set_vehicle_strong(Local_116[iParam0 /*4*/], iVar8);
		freeze_entity_position(Local_116[iParam0 /*4*/], iVar9);
		set_vehicle_tyres_can_burst(Local_116[iParam0 /*4*/], iVar10);
		if (iVar11)
		{
			set_vehicle_engine_on(Local_116[iParam0 /*4*/], iVar11, 1, 0);
		}
		set_entity_invincible(Local_116[iParam0 /*4*/], iVar14);
		set_entity_load_collision_flag(Local_116[iParam0 /*4*/], iVar15);
		set_vehicle_can_be_targetted(Local_116[iParam0 /*4*/], iVar16);
		_0x4D9D109F63FEE1D4(Local_116[iParam0 /*4*/], iVar17);
		set_vehicle_automatically_attaches(Local_116[iParam0 /*4*/], iVar19, 0);
		_0x2B6747FAA9DB9D6B(Local_116[iParam0 /*4*/], iVar18);
		set_entity_only_damaged_by_player(Local_116[iParam0 /*4*/], iVar20);
		set_vehicle_is_considered_by_player(Local_116[iParam0 /*4*/], iVar22);
		if (!is_string_null_or_empty(sVar33))
		{
			set_vehicle_number_plate_text(Local_116[iParam0 /*4*/], sVar33);
		}
		if (fVar23 > 0f)
		{
			set_vehicle_forward_speed(Local_116[iParam0 /*4*/], fVar23);
		}
		if (iVar12)
		{
			set_heli_blades_full_speed(Local_116[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f)
		{
			_0xAD2D28A1AFDFF131(Local_116[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f)
		{
			_0xE6F13851780394DA(Local_116[iParam0 /*4*/], fVar25);
		}
		if (iVar21)
		{
			set_boat_anchor(Local_116[iParam0 /*4*/], true);
		}
		if (iVar5 != 0)
		{
			set_vehicle_doors_locked(Local_116[iParam0 /*4*/], iVar5);
		}
		if (iParam5)
		{
			Local_116[iParam0 /*4*/].f_1 = func_64(Local_116[iParam0 /*4*/], iVar13, 0);
		}
		if (iParam0 == 0)
		{
			_set_vehicle_landing_gear(Local_116[iParam0 /*4*/], 3);
		}
	}
	return true;
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	return func_60(iParam0, !iParam1, iParam2);
}

void func_65(int iParam0)
{
	if (func_198(Local_116[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 2:
			case 3:
				set_vehicle_extra(Local_116[iParam0 /*4*/], 1, true);
				set_vehicle_extra(Local_116[iParam0 /*4*/], 2, true);
				set_vehicle_extra(Local_116[iParam0 /*4*/], 3, true);
				set_vehicle_extra(Local_116[iParam0 /*4*/], 4, true);
				set_vehicle_extra(Local_116[iParam0 /*4*/], 5, false);
				break;
			
			case 1:
			case 4:
				set_vehicle_extra(Local_116[iParam0 /*4*/], 1, true);
				set_vehicle_extra(Local_116[iParam0 /*4*/], 2, true);
				set_vehicle_extra(Local_116[iParam0 /*4*/], 3, true);
				set_vehicle_extra(Local_116[iParam0 /*4*/], 4, false);
				set_vehicle_extra(Local_116[iParam0 /*4*/], 5, true);
				break;
			}
	}
}

void func_66(int iParam0)
{
	if (func_198(Local_116[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 1:
				set_vehicle_colours(Local_116[iParam0 /*4*/], 111, 28);
				set_vehicle_extra_colours(Local_116[iParam0 /*4*/], 111, 156);
				break;
			
			case 2:
				set_vehicle_colours(Local_116[iParam0 /*4*/], 121, 20);
				set_vehicle_extra_colours(Local_116[iParam0 /*4*/], false, 156);
				break;
			
			case 3:
				set_vehicle_colours(Local_116[iParam0 /*4*/], 121, 46);
				set_vehicle_extra_colours(Local_116[iParam0 /*4*/], false, 156);
				break;
			
			case 4:
				set_vehicle_colours(Local_116[iParam0 /*4*/], 111, 54);
				set_vehicle_extra_colours(Local_116[iParam0 /*4*/], 112, 156);
				break;
			}
	}
}

void func_67(int iParam0)
{
	GAMEPLAY::SET_BIT(&iLocal_149, iParam0);
}

void func_68()
{
	if (is_player_playing(player_id()))
	{
		set_player_control(player_id(), true, 0);
	}
	func_80(1);
	register_script_with_audio(1);
	func_79(0);
	set_all_vehicle_generators_active_in_area(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, false, 1);
	remove_vehicles_from_generators_in_area(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, 0);
	if (!is_sphere_visible(3084.41f, 2080.39f, 0f, 2f))
	{
		set_all_vehicle_generators_active_in_area(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, false, 1);
		remove_vehicles_from_generators_in_area(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, 0);
	}
	if (!is_sphere_visible(3062.67f, 2081.65f, 0f, 2f))
	{
		set_all_vehicle_generators_active_in_area(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, false, 1);
		remove_vehicles_from_generators_in_area(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, 0);
	}
	if (!is_sphere_visible(3075.716f, 2125.59f, 0.8052f, 2f))
	{
		clear_area_of_peds(3075.716f, 2125.59f, 0.8052f, 5f, 0);
	}
	if (!is_sphere_visible(3070.882f, 2103.967f, -2.0883f, 2f))
	{
		clear_area_of_vehicles(3070.882f, 2103.967f, -2.0883f, 5f, 0, 0, 0, 0, false);
	}
	add_relationship_group("ENEMIES", &iLocal_171);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, iLocal_171);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_171, iLocal_171);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_171, 1862763509);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
	func_78(&uLocal_174, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	set_wanted_level_multiplier(0f);
	func_69(1);
}

void func_69(int iParam0)
{
	func_70(39, iParam0);
	func_70(40, iParam0);
	func_70(41, iParam0);
	func_70(42, iParam0);
	func_70(43, iParam0);
	func_70(44, iParam0);
}

void func_70(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_77(iParam0, 2, 1))
		{
			func_76(iParam0, 2, 1);
		}
	}
	else if (func_77(iParam0, 2, 1))
	{
		func_71(iParam0, 2, 1);
	}
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_74(func_75(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_72(func_75(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_72(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_73(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_73(auto uParam0)
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

int func_74(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_73(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_75(int iParam0)
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

void func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_74(func_75(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_72(func_75(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_74(func_75(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_78(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iLocal_172[iParam0] = add_scenario_blocking_area(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, 0, 1, 1, 1);
			break;
	}
}

void func_80(int iParam0)
{
	iParam0 = iParam0;
}

void func_81()
{
	if (!func_119())
	{
		if (func_106())
		{
			func_168(1, 0);
		}
	}
	_0x208784099002BC30("RE_SEAPLANE", 0);
	func_105();
	func_93();
	func_89();
	func_84();
	func_82(&uLocal_158, &uLocal_150);
}

void func_82(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	if ((((*uParam0[*uParam1 /*6*/] != 0 && ENTITY::DOES_ENTITY_EXIST(*uParam0[*uParam1 /*6*/])) && *(uParam0[*uParam1 /*6*/]).f_1 != 0) && ENTITY::DOES_ENTITY_EXIST(*(uParam0[*uParam1 /*6*/]).f_1)) && *(uParam0[*uParam1 /*6*/]).f_4)
	{
		if (func_83(*(uParam0[*uParam1 /*6*/]).f_2, 2))
		{
			*(uParam0[*uParam1 /*6*/]).f_5 = has_entity_clear_los_to_entity_in_front(*uParam0[*uParam1 /*6*/], *(uParam0[*uParam1 /*6*/]).f_1);
		}
		else
		{
			*(uParam0[*uParam1 /*6*/]).f_5 = has_entity_clear_los_to_entity(*uParam0[*uParam1 /*6*/], *(uParam0[*uParam1 /*6*/]).f_1, *(uParam0[*uParam1 /*6*/]).f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while (((*uParam0[*uParam1 /*6*/] == 0 || !ENTITY::DOES_ENTITY_EXIST(*uParam0[*uParam1 /*6*/])) || (*(uParam0[*uParam1 /*6*/]).f_1 == 0 || !ENTITY::DOES_ENTITY_EXIST(*(uParam0[*uParam1 /*6*/]).f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!*(uParam0[iVar1 /*6*/]).f_4)
		{
			*uParam0[iVar1 /*6*/] = 0;
			*(uParam0[iVar1 /*6*/]).f_1 = 0;
			*(uParam0[iVar1 /*6*/]).f_2 = 0;
			*(uParam0[iVar1 /*6*/]).f_3 = 0;
			*(uParam0[iVar1 /*6*/]).f_5 = 0;
		}
		*(uParam0[iVar1 /*6*/]).f_4 = 0;
		iVar1++;
	}
}

int func_83(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_49[iVar0 /*6*/]) && does_blip_exist(Local_49[iVar0 /*6*/].f_1))
		{
			if (is_ped_in_any_vehicle(Local_49[iVar0 /*6*/], 0))
			{
				if (!func_88(iVar0, 0))
				{
					set_blip_scale(Local_49[iVar0 /*6*/].f_1, 1f);
					func_57(iVar0, 0);
				}
				if (func_87(Local_49[iVar0 /*6*/], 0) != -1)
				{
					if (func_86(iVar0))
					{
						if (get_blip_alpha(Local_49[iVar0 /*6*/].f_1) > 0)
						{
							set_blip_alpha(Local_49[iVar0 /*6*/].f_1, 0);
							_0x54318C915D27E4CE(Local_49[iVar0 /*6*/].f_1, 1);
						}
					}
					else if (get_blip_alpha(Local_49[iVar0 /*6*/].f_1) == 0)
					{
						set_blip_alpha(Local_49[iVar0 /*6*/].f_1, 255);
						_0x54318C915D27E4CE(Local_49[iVar0 /*6*/].f_1, 0);
					}
				}
			}
			else if (func_88(iVar0, 0))
			{
				set_blip_scale(Local_49[iVar0 /*6*/].f_1, 0.7f);
				func_85(iVar0, 0);
				if (get_blip_alpha(Local_49[iVar0 /*6*/].f_1) == 0)
				{
					set_blip_alpha(Local_49[iVar0 /*6*/].f_1, 255);
					_0x54318C915D27E4CE(Local_49[iVar0 /*6*/].f_1, 0);
				}
			}
			if (PED::IS_PED_INJURED(Local_49[iVar0 /*6*/]))
			{
				func_42(&(Local_49[iVar0 /*6*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_116[iVar0 /*4*/]) && does_blip_exist(Local_116[iVar0 /*4*/].f_1))
		{
			if (!is_vehicle_driveable(Local_116[iVar0 /*4*/], 0))
			{
				func_42(&(Local_116[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_85(int iParam0, int iParam1)
{
	GAMEPLAY::CLEAR_BIT(&(Local_49[iParam0 /*6*/].f_2), iParam1);
}

bool func_86(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!func_198(Local_49[0 /*6*/]))
		{
			return false;
		}
	}
	if (iParam0 == 3)
	{
		if (!func_198(Local_49[2 /*6*/]))
		{
			return false;
		}
	}
	if (iParam0 == 4)
	{
		if (!func_198(Local_49[2 /*6*/]) && !func_198(Local_49[3 /*6*/]))
		{
			return false;
		}
	}
	if (iParam0 == 8)
	{
		if (!func_198(Local_49[7 /*6*/]))
		{
			return false;
		}
	}
	if (iParam0 == 10)
	{
		if (!func_198(Local_49[9 /*6*/]))
		{
			return false;
		}
	}
	return true;
}

int func_87(int iParam0, int iParam1)
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
				if (!is_entity_dead(iVar0, 0))
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

int func_88(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Local_49[iParam0 /*6*/].f_2, iParam1);
}

void func_89()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_116[iVar0 /*4*/]))
		{
			func_90(iVar0);
		}
		iVar0++;
	}
}

void func_90(int iParam0)
{
	if (func_198(Local_116[iParam0 /*4*/]) || iParam0 == 0)
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				switch (Local_116[iParam0 /*4*/].f_2)
				{
					case 0:
						if (((!func_198(get_ped_in_vehicle_seat(Local_116[iParam0 /*4*/], -1)) && !func_198(get_ped_in_vehicle_seat(Local_116[iParam0 /*4*/], false))) && !func_198(get_ped_in_vehicle_seat(Local_116[iParam0 /*4*/], true))) && !func_198(get_ped_in_vehicle_seat(Local_116[iParam0 /*4*/], 2)))
						{
							set_vehicle_is_considered_by_player(Local_116[iParam0 /*4*/], 1);
							set_boat_anchor(Local_116[iParam0 /*4*/], false);
							Local_116[iParam0 /*4*/].f_2++;
						}
						break;
					
					case 1:
						break;
				}
				break;
		}
	}
	else if (is_entity_visible(Local_116[iParam0 /*4*/]))
	{
		func_91(iParam0, 0);
	}
	else
	{
		func_91(iParam0, 1);
	}
}

void func_91(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_116[iParam0 /*4*/]))
	{
		func_42(&(Local_116[iParam0 /*4*/].f_1));
		if (is_playback_going_on_for_vehicle(Local_116[iParam0 /*4*/]))
		{
			stop_playback_recorded_vehicle(Local_116[iParam0 /*4*/]);
		}
		if (func_92(&(Local_116[iParam0 /*4*/])))
		{
			if (iParam1)
			{
				delete_vehicle(&(Local_116[iParam0 /*4*/]));
			}
			else
			{
				set_vehicle_as_no_longer_needed(&(Local_116[iParam0 /*4*/]));
			}
		}
		Local_116[iParam0 /*4*/] = 0;
		Local_116[iParam0 /*4*/].f_2 = 0;
		Local_116[iParam0 /*4*/].f_3 = 0f;
	}
}

bool func_92(auto uParam0)
{
	if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
	{
		return false;
	}
	return true;
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_49[iVar0 /*6*/]))
		{
			func_94(iVar0);
		}
		iVar0++;
	}
}

void func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	Vector3 vVar6;
	int iVar9;
	Vector3 fVar10;
	Vector3 fVar11;
	
	if (func_198(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				if (Local_49[iParam0 /*6*/].f_3 >= 2 && Local_49[iParam0 /*6*/].f_3 < 5)
				{
					if ((is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 0) && func_198(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0))) && is_entity_on_fire(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0)))
					{
						func_104();
						task_set_blocking_of_non_temporary_events(false, 1);
						task_leave_any_vehicle(false, get_random_int_in_range(500, 1501), 4096);
						task_set_blocking_of_non_temporary_events(false, 0);
						task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
						func_102(Local_49[iParam0 /*6*/]);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 1, false);
						Local_49[iParam0 /*6*/].f_3 = 5;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if (iParam0 == 0)
						{
							if (func_198(Local_49[3 /*6*/]))
							{
								set_ik_target(Local_49[iParam0 /*6*/], 1, Local_49[3 /*6*/], 31086, vLocal_139, 0, -1, -1);
							}
						}
						else if (func_198(Local_49[1 /*6*/]))
						{
							set_ik_target(Local_49[iParam0 /*6*/], 1, Local_49[1 /*6*/], 31086, vLocal_139, 0, -1, -1);
						}
						if (((func_120(1) || is_ped_in_combat(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID())) || func_101()) || func_100())
						{
							func_99(iParam0);
							task_combat_ped(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (iParam0 == 0)
						{
							if (!func_198(Local_49[1 /*6*/]) || (func_198(Local_116[1 /*4*/]) && is_ped_in_vehicle(Local_49[1 /*6*/], Local_116[1 /*4*/], 1)))
							{
								iVar0 = true;
							}
						}
						else if ((!func_198(Local_49[3 /*6*/]) || (func_198(Local_116[2 /*4*/]) && is_ped_in_vehicle(Local_49[3 /*6*/], Local_116[2 /*4*/], 1))) && (!func_198(Local_49[4 /*6*/]) || (func_198(Local_116[2 /*4*/]) && is_ped_in_vehicle(Local_49[4 /*6*/], Local_116[2 /*4*/], 1))))
						{
							iVar0 = true;
						}
						if (iVar0)
						{
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						iVar5 = 526;
						if (iParam0 == 0)
						{
							sVar4 = sLocal_137;
						}
						else
						{
							sVar4 = sLocal_138;
						}
						waypoint_recording_get_closest_waypoint(sVar4, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), &iVar1);
						waypoint_recording_get_num_points(sVar4, &iVar3);
						waypoint_recording_get_closest_waypoint(sVar4, get_entity_coords(Local_49[iParam0 /*6*/], 1), &iVar2);
						if (iVar1 > 0 && is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
						{
							iVar1--;
						}
						if (iParam0 == 2 && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 3108.675f, 2194.121f, 10.95087f, 3143.525f, 2232.265f, -4.598444f, 82.75f, 0, true, 0))
						{
							iVar1 = func_98(iVar1, 22, iVar3);
						}
						if (func_37(PLAYER::PLAYER_PED_ID(), vLocal_145, 1) >= 225f)
						{
							iVar1 = iVar3 - 1;
						}
						if (((((iParam0 == 0 && iLocal_151 != iVar1) && iVar1 > iVar2) || ((iParam0 == 2 && iLocal_152 != iVar1) && iVar1 > iVar2)) && func_198(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]))) && !is_ped_being_stunned(Local_49[iParam0 /*6*/], 0))
						{
							if (iParam0 == 0)
							{
								iLocal_151 = iVar1;
							}
							else
							{
								iLocal_152 = iVar1;
							}
							if (func_198(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/])))
							{
								set_boat_anchor(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]), false);
								func_85(iParam0, 5);
							}
							task_vehicle_follow_waypoint_recording(Local_49[iParam0 /*6*/], get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]), sVar4, 786469, 0, iVar5, iVar1, -1f, 0, 6f);
						}
						if ((!func_97(Local_49[iParam0 /*6*/], -235832601, 1) && get_script_task_status(Local_49[iParam0 /*6*/], -235832601) == 7) && !func_97(Local_49[iParam0 /*6*/], 538064912, 1))
						{
							task_vehicle_shoot_at_ped(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 20f);
							if (func_198(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/])) && _get_boat_anchor(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/])))
							{
								set_boat_anchor(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]), true);
								func_57(iParam0, 5);
							}
						}
						if (!func_88(iParam0, 4))
						{
							if (is_ped_being_stunned(Local_49[iParam0 /*6*/], 0))
							{
								func_57(iParam0, 4);
								clear_ped_tasks(Local_49[iParam0 /*6*/]);
								if (!func_88(iParam0, 5) && _get_boat_anchor(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/])))
								{
									set_boat_anchor(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]), true);
								}
							}
						}
						else if (!is_ped_being_stunned(Local_49[iParam0 /*6*/], 0))
						{
							func_85(iParam0, 4);
							if (!func_88(iParam0, 5))
							{
								set_boat_anchor(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]), false);
							}
						}
						if ((get_script_task_status(Local_49[iParam0 /*6*/], -235832601) == 1 && !is_vehicle_stopped(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]))) && !is_driveby_task_underneath_driving_task(Local_49[iParam0 /*6*/]))
						{
							task_drive_by(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), false, vLocal_139, 500f, 100, 1, -687903391);
						}
						waypoint_recording_get_coord(sVar4, iVar3 - 1, &vVar6);
						if (is_entity_at_coord(Local_49[iParam0 /*6*/], vVar6, 8f, 8f, 8f, false, true, 0))
						{
							set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
							task_boat_mission(Local_49[iParam0 /*6*/], get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]), 0, PLAYER::PLAYER_PED_ID(), vLocal_139, 7, 20f, 786469, 5f, 7);
							func_67(5);
							remove_waypoint_recording(sVar4);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 3:
						if (is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 0) && func_198(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0)))
						{
							if (is_vehicle_stuck_timer_up(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								_task_get_off_boat(Local_49[iParam0 /*6*/], -1);
								set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 1, false);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (get_script_task_status(Local_49[iParam0 /*6*/], -1273030092) == 1 && !is_driveby_task_underneath_driving_task(Local_49[iParam0 /*6*/]))
							{
								task_drive_by(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), false, vLocal_139, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 4:
						if (!func_97(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!is_ped_on_vehicle(Local_49[iParam0 /*6*/]))
							{
								set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], false);
								task_combat_ped(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							else
							{
								_task_get_off_boat(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 1:
			case 3:
			case 4:
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((iParam0 == 1 && func_97(Local_49[iParam0 /*6*/], 993674639, 1)) && func_198(Local_49[3 /*6*/]))
						{
							set_ik_target(Local_49[iParam0 /*6*/], 1, Local_49[3 /*6*/], 31086, vLocal_139, 0, -1, -1);
						}
						if (((iParam0 == 3 || iParam0 == 4) && func_198(Local_49[1 /*6*/])) && func_97(Local_49[iParam0 /*6*/], 993674639, 1))
						{
							set_ik_target(Local_49[iParam0 /*6*/], 1, Local_49[1 /*6*/], 31086, vLocal_139, 0, -1, -1);
						}
						if (((func_120(1) || is_ped_in_combat(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID())) || func_101()) || func_100())
						{
							func_99(iParam0);
							Local_49[iParam0 /*6*/].f_4 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(1250, 1501);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (GAMEPLAY::GET_GAME_TIMER() >= Local_49[iParam0 /*6*/].f_4)
						{
							if ((iParam0 == 1 && func_198(Local_116[1 /*4*/])) && func_198(get_ped_in_vehicle_seat(Local_116[1 /*4*/], -1)))
							{
								clear_ped_tasks(Local_49[iParam0 /*6*/]);
								task_enter_vehicle(Local_49[iParam0 /*6*/], Local_116[1 /*4*/], 20000, false, 3f, 1, 0);
								set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
							}
							if ((iParam0 == 3 && func_198(Local_116[2 /*4*/])) && func_198(get_ped_in_vehicle_seat(Local_116[2 /*4*/], -1)))
							{
								clear_ped_tasks(Local_49[iParam0 /*6*/]);
								task_enter_vehicle(Local_49[iParam0 /*6*/], Local_116[2 /*4*/], 20000, false, 3f, 1, 0);
								set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
							}
							if ((iParam0 == 4 && func_198(Local_116[2 /*4*/])) && func_198(get_ped_in_vehicle_seat(Local_116[2 /*4*/], -1)))
							{
								clear_ped_tasks(Local_49[iParam0 /*6*/]);
								task_enter_vehicle(Local_49[iParam0 /*6*/], Local_116[2 /*4*/], 20000, true, 3f, 1, 0);
								set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
							}
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 1:
								iVar9 = 1;
								break;
							
							case 3:
								iVar9 = 2;
								break;
							
							case 4:
								iVar9 = 2;
								break;
						}
						if (is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 1) || !func_198(get_ped_in_vehicle_seat(Local_116[iVar9 /*4*/], -1)))
						{
							set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], false);
							task_combat_ped(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						else if (!func_97(Local_49[iParam0 /*6*/], -1794415470, 1))
						{
							if (iParam0 == 1 || (iParam0 == 3 && func_198(Local_116[iVar9 /*4*/])))
							{
								task_enter_vehicle(Local_49[iParam0 /*6*/], Local_116[iVar9 /*4*/], 20000, false, 3f, 1, 0);
							}
							if (iParam0 == 4 && func_198(Local_116[iVar9 /*4*/]))
							{
								task_enter_vehicle(Local_49[iParam0 /*6*/], Local_116[iVar9 /*4*/], 20000, true, 3f, 1, 0);
							}
						}
						break;
					
					case 3:
						if (is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 0) && func_198(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0)))
						{
							if (is_entity_on_fire(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0)))
							{
								func_104();
								task_set_blocking_of_non_temporary_events(false, 1);
								task_leave_any_vehicle(false, get_random_int_in_range(500, 1501), 4096);
								task_set_blocking_of_non_temporary_events(false, 0);
								task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
								func_102(Local_49[iParam0 /*6*/]);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 1, false);
								Local_49[iParam0 /*6*/].f_3++;
							}
							if (Local_49[iParam0 /*6*/].f_3 == 3)
							{
								if ((is_vehicle_stuck_timer_up(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000)) && func_120(5))
								{
									_task_get_off_boat(Local_49[iParam0 /*6*/], 20000);
									set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 1, false);
									Local_49[iParam0 /*6*/].f_3 = 5;
								}
								else if (!func_198(get_ped_in_vehicle_seat(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0), -1)))
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 3, true);
									task_combat_ped(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
									Local_49[iParam0 /*6*/].f_3++;
								}
							}
						}
						break;
					
					case 4:
						break;
					
					case 5:
						if (!func_97(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!is_ped_on_vehicle(Local_49[iParam0 /*6*/]))
							{
								set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], false);
								task_combat_ped(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							else
							{
								_task_get_off_boat(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 7:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 0) && func_198(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0))) && is_entity_on_fire(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0)))
					{
						func_104();
						task_set_blocking_of_non_temporary_events(false, 1);
						task_leave_any_vehicle(false, get_random_int_in_range(500, 1501), 4096);
						task_set_blocking_of_non_temporary_events(false, 0);
						task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
						func_102(Local_49[iParam0 /*6*/]);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 1, false);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_43() && func_40(PLAYER::PLAYER_PED_ID(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((is_ped_on_foot(PLAYER::PLAYER_PED_ID()) && !is_entity_in_water(PLAYER::PLAYER_PED_ID())) && func_40(PLAYER::PLAYER_PED_ID(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (is_ped_on_foot(PLAYER::PLAYER_PED_ID()) && !is_entity_occluded(Local_49[iParam0 /*6*/]))) || func_120(6))
						{
							if (func_198(Local_116[3 /*4*/]))
							{
								set_boat_anchor(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]), false);
								fVar10 = get_entity_speed(PLAYER::PLAYER_PED_ID());
								fVar10 = func_95(fVar10, 10f, 40f);
								set_vehicle_forward_speed(Local_116[3 /*4*/], fVar10);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(Local_49[iParam0 /*6*/], joaat("weapon_pistol"), false);
							task_boat_mission(Local_49[iParam0 /*6*/], get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]), 0, PLAYER::PLAYER_PED_ID(), vLocal_139, 7, 20f, 786469, 5f, 7);
							set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
							Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 1, 145);
							func_67(6);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 0) && func_198(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0)))
						{
							if (is_vehicle_stuck_timer_up(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								_task_get_off_boat(Local_49[iParam0 /*6*/], -1);
								set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 1, false);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (get_script_task_status(Local_49[iParam0 /*6*/], -1273030092) == 1 && !is_driveby_task_underneath_driving_task(Local_49[iParam0 /*6*/]))
							{
								task_drive_by(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), false, vLocal_139, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 2:
						if (!func_97(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!is_ped_on_vehicle(Local_49[iParam0 /*6*/]))
							{
								set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], false);
								task_combat_ped(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							else
							{
								_task_get_off_boat(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 9:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 0) && func_198(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0))) && is_entity_on_fire(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0)))
					{
						func_104();
						task_set_blocking_of_non_temporary_events(false, 1);
						task_leave_any_vehicle(false, get_random_int_in_range(500, 1501), 4096);
						task_set_blocking_of_non_temporary_events(false, 0);
						task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
						func_102(Local_49[iParam0 /*6*/]);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 1, false);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_43() && func_40(PLAYER::PLAYER_PED_ID(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((is_ped_on_foot(PLAYER::PLAYER_PED_ID()) && !is_entity_in_water(PLAYER::PLAYER_PED_ID())) && func_40(PLAYER::PLAYER_PED_ID(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (is_ped_on_foot(PLAYER::PLAYER_PED_ID()) && !is_entity_occluded(Local_49[iParam0 /*6*/]))) || func_120(6))
						{
							if (func_198(Local_116[4 /*4*/]))
							{
								set_boat_anchor(get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]), false);
								fVar11 = get_entity_speed(PLAYER::PLAYER_PED_ID());
								fVar11 = func_95(fVar11, 10f, 40f);
								set_vehicle_forward_speed(Local_116[4 /*4*/], fVar11);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(Local_49[iParam0 /*6*/], joaat("weapon_pistol"), false);
							task_boat_mission(Local_49[iParam0 /*6*/], get_vehicle_ped_is_using(Local_49[iParam0 /*6*/]), 0, PLAYER::PLAYER_PED_ID(), vLocal_139, 7, 20f, 786469, 5f, 7);
							set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
							Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 1, 145);
							func_67(6);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 0) && func_198(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0)))
						{
							if (is_vehicle_stuck_timer_up(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								_task_get_off_boat(Local_49[iParam0 /*6*/], -1);
								set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 1, false);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (get_script_task_status(Local_49[iParam0 /*6*/], -1273030092) == 1 && !is_driveby_task_underneath_driving_task(Local_49[iParam0 /*6*/]))
							{
								task_drive_by(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), false, vLocal_139, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 2:
						if (!func_97(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!is_ped_on_vehicle(Local_49[iParam0 /*6*/]))
							{
								set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], false);
								task_combat_ped(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							else
							{
								_task_get_off_boat(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 8:
			case 10:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 0) && func_198(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0))) && is_entity_on_fire(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0)))
					{
						func_104();
						task_set_blocking_of_non_temporary_events(false, 1);
						task_leave_any_vehicle(false, get_random_int_in_range(500, 1501), 4096);
						task_set_blocking_of_non_temporary_events(false, 0);
						task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
						func_102(Local_49[iParam0 /*6*/]);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 1, false);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if (((func_43() && func_40(PLAYER::PLAYER_PED_ID(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((is_ped_on_foot(PLAYER::PLAYER_PED_ID()) && !is_entity_in_water(PLAYER::PLAYER_PED_ID())) && func_40(PLAYER::PLAYER_PED_ID(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (is_ped_on_foot(PLAYER::PLAYER_PED_ID()) && !is_entity_occluded(Local_49[iParam0 /*6*/])))
						{
							Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 1, 145);
							set_blip_alpha(Local_49[iParam0 /*6*/].f_1, 0);
							_0x54318C915D27E4CE(Local_49[iParam0 /*6*/].f_1, 1);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 0))
						{
							if (func_198(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0)))
							{
								if (is_vehicle_stuck_timer_up(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
								{
									_task_get_off_boat(Local_49[iParam0 /*6*/], -1);
									set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 1, false);
									Local_49[iParam0 /*6*/].f_3++;
								}
								else if (!func_198(get_ped_in_vehicle_seat(get_vehicle_ped_is_in(Local_49[iParam0 /*6*/], 0), -1)))
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*6*/], 3, true);
									task_combat_ped(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
									Local_49[iParam0 /*6*/].f_3 = 3;
								}
							}
						}
						else
						{
							task_combat_ped(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						if (!func_97(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!is_ped_on_vehicle(Local_49[iParam0 /*6*/]))
							{
								set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], false);
								task_combat_ped(Local_49[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							else
							{
								_task_get_off_boat(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
		}
	}
	else
	{
		if (func_88(iParam0, 1))
		{
			set_ped_can_ragdoll(Local_49[iParam0 /*6*/], 1);
			detach_entity(Local_49[iParam0 /*6*/], 1, false);
			func_85(iParam0, 1);
		}
		if (!func_88(iParam0, 2))
		{
			if (is_entity_visible(Local_49[iParam0 /*6*/]))
			{
				func_39(iParam0, 0);
			}
			else
			{
				func_39(iParam0, 1);
			}
		}
	}
}

float func_95(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
		case 3:
		case 4:
			iVar0 = 2;
			break;
		
		case 7:
		case 8:
			iVar0 = 3;
			break;
		
		case 9:
		case 10:
			iVar0 = 4;
			break;
	}
	if (func_198(Local_116[iVar0 /*4*/]))
	{
		if (!is_entity_in_water(Local_116[iVar0 /*4*/]))
		{
			Local_116[iVar0 /*4*/].f_3 += get_frame_time();
		}
		else
		{
			Local_116[iVar0 /*4*/].f_3 = 0f;
		}
	}
	if (Local_116[iVar0 /*4*/].f_3 >= IntToFloat(iParam1))
	{
		return true;
	}
	return false;
}

bool func_97(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = get_script_task_status(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	else if (!iParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return true;
		}
	}
	return false;
}

int func_98(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_99(int iParam0)
{
	func_57(iParam0, 3);
	if (!func_120(4))
	{
		func_67(4);
	}
	if (!func_120(2))
	{
		func_67(2);
	}
	Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 1, 145);
	set_ped_seeing_range(Local_49[iParam0 /*6*/], 200f);
	if (is_ped_in_any_vehicle(Local_49[iParam0 /*6*/], 0))
	{
		if (func_87(Local_49[iParam0 /*6*/], 0) != -1)
		{
			set_blip_alpha(Local_49[iParam0 /*6*/].f_1, 0);
			_0x54318C915D27E4CE(Local_49[iParam0 /*6*/].f_1, 1);
		}
		else
		{
			clear_ped_tasks(Local_49[iParam0 /*6*/]);
			set_blocking_of_non_temporary_events(Local_49[iParam0 /*6*/], true);
		}
	}
}

int func_100()
{
	return is_explosion_in_angled_area(-1, 3150.508f, 2179.343f, -30f, 3064.608f, 2223.616f, 12.38177f, 103f);
}

bool func_101()
{
	int iVar0;
	
	iVar0 = get_players_last_vehicle();
	if (func_198(iVar0) && is_entity_in_angled_area(iVar0, 3083.23f, 2195.516f, -3.22382f, 3096.519f, 2195.455f, 4.949678f, 15f, 0, true, 0))
	{
		return true;
	}
	return false;
}

void func_102(int iParam0)
{
	if (func_120(0))
	{
		close_sequence_task(iLocal_339);
		func_103(0);
	}
	task_perform_sequence(iParam0, iLocal_339);
	clear_sequence_task(&iLocal_339);
}

void func_103(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&iLocal_149, iParam0);
}

void func_104()
{
	if (!func_120(0))
	{
		clear_sequence_task(&iLocal_339);
		open_sequence_task(&iLocal_339);
		func_67(0);
	}
}

void func_105()
{
	int iVar0;
	int iVar1;
	
	if (func_120(1) || func_120(4))
	{
		if (func_198(Local_116[0 /*4*/]) && func_40(PLAYER::PLAYER_PED_ID(), Local_116[0 /*4*/], 1) >= 250f)
		{
			iVar0 = true;
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (!func_38(iVar1, 1))
				{
					iVar0 = false;
				}
				iVar1++;
			}
			if (iVar0)
			{
				func_36();
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_116[0 /*4*/]) && !func_198(Local_116[0 /*4*/]))
	{
		iVar0 = true;
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			if (!func_38(iVar1, 1))
			{
				iVar0 = false;
			}
			iVar1++;
		}
		if (iVar0)
		{
			func_36();
		}
	}
}

bool func_106()
{
	if (!func_51(5))
	{
		return true;
	}
	if (func_115())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_114())
		{
			return false;
		}
	}
	if (func_107(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_107(float fParam0, int iParam1)
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
		if (func_23(func_113()))
		{
			iVar36 = func_20();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_108(iVar32, &Var0);
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

void func_108(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_109(uParam1, "Abigail1", func_111(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 1:
			func_109(uParam1, "Abigail2", func_111(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 2:
			func_109(uParam1, "Barry1", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 3:
			func_109(uParam1, "Barry2", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 4:
			func_109(uParam1, "Barry3", func_111(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 5:
			func_109(uParam1, "Barry3A", func_111(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 6:
			func_109(uParam1, "Barry3C", func_111(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 7:
			func_109(uParam1, "Barry4", func_111(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_110(iParam0), 0, 0);
			break;
		
		case 8:
			func_109(uParam1, "Dreyfuss1", func_111(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 9:
			func_109(uParam1, "Epsilon1", func_111(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 10:
			func_109(uParam1, "Epsilon2", func_111(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 11:
			func_109(uParam1, "Epsilon3", func_111(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 12:
			func_109(uParam1, "Epsilon4", func_111(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 13:
			func_109(uParam1, "Epsilon5", func_111(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 14:
			func_109(uParam1, "Epsilon6", func_111(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 15:
			func_109(uParam1, "Epsilon7", func_111(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 16:
			func_109(uParam1, "Epsilon8", func_111(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 17:
			func_109(uParam1, "Extreme1", func_111(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 18:
			func_109(uParam1, "Extreme2", func_111(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 19:
			func_109(uParam1, "Extreme3", func_111(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 20:
			func_109(uParam1, "Extreme4", func_111(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 21:
			func_109(uParam1, "Fanatic1", func_111(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 22:
			func_109(uParam1, "Fanatic2", func_111(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 23:
			func_109(uParam1, "Fanatic3", func_111(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_110(iParam0), 0, 1);
			break;
		
		case 24:
			func_109(uParam1, "Hao1", func_111(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_110(iParam0), 0, 1);
			break;
		
		case 25:
			func_109(uParam1, "Hunting1", func_111(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 26:
			func_109(uParam1, "Hunting2", func_111(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 27:
			func_109(uParam1, "Josh1", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 28:
			func_109(uParam1, "Josh2", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 29:
			func_109(uParam1, "Josh3", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 30:
			func_109(uParam1, "Josh4", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 31:
			func_109(uParam1, "Maude1", func_111(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 32:
			func_109(uParam1, "Minute1", func_111(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 33:
			func_109(uParam1, "Minute2", func_111(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 34:
			func_109(uParam1, "Minute3", func_111(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 35:
			func_109(uParam1, "MrsPhilips1", func_111(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 36:
			func_109(uParam1, "MrsPhilips2", func_111(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 37:
			func_109(uParam1, "Nigel1", func_111(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 38:
			func_109(uParam1, "Nigel1A", func_111(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 39:
			func_109(uParam1, "Nigel1B", func_111(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 40:
			func_109(uParam1, "Nigel1C", func_111(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 41:
			func_109(uParam1, "Nigel1D", func_111(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 42:
			func_109(uParam1, "Nigel2", func_111(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 43:
			func_109(uParam1, "Nigel3", func_111(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 44:
			func_109(uParam1, "Omega1", func_111(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 45:
			func_109(uParam1, "Omega2", func_111(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 46:
			func_109(uParam1, "Paparazzo1", func_111(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 47:
			func_109(uParam1, "Paparazzo2", func_111(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 48:
			func_109(uParam1, "Paparazzo3", func_111(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 49:
			func_109(uParam1, "Paparazzo3A", func_111(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 50:
			func_109(uParam1, "Paparazzo3B", func_111(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 51:
			func_109(uParam1, "Paparazzo4", func_111(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 52:
			func_109(uParam1, "Rampage1", func_111(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 54:
			func_109(uParam1, "Rampage3", func_111(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 55:
			func_109(uParam1, "Rampage4", func_111(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 56:
			func_109(uParam1, "Rampage5", func_111(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 53:
			func_109(uParam1, "Rampage2", func_111(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 57:
			func_109(uParam1, "TheLastOne", func_111(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 58:
			func_109(uParam1, "Tonya1", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 59:
			func_109(uParam1, "Tonya2", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 60:
			func_109(uParam1, "Tonya3", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 61:
			func_109(uParam1, "Tonya4", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 62:
			func_109(uParam1, "Tonya5", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_109(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_110(int iParam0)
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

struct<2> func_111(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_112(iParam0)};
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

struct<2> func_112(int iParam0)
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

auto func_113()
{
	func_21();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_114()
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

bool func_115()
{
	if (func_118() && !func_114())
	{
		return true;
	}
	if (func_117() && func_116())
	{
		return true;
	}
	return false;
}

int func_116()
{
	return Global_100872 > 0;
}

bool func_117()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_118()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_119()
{
	if ((Global_101143 == func_29() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

int func_120(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(iLocal_149, iParam0);
}

void func_121(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_123(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_122();
}

void func_122()
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

void func_123(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_124(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		iParam3 = func_29();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_166())
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
			vVar1 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
			if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_114())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_5(0))
		{
			return false;
		}
		if (func_115())
		{
			return false;
		}
		if (func_165())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_23(func_113()))
		{
			if (func_107(100f, 1) != -1)
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
		if (!func_164(iParam3))
		{
			return false;
		}
		if (func_23(func_113()))
		{
			if (func_163(func_113()) == 4 || func_163(func_113()) == 5)
			{
				return false;
			}
		}
		if (func_23(func_113()))
		{
			if (!func_162(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_161(Global_101154.f_29520.f_43[iParam3]))
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
		if (func_159())
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
		if (!func_149(4))
		{
			return false;
		}
		if (!func_51(5))
		{
			return false;
		}
		if (func_148(iParam3, iParam4) && !iParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_148(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_164(30) && !func_148(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_23(func_113()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_147(iVar8))
				{
					if (func_125(iVar4))
					{
						if (!func_62(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_113() != iVar4)
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

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_126(iVar0);
}

int func_126(int iParam0)
{
	return func_127(iParam0, 1);
}

bool func_127(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_147(iParam0))
	{
		return false;
	}
	func_128(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_128(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_129(func_140(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_129(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_139(iParam0, iParam1))
	{
		iVar0 = func_138(iParam1);
		iVar1 = func_136(iParam0);
		iVar2 = func_136(iParam0) - func_136(iParam1);
		iVar3 = func_138(iParam0) - func_138(iParam1);
		iVar4 = func_135(iParam0) - func_135(iParam1);
		iVar5 = func_134(iParam0) - func_134(iParam1);
		iVar6 = func_133(iParam0) - func_133(iParam1);
		iVar7 = func_132(iParam0) - func_132(iParam1);
	}
	else
	{
		iVar0 = func_138(iParam0);
		iVar1 = func_136(iParam1);
		iVar2 = func_136(iParam1) - func_136(iParam0);
		iVar3 = func_138(iParam1) - func_138(iParam0);
		iVar4 = func_135(iParam1) - func_135(iParam0);
		iVar5 = func_134(iParam1) - func_134(iParam0);
		iVar6 = func_133(iParam1) - func_133(iParam0);
		iVar7 = func_132(iParam1) - func_132(iParam0);
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
		iVar4 += func_131(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_130(to_float(iVar0 + 1), 0f, 12f));
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

float func_130(Vector3 fParam0, float fParam1, float fParam2)
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

int func_131(int iParam0, int iParam1)
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

int func_132(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_133(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_134(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_135(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_136(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_137(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_137(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_138(int iParam0)
{
	return (iParam0 && 15);
}

bool func_139(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_147(iParam1) || !func_147(iParam0))
	{
		return true;
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
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
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
	return false;
}

auto func_140()
{
	auto uVar0;
	
	func_146(&uVar0, get_clock_seconds());
	func_145(&uVar0, get_clock_minutes());
	func_144(&uVar0, get_clock_hours());
	func_143(&uVar0, get_clock_day_of_month());
	func_142(&uVar0, get_clock_month());
	func_141(&uVar0, get_clock_year());
	return uVar0;
}

void func_141(auto uParam0, int iParam1)
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

void func_142(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_143(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_138(*uParam0);
	iVar1 = func_136(*uParam0);
	if (iParam1 < 1 || iParam1 > func_131(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_144(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_145(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_146(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_147(int iParam0)
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
	iVar0 = func_132(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_133(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_134(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_136(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_138(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_135(iParam0);
	if (iVar5 < 1 || iVar5 > func_131(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_148(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_149(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_113();
				if (!func_23(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_158()) || Global_100201) || Global_25122) || func_157()) || func_156(8, -1)) || func_155()) || func_154()) || func_153()) || func_152()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_158()) || Global_25122) || func_157()) || func_156(8, -1)) || func_153()) || func_155()) || func_154()) || func_152()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_158()) || Global_100201) || Global_25122) || func_157()) || func_156(8, -1)) || func_153()) || func_155()) || func_154()) || func_152()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_158()) || Global_100201) || Global_25122) || func_157()) || func_156(8, -1)) || func_155()) || func_154()) || func_152()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_158() || get_player_wanted_level(player_id()) > 0) || func_156(8, -1)) || func_152()) || func_151()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_156(8, -1) || func_155()) || func_154()) || func_151()) || func_150())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_158()) || Global_25122) || func_157()) || func_156(8, -1)) || func_154()) || func_153()) || func_152()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_158()) || func_154()) || Global_100201) || Global_25122) || func_157()) || Global_36839) || func_156(8, -1)) || func_153()) || func_151()) || func_152()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_158()) || Global_100201) || Global_25122) || func_157()) || func_156(8, -1)) || func_153()) || func_151()) || func_155()) || func_154()) || func_152())
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

auto func_150()
{
	return Global_91317.f_1;
}

int func_151()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_152()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_153()
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

int func_154()
{
	return Global_91330.f_297 > 0;
}

int func_155()
{
	return Global_91330.f_296 > 0;
}

int func_156(int iParam0, int iParam1)
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

auto func_157()
{
	return Global_1315913;
}

int func_158()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_159()
{
	func_160();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

void func_160()
{
	if (func_22(14))
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
		Global_14413 = func_113();
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

int func_161(int iParam0)
{
	return func_139(func_140(), iParam0);
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_113();
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

int func_163(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_166())
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

bool func_165()
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

bool func_166()
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

bool func_167()
{
	Vector3 vVar0;
	float fVar3;
	
	if (func_198(PLAYER::PLAYER_PED_ID()))
	{
		vVar0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
		get_ground_z_for_3d_coord(vVar0, &fVar3, 0);
		if ((vVar0.y < 2149.042f && (is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID()) || (is_entity_in_air(PLAYER::PLAYER_PED_ID()) && vVar0.z - fVar3 >= 7.5f))) && vVar0.z - fVar3 >= 3f)
		{
			return false;
		}
		if (vVar0.z >= 100f && is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
	}
	return true;
}

void func_168(int iParam0, int iParam1)
{
	func_197();
	func_196();
	func_80(0);
	func_194(1, 1, 1, 0);
	func_192(0);
	func_190();
	set_all_vehicle_generators_active_in_area(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, true, 1);
	clear_timecycle_modifier();
	display_radar(true);
	set_ignore_no_gps_flag(0);
	func_189();
	func_188();
	func_187();
	func_186(iParam1);
	func_185(iParam1);
	remove_relationship_group(iLocal_171);
	set_wanted_level_multiplier(1f);
	func_183();
	func_181();
	func_180(&uLocal_174, 1);
	func_180(&uLocal_174, 3);
	func_180(&uLocal_174, 4);
	func_180(&uLocal_174, 5);
	destroy_all_cams(0);
	render_script_cams(false, false, 3000, 1, 0, 0);
	func_69(0);
	if (iParam0)
	{
		func_169(-1);
		terminate_this_thread();
	}
}

void func_169(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_119())
	{
		func_173(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_172(30000);
		StringCopy(&cVar0, func_171(Global_101143, 1), 64);
		if (func_28(Global_101143) > 0)
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
	func_170(&Global_25179);
	Global_101144 = 0;
	func_123(-1);
}

void func_170(auto uParam0)
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

char* func_171(int iParam0, int iParam1)
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

void func_172(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_173(int iParam0)
{
	func_174(iParam0, 0, func_179(iParam0));
}

void func_174(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_140();
	func_177(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_176(uParam0, &uVar0);
	Var1 = {func_175(&uVar0)};
}

struct<16> func_175(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_134(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_133(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_132(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_135(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_138(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_136(*uParam0), 64);
	return cVar0;
}

void func_176(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_177(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_138(*uParam0);
	iVar2 = func_135(*uParam0);
	iVar3 = func_134(*uParam0);
	iVar4 = func_133(*uParam0);
	iVar5 = func_132(*uParam0);
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
	iVar6 = func_131(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_131(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_178(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_178(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_146(uParam0, iParam1);
	func_145(uParam0, iParam2);
	func_144(uParam0, iParam3);
	func_142(uParam0, iParam5);
	func_143(uParam0, iParam4);
	func_141(uParam0, iParam6);
}

int func_179(int iParam0)
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

void func_180(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_181()
{
	Global_14578 = 0;
	func_182();
}

void func_182()
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

void func_183()
{
	Global_14578 = 0;
	func_184();
}

void func_184()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_91(iVar0, iParam0);
		iVar0++;
	}
}

void func_186(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_39(iVar0, iParam0);
		iVar0++;
	}
}

void func_187()
{
}

void func_188()
{
	remove_waypoint_recording(sLocal_137);
	remove_waypoint_recording(sLocal_138);
}

void func_189()
{
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_191(iVar0);
		iVar0++;
	}
}

void func_191(int iParam0)
{
	if (iLocal_172[iParam0] != 0)
	{
		remove_scenario_blocking_area(iLocal_172[iParam0], 0);
		iLocal_172[iParam0] = 0;
	}
}

void func_192(int iParam0)
{
	if (iParam0)
	{
		set_player_wanted_level(player_id(), false, 0);
		set_max_wanted_level(false);
		set_player_wanted_level_now(player_id(), 0);
		set_wanted_level_multiplier(0f);
		set_dispatch_cops_for_player(player_id(), 0);
		set_create_random_cops(false);
		_0xDC0F817884CDD856(3, false);
		_0xDC0F817884CDD856(1, false);
		_0xDC0F817884CDD856(8, false);
		_0xDC0F817884CDD856(2, false);
		_0xDC0F817884CDD856(6, false);
		_0xDC0F817884CDD856(4, false);
		_0xDC0F817884CDD856(12, false);
		_0xDC0F817884CDD856(5, false);
		func_193(9, 1);
		func_193(8, 1);
	}
	else
	{
		set_max_wanted_level(5);
		set_wanted_level_multiplier(1f);
		set_dispatch_cops_for_player(player_id(), 1);
		set_create_random_cops(true);
		_0xDC0F817884CDD856(3, true);
		_0xDC0F817884CDD856(1, true);
		_0xDC0F817884CDD856(8, true);
		_0xDC0F817884CDD856(2, true);
		_0xDC0F817884CDD856(6, true);
		_0xDC0F817884CDD856(4, true);
		_0xDC0F817884CDD856(12, true);
		_0xDC0F817884CDD856(5, true);
		func_193(9, 0);
		func_193(8, 0);
	}
}

void func_193(int iParam0, int iParam1)
{
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&Global_25364, iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_25364, iParam0);
	}
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		func_181();
	}
	if (iParam1)
	{
		if (!func_195() || (iParam0 && !iParam3))
		{
			clear_prints();
		}
		_0xB57D8DD645CFA2CF();
	}
	if (iParam2)
	{
		clear_help(1);
	}
}

bool func_195()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_196()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_42(&(Local_49[iVar0 /*6*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_42(&(Local_116[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_197()
{
	iLocal_47 = 0;
	iLocal_48 = 0;
	iLocal_148 = 0;
	iLocal_149 = false;
}

bool func_198(int iParam0)
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

