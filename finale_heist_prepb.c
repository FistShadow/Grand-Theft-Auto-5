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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int[] iLocal_35 = new int[7];
	int[] iLocal_43 = new int[2];
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int[] iLocal_69 = new int[7];
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
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
	int[] iLocal_96 = new int[2];
	int[] iLocal_99 = new int[2];
	int[] iLocal_102 = new int[2];
	int[] iLocal_105 = new int[2];
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	Vector3 vLocal_116 = 0;
	Vector3 vLocal_119 = 0;
	Vector3 vLocal_122 = 0;
	Vector3[] vLocal_125 = new Vector3[2];
	Vector3 vLocal_132 = 0;
	float fLocal_135 = 0;
	char* sLocal_136 = 0;
	auto uLocal_137 = 16;
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
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int[] iLocal_306 = new int[7];
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int[] iLocal_322 = new int[7];
	int[] iLocal_330 = new int[7];
	int iLocal_338 = 0;
	int[] iLocal_339 = new int[7];
	int[] iLocal_347 = new int[7];
	int[] iLocal_355 = new int[7];
	int[] iLocal_363 = new int[7];
	int[] iLocal_371 = new int[7];
	int[] iLocal_379 = new int[7];
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int[] iLocal_404 = new int[2];
	int[] iLocal_407 = new int[2];
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int[] iLocal_433 = new int[2];
	int[] iLocal_436 = new int[2];
	int[] iLocal_439 = new int[2];
	int[] iLocal_442 = new int[2];
	int[] iLocal_445 = new int[2];
	int[] iLocal_448 = new int[2];
	int[] iLocal_451 = new int[2];
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int[] iLocal_459 = new int[2];
	int[] iLocal_462 = new int[2];
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int[] iLocal_484 = new int[2];
	int iLocal_487 = 0;
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
	vLocal_116 = {27.7189f, -608.7927f, 30.6293f};
	vLocal_132 = {903.1f, -1548.8f, 29.8f};
	fLocal_135 = 0f;
	if (has_force_cleanup_occurred(3))
	{
		trigger_music_event("FHPRB_STOP");
		func_191();
		func_190();
	}
	if (func_189(0))
	{
		request_additional_text("FINPRB", false);
	}
	add_relationship_group("WorkerPedMainGroup", &iLocal_302);
	add_relationship_group("GuardMainGroup", &iLocal_303);
	set_vehicle_model_is_suppressed(joaat("packer"), true);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_303, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_302, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_303, iLocal_302);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_302, iLocal_303);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_303, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_303);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_302, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_302);
	while (true)
	{
		_0x208784099002BC30("M_FINPRB", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, false);
		}
		func_187();
		if (iLocal_317 == 0)
		{
			if (get_player_wanted_level(player_id()) > 0)
			{
				func_186(27, 1);
				iLocal_317 = 1;
			}
		}
		if (iLocal_396 == 1)
		{
			func_182();
		}
		func_179();
		func_172();
		func_164();
		func_159();
		func_156();
		switch (iLocal_28)
		{
			case 0:
				func_155();
				break;
			
			case 1:
				func_152();
				break;
			
			case 2:
				func_128();
				break;
			
			case 3:
				func_126();
				break;
			
			case 4:
				func_103();
				break;
			
			case 5:
				func_20();
				break;
			
			case 6:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_62)
	{
		case 0:
			clear_prints();
			clear_help(1);
			trigger_music_event("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				
				case 4:
					sLocal_136 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_136 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_136 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_136 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_136 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_136 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_136 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_136 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_136);
			}
			iLocal_62 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_190();
			}
			break;
	}
}

bool func_2()
{
	if (Global_91278 == 7)
	{
		return true;
	}
	return false;
}

bool func_3()
{
	if (Global_3)
	{
		return true;
	}
	if (Global_91278 == 7 || Global_91278 == 8)
	{
		return true;
	}
	return false;
}

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (get_length_of_literal_string(sParam0) <= 16)
		{
			StringCopy(&Global_69721, sParam0, 16);
			StringCopy(&Global_69725, "", 16);
			if (_is_recording())
			{
				_stop_recording_and_save_clip();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_101154.f_7775 || func_189(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_82363[iVar0 /*5*/].f_1), 5);
		Global_91314 = iParam0;
	}
}

bool func_7(int iParam0)
{
	auto uVar0;
	int iVar1;
	
	func_12();
	if (is_player_playing(player_id()))
	{
		start_firing_amnesty(5000);
	}
	uVar0 = Global_82363[iParam0 /*5*/];
	iVar1 = Global_69758.f_109[uVar0 /*4*/];
	func_11(iVar1, 1);
	_0xC9A763D8FE87436A(player_id());
	special_ability_deactivate(player_id());
	func_8(&(Global_101154.f_1826.f_539), iVar1);
	if (Global_85786 == Global_91315)
	{
		Global_101154.f_7775.f_330[iVar1 /*6*/].f_1++;
	}
	if (!is_bit_set(Global_82399[iVar1 /*34*/].f_15, true))
	{
		if (!is_player_playing(player_id()))
		{
			set_fade_in_after_death_arrest(0);
		}
	}
	Global_101154.f_7775.f_330[iVar1 /*6*/].f_2++;
	Global_85786 = Global_91315;
	if (iParam0 == -1)
	{
		if (Global_101154.f_7775)
		{
		}
		return false;
	}
	if (is_bit_set(Global_82363[iParam0 /*5*/].f_1, 4))
	{
		return false;
	}
	if (is_bit_set(Global_82363[iParam0 /*5*/].f_1, 5))
	{
		return false;
	}
	return true;
}

void func_8(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_101154.f_17223[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !is_bit_set(Global_101154.f_7775.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_10(Global_101154.f_17223[iVar0], &vVar2, &fVar5))
			{
				Global_101154.f_17223[iVar0] = 318;
				func_9(uParam0.f_1524[iVar0]);
				*(uParam0.f_1528[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1538[iVar0] = 0f;
				*uParam0.f_1542[iVar0] = 0;
				*(uParam0.f_1546[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1556[iVar0] = 0;
				Global_89001[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_9 = 0f;
				Global_89001[iVar0 /*29*/].f_12 = 0f;
				Global_89001[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_10 = 0f;
				Global_89001[iVar0 /*29*/].f_13 = 0f;
				Global_89001[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_11 = 0f;
				Global_89001[iVar0 /*29*/].f_14 = 0f;
				Global_89001[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_26 = 0f;
				Global_89001[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_27 = 0f;
				Global_89001[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_9(auto uParam0)
{
	*uParam0 = -15;
}

int func_10(int iParam0, auto uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = {115.1569f, -1286.684f, 28.2613f};
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = {1432.34f, -1887.383f, 70.5768f};
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = {1666.204f, 1967.25f, 143.3213f};
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = {-1440.22f, -127.02f, 50f};
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = {135.055f, -1759.64f, 27.8957f};
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = {687.6992f, -1744.03f, 28.3624f};
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = {56.5117f, -744.6122f, 43.1356f};
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = {506.485f, -1884.967f, 24.764f};
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = {1555.958f, 953.6136f, 77.2063f};
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = {220.72f, -64.4177f, 68.2922f};
			*fParam2 = 250.4535f - 360f;
			return 1;
			break;
		
		case 74:
			*uParam1 = {2048.07f, 3840.84f, 34.2238f};
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = {-464.22f, -1592.98f, 38.73f};
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = {-9f, 508.1f, 173.6278f};
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = {72.2278f, -1464.68f, 28.2915f};
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = {763f, -906f, 24.2312f};
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = {257.9167f, -1120.786f, 28.3684f};
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = {422.5858f, -978.6332f, 69.7073f};
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = {294.8521f, 882.9366f, 197.8527f};
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = {1495.595f, -1848.821f, 70.2075f};
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = {2897.554f, 4032.241f, 50.1419f};
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = {1397f, 3725.8f, 33.0673f};
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = {709.0244f, -2916.479f, 5.0589f};
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = {643.5248f, -2917.325f, 5.1337f};
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = {595.2742f, -2819.183f, 5.0559f};
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = {314.4171f, 965.207f, 208.4024f};
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = {3321.537f, 4975.455f, 25.9097f};
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
			*fParam2 = 42f + 180f;
			return 1;
			break;
		
		case 50:
			*uParam1 = {-731.3261f, 106.68f, 54.7169f};
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = {736.9869f, -2050.678f, 28.2718f};
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = {262.5499f, -2540.15f, 4.8433f};
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = {118.0988f, -1264.916f, 32.3637f};
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = {37.5988f, -1351.52f, 28.2954f};
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = {-558.2693f, 261.1167f, 82.07f};
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = {-196.9999f, 507.9999f, 132.477f};
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = {1312.01f, -1645.87f, 51.2f};
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = {2091.258f, 4714.852f, 40.1936f};
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = {1762.59f, 3247.212f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = {1764.013f, 3252.902f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_11(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85596[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85596[iParam0 /*2*/] = 0;
	}
}

void func_12()
{
	Global_91313 = 1;
	if (is_player_being_arrested(player_id(), 1))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
	}
	else if (!is_player_playing(player_id()))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 25);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

auto func_14()
{
	func_15();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_15()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_18(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_16(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_17(Global_101154.f_1826.f_539.f_3549))
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

int func_16(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()
{
	func_156();
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_34();
			iLocal_304 = 0;
		}
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		set_player_control(player_id(), false, 0);
		if (func_33(iLocal_46, 0))
		{
			if (!func_32(iLocal_46))
			{
				while (!func_31(iLocal_46, 0))
				{
					wait(0);
				}
			}
		}
		if (func_33(iLocal_48, 0))
		{
			if (!func_32(iLocal_48))
			{
				while (!func_31(iLocal_48, 0))
				{
					wait(0);
				}
			}
		}
		if (func_33(iLocal_47, 0))
		{
			if (!func_32(iLocal_47))
			{
				while (!func_31(iLocal_47, 0))
				{
					wait(0);
				}
			}
		}
		if (is_screen_faded_out())
		{
			if (!func_30())
			{
				load_scene(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1));
			}
			func_27(iLocal_33, -1, 1);
		}
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(800);
		}
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
		{
			if (is_vehicle_driveable(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_33(iLocal_48, 0))
					{
						if (is_ped_in_vehicle(iLocal_48, iLocal_33, 0))
						{
							clear_ped_tasks(iLocal_48);
							remove_ped_from_group(iLocal_48);
							set_blocking_of_non_temporary_events(iLocal_48, true);
							task_leave_vehicle(iLocal_48, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (is_ped_in_vehicle(iLocal_47, iLocal_33, 0))
						{
							clear_ped_tasks(iLocal_47);
							remove_ped_from_group(iLocal_47);
							set_blocking_of_non_temporary_events(iLocal_47, true);
							task_leave_vehicle(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_33(iLocal_46, 0))
					{
						if (is_ped_in_vehicle(iLocal_46, iLocal_33, 0))
						{
							clear_ped_tasks(iLocal_46);
							remove_ped_from_group(iLocal_46);
							set_blocking_of_non_temporary_events(iLocal_46, true);
							task_leave_vehicle(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (is_ped_in_vehicle(iLocal_47, iLocal_33, 0))
						{
							clear_ped_tasks(iLocal_47);
							remove_ped_from_group(iLocal_47);
							set_blocking_of_non_temporary_events(iLocal_47, true);
							task_leave_vehicle(iLocal_47, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_33(iLocal_46, 0))
					{
						if (is_ped_in_vehicle(iLocal_46, iLocal_33, 0))
						{
							clear_ped_tasks(iLocal_46);
							remove_ped_from_group(iLocal_46);
							set_blocking_of_non_temporary_events(iLocal_46, true);
							task_leave_vehicle(iLocal_46, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_48, 0))
					{
						if (is_ped_in_vehicle(iLocal_48, iLocal_33, 0))
						{
							clear_ped_tasks(iLocal_48);
							remove_ped_from_group(iLocal_48);
							set_blocking_of_non_temporary_events(iLocal_48, true);
							task_leave_vehicle(iLocal_48, iLocal_33, 0);
						}
					}
				}
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
				{
					task_leave_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 0);
				}
			}
		}
		settimerb(0);
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
		{
			if (is_vehicle_driveable(iLocal_33, 0))
			{
				if (iLocal_320 == 0)
				{
					if (func_14() == 0)
					{
						if (func_33(iLocal_48, 0))
						{
							if (!is_ped_in_vehicle(iLocal_48, iLocal_33, 0))
							{
								if (func_32(iLocal_48))
								{
									if (func_24(iLocal_48))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_33(iLocal_47, 0))
						{
							if (!is_ped_in_vehicle(iLocal_47, iLocal_33, 0))
							{
								if (func_32(iLocal_47))
								{
									if (func_24(iLocal_47))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_33(iLocal_46, 0))
						{
							if (!is_ped_in_vehicle(iLocal_46, iLocal_33, 0))
							{
								if (func_32(iLocal_46))
								{
									if (func_24(iLocal_46))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_33(iLocal_47, 0))
						{
							if (!is_ped_in_vehicle(iLocal_47, iLocal_33, 0))
							{
								if (func_32(iLocal_47))
								{
									if (func_24(iLocal_47))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_33(iLocal_46, 0))
						{
							if (!is_ped_in_vehicle(iLocal_46, iLocal_33, 0))
							{
								if (func_32(iLocal_46))
								{
									if (func_24(iLocal_46))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
						if (func_33(iLocal_48, 0))
						{
							if (!is_ped_in_vehicle(iLocal_48, iLocal_33, 0))
							{
								if (func_32(iLocal_48))
								{
									if (func_24(iLocal_48))
									{
										iLocal_320 = 1;
									}
								}
								else
								{
									iLocal_320 = 1;
								}
							}
						}
						else
						{
							iLocal_319 = 1;
						}
					}
					if (iLocal_318 == 1 && iLocal_319 == 1)
					{
						iLocal_320 = 1;
					}
				}
				else if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 1))
				{
					set_player_control(player_id(), true, 0);
					settimerb(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
		{
			if (is_vehicle_driveable(iLocal_33, 0))
			{
				set_vehicle_doors_shut(iLocal_33, 0);
				set_vehicle_doors_locked(iLocal_33, 2);
				freeze_entity_position(iLocal_33, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (is_vehicle_driveable(iLocal_32, 0))
			{
				freeze_entity_position(iLocal_32, true);
			}
		}
		iLocal_62 = 4;
	}
	if (iLocal_62 == 4)
	{
		func_21();
	}
}

void func_21()
{
	func_22(0, 0);
	func_190();
}

void func_22(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	auto uVar2;
	
	if (!Global_55751)
	{
		Global_55751 = iParam1;
	}
	if (iParam0)
	{
		if ((func_189(0) && Global_69735.f_1 == 1) && func_23(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_189(0))
	{
		iVar0 = func_13();
		uVar1 = Global_82363[iVar0 /*5*/];
		uVar2 = Global_69758.f_109[uVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101154.f_7775)
			{
			}
			return;
		}
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_82363[iVar0 /*5*/].f_1), 4);
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_69737, true);
		Global_69753 = uVar2;
		Global_69754 = GAMEPLAY::GET_GAME_TIMER();
	}
}

bool func_23(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return true;
			break;
		
		case 86:
			return true;
			break;
		
		case 91:
			return true;
			break;
		
		default:
			return false;
			break;
	}
	return false;
}

bool func_24(int iParam0)
{
	int iVar0;
	
	return false;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return false;
		}
		if (func_25(iVar0) != iParam0)
		{
			return false;
		}
		if (!is_bit_set(Global_87465, iVar0))
		{
			return false;
		}
		clear_bit(&Global_87465, iVar0);
		return true;
	}
	return false;
}

int func_25(int iParam0)
{
	if (iParam0 > 3)
	{
		return false;
	}
	if (iParam0 == func_14())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_89089[func_26(iParam0)];
}

int func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	if (func_29() && func_30())
	{
		while (Global_91273 != 6)
		{
			wait(0);
		}
		set_game_paused(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				clear_ped_wetness(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (is_vehicle_driveable(iParam0, 0))
					{
						if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							set_ped_into_vehicle(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							set_gameplay_cam_relative_pitch(0f, 1f);
							set_gameplay_cam_relative_heading(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (is_player_playing(player_id()))
			{
				set_player_control(player_id(), true, 0);
			}
		}
		_stop_all_screen_effects();
		func_28(0);
	}
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 13);
	}
	else
	{
		clear_bit(&(Global_91278.f_20), 13);
	}
}

bool func_29()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return true;
	}
	return false;
}

int func_30()
{
	return is_bit_set(Global_91278.f_20, 13);
}

bool func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	return false;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return false;
		}
		if (func_25(iVar0) != iParam0)
		{
			return false;
		}
		if (is_bit_set(Global_87465, iVar0))
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return false;
			}
		}
		if (is_bit_set(Global_87464, iVar0))
		{
			set_ped_infinite_ammo(iParam0, 0, false);
			set_entity_load_collision_flag(iParam0, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(&Global_87465, iVar0);
			return true;
		}
	}
	return false;
}

bool func_32(int iParam0)
{
	int iVar0;
	
	return false;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return false;
		}
		if (func_25(iVar0) != iParam0)
		{
			return false;
		}
		if (is_bit_set(Global_87465, iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	return false;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return false;
		}
		if (func_25(iVar0) != iParam0)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return false;
			}
		}
		if (is_bit_set(Global_87464, iVar0))
		{
			return true;
		}
	}
	return false;
}

void func_34()
{
	iLocal_396 = 0;
	iLocal_456 = 0;
	set_player_wanted_level(player_id(), false, 0);
	set_player_wanted_level_now(player_id(), 0);
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	func_101();
	clear_prints();
	func_100();
	func_99();
	func_36();
	if (!func_30())
	{
		func_35();
	}
	set_gameplay_cam_relative_heading(0f);
}

void func_35()
{
	switch (iLocal_28)
	{
		case 2:
			set_entity_coords(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 3:
			set_entity_coords(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (is_vehicle_driveable(iLocal_33, 0))
				{
					if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
					{
						set_ped_into_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (is_vehicle_driveable(iLocal_33, 0))
				{
					if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
					{
						set_ped_into_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_36()
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_95();
			if (func_94() && func_91(7f, 7f, 7f, 1))
			{
				func_89();
				while (!func_88())
				{
					wait(0);
				}
				iLocal_34 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			set_wanted_level_multiplier(0.01f);
			break;
		
		case 4:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_95();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (is_vehicle_driveable(iLocal_33, 0))
				{
					set_entity_coords(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, false, 0, 1);
					set_entity_heading(iLocal_33, 161.1163f);
				}
			}
			clear_area(41f, -615f, 30f, 50f, 1, 1, 0, false);
			break;
		
		case 5:
			iLocal_418 = 1;
			iLocal_419 = 1;
			iLocal_420 = 1;
			func_95();
			clear_area(41f, -615f, 30f, 50f, 1, 1, 0, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				if (is_vehicle_driveable(iLocal_33, 0))
				{
					set_entity_coords(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, false, 0, 1);
					set_entity_heading(iLocal_33, 70.7778f);
				}
			}
			request_model(joaat("s_m_m_security_01"));
			while (!has_model_loaded(joaat("s_m_m_security_01")))
			{
				wait(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_49))
			{
				iLocal_49 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, true);
				set_model_as_no_longer_needed(joaat("s_m_m_security_01"));
				PED::SET_PED_CONFIG_FLAG(iLocal_49, 324, true);
			}
			break;
	}
}

int func_37(Vector3 vParam0, Vector3 fParam1)
{
	return func_38(&(Global_93091.f_2311), vParam0, fParam3, 0);
}

int func_38(auto uParam0, Vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	auto uVar5;
	int iVar8;
	
	if (func_87(uParam0))
	{
		if (func_86(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = {*uParam0};
			fParam4 = *uParam0.f_6;
		}
		if (*uParam0.f_12.f_66 == joaat("monster") || *uParam0.f_12.f_66 == joaat("marshall"))
		{
			if (is_point_in_angled_area(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, true))
			{
				vParam1 = {-850.93f, 158.82f, 65.7f};
				fParam4 = 89.5f;
			}
		}
		if (func_85(uParam0))
		{
			clear_area(vParam1, 5f, 1, 0, 0, false);
			func_84(vParam1, 5f, 0);
			iVar0 = create_vehicle(*uParam0.f_12.f_66, vParam1, fParam4, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				vVar1 = {get_entity_coords(iVar0, 1)};
				if (vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					set_entity_coords_no_offset(iVar0, vParam1, 0, 0, 1);
				}
				func_76(iVar0, uParam0.f_12, 0, 1);
				iVar4 = true;
				if (is_this_model_a_boat(*uParam0.f_12.f_66) || _is_this_model_an_emergency_boat(*uParam0.f_12.f_66))
				{
					if (!test_probe_against_water(vParam1.x, vParam1.y, vParam1.z + 30f, vParam1.x, vParam1.y, vParam1.z - 30f, &uVar5))
					{
						iVar4 = false;
					}
				}
				if (iVar4)
				{
					set_vehicle_on_ground_properly(iVar0);
				}
				if (*uParam0.f_7 == 1)
				{
					if (iParam5)
					{
						if (is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_75(*uParam0.f_11, 1);
						}
						else if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_75(*uParam0.f_11, 2);
						}
					}
					_0xAB04325045427AAE(iVar0, 0);
					_0x428BACCDF5E26EAD(iVar0, false);
					set_vehicle_has_strong_axles(iVar0, true);
					func_74(iVar0, *uParam0.f_11);
				}
				else if ((!func_71(iVar0, *uParam0.f_3, *uParam0.f_8) && *uParam0.f_10) && are_strings_equal(get_this_script_name(), "startup_positioning"))
				{
					iVar8 = func_70(iVar0);
					if (iVar8 == -1)
					{
						*uParam0.f_10 = 0;
					}
					else
					{
						func_63(iVar8);
					}
				}
				if (((Global_91278 != 13 && Global_91278 != 10) && Global_91278 != 11) && Global_91278 != 12)
				{
					if (get_hash_key(&(Global_91278.f_3)) == Global_69307)
					{
						if (*uParam0.f_12.f_66 == Global_101154.f_18807.f_69[21 /*78*/].f_66)
						{
							func_60(24, 0);
							func_63(24);
						}
					}
				}
				if (*uParam0.f_9 == 1)
				{
					func_39(iVar0, *uParam0.f_11);
				}
				set_model_as_no_longer_needed(*uParam0.f_12.f_66);
				vVar1 = {get_entity_coords(iVar0, 1)};
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_44(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_40(iParam0, &(Global_101154.f_18807.f_5510));
}

void func_40(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_43(uParam1);
		*uParam1.f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(uParam1.f_1, get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = get_vehicle_number_plate_text_index(iParam0);
		get_vehicle_colours(iParam0, uParam1.f_5, uParam1.f_6);
		get_vehicle_extra_colours(iParam0, uParam1.f_7, uParam1.f_8);
		get_vehicle_tyre_smoke_color(iParam0, uParam1.f_62, uParam1.f_63, uParam1.f_64);
		*uParam1.f_65 = get_vehicle_window_tint(iParam0);
		*uParam1.f_67 = get_vehicle_livery(iParam0);
		*uParam1.f_69 = get_vehicle_wheel_type(iParam0);
		*uParam1.f_70 = get_vehicle_door_lock_status(iParam0);
		get_vehicle_custom_secondary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		_get_vehicle_neon_lights_colour(iParam0, uParam1.f_74, uParam1.f_75, uParam1.f_76);
		if (_is_vehicle_neon_light_enabled(iParam0, 2))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 31);
		}
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			*uParam1.f_65 = 0;
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			*uParam1.f_68 = get_convertible_roof_state(iParam0);
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (_0x4198AB0022B15F87(iParam0))
			{
				switch (_get_vehicle_landing_gear(iParam0))
				{
					case 2:
					case 0:
						clear_bit(uParam1.f_77, 23);
						GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						clear_bit(uParam1.f_77, 23);
						clear_bit(uParam1.f_77, 22);
						break;
					
					case 4:
						GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 12);
		}
		func_42(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 11);
		}
		else
		{
			clear_bit(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 27);
		}
		else
		{
			clear_bit(uParam1.f_77, 27);
		}
	}
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

bool func_42(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			*uParam1[iVar0] = 0;
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				*uParam1[iVar0] = 1;
			}
		}
		else
		{
			*uParam1[iVar0] = get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				*uParam2[0] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				*uParam2[1] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_43(auto uParam0)
{
	int iVar0;
	
	*uParam0.f_66 = 0;
	*uParam0.f_77 = 0;
	*uParam0.f_65 = 0;
	*uParam0.f_62 = 0;
	*uParam0.f_63 = 0;
	*uParam0.f_64 = 0;
	*uParam0.f_74 = 0;
	*uParam0.f_75 = 0;
	*uParam0.f_76 = 0;
	*uParam0 = 0;
	StringCopy(uParam0.f_1, "", 16);
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		*uParam0.f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		*uParam0.f_59[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 1;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
	*uParam0.f_73 = 0;
}

bool func_44(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_58(iParam0, 0, 0)) || func_58(iParam0, 1, 0)) || func_58(iParam0, 2, 0)) || func_57(iParam0) != 145) || func_56(iParam0)) || func_55(iParam0)) || func_54(iParam0)) || func_53(iParam0)) || !func_45(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_55(iParam0))
		{
		}
		if (func_55(iParam0))
		{
		}
		if (func_58(iParam0, 0, 0))
		{
		}
		if (func_58(iParam0, 1, 0))
		{
		}
		if (func_58(iParam0, 2, 0))
		{
		}
		if (func_57(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_46(iParam0, 0))
	{
		return false;
	}
	if (((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
			break;
	}
	return true;
}

bool func_46(int iParam0, int iParam1)
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
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_52())
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
		if ((((!func_51() && !func_50()) && !func_49()) && !func_48()) && !func_52())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_49())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_47(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_47(int iParam0)
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

bool func_48()
{
	return false;
}

bool func_49()
{
	return true;
}

bool func_50()
{
	return true;
}

bool func_51()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_52()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, false);
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

bool func_53(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_46(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_55(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_88942[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_56(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_58(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_59(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || is_bit_set(Global_101154.f_5919[uVar9], false))
		{
			if (is_vehicle_in_garage_area(&sVar1, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_59(int iParam0, int iParam1, char* sParam2, auto uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

void func_60(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_62(iParam0, 0))
		{
			func_61(iParam0, 1, 0);
			func_61(iParam0, 2, 0);
			func_61(iParam0, 3, 0);
			func_61(iParam0, 4, 0);
			func_61(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_61(iParam0, 0, 0);
	}
}

void func_61(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam2)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		clear_bit(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

int func_62(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_18807[iParam0], iParam1);
}

void func_63(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_67(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
		{
			iVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (is_vehicle_driveable(Global_68319.f_139[iParam0], 0))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_68319.f_139[iParam0], 0))
					{
						iVar0 = false;
					}
				}
			}
			if (iVar0)
			{
				set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
				delete_vehicle(&(Global_68319.f_139[iParam0]));
			}
		}
		Global_68319[iParam0] = 1;
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_62(iParam0, 0)) && Global_69228.f_66 == 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] != 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] > 3) && (!func_65(0, Global_68319.f_555[0 /*21*/].f_12) || !func_65(1, Global_68319.f_555[0 /*21*/].f_12)))
			{
				func_64(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), &Global_69228);
				Global_69306 = Global_101154.f_18807.f_5591;
			}
			func_60(iParam0, 0);
		}
	}
}

void func_64(auto uParam0, auto uParam1)
{
	*uParam1.f_66 = *uParam0.f_66;
	*uParam1 = *uParam0;
	*uParam1.f_1 = {*uParam0.f_1};
	*uParam1.f_5 = *uParam0.f_5;
	*uParam1.f_6 = *uParam0.f_6;
	*uParam1.f_7 = *uParam0.f_7;
	*uParam1.f_8 = *uParam0.f_8;
	*uParam1.f_9 = {*uParam0.f_9};
	*uParam1.f_59 = {*uParam0.f_59};
	*uParam1.f_62 = *uParam0.f_62;
	*uParam1.f_63 = *uParam0.f_63;
	*uParam1.f_64 = *uParam0.f_64;
	*uParam1.f_65 = *uParam0.f_65;
	*uParam1.f_77 = *uParam0.f_77;
	*uParam1.f_67 = *uParam0.f_67;
	*uParam1.f_69 = *uParam0.f_69;
	*uParam1.f_68 = *uParam0.f_68;
	*uParam1.f_71 = *uParam0.f_71;
	*uParam1.f_72 = *uParam0.f_72;
	*uParam1.f_73 = *uParam0.f_73;
	*uParam1.f_74 = *uParam0.f_74;
	*uParam1.f_75 = *uParam0.f_75;
	*uParam1.f_76 = *uParam0.f_76;
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_66(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_46(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

auto func_66(auto uParam0)
{
	return *uParam0;
}

int func_67(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = 0f;
	*uParam0.f_4 = 0;
	StringCopy(uParam0.f_5, "", 16);
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 145;
	*uParam0.f_13 = -1;
	*uParam0.f_14 = 0;
	*uParam0.f_15 = {0f, 0f, 0f};
	*uParam0.f_18 = {0f, 0f, 0f};
	switch (iParam1)
	{
		case 0:
			*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
			*uParam0.f_3 = 157.5705f;
			*uParam0.f_4 = func_68(0, 1);
			*uParam0.f_12 = 0;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = {1970.943f, 3801.684f, 31.1396f};
			*uParam0.f_3 = 301.3964f;
			*uParam0.f_4 = func_68(0, 1);
			*uParam0.f_12 = 0;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
			*uParam0.f_3 = 180.0808f;
			*uParam0.f_4 = func_68(1, 1);
			*uParam0.f_12 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
			*uParam0.f_3 = 141.6114f;
			*uParam0.f_4 = func_68(1, 2);
			*uParam0.f_12 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 19);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = {10.9281f, 545.669f, 174.7951f};
			*uParam0.f_3 = 61.392f;
			*uParam0.f_4 = func_68(1, 1);
			*uParam0.f_12 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = {6.1093f, 544.9742f, 174.2835f};
			*uParam0.f_3 = 92.1548f;
			*uParam0.f_4 = func_68(1, 2);
			*uParam0.f_12 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 19);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = {1981.416f, 3808.131f, 31.1384f};
			*uParam0.f_3 = 117.2557f;
			*uParam0.f_4 = func_68(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
			*uParam0.f_3 = 35.7505f;
			*uParam0.f_4 = func_68(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = {148.2868f, -1270.569f, 28.2252f};
			*uParam0.f_3 = 208.4685f;
			*uParam0.f_4 = func_68(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = {1459.509f, -1380.45f, 78.3259f};
			*uParam0.f_3 = 99.6211f;
			*uParam0.f_4 = joaat("scorcher");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
			*uParam0.f_3 = 98.3867f;
			*uParam0.f_4 = joaat("seashark");
			iVar0 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			break;
		
		case 11:
			*uParam0 = {353.0926f, 3577.593f, 32.351f};
			*uParam0.f_3 = 16.6205f;
			*uParam0.f_4 = joaat("duster");
			iVar0 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			break;
		
		case 12:
			*uParam0.f_14 = 0;
			*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
			*uParam0.f_3 = 329.1082f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 359;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 13:
			*uParam0.f_14 = 1;
			*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
			*uParam0.f_3 = 329.5137f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 359;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 14:
			*uParam0.f_14 = 2;
			*uParam0 = {1735.586f, 3294.531f, 40.1651f};
			*uParam0.f_3 = 194.9525f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 359;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 15:
			*uParam0.f_14 = 3;
			*uParam0 = {-846.27f, -1363.19f, 0.22f};
			*uParam0.f_3 = 108.78f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 356;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 16:
			*uParam0.f_14 = 4;
			*uParam0 = {-849.47f, -1354.99f, 0.24f};
			*uParam0.f_3 = 109.84f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 356;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 17:
			*uParam0.f_14 = 5;
			*uParam0 = {-852.47f, -1346.2f, 0.21f};
			*uParam0.f_3 = 108.76f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 356;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 18:
			*uParam0.f_14 = 6;
			*uParam0 = {-745.857f, -1433.904f, 4.0005f};
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-756.2952f, -1441.609f, 2.9184f};
			*uParam0.f_18 = {-738.0606f, -1423.068f, 8.2835f};
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 19:
			*uParam0.f_14 = 7;
			*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-772.8158f, -1459.957f, 3.2894f};
			*uParam0.f_18 = {-754.3353f, -1440.836f, 8.3334f};
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 20:
			*uParam0.f_14 = 8;
			*uParam0 = {1769.3f, 3244f, 41.1f};
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 360;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 21:
			*uParam0.f_14 = 9;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 357;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 22:
			*uParam0.f_14 = 10;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 357;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 23:
			*uParam0.f_14 = 11;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 357;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = iParam1 - 26;
			*uParam0.f_14 = 12 + iVar1;
			*uParam0 = {196.2794f, -1020.479f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = iParam1 - 29;
			*uParam0.f_14 = 15 + iVar1;
			*uParam0 = {199.8872f, -1020.048f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = iParam1 - 32;
			*uParam0.f_14 = 18 + iVar1;
			*uParam0 = {203.6006f, -1019.776f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 24:
			*uParam0.f_14 = 21;
			*uParam0 = {0f, 0f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = 0;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 11);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 25:
			*uParam0.f_14 = 22;
			*uParam0 = {723.2515f, -632.0496f, 27.1484f};
			*uParam0.f_3 = 12.9316f;
			*uParam0.f_4 = joaat("tailgater");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 11);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = {-51.23f, 3111.9f, 24.95f};
			*uParam0.f_3 = 46.78f;
			*uParam0.f_4 = joaat("proptrailer");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
			*uParam0.f_3 = 308.0596f;
			*uParam0.f_4 = joaat("bjxl");
			*uParam0.f_10 = 126;
			*uParam0.f_11 = 126;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 9);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = {-2892.93f, 3192.37f, 11.66f};
			*uParam0.f_3 = -132.35f;
			*uParam0.f_4 = joaat("velum");
			*uParam0.f_10 = 157;
			*uParam0.f_11 = 157;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 9);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = {1744.308f, 3270.673f, 40.2076f};
			*uParam0.f_3 = 125f;
			*uParam0.f_4 = joaat("cargobob3");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = {1751.44f, 3322.643f, 42.1855f};
			*uParam0.f_3 = 268.134f;
			*uParam0.f_4 = joaat("submersible");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = {1377.104f, -2076.2f, 52f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("towtruck");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = {1380.42f, -2072.77f, 51.7607f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("trash");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = {1359.389f, 3618.441f, 33.8907f};
			*uParam0.f_3 = 108.2337f;
			*uParam0.f_4 = joaat("barracks");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = {693.1154f, -1018.155f, 21.6387f};
			*uParam0.f_3 = 177.6454f;
			*uParam0.f_4 = 1938952078;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = {-73.6963f, 495.124f, 143.5226f};
			*uParam0.f_3 = 155.5994f;
			*uParam0.f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
			*uParam0.f_3 = 294.993f;
			*uParam0.f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = {533.9048f, -169.2469f, 53.7005f};
			*uParam0.f_3 = 1.2998f;
			*uParam0.f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
			*uParam0.f_3 = 267.7392f;
			*uParam0.f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
			*uParam0.f_3 = 350.7697f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
			*uParam0.f_3 = 48.9311f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = {-1062.076f, -226.7637f, 37.157f};
			*uParam0.f_3 = 234.2767f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = {68.16914f, -1558.958f, 29.46904f};
			*uParam0.f_3 = 49.90575f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = {589.4399f, 2736.708f, 42.03316f};
			*uParam0.f_3 = -175.7105f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = {-488.774f, -344.5721f, 34.36356f};
			*uParam0.f_3 = 82.4042f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = {288.8808f, -585.4728f, 43.15428f};
			*uParam0.f_3 = -20.80707f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = {304.8294f, -1383.674f, 31.67744f};
			*uParam0.f_3 = -41.11603f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = {1126.194f, -1481.486f, 34.7016f};
			*uParam0.f_3 = -91.43369f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = {-1598.36f, 5252.84f, 0f};
			*uParam0.f_3 = 28.14f;
			*uParam0.f_4 = joaat("submersible");
			*uParam0.f_13 = 308;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = {-1602.62f, 5260.37f, 0.86f};
			*uParam0.f_3 = 25.32f;
			*uParam0.f_4 = joaat("dinghy");
			*uParam0.f_13 = 404;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = {2116.571f, 4763.279f, 40.1596f};
			*uParam0.f_3 = 198.723f;
			*uParam0.f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = {1133.21f, 120.2f, 80.9f};
			*uParam0.f_3 = 134.4f;
			if (func_52())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, true);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = {-806.31f, -2679.65f, 13.9f};
			*uParam0.f_3 = 150.54f;
			if (func_52())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, true);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = {1985.85f, 3828.96f, 31.98f};
			*uParam0.f_3 = -16.58f;
			*uParam0.f_4 = joaat("blazer3");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = {3870.75f, 4464.67f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = joaat("submersible2");
			*uParam0.f_13 = 308;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = {1257.729f, -2564.474f, 41.717f};
			*uParam0.f_3 = 284.5561f;
			*uParam0.f_4 = joaat("dukes2");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = {643.2823f, 3014.152f, 42.2733f};
			*uParam0.f_3 = 128.0554f;
			*uParam0.f_4 = joaat("dukes2");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = {38.9368f, 850.8677f, 196.3f};
			*uParam0.f_3 = 311.6813f;
			*uParam0.f_4 = joaat("dodo");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = {1333.875f, 4262.226f, 30.78f};
			*uParam0.f_3 = 262.5293f;
			*uParam0.f_4 = joaat("dodo");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
	}
	if (is_bit_set(*uParam0.f_9, 10))
	{
		*uParam0.f_4 = Global_101154.f_18807.f_69[*uParam0.f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((*uParam0.f_4 == joaat("miljet") || *uParam0.f_4 == joaat("besra")) || *uParam0.f_4 == joaat("luxor")) || *uParam0.f_4 == joaat("shamal")) || *uParam0.f_4 == joaat("titan")) || *uParam0.f_4 == joaat("luxor2"))
			{
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				*uParam0.f_3 = 106.0906f;
			}
		}
		if (!func_86(Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/]};
		}
		if (Global_101154.f_18807.f_1934[*uParam0.f_14] != -1f)
		{
			*uParam0.f_3 = Global_101154.f_18807.f_1934[*uParam0.f_14];
		}
	}
	if (is_bit_set(*uParam0.f_9, 19))
	{
		if (!func_86(Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][*uParam0.f_12];
		}
	}
	else if (is_bit_set(*uParam0.f_9, 20))
	{
		if (!func_86(Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][*uParam0.f_12];
		}
	}
	return iVar0;
}

int func_68(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_69(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_69(int iParam0, auto uParam1, int iParam2)
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

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]) && !is_entity_dead(Global_68319.f_484[iVar0], 0)) && is_vehicle_driveable(Global_68319.f_484[iVar0], 0))
		{
			get_vehicle_colours(iParam0, &iVar1, &iVar2);
			get_vehicle_colours(Global_68319.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_68319.f_484[iVar0]) && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_71(int iParam0, Vector3 vParam1, int iParam2)
{
	int iVar0;
	var[] uVar1 = new var[3];
	int iVar5;
	int iVar6;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_73(iParam0, Global_68319.f_139[38], 0))
			{
				func_63(38);
				return true;
			}
			break;
		
		case 1938952078:
			if (func_73(iParam0, Global_68319.f_139[43], 1))
			{
				func_63(43);
				return true;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = get_ped_nearby_vehicles(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= iVar5 - 1)
			{
				if (func_73(iParam0, uVar1[iVar6], 1) && func_72(get_entity_coords(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!iParam4 || func_86(vParam1, 0f, 0f, 0f, 0)) || get_distance_between_coords(get_entity_coords(iParam0, 1), get_entity_coords(uVar1[iVar6], 1), 1) < 10f)
					{
						delete_vehicle(&iParam0);
						return true;
					}
					else
					{
						return false;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[14]) && is_vehicle_driveable(iParam0, 0)) && is_vehicle_driveable(Global_68319.f_484[14], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_68319.f_484[14]) == joaat("luxor2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[14]))
				{
					func_63(14);
					return true;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[20]) && is_vehicle_driveable(iParam0, 0)) && is_vehicle_driveable(Global_68319.f_484[20], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_68319.f_484[20]) == joaat("swift2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[20]))
				{
					func_63(20);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_72(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!iParam7)
	{
		if (absf(vParam0.x - vParam3.x) <= fParam6)
		{
			if (absf(vParam0.y - vParam3.y) <= fParam6)
			{
				if (absf(vParam0.z - vParam3.z) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (absf(vParam0.x - vParam3.x) <= fParam6)
	{
		if (absf(vParam0.y - vParam3.y) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_73(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !is_entity_dead(iParam1, 0)) && is_vehicle_driveable(iParam1, 0))
	{
		if (iParam2)
		{
			get_vehicle_colours(iParam0, &iVar0, &iVar1);
			get_vehicle_colours(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_74(int iParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			Global_88942[iVar0] = iParam0;
			Global_88952[iVar0] = uParam1;
			Global_88962[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (is_this_model_a_car(Global_88962[iVar0]))
			{
				Global_88990[uParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88990[uParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (iParam0 == 145 || Global_88952[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_88942[iVar0]) == func_68(iParam0, iParam1))
				{
					if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_88942[iVar0], 0))
					{
						set_entity_as_mission_entity(Global_88942[iVar0], false, 1);
						delete_vehicle(&(Global_88942[iVar0]));
						Global_88952[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_76(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (get_hash_key(uParam1.f_1) != 0)
		{
			set_vehicle_number_plate_text(iParam0, uParam1.f_1);
		}
		if (*uParam1 >= 0 && *uParam1 < get_number_of_vehicle_number_plates())
		{
			set_vehicle_number_plate_text_index(iParam0, *uParam1);
		}
		if (*uParam1.f_66 == joaat("sovereign"))
		{
			*uParam1.f_5 = 111;
			*uParam1.f_6 = 111;
			*uParam1.f_7 = 111;
			*uParam1.f_8 = 156;
		}
		else if (*uParam1.f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (is_bit_set(*uParam1.f_77, func_41(iVar0 + 1)))
			{
			}
			else
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, func_41(iVar0 + 1));
			}
		}
		else if (*uParam1.f_66 == joaat("sandking") || *uParam1.f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (is_bit_set(*uParam1.f_77, func_41(iVar1 + 1)))
			{
			}
			else
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, func_41(iVar1 + 1));
			}
		}
		if (is_bit_set(*uParam1.f_77, 13))
		{
			set_vehicle_custom_primary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_primary_colour(iParam0);
		}
		if (is_bit_set(*uParam1.f_77, 12))
		{
			set_vehicle_custom_secondary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_secondary_colour(iParam0);
		}
		set_vehicle_colours(iParam0, *uParam1.f_5, *uParam1.f_6);
		if (*uParam1.f_7 < 0)
		{
			*uParam1.f_7 = 0;
		}
		if (*uParam1.f_8 < 0)
		{
			*uParam1.f_8 = 0;
		}
		set_vehicle_extra_colours(iParam0, *uParam1.f_7, *uParam1.f_8);
		if (((is_bit_set(*uParam1.f_77, 15) || func_83(iParam0)) || (((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0) && *uParam1.f_9[20] > 0)) && func_82())
		{
			*uParam1.f_62 = 0;
			*uParam1.f_63 = 0;
			*uParam1.f_64 = 0;
		}
		else if ((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0)
		{
			*uParam1.f_62 = 255;
			*uParam1.f_63 = 255;
			*uParam1.f_64 = 255;
		}
		set_vehicle_tyre_smoke_color(iParam0, *uParam1.f_62, *uParam1.f_63, *uParam1.f_64);
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			set_vehicle_window_tint(iParam0, 0);
		}
		else
		{
			set_vehicle_window_tint(iParam0, 0);
			set_vehicle_window_tint(iParam0, *uParam1.f_65);
		}
		set_vehicle_tyres_can_burst(iParam0, !is_bit_set(*uParam1.f_77, 9));
		if (iParam2)
		{
			set_vehicle_doors_locked(iParam0, *uParam1.f_70);
		}
		_set_vehicle_neon_lights_colour(iParam0, *uParam1.f_74, *uParam1.f_75, *uParam1.f_76);
		_set_vehicle_neon_light_enabled(iParam0, 2, is_bit_set(*uParam1.f_77, 28));
		_set_vehicle_neon_light_enabled(iParam0, 3, is_bit_set(*uParam1.f_77, 29));
		_set_vehicle_neon_light_enabled(iParam0, 0, is_bit_set(*uParam1.f_77, 30));
		_set_vehicle_neon_light_enabled(iParam0, 1, is_bit_set(*uParam1.f_77, 31));
		set_vehicle_is_stolen(iParam0, is_bit_set(*uParam1.f_77, 10));
		if (get_vehicle_livery_count(iParam0) > 1 && *uParam1.f_67 >= 0)
		{
			set_vehicle_livery(iParam0, *uParam1.f_67);
		}
		if (*uParam1.f_69 > -1 && *uParam1.f_69 < 255)
		{
			if (!is_this_model_a_bicycle(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (*uParam1.f_69 == 6)
					{
						func_81(iParam0, *uParam1.f_69);
					}
				}
				else
				{
					func_81(iParam0, *uParam1.f_69);
				}
			}
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			if ((*uParam1.f_68 == 0 || *uParam1.f_68 == 3) || *uParam1.f_68 == 5)
			{
				raise_convertible_roof(iParam0, 1);
			}
			else
			{
				lower_convertible_roof(iParam0, 1);
			}
		}
		if (iParam3)
		{
			func_77(&iParam0, uParam1.f_9, uParam1.f_59);
		}
		if (!is_this_model_a_heli(*uParam1.f_66) && !is_this_model_a_boat(*uParam1.f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (is_bit_set(*uParam1.f_77, func_41(iVar2 + 1)))
				{
					if (!is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
					{
						set_vehicle_extra(iParam0, iVar2 + 1, false);
					}
				}
				else if (is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
				{
					set_vehicle_extra(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (!is_bit_set(*uParam1.f_77, 23))
			{
				if (is_bit_set(*uParam1.f_77, 22))
				{
					_set_vehicle_landing_gear(iParam0, 2);
				}
				else
				{
					_set_vehicle_landing_gear(iParam0, 3);
				}
			}
			else
			{
				_set_vehicle_landing_gear(iParam0, 4);
			}
		}
		if (is_bit_set(*uParam1.f_77, 27))
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

bool func_77(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			toggle_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] > 0);
		}
		else if (get_vehicle_mod(*iParam0, iVar1) != *uParam1[iVar0] - 1)
		{
			remove_vehicle_mod(*iParam0, iVar1);
			if (*uParam1[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[0] > 0);
				}
				else if (iVar0 == 24)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[1] > 0);
				}
				else
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, false);
				}
			}
		}
		iVar0++;
	}
	if (func_80(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && get_vehicle_mod(*iParam0, 24) != func_79(*iParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*iParam0, 24, func_79(*iParam0, *uParam1[38] - 1), false);
	}
	if (func_78(*iParam0))
	{
		set_vehicle_strong(*iParam0, true);
		set_vehicle_has_strong_axles(*iParam0, true);
	}
	return true;
}

bool func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[16] cVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0)) && get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (get_vehicle_mod(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, get_mod_text_label(iParam0, iVar1, get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = get_hash_key(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == get_hash_key("MNU_CAGE") || iVar2 == get_hash_key("SABRE_CAG"))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = get_num_vehicle_mods(iParam0, 38);
		iVar1 = get_num_vehicle_mods(iParam0, 24);
		fVar2 = to_float(iParam1 + 1) / to_float(iVar0);
		iVar3 = floor(to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

bool func_80(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return true;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_11649)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11650)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11648)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11651)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11653)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11652)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
			break;
	}
	return false;
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = get_vehicle_mod(iParam0, 24);
		iVar1 = get_vehicle_mod_variation(iParam0, 24);
		set_vehicle_wheel_type(iParam0, iParam1);
		if (iVar0 == -1)
		{
			remove_vehicle_mod(iParam0, 24);
		}
		else
		{
			set_vehicle_mod(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_82()
{
	return is_dlc_present(-1691188696);
}

int func_83(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (decor_is_registered_as_type("MPBitset", 3))
			{
				if (decor_exist_on(iParam0, "MPBitset"))
				{
					iVar0 = decor_get_int(iParam0, "MPBitset");
				}
				return is_bit_set(iVar0, 4);
			}
		}
	}
	return false;
}

void func_84(Vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_67(&(Global_68319.f_555[0 /*21*/]), iVar0))
		{
			if (get_distance_between_coords(vParam0, Global_68319.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_63(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_85(auto uParam0)
{
	if (func_87(uParam0))
	{
		if (has_model_loaded(*uParam0.f_12.f_66))
		{
			return true;
		}
		else
		{
			return false;
		}
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

int func_86(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_87(auto uParam0)
{
	if (*uParam0.f_12.f_66 == 0)
	{
		return false;
	}
	if (!func_46(*uParam0.f_12.f_66, 0))
	{
		return false;
	}
	if (*uParam0.f_12.f_66 == joaat("stunt") && func_72(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return false;
	}
	return true;
}

int func_88()
{
	return func_85(&(Global_93091.f_2311));
}

void func_89()
{
	func_90(&(Global_93091.f_2311));
}

void func_90(auto uParam0)
{
	if (func_87(uParam0))
	{
		request_model(*uParam0.f_12.f_66);
	}
}

int func_91(Vector3 vParam0, int iParam1)
{
	return func_92(Global_93091.f_2311.f_12.f_66, vParam0, iParam3);
}

bool func_92(int iParam0, Vector3 vParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam4 == 1)
	{
		vParam1 = {func_93()};
	}
	get_model_dimensions(iParam0, &vVar0, &vVar3);
	if (vVar3.x - vVar0.x > vParam1.x)
	{
		return false;
	}
	else if (vVar3.y - vVar0.y > vParam1.y)
	{
		return false;
	}
	else if (vVar3.z - vVar0.z > vParam1.z)
	{
		return false;
	}
	return true;
}

Vector3 func_93()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_94()
{
	return func_87(&(Global_93091.f_2311));
}

void func_95()
{
	request_model(joaat("armytrailer2"));
	request_model(joaat("packer"));
	request_model(joaat("s_m_y_construct_01"));
	request_model(joaat("s_m_m_security_01"));
	request_model(joaat("bison2"));
	while ((((!has_model_loaded(joaat("armytrailer2")) || !has_model_loaded(joaat("packer"))) || !has_model_loaded(joaat("s_m_y_construct_01"))) || !has_model_loaded(joaat("s_m_m_security_01"))) || !has_model_loaded(joaat("bison2")))
	{
		wait(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108[1]))
		{
			set_entity_as_mission_entity(Global_88108[1], true, 1);
			iLocal_32 = Global_88108[1];
			add_vehicle_upsidedown_check(iLocal_32);
		}
		else
		{
			iLocal_32 = create_vehicle(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			add_vehicle_upsidedown_check(iLocal_32);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108[2]))
		{
			set_entity_as_mission_entity(Global_88108[2], true, 1);
			iLocal_33 = Global_88108[2];
			set_vehicle_has_strong_axles(iLocal_33, true);
			set_vehicle_doors_locked(iLocal_33, 7);
			func_98(iLocal_33, -1);
			func_97(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = create_vehicle(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			set_vehicle_has_strong_axles(iLocal_33, true);
			set_vehicle_doors_locked(iLocal_33, 7);
			func_98(iLocal_33, -1);
			func_97(iLocal_33, -1);
		}
	}
	attach_vehicle_to_trailer(iLocal_33, iLocal_32, 0.5f);
	set_model_as_no_longer_needed(joaat("armytrailer2"));
	set_model_as_no_longer_needed(joaat("packer"));
	set_model_as_no_longer_needed(joaat("bison2"));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108.f_9[0]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[0], true, 1);
			iLocal_35[0] = Global_88108.f_9[0];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[0], iLocal_302);
			func_96(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[0], true);
		}
		else
		{
			iLocal_35[0] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[0], iLocal_302);
			if (does_scenario_exist_in_area(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			set_blocking_of_non_temporary_events(iLocal_35[0], true);
			func_96(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108.f_9[1]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[1], true, 1);
			iLocal_35[1] = Global_88108.f_9[1];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[1], iLocal_302);
			func_96(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[1], true);
		}
		else
		{
			iLocal_35[1] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[1], iLocal_302);
			if (does_scenario_exist_in_area(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_96(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[1], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[2]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108.f_9[2]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[2], true, 1);
			iLocal_35[2] = Global_88108.f_9[2];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[2], iLocal_302);
			func_96(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[2], true);
		}
		else
		{
			iLocal_35[2] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[2], iLocal_302);
			if (does_scenario_exist_in_area(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_96(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[2], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108.f_9[3]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[3], true, 1);
			iLocal_35[3] = Global_88108.f_9[3];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[3], iLocal_302);
			func_96(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[3], true);
		}
		else
		{
			iLocal_35[3] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[3], iLocal_302);
			if (does_scenario_exist_in_area(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_96(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[3], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[4]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108.f_9[4]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[4], true, 1);
			iLocal_35[4] = Global_88108.f_9[4];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[4], iLocal_302);
			func_96(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[4], true);
		}
		else
		{
			iLocal_35[4] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[4], iLocal_302);
			if (does_scenario_exist_in_area(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_96(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[4], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108.f_9[5]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[5], true, 1);
			iLocal_35[5] = Global_88108.f_9[5];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[5], iLocal_302);
			func_96(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[5], true);
		}
		else
		{
			iLocal_35[5] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[5], iLocal_302);
			if (does_scenario_exist_in_area(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_96(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[5], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[6]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108.f_9[8]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[8], true, 1);
			iLocal_35[6] = Global_88108.f_9[8];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[6], iLocal_302);
			func_96(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			set_blocking_of_non_temporary_events(iLocal_35[6], true);
		}
		else
		{
			iLocal_35[6] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[6], iLocal_302);
			if (does_scenario_exist_in_area(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_96(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			set_blocking_of_non_temporary_events(iLocal_35[6], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108.f_9[6]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[6], true, 1);
			iLocal_43[0] = Global_88108.f_9[6];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_43[0], iLocal_303);
			func_96(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_43[0], true);
			give_weapon_to_ped(iLocal_43[0], joaat("weapon_pistol"), 100, false, false);
			set_ambient_voice_name(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_43[0] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_43[0], iLocal_303);
			func_96(iLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_43[0], true);
			give_weapon_to_ped(iLocal_43[0], joaat("weapon_pistol"), 100, false, false);
			set_ambient_voice_name(iLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108.f_9[7]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[7], true, 1);
			iLocal_43[1] = Global_88108.f_9[7];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_43[1], iLocal_303);
			func_96(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_43[1], true);
			give_weapon_to_ped(iLocal_43[1], joaat("weapon_pistol"), 100, false, false);
			set_ambient_voice_name(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_43[1] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_43[1], iLocal_303);
			func_96(iLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_43[1], true);
			give_weapon_to_ped(iLocal_43[1], joaat("weapon_pistol"), 100, false, false);
			set_ambient_voice_name(iLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	set_model_as_no_longer_needed(joaat("s_m_y_construct_01"));
	set_model_as_no_longer_needed(joaat("s_m_m_security_01"));
}

void func_96(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

void func_97(int iParam0, int iParam1)
{
	Global_55760 = iParam0;
	Global_55761 = iParam1;
}

void func_98(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55762 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (iParam1 == -1 || Global_67845[iVar0 /*9*/] == iParam1)
		{
			if (Global_67845[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67845[iVar0 /*9*/].f_6 = iParam0;
				Global_67845[iVar0 /*9*/].f_7 = 1;
				Global_67845[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_99()
{
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_63]) && does_entity_belong_to_this_script(iLocal_35[iLocal_63], 1))
		{
			delete_ped(&(iLocal_35[iLocal_63]));
		}
		iLocal_63++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]) && does_entity_belong_to_this_script(iLocal_43[0], 1))
	{
		delete_ped(&(iLocal_43[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]) && does_entity_belong_to_this_script(iLocal_43[1], 1))
	{
		delete_ped(&(iLocal_43[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_46) && does_entity_belong_to_this_script(iLocal_46, 1))
	{
		delete_ped(&iLocal_46);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47) && does_entity_belong_to_this_script(iLocal_47, 1))
	{
		delete_ped(&iLocal_47);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48) && does_entity_belong_to_this_script(iLocal_48, 1))
	{
		delete_ped(&iLocal_48);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_49) && does_entity_belong_to_this_script(iLocal_49, 1))
	{
		delete_ped(&iLocal_49);
	}
	if (!func_30())
	{
		set_entity_coords(PLAYER::PLAYER_PED_ID(), 519.1906f, -2980.994f, 5.0443f, 1, false, 0, 1);
		set_entity_heading(PLAYER::PLAYER_PED_ID(), 270.1911f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && does_entity_belong_to_this_script(iLocal_32, 1))
	{
		delete_vehicle(&iLocal_32);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_88108[3]))
	{
		set_entity_as_mission_entity(Global_88108[3], true, 0);
		delete_vehicle(&(Global_88108[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_33) && does_entity_belong_to_this_script(iLocal_33, 1))
	{
		delete_vehicle(&iLocal_33);
	}
	remove_anim_dict("cellphone@str");
	remove_anim_dict("misscarsteal4@director_grip");
	cancel_music_event("FHPRB_START");
	cancel_music_event("FHPRB_TRUCK");
	cancel_music_event("FHPRB_COPS");
	cancel_music_event("FHPRB_LOST");
	cancel_music_event("FHPRB_STOP");
	clear_area(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, false);
}

void func_100()
{
	if (does_blip_exist(iLocal_58))
	{
		remove_blip(&iLocal_58);
	}
	if (does_blip_exist(iLocal_59))
	{
		remove_blip(&iLocal_59);
	}
	if (does_blip_exist(iLocal_60))
	{
		remove_blip(&iLocal_60);
	}
	if (does_blip_exist(iLocal_61))
	{
		remove_blip(&iLocal_61);
	}
}

void func_101()
{
	Global_14578 = 0;
	func_102();
}

void func_102()
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

void func_103()
{
	func_120();
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_34();
			iLocal_304 = 0;
		}
		iLocal_305 = 0;
		iLocal_314 = 0;
		iLocal_469 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		set_max_wanted_level(5);
		remove_anim_dict("cellphone@str");
		remove_anim_dict("misscarsteal4@director_grip");
		if (!is_screen_faded_in())
		{
			load_scene(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1));
			do_screen_fade_in(800);
		}
		set_wanted_level_multiplier(1f);
		_0x293220DA1B46CEBC(10f, 5f, 4);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		func_119(&uLocal_137, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_119(&uLocal_137, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_119(&uLocal_137, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_119(&uLocal_137, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		iLocal_62 = 2;
	}
	if (iLocal_62 == 2)
	{
		if (get_player_wanted_level(player_id()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_109(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					_0x293220DA1B46CEBC(5f, 5f, 4);
					settimera(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_109(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					_0x293220DA1B46CEBC(5f, 5f, 4);
					settimera(0);
					iLocal_62 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_109(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					_0x293220DA1B46CEBC(5f, 5f, 4);
					settimera(0);
					iLocal_62 = 3;
				}
			}
		}
	}
	if (iLocal_62 == 3)
	{
		if (!does_blip_exist(iLocal_59))
		{
			if (!func_108())
			{
				if (timera() > 10500)
				{
					iLocal_59 = func_106(vLocal_116, 1);
				}
			}
		}
		if (func_108())
		{
			iLocal_62 = 4;
		}
	}
	if (iLocal_62 == 4)
	{
		if (get_player_wanted_level(player_id()) == 0)
		{
			if (is_vehicle_driveable(iLocal_33, 0))
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
				{
					if (is_vehicle_attached_to_trailer(iLocal_33))
					{
						if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_116, 4f, 4f, 2f, true, true, 2))
						{
							if (func_105(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								trigger_music_event("FHPRB_STOP");
								if (does_blip_exist(iLocal_59))
								{
									remove_blip(&iLocal_59);
								}
								_0x293220DA1B46CEBC(5f, 5f, 4);
								func_104(0, -1);
								iLocal_62 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55757)
	{
	}
	Global_55757 = 0;
	if (iParam0)
	{
		Global_55758 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67845[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_67845[iVar0 /*9*/] > 0)
			{
				if (Global_67845[iVar0 /*9*/] == iParam1)
				{
					Global_67845[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

bool func_105(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	disable_control_action(0, 71, 1);
	disable_control_action(0, 72, 1);
	disable_control_action(0, 76, 1);
	disable_control_action(0, 73, 1);
	disable_control_action(0, 59, 1);
	disable_control_action(0, 60, 1);
	if (iParam5)
	{
		disable_control_action(0, 75, 1);
	}
	disable_control_action(0, 80, 1);
	if (!iParam6)
	{
		disable_control_action(0, 69, 1);
		disable_control_action(0, 70, 1);
		disable_control_action(0, 68, 1);
	}
	disable_control_action(0, 74, 1);
	disable_control_action(0, 86, 1);
	disable_control_action(0, 81, 1);
	disable_control_action(0, 82, 1);
	disable_control_action(0, 138, 1);
	disable_control_action(0, 136, 1);
	disable_control_action(0, 114, 1);
	disable_control_action(0, 107, 1);
	disable_control_action(0, 110, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 87, 1);
	disable_control_action(0, 88, 1);
	disable_control_action(0, 113, 1);
	disable_control_action(0, 115, 1);
	disable_control_action(0, 116, 1);
	disable_control_action(0, 117, 1);
	disable_control_action(0, 118, 1);
	disable_control_action(0, 119, 1);
	disable_control_action(0, 131, 1);
	disable_control_action(0, 132, 1);
	disable_control_action(0, 123, 1);
	disable_control_action(0, 126, 1);
	disable_control_action(0, 129, 1);
	disable_control_action(0, 130, 1);
	disable_control_action(0, 133, 1);
	disable_control_action(0, 134, 1);
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

int func_106(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_107(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_107(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_108()
{
	if (Global_15712 == 0)
	{
		return true;
	}
	return false;
}

int func_109(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_118(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	if (iParam5 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	Global_2621441 = 0;
	return func_110(sParam3, iParam4, iParam8);
}

bool func_110(char* sParam0, int iParam1, int iParam2)
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
					func_102();
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
		if (func_117(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_116();
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
				func_115();
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
				if (func_114())
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
			if (func_113())
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
			func_112();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_111();
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
		func_102();
	}
	return false;
}

void func_111()
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

void func_112()
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

bool func_113()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_114()
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

void func_115()
{
	if (func_16(14))
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
		Global_14413 = func_14();
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

void func_116()
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

int func_117(int iParam0, int iParam1)
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

void func_118(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_119(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_120()
{
	if (is_vehicle_driveable(iLocal_33, 0))
	{
		if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
		{
			if (is_vehicle_attached_to_trailer(iLocal_33))
			{
				if (func_125("HELP_1"))
				{
					clear_help(1);
				}
				if (does_blip_exist(iLocal_58))
				{
					remove_blip(&iLocal_58);
				}
				if (does_blip_exist(iLocal_61))
				{
					if (iLocal_395 == 1)
					{
						if (GAMEPLAY::GET_GAME_TIMER() < iLocal_109 + 7500)
						{
							clear_prints();
						}
					}
					remove_blip(&iLocal_61);
				}
				if (iLocal_28 == 4)
				{
					if (get_player_wanted_level(player_id()) == 0)
					{
						if (iLocal_469 == 0)
						{
							cancel_music_event("FHPRB_COPS");
							trigger_music_event("FHPRB_LOST");
							iLocal_469 = 1;
						}
						if (iLocal_314 == 1)
						{
							if (GAMEPLAY::GET_GAME_TIMER() < iLocal_110 + 7500)
							{
								clear_prints();
							}
							iLocal_314 = 0;
						}
						if (iLocal_62 > 3)
						{
							if (!does_blip_exist(iLocal_59))
							{
								iLocal_59 = func_106(vLocal_116, 1);
							}
							if (iLocal_305 == 0)
							{
								if (!is_message_being_displayed())
								{
									func_124("GOD_2", 7500, 1);
									iLocal_305 = 1;
								}
							}
						}
					}
					else
					{
						if (does_blip_exist(iLocal_59))
						{
							remove_blip(&iLocal_59);
						}
						if (iLocal_314 == 0)
						{
							clear_prints();
							func_124("GOD_4", 7500, -1);
							trigger_music_event("FHPRB_COPS");
							iLocal_110 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_314 = 1;
							iLocal_469 = 0;
						}
					}
				}
			}
			else
			{
				if (does_blip_exist(iLocal_58))
				{
					remove_blip(&iLocal_58);
				}
				if (does_blip_exist(iLocal_59))
				{
					remove_blip(&iLocal_59);
				}
				if (is_vehicle_driveable(iLocal_32, 0))
				{
					if (!does_blip_exist(iLocal_61))
					{
						iLocal_61 = func_122(iLocal_32, 0, 0);
						set_blip_as_friendly(iLocal_61, true);
						if (is_message_being_displayed())
						{
							clear_prints();
						}
						if (iLocal_395 == 0)
						{
							func_124("GOD_6", 7500, -1);
							iLocal_109 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_395 = 1;
						}
						if (!func_125("HELP_1"))
						{
							func_121("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (does_blip_exist(iLocal_61))
			{
				remove_blip(&iLocal_61);
			}
			if (does_blip_exist(iLocal_59))
			{
				remove_blip(&iLocal_59);
			}
			if (is_vehicle_driveable(iLocal_33, 0))
			{
				if (!does_blip_exist(iLocal_58))
				{
					iLocal_58 = func_122(iLocal_33, 0, 0);
					set_blip_as_friendly(iLocal_58, true);
				}
			}
			if (iLocal_315 == 0)
			{
				clear_prints();
				func_124("GOD_5", 7500, -1);
				iLocal_315 = 1;
			}
		}
	}
}

void func_121(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	return func_123(iParam0, !iParam1, iParam2);
}

int func_123(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_107(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_107(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_107(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_124(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

int func_125(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_126()
{
	if (iLocal_62 > 1)
	{
		func_120();
	}
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_34();
			iLocal_304 = 0;
		}
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_402 = 0;
		iLocal_403 = 0;
		iLocal_404[0] = 0;
		iLocal_404[1] = 0;
		iLocal_407[0] = 0;
		iLocal_407[1] = 0;
		iLocal_410 = 0;
		iLocal_411 = 0;
		iLocal_412 = 0;
		iLocal_413 = 0;
		iLocal_414 = 0;
		iLocal_415 = 0;
		iLocal_416 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_427 = 0;
		iLocal_428 = 0;
		iLocal_429 = 0;
		iLocal_430 = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		iLocal_433[0] = 0;
		iLocal_433[1] = 0;
		iLocal_436[0] = 0;
		iLocal_436[1] = 0;
		iLocal_439[0] = 0;
		iLocal_439[1] = 0;
		iLocal_442[0] = 0;
		iLocal_442[1] = 0;
		iLocal_445[0] = 0;
		iLocal_445[1] = 0;
		iLocal_448[0] = 0;
		iLocal_448[1] = 0;
		iLocal_451[0] = 0;
		iLocal_451[1] = 0;
		iLocal_455 = 0;
		iLocal_458 = 0;
		iLocal_459[0] = 0;
		iLocal_462[0] = 0;
		iLocal_459[1] = 0;
		iLocal_462[1] = 0;
		iLocal_466 = 0;
		iLocal_467 = 0;
		iLocal_468 = 0;
		iLocal_482 = 0;
		iLocal_315 = 0;
		iLocal_316 = 0;
		iLocal_321 = 0;
		iLocal_387 = 0;
		iLocal_388 = 0;
		iLocal_389 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_393 = 0;
		iLocal_394 = 0;
		iLocal_395 = 0;
		iLocal_417 = 0;
		iLocal_465 = 0;
		iLocal_483 = 0;
		iLocal_487 = 0;
		iLocal_454 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		iLocal_63 = 0;
		while (iLocal_63 <= 6)
		{
			iLocal_306[iLocal_63] = 0;
			iLocal_355[iLocal_63] = 0;
			iLocal_371[iLocal_63] = 0;
			iLocal_379[iLocal_63] = 0;
			iLocal_363[iLocal_63] = 0;
			iLocal_63++;
		}
		request_anim_dict("cellphone@str");
		request_anim_dict("misscarsteal4@director_grip");
		if (is_vehicle_driveable(iLocal_33, 0))
		{
			if (!does_blip_exist(iLocal_58))
			{
				iLocal_58 = func_122(iLocal_33, 0, 0);
				set_blip_as_friendly(iLocal_58, true);
			}
		}
		set_max_wanted_level(0);
		if (is_screen_faded_out())
		{
			if (!func_30())
			{
				load_scene(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
			{
				func_27(iLocal_34, -1, 1);
				set_vehicle_as_no_longer_needed(&iLocal_34);
			}
			else
			{
				func_27(0, -1, 1);
			}
		}
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(800);
		}
		trigger_music_event("FHPRB_START");
		clear_area(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, false);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		if (iLocal_465 == 0)
		{
			if (!is_message_being_displayed())
			{
				_0x293220DA1B46CEBC(5f, 8f, 4);
				func_124("GOD_1", 7500, 1);
				iLocal_465 = 1;
			}
		}
		if (is_vehicle_driveable(iLocal_33, 0))
		{
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
			{
				trigger_music_event("FHPRB_TRUCK");
				if (does_blip_exist(iLocal_58))
				{
					remove_blip(&iLocal_58);
				}
				func_127(656, 0);
				set_wanted_level_multiplier(1f);
				iLocal_62 = 2;
			}
		}
	}
	if (iLocal_62 == 2)
	{
		if (is_vehicle_driveable(iLocal_33, 0))
		{
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
			{
				if (is_vehicle_attached_to_trailer(iLocal_33))
				{
					if (func_125("HELP_1"))
					{
						clear_help(1);
					}
					if (does_blip_exist(iLocal_58))
					{
						remove_blip(&iLocal_58);
					}
					if (does_blip_exist(iLocal_61))
					{
						remove_blip(&iLocal_61);
					}
					if (get_distance_between_coords(vLocal_119, vLocal_132, 1) < 100f)
					{
						if (get_player_wanted_level(player_id()) == 0)
						{
							if (iLocal_316 == 1)
							{
								if (GAMEPLAY::GET_GAME_TIMER() < iLocal_110 + 7500)
								{
									clear_prints();
									iLocal_316 = 0;
								}
							}
							if (iLocal_417 == 0)
							{
								_0x293220DA1B46CEBC(5f, 8f, 4);
								func_124("GOD_7", 7500, -1);
								iLocal_417 = 1;
							}
						}
						else if (iLocal_316 == 0)
						{
							_0x293220DA1B46CEBC(5f, 8f, 4);
							play_police_report("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_110 = GAMEPLAY::GET_GAME_TIMER();
							func_124("GOD_4", 7500, -1);
							iLocal_316 = 1;
						}
					}
					else if (get_player_wanted_level(player_id()) == 0)
					{
						iLocal_62 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (does_blip_exist(iLocal_58))
					{
						remove_blip(&iLocal_58);
					}
					if (is_vehicle_driveable(iLocal_32, 0))
					{
						if (!does_blip_exist(iLocal_61))
						{
							iLocal_61 = func_122(iLocal_32, 0, 0);
							set_blip_as_friendly(iLocal_61, true);
							if (is_message_being_displayed())
							{
								clear_prints();
							}
							if (iLocal_395 == 0)
							{
								func_124("GOD_6", 7500, -1);
								iLocal_395 = 1;
							}
							if (!func_125("HELP_1"))
							{
								func_121("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (does_blip_exist(iLocal_61))
				{
					remove_blip(&iLocal_61);
				}
				if (is_vehicle_driveable(iLocal_33, 0))
				{
					if (!does_blip_exist(iLocal_58))
					{
						iLocal_58 = func_122(iLocal_33, 0, 0);
						set_blip_as_friendly(iLocal_58, true);
					}
				}
				if (iLocal_315 == 0)
				{
					clear_prints();
					func_124("GOD_5", 7500, -1);
					iLocal_315 = 1;
				}
			}
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55759 = iParam0;
	if (!Global_55757)
	{
		Global_55757 = 1;
	}
	if (iParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_67845[iVar0 /*9*/] == iParam0)
			{
				Global_67845[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_128()
{
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_34();
			iLocal_304 = 0;
		}
		func_151();
		func_95();
		if (!is_screen_faded_in())
		{
			load_scene(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1));
			do_screen_fade_in(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_88108[3]))
		{
			if (is_vehicle_driveable(Global_88108[3], 0))
			{
				if (is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(Global_88108[3])))
				{
					set_entity_as_mission_entity(Global_88108[3], true, 1);
					func_130(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(Global_88108[3])) || is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(Global_88108[3]))) || is_this_model_a_bicycle(ENTITY::GET_ENTITY_MODEL(Global_88108[3]))) || is_this_model_a_quadbike(ENTITY::GET_ENTITY_MODEL(Global_88108[3])))
				{
					set_entity_as_mission_entity(Global_88108[3], true, 1);
					func_130(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_129(79);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
}

void func_129(int iParam0)
{
	if (Global_88533 != -1)
	{
		if (iParam0 == Global_88533)
		{
			Global_88537 = 1;
			return;
		}
	}
}

void func_130(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	auto uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_93091.f_4))
	{
		if (is_vehicle_driveable(Global_93091.f_4, 0))
		{
			if (func_150(24) != Global_93091.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_147(get_entity_coords(Global_93091.f_4, 1), iParam5, &vVar0, &uVar3))
					{
						vParam0 = {vVar0};
						fParam3 = uVar3;
					}
				}
				func_131(Global_93091.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_131(int iParam0, Vector3 vParam1, Vector3 fParam2, int iParam3, int iParam4)
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[25]) && is_vehicle_driveable(Global_68319.f_484[25], 0))
			{
				if (Global_68319.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!iParam6)
		{
			if ((is_big_vehicle(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_146(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_40(iParam0, &Var0);
		if (func_86(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = {get_entity_coords(iParam0, 1)};
			fParam4 = get_entity_heading(iParam0);
		}
		if (iParam5 == 24)
		{
			if (get_hash_key(get_this_script_name()) != joaat("vehicle_gen_controller"))
			{
				Global_69307 = get_hash_key(get_this_script_name());
			}
		}
		func_144(iParam5, &Var0, vParam1, fParam4, func_57(iParam0));
		func_132(iParam5, iParam0, 0);
	}
}

void func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_67(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 12) && !is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68319.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_69226 != -1 && Global_69226 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (is_vehicle_driveable(iParam1, 0))
		{
			if (!is_entity_a_mission_entity(iParam1))
			{
				set_entity_as_mission_entity(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_101154.f_18807.f_4801 = func_133();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_150(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && is_vehicle_driveable(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
			}
		}
	}
}

auto func_133()
{
	auto uVar0;
	
	func_143(&uVar0, get_clock_seconds());
	func_142(&uVar0, get_clock_minutes());
	func_141(&uVar0, get_clock_hours());
	func_136(&uVar0, get_clock_day_of_month());
	func_135(&uVar0, get_clock_month());
	func_134(&uVar0, get_clock_year());
	return uVar0;
}

void func_134(auto uParam0, int iParam1)
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

void func_135(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_136(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_140(*uParam0);
	iVar1 = func_138(*uParam0);
	if (iParam1 < 1 || iParam1 > func_137(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_137(int iParam0, int iParam1)
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

auto func_138(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_139(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_139(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_140(auto uParam0)
{
	return uParam0 & 15;
}

void func_141(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_142(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_143(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_144(int iParam0, auto uParam1, Vector3 vParam2, Vector3 fParam3, int iParam4)
{
	if (func_67(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_145(iParam0);
			func_64(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
			if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 11))
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_60(iParam0, 1);
		}
	}
}

void func_145(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_67(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
		{
			set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
			set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_60(iParam0, 0);
		}
	}
}

void func_146(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_145(iParam0);
	func_60(iParam0, 0);
}

bool func_147(Vector3 vParam0, int iParam1, auto uParam2, auto uParam3)
{
	int iVar0;
	
	iVar0 = func_148(vParam0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = {-827.351f, 157.785f, 68.2143f};
			*uParam5 = 85.1509f;
			return true;
			break;
		
		case 1:
		case 2:
			*uParam4 = {1992.523f, 3813.916f, 31.1008f};
			*uParam5 = 122.1498f;
			return true;
			break;
		
		case 3:
			*uParam4 = {-1184.258f, -1496.556f, 3.3895f};
			*uParam5 = 303.2098f;
			return true;
			break;
		
		case 4:
			*uParam4 = {118.1067f, -1325.906f, 28.3706f};
			*uParam5 = 123.5016f;
			return true;
			break;
		
		case 5:
			*uParam4 = {-18.118f, -1455.126f, 29.5004f};
			*uParam5 = 273.2822f;
			return true;
			break;
		
		case 6:
			*uParam4 = {1.5947f, 543.4017f, 173.4644f};
			*uParam5 = 310.7556f;
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

int func_148(Vector3 vParam0, int iParam1, int iParam2)
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
				if (func_149(iVar0) || iParam4 == 0)
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

int func_149(int iParam0)
{
	return is_bit_set(Global_101154.f_5919[iParam0], false);
}

int func_150(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

void func_151()
{
	Global_85789 = 1;
}

void func_152()
{
	set_all_random_peds_flee(player_id(), 1);
	set_wanted_level_multiplier(0.01f);
	iLocal_53 = add_scenario_blocking_area(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	iLocal_54 = add_scenario_blocking_area(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	iLocal_55 = add_scenario_blocking_area(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	iLocal_56 = add_scenario_blocking_area(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	iLocal_51 = add_scenario_blocking_area(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	iLocal_52 = add_scenario_blocking_area(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29())
	{
		if (Global_85788 == 1)
		{
			func_154(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_483 = 1;
			iLocal_304 = 1;
			iLocal_62 = 0;
			iLocal_28 = 5;
		}
		else if (func_153() == 0)
		{
			if (func_94() && func_91(7f, 7f, 7f, 1))
			{
				func_154(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_154(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_304 = 1;
			iLocal_483 = 1;
			iLocal_62 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_189(0))
	{
		iLocal_304 = 1;
		iLocal_483 = 1;
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_62 = 0;
		iLocal_28 = 2;
	}
}

int func_153()
{
	if (!Global_91278 == 10 && !Global_91278 == 9)
	{
		return 0;
	}
	return Global_91278.f_2;
}

void func_154(Vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_29())
	{
		set_this_script_can_be_paused(0);
		clear_bit(&(Global_91278.f_20), 2);
		set_game_paused(true);
		if (is_player_playing(player_id()))
		{
			set_player_control(player_id(), false, 0);
		}
		Global_91274 = {vParam0};
		Global_91277 = fParam3;
		Global_91273 = 1;
		if (iParam4 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 14);
		}
		else
		{
			clear_bit(&(Global_91278.f_20), 14);
		}
		if (iParam5 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 24);
		}
		else
		{
			clear_bit(&(Global_91278.f_20), 24);
		}
		func_28(1);
	}
}

void func_155()
{
	if (!func_29())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_156()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_49))
	{
		if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			request_model(joaat("s_m_m_security_01"));
			if (has_model_loaded(joaat("s_m_m_security_01")))
			{
				iLocal_49 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_49, 324, true);
			}
			set_model_as_no_longer_needed(joaat("s_m_m_security_01"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
	{
		if (!PED::IS_PED_INJURED(iLocal_49))
		{
			if (does_scenario_exist_in_area(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_456 == 0)
				{
					if (is_entity_on_screen(iLocal_49))
					{
						clear_ped_tasks(iLocal_49);
					}
					else
					{
						clear_ped_tasks_immediately(iLocal_49);
					}
					task_use_nearest_scenario_to_coord(iLocal_49, 65.2f, -617.2f, 31f, 2f, 0);
					set_ped_keep_task(iLocal_49, true);
					iLocal_113 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_456 = 1;
				}
				else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_113 + 5000)
				{
					if (!is_ped_using_any_scenario(iLocal_49))
					{
						iLocal_456 = 0;
					}
				}
			}
			if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_49, 1) < 20f)
			{
				if (iLocal_421 == 0)
				{
					task_look_at_entity(iLocal_49, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_421 = 1;
				}
			}
			else if (iLocal_421 == 1)
			{
				task_look_at_entity(iLocal_49, PLAYER::PLAYER_PED_ID(), 1, 0, 2);
				iLocal_421 = 0;
			}
		}
	}
	if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_457 == 0)
		{
			iLocal_114 = 498972213;
			iLocal_115 = -512924631;
			add_door_to_system(iLocal_114, -1184516519, 61f, -633f, 32f, 1, 1, 0);
			add_door_to_system(iLocal_115, -1184516519, 66f, -618f, 32f, 1, 1, 0);
			iLocal_457 = 1;
		}
		if (iLocal_457 == 1)
		{
			if (get_player_wanted_level(player_id()) == 0)
			{
				if (vLocal_119.x > 35f)
				{
					if (fLocal_135 < 1f)
					{
						fLocal_135 += 0.02f;
					}
					else
					{
						fLocal_135 = 1f;
					}
					if (fLocal_135 <= 1f)
					{
						_set_door_ajar_angle(iLocal_114, fLocal_135, 0, 1);
						_set_door_ajar_angle(iLocal_115, fLocal_135, 0, 1);
						_set_door_acceleration_limit(iLocal_114, 4, 0, 1);
						_set_door_acceleration_limit(iLocal_115, 4, 0, 1);
						iLocal_422 = 0;
					}
				}
				if (vLocal_119.x < 35f)
				{
					if (fLocal_135 > 0f)
					{
						fLocal_135 -= 0.02f;
					}
					else
					{
						fLocal_135 = 0f;
					}
					if (fLocal_135 >= 0f)
					{
						_set_door_ajar_angle(iLocal_114, fLocal_135, 0, 1);
						_set_door_ajar_angle(iLocal_115, fLocal_135, 0, 1);
						_set_door_acceleration_limit(iLocal_114, 4, 0, 1);
						_set_door_acceleration_limit(iLocal_115, 4, 0, 1);
						iLocal_422 = 0;
					}
				}
			}
			else if (iLocal_422 == 0)
			{
				if (vLocal_119.x < 35f)
				{
					if (fLocal_135 > 0f)
					{
						fLocal_135 -= 0.02f;
					}
					else
					{
						fLocal_135 = 0f;
					}
					if (fLocal_135 >= 0f)
					{
						_set_door_ajar_angle(iLocal_114, fLocal_135, 0, 1);
						_set_door_ajar_angle(iLocal_115, fLocal_135, 0, 1);
						_set_door_acceleration_limit(iLocal_114, 4, 0, 1);
						_set_door_acceleration_limit(iLocal_115, 4, 0, 1);
						iLocal_422 = 1;
					}
				}
			}
		}
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, true, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
			{
				if (!PED::IS_PED_INJURED(iLocal_49))
				{
					if (get_player_wanted_level(player_id()) == 0)
					{
						if (iLocal_419 == 0)
						{
							if (iLocal_418 == 0)
							{
								func_119(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
								if (func_157(&uLocal_137, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_418 = 1;
								}
							}
						}
						else if (iLocal_420 == 0)
						{
							func_119(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
							if (func_157(&uLocal_137, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_420 = 1;
							}
						}
					}
					else if (iLocal_419 == 0)
					{
						func_119(&uLocal_137, 4, iLocal_49, "FHPBSecGuard", 0, 1);
						if (func_157(&uLocal_137, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_419 = 1;
						}
					}
				}
			}
		}
	}
}

int func_157(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_118(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_110(sParam2, iParam3, 0);
}

float func_158(int iParam0, int iParam1, int iParam2)
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

void func_159()
{
	int iVar0;
	
	if (!is_message_being_displayed())
	{
		if (!func_163() || !is_subtitle_preference_switched_on())
		{
			if (iLocal_28 == 3)
			{
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 0)
							{
								if (func_161() && func_160())
								{
									if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_112 = GAMEPLAY::GET_GAME_TIMER();
										iLocal_392 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 1 && GAMEPLAY::GET_GAME_TIMER() > iLocal_112 + 7000)
							{
								if (func_161() && func_160())
								{
									if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_112 = GAMEPLAY::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_430 == 0)
						{
							if (func_161())
							{
								if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_95 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_430 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_455 == 0)
					{
						if (func_161() && func_160())
						{
							if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_455 = 1;
							}
						}
					}
					else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_108 + 8000)
					{
						if (func_161() && func_160())
						{
							if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_391 == 0)
					{
						func_101();
						if (func_161())
						{
							get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_157(&uLocal_137, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_77 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_387 = 1;
									iLocal_391 = 1;
								}
							}
							else
							{
								iLocal_77 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_387 = 1;
								iLocal_391 = 1;
							}
						}
					}
					if (iLocal_391 == 1)
					{
						if (iLocal_387 == 0)
						{
							iLocal_77 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_387 = 1;
						}
						if (iLocal_387 == 1)
						{
							if (GAMEPLAY::GET_GAME_TIMER() > iLocal_77 + 9000)
							{
								if (func_161())
								{
									if (func_157(&uLocal_137, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_387 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_427 == 1)
					{
						if (iLocal_389 == 0)
						{
							if (iLocal_390 == 1)
							{
								if (func_161())
								{
									if (func_157(&uLocal_137, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_389 = 1;
									}
								}
							}
						}
					}
					if (iLocal_388 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
						{
							if (is_vehicle_driveable(iLocal_33, 0))
							{
								if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
								{
									if (func_161())
									{
										if (func_157(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = GAMEPLAY::GET_GAME_TIMER();
											iLocal_389 = 1;
										}
									}
								}
							}
						}
					}
					if (GAMEPLAY::GET_GAME_TIMER() > iLocal_78 + 10000)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
						{
							if (is_vehicle_driveable(iLocal_33, 0))
							{
								if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 0))
								{
									if (func_161())
									{
										if (func_157(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = GAMEPLAY::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					if (iLocal_428 == 1)
					{
						if (iLocal_429 == 0)
						{
							if (func_161())
							{
								if (func_157(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_429 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_160()
{
	if (func_14() == 0)
	{
		func_119(&uLocal_137, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		return true;
	}
	if (func_14() == 1)
	{
		func_119(&uLocal_137, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		return true;
	}
	if (func_14() == 2)
	{
		func_119(&uLocal_137, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		return true;
	}
	return false;
}

bool func_161()
{
	int iVar0;
	
	iLocal_66 = 0;
	while (iLocal_66 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_66]))
		{
			if (!PED::IS_PED_INJURED(iLocal_35[iLocal_66]))
			{
				iVar0 = func_162(PLAYER::PLAYER_PED_ID(), iLocal_302, 0, 0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_66] && func_158(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 15f)
				{
					func_119(&uLocal_137, 5, iLocal_35[iLocal_66], "CONSTRUCTION3", 0, 1);
					return true;
				}
			}
		}
		iLocal_66++;
	}
	return false;
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int[] iVar0 = new int[16];
	int iVar17;
	
	iVar17 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		get_ped_nearby_peds(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= iVar0 - 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar17]))
				{
					if (get_ped_relationship_group_hash(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (is_entity_on_screen(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2 <= iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17 + iParam2]))
							{
								if (!PED::IS_PED_INJURED(iVar0[iVar17 + iParam2]))
								{
									if (get_ped_relationship_group_hash(iVar0[iVar17 + iParam2]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (is_entity_on_screen(iVar0[iVar17 + iParam2]))
											{
												return iVar0[iVar17 + iParam2];
											}
										}
										else
										{
											return iVar0[iVar17 + iParam2];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

bool func_163()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_164()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_current_weapon_silenced(PLAYER::PLAYER_PED_ID()) && is_ped_shooting(PLAYER::PLAYER_PED_ID()))
		{
			set_wanted_level_multiplier(0f);
		}
		else
		{
			set_wanted_level_multiplier(1f);
		}
	}
	func_171();
	if (iLocal_404[0])
	{
		if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 20f && _0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_433[0] == 0)
			{
				task_look_at_entity(iLocal_43[0], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_433[0] = 1;
			}
			if (iLocal_433[0] == 1)
			{
				if (get_script_task_status(iLocal_43[0], 150319005) != 0 || get_script_task_status(iLocal_43[0], 150319005) != 1)
				{
					iLocal_433[0] = 0;
				}
			}
		}
		else if (iLocal_433[0] == 1)
		{
			task_look_at_entity(iLocal_43[0], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_433[0] = 0;
		}
	}
	if (iLocal_404[1])
	{
		if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 20f && _0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_433[1] == 0)
			{
				task_look_at_entity(iLocal_43[1], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_433[1] = 1;
			}
			if (iLocal_433[1] == 1)
			{
				if (get_script_task_status(iLocal_43[1], 150319005) != 0 || get_script_task_status(iLocal_43[1], 150319005) != 1)
				{
					iLocal_433[1] = 0;
				}
			}
		}
		else if (iLocal_433[1] == 1)
		{
			task_look_at_entity(iLocal_43[1], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_433[1] = 0;
		}
	}
	if (iLocal_404[0] && iLocal_404[1])
	{
		if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1))
		{
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
		else
		{
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}
	else
	{
		if (iLocal_404[0] && !iLocal_404[1])
		{
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
		if (iLocal_404[1] && !iLocal_404[0])
		{
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (does_scenario_group_exist("SCRAP_SECURITY"))
			{
				if (!is_scenario_group_enabled("SCRAP_SECURITY"))
				{
					set_scenario_group_enabled("SCRAP_SECURITY", true);
				}
				if (is_scenario_group_enabled("SCRAP_SECURITY"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_43[0]))
						{
							if (!is_ped_being_stealth_killed(iLocal_43[0]))
							{
								if (does_scenario_exist_in_area(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
									if (!is_ped_active_in_scenario(iLocal_43[0]))
									{
										if (iLocal_462[0] == 0)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_459[0] = 0;
											iLocal_462[0] = 1;
										}
									}
								}
								else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_105[0] + 2000)
								{
									if (get_distance_between_coords(get_entity_coords(iLocal_43[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_459[0] == 0)
										{
											task_follow_nav_mesh_to_coord(iLocal_43[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 0.25f, 0, 1193033728);
											iLocal_462[0] = 0;
											iLocal_459[0] = 1;
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_43[1]))
						{
							if (!is_ped_being_stealth_killed(iLocal_43[1]))
							{
								if (does_scenario_exist_in_area(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
									if (!is_ped_active_in_scenario(iLocal_43[1]))
									{
										if (iLocal_462[1] == 0)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_459[1] = 0;
											iLocal_462[1] = 1;
										}
									}
								}
								else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_105[1] + 2000)
								{
									if (get_distance_between_coords(get_entity_coords(iLocal_43[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_459[1] == 0)
										{
											task_follow_nav_mesh_to_coord(iLocal_43[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 0.25f, 0, 1193033728);
											iLocal_462[1] = 0;
											iLocal_459[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_43[0]))
				{
					if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 20f)
					{
						if ((func_170(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) || func_169(0))
						{
							if (is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 100f) || _0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()))
							{
								if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, true, 0) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
								{
									if (iLocal_451[0] == 0)
									{
										if (!is_ped_facing_ped(iLocal_43[0], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!is_entity_on_screen(iLocal_43[0]))
											{
												clear_ped_tasks_immediately(iLocal_43[0]);
											}
											else
											{
												clear_ped_tasks(iLocal_43[0]);
											}
											task_turn_ped_to_face_entity(iLocal_43[0], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_102[0] = GAMEPLAY::GET_GAME_TIMER();
											func_168(iLocal_43[0]);
											iLocal_451[0] = 1;
										}
									}
									if (iLocal_451[0] == 1)
									{
										if (GAMEPLAY::GET_GAME_TIMER() > iLocal_102[0] + 5000)
										{
											iLocal_451[0] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_166(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_82 = GAMEPLAY::GET_GAME_TIMER();
											iLocal_403 = 1;
										}
										else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_82 + 15000)
										{
											func_166(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_82 = GAMEPLAY::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_407[0] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_166(iLocal_43[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_410 = 1;
											}
											else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_88 + 15000)
											{
												func_166(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = GAMEPLAY::GET_GAME_TIMER();
											}
										}
										if (iLocal_407[1] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_166(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_411 = 1;
											}
											else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_89 + 15000)
											{
												func_166(iLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = GAMEPLAY::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_43[1]))
				{
					if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 15f)
					{
						if ((func_170(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) || func_169(0))
						{
							if (is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 100f))
							{
								if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, true, 0))
								{
									if (iLocal_451[1] == 0)
									{
										if (!is_ped_facing_ped(iLocal_43[1], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!is_entity_on_screen(iLocal_43[1]))
											{
												clear_ped_tasks_immediately(iLocal_43[1]);
											}
											else
											{
												clear_ped_tasks(iLocal_43[1]);
											}
											task_turn_ped_to_face_entity(iLocal_43[1], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_102[1] = GAMEPLAY::GET_GAME_TIMER();
											func_168(iLocal_43[1]);
											iLocal_451[1] = 1;
										}
									}
									if (iLocal_451[1] == 1)
									{
										if (GAMEPLAY::GET_GAME_TIMER() > iLocal_102[1] + 5000)
										{
											iLocal_451[1] = 0;
										}
									}
									if (iLocal_407[0] == 0 && iLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_166(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_82 = GAMEPLAY::GET_GAME_TIMER();
											iLocal_403 = 1;
										}
										else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_82 + 15000)
										{
											func_166(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_82 = GAMEPLAY::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_407[1] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_166(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_88 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_410 = 1;
											}
											else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_88 + 15000)
											{
												func_166(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_88 = GAMEPLAY::GET_GAME_TIMER();
											}
										}
										if (iLocal_407[0] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_166(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_89 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_411 = 1;
											}
											else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_89 + 15000)
											{
												func_166(iLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_89 = GAMEPLAY::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (func_165() || iLocal_398 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_43[0]))
					{
						if (_0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_99[0] = GAMEPLAY::GET_GAME_TIMER();
							iLocal_445[0] = 1;
							if (iLocal_442[0] == 0)
							{
								if (is_entity_on_screen(iLocal_43[0]))
								{
									clear_ped_tasks(iLocal_43[0]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_43[0]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_43[0], 50, true);
								task_combat_ped(iLocal_43[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_168(iLocal_43[0]);
								iLocal_442[0] = 1;
							}
						}
						else if (iLocal_448[0] == 0)
						{
							if (iLocal_445[0] == 0)
							{
								if (is_entity_on_screen(iLocal_43[0]))
								{
									clear_ped_tasks(iLocal_43[0]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_43[0]);
								}
								task_follow_nav_mesh_to_coord(iLocal_43[0], get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 0.25f, 0, 1193033728);
								func_168(iLocal_43[0]);
								iLocal_448[0] = 1;
							}
							if (iLocal_445[0] == 1)
							{
								if (GAMEPLAY::GET_GAME_TIMER() > iLocal_99[0] + 500)
								{
									if (is_entity_on_screen(iLocal_43[0]))
									{
										clear_ped_tasks(iLocal_43[0]);
									}
									else
									{
										clear_ped_tasks_immediately(iLocal_43[0]);
									}
									task_follow_nav_mesh_to_coord(iLocal_43[0], get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 0.25f, 0, 1193033728);
									func_168(iLocal_43[0]);
									iLocal_448[0] = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_43[1]))
					{
						if (_0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_99[1] = GAMEPLAY::GET_GAME_TIMER();
							iLocal_445[1] = 1;
							if (iLocal_442[1] == 0)
							{
								if (is_entity_on_screen(iLocal_43[1]))
								{
									clear_ped_tasks(iLocal_43[1]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_43[1]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_43[1], 50, true);
								task_combat_ped(iLocal_43[1], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_168(iLocal_43[1]);
								iLocal_442[1] = 1;
							}
						}
						else if (iLocal_448[1] == 0)
						{
							if (iLocal_445[1] == 0)
							{
								if (is_entity_on_screen(iLocal_43[1]))
								{
									clear_ped_tasks(iLocal_43[1]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_43[1]);
								}
								task_follow_nav_mesh_to_coord(iLocal_43[1], get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 0.25f, 0, 1193033728);
								func_168(iLocal_43[1]);
								iLocal_448[1] = 1;
							}
							if (iLocal_445[1] == 1)
							{
								if (GAMEPLAY::GET_GAME_TIMER() > iLocal_99[1] + 500)
								{
									if (is_entity_on_screen(iLocal_43[1]))
									{
										clear_ped_tasks(iLocal_43[1]);
									}
									else
									{
										clear_ped_tasks_immediately(iLocal_43[1]);
									}
									task_follow_nav_mesh_to_coord(iLocal_43[1], get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 0.25f, 0, 1193033728);
									func_168(iLocal_43[1]);
									iLocal_448[1] = 1;
								}
							}
						}
					}
				}
				if (func_165())
				{
					if (iLocal_412 == 0)
					{
						if (get_player_wanted_level(player_id()) < 2)
						{
							set_max_wanted_level(5);
							set_wanted_level_multiplier(1f);
							set_player_wanted_level(player_id(), 2, 0);
							set_player_wanted_level_now(player_id(), 0);
							iLocal_412 = 1;
						}
					}
					if (iLocal_399 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 20f)
							{
								if (!is_ambient_speech_playing(iLocal_43[0]))
								{
									func_166(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_87 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_401 = 1;
								}
							}
						}
						else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_87 + 7000)
						{
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 20f)
							{
								if (!is_ambient_speech_playing(iLocal_43[0]))
								{
									func_166(iLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_87 = GAMEPLAY::GET_GAME_TIMER();
								}
							}
						}
					}
					if (iLocal_400 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 20f)
							{
								if (!is_ambient_speech_playing(iLocal_43[1]))
								{
									func_166(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_401 = 1;
								}
							}
						}
						else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_87 + 7000)
						{
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 20f)
							{
								if (!is_ambient_speech_playing(iLocal_43[1]))
								{
									func_166(iLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = GAMEPLAY::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_458 == 0)
					{
						iLocal_50 = func_162(PLAYER::PLAYER_PED_ID(), -1533126372, 0, 0, 28);
						if (iLocal_50 != 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
							{
								if (!PED::IS_PED_INJURED(iLocal_50))
								{
									if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_50, 1) < 35f)
									{
										iLocal_458 = 1;
									}
								}
							}
						}
					}
					if (get_player_wanted_level(player_id()) > 0 && iLocal_458 == 0)
					{
						if (iLocal_399 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 20f)
								{
									if (!is_ambient_speech_playing(iLocal_43[0]))
									{
										func_166(iLocal_43[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = GAMEPLAY::GET_GAME_TIMER();
										iLocal_402 = 1;
									}
								}
							}
							else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_86 + 7000)
							{
								if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 20f)
								{
									if (!is_ambient_speech_playing(iLocal_43[0]))
									{
										func_166(iLocal_43[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = GAMEPLAY::GET_GAME_TIMER();
									}
								}
							}
						}
						if (iLocal_400 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 20f)
								{
									if (!is_ambient_speech_playing(iLocal_43[1]))
									{
										func_166(iLocal_43[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = GAMEPLAY::GET_GAME_TIMER();
										iLocal_402 = 1;
									}
								}
							}
							else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_86 + 7000)
							{
								if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 20f)
								{
									if (!is_ambient_speech_playing(iLocal_43[1]))
									{
										func_166(iLocal_43[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = GAMEPLAY::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
			if (!func_165())
			{
				if (iLocal_414 == 0)
				{
					if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_43[0]))
							{
								if (_0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_81 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_414 = 1;
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_43[1]))
							{
								if (_0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_81 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_414 = 1;
								}
							}
						}
					}
				}
				if (iLocal_398 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_43[0]))
						{
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) > 4f)
							{
								if (_0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_436[0] == 0)
									{
										if (is_entity_on_screen(iLocal_43[0]))
										{
											clear_ped_tasks(iLocal_43[0]);
										}
										else
										{
											clear_ped_tasks_immediately(iLocal_43[0]);
										}
										task_go_to_entity(iLocal_43[0], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 2f, 0);
										func_168(iLocal_43[0]);
										iLocal_436[0] = 1;
									}
									iLocal_96[0] = GAMEPLAY::GET_GAME_TIMER();
								}
								else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_96[0] + 500)
								{
									if (iLocal_439[0] == 0)
									{
										if (is_entity_on_screen(iLocal_43[0]))
										{
											clear_ped_tasks(iLocal_43[0]);
										}
										else
										{
											clear_ped_tasks_immediately(iLocal_43[0]);
										}
										task_follow_nav_mesh_to_coord(iLocal_43[0], get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 2f, -1, 0.25f, 0, 1193033728);
										func_168(iLocal_43[0]);
										iLocal_439[0] = 1;
									}
								}
							}
							else if (iLocal_484[0] == 0)
							{
								if (is_entity_on_screen(iLocal_43[0]))
								{
									clear_ped_tasks(iLocal_43[0]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_43[0]);
								}
								open_sequence_task(&iLocal_57);
								task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
								task_stand_still(false, 2000);
								set_sequence_to_repeat(iLocal_57, 1);
								close_sequence_task(iLocal_57);
								task_perform_sequence(iLocal_43[0], iLocal_57);
								clear_sequence_task(&iLocal_57);
								func_168(iLocal_43[0]);
								iLocal_484[0] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_43[0]))
											{
												func_166(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_83 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_84 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_81 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[0] = 1;
											}
										}
									}
									else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_83 + 7000)
									{
										if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_43[0]))
											{
												func_166(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_83 = GAMEPLAY::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_43[0]))
											{
												func_166(iLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_84 + 7000)
							{
								if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 15f)
								{
									if (!is_ambient_speech_playing(iLocal_43[0]))
									{
										func_166(iLocal_43[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_84 = GAMEPLAY::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_43[1]))
						{
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) > 4f)
							{
								if (_0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_436[1] == 0)
									{
										if (is_entity_on_screen(iLocal_43[1]))
										{
											clear_ped_tasks(iLocal_43[1]);
										}
										else
										{
											clear_ped_tasks_immediately(iLocal_43[1]);
										}
										task_go_to_entity(iLocal_43[1], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 2f, 0);
										func_168(iLocal_43[1]);
										iLocal_436[1] = 1;
									}
									iLocal_96[1] = GAMEPLAY::GET_GAME_TIMER();
								}
								else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_96[1] + 500)
								{
									if (iLocal_439[1] == 0)
									{
										if (is_entity_on_screen(iLocal_43[1]))
										{
											clear_ped_tasks(iLocal_43[1]);
										}
										else
										{
											clear_ped_tasks_immediately(iLocal_43[1]);
										}
										task_follow_nav_mesh_to_coord(iLocal_43[1], get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 2f, -1, 0.25f, 0, 1193033728);
										func_168(iLocal_43[1]);
										iLocal_439[1] = 1;
									}
								}
							}
							else if (iLocal_484[1] == 0)
							{
								if (is_entity_on_screen(iLocal_43[1]))
								{
									clear_ped_tasks(iLocal_43[1]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_43[1]);
								}
								open_sequence_task(&iLocal_57);
								task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
								task_stand_still(false, 2000);
								set_sequence_to_repeat(iLocal_57, 1);
								close_sequence_task(iLocal_57);
								task_perform_sequence(iLocal_43[1], iLocal_57);
								clear_sequence_task(&iLocal_57);
								func_168(iLocal_43[1]);
								iLocal_484[1] = 1;
							}
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_43[1]))
											{
												func_166(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_83 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_85 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_81 = GAMEPLAY::GET_GAME_TIMER();
												iLocal_414 = 1;
												iLocal_397 = 1;
												iLocal_407[1] = 1;
											}
										}
									}
									else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_83 + 7000)
									{
										if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_43[1]))
											{
												func_166(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_83 = GAMEPLAY::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_43[1]))
											{
												func_166(iLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_85 + 7000)
							{
								if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 10f)
								{
									if (!is_ambient_speech_playing(iLocal_43[1]))
									{
										func_166(iLocal_43[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_85 = GAMEPLAY::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_454 == 0)
						{
							if (GAMEPLAY::GET_GAME_TIMER() > iLocal_81 + 22000)
							{
								iLocal_454 = 1;
							}
						}
					}
					if (iLocal_414 == 1)
					{
						if (iLocal_398 == 0)
						{
							if (GAMEPLAY::GET_GAME_TIMER() > iLocal_81 + 30000)
							{
								set_player_wanted_level(player_id(), 2, 0);
								iLocal_398 = 1;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
					{
						if (is_vehicle_driveable(iLocal_33, 0))
						{
							if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 1))
							{
								if (_0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()) || _0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_398 = 1;
								}
							}
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_33, 1) < 5f && is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID()))
							{
								if (_0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()) || _0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_398 = 1;
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_43[0]))
						{
							if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
							{
								if (_0xDCCA191DF9980FD7(PLAYER::PLAYER_PED_ID()))
								{
									if (_0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_398 = 1;
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_43[1]))
						{
							if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
							{
								if (_0xDCCA191DF9980FD7(PLAYER::PLAYER_PED_ID()))
								{
									if (_0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_398 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

bool func_165()
{
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_80 = 0;
		while (iLocal_80 <= 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_80]))
			{
				if (!PED::IS_PED_INJURED(iLocal_35[iLocal_80]))
				{
					if (func_170(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_169(0))
					{
						if (_0x6CD5A433374D4CFB(iLocal_35[iLocal_80], PLAYER::PLAYER_PED_ID()))
						{
							return true;
						}
					}
				}
			}
			iLocal_80++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_43[0]))
			{
				if (func_170(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_169(0))
				{
					if (_0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()))
					{
						return true;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_43[1]))
			{
				if (func_170(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_169(0))
				{
					if (_0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_166(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_167(iParam3), 0);
}

int func_167(int iParam0)
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

void func_168(int iParam0)
{
	if (iParam0 == iLocal_43[0])
	{
		iLocal_433[0] = 0;
		iLocal_459[0] = 0;
		iLocal_462[0] = 0;
		iLocal_451[0] = 0;
		iLocal_442[0] = 0;
		iLocal_448[0] = 0;
		iLocal_436[0] = 0;
		iLocal_439[0] = 0;
		iLocal_484[0] = 0;
	}
	if (iParam0 == iLocal_43[1])
	{
		iLocal_433[1] = 0;
		iLocal_459[1] = 0;
		iLocal_462[1] = 0;
		iLocal_451[1] = 0;
		iLocal_442[1] = 0;
		iLocal_448[1] = 0;
		iLocal_436[1] = 0;
		iLocal_439[1] = 0;
		iLocal_484[1] = 0;
	}
}

bool func_169(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (is_bit_set(Global_2283, 14))
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

auto func_170(int iParam0)
{
	auto uVar0;
	
	get_current_ped_weapon(iParam0, &uVar0, 1);
	return uVar0;
}

void func_171()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vLocal_119 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_43[0]))
		{
			vLocal_125[0 /*3*/] = {get_entity_coords(iLocal_43[0], 1)};
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_43[1]))
		{
			vLocal_125[1 /*3*/] = {get_entity_coords(iLocal_43[1], 1)};
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_43[0]))
		{
			iLocal_404[0] = 1;
		}
		else
		{
			iLocal_404[0] = 0;
		}
	}
	else
	{
		iLocal_404[0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_43[1]))
		{
			iLocal_404[1] = 1;
		}
		else
		{
			iLocal_404[1] = 0;
		}
	}
	else
	{
		iLocal_404[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_404[0] == 1)
			{
				if (iLocal_404[1] == 1)
				{
					if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1))
					{
						if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 20f)
						{
							if (((vLocal_119.x < vLocal_125[0 /*3*/] && !is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 90f)) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0)) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
								iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
							}
						}
						else if (vLocal_119.x < vLocal_125[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
							iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
						}
					}
					else if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 15f)
					{
						if ((vLocal_119.x > vLocal_125[1 /*3*/] && !is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 90f)) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
							iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
						}
					}
					else if (vLocal_119.x > vLocal_125[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
						iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
					}
				}
				else if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1))
				{
					if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 15f)
					{
						if ((vLocal_119.x < vLocal_125[0 /*3*/] && !is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 90f)) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
							iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
						}
					}
					else if (vLocal_119.x < vLocal_125[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
						iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_404[1] == 1)
			{
				if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 15f)
				{
					if ((vLocal_119.x > vLocal_125[1 /*3*/] && !is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 90f)) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
					{
						iLocal_31 = 0;
						iLocal_459[0] = 0;
						iLocal_462[0] = 0;
						iLocal_459[1] = 0;
						iLocal_462[1] = 0;
						iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
						iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
					}
				}
				else if (vLocal_119.x > vLocal_125[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_459[0] = 0;
					iLocal_462[0] = 0;
					iLocal_459[1] = 0;
					iLocal_462[1] = 0;
					iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
					iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_398 == 0)
			{
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0) || vLocal_119.x > 942f)
				{
					if (!PED::IS_PED_INJURED(iLocal_43[1]))
					{
						if (vLocal_119.x > vLocal_125[1 /*3*/])
						{
							if (!is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
								iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
							}
						}
					}
					else if (vLocal_119.x > 942f)
					{
						if (!is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
							iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
						}
					}
				}
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0) || vLocal_119.x < 860f)
				{
					if (!PED::IS_PED_INJURED(iLocal_43[0]))
					{
						if (vLocal_119.x < vLocal_125[0 /*3*/])
						{
							if (!is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_459[0] = 0;
								iLocal_462[0] = 0;
								iLocal_459[1] = 0;
								iLocal_462[1] = 0;
								iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
								iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
							}
						}
					}
					else if (vLocal_119.x < 860f)
					{
						if (!is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_459[0] = 0;
							iLocal_462[0] = 0;
							iLocal_459[1] = 0;
							iLocal_462[1] = 0;
							iLocal_105[0] = GAMEPLAY::GET_GAME_TIMER();
							iLocal_105[1] = GAMEPLAY::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_404[0] == 1)
			{
				if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 20f)
				{
					if ((func_170(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) || func_169(0))
					{
						if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, true, 0))
						{
							if (vLocal_119.x > vLocal_125[0 /*3*/] || is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 15f)
				{
					if ((func_170(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) || func_169(0))
					{
						if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, true, 0))
						{
							if (vLocal_119.x < vLocal_125[1 /*3*/] || is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (is_explosion_in_sphere(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (iLocal_482 == 1)
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
		if (get_player_wanted_level(player_id()) != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_43[0]))
				{
					if (_0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_43[1]))
				{
					if (_0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
		}
		if (iLocal_431 == 0)
		{
			if (iLocal_430 == 1)
			{
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_95 + 4000)
				{
					iLocal_94 = 0;
					while (iLocal_94 <= 6)
					{
						if (func_163())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_94]))
							{
								if (!PED::IS_PED_INJURED(iLocal_35[iLocal_94]))
								{
									if (is_ped_in_current_conversation(iLocal_35[iLocal_94]))
									{
										iLocal_31 = 2;
										iLocal_431 = 1;
									}
								}
							}
						}
						iLocal_94++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_430 == 1)
		{
			iLocal_31 = 2;
			iLocal_427 = 1;
			iLocal_398 = 1;
		}
		if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_404[0] == 1)
			{
				if (func_170(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_169(0))
				{
					if (_0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (func_170(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_169(0))
				{
					if (_0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (get_distance_between_coords(vLocal_119, vLocal_132, 1) < 36f)
		{
			if (iLocal_404[0] == 1)
			{
				if (_0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()))
				{
					iLocal_31 = 2;
				}
				if (func_158(iLocal_43[0], PLAYER::PLAYER_PED_ID(), 1) < 20f)
				{
					if (can_ped_hear_player(player_id(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_404[1] == 1)
			{
				if (vLocal_119.z < 36f || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (_0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
					}
					if (func_158(iLocal_43[1], PLAYER::PLAYER_PED_ID(), 1) < 20f)
					{
						if (can_ped_hear_player(player_id(), iLocal_43[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_404[0] == 1)
		{
			if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[0], 1) < 20f)
			{
				if (vLocal_119.x > vLocal_125[0 /*3*/] && is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0))
				{
					if (_0x6CD5A433374D4CFB(iLocal_43[0], PLAYER::PLAYER_PED_ID()) || can_ped_hear_player(player_id(), iLocal_43[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_404[1] == 1)
		{
			if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_43[1], 1) < 20f)
			{
				if (vLocal_119.x < vLocal_125[1 /*3*/] && is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
				{
					if (_0x6CD5A433374D4CFB(iLocal_43[1], PLAYER::PLAYER_PED_ID()) || can_ped_hear_player(player_id(), iLocal_43[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_172()
{
	iLocal_64 = 0;
	while (iLocal_64 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_64]))
		{
			if (!PED::IS_PED_INJURED(iLocal_35[iLocal_64]))
			{
				if (iLocal_330[iLocal_64] == 0)
				{
					if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_64], 1) > 20f)
					{
						iLocal_330[iLocal_64] = 1;
					}
				}
				if (iLocal_330[iLocal_64] == 1)
				{
					if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_64], 1) < 20f)
					{
						iLocal_330[iLocal_64] = 0;
					}
				}
			}
			else if (iLocal_330[iLocal_64] == 0)
			{
				iLocal_330[iLocal_64] = 1;
			}
		}
		else if (iLocal_330[iLocal_64] == 0)
		{
			iLocal_330[iLocal_64] = 1;
		}
		iLocal_64++;
	}
	if (((((iLocal_330[0] == 1 && iLocal_330[1] == 1) && iLocal_330[2] == 1) && iLocal_330[3] == 1) && iLocal_330[4] == 1) && iLocal_330[5] == 1)
	{
		iLocal_338 = 1;
	}
	else
	{
		iLocal_338 = 0;
	}
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_63]))
		{
			if (!PED::IS_PED_INJURED(iLocal_35[iLocal_63]))
			{
				func_177(iLocal_35[iLocal_63]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_176(1);
						if (iLocal_416 == 1)
						{
							func_101();
						}
					}
					if (has_ped_received_event(iLocal_35[iLocal_63], 18))
					{
						if (iLocal_29 != 4)
						{
							func_176(4);
							if (iLocal_416 == 1)
							{
								func_174();
							}
							iLocal_482 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (is_explosion_in_sphere(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_176(4);
							if (iLocal_416 == 1)
							{
								func_174();
							}
						}
					}
					if ((((((((func_173(iLocal_35[iLocal_63], iLocal_35[0]) || func_173(iLocal_35[iLocal_63], iLocal_35[1])) || func_173(iLocal_35[iLocal_63], iLocal_35[2])) || func_173(iLocal_35[iLocal_63], iLocal_35[3])) || func_173(iLocal_35[iLocal_63], iLocal_35[4])) || func_173(iLocal_35[iLocal_63], iLocal_35[5])) || func_173(iLocal_35[iLocal_63], iLocal_35[6])) || func_173(iLocal_35[iLocal_63], iLocal_43[0])) || func_173(iLocal_35[iLocal_63], iLocal_43[1]))
					{
						if (iLocal_29 != 4)
						{
							func_176(4);
							if (iLocal_416 == 1)
							{
								func_174();
							}
							iLocal_482 = 1;
						}
					}
					if ((func_170(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || func_169(0))
					{
						if (iLocal_398 == 0)
						{
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_63], 1) > 20f)
							{
								if (iLocal_322[iLocal_63] == 1)
								{
									iLocal_322[iLocal_63] = 0;
								}
								if (((((iLocal_338 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_176(0);
								}
							}
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_63], 1) < 20f && _0x6CD5A433374D4CFB(iLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_431 == 0 && iLocal_398 == 0)
									{
										func_176(1);
										if (iLocal_416 == 1)
										{
											func_101();
										}
									}
									else
									{
										func_176(3);
										if (iLocal_416 == 1)
										{
											func_174();
										}
									}
								}
							}
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_63], 1) < 20f && _0x6CD5A433374D4CFB(iLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_322[iLocal_63] == 0)
								{
									iLocal_69[iLocal_63] = GAMEPLAY::GET_GAME_TIMER();
									iLocal_322[iLocal_63] = 1;
								}
								if (iLocal_322[iLocal_63] == 1)
								{
									if (GAMEPLAY::GET_GAME_TIMER() > iLocal_69[iLocal_63] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_176(2);
											if (iLocal_416 == 1)
											{
												func_174();
											}
										}
									}
								}
							}
						}
						if (iLocal_398 == 1)
						{
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_63], 1) < 20f && _0x6CD5A433374D4CFB(iLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_176(3);
									if (iLocal_416 == 1)
									{
										func_174();
									}
								}
							}
						}
						if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_413 == 0)
							{
								iLocal_90 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_413 = 1;
							}
							else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_90 + 3000)
							{
								if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_63], 1) < 20f && _0x6CD5A433374D4CFB(iLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_176(3);
										if (iLocal_416 == 1)
										{
											func_174();
										}
									}
								}
							}
						}
						else if (iLocal_413 == 1)
						{
							iLocal_413 = 0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
						{
							if (is_vehicle_driveable(iLocal_33, 0))
							{
								if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 1))
								{
									if (_0x6CD5A433374D4CFB(iLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_176(3);
											if (iLocal_416 == 1)
											{
												func_174();
											}
										}
									}
								}
								if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_33, 1) < 5f && is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID()))
								{
									if (_0x6CD5A433374D4CFB(iLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_176(3);
											if (iLocal_416 == 1)
											{
												func_174();
											}
										}
									}
									if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, true, 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
										{
											if (!PED::IS_PED_INJURED(iLocal_35[0]))
											{
												if (is_entity_at_coord(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, false, true, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_390 = 1;
														func_176(3);
														if (iLocal_416 == 1)
														{
															func_174();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[6]))
							{
								if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[6], 1) < 20f)
								{
									if ((is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, true, 0) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, true, 0)) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, true, 0))
									{
										if (_0x6CD5A433374D4CFB(iLocal_35[6], PLAYER::PLAYER_PED_ID()))
										{
											if (vLocal_119.z > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_428 = 1;
													func_176(3);
													if (iLocal_416 == 1)
													{
														func_174();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_176(1);
												if (iLocal_416 == 1)
												{
													func_101();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_321 == 0)
						{
							iLocal_68 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_321 = 1;
						}
						if (iLocal_321 == 1)
						{
							if (GAMEPLAY::GET_GAME_TIMER() > iLocal_68 + 4000 || iLocal_29 == 3)
							{
								if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_63], 1) < 20f)
								{
									if (_0x6CD5A433374D4CFB(iLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 4)
										{
											func_176(4);
											if (iLocal_416 == 1)
											{
												func_174();
											}
										}
									}
								}
							}
						}
						if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_63], 1) < 40f)
						{
							if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
							{
								if (_0x6CD5A433374D4CFB(iLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()) || can_ped_hear_player(player_id(), iLocal_35[iLocal_63]))
								{
									if (iLocal_29 != 4)
									{
										func_176(4);
										if (iLocal_416 == 1)
										{
											func_174();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_63++;
	}
}

bool func_173(int iParam0, int iParam1)
{
	if (((func_158(iParam0, iParam1, 1) < 20f && is_ped_facing_ped(iParam0, iParam1, 90f)) && !PED::IS_PED_INJURED(iParam0)) && PED::IS_PED_INJURED(iParam1))
	{
		return true;
	}
	return false;
}

void func_174()
{
	Global_14578 = 0;
	func_175();
}

void func_175()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_176(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_67 = 0;
}

void func_177(int iParam0)
{
	iLocal_65 = 0;
	while (iLocal_65 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_65])
		{
			if (func_158(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f && _0x6CD5A433374D4CFB(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_339[iLocal_65] == 0)
				{
					task_look_at_entity(iParam0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_339[iLocal_65] = 1;
				}
			}
			else if (iLocal_339[iLocal_65] == 1)
			{
				task_look_at_entity(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1072, 3);
				iLocal_339[iLocal_65] = 0;
			}
		}
		iLocal_65++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_67 == 0)
			{
				set_blocking_of_non_temporary_events(iParam0, true);
				if (iParam0 == iLocal_35[0])
				{
					if (does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (get_script_task_status(iLocal_35[0], 1647992574) != 1 && get_script_task_status(iLocal_35[0], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (get_script_task_status(iLocal_35[1], 1647992574) != 1 && get_script_task_status(iLocal_35[1], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (get_script_task_status(iLocal_35[2], 1647992574) != 1 && get_script_task_status(iLocal_35[2], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (get_script_task_status(iLocal_35[3], 1647992574) != 1 && get_script_task_status(iLocal_35[3], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (does_scenario_exist_in_area(904f, -1575f, 30f, 3f, 0))
					{
						if (get_script_task_status(iLocal_35[4], 1647992574) != 1 && get_script_task_status(iLocal_35[4], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (get_script_task_status(iLocal_35[5], 1647992574) != 1 && get_script_task_status(iLocal_35[5], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (get_script_task_status(iLocal_35[6], 1647992574) != 1 && get_script_task_status(iLocal_35[6], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[4]))
				{
					if (!PED::IS_PED_INJURED(iLocal_35[4]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[5]))
							{
								if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[4], 1) < 25f)
								{
									if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, true, 0) || vLocal_119.y > -1573f)
									{
										if (iLocal_416 == 0)
										{
											func_119(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_119(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											task_look_at_entity(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											task_look_at_entity(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_163())
											{
												if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
												{
													if (func_157(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_416 = 1;
													}
												}
											}
										}
									}
								}
								if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, false, true, 1))
								{
									if (iLocal_423 == 0)
									{
										iLocal_92 = GAMEPLAY::GET_GAME_TIMER();
										iLocal_423 = 1;
									}
									if (iLocal_423 == 1)
									{
										if (GAMEPLAY::GET_GAME_TIMER() > iLocal_92 + 4000)
										{
											if (iLocal_416 == 0)
											{
												func_119(&uLocal_137, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_119(&uLocal_137, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												task_look_at_entity(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												task_look_at_entity(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_163())
												{
													if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
													{
														if (func_157(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_416 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_416 == 1 && !func_163())
								{
									if (iLocal_415 == 0)
									{
										if (does_scenario_exist_in_area(865f, -1558.1f, 29.5f, 3f, 0))
										{
											task_clear_look_at(iLocal_35[4]);
											task_clear_look_at(iLocal_35[5]);
											task_use_nearest_scenario_to_coord(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_415 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_424 == 0)
					{
						if (iLocal_425 == 0)
						{
							iLocal_93 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_425 = 1;
						}
						if (GAMEPLAY::GET_GAME_TIMER() > iLocal_93 + 30000)
						{
							if (iLocal_424 == 0)
							{
								if (does_scenario_exist_in_area(925f, -1561f, 30f, 3f, 0))
								{
									task_use_nearest_scenario_to_coord(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_424 = 1;
									iLocal_425 = 0;
								}
							}
						}
					}
					if (iLocal_424 == 1)
					{
						if (is_entity_at_coord(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, false, true, 0))
						{
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[6], 1) < 15f && vLocal_119.z < 40f)
							{
								if (iLocal_426 == 0)
								{
									if (does_scenario_exist_in_area(909.5f, -1515.5f, 30f, 3f, 0))
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_426 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_67 == 0)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (func_158(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
							{
								if (iLocal_347[iLocal_65] == 0)
								{
									if (_0x6CD5A433374D4CFB(iParam0, PLAYER::PLAYER_PED_ID()) || can_ped_hear_player(player_id(), iParam0))
									{
										if (!is_entity_on_screen(iParam0))
										{
											clear_ped_tasks_immediately(iParam0);
										}
										if (is_entity_on_screen(iParam0))
										{
											clear_ped_tasks(iParam0);
										}
										open_sequence_task(&iLocal_57);
										task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 2f, 0);
										task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
										close_sequence_task(iLocal_57);
										task_perform_sequence(iParam0, iLocal_57);
										clear_sequence_task(&iLocal_57);
										set_blocking_of_non_temporary_events(iParam0, true);
										iLocal_339[iLocal_65] = 0;
										iLocal_347[iLocal_65] = 1;
									}
								}
								if (iLocal_347[iLocal_65] == 1)
								{
									if (!is_ped_facing_ped(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
									{
										task_turn_ped_to_face_entity(iParam0, PLAYER::PLAYER_PED_ID(), 0);
										iLocal_347[iLocal_65] = 0;
									}
								}
							}
							else
							{
								if (iLocal_347[iLocal_65] == 1)
								{
									iLocal_347[iLocal_65] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (get_script_task_status(iLocal_35[0], 1647992574) != 1 && get_script_task_status(iLocal_35[0], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[0], true);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (get_script_task_status(iLocal_35[1], 1647992574) != 1 && get_script_task_status(iLocal_35[1], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[1], true);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (get_script_task_status(iLocal_35[2], 1647992574) != 1 && get_script_task_status(iLocal_35[2], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[2], true);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (get_script_task_status(iLocal_35[3], 1647992574) != 1 && get_script_task_status(iLocal_35[3], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[3], true);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (does_scenario_exist_in_area(904f, -1575f, 30f, 3f, 0))
									{
										if (get_script_task_status(iLocal_35[4], 1647992574) != 1 && get_script_task_status(iLocal_35[4], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[4], true);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (get_script_task_status(iLocal_35[5], 1647992574) != 1 && get_script_task_status(iLocal_35[5], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[5], true);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (get_script_task_status(iLocal_35[6], 1647992574) != 1 && get_script_task_status(iLocal_35[6], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[6], true);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_158(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
						{
							if (iLocal_347[iLocal_65] == 0)
							{
								if (_0x6CD5A433374D4CFB(iParam0, PLAYER::PLAYER_PED_ID()) || can_ped_hear_player(player_id(), iParam0))
								{
									if (!is_entity_on_screen(iParam0))
									{
										clear_ped_tasks_immediately(iParam0);
									}
									if (is_entity_on_screen(iParam0))
									{
										clear_ped_tasks(iParam0);
									}
									open_sequence_task(&iLocal_57);
									task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
									task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
									close_sequence_task(iLocal_57);
									task_perform_sequence(iParam0, iLocal_57);
									clear_sequence_task(&iLocal_57);
									set_blocking_of_non_temporary_events(iParam0, true);
									iLocal_339[iLocal_65] = 0;
									iLocal_347[iLocal_65] = 1;
								}
							}
							if (iLocal_347[iLocal_65] == 1)
							{
								if (!is_ped_facing_ped(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
								{
									task_turn_ped_to_face_entity(iParam0, PLAYER::PLAYER_PED_ID(), 0);
									iLocal_347[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (iLocal_347[iLocal_65] == 1)
							{
								iLocal_347[iLocal_65] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[0], 1647992574) != 1 && get_script_task_status(iLocal_35[0], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[1], 1647992574) != 1 && get_script_task_status(iLocal_35[1], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[2], 1647992574) != 1 && get_script_task_status(iLocal_35[2], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[3], 1647992574) != 1 && get_script_task_status(iLocal_35[3], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (does_scenario_exist_in_area(904f, -1575f, 30f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[4], 1647992574) != 1 && get_script_task_status(iLocal_35[4], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[5], 1647992574) != 1 && get_script_task_status(iLocal_35[5], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[6], 1647992574) != 1 && get_script_task_status(iLocal_35[6], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 2:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_67 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_302, 1862763509);
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_65])
					{
						if (func_158(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 15f)
						{
							if (func_158(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 3f)
							{
								if (get_script_task_status(iParam0, 242628503) != 0 || get_script_task_status(iParam0, 242628503) != 1)
								{
									if (!is_entity_on_screen(iParam0))
									{
										clear_ped_tasks_immediately(iParam0);
									}
									if (is_entity_on_screen(iParam0))
									{
										clear_ped_tasks(iParam0);
									}
									open_sequence_task(&iLocal_57);
									task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), -1, 1f, 1f, 2f, 0);
									task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
									close_sequence_task(iLocal_57);
									task_perform_sequence(iParam0, iLocal_57);
									clear_sequence_task(&iLocal_57);
									iLocal_339[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[0], 1647992574) != 1 && get_script_task_status(iLocal_35[0], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[1], 1647992574) != 1 && get_script_task_status(iLocal_35[1], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[2], 1647992574) != 1 && get_script_task_status(iLocal_35[2], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[3], 1647992574) != 1 && get_script_task_status(iLocal_35[3], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (does_scenario_exist_in_area(904f, -1575f, 30f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[4], 1647992574) != 1 && get_script_task_status(iLocal_35[4], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[5], 1647992574) != 1 && get_script_task_status(iLocal_35[5], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (get_script_task_status(iLocal_35[6], 1647992574) != 1 && get_script_task_status(iLocal_35[6], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 3:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_393 == 0)
			{
				if (iLocal_394 == 0)
				{
					iLocal_79 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (GAMEPLAY::GET_GAME_TIMER() > iLocal_79 + 9000)
					{
						set_max_wanted_level(5);
						set_wanted_level_multiplier(1f);
						set_player_wanted_level(player_id(), 2, 0);
						set_player_wanted_level_now(player_id(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_302, 1862763509);
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_65 = 0;
					while (iLocal_65 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (func_158(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 100f)
							{
								if (iLocal_355[iLocal_65] == 0)
								{
									set_blocking_of_non_temporary_events(iParam0, true);
									iLocal_355[iLocal_65] = 1;
								}
								if (iLocal_363[iLocal_65] == 0)
								{
									if (!is_entity_on_screen(iParam0))
									{
										clear_ped_tasks_immediately(iParam0);
									}
									if (is_entity_on_screen(iParam0))
									{
										clear_ped_tasks(iParam0);
									}
									task_combat_hated_targets_around_ped(iParam0, 100f, 0);
									iLocal_339[iLocal_65] = 0;
									iLocal_363[iLocal_65] = 1;
								}
							}
						}
						iLocal_65++;
					}
					if (iLocal_468 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[0]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
								{
									if (is_vehicle_driveable(iLocal_33, 0))
									{
										if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_33, 1) && is_entity_at_coord(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, false, true, 0))
										{
											if (!is_entity_on_screen(iLocal_35[0]))
											{
												clear_ped_tasks_immediately(iLocal_35[0]);
											}
											if (is_entity_on_screen(iLocal_35[0]))
											{
												clear_ped_tasks(iLocal_35[0]);
											}
											open_sequence_task(&iLocal_57);
											task_follow_nav_mesh_to_coord(false, 917.8f, -1561f, 29f, 3f, -1, 0.25f, 0, 1193033728);
											task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 0);
											task_play_anim(false, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											close_sequence_task(iLocal_57);
											task_perform_sequence(iLocal_35[0], iLocal_57);
											clear_sequence_task(&iLocal_57);
											iLocal_468 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_468 == 1 && iLocal_487 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_35[0]))
							{
								if (is_entity_at_coord(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, false, true, 0))
								{
									func_119(&uLocal_137, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_166(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_487 = 1;
								}
							}
						}
					}
					if (iLocal_467 == 0)
					{
						if (GAMEPLAY::GET_GAME_TIMER() > iLocal_79 + 3000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_35[5]))
								{
									task_play_anim(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_111 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_467 = 1;
								}
							}
						}
					}
					else if (iLocal_466 == 0)
					{
						if (GAMEPLAY::GET_GAME_TIMER() > iLocal_111 + 5000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_35[5]))
								{
									clear_ped_tasks(iLocal_35[5]);
									task_combat_ped(iLocal_35[5], PLAYER::PLAYER_PED_ID(), 0, 16);
									iLocal_466 = 1;
								}
							}
						}
					}
				}
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_306[iLocal_65] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									set_blocking_of_non_temporary_events(iParam0, true);
									if (is_ped_in_any_vehicle(iParam0, 0))
									{
										if (func_158(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											if (!is_entity_on_screen(iParam0))
											{
												clear_ped_tasks_immediately(iParam0);
											}
											if (is_entity_on_screen(iParam0))
											{
												clear_ped_tasks(iParam0);
											}
											task_smart_flee_ped(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
											iLocal_306[iLocal_65] = 1;
										}
									}
									else if (func_158(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 100f)
									{
										if (!is_entity_on_screen(iParam0))
										{
											clear_ped_tasks_immediately(iParam0);
										}
										if (is_entity_on_screen(iParam0))
										{
											clear_ped_tasks(iParam0);
										}
										task_smart_flee_ped(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
										iLocal_306[iLocal_65] = 1;
									}
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (iLocal_306[iLocal_65] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_65])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									if (!is_entity_on_screen(iParam0))
									{
										clear_ped_tasks_immediately(iParam0);
									}
									if (is_entity_on_screen(iParam0))
									{
										clear_ped_tasks(iParam0);
									}
									set_blocking_of_non_temporary_events(iParam0, true);
									task_smart_flee_ped(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
									set_ped_keep_task(iParam0, true);
									set_ped_as_no_longer_needed(&iParam0);
									iLocal_306[iLocal_65] = 1;
								}
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
		
		case 4:
			if (iLocal_483 == 0)
			{
				iLocal_483 = 1;
			}
			if (iLocal_393 == 0)
			{
				if (iLocal_394 == 0)
				{
					iLocal_79 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_394 = 1;
				}
				if (iLocal_394 == 1)
				{
					if (GAMEPLAY::GET_GAME_TIMER() > iLocal_79 + 6000)
					{
						set_max_wanted_level(5);
						set_wanted_level_multiplier(1f);
						set_player_wanted_level(player_id(), 2, 0);
						set_player_wanted_level_now(player_id(), 0);
						iLocal_393 = 1;
					}
				}
			}
			if (iLocal_67 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_302, 1862763509);
				set_blocking_of_non_temporary_events(iParam0, true);
				iLocal_67++;
			}
			if (iLocal_67 == 1)
			{
				iLocal_65 = 0;
				while (iLocal_65 <= 6)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_65]))
					{
						if (!PED::IS_PED_INJURED(iLocal_35[iLocal_65]))
						{
							if (func_158(PLAYER::PLAYER_PED_ID(), iLocal_35[iLocal_65], 1) < 15f)
							{
								if (func_178(iLocal_35[iLocal_65], 6))
								{
									if (_0x6CD5A433374D4CFB(iLocal_35[iLocal_65], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_379[iLocal_65] == 0)
										{
											if (!is_entity_on_screen(iLocal_35[iLocal_65]))
											{
												clear_ped_tasks_immediately(iLocal_35[iLocal_65]);
											}
											if (is_entity_on_screen(iLocal_35[iLocal_65]))
											{
												clear_ped_tasks(iLocal_35[iLocal_65]);
											}
											task_hands_up(iLocal_35[iLocal_65], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
											iLocal_379[iLocal_65] = 1;
											iLocal_371[iLocal_65] = 0;
											iLocal_339[iLocal_65] = 0;
											iLocal_91 = GAMEPLAY::GET_GAME_TIMER();
										}
									}
									else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_91 + 300)
									{
										iLocal_371[iLocal_65] = 0;
									}
								}
								else if (iLocal_371[iLocal_65] == 0)
								{
									if (!is_entity_on_screen(iLocal_35[iLocal_65]))
									{
										clear_ped_tasks_immediately(iLocal_35[iLocal_65]);
									}
									if (is_entity_on_screen(iLocal_35[iLocal_65]))
									{
										clear_ped_tasks(iLocal_35[iLocal_65]);
									}
									task_smart_flee_ped(iLocal_35[iLocal_65], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
									iLocal_371[iLocal_65] = 1;
									iLocal_379[iLocal_65] = 0;
								}
							}
							else if (iLocal_371[iLocal_65] == 0)
							{
								if (!is_entity_on_screen(iLocal_35[iLocal_65]))
								{
									clear_ped_tasks_immediately(iLocal_35[iLocal_65]);
								}
								if (is_entity_on_screen(iLocal_35[iLocal_65]))
								{
									clear_ped_tasks(iLocal_35[iLocal_65]);
								}
								task_smart_flee_ped(iLocal_35[iLocal_65], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
								iLocal_371[iLocal_65] = 1;
								iLocal_379[iLocal_65] = 0;
							}
						}
					}
					iLocal_65++;
				}
			}
			break;
	}
}

bool func_178(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (is_ped_armed(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			if (is_player_free_aiming_at_entity(player_id(), iParam0) || is_player_targetting_entity(player_id(), iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_179()
{
	iLocal_46 = func_25(0);
	iLocal_47 = func_25(1);
	iLocal_48 = func_25(2);
	if (func_33(iLocal_46, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_46))
		{
			if (!func_32(iLocal_46))
			{
				if (!func_181())
				{
					if (func_180(iLocal_46))
					{
						if (func_31(iLocal_46, 0))
						{
							set_entity_as_mission_entity(iLocal_46, true, 1);
							set_blocking_of_non_temporary_events(iLocal_46, true);
							clear_ped_tasks(iLocal_46);
							iLocal_473 = 0;
							iLocal_476 = 0;
							iLocal_479 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_473 == 0)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_473 = 1;
					}
					else if (is_ped_in_any_vehicle(iLocal_46, 0))
					{
						if (!is_ped_in_vehicle(iLocal_46, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0)
				{
					if (func_181())
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_470 == 1)
				{
					if ((func_180(iLocal_46) && does_entity_belong_to_this_script(iLocal_46, 1)) && iLocal_473 == 0)
					{
						vLocal_122 = {get_entity_coords(iLocal_46, 1)};
						_0x07FB139B592FA687(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y);
						if (get_player_wanted_level(player_id()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
								{
									task_vehicle_mission_coors_target(iLocal_46, get_vehicle_ped_is_in(iLocal_46, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_479 == 0)
							{
								task_vehicle_mission(iLocal_46, get_vehicle_ped_is_in(iLocal_46, 0), get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
							{
								task_vehicle_mission_coors_target(iLocal_46, get_vehicle_ped_is_in(iLocal_46, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_479 = 0;
								iLocal_476 = 1;
							}
						}
					}
					else
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_473 == 1)
				{
					if (func_24(iLocal_46))
					{
						iLocal_473 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_48, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_48))
		{
			if (!func_32(iLocal_48))
			{
				if (!func_181())
				{
					if (func_180(iLocal_48))
					{
						if (func_31(iLocal_48, 0))
						{
							set_entity_as_mission_entity(iLocal_48, true, 1);
							set_blocking_of_non_temporary_events(iLocal_48, true);
							clear_ped_tasks(iLocal_48);
							iLocal_475 = 0;
							iLocal_477 = 0;
							iLocal_480 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_475 == 0)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_475 = 1;
					}
					else if (is_ped_in_any_vehicle(iLocal_48, 0))
					{
						if (!is_ped_in_vehicle(iLocal_48, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_475 = 1;
						}
					}
				}
				if (iLocal_475 == 0)
				{
					if (func_181())
					{
						iLocal_475 = 1;
					}
				}
				if (iLocal_471 == 1)
				{
					if ((func_180(iLocal_48) && does_entity_belong_to_this_script(iLocal_48, 1)) && iLocal_475 == 0)
					{
						vLocal_122 = {get_entity_coords(iLocal_48, 1)};
						_0x07FB139B592FA687(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y);
						if (get_player_wanted_level(player_id()) == 0)
						{
							if (iLocal_477 == 0)
							{
								if (_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
								{
									task_vehicle_mission_coors_target(iLocal_48, get_vehicle_ped_is_in(iLocal_48, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_480 == 0)
							{
								task_vehicle_mission(iLocal_48, get_vehicle_ped_is_in(iLocal_48, 0), get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0)
						{
							if (_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
							{
								task_vehicle_mission_coors_target(iLocal_48, get_vehicle_ped_is_in(iLocal_48, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_480 = 0;
								iLocal_477 = 1;
							}
						}
					}
					else
					{
						iLocal_475 = 1;
					}
				}
				if (iLocal_475 == 1)
				{
					if (func_24(iLocal_48))
					{
						iLocal_475 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_47, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_47))
		{
			if (!func_32(iLocal_47))
			{
				if (!func_181())
				{
					if (func_180(iLocal_47))
					{
						if (func_31(iLocal_47, 0))
						{
							set_entity_as_mission_entity(iLocal_47, true, 1);
							set_blocking_of_non_temporary_events(iLocal_47, true);
							clear_ped_tasks(iLocal_47);
							iLocal_474 = 0;
							iLocal_478 = 0;
							iLocal_481 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_474 == 0)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_474 = 1;
					}
					else if (is_ped_in_any_vehicle(iLocal_47, 0))
					{
						if (!is_ped_in_vehicle(iLocal_47, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_474 = 1;
						}
					}
				}
				if (iLocal_474 == 0)
				{
					if (func_181())
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_472 == 1)
				{
					if ((func_180(iLocal_47) && does_entity_belong_to_this_script(iLocal_47, 1)) && iLocal_474 == 0)
					{
						vLocal_122 = {get_entity_coords(iLocal_47, 1)};
						_0x07FB139B592FA687(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y);
						if (get_player_wanted_level(player_id()) == 0)
						{
							if (iLocal_478 == 0)
							{
								if (_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
								{
									task_vehicle_mission_coors_target(iLocal_47, get_vehicle_ped_is_in(iLocal_47, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_481 = 0;
									iLocal_478 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_481 == 0)
							{
								task_vehicle_mission(iLocal_47, get_vehicle_ped_is_in(iLocal_47, 0), get_closest_vehicle(vLocal_122, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_478 = 0;
								iLocal_481 = 1;
							}
						}
						else if (iLocal_478 == 0)
						{
							if (_0xF7B79A50B905A30D(vLocal_122.x, vLocal_122.y, vLocal_116.x, vLocal_116.y))
							{
								task_vehicle_mission_coors_target(iLocal_47, get_vehicle_ped_is_in(iLocal_47, 0), vLocal_116, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_481 = 0;
								iLocal_478 = 1;
							}
						}
					}
					else
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_474 == 1)
				{
					if (func_24(iLocal_47))
					{
						iLocal_474 = 0;
					}
				}
			}
		}
	}
}

bool func_180(int iParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (is_ped_in_vehicle(iParam0, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0) && get_ped_in_vehicle_seat(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), -1) == iParam0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
				{
					if (is_vehicle_driveable(iLocal_33, 0))
					{
						if ((is_ped_in_vehicle(iParam0, iLocal_33, 0) && get_ped_in_vehicle_seat(iLocal_33, -1) == iParam0) && !is_entity_at_coord(iLocal_33, vLocal_116, 3f, 3f, 3f, false, true, 0))
						{
							if (iParam0 == iLocal_46)
							{
								iLocal_470 = 1;
							}
							if (iParam0 == iLocal_48)
							{
								iLocal_471 = 1;
							}
							if (iParam0 == iLocal_47)
							{
								iLocal_472 = 1;
							}
							return true;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_46)
	{
		iLocal_470 = 0;
	}
	if (iParam0 == iLocal_48)
	{
		iLocal_471 = 0;
	}
	if (iParam0 == iLocal_47)
	{
		iLocal_472 = 0;
	}
	return false;
}

auto func_181()
{
	return Global_17116;
}

void func_182()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		if (!is_vehicle_driveable(iLocal_33, 0))
		{
			func_185(3);
			return;
		}
		else
		{
			if (func_184(&iLocal_33))
			{
				func_185(2);
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (!is_vehicle_driveable(iLocal_32, 0))
				{
					func_185(1);
					return;
				}
				if (is_vehicle_driveable(iLocal_32, 0))
				{
					if (!is_vehicle_attached_to_trailer(iLocal_33))
					{
						if ((is_vehicle_stuck_on_roof(iLocal_32) || func_183(iLocal_32)) || func_184(&iLocal_32))
						{
							func_185(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (is_vehicle_driveable(iLocal_32, 0))
			{
				if (func_158(iLocal_32, PLAYER::PLAYER_PED_ID(), 1) > 600f)
				{
					func_185(5);
					return;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
	{
		if (PED::IS_PED_INJURED(iLocal_49))
		{
			func_185(6);
			return;
		}
	}
}

bool func_183(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_entity_dead(iParam0, 0))
		{
			return true;
		}
		else if (!is_vehicle_driveable(iParam0, 0))
		{
			if (!is_entity_on_fire(iParam0))
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

bool func_184(int iParam0)
{
	if (is_vehicle_driveable(*iParam0, 0))
	{
		if (((is_vehicle_stuck_timer_up(*iParam0, 0, 7000) || is_vehicle_stuck_timer_up(*iParam0, 3, 30000)) || is_vehicle_stuck_timer_up(*iParam0, 2, 30000)) || is_vehicle_stuck_timer_up(*iParam0, 1, 40000))
		{
			return true;
		}
	}
	return false;
}

void func_185(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_62 = 0;
	}
}

void func_186(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101154.f_7775.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101154.f_7775.f_99.f_58[iParam0] = iParam1;
}

void func_187()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_483 == 0)
		{
			func_188(657);
		}
	}
}

void func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_55750 = 0;
	if (!Global_55974[iParam0 /*13*/] == 3)
	{
		return;
	}
	iVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67844)
	{
		if (Global_67845[iVar1 /*9*/] == iParam0)
		{
			iVar0 = true;
			Global_67845[iVar1 /*9*/].f_1 = 1;
			Global_67845[iVar1 /*9*/].f_2 = 0f;
			if (Global_67845[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!iVar0)
	{
	}
}

int func_189(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_190()
{
	set_all_random_peds_flee(player_id(), 0);
	set_vehicle_model_is_suppressed(joaat("packer"), false);
	set_vehicle_model_is_suppressed(joaat("phantom"), false);
	cancel_music_event("FHPRB_START");
	cancel_music_event("FHPRB_TRUCK");
	cancel_music_event("FHPRB_COPS");
	cancel_music_event("FHPRB_LOST");
	cancel_music_event("FHPRB_STOP");
	remove_scenario_blocking_area(iLocal_51, 0);
	remove_scenario_blocking_area(iLocal_52, 0);
	remove_scenario_blocking_area(iLocal_53, 0);
	remove_scenario_blocking_area(iLocal_54, 0);
	remove_scenario_blocking_area(iLocal_55, 0);
	remove_scenario_blocking_area(iLocal_56, 0);
	if (does_scenario_group_exist("SCRAP_SECURITY"))
	{
		if (is_scenario_group_enabled("SCRAP_SECURITY"))
		{
			set_scenario_group_enabled("SCRAP_SECURITY", false);
		}
	}
	set_max_wanted_level(5);
	if (_does_door_exist(iLocal_114))
	{
		remove_door_from_system(iLocal_114);
	}
	if (_does_door_exist(iLocal_115))
	{
		remove_door_from_system(iLocal_115);
	}
	terminate_this_thread();
}

void func_191()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_101154.f_7775 || func_189(0))
	{
		if (!func_192())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_82363[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

bool func_192()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

