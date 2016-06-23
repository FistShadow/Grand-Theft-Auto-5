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
	char* sLocal_18 = 0;
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
	float fLocal_23 = 0;
	float fLocal_24 = 0;
	float fLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	float fLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	int iLocal_36 = 0;
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
	auto uLocal_57 = 8;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 2;
	auto uLocal_67 = 0;
	auto uLocal_68 = 0;
	auto uLocal_69 = 8;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 8;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	auto uLocal_89 = 0;
	auto uLocal_90 = 0;
	auto uLocal_91 = 0;
	struct<2> Local_92 = 0;
	auto uLocal_94 = 0;
	auto uLocal_95 = 0;
	auto uLocal_96 = 0;
	auto uLocal_97 = 0;
	int iLocal_98 = 0;
	auto uLocal_99 = 0;
	int iLocal_100 = 0;
	auto uLocal_101 = 0;
	auto uLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int[] iLocal_105 = new int[32];
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	Vector3 vLocal_142 = 0;
	float fLocal_145 = 0;
	Vector3 vLocal_146 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	auto uLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	Vector3 vLocal_170 = 0;
	Vector3 vLocal_173 = 0;
	Vector3 vLocal_176 = 0;
	int iLocal_179 = 0;
	auto uLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	struct<5> Local_186 = 0;
	auto uLocal_191 = 16;
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
	auto uLocal_357 = 0;
	struct<24> Local_358 = 0;
	auto uLocal_382 = 0;
	struct<7>[] Local_383 = new struct<7>[32];
	struct<20> Local_608 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_87 = 40;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_205(Local_608);
	}
	while (true)
	{
		func_204();
		if (func_194())
		{
			func_191();
		}
		else if (func_187(5))
		{
			func_191();
		}
		else if (func_184())
		{
			func_191();
		}
		else if (Global_2435528.f_3669)
		{
			func_191();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_182();
			switch (func_181(participant_id_to_int()))
			{
				case 0:
					if (func_180() > 0)
					{
						Local_383[participant_id_to_int() /*7*/] = 2;
					}
					break;
				
				case 2:
					func_55();
					if (func_180() == 3)
					{
						Local_383[participant_id_to_int() /*7*/] = 3;
					}
					break;
				
				case 3:
					func_191();
					break;
			}
			if (network_is_host_of_this_script())
			{
				switch (func_180())
				{
					case 0:
						Local_358 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_54();
	func_53();
	switch (func_52())
	{
		case 0:
			if (func_50())
			{
				if (Local_358.f_6 == -1)
				{
					Local_358.f_6 = get_random_int_in_range(0, 3);
				}
				else if (func_40())
				{
					if (func_35())
					{
						load_all_path_nodes(0);
						func_34(&(Local_358.f_23), 0, 0);
						func_33(1);
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_159)
			{
				if (!iLocal_160)
				{
					func_31();
				}
				if (func_29())
				{
					Local_358.f_21 = 1;
					func_33(6);
				}
				if (func_28())
				{
					func_33(2);
				}
				if (Local_358.f_22)
				{
					func_33(4);
				}
				if (func_27())
				{
					func_33(4);
				}
				if (func_21(iLocal_181, 1215605247, &uLocal_94, 0, 500, 1, 0))
				{
					func_33(6);
				}
			}
			else
			{
				func_33(4);
			}
			break;
		
		case 2:
			if (!iLocal_162)
			{
				func_20();
			}
			if (iLocal_159)
			{
				if (!iLocal_160)
				{
					func_19();
					func_17();
				}
				if (func_29())
				{
					Local_358.f_21 = 1;
					func_33(6);
				}
				if (func_16())
				{
					func_33(3);
				}
				if (get_vehicle_engine_health(iLocal_181) <= 100f)
				{
					func_33(3);
				}
				if (func_15())
				{
					func_33(3);
				}
				if (Local_358.f_22)
				{
					func_33(4);
				}
				if (func_27())
				{
					func_33(4);
				}
				if (func_21(iLocal_181, 1215605247, &uLocal_94, 0, 500, 1, 0))
				{
					func_33(6);
				}
			}
			else
			{
				func_33(4);
			}
			break;
		
		case 3:
			if (func_29())
			{
				Local_358.f_21 = 1;
				func_33(6);
			}
			if (!iLocal_162)
			{
				func_20();
			}
			if (iLocal_159)
			{
				if (Local_358.f_22)
				{
					func_33(4);
				}
				if (func_27())
				{
					func_33(4);
				}
			}
			else
			{
				func_33(4);
			}
			break;
		
		case 4:
			if (!iLocal_162)
			{
				func_20();
			}
			if (iLocal_159)
			{
				if (!func_14(&uLocal_90))
				{
					func_34(&uLocal_90, 0, 0);
				}
				else if (func_13(&uLocal_90, 5000, 0))
				{
					func_33(6);
				}
			}
			else
			{
				func_33(6);
			}
			break;
		
		case 6:
			Local_358.f_8 = 0;
			if (func_2())
			{
				Local_358 = 3;
			}
			break;
	}
}

bool func_2()
{
	if (network_does_network_id_exist(Local_358.f_2))
	{
		if (func_12(Local_358.f_2))
		{
			if (!func_5(get_entity_coords(net_to_veh(Local_358.f_2), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_358.f_2));
			}
			else
			{
				func_3(&(Local_358.f_2));
			}
			iLocal_138 = 1;
			Local_358.f_2 = 0;
		}
	}
	else
	{
		iLocal_138 = 1;
		Local_358.f_2 = 0;
	}
	if (network_does_network_id_exist(Local_358.f_3))
	{
		if (func_12(Local_358.f_3))
		{
			if (!func_5(get_entity_coords(net_to_ped(Local_358.f_3), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_358.f_3));
			}
			else
			{
				func_3(&(Local_358.f_3));
			}
			iLocal_139 = 1;
			Local_358.f_3 = 0;
		}
	}
	else
	{
		iLocal_139 = 1;
		Local_358.f_3 = 0;
	}
	if (network_does_network_id_exist(Local_358.f_4))
	{
		if (func_12(Local_358.f_4))
		{
			if (func_5(get_entity_coords(net_to_ped(Local_358.f_4), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_358.f_4));
			}
			else
			{
				func_3(&(Local_358.f_4));
			}
			iLocal_141 = 1;
			Local_358.f_4 = 0;
		}
	}
	else
	{
		iLocal_141 = 1;
		Local_358.f_4 = 0;
	}
	if (network_does_network_id_exist(Local_358.f_5))
	{
		if (func_12(Local_358.f_5))
		{
			if (func_5(get_entity_coords(net_to_obj(Local_358.f_5), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_358.f_5));
			}
			else
			{
				func_3(&(Local_358.f_5));
			}
			iLocal_140 = 1;
			Local_358.f_5 = 0;
		}
	}
	else
	{
		iLocal_140 = 1;
		Local_358.f_5 = 0;
	}
	if (((iLocal_138 && iLocal_139) && iLocal_140) && iLocal_141)
	{
		return true;
	}
	return false;
}

void func_3(auto uParam0)
{
	int iVar0;
	
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		set_entity_as_no_longer_needed(&iVar0);
	}
}

void func_4(auto uParam0)
{
	int iVar0;
	
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
		}
	}
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		delete_entity(&iVar0);
	}
}

bool func_5(Vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_11(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (get_distance_between_coords(func_10(player_id()), vParam0, 1) <= fVar2 + fParam3)
				{
					if (is_sphere_visible(vParam0, fParam3))
					{
						return true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_11(iVar1, 1, 1))
		{
			if (!func_7(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_6(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!get_player_team(iVar1) == -1)
							{
								if (get_player_team(iVar1) == get_player_team(player_id()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!iParam7)
						{
							if ((iParam5 || (iParam5 == 0 && get_player_team(iVar1) != get_player_team(player_id()))) || get_player_team(iVar1) == -1)
							{
								if (get_distance_between_coords(func_10(iVar1), vParam0, 1) <= fVar2 + fParam3)
								{
									if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
									{
										return true;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam8 || get_player_team(iVar1) == -1)
						{
							if (get_distance_between_coords(func_10(iVar1), vParam0, 1) <= fVar2 + fParam3)
							{
								if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_6(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

int func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

auto func_9()
{
	return Global_1312747;
}

Vector3 func_10(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

bool func_11(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
	uVar0 = iParam0;
	if (network_is_player_active(iParam0))
	{
		if (iParam1)
		{
			if (!is_player_playing(iParam0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!Global_2428492.f_3[uVar0])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_12(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		network_request_control_of_network_id(iParam0);
		return network_has_control_of_network_id(iParam0);
	}
	return false;
}

bool func_13(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_34(uParam0, iParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam2)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

auto func_14(auto uParam0)
{
	return *uParam0.f_1;
}

bool func_15()
{
	if (is_vehicle_stuck_timer_up(iLocal_181, 0, 7000) || is_vehicle_stuck_timer_up(iLocal_181, 1, 40000))
	{
		return true;
	}
	return false;
}

bool func_16()
{
	if (((is_vehicle_tyre_burst(iLocal_181, 0, 0) && is_vehicle_tyre_burst(iLocal_181, 1, 0)) && is_vehicle_tyre_burst(iLocal_181, 4, 0)) && is_vehicle_tyre_burst(iLocal_181, 5, 0))
	{
		return true;
	}
	return false;
}

void func_17()
{
	int iVar0;
	int iVar1;
	
	if (!Local_186.f_4)
	{
		if (func_18(&(Local_358.f_16), &Local_186))
		{
			Local_186.f_4 = 1;
		}
	}
	if (Local_186.f_4)
	{
		if (network_is_player_active(Local_358.f_16))
		{
			Local_186 = {Local_358.f_16};
			Local_186.f_2 = get_player_ped(Local_186);
			if (Local_186.f_1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(get_vehicle_ped_is_in(Local_186.f_2, 0)))
				{
					Local_186.f_3 = get_vehicle_ped_is_in(Local_186.f_2, 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_186.f_2))
	{
		if (!is_entity_dead(Local_186.f_2, 0))
		{
			if (Local_186.f_4)
			{
				if (Local_186.f_1)
				{
					iVar0 = true;
				}
				else
				{
					iVar1 = true;
				}
			}
			else if (get_active_vehicle_mission_type(iLocal_181) != 8)
			{
				if (Local_186.f_1)
				{
					iVar0 = true;
				}
				else
				{
					iVar1 = true;
				}
			}
		}
	}
	if (iVar0)
	{
		task_vehicle_mission(iLocal_182, iLocal_181, Local_186.f_3, 8, 25f, 786468, 200f, 200f, 1);
	}
	else if (iVar1)
	{
		task_vehicle_mission_ped_target(iLocal_182, iLocal_181, Local_186.f_2, 8, 25f, 786468, 200f, 200f, 1);
	}
	Local_186.f_4 = 0;
}

bool func_18(auto uParam0, auto uParam1)
{
	if (*uParam0 != *uParam1)
	{
		return true;
	}
	if (*uParam0.f_1 != *uParam1.f_1)
	{
		return true;
	}
	return false;
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = get_nearest_player_to_entity(iLocal_181);
	if (iVar0 >= 0)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)))
		{
			iVar1 = int_to_playerindex(iVar0);
			iVar2 = get_player_ped(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (!is_entity_dead(iVar2, 0))
				{
					if (iVar1 != Local_358.f_16)
					{
						Local_358.f_16 = iVar1;
					}
					if (is_ped_in_any_vehicle(iVar2, 0))
					{
						if (is_vehicle_driveable(get_vehicle_ped_is_in(iVar2, 0), 0))
						{
							Local_358.f_16.f_1 = 1;
						}
						else
						{
							Local_358.f_16.f_1 = 0;
						}
					}
					else
					{
						Local_358.f_16.f_1 = 0;
					}
				}
			}
		}
	}
}

void func_20()
{
	int iVar0;
	
	if (Local_358.f_6 == 1)
	{
		switch (Local_358.f_7)
		{
			case 0:
				if (func_52() >= 2)
				{
					set_blocking_of_non_temporary_events(iLocal_183, false);
					Local_358.f_7 = 1;
				}
				break;
			
			case 1:
				if (func_52() >= 3)
				{
					set_blocking_of_non_temporary_events(iLocal_183, false);
					Local_358.f_7 = 2;
				}
				break;
			
			case 2:
				if (is_ped_in_any_vehicle(iLocal_183, 1))
				{
					iVar0 = get_script_task_status(iLocal_183, -828834893);
					if (iVar0 != 1 && iVar0 != 0)
					{
						task_leave_any_vehicle(iLocal_183, 0, 257);
					}
				}
				else if (!is_ped_in_combat(iLocal_183, false))
				{
					task_combat_hated_targets_around_ped(iLocal_183, 100f, 0);
				}
				break;
			}
	}
}

bool func_21(int iParam0, int iParam1, auto uParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (!func_14(uParam2))
	{
		func_34(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_22(iParam0, iParam1, 1, uParam2, fParam3, iParam4, iParam5, iParam6))
	{
		return true;
	}
	return false;
}

bool func_22(int iParam0, int iParam1, int iParam2, auto uParam3, float fParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (!func_14(uParam3))
	{
		func_34(uParam3, 0, 0);
	}
	func_26(&Var3, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			if (func_24(iParam0, iParam1, 30))
			{
				if (is_entity_a_ped(iParam0))
				{
					iVar0 = get_ped_index_from_entity_index(iParam0);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (is_ped_a_player(iVar0))
						{
							iVar2 = _network_get_ped_player(iVar0);
							if (iParam2)
							{
								if (_0x024A60DEB0EA69F0(iParam1, iVar2, fParam4, -1))
								{
									if (uParam7 || (!_0x1761DC5D8471CBAA(iParam1, iVar2, 2) && !(Var3.f_7 != 0 && _0x1761DC5D8471CBAA(iParam1, iVar2, 3))))
									{
										if (iParam6)
										{
											return true;
										}
										else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
										{
											return true;
										}
										else
										{
											return false;
										}
									}
								}
							}
							else if (_0x024A60DEB0EA69F0(iParam1, iVar2, fParam4, -1))
							{
								if (iParam6)
								{
									return true;
								}
								else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else if (_0x1761DC5D8471CBAA(iParam1, iVar2, 2))
							{
								if (iParam6)
								{
									return true;
								}
								else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else if (Var3.f_7 != 0 && _0x1761DC5D8471CBAA(iParam1, iVar2, 3))
							{
								if (iParam6)
								{
									return true;
								}
								else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return true;
								}
								else
								{
									return false;
								}
							}
						}
						else if (is_ped_in_any_vehicle(iVar0, 0))
						{
							iVar1 = get_vehicle_ped_is_in(iVar0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar1))
							{
								if (iParam2)
								{
									if (_0x372EF6699146A1E4(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!_0xF0EED5A6BC7B237A(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && _0xF0EED5A6BC7B237A(iParam1, iVar1, 3))))
										{
											if (iParam6)
											{
												return true;
											}
											else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
											{
												return true;
											}
											else
											{
												return false;
											}
										}
									}
								}
								else if (_0x372EF6699146A1E4(iParam1, iVar1, fParam4, -1))
								{
									if (iParam6)
									{
										return true;
									}
									else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return true;
									}
									else
									{
										return false;
									}
								}
								else if (_0xF0EED5A6BC7B237A(iParam1, iVar1, 2))
								{
									if (iParam6)
									{
										return true;
									}
									else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return true;
									}
									else
									{
										return false;
									}
								}
								else if (Var3.f_7 != 0 && _0xF0EED5A6BC7B237A(iParam1, iVar1, 3))
								{
									if (iParam6)
									{
										return true;
									}
									else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return true;
									}
									else
									{
										return false;
									}
								}
							}
						}
						else if (iParam2)
						{
							if (_0x372EF6699146A1E4(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!_0xF0EED5A6BC7B237A(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && _0xF0EED5A6BC7B237A(iParam1, iParam0, 3))))
								{
									if (iParam6)
									{
										return true;
									}
									else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return true;
									}
									else
									{
										return false;
									}
								}
							}
						}
						else if (_0x372EF6699146A1E4(iParam1, iParam0, fParam4, -1))
						{
							if (iParam6)
							{
								return true;
							}
							else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return true;
							}
							else
							{
								return false;
							}
						}
						else if (_0xF0EED5A6BC7B237A(iParam1, iParam0, 2))
						{
							if (iParam6)
							{
								return true;
							}
							else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return true;
							}
							else
							{
								return false;
							}
						}
						else if (Var3.f_7 != 0 && _0xF0EED5A6BC7B237A(iParam1, iParam0, 3))
						{
							if (iParam6)
							{
								return true;
							}
							else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return true;
							}
							else
							{
								return false;
							}
						}
					}
				}
				else if (is_entity_a_vehicle(iParam0) || is_entity_an_object(iParam0))
				{
					if (iParam2)
					{
						if (_0x372EF6699146A1E4(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!_0xF0EED5A6BC7B237A(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && _0xF0EED5A6BC7B237A(iParam1, iParam0, 3))))
							{
								if (iParam6)
								{
									return true;
								}
								else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return true;
								}
								else
								{
									return false;
								}
							}
						}
					}
					else if (_0x372EF6699146A1E4(iParam1, iParam0, fParam4, -1))
					{
						if (iParam6)
						{
							return true;
						}
						else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return true;
						}
						else
						{
							return false;
						}
					}
					else if (_0xF0EED5A6BC7B237A(iParam1, iParam0, 2))
					{
						if (iParam6)
						{
							return true;
						}
						else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return true;
						}
						else
						{
							return false;
						}
					}
					else if (Var3.f_7 != 0 && _0xF0EED5A6BC7B237A(iParam1, iParam0, 3))
					{
						if (iParam6)
						{
							return true;
						}
						else if (iParam5 <= 0 || absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return true;
						}
						else
						{
							return false;
						}
					}
				}
			}
		}
	}
	func_23(uParam3);
	return false;
}

void func_23(auto uParam0)
{
	*uParam0.f_1 = 0;
}

bool func_24(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (get_distance_between_coords(get_entity_coords(iParam0, 1), func_25(iParam1), 1) <= IntToFloat(iParam2))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_25(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_26(auto uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			*uParam0.f_1 = 1215605247;
			*uParam0.f_2 = 0;
			*uParam0.f_3 = {1204.429f, -3110.847f, 4.3988f};
			*uParam0.f_6 = -247372382;
			*uParam0.f_7 = 0;
			*uParam0.f_8 = "MP_GAR_SIMEON";
			*uParam0.f_9.f_1 = {1210.884f, -3122.402f, 5.2118f};
			*uParam0.f_9.f_4 = {4.0534f, 0f, 32.6363f};
			*uParam0.f_9.f_7 = 32.498f;
			*uParam0.f_9.f_8 = {1210.884f, -3122.402f, 5.2118f};
			*uParam0.f_9.f_11 = {4.0534f, 0f, 32.6363f};
			*uParam0.f_9.f_14 = 32.498f;
			*uParam0.f_27 = {1204.157f, -3122.599f, 3.795331f};
			*uParam0.f_27.f_3 = {1204.24f, -3099.772f, 8.400777f};
			*uParam0.f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			*uParam0.f_1 = -1710530912;
			*uParam0.f_2 = 1;
			*uParam0.f_3 = {725.1831f, -1089.349f, 21.1692f};
			*uParam0.f_7 = 0;
			*uParam0.f_8 = "MP_GAR_PNS_2";
			*uParam0.f_9.f_1 = {734.3793f, -1078.791f, 23.4305f};
			*uParam0.f_9.f_4 = {-16.432f, 0f, -19.7978f};
			*uParam0.f_9.f_7 = 60.0199f;
			*uParam0.f_9.f_8 = {734.3027f, -1079.004f, 23.4973f};
			*uParam0.f_9.f_11 = {-16.432f, 0f, -19.7978f};
			*uParam0.f_9.f_14 = 60.0199f;
			*uParam0.f_27 = {738.8857f, -1088.516f, 20.55957f};
			*uParam0.f_27.f_3 = {718.613f, -1088.78f, 24.83263f};
			*uParam0.f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			*uParam0.f_1 = 1131590004;
			*uParam0.f_2 = 2;
			*uParam0.f_3 = {-1164.887f, -2011.105f, 12.25371f};
			*uParam0.f_7 = 0;
			*uParam0.f_8 = "MP_GAR_NEUT_PNS_3";
			*uParam0.f_9.f_1 = {-1161.774f, -2010.27f, 14.2468f};
			*uParam0.f_9.f_4 = {-17.3415f, 0f, 113.6889f};
			*uParam0.f_9.f_7 = 64.5334f;
			*uParam0.f_9.f_8 = {-1161.639f, -2010.211f, 14.2928f};
			*uParam0.f_9.f_11 = {-17.3415f, 0f, 113.6889f};
			*uParam0.f_9.f_14 = 64.5334f;
			*uParam0.f_27 = {-1169.723f, -2015.923f, 11.50441f};
			*uParam0.f_27.f_3 = {-1160.558f, -2007.005f, 15.68027f};
			*uParam0.f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			*uParam0.f_1 = 916723671;
			*uParam0.f_2 = 3;
			*uParam0.f_3 = {-330.44f, -143.39f, 39.33f};
			*uParam0.f_7 = 0;
			*uParam0.f_8 = "MP_GAR_PNS_4";
			*uParam0.f_9.f_1 = {-332.1567f, -141.0546f, 40.2864f};
			*uParam0.f_9.f_4 = {-20.6629f, 0f, -134.7887f};
			*uParam0.f_9.f_7 = 60.0241f;
			*uParam0.f_9.f_8 = {-332.3621f, -140.8507f, 40.3956f};
			*uParam0.f_9.f_11 = {-20.6629f, 0f, -134.7887f};
			*uParam0.f_9.f_14 = 60.0241f;
			*uParam0.f_27 = {-323.7998f, -146.2539f, 37.81492f};
			*uParam0.f_27.f_3 = {-334.3432f, -141.7261f, 40.75964f};
			*uParam0.f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			*uParam0.f_1 = 1340820069;
			*uParam0.f_2 = 4;
			*uParam0.f_3 = {106.28f, 6620.01f, 32.12f};
			*uParam0.f_7 = 0;
			*uParam0.f_8 = "MP_GAR_PNS_5";
			*uParam0.f_9.f_1 = {106.688f, 6617.322f, 32.5026f};
			*uParam0.f_9.f_4 = {-10.7437f, 0f, 21.7154f};
			*uParam0.f_9.f_7 = 67.562f;
			*uParam0.f_9.f_8 = {106.7971f, 6617.048f, 32.5586f};
			*uParam0.f_9.f_11 = {-10.7437f, 0f, 21.7154f};
			*uParam0.f_9.f_14 = 67.562f;
			*uParam0.f_27 = {100.9759f, 6625.046f, 30.60301f};
			*uParam0.f_27.f_3 = {111.2522f, 6615.657f, 33.62929f};
			*uParam0.f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			*uParam0.f_1 = -866958545;
			*uParam0.f_2 = 5;
			*uParam0.f_3 = {1182.65f, 2641.9f, 38.05f};
			*uParam0.f_7 = 0;
			*uParam0.f_9.f_1 = {1184.206f, 2644.004f, 38.7458f};
			*uParam0.f_9.f_4 = {-15.4014f, 0f, 161.4493f};
			*uParam0.f_9.f_7 = 67.3374f;
			*uParam0.f_9.f_8 = {1184.345f, 2644.418f, 38.866f};
			*uParam0.f_9.f_11 = {-15.4014f, 0f, 161.4493f};
			*uParam0.f_9.f_14 = 67.3374f;
			*uParam0.f_27 = {1182.835f, 2634.775f, 36.55006f};
			*uParam0.f_27.f_3 = {1182.578f, 2647.955f, 39.58602f};
			*uParam0.f_27.f_6 = 5.5f;
			return;
			break;
	}
}

bool func_27()
{
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_358.f_5))
	{
		if (get_entity_health(net_to_obj(Local_358.f_5)) <= 50)
		{
			return true;
		}
	}
	return false;
}

bool func_28()
{
	if (network_is_participant_active(int_to_participantindex(iLocal_98)))
	{
		if (func_11(network_get_player_index(int_to_participantindex(iLocal_98)), 1, 1))
		{
			if (Local_383[iLocal_98 /*7*/].f_2)
			{
				return true;
			}
		}
	}
	iLocal_98++;
	if (iLocal_98 >= _network_get_num_participants_host())
	{
		iLocal_98 = false;
	}
	return false;
}

int func_29()
{
	int iVar0;
	
	if (func_13(&(Local_358.f_23), 600000, 0))
	{
		iVar0 = 1;
	}
	else if (func_30(250))
	{
		func_23(&uLocal_101);
	}
	else if (!func_14(&uLocal_101))
	{
		func_34(&uLocal_101, 0, 0);
	}
	else if (func_13(&uLocal_101, 30000, 0))
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	
	if (network_is_participant_active(int_to_participantindex(iLocal_100)))
	{
		iVar0 = int_to_participantindex(iLocal_100);
		iVar1 = network_get_player_index(iVar0);
		if (func_11(iVar1, 1, 1))
		{
			vVar2 = {func_10(network_get_player_index(int_to_participantindex(iLocal_100)))};
			if (vdist(vVar2, vLocal_173) < to_float(iParam0))
			{
				return true;
			}
		}
	}
	iLocal_100++;
	if (iLocal_100 >= 32)
	{
		iLocal_100 = false;
	}
	return false;
}

void func_31()
{
	if (func_52() == 2)
	{
		func_32(3);
	}
	switch (Local_358.f_13)
	{
		case 0:
			if (!iLocal_160)
			{
				func_32(2);
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_32(int iParam0)
{
	Local_358.f_13 = iParam0;
}

void func_33(int iParam0)
{
	Local_358.f_1 = iParam0;
}

void func_34(auto uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
		{
			if (!iParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		*uParam0.f_1 = 1;
	}
}

bool func_35()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_159)
	{
		if (func_39(&(Local_358.f_2), joaat("stockade"), vLocal_142, fLocal_145, 1, 1, 1, 0, 1, 1))
		{
			set_vehicle_doors_locked(net_to_veh(Local_358.f_2), 2);
			_0x3FA36981311FA4FF(Local_358.f_2, 1);
			set_vehicle_tyres_can_burst(net_to_veh(Local_358.f_2), true);
			set_model_as_no_longer_needed(joaat("stockade"));
			set_vehicle_is_stolen(net_to_veh(Local_358.f_2), true);
			if (decor_is_registered_as_type("MPBitset", 3))
			{
				if (decor_exist_on(net_to_veh(Local_358.f_2), "MPBitset"))
				{
					iVar2 = decor_get_int(net_to_veh(Local_358.f_2), "MPBitset");
				}
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar2, 10);
				decor_set_int(net_to_veh(Local_358.f_2), "MPBitset", iVar2);
			}
			if (func_38(&(Local_358.f_3), Local_358.f_2, 4, joaat("mp_s_m_armoured_01"), -1, 1, 1, 1))
			{
				set_entity_is_target_priority(net_to_ped(Local_358.f_3), 1, 100f);
				set_blocking_of_non_temporary_events(net_to_ped(Local_358.f_3), true);
				_0x3FA36981311FA4FF(Local_358.f_3, 1);
				PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_358.f_3), Global_1574236);
				PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_358.f_3), 116, false);
				fVar1 = IntToFloat(get_entity_health(net_to_ped(Local_358.f_3))) * Global_262145.f_151;
				iVar0 = round(fVar1);
				set_entity_max_health(net_to_ped(Local_358.f_3), iVar0);
				set_entity_health(net_to_ped(Local_358.f_3), iVar0);
				if (Local_358.f_6 != 1)
				{
					if (func_36())
					{
						Local_358.f_15 = 1;
						set_model_as_no_longer_needed(joaat("mp_s_m_armoured_01"));
						return true;
					}
				}
				else if (func_38(&(Local_358.f_4), Local_358.f_2, 4, joaat("mp_s_m_armoured_01"), 0, 1, 1, 1))
				{
					set_entity_is_target_priority(net_to_ped(Local_358.f_4), 1, 100f);
					set_blocking_of_non_temporary_events(net_to_ped(Local_358.f_4), true);
					give_weapon_to_ped(net_to_ped(Local_358.f_4), joaat("weapon_pistol"), 1000, true, true);
					set_ped_infinite_ammo(net_to_ped(Local_358.f_4), 1, joaat("weapon_pistol"));
					PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_358.f_4), 2, false);
					_0x3FA36981311FA4FF(Local_358.f_4, 1);
					PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_358.f_4), Global_1574236);
					PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_358.f_4), 116, false);
					set_model_as_no_longer_needed(joaat("mp_s_m_armoured_01"));
					fVar1 = IntToFloat(get_entity_health(net_to_ped(Local_358.f_4))) * Global_262145.f_151;
					iVar0 = round(fVar1);
					set_entity_max_health(net_to_ped(Local_358.f_4), iVar0);
					set_entity_health(net_to_ped(Local_358.f_4), iVar0);
					if (func_36())
					{
						Local_358.f_15 = 1;
						set_model_as_no_longer_needed(joaat("prop_cs_cardbox_01"));
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_36()
{
	Vector3 vVar0;
	
	vVar0 = {0f, -3.57f, 1.04f};
	if (func_37(&(Local_358.f_5), joaat("prop_cs_cardbox_01"), vVar0, 1, 1, 0, 1))
	{
		attach_entity_to_entity(net_to_obj(Local_358.f_5), net_to_veh(Local_358.f_2), 0, vVar0, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		set_entity_health(net_to_obj(Local_358.f_5), get_entity_health(net_to_obj(Local_358.f_5)) / 2);
		set_entity_visible(net_to_obj(Local_358.f_5), false, 0);
		set_entity_proofs(net_to_obj(Local_358.f_5), false, true, false, false, false, false, 0, false);
		return true;
	}
	return false;
}

bool func_37(auto uParam0, int iParam1, Vector3 vParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!can_register_mission_objects(1))
	{
		return false;
	}
	*uParam0 = obj_to_net(create_object(iParam1, vParam2, iParam6, iParam5, iParam7));
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(net_to_obj(*uParam0), iParam8);
		if (_0xC7827959479DCC78(net_to_obj(*uParam0)))
		{
			if (iParam5)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

bool func_38(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (!network_does_network_id_exist(iParam1))
	{
		return false;
	}
	if (!is_vehicle_driveable(net_to_veh(iParam1), 0))
	{
		return false;
	}
	*uParam0 = ped_to_net(PED::CREATE_PED_inside_vehicle(net_to_veh(iParam1), iParam2, iParam3, iParam4, iParam6, iParam5));
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(net_to_ped(*uParam0), iParam7);
		if (_0xC7827959479DCC78(net_to_ped(*uParam0)))
		{
			if (iParam5)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

bool func_39(auto uParam0, int iParam1, Vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!can_register_mission_vehicles(1))
	{
		return false;
	}
	if (iParam11)
	{
		clear_area_of_vehicles(vParam2, 1f, 0, 0, 1, 1, true);
	}
	iVar0 = create_vehicle(iParam1, vParam2, fParam5, iParam7, iParam6);
	*uParam0 = veh_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(iVar0, iParam10);
		if (_0xC7827959479DCC78(iVar0))
		{
			if (iParam8)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
			else
			{
				set_network_id_exists_on_all_machines(*uParam0, 0);
			}
		}
		set_vehicle_is_stolen(iVar0, iParam9);
		return true;
	}
	return false;
}

bool func_40()
{
	if (network_is_participant_active(participant_id()))
	{
		if (iLocal_163)
		{
			if (func_41())
			{
				return true;
			}
		}
	}
	return false;
}

int func_41()
{
	int iVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	
	if (iLocal_159)
	{
		return true;
	}
	if (!iVar0)
	{
		if (get_nth_closest_vehicle_node_with_heading(vLocal_170, iLocal_87, &vLocal_142, &fLocal_145, &uVar1, 0, 3f, 0f))
		{
			if (get_distance_between_coords(-1367.557f, -3220.598f, 12.9448f, vLocal_170, 1) >= 600f)
			{
				if (get_distance_between_coords(vLocal_170, vLocal_142, 1) >= 75f)
				{
					_0x07FB139B592FA687(vLocal_170.x - 250f, vLocal_170.y - 250f, vLocal_170.x + 250f, vLocal_170.y + 250f);
					if (get_vehicle_node_properties(vLocal_142, &uVar2, &uVar3))
					{
						if (uVar3 & 1 == 0)
						{
							if (iLocal_88 <= 200)
							{
								if (func_42(vLocal_142, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
								{
									iVar0 = true;
								}
							}
							else
							{
								iVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	if (!iVar0)
	{
		iLocal_87 += 3;
		if (iLocal_87 >= 150)
		{
			iLocal_87 = 40;
			iLocal_88++;
		}
	}
	return iVar0;
}

bool func_42(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
{
	Global_2404956 = 0;
	if (fParam3 > 0f)
	{
		if (is_any_vehicle_near_point(vParam0, fParam3))
		{
			return false;
		}
	}
	if (fParam4 > 0f)
	{
		if (is_any_ped_near_point(vParam0.x, vParam0.y, vParam0.z + 1f, fParam4) || is_any_ped_near_point(vParam0, fParam4))
		{
			return false;
		}
	}
	if (fParam5 > 0f)
	{
		if (is_any_object_near_point(vParam0, fParam5, iParam18))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam13)
	{
		if (get_number_of_fires_in_range(vParam0, 2.5f) > 0)
		{
			return false;
		}
	}
	Global_2404956++;
	if (fParam14 > 0f)
	{
		if (func_43(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_5(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_43(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_11(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!PED::IS_PED_INJURED(get_player_ped(iVar1)) && func_6(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_44(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_10(iVar1), vParam0, 1) < fParam3)
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (func_49(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_48(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_45(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_45(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (!iVar0 == func_46())
	{
		if (iVar0 == func_47(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_46()
{
	return -1;
}

int func_47(int iParam0)
{
	if (iParam0 != func_46())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_46();
}

struct<13> func_48(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_49(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_48(iParam0)};
		Global_2459453 = {func_48(iParam1)};
		if (network_clan_player_is_active(&Global_2459440))
		{
			if (network_clan_player_is_active(&Global_2459453))
			{
				network_clan_player_get_desc(&Global_2459370, 35, &Global_2459440);
				network_clan_player_get_desc(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_50()
{
	if ((func_51(joaat("stockade")) && func_51(joaat("mp_s_m_armoured_01"))) && func_51(joaat("prop_cs_cardbox_01")))
	{
		return true;
	}
	return false;
}

int func_51(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0);
	return has_model_loaded(iParam0);
}

auto func_52()
{
	return Local_358.f_1;
}

void func_53()
{
	Local_358.f_11 = get_clock_hours();
	if (Local_358.f_11 >= 1 && Local_358.f_11 < 11)
	{
		if (Local_358.f_10 != 2)
		{
			Local_358.f_10 = 2;
		}
	}
	else if (Local_358.f_11 >= 12 && Local_358.f_11 < 22)
	{
		if (Local_358.f_10 != 1)
		{
			Local_358.f_10 = 1;
		}
	}
	else if (Local_358.f_10 != 0)
	{
		Local_358.f_10 = 0;
	}
	switch (Local_358.f_10)
	{
		case 2:
			switch (Local_358.f_11)
			{
				case 1:
					if (Local_358.f_12 != 0)
					{
						Local_358.f_12 = 0;
					}
					break;
				
				case 3:
					if (Local_358.f_12 != 1)
					{
						Local_358.f_12 = 1;
					}
					break;
				
				case 5:
					if (Local_358.f_12 != 2)
					{
						Local_358.f_12 = 2;
					}
					break;
				
				case 7:
					if (Local_358.f_12 != 3)
					{
						Local_358.f_12 = 3;
					}
					break;
				
				case 9:
					if (Local_358.f_12 != 4)
					{
						Local_358.f_12 = 4;
					}
					break;
			}
			break;
		
		case 1:
			switch (Local_358.f_11)
			{
				case 12:
					if (Local_358.f_12 != 0)
					{
						Local_358.f_12 = 0;
					}
					break;
				
				case 14:
					if (Local_358.f_12 != 1)
					{
						Local_358.f_12 = 1;
					}
					break;
				
				case 16:
					if (Local_358.f_12 != 2)
					{
						Local_358.f_12 = 2;
					}
					break;
				
				case 18:
					if (Local_358.f_12 != 3)
					{
						Local_358.f_12 = 3;
					}
					break;
				
				case 20:
					if (Local_358.f_12 != 4)
					{
						Local_358.f_12 = 4;
					}
					break;
			}
			break;
		
		case 0:
			if (Local_358.f_12 != 0)
			{
				Local_358.f_12 = 0;
			}
			break;
	}
}

void func_54()
{
	if (iLocal_159)
	{
		if (!Local_358.f_22)
		{
			if (Global_2428492.f_3409)
			{
				Local_358.f_22 = 1;
			}
		}
	}
}

void func_55()
{
	func_178();
	func_175();
	func_173();
	if (iLocal_165)
	{
		Global_2428492.f_3407 = iLocal_181;
	}
	func_170();
	func_168();
	func_164();
	func_163();
	func_157();
	func_156();
	func_138();
	func_137();
	func_84();
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_358.f_5))
	{
		if (network_has_control_of_network_id(Local_358.f_5))
		{
			set_entity_visible(net_to_obj(Local_358.f_5), false, 0);
		}
	}
	if (func_83())
	{
		if (does_blip_exist(iLocal_179))
		{
			remove_blip(&iLocal_179);
		}
	}
	if (iLocal_167)
	{
		if (iLocal_168)
		{
			func_82();
		}
	}
	switch (func_81())
	{
		case 0:
			func_79();
			break;
		
		case 1:
			func_64();
			if (iLocal_159)
			{
				func_63();
				func_61();
				if (!iLocal_160)
				{
					func_58();
				}
			}
			func_79();
			break;
		
		case 2:
			func_64();
			if (iLocal_159)
			{
				func_61();
				func_63();
			}
			func_79();
			break;
		
		case 3:
			func_64();
			if (iLocal_159)
			{
				func_63();
				func_61();
				if (!iLocal_160)
				{
					func_56();
				}
			}
			func_79();
			break;
		
		case 4:
			func_79();
			break;
		
		case 6:
			if (((!network_does_network_id_exist(Local_358.f_2) && !network_does_network_id_exist(Local_358.f_3)) && !network_does_network_id_exist(Local_358.f_4)) && !network_does_network_id_exist(Local_358.f_5))
			{
				func_64();
			}
			break;
	}
}

void func_56()
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_script_task_status(iLocal_182, 1805844857);
	if (iVar1 != 1 && iVar1 != 0)
	{
		if (func_57(Local_358.f_3))
		{
			if (network_has_control_of_network_id(Local_358.f_3))
			{
				if (!iLocal_149)
				{
					iVar0 = Global_1574236;
					PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_182, iVar0);
					iLocal_149 = 1;
				}
				set_ped_flee_attributes(iLocal_182, 1440, true);
				set_ped_flee_attributes(iLocal_182, 2, false);
				if (iLocal_167)
				{
					if (!iLocal_168)
					{
						task_smart_flee_ped(iLocal_182, iLocal_184, 100f, 999999, 0, 1);
					}
				}
			}
		}
		else if (network_is_host_of_this_script())
		{
			network_request_control_of_network_id(Local_358.f_3);
		}
	}
}

bool func_57(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		if (!_0xA1607996431332DF(iParam0))
		{
			if (!network_is_host_of_this_script())
			{
				return false;
			}
		}
		else if (!network_has_control_of_network_id(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_58()
{
	int iVar0;
	
	switch (Local_358.f_13)
	{
		case 0:
			break;
		
		case 1:
			iVar0 = get_script_task_status(iLocal_182, -1817882002);
			if (iVar0 != 1 && iVar0 != 0)
			{
				if (func_57(Local_358.f_3))
				{
					if (network_has_control_of_network_id(Local_358.f_3))
					{
						task_vehicle_drive_to_coord(iLocal_182, iLocal_181, func_59(), 10f, 0, joaat("stockade"), 786599, 1.5f, 3f);
					}
					else
					{
						network_request_control_of_network_id(Local_358.f_3);
					}
				}
			}
			break;
		
		case 2:
			if (network_has_control_of_network_id(Local_358.f_3))
			{
				iVar0 = get_script_task_status(iLocal_182, -258271821);
				if (iVar0 != 1 && iVar0 != 0)
				{
					if (func_57(Local_358.f_3))
					{
						if (network_has_control_of_network_id(Local_358.f_3))
						{
							task_vehicle_drive_wander(iLocal_182, iLocal_181, 10f, 524459);
						}
						else
						{
							network_request_control_of_network_id(Local_358.f_3);
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_59()
{
	return func_60(Local_358.f_10, Local_358.f_12);
}

Vector3 func_60(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1073.044f, -428.7717f, 35.5372f;
					break;
				
				case 1:
					return -27.8031f, -725.2526f, 31.8345f;
					break;
				
				case 2:
					return 967.7739f, -190.2949f, 71.5271f;
					break;
				
				case 3:
					return -241.6611f, -707.6798f, 32.509f;
					break;
				
				case 4:
					return -355.0995f, -224.6928f, 36.2889f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -249.0916f, -771.8771f, 31.4402f;
					break;
				
				case 1:
					return -241.6611f, -707.6798f, 32.509f;
					break;
				
				case 2:
					return -1386.376f, -285.1455f, 42.1656f;
					break;
				
				case 3:
					return -670.9879f, -223.1932f, 36.1603f;
					break;
				
				case 4:
					return -355.0995f, -224.6928f, 36.2889f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_61()
{
	struct<2> Var0;
	
	if (!func_14(&Local_92))
	{
		func_34(&Local_92, 0, 0);
	}
	else if (func_13(&Local_92, 500, 0))
	{
		vLocal_146 = {func_62()};
		func_23(&Local_92);
		Local_92 = {Var0};
	}
}

Vector3 func_62()
{
	struct<2> Var0;
	auto uVar3;
	int iVar6;
	
	iVar6 = ENTITY::GET_ENTITY_MODEL(iLocal_181);
	if (iVar6 != 0)
	{
		get_model_dimensions(iVar6, &Var0, &uVar3);
		return get_offset_from_entity_in_world_coords(iLocal_181, 0f, Var0.f_1 - 0.5f, 0f);
	}
	return 0f, 0f, 0f;
}

void func_63()
{
	int iVar0;
	
	iVar0 = true;
	if (!iLocal_160)
	{
		if (is_ped_in_vehicle(iLocal_182, iLocal_181, 0))
		{
			iLocal_156 = true;
			iVar0 = false;
		}
	}
	if (!iLocal_158)
	{
		if (iLocal_156)
		{
			if (iVar0)
			{
				if (func_57(Local_358.f_2))
				{
					if (network_has_control_of_network_id(Local_358.f_2))
					{
						set_ped_targettable_vehicle_destroy(iLocal_181, 0, 1);
						set_ped_targettable_vehicle_destroy(iLocal_181, 1, 1);
						iLocal_158 = 1;
					}
					else
					{
						network_request_control_of_network_id(Local_358.f_2);
					}
				}
			}
		}
	}
}

void func_64()
{
	if (iLocal_167)
	{
		if (!iLocal_168)
		{
			if (iLocal_165)
			{
				if (iLocal_159)
				{
					if (!is_ped_in_vehicle(iLocal_184, iLocal_181, 0))
					{
					}
					else if (!iLocal_157)
					{
						func_75(818, 1, -1);
						iLocal_157 = 1;
					}
				}
			}
		}
	}
	if (!Local_383[participant_id_to_int() /*7*/].f_6)
	{
		if (iLocal_165)
		{
			if (iLocal_159)
			{
				if (does_blip_exist(iLocal_179))
				{
					if (func_71())
					{
						set_blip_display(iLocal_179, 0);
					}
					else
					{
						set_blip_display(iLocal_179, 4);
					}
				}
				else
				{
					iLocal_179 = add_blip_for_entity(iLocal_181);
					set_blip_sprite(iLocal_179, 67);
					set_blip_scale(iLocal_179, 1f);
					set_blip_priority(iLocal_179, 3);
					set_blip_name_from_text_file(iLocal_179, "MP_ACT_SV");
					if (func_71())
					{
						set_blip_display(iLocal_179, 0);
					}
					Global_2460486.f_4408 = 1;
				}
			}
		}
	}
	else
	{
		if (does_blip_exist(iLocal_179))
		{
			remove_blip(&iLocal_179);
		}
		Global_2460486.f_4408 = 0;
	}
	if (!Global_2428492.f_3406)
	{
		if (!iLocal_150)
		{
			if (is_player_control_on(iLocal_185))
			{
				if (!func_66(iLocal_185, 1))
				{
					if (func_71())
					{
						func_65("AMSECVAN_SHRTBP", -1);
					}
					iLocal_150 = 1;
					Global_2428492.f_3406 = 1;
				}
			}
		}
	}
}

void func_65(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_66(int iParam0, int iParam1)
{
	if (Global_1312447 != 0)
	{
		return func_70(iParam0) != 0;
	}
	return func_67(iParam0, iParam1);
}

bool func_67(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_68(iParam0))
		{
			return true;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return false;
	}
	return true;
}

int func_68(auto uParam0)
{
	return func_69(uParam0);
}

int func_69(auto uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

int func_70(int iParam0)
{
	if (func_11(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

bool func_71()
{
	if (func_72(14))
	{
		return true;
	}
	if (func_72(0))
	{
		return true;
	}
	return false;
}

int func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = func_73(2458, -1, 0);
	return is_bit_set(iVar0, iParam0);
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_74(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_9();
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

void func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_73(iParam0, func_74(iParam2), 0);
	iVar0 += iParam1;
	if (!func_78(iParam0))
	{
		func_77(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_76(iParam0, iVar0, iParam2, 1);
	}
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_74(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_74(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_74(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_74(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_74(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_74(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_74(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_74(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_74(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_74(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_74(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_74(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_74(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_74(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_74(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_74(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_74(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_74(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_74(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_74(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_74(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_74(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_74(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_74(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_74(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_74(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_74(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_74(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_74(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_74(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_74(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_74(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_74(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

bool func_78(int iParam0)
{
	if (Global_1347635)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2907:
			case 3036:
			case 3891:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return true;
				break;
			}
	}
	return false;
}

void func_79()
{
	if (func_81() != 6)
	{
		switch (func_52())
		{
			case 0:
				if (func_81() != 0)
				{
					func_80(0);
				}
				break;
			
			case 1:
				if (func_81() != 1)
				{
					func_80(1);
				}
				break;
			
			case 2:
				if (func_81() != 2)
				{
					func_80(2);
				}
				break;
			
			case 3:
				if (func_81() != 3)
				{
					func_80(3);
				}
				break;
			
			case 4:
				if (func_81() != 4)
				{
					func_80(4);
				}
				break;
			
			case 6:
				if (func_81() != 6)
				{
					func_80(6);
				}
				break;
			}
	}
}

void func_80(int iParam0)
{
	Local_383[participant_id_to_int() /*7*/].f_1 = iParam0;
}

auto func_81()
{
	return Local_383[participant_id_to_int() /*7*/].f_1;
}

void func_82()
{
	Local_383[participant_id_to_int() /*7*/].f_2 = 0;
	iLocal_151 = 0;
}

auto func_83()
{
	return Global_1573832;
}

void func_84()
{
	if (Global_2428492.f_3409)
	{
		if (uLocal_164 || func_27())
		{
			func_87();
			func_86();
		}
	}
	if (iLocal_159)
	{
		if (!is_bit_set(Local_383[participant_id_to_int() /*7*/].f_5, false))
		{
			if ((Local_383[participant_id_to_int() /*7*/].f_6 || uLocal_164) || func_27())
			{
				if (vdist(vLocal_170, vLocal_146) <= 60f)
				{
					if (!iLocal_153)
					{
						if (!func_66(iLocal_185, 1))
						{
							if (func_71())
							{
								func_65("AMSECVAN_DROP", -1);
							}
							iLocal_153 = 1;
						}
					}
					if (func_85("AMSECVAN_DROP"))
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_383[participant_id_to_int() /*7*/].f_5), false);
					}
				}
				else
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_383[participant_id_to_int() /*7*/].f_5), false);
				}
			}
		}
	}
}

auto func_85(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

auto func_86()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (iLocal_165)
	{
		if (_0xA1607996431332DF(Local_358.f_2))
		{
			if (network_has_control_of_network_id(Local_358.f_2))
			{
				if (!Local_383[participant_id_to_int() /*7*/].f_6)
				{
					if (func_51(Global_2460486.f_4396))
					{
						if (!func_14(&uLocal_96))
						{
							set_vehicle_doors_locked(iLocal_181, 1);
							set_vehicle_door_open(iLocal_181, 2, 1, 0);
							set_vehicle_door_open(iLocal_181, 3, 1, 0);
							if (func_27())
							{
								set_vehicle_door_control(iLocal_181, 2, 1, 1f);
								set_vehicle_door_control(iLocal_181, 3, 1, 1f);
							}
							func_34(&uLocal_96, 0, 0);
						}
						else if (func_13(&uLocal_96, 1000, 0))
						{
							iVar1 = get_random_int_in_range(2, 6);
							iVar2 = get_random_int_in_range(4000, 12001);
							fVar3 = to_float(iVar2);
							fVar4 = to_float(iVar1);
							fVar3 *= Global_262145.f_2420;
							if (Global_262145.f_2422 != 0f)
							{
								if (fVar3 > 12000f * Global_262145.f_2422)
								{
									fVar3 = 12000f * Global_262145.f_2422;
								}
							}
							if (Global_262145.f_2421 != 0f)
							{
								if (fVar3 < 4000f * Global_262145.f_2421)
								{
									fVar3 = 4000f * Global_262145.f_2421;
								}
							}
							fVar3 /= fVar4;
							iVar2 = round(fVar3);
							iVar0 = 0;
							while (iVar0 < iVar1)
							{
								if (iLocal_159)
								{
									vLocal_146 = {func_62()};
								}
								vLocal_146.z += 0.1f;
								create_ambient_pickup(Global_2460486.f_4395, vLocal_146, 0, iVar2, Global_2460486.f_4396, 0, 1);
								iVar0++;
							}
							Local_383[participant_id_to_int() /*7*/].f_6 = 1;
							if (does_blip_exist(iLocal_179))
							{
								remove_blip(&iLocal_179);
							}
							set_model_as_no_longer_needed(Global_2460486.f_4396);
						}
					}
				}
			}
			else
			{
				Local_383[participant_id_to_int() /*7*/].f_6 = 1;
			}
		}
		else if (network_is_host_of_this_script())
		{
			network_request_control_of_network_id(Local_358.f_2);
		}
	}
	return Local_383[participant_id_to_int() /*7*/].f_6;
}

void func_87()
{
	int iVar0;
	
	if (!iLocal_152)
	{
		if (Local_358.f_15)
		{
			if (iLocal_165)
			{
				if (get_distance_between_coords(vLocal_170, vLocal_173, 1) <= 30f && iLocal_105[participant_id_to_int()] == 1)
				{
					iVar0 = 2000 / func_136();
					iVar0 = round(IntToFloat(iVar0) * Global_262145.f_4212);
					if ((Local_358.f_22 || func_27()) || Global_2428492.f_3409)
					{
						func_134();
						func_131(18, 1, -1);
						_0x7EEC2A316C250073(Local_358.f_18[0], iVar0, 0);
						func_90(2, iLocal_181, "XPT_RBBDVAN0", -1636175450, -2028358378, iVar0, 1, -1, 0, 0);
						func_77(1139, func_73(1139, -1, 0) + 1, -1, 1);
						func_88(20, 1);
					}
				}
			}
		}
	}
	iLocal_152 = 1;
}

void func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_89() /*10375*/].f_7704.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_89() /*10375*/].f_7704.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_89() /*10375*/].f_7704.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_89() /*10375*/].f_7704.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_89() /*10375*/].f_7704.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_89() /*10375*/].f_7704.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_89() /*10375*/].f_7704.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_89() /*10375*/].f_7704.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_89() /*10375*/].f_7704.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_89() /*10375*/].f_7704.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_89() /*10375*/].f_7704.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_89() /*10375*/].f_7704.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_89() /*10375*/].f_7704.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_89() /*10375*/].f_7704.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_89() /*10375*/].f_7704.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_89() /*10375*/].f_7704.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_89() /*10375*/].f_7704.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_89() /*10375*/].f_7704.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_89() /*10375*/].f_7704.f_30 = iVar0;
			break;
	}
}

int func_89()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_90(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_96(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_91(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_91(int iParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0;
	
	vVar0 = {func_94(iParam0, 1)};
	if (iParam0 == func_93(PLAYER::PLAYER_PED_ID()))
	{
		func_92(1);
	}
	func_96(vVar0, iParam1, 0, sParam2);
}

void func_92(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_93(int iParam0)
{
	return iParam0;
}

Vector3 func_94(int iParam0, int iParam1)
{
	Vector3 vVar0;
	float fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_95(PLAYER::PLAYER_PED_ID()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = {get_offset_from_entity_in_world_coords(iParam0, 0f, 2f, -0.2f)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	fVar3 = 0f;
	if (!is_entity_dead(iParam0, 0))
	{
		fVar3 = get_entity_heading(iParam0);
	}
	get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar4, &vVar7);
	if (iParam1)
	{
		fVar10 = vVar7.z + 0.18f;
	}
	else
	{
		fVar10 = vVar4.z + 0.18f;
	}
	vVar0 = {_get_object_offset_from_coords(vVar0, fVar3, 0f, 0f, fVar10)};
	return vVar0;
}

int func_95(int iParam0)
{
	return iParam0;
}

void func_96(Vector3 vParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428492.f_774[iVar0 /*29*/].f_6 == 0 || Global_2428492.f_774[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428492.f_774[iVar1 /*29*/] = {vParam0};
			Global_2428492.f_774[iVar1 /*29*/].f_6 = 1;
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_99(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_98();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_97();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_97()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

auto func_98()
{
	auto uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_99(Vector3 vParam0, auto uParam1, auto uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = get_distance_between_coords(get_gameplay_cam_coord(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = 1f - fVar0 - 5f / 20f - 5f;
	fVar2 = fVar1 * 0.402f - 0.212f;
	fVar3 = fVar1 * 0.476f - 0.286f;
	*uParam3 = fVar2 + 0.212f;
	*uParam4 = fVar3 + 0.286f;
	return fVar1;
}

auto func_100(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_101(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_101(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_130(player_id()) || func_129(player_id()))
	{
		if (Global_262145.f_7596 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7596;
		}
	}
	else if (Global_262145.f_5039 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5039;
	}
	if (func_128(sParam2))
	{
	}
	if (func_127())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_125(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_124(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_122(0, &iVar1);
					break;
				
				case 3:
					func_122(1, &iVar1);
					break;
				
				case 1:
					func_119(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (iParam7)
		{
			func_75(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_111(func_118(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_75(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_106(iVar1);
				}
			}
		}
		if (iParam5)
		{
		}
		if (iParam7)
		{
			if (iParam6 == -1)
			{
				func_102(func_104(player_id()) + iVar1);
			}
			else
			{
				func_102(func_104(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_102(int iParam0)
{
	if (func_127())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_103(joaat("mpply_globalxp"), iParam0);
	}
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, 1);
	}
}

int func_104(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_11(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_105(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_105(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = iParam0;
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_106(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_48(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_109(func_110(&Var0));
			if (iVar13 == 0)
			{
				func_108(&Global_1347641, iParam0);
				func_107(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_108(&Global_1347642, iParam0);
				func_107(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_108(&Global_1347643, iParam0);
				func_107(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_108(&Global_1347644, iParam0);
				func_107(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_108(&Global_1347645, iParam0);
				func_107(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347652 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_108(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_109(int iParam0)
{
	if (iParam0 == Global_1347636)
	{
		return 0;
	}
	else if (iParam0 == Global_1347637)
	{
		return 1;
	}
	else if (iParam0 == Global_1347638)
	{
		return 2;
	}
	else if (iParam0 == Global_1347639)
	{
		return 3;
	}
	else if (iParam0 == Global_1347640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

auto func_110(auto uParam0)
{
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(uParam0))
		{
			return Global_2443013;
		}
	}
	return Global_2443013;
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	if (func_127())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_74(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_74(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 == 0)
			{
				playstats_award_xp(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 < 0)
			{
				playstats_award_xp(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_117(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_115(iParam0, 1);
		}
		func_76(632, iParam0, -1, 1);
		func_77(633, func_115(iParam0, 1), -1, 1);
		Global_1347756[func_74(-1)] = iParam0;
		func_112(7, 0);
	}
}

void func_112(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_114(iParam0, iParam1))
	{
		uVar0 = func_113();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_113()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_114(int iParam0, auto uParam1)
{
	if (Global_1315901)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

int func_115(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_116(iParam0, 0);
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = false;
	iVar3 = iVar1 - iVar2 / 2;
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_275884[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_275884[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1--;
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = to_float(iVar1) - to_float(iVar2) / 2f + to_float(iVar2);
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_117(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return is_bit_set(Global_2428492.f_1, iParam0);
	}
	return true;
}

int func_118(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_74(-1)];
			}
			else if (func_117(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_74(-1)];
	}
	return 0;
}

void func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = get_player_team(player_id());
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		iVar4 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar4))
		{
			iVar5 = network_get_player_index(iVar4);
			if (get_player_team(iVar5) != -1)
			{
				if (get_player_team(iVar5) == iVar1 || func_121(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_49(player_id(), iVar5))
						{
							iVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar3)
	{
		iVar6 = round(func_120(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_120(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_120(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, false);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, true);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 2);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 4);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 5);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 6);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 8);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 9);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 10);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 12);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 13);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 14);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 15);
				
				default:
			}
			break;
	}
	return false;
}

void func_122(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0)
	{
		iVar0 = 0;
		while (iVar0 < _network_get_num_participants_host())
		{
			iVar3 = iVar0;
			if (network_is_participant_active(iVar3))
			{
				iVar4 = network_get_player_index(iVar3);
				if (func_11(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_49(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_11(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_123(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_49(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (iVar2)
	{
		iVar5 = round(func_120(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_120(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_123(int iParam0, int iParam1)
{
	return vdist(func_10(iParam0), func_10(iParam1));
	return 0f;
}

auto func_124(int iParam0)
{
	int iVar0;
	
	if (get_local_player_aim_state() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_120(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_125(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_118(player_id()))
		{
			iParam0 = -func_118(player_id());
		}
	}
	if (func_126(8000, 0, 0) > 0)
	{
		if (func_126(8000, 0, 0) < iParam0 + func_118(player_id()))
		{
			iParam0 = func_126(8000, 0, 0) - func_118(player_id());
		}
	}
	return iParam0;
}

auto func_126(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (iParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_275884[iParam0];
}

bool func_127()
{
	return true;
}

bool func_128(char* sParam0)
{
	if (is_string_null(sParam0))
	{
		return true;
	}
	else if (are_strings_equal(sParam0, "") || are_strings_equal(sParam0, "0"))
	{
		return true;
	}
	return false;
}

int func_129(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_130(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_131(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_133(iParam0, func_74(iParam2));
	iVar0 += iParam1;
	func_132(iParam0, iVar0, iParam2);
}

void func_132(auto uParam0, int iParam1, auto uParam2)
{
	int iVar0;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_74(uParam2)];
	stat_set_int(iVar0, iParam1, 1);
}

int func_133(auto uParam0, auto uParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_74(uParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134()
{
	auto uVar0;
	
	uVar0 = func_135(44);
	Global_2411218[uVar0 /*83*/] = 44;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2411218[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2411218[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_136()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar2 = int_to_participantindex(iVar0);
			if (func_11(network_get_player_index(iVar2), 1, 1))
			{
				if (iLocal_105[iVar0] == 1)
				{
					if (get_distance_between_coords(func_10(network_get_player_index(iVar2)), vLocal_173, 1) <= 30f)
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_137()
{
	if (iLocal_159)
	{
		if (get_entity_speed(iLocal_181) <= 0f)
		{
			set_vehicle_is_considered_by_player(iLocal_181, 1);
		}
		else
		{
			set_vehicle_is_considered_by_player(iLocal_181, 0);
		}
	}
}

void func_138()
{
	int iVar0;
	
	if (!iLocal_160)
	{
		if (iLocal_167)
		{
			if (!iLocal_168)
			{
				if (!is_ped_in_any_vehicle(iLocal_182, 0))
				{
					if (vdist(vLocal_170, vLocal_170) <= 60f)
					{
						iVar0 = get_script_task_status(iLocal_182, 1805844857);
						if (iVar0 == 1)
						{
							if (!iLocal_155)
							{
								if (!is_ped_in_any_vehicle(iLocal_182, 0))
								{
									func_139(&uLocal_191, "MPSVAUD", "MPSV_RUN", 12, 0, 0, 0);
									iLocal_155 = 1;
								}
							}
						}
					}
					else
					{
						iLocal_155 = 1;
					}
				}
			}
		}
	}
}

int func_139(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_140(sParam2, iParam3, 0);
}

bool func_140(char* sParam0, int iParam1, int iParam2)
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
					func_154();
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
		if (func_153(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_152();
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
				func_145();
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
				if (func_144())
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
			if (func_143())
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
			func_142();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_141();
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
		func_154();
	}
	return false;
}

void func_141()
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

void func_142()
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

bool func_143()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_144()
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

void func_145()
{
	if (func_151(14))
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
		Global_14413 = func_146();
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

auto func_146()
{
	func_147();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_147()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_150(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_149(PLAYER::PLAYER_PED_ID());
			if (func_148(iVar0) && (!func_151(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_148(Global_101154.f_1826.f_539.f_3549))
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

int func_148(int iParam0)
{
	return iParam0 < 3;
}

int func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_150(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_150(int iParam0)
{
	if (func_148(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_151(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_152()
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

int func_153(int iParam0, int iParam1)
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

void func_154()
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

void func_155(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

void func_156()
{
	int iVar0;
	
	if (iLocal_159)
	{
		if (func_52() == 4)
		{
			if (iVar0)
			{
				if (network_has_control_of_network_id(Local_358.f_2))
				{
					_0x9737A37136F07E75(iLocal_181, 0);
					set_vehicle_doors_locked(iLocal_181, 1);
				}
			}
		}
	}
}

void func_157()
{
	if (does_blip_exist(iLocal_179))
	{
		if (iLocal_159)
		{
			if (!iLocal_169)
			{
				if (func_161(vLocal_173, func_162(20), ""))
				{
					iLocal_169 = true;
				}
			}
			else
			{
				func_160(vLocal_173, func_162(20), "");
			}
		}
	}
	else if (iLocal_169)
	{
		func_158(0f, 0f, 0f, func_162(20), 1);
	}
}

void func_158(Vector3 vParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (!is_string_null_or_empty(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (are_strings_equal(&(Global_2460486.f_3827[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_159(Global_2460486.f_3827[iVar0 /*26*/].f_1, vParam0, 0))
				{
					Global_2460486.f_3827[iVar0 /*26*/] = 0;
					Global_2460486.f_3827[iVar0 /*26*/].f_1 = {0f, 0f, 0f};
					StringCopy(&(Global_2460486.f_3827[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2460486.f_3827[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

int func_159(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_160(Vector3 vParam0, char* sParam1, char* sParam2)
{
	if (are_strings_equal(&(Global_2460486.f_3827[Global_2460486.f_4244 /*26*/].f_4), sParam3))
	{
		if (are_strings_equal(&(Global_2460486.f_3827[Global_2460486.f_4244 /*26*/].f_10), sParam4))
		{
			Global_2460486.f_3827[Global_2460486.f_4244 /*26*/] = 1;
			Global_2460486.f_3827[Global_2460486.f_4244 /*26*/].f_1 = {vParam0};
			StringCopy(&(Global_2460486.f_3827[Global_2460486.f_4244 /*26*/].f_4), sParam3, 24);
			StringCopy(&(Global_2460486.f_3827[Global_2460486.f_4244 /*26*/].f_10), sParam4, 64);
		}
	}
}

bool func_161(Vector3 vParam0, char* sParam1, char* sParam2)
{
	int iVar0;
	
	if (!is_string_null_or_empty(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!are_strings_equal(&(Global_2460486.f_3827[iVar0 /*26*/].f_4), sParam3))
			{
				if (is_string_null_or_empty(&(Global_2460486.f_3827[iVar0 /*26*/].f_4)))
				{
					Global_2460486.f_3827[iVar0 /*26*/] = 1;
					Global_2460486.f_3827[iVar0 /*26*/].f_1 = {vParam0};
					StringCopy(&(Global_2460486.f_3827[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2460486.f_3827[iVar0 /*26*/].f_10), sParam4, 64);
					return true;
				}
			}
			else if (!func_159(Global_2460486.f_3827[iVar0 /*26*/].f_1, vParam0, 0))
			{
				Global_2460486.f_3827[iVar0 /*26*/] = 1;
				Global_2460486.f_3827[iVar0 /*26*/].f_1 = {vParam0};
				StringCopy(&(Global_2460486.f_3827[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2460486.f_3827[iVar0 /*26*/].f_10), sParam4, 64);
				return true;
			}
			else
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

char* func_162(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_163()
{
	if (func_52() >= 1)
	{
		if (Local_358.f_6 == 1)
		{
			if (iLocal_165)
			{
				if (Global_2428492.f_3175 != iLocal_181)
				{
					Global_2428492.f_3175 = iLocal_181;
				}
			}
			if (!iLocal_160)
			{
				if (Global_2428492.f_3175.f_1 != iLocal_182)
				{
					Global_2428492.f_3175.f_1 = iLocal_182;
				}
			}
			if (Local_358.f_6 == 1)
			{
				if (!iLocal_162)
				{
					if (Global_2428492.f_3175.f_2 != iLocal_183)
					{
						Global_2428492.f_3175.f_2 = iLocal_183;
					}
				}
			}
		}
	}
}

void func_164()
{
	if (!Local_358.f_22)
	{
		if (!iLocal_103)
		{
			if (iLocal_159)
			{
				if (!func_14(&uLocal_356))
				{
					func_34(&uLocal_356, 0, 0);
				}
				else if (func_13(&uLocal_356, 1000, 0))
				{
					if ((func_167() || func_27()) || uLocal_164)
					{
						func_165();
						iLocal_103 = 1;
					}
					func_23(&uLocal_356);
				}
			}
		}
	}
}

void func_165()
{
	struct<2> Var0;
	
	Var0 = 226;
	Var0.f_1 = player_id();
	Global_2428492.f_3409 = 1;
	trigger_script_event(1, &Var0, 2, func_166(1, 1));
}

auto func_166(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_11(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_7(iVar2, 0))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_167()
{
	if (is_vehicle_door_damaged(iLocal_181, 2))
	{
		return true;
	}
	else if (get_vehicle_door_angle_ratio(iLocal_181, 2) > 0f)
	{
		return true;
	}
	if (is_vehicle_door_damaged(iLocal_181, 3))
	{
		return true;
	}
	else if (get_vehicle_door_angle_ratio(iLocal_181, 3) > 0f)
	{
		return true;
	}
	return false;
}

void func_168()
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_11(network_get_player_index(int_to_participantindex(iVar0)), 1, 1))
			{
				if (!iLocal_105[iVar0])
				{
					if (iLocal_166)
					{
						if (has_entity_been_damaged_by_entity(iLocal_182, get_player_ped(network_get_player_index(int_to_participantindex(iVar0))), 1))
						{
							func_169(get_player_ped(network_get_player_index(int_to_participantindex(iVar0))));
							iLocal_105[iVar0] = 1;
						}
					}
					if (iLocal_165)
					{
						if (has_entity_been_damaged_by_entity(iLocal_181, get_player_ped(network_get_player_index(int_to_participantindex(iVar0))), 1))
						{
							func_169(get_player_ped(network_get_player_index(int_to_participantindex(iVar0))));
							iLocal_105[iVar0] = 1;
						}
					}
					if (iLocal_161)
					{
						if (has_entity_been_damaged_by_entity(iLocal_183, get_player_ped(network_get_player_index(int_to_participantindex(iVar0))), 1))
						{
							func_169(get_player_ped(network_get_player_index(int_to_participantindex(iVar0))));
							iLocal_105[iVar0] = 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_ped_in_any_vehicle(iParam0, 0))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, 0);
			if (!is_vehicle_seat_free(iVar0, -1))
			{
				iVar1 = get_ped_in_vehicle_seat(iVar0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (is_ped_a_player(iVar1))
					{
						iVar2 = _network_get_ped_player(iVar1);
						iVar3 = network_get_participant_index(iVar2);
						iLocal_105[iVar3] = 1;
					}
				}
			}
		}
	}
}

void func_170()
{
	if (iLocal_163)
	{
		if (func_172())
		{
			func_171();
		}
	}
}

void func_171()
{
	if (!Local_383[participant_id_to_int() /*7*/].f_2 || IntToFloat(get_player_wanted_level(iLocal_185)) == 0f)
	{
		if (get_player_wanted_level(iLocal_185) < 3)
		{
			set_player_wanted_level(iLocal_185, 3, 0);
			set_player_wanted_level_now(iLocal_185, 0);
		}
		Local_383[participant_id_to_int() /*7*/].f_2 = 1;
	}
}

bool func_172()
{
	int iVar0;
	int iVar1;
	
	if (!Local_383[participant_id_to_int() /*7*/].f_2)
	{
		if (iLocal_159)
		{
			iVar0 = get_vehicle_ped_is_using(iLocal_184);
			if (iVar0 == iLocal_181)
			{
				if (is_ped_trying_to_enter_a_locked_vehicle(iLocal_184))
				{
					return true;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (is_vehicle_driveable(iVar0, 0))
				{
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2"))
					{
						if (is_vehicle_attached_to_cargobob(iVar0, iLocal_181))
						{
							return true;
						}
					}
				}
			}
			if (!iLocal_160)
			{
				if (is_ped_in_vehicle(iLocal_182, iLocal_181, 0))
				{
					if (is_ped_being_jacked(iLocal_182))
					{
						if (is_ped_getting_into_a_vehicle(iLocal_184))
						{
							if (ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_using(iLocal_184)) == joaat("stockade"))
							{
								if (vdist(vLocal_170, vLocal_176) <= 1.5f)
								{
									return true;
								}
							}
						}
					}
				}
			}
			if (is_ped_getting_into_a_vehicle(iLocal_184))
			{
				if (is_ped_in_vehicle(iLocal_184, iLocal_181, 0))
				{
					return true;
				}
			}
		}
		if (iLocal_166)
		{
			if (iLocal_167)
			{
				if (!iLocal_168)
				{
					if (has_entity_been_damaged_by_entity(iLocal_182, iLocal_184, 1))
					{
						return true;
					}
				}
			}
		}
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_358.f_5))
		{
			if (has_entity_been_damaged_by_entity(net_to_obj(Local_358.f_5), iLocal_184, 1))
			{
				return true;
			}
		}
		if (iLocal_105[participant_id_to_int()])
		{
			return true;
		}
		if (iLocal_105[participant_id_to_int()])
		{
			return true;
		}
	}
	return false;
}

void func_173()
{
	if (!iLocal_154)
	{
		if (!iLocal_160)
		{
			func_174(&uLocal_191, 8, iLocal_182, "MPSecurityVanDriver", 1, 1);
			iLocal_154 = 1;
		}
	}
}

void func_174(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_175()
{
	if (iLocal_104)
	{
		return;
	}
	if (Local_383[participant_id_to_int() /*7*/].f_2)
	{
		if (!func_176(joaat("weapon_stickybomb")))
		{
			if (!is_help_message_being_displayed())
			{
				if (func_71())
				{
					func_65("AMSECVAN_STKYB", -1);
				}
				iLocal_104 = 1;
			}
		}
		else
		{
			iLocal_104 = 1;
		}
	}
}

bool func_176(int iParam0)
{
	if (has_ped_got_weapon(PLAYER::PLAYER_PED_ID(), iParam0, 0))
	{
		return true;
	}
	if (has_ped_got_weapon(PLAYER::PLAYER_PED_ID(), iParam0, 0))
	{
		if (func_177(iParam0) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_177(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return false;
	}
	return true;
}

void func_178()
{
	struct<14> Var0;
	
	if (!iLocal_151)
	{
		if (Local_383[participant_id_to_int() /*7*/].f_2)
		{
			Var0.f_2 = 8;
			func_179(Var0, func_166(1, 1));
			iLocal_151 = 1;
		}
	}
}

void func_179(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

int func_180()
{
	return Local_358;
}

auto func_181(int iParam0)
{
	return Local_383[iParam0 /*7*/];
}

void func_182()
{
	iLocal_184 = PLAYER::PLAYER_PED_ID();
	iLocal_185 = player_id();
	iLocal_167 = ENTITY::DOES_ENTITY_EXIST(iLocal_184);
	iLocal_168 = true;
	iLocal_160 = true;
	iLocal_159 = false;
	if (iLocal_167)
	{
		iLocal_168 = is_entity_dead(iLocal_184, 0);
	}
	if (!iLocal_168)
	{
		vLocal_170 = {get_entity_coords(iLocal_184, 1)};
	}
	iLocal_166 = network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_358.f_3);
	if (iLocal_166)
	{
		iLocal_182 = net_to_ped(Local_358.f_3);
		iLocal_160 = PED::IS_PED_INJURED(iLocal_182);
	}
	if (!iLocal_160)
	{
		vLocal_176 = {get_entity_coords(iLocal_182, 1)};
	}
	iLocal_161 = network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_358.f_4);
	if (iLocal_161)
	{
		iLocal_183 = net_to_ped(Local_358.f_4);
		iLocal_162 = PED::IS_PED_INJURED(iLocal_183);
	}
	iLocal_165 = network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_358.f_2);
	if (iLocal_165)
	{
		iLocal_181 = net_to_veh(Local_358.f_2);
		iLocal_159 = !func_183(iLocal_181);
	}
	if (iLocal_159)
	{
		vLocal_173 = {get_entity_coords(iLocal_181, 1)};
		uLocal_164 = _0xAE3FEE8709B39DCB(iLocal_181);
	}
	iLocal_163 = func_11(iLocal_185, 1, 1);
	if (!iLocal_162)
	{
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

bool func_184()
{
	if (func_186(player_id()))
	{
		return true;
	}
	if (func_185(player_id()))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	return false;
}

int func_185(int iParam0)
{
	if (!func_11(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587523[iParam0 /*444*/].f_35;
}

bool func_186(int iParam0)
{
	if (func_67(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

int func_187(int iParam0)
{
	return !func_188(iParam0);
}

bool func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5064)
			{
				return false;
			}
			if (func_190(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 5:
			if (Global_262145.f_5065)
			{
				return false;
			}
			if (func_190(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 6:
			if (Global_262145.f_5066)
			{
				return false;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5067)
			{
				return false;
			}
			if (func_190(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 15:
			if (func_189(4))
			{
				return false;
			}
			if (func_190(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 17:
			if (func_189(4))
			{
				return false;
			}
			if (func_190(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 16:
			if (func_189(4))
			{
				return false;
			}
			if (func_190(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_189(4))
			{
				return false;
			}
			if (func_190(player_id(), 7))
			{
				return false;
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false) || is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 19:
			if (func_189(4))
			{
				return false;
			}
			if (func_190(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 20:
			if (func_189(4))
			{
				return false;
			}
			if (func_190(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return true;
}

bool func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_11(int_to_playerindex(iVar0), 0, 1))
		{
			if (is_bit_set(Global_2418472[iVar0 /*313*/].f_206, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_190(int iParam0, int iParam1)
{
	return is_bit_set(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

void func_191()
{
	if (does_blip_exist(iLocal_179))
	{
		remove_blip(&iLocal_179);
	}
	Global_2460486.f_4408 = 0;
	Global_2428492.f_3407 = 0;
	Global_2428492.f_3408 = 0;
	Global_2428492.f_3409 = 0;
	func_193(5, 0);
	if (iLocal_169)
	{
		func_158(0f, 0f, 0f, func_162(20), 1);
	}
	Global_2435528.f_3669 = 0;
	if ((func_85("AMSECVAN_DROP") || func_85("AMSECVAN_STKYB")) || func_85("AMSECVAN_SHRTBP"))
	{
		clear_help(1);
	}
	func_192();
}

void func_192()
{
	terminate_this_thread();
}

void func_193(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!is_bit_set(Global_2418472[player_id() /*313*/].f_206, iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_206), iParam0);
		}
	}
	else if (is_bit_set(Global_2418472[player_id() /*313*/].f_206, iParam0))
	{
		clear_bit(&(Global_2418472[player_id() /*313*/].f_206), iParam0);
	}
}

bool func_194()
{
	int iVar0;
	
	func_201(&iVar0);
	if (iVar0)
	{
		return true;
	}
	if (Global_1315888 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_200())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_199())
	{
		return true;
	}
	if (func_198(157))
	{
		if (!func_197())
		{
			return true;
		}
	}
	if (func_198(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_195() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_195()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_195()
{
	switch (func_196())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

auto func_196()
{
	return Global_25120;
}

auto func_197()
{
	return Global_2434762.f_574;
}

bool func_198(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_199()
{
	return Global_2443085;
}

auto func_200()
{
	return Global_2434762.f_569;
}

void func_201(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 == 168)
		{
			get_event_data(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_202(iVar0);
					break;
				
				case 2:
					get_event_data(1, iVar0, &vVar4, 3);
					if (vVar4.z == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_202(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_11(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_203(iVar4, &iVar5))
						{
							remove_vehicle_window(iVar4, vVar0.z);
						}
						if (iVar5)
						{
							set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
}

bool func_203(int iParam0, auto uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_a_mission_entity(iParam0))
		{
			if (network_get_entity_is_local(iParam0))
			{
				set_entity_as_mission_entity(iParam0, false, 1);
				*uParam1 = 1;
			}
		}
		if (does_entity_belong_to_this_script(iParam0, 0))
		{
			if (network_has_control_of_entity(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_204()
{
	wait(0);
}

void func_205(struct<20> Param0)
{
	func_209(func_210(Param0), Param0);
	reserve_network_mission_peds(2);
	reserve_network_mission_objects(1);
	reserve_network_mission_vehicles(1);
	func_207(0, -1, 0);
	network_register_host_broadcast_variables(&Local_358, 25);
	network_register_player_broadcast_variables(&Local_383, 225);
	set_this_script_can_be_paused(0);
	if (!func_206())
	{
		func_191();
	}
	func_193(5, 1);
	if (network_is_host_of_this_script())
	{
		_0x6DEE77AFF8C21BD1(&(Local_358.f_18[0]), &(Local_358.f_18[1]));
	}
	Local_383[participant_id_to_int() /*7*/] = 0;
}

bool func_206()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return false;
		}
		if (_0x5D10B3795F3FC886())
		{
			return true;
		}
		if (func_200())
		{
			return false;
		}
		if (func_198(155))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		wait(0);
	}
	return false;
}

bool func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_192();
			}
			else
			{
				return false;
			}
		}
		if (!func_208())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_192();
					}
					else
					{
						return false;
					}
				}
				if (func_200())
				{
					if (!iParam2)
					{
						func_192();
					}
					else
					{
						return false;
					}
				}
				if (func_198(155))
				{
					if (!iParam2)
					{
						func_192();
					}
					else
					{
						return false;
					}
				}
			}
			else if (!network_is_in_session())
			{
				if (!iParam2)
				{
					func_192();
				}
				else
				{
					return false;
				}
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!iParam2)
			{
				func_192();
			}
			else
			{
				return false;
			}
		}
	}
	else if (!network_is_in_session())
	{
		if (!iParam2)
		{
			func_192();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_208()
{
	return Global_1315888;
}

void func_209(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_192();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

