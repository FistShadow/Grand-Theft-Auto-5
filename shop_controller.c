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
	char* sLocal_19 = 0;
	auto uLocal_20 = 0;
	auto uLocal_21 = 0;
	float fLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	auto uLocal_33 = 0;
	auto uLocal_34 = 0;
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
	float fLocal_87 = 0;
	auto uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var[] uLocal_95 = new var[45];
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	auto uLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
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
	auto uLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int[] iLocal_163 = new int[45];
	int[] iLocal_209 = new int[2];
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	struct<5>[] Local_215 = new struct<5>[2];
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	struct<2> Local_230 = 0;
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
	auto uLocal_271 = 1;
	auto uLocal_272 = 0;
	auto uLocal_273 = 0;
	auto uLocal_274 = 0;
	auto uLocal_275 = 0;
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
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	auto uLocal_297 = 0;
	auto uLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int[] iLocal_317 = new int[3];
	int[] iLocal_321 = new int[3];
	int iLocal_325 = 0;
	int iLocal_326 = 0;
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
	auto uLocal_358 = 0;
	auto uLocal_359 = 0;
	auto uLocal_360 = 0;
	auto uLocal_361 = 0;
	auto uLocal_362 = 0;
	struct<13> Local_363 = 0;
	int iLocal_376 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	iLocal_89 = 2;
	iLocal_212 = -1;
	iLocal_213 = -1;
	iLocal_214 = -1;
	iLocal_227 = 145;
	iLocal_301 = -1000;
	iLocal_302 = -1000;
	iLocal_306 = func_342();
	iLocal_313 = 145;
	iLocal_376 = -1;
	network_set_script_is_safe_for_network_game();
	_set_force_ped_footsteps_tracks(0);
	_set_force_vehicle_trails(0);
	while (true)
	{
		if (!iLocal_92)
		{
			iLocal_92 = 1;
			if (has_force_cleanup_occurred(96))
			{
				if (get_cause_of_most_recent_force_cleanup() == 64)
				{
					if (!Global_92779)
					{
						iLocal_92 = 0;
					}
					else
					{
						terminate_this_thread();
					}
					Global_92779 = 0;
				}
				else
				{
					terminate_this_thread();
				}
			}
		}
		iLocal_227 = func_338();
		func_318();
		func_312();
		if (iLocal_90 > 0)
		{
			if (network_is_game_in_progress())
			{
				iLocal_144 = func_309(player_id(), 1);
				iLocal_146 = func_308();
				uLocal_145 = func_305(-1);
			}
			else
			{
				iLocal_149 = (func_304(0) || func_304(3));
			}
		}
		if (!is_ped_injured(player_ped_id()))
		{
			Global_91330.f_294 = get_interior_from_entity(player_ped_id());
			Global_91330.f_295 = get_room_key_from_entity(player_ped_id());
		}
		else
		{
			Global_91330.f_294 = 0;
			Global_91330.f_295 = 0;
		}
		func_301();
		func_290();
		func_288();
		func_284();
		func_275();
		func_272();
		func_269();
		func_268();
		func_264();
		func_246();
		func_244();
		func_225();
		func_217();
		func_215();
		func_185();
		func_181();
		switch (iLocal_90)
		{
			case 0:
				func_91();
				break;
			
			case 1:
				func_2();
				break;
			
			case 2:
				func_1();
				break;
		}
		wait(false);
	}
}

void func_1()
{
	iLocal_90 = 0;
	Global_91330.f_15 = 0;
	Global_91330.f_16 = 0;
}

void func_2()
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
	
	if (!iLocal_150 || iLocal_151 < 45)
	{
		iLocal_91 += 1 % 45;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar0 = iLocal_91 + iVar1 * 45;
			if (iVar0 < 45)
			{
				iVar4 = iVar0;
				if (iLocal_150)
				{
					iLocal_151++;
				}
				if (network_is_game_in_progress())
				{
					if (func_90() == 0)
					{
						iVar2 = func_88(func_89(iVar4), -1, 0);
						iVar3 = iVar2;
						func_82(iVar4, &iVar3);
						if (iVar2 != iVar3)
						{
							func_79(func_89(iVar4), iVar3, -1, 1);
						}
					}
				}
				else
				{
					func_82(iVar4, &(Global_101154.f_668[iVar0]));
				}
				func_64(iVar4);
				if (!is_bit_set(iLocal_209[iVar4 / 32], iVar4 % 32))
				{
					set_bit(&(iLocal_209[iVar4 / 32]), iVar4 % 32);
					iLocal_163[iLocal_162] = iVar4;
					iLocal_162++;
				}
			}
			iVar1++;
		}
		iVar5 = iLocal_162;
		iLocal_162 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_209)
		{
			iLocal_209[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			func_48(iLocal_163[iVar0]);
			if (func_47(iLocal_163[iVar0]) && (network_is_game_in_progress() || func_46(iLocal_227)))
			{
				if (!is_bit_set(iLocal_209[iLocal_163[iVar0] / 32], iLocal_163[iVar0] % 32))
				{
					set_bit(&(iLocal_209[iLocal_163[iVar0] / 32]), iLocal_163[iVar0] % 32);
					iLocal_163[iLocal_162] = iLocal_163[iVar0];
					iLocal_162++;
				}
			}
			iVar0++;
		}
		func_45();
		func_38();
		if (iLocal_91 >= 44)
		{
			Global_91330.f_16 = 1;
		}
	}
	iVar6 = 0;
	if (network_is_game_in_progress())
	{
		if (iLocal_144 != iLocal_147 || iLocal_146 != iLocal_148)
		{
			iLocal_147 = iLocal_144;
			iLocal_146 = iLocal_148;
			iVar6 = 1;
			iLocal_150 = 0;
			if (iLocal_144)
			{
				iVar7 = func_37(player_id());
				if (iVar7 == 2 || iVar7 == 1)
				{
					iLocal_150 = 1;
					iLocal_151 = 0;
				}
			}
		}
		if (func_33() != iLocal_228)
		{
			iLocal_228 = !iLocal_228;
			iVar6 = 1;
		}
	}
	else if (iLocal_149 != iLocal_147)
	{
		iLocal_147 = iLocal_149;
		iVar6 = 1;
		iLocal_150 = 0;
	}
	if (Global_91330.f_155 || iVar6)
	{
		iVar8 = false;
		while (iVar8 < 45)
		{
			func_3(iVar8, iVar6);
			iVar8++;
		}
		Global_91330.f_155 = 0;
	}
}

void func_3(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_91330.f_156[iParam0] || iParam1)
	{
		iVar0 = false;
		iVar1 = func_32(iParam0);
		iVar2 = func_31(iParam0);
		if (!network_is_game_in_progress())
		{
			if (func_30(iParam0))
			{
				if ((is_bit_set(Global_101154.f_668[iParam0], false) && (!is_bit_set(Global_91330.f_1300[iParam0], 5) || !func_29(iParam0))) && !func_27(iParam0))
				{
					iVar0 = true;
				}
				if (func_26(iVar2))
				{
					if (!func_25(iParam0))
					{
						func_24(func_32(iParam0), 0, 0);
					}
				}
				if (func_25(iParam0))
				{
					func_24(iVar1, 1, 0);
				}
				else
				{
					func_24(iVar1, 0, 0);
				}
				func_23(iVar1, 1);
				func_16(iVar1, func_17(iParam0));
				func_15(iVar1, iVar0, 0);
				func_12(iVar1, func_13(iParam0));
			}
		}
		iVar0 = false;
		if (network_is_game_in_progress())
		{
			if (func_90() == 0)
			{
				if ((((((((!Global_91330.f_8 && !Global_91330.f_9[func_31(iParam0)]) && is_bit_set(func_88(func_89(iParam0), -1, 0), false)) && (!is_bit_set(Global_91330.f_1300[iParam0], 5) || !func_29(iParam0))) && func_11(iParam0)) && !iLocal_146) && !func_27(iParam0)) && !Global_1315838) && !Global_1573828)
				{
					iVar0 = true;
				}
				switch (iVar2)
				{
					case 4:
						if (func_10(5) || func_10(0))
						{
							iVar0 = false;
						}
						break;
					
					case 3:
						if (func_10(2) || func_10(0))
						{
							iVar0 = false;
						}
						break;
					
					case 1:
						if (func_10(4) || func_10(0))
						{
							iVar0 = false;
						}
						break;
					
					case 0:
						if (func_10(3) || func_10(0))
						{
							iVar0 = false;
						}
						break;
					
					case 2:
						if (func_10(6) || func_10(0))
						{
							iVar0 = false;
						}
						break;
				}
				if (network_is_activity_session())
				{
					if (func_9(0))
					{
						iVar0 = false;
					}
				}
			}
		}
		if (iVar0)
		{
			if (!does_blip_exist(Global_91330.f_202[iParam0]))
			{
				Global_91330.f_202[iParam0] = add_blip_for_coord(func_8(iParam0, 0));
				set_blip_sprite(Global_91330.f_202[iParam0], func_17(iParam0));
				if (network_is_game_in_progress())
				{
					func_6(&(Global_91330.f_202[iParam0]), 4);
				}
				if (iParam0 == 44)
				{
					func_6(&(Global_91330.f_202[iParam0]), 13);
				}
				set_blip_display(Global_91330.f_202[iParam0], 4);
				set_blip_name_from_text_file(Global_91330.f_202[iParam0], func_13(iParam0));
				set_blip_as_mission_creator_blip(Global_91330.f_202[iParam0], 0);
				set_blip_priority(Global_91330.f_202[iParam0], 3);
				if (iParam0 == 44 && func_5(iParam0, 10, 0))
				{
					set_blip_flash_timer(Global_91330.f_202[iParam0], 10000);
				}
				else
				{
					set_blip_flashes(Global_91330.f_202[iParam0], func_5(iParam0, 10, 0));
				}
				func_4(iParam0, 10, 0);
				set_blip_high_detail(Global_91330.f_202[iParam0], 0);
			}
			else if (iParam0 == 44 && func_5(iParam0, 10, 0))
			{
				set_blip_flash_timer(Global_91330.f_202[iParam0], 10000);
				func_4(iParam0, 10, 0);
			}
			if (iParam0 == 44)
			{
				set_blip_coords(Global_91330.f_202[iParam0], func_8(iParam0, iLocal_228));
			}
			set_blip_as_short_range(Global_91330.f_202[iParam0], !func_25(iParam0));
		}
		else if (does_blip_exist(Global_91330.f_202[iParam0]))
		{
			remove_blip(&(Global_91330.f_202[iParam0]));
		}
		Global_91330.f_156[iParam0] = 0;
	}
}

void func_4(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		clear_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_90() == 0)
		{
			iVar0 = func_88(func_89(iParam0), -1, 0);
			clear_bit(&iVar0, iParam1);
			func_79(func_89(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		clear_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_90() == 0)
		{
			return is_bit_set(func_88(func_89(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_6(auto uParam0, int iParam1)
{
	if (does_blip_exist(*uParam0))
	{
		set_blip_colour(*uParam0, func_7(iParam1));
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	get_hud_colour(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return iVar0 * 16777216 + iVar1 * 65536 + iVar2 * 256 + iVar3;
	return 0;
}

Vector3 func_8(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (iParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_9(int iParam0)
{
	if (7 == iParam0)
	{
		return (Global_1617379.f_70365 == Global_262145.f_7347[iParam0] || Global_1617379.f_70365 == Global_262145.f_7356[iParam0]);
	}
	return Global_1617379.f_70365 == Global_262145.f_7347[iParam0];
}

int func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = func_88(2459, -1, 0);
	return is_bit_set(iVar0, iParam0);
}

bool func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 21:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
			return true;
			break;
	}
	return false;
}

void func_12(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	StringCopy(&(Global_25433[iVar0 /*23*/].f_20), sParam1, 8);
	if (does_blip_exist(Global_25433[iVar0 /*23*/].f_19))
	{
		set_blip_name_from_text_file(Global_25433[iVar0 /*23*/].f_19, sParam1);
	}
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_14(iParam0);
			break;
		
		case 8:
			return func_14(iParam0);
			break;
		
		case 9:
			return func_14(iParam0);
			break;
		
		case 10:
			return func_14(iParam0);
			break;
		
		case 11:
			return func_14(iParam0);
			break;
		
		case 12:
			return func_14(iParam0);
			break;
		
		case 13:
			return func_14(iParam0);
			break;
		
		case 14:
			return func_14(iParam0);
			break;
		
		case 15:
			return func_14(iParam0);
			break;
		
		case 16:
			return func_14(iParam0);
			break;
		
		case 17:
			return func_14(iParam0);
			break;
		
		case 18:
			return func_14(iParam0);
			break;
		
		case 19:
			return func_14(iParam0);
			break;
		
		case 20:
			return func_14(iParam0);
			break;
		
		case 21:
			return func_14(iParam0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_14(iParam0);
			break;
		
		case 40:
			return func_14(iParam0);
			break;
		
		case 41:
			return func_14(iParam0);
			break;
		
		case 42:
			return func_14(iParam0);
			break;
		
		case 43:
			return func_14(iParam0);
			break;
		
		case 44:
			return func_14(iParam0);
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_14(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!iParam2)
	{
		iVar1 = is_bit_set(Global_25433[iVar0 /*23*/].f_11, 15);
		if (iVar1 == iParam1)
		{
			return;
		}
	}
	if (iParam1 != is_bit_set(Global_25433[iVar0 /*23*/].f_11, false))
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
		if (Global_25430 == 1)
		{
			Global_25431 = 1;
		}
		Global_25430 = 1;
	}
	if (iParam1)
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), false);
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 15);
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), false);
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), 15);
	}
	if (!is_bit_set(Global_25433[iVar0 /*23*/].f_11, false))
	{
		if (does_blip_exist(Global_25433[iVar0 /*23*/].f_19))
		{
			set_this_script_can_remove_blips_created_by_any_script(1);
			remove_blip(&(Global_25433[iVar0 /*23*/].f_19));
			set_this_script_can_remove_blips_created_by_any_script(0);
		}
	}
}

void func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (Global_25433[iVar0 /*23*/].f_12[0] == iParam1)
	{
		return;
	}
	Global_25433[iVar0 /*23*/].f_12[0] = iParam1;
	if (Global_25430 == 1)
	{
		Global_25431 = 1;
	}
	Global_25430 = 1;
	set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 73;
			break;
		
		case 0:
			return 71;
			break;
		
		case 1:
			return 71;
			break;
		
		case 2:
			return 71;
			break;
		
		case 3:
			return 71;
			break;
		
		case 4:
			return 71;
			break;
		
		case 5:
			return 71;
			break;
		
		case 6:
			return 71;
			break;
		
		case 7:
			return 73;
			break;
		
		case 8:
			return 73;
			break;
		
		case 9:
			return 73;
			break;
		
		case 10:
			return 73;
			break;
		
		case 11:
			return 73;
			break;
		
		case 12:
			return 73;
			break;
		
		case 13:
			return 73;
			break;
		
		case 14:
			return 73;
			break;
		
		case 15:
			return 73;
			break;
		
		case 16:
			return 73;
			break;
		
		case 17:
			return 73;
			break;
		
		case 18:
			return 73;
			break;
		
		case 19:
			return 73;
			break;
		
		case 20:
			return 73;
			break;
		
		case 21:
			return 362;
			break;
		
		case 22:
			return 75;
			break;
		
		case 23:
			return 75;
			break;
		
		case 24:
			return 75;
			break;
		
		case 25:
			return 75;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 75;
			break;
		
		case 28:
			if (((!network_is_game_in_progress() && func_22(37)) && !func_21(37)) && !func_18(2))
			{
				return 363;
			}
			else
			{
				return 313;
			}
			break;
		
		case 38:
			return 313;
			break;
		
		case 29:
			return 110;
			break;
		
		case 30:
			return 110;
			break;
		
		case 31:
			return 110;
			break;
		
		case 32:
			return 110;
			break;
		
		case 33:
			return 110;
			break;
		
		case 34:
			return 110;
			break;
		
		case 35:
			return 110;
			break;
		
		case 36:
			return 110;
			break;
		
		case 37:
			return 110;
			break;
		
		case 39:
			return 72;
			break;
		
		case 40:
			return 72;
			break;
		
		case 41:
			return 72;
			break;
		
		case 42:
			return 72;
			break;
		
		case 43:
			return 72;
			break;
		
		case 44:
			return 446;
			break;
		
		default:
			break;
	}
	return 73;
}

bool func_18(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_19(iParam0))
	{
		return false;
	}
	return true;
}

int func_19(int iParam0)
{
	return func_20(iParam0, Global_35711);
}

bool func_20(int iParam0, int iParam1)
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

int func_21(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

bool func_22(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	if (Global_85596[iParam0 /*2*/])
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_82363)
	{
		if (Global_82363[iVar0 /*5*/] != -1)
		{
			if (Global_69758.f_109[Global_82363[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (iParam1 == is_bit_set(Global_25433[iVar0 /*23*/].f_11, true))
	{
		return;
	}
	if (iParam1)
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), true);
	}
	else
	{
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), true);
	}
	if (Global_25430 == 1)
	{
		Global_25431 = 1;
	}
	Global_25430 = 1;
	set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
}

void func_24(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (iParam1 == is_bit_set(Global_25433[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (iParam1)
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), 6);
	}
	if (iParam2)
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), 11);
	}
	if (Global_25430 == 1)
	{
		Global_25431 = 1;
	}
	Global_25430 = 1;
	set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
}

int func_25(int iParam0)
{
	return func_5(iParam0, 8, 0);
}

int func_26(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (network_is_game_in_progress())
	{
		if (func_90() == 0)
		{
			iVar1 = func_88(819, -1, 0);
			return is_bit_set(iVar1, iVar0);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668.f_47, iVar0);
	}
	return false;
}

bool func_27(int iParam0)
{
	if (network_is_game_in_progress())
	{
		if (iLocal_144 && uLocal_145)
		{
			if (!func_28(iParam0, func_37(player_id())))
			{
				return true;
			}
		}
	}
	else
	{
		if (iParam0 == 28)
		{
			if (func_22(37) && !func_21(37))
			{
				return true;
			}
		}
		else if (iParam0 == 21)
		{
			if (func_22(36) && !func_21(36))
			{
				return true;
			}
		}
		if (iLocal_149)
		{
			if ((func_31(iParam0) == 1 || func_31(iParam0) == 0) || func_31(iParam0) == 2)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_28(int iParam0, int iParam1)
{
	if (network_is_game_in_progress())
	{
		switch (iParam0)
		{
			case 28:
			case 29:
			case 30:
			case 31:
			case 32:
			case 33:
			case 34:
			case 35:
			case 36:
			case 37:
			case 38:
				if (!Global_1573865)
				{
					if (iParam1 == 0 || iParam1 == 7)
					{
						return true;
					}
				}
				break;
			
			case 21:
				if (Global_1573485)
				{
					return true;
				}
				break;
			
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
				if (network_is_activity_session())
				{
					if (func_9(0) || func_9(3))
					{
						return true;
					}
				}
				break;
			}
	}
	return false;
}

bool func_29(int iParam0)
{
	if (iParam0 == 21)
	{
		return false;
	}
	return true;
}

bool func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return true;
			break;
		
		case 44:
			break;
	}
	return false;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		default:
			break;
	}
	return 263;
}

bool func_33()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_34(iVar0);
	switch (iVar0)
	{
		case 0:
			if (iVar1 == 0)
			{
				return true;
			}
			switch (iVar1 - 1)
			{
				case 0:
				case 7:
					return true;
				
				default:
			}
			break;
	}
	return false;
}

auto func_34(int iParam0)
{
	int iVar0;
	
	if (Global_1724858[iParam0 /*8*/] == -1)
	{
		iVar0 = func_88(func_36(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_35(iParam0, 0);
			iVar0 = 0;
		}
		Global_1724858[iParam0 /*8*/] = iVar0;
	}
	return Global_1724858[iParam0 /*8*/];
}

void func_35(int iParam0, int iParam1)
{
	Global_1724858[iParam0 /*8*/] = iParam1;
	func_79(func_36(iParam0), iParam1, -1, 1);
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3853;
		
		default:
	}
	return 3853;
}

auto func_37(int iParam0)
{
	return Global_1587523[iParam0 /*444*/];
}

void func_38()
{
	if (!network_is_game_in_progress())
	{
		if (!Global_101154.f_668.f_781)
		{
			if (!iLocal_141)
			{
				if (func_44(func_32(0)) || func_44(func_32(1)))
				{
					if (!iLocal_142)
					{
						if (!is_radar_hidden())
						{
							iLocal_142 = 1;
							if (iLocal_143)
							{
								func_41("AM_H_HAIR", 1, 0, 2000, 10000, 7, 0, 0, 0);
								iLocal_141 = 1;
							}
						}
					}
				}
				iLocal_143 = iLocal_142;
			}
			else if (func_39("AM_H_HAIR") == 1)
			{
				Global_101154.f_668.f_781 = 1;
			}
			else if (func_39("AM_H_HAIR") == 2)
			{
				iLocal_141 = 0;
			}
		}
	}
}

int func_39(char* sParam0)
{
	if (are_strings_equal(sParam0, &Global_99799))
	{
		return 1;
	}
	if (func_40(sParam0))
	{
		return 0;
	}
	return 2;
}

bool func_40(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(sParam0, &(Global_101154.f_24935[iVar0 /*16*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_41(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_42(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_42(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_43();
	}
}

void func_43()
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

bool func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	if (does_blip_exist(Global_25433[iVar0 /*23*/].f_19))
	{
		if (is_blip_on_minimap(Global_25433[iVar0 /*23*/].f_19))
		{
			return true;
		}
	}
	return false;
}

void func_45()
{
	if (Global_91330.f_7 > 0)
	{
		Global_91330.f_7--;
	}
}

int func_46(int iParam0)
{
	return iParam0 < 3;
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = 120;
	if (iParam0 == 21)
	{
		iVar0 = 140;
	}
	return Global_91330.f_248[iParam0] <= IntToFloat(iVar0);
}

void func_48(int iParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar8;
	var[] uVar9 = new var[2];
	int iVar12;
	struct<2> Var13;
	
	StringCopy(&Var0, func_63(iParam0), 16);
	StringCopy(&Var4, func_62(iParam0), 16);
	if (get_hash_key(&Var4) == 0)
	{
		iVar8 = 1;
	}
	else
	{
		iVar8 = 2;
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (Global_91330.f_17[iParam0])
		{
			if (is_bit_set(Global_91330.f_1300[iParam0], 17) || (!func_47(iParam0) && (!is_bit_set(Global_91330.f_1300[iParam0], 16) || _get_number_of_instances_of_streamed_script(get_hash_key(&Var0)) == 0)))
			{
				func_51(iParam0);
			}
		}
		else if (!Global_91330.f_109[iParam0])
		{
			if (((func_47(iParam0) && (network_is_game_in_progress() || func_46(iLocal_227))) && !is_bit_set(Global_91330.f_1300[iParam0], 16)) && ((network_is_game_in_progress() && func_11(iParam0)) || (!network_is_game_in_progress() && func_30(iParam0))))
			{
				request_script(&Var0);
				if (iVar8 == 2)
				{
					request_script(&Var4);
				}
				func_50("Requesting shop script", -1);
				Global_91330.f_109[iParam0] = 1;
			}
		}
		else
		{
			switch (func_49(&Var0))
			{
				case 2224:
					uVar9[0]++;
					break;
				
				case 2816:
					uVar9[1]++;
					break;
				
				default:
					break;
			}
			request_script(&Var0);
			if (iVar8 == 2)
			{
				request_script(&Var4);
				switch (func_49(&Var4))
				{
					case 2224:
						uVar9[0]++;
						break;
					
					case 2816:
						uVar9[1]++;
						break;
					
					default:
						break;
					}
			}
			if (has_script_loaded(&Var0) && (iVar8 == 1 || has_script_loaded(&Var4)))
			{
				if (_get_free_stack_slots_count(2224) >= uVar9[0] && _get_free_stack_slots_count(2816) >= uVar9[1])
				{
					if (!network_is_script_active(&Var0, iParam0, 1, 0) && (iVar8 == 1 || !network_is_script_active(&Var4, iParam0, 1, 0)))
					{
						func_4(iParam0, 9, 1);
						func_4(iParam0, 17, 1);
						if (network_is_game_in_progress())
						{
							if (func_90() == 0)
							{
								iVar12 = func_88(func_89(iParam0), -1, 0);
								func_82(iParam0, &iVar12);
								func_79(func_89(iParam0), iVar12, -1, 1);
							}
						}
						else
						{
							func_82(iParam0, &(Global_101154.f_668[iParam0]));
						}
						Var13.f_1 = 0;
						Var13 = iParam0;
						start_new_script_with_args(&Var0, &Var13, 2, func_49(&Var0));
						if (iVar8 == 2)
						{
							Var13 = iParam0;
							Var13.f_1 = 1;
							start_new_script_with_args(&Var4, &Var13, 2, func_49(&Var4));
						}
						Global_91330.f_17[iParam0] = 1;
						Global_91330.f_63[iParam0] = network_is_game_in_progress();
						set_script_as_no_longer_needed(&Var0);
						if (iVar8 == 2)
						{
							set_script_as_no_longer_needed(&Var4);
						}
						Global_91330.f_109[iParam0] = 0;
					}
				}
			}
		}
	}
}

int func_49(char* sParam0)
{
	switch (get_hash_key(sParam0))
	{
		case joaat("carmod_shop"):
			return 2816;
			break;
	}
	return 2224;
}

void func_50(char* sParam0, int iParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	if (iParam1 == -1)
	{
	}
}

void func_51(int iParam0)
{
	if (Global_91330.f_17[iParam0])
	{
		if (!is_bit_set(Global_91330.f_1300[iParam0], 7))
		{
			switch (func_31(iParam0))
			{
				case 0:
					if (Global_101154.f_668.f_48 >= 2)
					{
						set_bit(&(Global_91330.f_1300[iParam0]), 7);
					}
					break;
				
				case 1:
					if (Global_101154.f_668.f_49 >= 2)
					{
						set_bit(&(Global_91330.f_1300[iParam0]), 7);
					}
					break;
				}
		}
		if (func_5(iParam0, 1, 0))
		{
			func_59(iParam0, 1, 0);
		}
		clear_bit(&(Global_91330.f_1300[iParam0]), 17);
		clear_bit(&(Global_91330.f_1300[iParam0]), 10);
		clear_bit(&(Global_91330.f_1300[iParam0]), 11);
		clear_bit(&(Global_91330.f_1300[iParam0]), 19);
		clear_bit(&(Global_91330.f_1300[iParam0]), 16);
		func_57(iParam0, 0);
		func_4(iParam0, 1, 1);
		func_4(iParam0, 10, 1);
		func_4(iParam0, 11, 1);
		func_4(iParam0, 12, 1);
		func_4(iParam0, 13, 1);
		func_4(iParam0, 22, 1);
		func_4(iParam0, 19, 1);
		func_56(iParam0);
		func_53(iParam0);
		func_52(player_id(), iParam0);
		Global_91330.f_17[iParam0] = 0;
	}
}

void func_52(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
	}
	if (network_is_game_in_progress())
	{
		if (Global_1587523[iParam0 /*444*/].f_191)
		{
			Global_1587523[iParam0 /*444*/].f_191 = 0;
			Global_1587523[iParam0 /*444*/].f_192 = 0;
		}
	}
}

void func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_54(iParam0, iVar0);
		iVar0++;
	}
}

void func_54(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != 0)
	{
		if (Global_91330.f_298[func_55(iParam0) /*5*/][iParam1] == 2)
		{
			Global_91330.f_298[func_55(iParam0) /*5*/][iParam1] = 4;
		}
		else
		{
			Global_91330.f_298[func_55(iParam0) /*5*/][iParam1] = 0;
		}
		if (Global_91330.f_334[func_55(iParam0)] == iParam1)
		{
			Global_91330.f_334[func_55(iParam0)] = 0;
		}
	}
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 1;
			break;
		
		case 40:
			return 2;
			break;
		
		case 41:
			return 3;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 5;
			break;
		
		case 44:
			return 6;
			break;
	}
	return 0;
}

void func_56(int iParam0)
{
	Global_91330.f_156[iParam0] = 1;
	Global_91330.f_155 = 1;
}

void func_57(int iParam0, int iParam1)
{
	if (iParam1)
	{
		set_all_random_peds_flee_this_frame(player_id());
		if (!func_5(iParam0, 6, 1))
		{
			func_58(iParam0, 6, 1);
			Global_91330.f_297++;
			if (!network_is_game_in_progress())
			{
				force_cleanup(8);
			}
		}
	}
	else if (func_5(iParam0, 6, 1))
	{
		func_4(iParam0, 6, 1);
		if (Global_91330.f_297 > 0)
		{
			Global_91330.f_297--;
		}
		_0x6D6840CEE8845831("act_cinema");
	}
}

void func_58(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		set_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_90() == 0)
		{
			iVar0 = func_88(func_89(iParam0), -1, 0);
			set_bit(&iVar0, iParam1);
			func_79(func_89(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		set_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_59(int iParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		if (!func_5(iParam0, 0, 0))
		{
			if (iParam2 && Global_91330.f_17[iParam0])
			{
				if (func_31(iParam0) == 3 && !func_61(iParam0))
				{
					func_60(iParam0);
					func_58(iParam0, 0, 0);
					func_4(iParam0, 1, 0);
					func_56(iParam0);
				}
				else
				{
					func_58(iParam0, 1, 0);
					func_56(iParam0);
				}
			}
			else
			{
				func_58(iParam0, 0, 0);
				func_4(iParam0, 1, 0);
				func_56(iParam0);
			}
		}
		else
		{
			func_4(iParam0, 1, 0);
			func_56(iParam0);
		}
	}
	else if (func_5(iParam0, 0, 0))
	{
		func_4(iParam0, 0, 0);
		func_4(iParam0, 1, 0);
		func_56(iParam0);
	}
}

void func_60(int iParam0)
{
	if (Global_91330.f_17[iParam0])
	{
		func_58(iParam0, 10, 1);
		func_58(iParam0, 19, 1);
	}
}

int func_61(int iParam0)
{
	return func_5(iParam0, 5, 1);
}

char* func_62(int iParam0)
{
	switch (iParam0)
	{
		case 28:
			return func_63(7);
			break;
		
		case 29:
			return func_63(7);
			break;
		
		case 30:
			return func_63(7);
			break;
		
		case 31:
			return func_63(7);
			break;
		
		case 32:
			return func_63(7);
			break;
		
		case 33:
			return func_63(7);
			break;
		
		case 34:
			return func_63(7);
			break;
		
		case 35:
			return func_63(7);
			break;
		
		case 36:
			return func_63(7);
			break;
		
		case 37:
			return func_63(7);
			break;
		
		case 38:
			return func_63(7);
			break;
	}
	return "";
}

char* func_63(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			if (network_is_game_in_progress())
			{
				return "hairdo_shop_mp";
			}
			else
			{
				return "hairdo_shop_sp";
			}
			break;
		
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			if (network_is_game_in_progress())
			{
				return "clothes_shop_mp";
			}
			else
			{
				return "clothes_shop_sp";
			}
			break;
		
		case 22:
			return "tattoo_shop";
			break;
		
		case 23:
			return "tattoo_shop";
			break;
		
		case 24:
			return "tattoo_shop";
			break;
		
		case 25:
			return "tattoo_shop";
			break;
		
		case 26:
			return "tattoo_shop";
			break;
		
		case 27:
			return "tattoo_shop";
			break;
		
		case 28:
			return "gunclub_shop";
			break;
		
		case 29:
			return "gunclub_shop";
			break;
		
		case 30:
			return "gunclub_shop";
			break;
		
		case 31:
			return "gunclub_shop";
			break;
		
		case 32:
			return "gunclub_shop";
			break;
		
		case 33:
			return "gunclub_shop";
			break;
		
		case 34:
			return "gunclub_shop";
			break;
		
		case 35:
			return "gunclub_shop";
			break;
		
		case 36:
			return "gunclub_shop";
			break;
		
		case 37:
			return "gunclub_shop";
			break;
		
		case 38:
			return "gunclub_shop";
			break;
		
		case 39:
			return "carmod_shop";
			break;
		
		case 40:
			return "carmod_shop";
			break;
		
		case 41:
			return "carmod_shop";
			break;
		
		case 42:
			return "carmod_shop";
			break;
		
		case 43:
			return "carmod_shop";
			break;
		
		case 44:
			return "carmod_shop";
			break;
	}
	return "";
}

void func_64(int iParam0)
{
	switch (iParam0)
	{
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
			if (!network_is_game_in_progress())
			{
				if (func_46(iLocal_227))
				{
					if (Global_101154.f_668.f_58[iLocal_227 /*5*/])
					{
						if (!Global_101154.f_668.f_58[iLocal_227 /*5*/].f_2)
						{
							if (!Global_101154.f_24643[iLocal_227 /*43*/].f_40)
							{
								if (Global_101154.f_668.f_58[iLocal_227 /*5*/].f_3 <= 0)
								{
									if (!is_ped_injured(player_ped_id()))
									{
										if (func_78(iParam0) < 25f)
										{
											Global_101154.f_668.f_58[iLocal_227 /*5*/].f_3++;
											iLocal_94 = get_game_timer();
										}
									}
								}
								if (!iLocal_93)
								{
									iLocal_94 = get_game_timer();
									iLocal_93 = 1;
								}
								else if (Global_101154.f_668.f_58[iLocal_227 /*5*/].f_3 > 0)
								{
									if (get_game_timer() - iLocal_94 > get_milliseconds_per_game_minute() * 60)
									{
										iLocal_94 = get_game_timer();
										Global_101154.f_668.f_58[iLocal_227 /*5*/].f_3--;
									}
								}
								else
								{
									switch (Global_101154.f_668.f_58[iLocal_227 /*5*/].f_4)
									{
										case 2:
											if (func_65(100, "MECH_COLLECT", 2, 0, 0, 0, 0, 1, 0, 1))
											{
												Global_101154.f_668.f_58[iLocal_227 /*5*/].f_2 = 1;
												Global_101154.f_668.f_58[iLocal_227 /*5*/].f_1 = 1;
											}
											break;
										}
									}
								}
						}
					}
					else
					{
						iLocal_93 = 0;
					}
				}
			}
			break;
	}
}

bool func_65(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
	if (func_66(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

bool func_66(auto uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, auto uParam8, auto uParam9, int iParam10, auto uParam11, auto uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_77();
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
	if (func_76() == 0)
	{
		func_74();
		return false;
	}
	func_73(Global_16779);
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
		func_72(0);
		func_72(2);
		func_72(1);
	}
	else
	{
		func_77();
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
					func_72(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_72(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_72(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_72(3);
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
		func_77();
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
			if (!func_71())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_70(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_67(1);
			func_70(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_67(int iParam0)
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
		if (func_304(14))
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
								func_69(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_68(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_68(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_68(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_68(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_68(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_69(&(Global_2290[iVar1 /*15*/]));
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
								func_69(&(Global_2290[iVar1 /*15*/]));
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
								func_69(&(Global_2290[iVar1 /*15*/]));
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
								func_69(&(Global_2290[iVar1 /*15*/]));
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
								func_69(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_68(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_68(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_68(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_69(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_69(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_69(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_69(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_69(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_69(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_70(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

auto func_71()
{
	return Global_1315913;
}

void func_72(int iParam0)
{
	auto uVar0;
	auto uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_73(auto uParam0)
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

void func_74()
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
		if (!func_75(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_75(struct<6> Param0, struct<6> Param1)
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

bool func_76()
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
			if (!func_75(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
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

void func_77()
{
	if (func_304(14))
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
		Global_14413 = func_338();
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

auto func_78(int iParam0)
{
	return Global_91330.f_248[iParam0];
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_80(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_80(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_81();
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

auto func_81()
{
	return Global_1312747;
}

void func_82(int iParam0, auto uParam1)
{
	Global_91330.f_248[iParam0] = get_distance_between_coords(func_8(iParam0, 0), get_entity_coords(player_ped_id(), 0), 1);
	if (!network_is_game_in_progress())
	{
		if (func_87(iParam0))
		{
			uLocal_95[iParam0] = get_game_timer() + 10000;
		}
	}
	if (func_83(iParam0, uParam1))
	{
		if (!is_bit_set(Global_91330.f_1300[iParam0], false))
		{
			func_50("Opening shop", iParam0);
			set_bit(&(Global_91330.f_1300[iParam0]), false);
			func_56(iParam0);
		}
	}
	else if (is_bit_set(Global_91330.f_1300[iParam0], false))
	{
		func_50("Closing shop", iParam0);
		clear_bit(&(Global_91330.f_1300[iParam0]), false);
		func_56(iParam0);
	}
	clear_bit(&(Global_91330.f_1300[iParam0]), 11);
}

bool func_83(int iParam0, auto uParam1)
{
	if (!is_bit_set(Global_91330.f_1300[iParam0], 6))
	{
		if (!is_bit_set(*uParam1, false))
		{
			func_86(iParam0, "unavailable");
			return false;
		}
		if (is_bit_set(Global_91330.f_1300[iParam0], 2))
		{
			func_86(iParam0, "temporarily unavailable");
			return false;
		}
		if (is_bit_set(Global_91330.f_1300[iParam0], true))
		{
			func_86(iParam0, "player kicking off");
			return false;
		}
		if (!network_is_game_in_progress())
		{
			if (is_bit_set(Global_91330.f_1300[iParam0], 4))
			{
				func_86(iParam0, "shop being robbed");
				return false;
			}
			if (((func_18(0) && !func_85()) && func_31(iParam0) == 1) && func_84() != 44)
			{
				func_86(iParam0, "not allowed to change clothes on mission");
				return false;
			}
			if ((func_304(11) || func_304(9)) || func_304(14))
			{
				set_bit(&(Global_91330.f_1300[iParam0]), 13);
				func_86(iParam0, "on rampage or minigame");
				return false;
			}
			if (!func_30(iParam0))
			{
				func_86(iParam0, "not available in singleplayer");
				return false;
			}
			if (get_game_timer() < uLocal_95[iParam0])
			{
				func_86(iParam0, "currently being robbed");
				return false;
			}
			if (!func_46(iLocal_227))
			{
				func_86(iParam0, "not SP character");
				return false;
			}
		}
		else if (func_90() == 0)
		{
			if ((iLocal_144 && uLocal_145) && !func_28(iParam0, func_37(player_id())))
			{
				set_bit(&(Global_91330.f_1300[iParam0]), 12);
				func_86(iParam0, "on mission");
				return false;
			}
			if (Global_1315838)
			{
				func_86(iParam0, "on vs mission");
				return false;
			}
			if (Global_1573828)
			{
				func_86(iParam0, "on deathmatch");
				return false;
			}
			if (!func_11(iParam0))
			{
				func_86(iParam0, "not available in freemode");
				return false;
			}
			if (network_is_activity_session())
			{
				if (is_bit_set(Global_1617379.f_13, 26))
				{
					if (func_31(iParam0) == 4)
					{
						func_86(iParam0, "blocked by creator");
						return false;
					}
				}
			}
		}
		else
		{
			func_86(iParam0, "not in valid MP mode");
			return false;
		}
	}
	return true;
}

auto func_84()
{
	return Global_69751;
}

auto func_85()
{
	return Global_88917;
}

void func_86(int iParam0, char* sParam1)
{
	if (iParam0 == -1 || is_string_null_or_empty(sParam1))
	{
		return;
	}
}

int func_87(int iParam0)
{
	return func_5(iParam0, 4, 1);
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_80(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_89(int iParam0)
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

auto func_90()
{
	return Global_25120;
}

void func_91()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (get_index_of_current_level() != 1)
	{
		return;
	}
	if (network_is_game_in_progress())
	{
		if (!func_178())
		{
			return;
		}
		if (!func_177(player_id()))
		{
			return;
		}
		if (func_90() != 0)
		{
			return;
		}
	}
	iVar1 = false;
	iVar2 = false;
	if (iLocal_158)
	{
		if ((!network_is_game_in_progress() && get_game_timer() - iLocal_156 > 10000) || (network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(iLocal_157, 10000))))
		{
			iVar2 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		if (is_bit_set(Global_91330.f_1300[iVar0], 16))
		{
			if (iVar2)
			{
				clear_bit(&(Global_91330.f_1300[iVar0]), 16);
				func_57(iVar0, 0);
				func_4(iVar0, 1, 1);
				func_4(iVar0, 10, 1);
				func_4(iVar0, 11, 1);
				func_4(iVar0, 12, 1);
				func_4(iVar0, 13, 1);
				func_4(iVar0, 22, 1);
				func_4(iVar0, 19, 1);
				func_58(iVar0, 17, 1);
				func_56(iVar0);
				func_53(iVar0);
				func_52(player_id(), iVar0);
			}
			else
			{
				func_176(iVar0);
				iVar1 = true;
			}
		}
		iVar0++;
	}
	if (iVar1)
	{
		if (!iLocal_158)
		{
			if (network_is_game_in_progress())
			{
				iLocal_157 = get_network_time();
			}
			else
			{
				iLocal_156 = get_game_timer();
			}
			iLocal_158 = 1;
		}
		return;
	}
	iLocal_158 = 0;
	if (network_is_game_in_progress())
	{
		if (func_90() == 0)
		{
			iLocal_89 = 1;
		}
	}
	else
	{
		iLocal_89 = 0;
	}
	func_175();
	if (!func_173())
	{
		func_169();
	}
	func_99();
	func_92();
	iVar3 = 0;
	while (iVar3 < 6)
	{
		Global_17257.f_5484[iVar3] = 0;
		Global_17257.f_5491[iVar3] = 0;
		Global_17257.f_5498[iVar3] = 0;
		StringCopy(&(Global_17257.f_5505[iVar3 /*4*/]), "", 16);
		Global_17257.f_5591[iVar3] = 0;
		Global_17257.f_5530[iVar3 /*10*/].f_9 = 0;
		Global_17257.f_5530[iVar3 /*10*/] = 0;
		iVar3++;
	}
	iLocal_152 = 0;
	iLocal_153 = get_game_timer();
	if (network_is_game_in_progress())
	{
		iLocal_154 = get_network_time();
	}
	iLocal_155 = 0;
	if (is_bit_set(iLocal_229, false))
	{
		set_ped_dies_in_water(player_ped_id(), 1);
		set_ped_dies_in_sinking_vehicle(player_ped_id(), 1);
		set_audio_flag("SuppressPlayerScubaBreathing", 1);
		clear_bit(&iLocal_229, false);
	}
	Global_91330.f_15 = 1;
	Global_91330.f_16 = 0;
	iLocal_90 = 1;
}

void func_92()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (does_blip_exist(Global_91330.f_202[iVar0]))
		{
			remove_blip(&(Global_91330.f_202[iVar0]));
		}
		if (!network_is_game_in_progress())
		{
			if (func_30(iVar0))
			{
				iVar1 = func_32(iVar0);
				iVar2 = func_17(iVar0);
				func_16(iVar1, iVar2);
				func_12(iVar1, func_13(iVar0));
				func_98(iVar1, 1);
				func_97(iVar1, 1);
				func_24(iVar1, func_25(iVar0), 0);
				func_96(iVar1, 16);
				func_95(iVar1, 7);
				func_94(iVar1, func_8(iVar0, 0));
				func_15(iVar1, is_bit_set(Global_101154.f_668[iVar0], false), 0);
				func_93(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (iParam1 != is_bit_set(Global_25433[iVar0 /*23*/].f_11, 17))
	{
		if (iParam1)
		{
			set_bit(&(Global_25433[iVar0 /*23*/].f_11), 17);
		}
		else
		{
			clear_bit(&(Global_25433[iVar0 /*23*/].f_11), 17);
		}
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
	}
}

void func_94(int iParam0, Vector3 vParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((vParam1.x == Global_25433[iVar0 /*23*/][0 /*3*/] && vParam1.y == Global_25433[iVar0 /*23*/][0 /*3*/].f_1) && vParam1.z == Global_25433[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_25430 = 1;
	set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
	Global_25433[iVar0 /*23*/][0 /*3*/] = {vParam1};
	Global_31483 = 1;
}

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (Global_25433[iVar0 /*23*/].f_16 == iParam1)
	{
		return;
	}
	Global_25433[iVar0 /*23*/].f_16 = iParam1;
	switch (iParam1)
	{
		case 1:
			Global_25433[iVar0 /*23*/].f_12[0] = 40;
			break;
		
		case 3:
			Global_25433[iVar0 /*23*/].f_12[0] = 60;
			break;
	}
	set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
	if (Global_25430 == 1)
	{
		Global_25431 = 1;
	}
	Global_25430 = 1;
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	set_bit(&(Global_25433[iVar0 /*23*/].f_11), 16);
	Global_25433[iVar0 /*23*/].f_22 = iParam1;
	if (Global_25430 == 1)
	{
		Global_25431 = 1;
	}
	Global_25430 = 1;
	set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (iParam1 == is_bit_set(Global_25433[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (iParam1)
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), 5);
	}
	if (Global_25430 == 1)
	{
		Global_25431 = 1;
	}
	Global_25430 = 1;
	set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
}

void func_98(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (iParam1 == is_bit_set(Global_25433[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (iParam1)
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), 4);
	}
	if (Global_25430 == 1)
	{
		Global_25431 = 1;
	}
	Global_25430 = 1;
	set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
}

void func_99()
{
	if (network_is_game_in_progress() || func_168(0))
	{
		return;
	}
	if (func_22(36) || func_21(36))
	{
		func_59(21, 1, 0);
	}
	if (func_21(44))
	{
		func_59(7, 1, 0);
		func_59(8, 1, 0);
		func_59(9, 1, 0);
		func_59(10, 1, 0);
		func_59(11, 1, 0);
		func_59(12, 1, 0);
		func_59(13, 1, 0);
		func_59(14, 1, 0);
		func_59(15, 1, 0);
		func_59(16, 1, 0);
		func_59(17, 1, 0);
		func_59(18, 1, 0);
		func_59(19, 1, 0);
		func_59(20, 1, 0);
	}
	if (func_21(62))
	{
		func_59(22, 1, 0);
		func_59(23, 1, 0);
		func_59(24, 1, 0);
		func_59(25, 1, 0);
		func_59(26, 1, 0);
		func_59(27, 1, 0);
	}
	if (func_21(0))
	{
		func_59(39, 1, 0);
		func_59(40, 1, 0);
		func_59(41, 1, 0);
		func_59(42, 1, 0);
		func_59(43, 1, 0);
		func_59(0, 1, 0);
		func_59(1, 1, 0);
		func_59(2, 1, 0);
		func_59(3, 1, 0);
		func_59(4, 1, 0);
		func_59(5, 1, 0);
		func_59(6, 1, 0);
		func_59(28, 1, 0);
		func_59(29, 1, 0);
		func_59(30, 1, 0);
		func_59(31, 1, 0);
		func_59(32, 1, 0);
		func_59(33, 1, 0);
		func_59(34, 1, 0);
		func_59(35, 1, 0);
		func_59(36, 1, 0);
		func_59(37, 1, 0);
		func_59(38, 1, 0);
	}
	func_100(joaat("player_zero"), 11, 32, 1);
	func_100(joaat("player_zero"), 11, 33, 1);
	func_100(joaat("player_zero"), 11, 34, 1);
	func_100(joaat("player_zero"), 11, 35, 1);
	func_100(joaat("player_zero"), 11, 36, 1);
	func_100(joaat("player_zero"), 11, 37, 1);
	func_100(joaat("player_zero"), 11, 38, 1);
	func_100(joaat("player_zero"), 11, 39, 1);
	func_100(joaat("player_zero"), 11, 40, 1);
	func_100(joaat("player_zero"), 11, 41, 1);
	func_100(joaat("player_zero"), 11, 42, 1);
	func_100(joaat("player_zero"), 11, 43, 1);
	func_100(joaat("player_zero"), 11, 44, 1);
}

bool func_100(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_69311[1 /*14*/] = {func_102(iParam0, iParam1, iParam2)};
	if (is_bit_set(Global_69311[1 /*14*/].f_6, false) && !is_bit_set(Global_69311[1 /*14*/].f_6, 6))
	{
		if (iParam3)
		{
			func_101(iParam1, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 0, Global_69311[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			func_101(iParam1, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 0, Global_69311[1 /*14*/].f_1, 0, 1);
		}
		return true;
	}
	return false;
}

int func_101(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

struct<14> func_102(int iParam0, int iParam1, int iParam2)
{
	func_167();
	if (iParam0 == joaat("player_zero"))
	{
		func_149(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_130(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_103(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_129(iParam1);
			break;
		
		case 2:
			func_128(iParam1);
			break;
		
		case 3:
			func_125(iParam1);
			break;
		
		case 4:
			func_124(iParam1);
			break;
		
		case 6:
			func_123(iParam1);
			break;
		
		case 5:
			func_122(iParam1);
			break;
		
		case 8:
			func_121(iParam1);
			break;
		
		case 9:
			func_120(iParam1);
			break;
		
		case 10:
			func_119(iParam1);
			break;
		
		case 1:
			func_118(iParam1);
			break;
		
		case 7:
			func_117(iParam1);
			break;
		
		case 11:
			func_116(iParam1);
			break;
		
		case 12:
			func_115(iParam1);
			break;
		
		case 13:
			func_114(iParam1);
			break;
		
		case 14:
			func_104(iParam1);
			break;
	}
}

void func_104(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 155);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_105(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	*uParam0.f_6 = 0;
	*uParam0 = iParam9;
	*uParam0.f_1 = iParam2 % 32;
	*uParam0.f_2 = iParam2 / 32;
	*uParam0.f_3 = iParam4;
	*uParam0.f_4 = iParam5;
	*uParam0.f_7 = iParam6;
	StringCopy(uParam0.f_8, sParam3, 16);
	*uParam0.f_13 = iParam8;
	*uParam0.f_12 = func_111(iParam8);
	if ((*uParam0.f_2 >= 10 && *uParam0.f_5 >= 0) && *uParam0.f_5 < 3)
	{
		if (!iParam10)
		{
		}
		*uParam0.f_2 = 0;
	}
	if (get_hash_key(sParam3) != get_hash_key("NO_LABEL"))
	{
	}
	if (iParam7)
	{
		set_bit(uParam0.f_6, 3);
	}
	if (iParam10)
	{
		set_bit(uParam0.f_6, false);
		if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
		{
			set_bit(uParam0.f_6, 5);
		}
		set_bit(uParam0.f_6, true);
		set_bit(uParam0.f_6, 2);
		set_bit(uParam0.f_6, 6);
		if (func_304(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, false))
			{
				set_bit(uParam0.f_6, 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_109(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_109(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_109(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_109(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_109(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_109(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
	}
	else if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
	{
		set_bit(uParam0.f_6, false);
		set_bit(uParam0.f_6, 5);
		if (func_101(iParam1, *uParam0.f_5, *uParam0.f_2, 0, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, true);
		}
		if (func_101(iParam1, *uParam0.f_5, *uParam0.f_2, 1, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 2);
		}
		if (!func_101(iParam1, *uParam0.f_5, *uParam0.f_2, 2, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 4);
		}
	}
	else
	{
		set_bit(uParam0.f_6, false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_304(14))
			{
				return;
			}
			iVar0 = func_88(func_108(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, true);
			}
			iVar0 = func_88(func_107(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, 2);
			}
			if (func_106(iParam1, *uParam0.f_2, &iVar1))
			{
				iVar0 = func_88(iVar1, Global_69309, 0);
				if (!is_bit_set(iVar0, *uParam0.f_1))
				{
					set_bit(uParam0.f_6, 4);
				}
			}
		}
		else
		{
			set_bit(uParam0.f_6, true);
			set_bit(uParam0.f_6, 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			set_bit(uParam0.f_6, true);
			set_bit(uParam0.f_6, 2);
		}
	}
}

int func_106(int iParam0, int iParam1, auto uParam2)
{
	*uParam2 = 971;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 972;
					break;
				
				case 3:
					*uParam2 = 1422;
					break;
				
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 9:
					*uParam2 = 1431;
					break;
				
				case 10:
					*uParam2 = 1433;
					break;
				
				case 1:
					*uParam2 = 1004;
					break;
				
				case 7:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
				
				case 12:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 973;
					break;
				
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 9:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 974;
					break;
				
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 7:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	}
	return *uParam2 != 971;
}

int func_107(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 920;
					break;
				
				case 3:
					return 1407;
					break;
				
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 9:
					return 1416;
					break;
				
				case 10:
					return 1418;
					break;
				
				case 1:
					return 952;
					break;
				
				case 7:
					return 1419;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
				
				case 12:
					return 971;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 921;
					break;
				
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 9:
					return 1417;
					break;
				
				case 7:
					return 1420;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 922;
					break;
				
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 7:
					return 1421;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 968;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 969;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 970;
					break;
			}
			break;
	}
	return 928;
}

int func_108(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 868;
					break;
				
				case 3:
					return 1392;
					break;
				
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 9:
					return 1401;
					break;
				
				case 10:
					return 1403;
					break;
				
				case 1:
					return 900;
					break;
				
				case 7:
					return 1404;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
				
				case 12:
					return 919;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 869;
					break;
				
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 9:
					return 1402;
					break;
				
				case 7:
					return 1405;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 870;
					break;
				
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 7:
					return 1406;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 916;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 917;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 918;
					break;
			}
			break;
	}
	return 876;
}

int func_109(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_110(uParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_88(iVar2, iVar0, 0);
		return is_bit_set(iVar3, iVar1);
	}
	return false;
}

int func_110(auto uParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	*uParam2 = 3949;
	iVar0 = -1;
	if (iParam4)
	{
		if (Global_2560780)
		{
			iVar0 = _0x1E77FA7A62EE6C4C(uParam0);
		}
		else
		{
			iVar0 = _0xF033419D1B81FAE8(uParam0);
		}
	}
	else if (iParam5)
	{
		iVar0 = _0x1E77FA7A62EE6C4C(uParam0);
	}
	else
	{
		iVar0 = _0xF033419D1B81FAE8(uParam0);
	}
	if (iVar0 == -1)
	{
		return false;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor(to_float(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1751;
					break;
				
				case 1:
					*uParam2 = 1752;
					break;
				
				case 2:
					*uParam2 = 1753;
					break;
				
				case 3:
					*uParam2 = 1754;
					break;
				
				case 4:
					*uParam2 = 1755;
					break;
				
				case 5:
					*uParam2 = 1756;
					break;
				
				case 6:
					*uParam2 = 1763;
					break;
				
				case 7:
					*uParam2 = 1764;
					break;
				
				case 8:
					*uParam2 = 1765;
					break;
				
				case 9:
					*uParam2 = 1766;
					break;
				
				case 10:
					*uParam2 = 1767;
					break;
				
				case 11:
					*uParam2 = 1768;
					break;
				
				case 12:
					*uParam2 = 1769;
					break;
				
				case 13:
					*uParam2 = 1777;
					break;
				
				case 14:
					*uParam2 = 1778;
					break;
				
				case 15:
					*uParam2 = 1879;
					break;
				
				case 16:
					*uParam2 = 1880;
					break;
				
				case 17:
					*uParam2 = 1911;
					break;
				
				case 18:
					*uParam2 = 1925;
					break;
				
				case 19:
					*uParam2 = 1926;
					break;
				
				case 20:
					*uParam2 = 1927;
					break;
				
				case 21:
					*uParam2 = 1928;
					break;
				
				case 22:
					*uParam2 = 1929;
					break;
				
				case 23:
					*uParam2 = 2033;
					break;
				
				case 24:
					*uParam2 = 2034;
					break;
				
				case 25:
					*uParam2 = 2060;
					break;
				
				case 26:
					*uParam2 = 2061;
					break;
				
				case 27:
					*uParam2 = 2062;
					break;
				
				case 28:
					*uParam2 = 2063;
					break;
				
				case 29:
					*uParam2 = 2064;
					break;
				
				case 30:
					*uParam2 = 2065;
					break;
				
				case 31:
					*uParam2 = 2066;
					break;
				
				case 32:
					*uParam2 = 2067;
					break;
				
				case 33:
					*uParam2 = 2068;
					break;
				
				case 34:
					*uParam2 = 2069;
					break;
				
				case 35:
					*uParam2 = 2316;
					break;
				
				case 36:
					*uParam2 = 2317;
					break;
				
				case 37:
					*uParam2 = 2367;
					break;
				
				case 38:
					*uParam2 = 2368;
					break;
				
				case 39:
					*uParam2 = 2369;
					break;
				
				case 40:
					*uParam2 = 2370;
					break;
				
				case 41:
					*uParam2 = 2429;
					break;
				
				case 42:
					*uParam2 = 2430;
					break;
				
				case 43:
					*uParam2 = 2431;
					break;
				
				case 44:
					*uParam2 = 2432;
					break;
				
				case 45:
					*uParam2 = 2433;
					break;
				
				case 46:
					*uParam2 = 2434;
					break;
				
				case 47:
					*uParam2 = 2435;
					break;
				
				case 48:
					*uParam2 = 2436;
					break;
				
				case 49:
					*uParam2 = 2437;
					break;
				
				case 50:
					*uParam2 = 2438;
					break;
				
				case 51:
					*uParam2 = 2567;
					break;
				
				case 52:
					*uParam2 = 2568;
					break;
				
				case 53:
					*uParam2 = 2569;
					break;
				
				case 54:
					*uParam2 = 2570;
					break;
				
				case 55:
					*uParam2 = 2571;
					break;
				
				case 56:
					*uParam2 = 2572;
					break;
				
				case 57:
					*uParam2 = 2573;
					break;
				
				case 58:
					*uParam2 = 2574;
					break;
				
				case 59:
					*uParam2 = 2575;
					break;
				
				case 60:
					*uParam2 = 2576;
					break;
				
				case 61:
					*uParam2 = 2577;
					break;
				
				case 62:
					*uParam2 = 3174;
					break;
				
				case 63:
					*uParam2 = 3175;
					break;
				
				case 64:
					*uParam2 = 3176;
					break;
				
				case 65:
					*uParam2 = 3177;
					break;
				
				case 66:
					*uParam2 = 3178;
					break;
				
				case 67:
					*uParam2 = 3179;
					break;
				
				case 68:
					*uParam2 = 3249;
					break;
				
				case 69:
					*uParam2 = 3250;
					break;
				
				case 70:
					*uParam2 = 3251;
					break;
				
				case 71:
					*uParam2 = 3252;
					break;
				
				case 72:
					*uParam2 = 3253;
					break;
				
				case 73:
					*uParam2 = 3254;
					break;
				
				case 74:
					*uParam2 = 3255;
					break;
				
				case 75:
					*uParam2 = 3256;
					break;
				
				case 76:
					*uParam2 = 3257;
					break;
				
				case 77:
					*uParam2 = 3258;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor(to_float(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1757;
					break;
				
				case 1:
					*uParam2 = 1758;
					break;
				
				case 2:
					*uParam2 = 1759;
					break;
				
				case 3:
					*uParam2 = 1760;
					break;
				
				case 4:
					*uParam2 = 1761;
					break;
				
				case 5:
					*uParam2 = 1762;
					break;
				
				case 6:
					*uParam2 = 1770;
					break;
				
				case 7:
					*uParam2 = 1771;
					break;
				
				case 8:
					*uParam2 = 1772;
					break;
				
				case 9:
					*uParam2 = 1773;
					break;
				
				case 10:
					*uParam2 = 1774;
					break;
				
				case 11:
					*uParam2 = 1775;
					break;
				
				case 12:
					*uParam2 = 1776;
					break;
				
				case 13:
					*uParam2 = 1779;
					break;
				
				case 14:
					*uParam2 = 1780;
					break;
				
				case 15:
					*uParam2 = 1881;
					break;
				
				case 16:
					*uParam2 = 1882;
					break;
				
				case 17:
					*uParam2 = 1912;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2035;
					break;
				
				case 24:
					*uParam2 = 2036;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2318;
					break;
				
				case 36:
					*uParam2 = 2319;
					break;
				
				case 37:
					*uParam2 = 2371;
					break;
				
				case 38:
					*uParam2 = 2372;
					break;
				
				case 39:
					*uParam2 = 2373;
					break;
				
				case 40:
					*uParam2 = 2374;
					break;
				
				case 41:
					*uParam2 = 2439;
					break;
				
				case 42:
					*uParam2 = 2440;
					break;
				
				case 43:
					*uParam2 = 2441;
					break;
				
				case 44:
					*uParam2 = 2442;
					break;
				
				case 45:
					*uParam2 = 2443;
					break;
				
				case 46:
					*uParam2 = 2444;
					break;
				
				case 47:
					*uParam2 = 2445;
					break;
				
				case 48:
					*uParam2 = 2446;
					break;
				
				case 49:
					*uParam2 = 2447;
					break;
				
				case 50:
					*uParam2 = 2448;
					break;
				
				case 51:
					*uParam2 = 2578;
					break;
				
				case 52:
					*uParam2 = 2579;
					break;
				
				case 53:
					*uParam2 = 2580;
					break;
				
				case 54:
					*uParam2 = 2581;
					break;
				
				case 55:
					*uParam2 = 2582;
					break;
				
				case 56:
					*uParam2 = 2583;
					break;
				
				case 57:
					*uParam2 = 2584;
					break;
				
				case 58:
					*uParam2 = 2585;
					break;
				
				case 59:
					*uParam2 = 2586;
					break;
				
				case 60:
					*uParam2 = 2587;
					break;
				
				case 61:
					*uParam2 = 2588;
					break;
				
				case 62:
					*uParam2 = 3180;
					break;
				
				case 63:
					*uParam2 = 3181;
					break;
				
				case 64:
					*uParam2 = 3182;
					break;
				
				case 65:
					*uParam2 = 3183;
					break;
				
				case 66:
					*uParam2 = 3184;
					break;
				
				case 67:
					*uParam2 = 3185;
					break;
				
				case 68:
					*uParam2 = 3259;
					break;
				
				case 69:
					*uParam2 = 3260;
					break;
				
				case 70:
					*uParam2 = 3261;
					break;
				
				case 71:
					*uParam2 = 3262;
					break;
				
				case 72:
					*uParam2 = 3263;
					break;
				
				case 73:
					*uParam2 = 3264;
					break;
				
				case 74:
					*uParam2 = 3265;
					break;
				
				case 75:
					*uParam2 = 3266;
					break;
				
				case 76:
					*uParam2 = 3267;
					break;
				
				case 77:
					*uParam2 = 3268;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = iVar0 % 32;
	return *uParam2 != 3949;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_69311[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = _0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			get_shop_ped_query_outfit(iVar17, &Var2);
			if (!_is_dlc_data_empty(Var2))
			{
				if (iVar18 == iParam1 - iParam2)
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_105(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_105(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = _get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			get_shop_ped_query_prop(iVar38, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iVar39 == iParam1 - iParam2)
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_105(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, false), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_113(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			get_shop_ped_query_component(iVar58, &Var41);
			if (!_is_dlc_data_empty(Var41))
			{
				if (iVar59 == iParam1 - iParam2)
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_105(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 9);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 48);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 1);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 1);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 6);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_112(iVar10, iParam0, 33);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_112(iVar10, iParam0, 17);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_121(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 18);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 7);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_112(iVar10, iParam0, 84);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_112(iVar10, iParam0, 104);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_125(int iParam0)
{
	if (iParam0 < 136)
	{
		func_127(iParam0);
	}
	else
	{
		func_126(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_112(3, iParam0, 242);
	}
}

void func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 9);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_112(iVar10, iParam0, 7);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_148(iParam1);
			break;
		
		case 2:
			func_147(iParam1);
			break;
		
		case 3:
			func_143(iParam1);
			break;
		
		case 4:
			func_142(iParam1);
			break;
		
		case 6:
			func_141(iParam1);
			break;
		
		case 5:
			func_140(iParam1);
			break;
		
		case 8:
			func_139(iParam1);
			break;
		
		case 9:
			func_138(iParam1);
			break;
		
		case 10:
			func_137(iParam1);
			break;
		
		case 1:
			func_136(iParam1);
			break;
		
		case 7:
			func_135(iParam1);
			break;
		
		case 11:
			func_134(iParam1);
			break;
		
		case 12:
			func_133(iParam1);
			break;
		
		case 13:
			func_132(iParam1);
			break;
		
		case 14:
			func_131(iParam1);
			break;
	}
}

void func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 175);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 9);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 47);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_112(iVar10, iParam0, 63);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 1);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 5);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 53);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 12);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 77);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 7);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_112(iVar10, iParam0, 134);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_112(iVar10, iParam0, 117);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_143(int iParam0)
{
	if (iParam0 < 107)
	{
		func_146(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_145(iParam0);
	}
	else
	{
		func_144(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_112(3, iParam0, 318);
	}
}

void func_144(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 21);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_112(iVar10, iParam0, 10);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_149(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_166(iParam1);
			break;
		
		case 2:
			func_165(iParam1);
			break;
		
		case 3:
			func_162(iParam1);
			break;
		
		case 4:
			func_161(iParam1);
			break;
		
		case 6:
			func_160(iParam1);
			break;
		
		case 5:
			func_159(iParam1);
			break;
		
		case 8:
			func_158(iParam1);
			break;
		
		case 9:
			func_157(iParam1);
			break;
		
		case 10:
			func_156(iParam1);
			break;
		
		case 1:
			func_155(iParam1);
			break;
		
		case 7:
			func_154(iParam1);
			break;
		
		case 11:
			func_153(iParam1);
			break;
		
		case 12:
			func_152(iParam1);
			break;
		
		case 13:
			func_151(iParam1);
			break;
		
		case 14:
			func_150(iParam1);
			break;
	}
}

void func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_112(iVar10, iParam0, 113);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_151(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 10);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 53);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 45);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 1);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 5);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_112(iVar10, iParam0, 48);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 20);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 24);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_112(iVar10, iParam0, 14);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_112(iVar10, iParam0, 99);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 113);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_162(int iParam0)
{
	if (iParam0 < 60)
	{
		func_164(iParam0);
	}
	else
	{
		func_163(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_112(3, iParam0, 181);
	}
}

void func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_112(iVar10, iParam0, 6);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_112(iVar10, iParam0, 7);
			return;
			break;
	}
	func_105(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_167()
{
	Global_69311[0 /*14*/].f_1 = -1;
	Global_69311[0 /*14*/].f_2 = -1;
	Global_69311[0 /*14*/].f_5 = -1;
	Global_69311[0 /*14*/].f_3 = -1;
	Global_69311[0 /*14*/].f_4 = -1;
	Global_69311[0 /*14*/].f_7 = 0;
	Global_69311[0 /*14*/].f_6 = 0;
	Global_69311[0 /*14*/].f_13 = -1;
	Global_69311[0 /*14*/].f_12 = 0;
	Global_69311[0 /*14*/] = 0;
	StringCopy(&(Global_69311[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_168(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_169()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = -1;
	if (network_is_game_in_progress())
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iVar1 == 0)
		{
			func_79(func_89(iVar0), 0, -1, 1);
			func_59(iVar0, 0, 0);
		}
		else if (iVar1 == 1)
		{
			Global_101154.f_668[iVar0] = 0;
			func_59(iVar0, (!Global_101154.f_7775 && !func_168(0)), 0);
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_59(28, 1, 0);
		func_59(30, 1, 0);
		func_59(31, 1, 0);
		func_59(33, 1, 0);
		func_59(34, 1, 0);
		func_171(77, 1, -1, 1);
	}
	else if (iVar1 == 1)
	{
		func_170(0, 1);
		func_170(23, 1);
		func_170(28, 1);
		func_170(14, 1);
		func_170(39, 1);
		Global_101154.f_668.f_775 = 0;
		Global_101154.f_668.f_776 = 0;
		Global_101154.f_668.f_777 = 0;
		Global_101154.f_668.f_778 = 0;
		Global_101154.f_668.f_779 = 0;
		Global_101154.f_668.f_780 = 0;
		iVar2 = 0;
		while (iVar2 < Global_101154.f_668.f_74)
		{
			Global_101154.f_668.f_74[iVar2] = 0;
			iVar2++;
		}
		Global_101154.f_668.f_46 = 1;
	}
	Global_91330 = 0;
}

void func_170(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_5(iParam0, 10, 0))
		{
			func_58(iParam0, 10, 0);
			func_56(iParam0);
		}
	}
	else if (func_5(iParam0, 10, 0))
	{
		func_4(iParam0, 10, 0);
		func_56(iParam0);
	}
}

void func_171(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_172())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_80(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

bool func_172()
{
	return true;
	return false;
}

int func_173()
{
	if (network_is_game_in_progress())
	{
		if (func_90() == 0)
		{
			return func_174(77, -1);
		}
	}
	else
	{
		return Global_101154.f_668.f_46;
	}
	return 0;
}

int func_174(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_80(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_175()
{
	int iVar0;
	
	iLocal_93 = 0;
	iLocal_147 = 0;
	iLocal_150 = 0;
	iVar0 = 0;
	while (iVar0 < 45)
	{
		Global_91330.f_1300[iVar0] = 0;
		func_56(iVar0);
		func_51(iVar0);
		iVar0++;
	}
	Global_91330.f_5 = 0;
	Global_91330.f_7 = 0;
	Global_91330.f_8 = 0;
	Global_91330.f_9[0] = 0;
	Global_91330.f_9[1] = 0;
	Global_91330.f_9[2] = 0;
	Global_91330.f_9[3] = 0;
	Global_91330.f_9[4] = 0;
	Global_91330.f_296 = 0;
	Global_91330.f_297 = 0;
	Global_91330.f_1360 = 1;
}

void func_176(int iParam0)
{
	func_58(iParam0, 9, 1);
}

int func_177(int iParam0)
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

bool func_178()
{
	if (func_180() && func_179(0))
	{
		return true;
	}
	return false;
}

auto func_179(int iParam0)
{
	return Global_1312369[iParam0];
}

auto func_180()
{
	return func_179(func_81() + 1);
}

void func_181()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	
	if (!network_is_game_in_progress())
	{
		return;
	}
	Global_2560780 = func_182(386, Global_69309, -1) == 0;
	if (!iLocal_226 && !is_ped_injured(player_ped_id()))
	{
		if (get_entity_model(player_ped_id()) == joaat("mp_m_freemode_01"))
		{
			func_50("PROCESS_CACHED_DLC_DATA - caching data for some dlc items.", -1);
			iVar2 = _get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
			init_shop_ped_component(&Var3);
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				get_shop_ped_query_component(iVar0, &Var3);
				if (!_is_dlc_data_empty(Var3) && Var3.f_6 == 8)
				{
					if (get_hash_key(&(Var3.f_9)) == -1665616807)
					{
						if (_0x341DE7ED1D2A1BFD(Var3.f_1, 647976134, false))
						{
							Global_2560784[1] = Var3.f_1;
							Global_2560781[1] = iVar1;
						}
						else
						{
							Global_2560784[0] = Var3.f_1;
							Global_2560781[0] = iVar1;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			iLocal_226 = 1;
		}
	}
}

int func_182(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_81();
	}
	iVar0 = 0;
	iVar1 = func_184(iParam0, iParam1);
	iVar2 = func_183(iParam0);
	if (0 != iVar1)
	{
		if (!stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_183(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	return iVar0;
}

int func_184(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_81();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

void func_185()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<5> Var6;
	int iVar23;
	Vector3 vVar24;
	int iVar27;
	int iVar28;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = false;
	if ((network_is_game_in_progress() && !is_ped_injured(player_ped_id())) && !func_211(player_id()))
	{
		iVar2 = true;
	}
	if (iVar2)
	{
		iVar3 = get_ped_prop_index(player_ped_id(), 2) * 1000 + get_ped_prop_texture_index(player_ped_id(), 2);
		if (iLocal_301 != iVar3)
		{
			iVar4 = get_hash_name_for_prop(player_ped_id(), 2, get_ped_prop_index(player_ped_id(), 2), get_ped_prop_texture_index(player_ped_id(), 2));
			if (_0x341DE7ED1D2A1BFD(iVar4, 1283593258, true))
			{
				if (!_0x65FAEE425DE637B0(player_id()))
				{
					_0x5DC40A8869C22141(player_id(), 1);
				}
			}
			else if (_0x65FAEE425DE637B0(player_id()))
			{
				_0x5DC40A8869C22141(player_id(), 0);
			}
			iLocal_301 = iVar3;
		}
		iVar3 = get_ped_prop_index(player_ped_id(), false) * 1000 + get_ped_prop_texture_index(player_ped_id(), false);
		if (iLocal_302 != iVar3)
		{
			iVar4 = get_hash_name_for_prop(player_ped_id(), false, get_ped_prop_index(player_ped_id(), false), get_ped_prop_texture_index(player_ped_id(), false));
			iVar5 = get_hash_name_for_component(player_ped_id(), 11, get_ped_drawable_variation(player_ped_id(), 11), get_ped_texture_variation(player_ped_id(), 11));
			if (_0x341DE7ED1D2A1BFD(iVar4, -713698407, true) && _0x341DE7ED1D2A1BFD(iVar5, -713698407, false))
			{
				if (get_entity_model(player_ped_id()) == joaat("mp_m_freemode_01"))
				{
					get_shop_ped_component(1289054859, &Var6);
					set_ped_component_variation(player_ped_id(), 7, Var6.f_3, Var6.f_4, 0);
				}
				else if (get_entity_model(player_ped_id()) == joaat("mp_f_freemode_01"))
				{
					get_shop_ped_component(-1525714295, &Var6);
					set_ped_component_variation(player_ped_id(), 7, Var6.f_3, Var6.f_4, 0);
				}
				iLocal_303 = 1;
			}
			else
			{
				iVar23 = get_hash_name_for_component(player_ped_id(), 7, get_ped_drawable_variation(player_ped_id(), 7), get_ped_texture_variation(player_ped_id(), 7));
				if (_0x341DE7ED1D2A1BFD(iVar23, -713698407, false))
				{
					set_ped_component_variation(player_ped_id(), 7, false, false, 0);
					iLocal_303 = 1;
				}
			}
			iLocal_302 = iVar3;
		}
		if ((iLocal_303 && _0x7350823473013C02(player_ped_id())) && has_ped_head_blend_finished(player_ped_id()))
		{
			_0x4668D80430D6C299(player_ped_id());
			iLocal_303 = 0;
		}
		iVar3 = get_ped_drawable_variation(player_ped_id(), true) * 1000 + get_ped_texture_variation(player_ped_id(), true);
		if (iLocal_304 != iVar3 || is_bit_set(Global_2460486.f_4429, 22))
		{
			if (is_bit_set(Global_2460486.f_4429, 22))
			{
				if (!is_player_switch_in_progress())
				{
					clear_bit(&(Global_2460486.f_4429), 22);
				}
				else
				{
					return;
				}
			}
			iVar1 = 1;
			iVar4 = get_hash_name_for_component(player_ped_id(), true, get_ped_drawable_variation(player_ped_id(), true), get_ped_texture_variation(player_ped_id(), true));
			if (_0x341DE7ED1D2A1BFD(iVar4, 1827025211, false) && func_210())
			{
				vVar24 = {func_209(player_id())};
				if (vVar24.z > -140f)
				{
					if (!is_bit_set(iLocal_229, false))
					{
						set_ped_dies_in_water(player_ped_id(), 0);
						set_ped_dies_in_sinking_vehicle(player_ped_id(), 0);
						set_audio_flag("SuppressPlayerScubaBreathing", 0);
						set_bit(&iLocal_229, false);
					}
					iVar1 = 0;
				}
			}
			iLocal_304 = iVar3;
		}
		if (!func_208() && !func_211(player_id()))
		{
			iVar27 = player_ped_id();
			if (does_entity_exist(Global_2561288) && !is_ped_injured(Global_2561288))
			{
				iVar27 = Global_2561288;
			}
			iVar3 = get_ped_drawable_variation(iVar27, true) * 1000 + get_ped_texture_variation(iVar27, true);
			if ((iLocal_305 != iVar3 || is_bit_set(Global_2460486.f_4429, 22)) || iLocal_306 != func_342())
			{
				iVar0 = 1;
				iVar4 = get_hash_name_for_component(iVar27, true, get_ped_drawable_variation(iVar27, true), get_ped_texture_variation(iVar27, true));
				if (_0x341DE7ED1D2A1BFD(iVar4, -1188154325, false) && func_206())
				{
					if (!_0x35FB78DC42B7BD21())
					{
						func_204(1, 1);
					}
					iVar0 = 0;
				}
				iLocal_305 = iVar3;
				iLocal_306 = func_342();
			}
		}
		iVar28 = get_hash_name_for_component(player_ped_id(), true, get_ped_drawable_variation(player_ped_id(), true), get_ped_texture_variation(player_ped_id(), true));
		if (_0x341DE7ED1D2A1BFD(iVar28, 1517353543, false))
		{
			set_ped_reset_flag(player_ped_id(), 346, true);
		}
		if ((_0x35FB78DC42B7BD21() && !func_208()) && !func_211(player_id()))
		{
			if (iVar0 || !func_206())
			{
				if (!func_203(Global_1617379.f_70365))
				{
					if (!is_bit_set(Global_2460486.f_4429, 30))
					{
						func_204(0, 1);
					}
				}
			}
		}
		if (is_bit_set(iLocal_229, false))
		{
			if (iVar1 || !func_210())
			{
				set_ped_dies_in_water(player_ped_id(), 1);
				set_ped_dies_in_sinking_vehicle(player_ped_id(), 1);
				set_audio_flag("SuppressPlayerScubaBreathing", 1);
				clear_bit(&iLocal_229, false);
			}
		}
		if (iVar2)
		{
			func_186();
		}
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	
	if (is_bit_set(iLocal_229, false))
	{
		iVar0 = 2;
		if (func_201(player_id()) == 172)
		{
			iVar0 = 3;
		}
		if (((!is_ped_sitting_in_any_vehicle(player_ped_id()) && func_200(player_ped_id())) || ((is_ped_sitting_in_any_vehicle(player_ped_id()) && func_200(get_vehicle_ped_is_in(player_ped_id(), 0))) && !is_ped_in_any_sub(player_ped_id()))) || iLocal_300)
		{
			iVar1 = func_88(2038, -1, 0);
			if (iVar1 > 0)
			{
				if (func_199(&uLocal_297))
				{
					if (Global_262145.f_6758 * 1000 - func_198(&uLocal_297, 0, 0) - iLocal_299 < 0)
					{
						func_195(2038, -1);
						iVar1 = func_88(2038, -1, 0);
						iLocal_299 = 0;
						func_194(&uLocal_297);
					}
				}
				else
				{
					func_193(&uLocal_297, 0, 0);
				}
				if (func_201(player_id()) == 172)
				{
					iVar1--;
				}
				func_190(iVar1, "NUM_REBR", -1, 1, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				func_187(Global_262145.f_6758 * 1000 - func_198(&uLocal_297, 0, 0) - iLocal_299, Global_262145.f_6758 * 1000, "AIR_REBR", 10, -1, iVar0, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1);
			}
			else
			{
				func_190(0, "NUM_REBR", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				func_187(0, 1, "AIR_REBR", 10, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1);
			}
			iLocal_300 = 0;
			if ((is_ped_sitting_in_any_vehicle(player_ped_id()) && is_entity_in_water(get_vehicle_ped_is_in(player_ped_id(), 0))) && !is_ped_in_any_sub(player_ped_id()))
			{
				iLocal_300 = 1;
			}
		}
		else if (func_199(&uLocal_297))
		{
			iLocal_299 += func_198(&uLocal_297, 0, 0);
			func_194(&uLocal_297);
		}
	}
	else if (func_199(&uLocal_297))
	{
		iLocal_299 += func_198(&uLocal_297, 0, 0);
		func_194(&uLocal_297);
	}
}

void func_187(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_189(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_188(0, iVar0);
		Global_1339940.f_946[iVar0] = iParam0;
		Global_1339940.f_946.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1339940.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1339940.f_946.f_194[iVar0] = iParam3;
		Global_1339940.f_946.f_183[iVar0] = iParam4;
		Global_1339940.f_946.f_216[iVar0] = iParam5;
		Global_1339940.f_946.f_227[iVar0 /*3*/] = iParam6;
		Global_1339940.f_946.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1339940.f_946.f_258[iVar0] = iParam8;
		Global_1339940.f_946.f_269[iVar0] = iParam9;
		Global_1339940.f_946.f_312[iVar0] = iParam10;
		Global_1339940.f_946.f_323[iVar0] = iParam11;
		Global_1339940.f_946.f_334[iVar0] = iParam12;
		Global_1339940.f_946.f_345[iVar0] = iParam13;
		Global_1339940.f_941 = 1;
		Global_1339940.f_946.f_356[iVar0] = iParam14;
		Global_1339940.f_946.f_367[iVar0] = iParam15;
		Global_1339940.f_946.f_378[iVar0] = iParam16;
		Global_1339940.f_946.f_389[iVar0] = iParam17;
		Global_1339940.f_946.f_400[iVar0] = iParam18;
		Global_1339940.f_946.f_411[iVar0] = iParam19;
	}
}

void func_188(int iParam0, int iParam1)
{
	set_bit(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_189(int iParam0, int iParam1)
{
	return is_bit_set(Global_1339940.f_4726[iParam0], iParam1);
}

void func_190(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_189(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_188(6, iVar0);
		Global_1339940.f_3557[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_3557.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_3557.f_183[iVar0] = iParam3;
		Global_1339940.f_3557.f_172[iVar0] = iParam2;
		Global_1339940.f_3557.f_260[iVar0] = iParam4;
		Global_1339940.f_3557.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339940.f_3557.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339940.f_3557.f_443[iVar0] = iParam7;
		Global_1339940.f_3557.f_454[iVar0] = iParam8;
		Global_1339940.f_3557.f_497[iVar0] = iParam9;
		Global_1339940.f_3557.f_508[iVar0] = iParam10;
		Global_1339940.f_3557.f_205[iVar0] = iParam11;
		Global_1339940.f_3557.f_216[iVar0] = iParam12;
		Global_1339940.f_3557.f_227[iVar0] = iParam13;
		Global_1339940.f_3557.f_238[iVar0] = iParam14;
		Global_1339940.f_3557.f_249[iVar0] = iParam15;
		Global_1339940.f_3557.f_519[iVar0] = iParam16;
		Global_1339940.f_3557.f_530[iVar0] = iParam17;
		Global_1339940.f_3557.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_192())
		{
			Global_1339940.f_941 = 1;
		}
		if (is_pc_version())
		{
			iVar2 = 0;
			_get_screen_active_resolution(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339940.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339940.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339940.f_941 = 1;
			}
			if (func_191())
			{
				Global_1339940.f_945 = 1;
			}
		}
	}
}

bool func_191()
{
	int iVar0;
	auto uVar1;
	
	if (is_pc_version())
	{
		_get_screen_active_resolution(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return true;
		}
	}
	return false;
}

bool func_192()
{
	if ((_get_ui_language_id() == 8 || _get_ui_language_id() == 9) || _get_ui_language_id() == 10)
	{
		return true;
	}
	return false;
}

void func_193(auto uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (network_is_game_in_progress() && !iParam1)
		{
			if (!iParam2)
			{
				*uParam0 = get_network_time();
			}
			else
			{
				*uParam0 = _0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = get_game_timer();
		}
		*uParam0.f_1 = 1;
	}
}

void func_194(auto uParam0)
{
	*uParam0.f_1 = 0;
}

void func_195(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_88(iParam0, func_80(iParam1), 0);
	iVar0--;
	if (!func_197(iParam0))
	{
		func_79(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_196(iParam0, iVar0, iParam1, 1);
	}
}

void func_196(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_80(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_80(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_80(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_80(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_80(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_80(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_80(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_80(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_80(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_80(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_80(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_80(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_80(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_80(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_80(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_80(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_80(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_80(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_80(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_80(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_80(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_80(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_80(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_80(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_80(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_80(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_80(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_80(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_80(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_80(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_80(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_80(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_80(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_80(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_80(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

bool func_197(int iParam0)
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

int func_198(auto uParam0, int iParam1, int iParam2)
{
	if (network_is_game_in_progress() && !iParam1)
	{
		if (!iParam2)
		{
			return get_time_difference(get_network_time(), *uParam0);
		}
		else
		{
			return get_time_difference(_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return get_time_difference(get_game_timer(), *uParam0);
}

auto func_199(auto uParam0)
{
	return *uParam0.f_1;
}

int func_200(int iParam0)
{
	if (!is_entity_in_water(iParam0))
	{
		return false;
	}
	return get_entity_submerged_level(iParam0) >= 1f;
}

int func_201(int iParam0)
{
	if (func_202(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_202(auto uParam0, int iParam1)
{
	if (Global_1610316[uParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[uParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

bool func_203(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7431[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_204(int iParam0, int iParam1)
{
	set_nightvision(iParam0);
	if (iParam0 == 1)
	{
		if (iParam1)
		{
			play_sound_frontend(-1, "THERMAL_VISION_GOGGLES_ON_MASTER", 0, 1);
		}
		set_bit(&(Global_1708323[player_id() /*199*/].f_198), false);
	}
	else
	{
		if (iParam1)
		{
			play_sound_frontend(-1, "THERMAL_VISION_GOGGLES_OFF_MASTER", 0, 1);
		}
		clear_bit(&(Global_1708323[player_id() /*199*/].f_198), false);
	}
	func_205(!iParam0);
}

void func_205(int iParam0)
{
	func_171(229, iParam0, -1, 1);
}

bool func_206()
{
	int iVar0;
	
	if (is_player_switch_in_progress())
	{
		return false;
	}
	if (is_bit_set(Global_2460486.f_4429, 30))
	{
		return false;
	}
	if (is_bit_set(Global_2460486.f_4429, 14))
	{
		return false;
	}
	if (func_207())
	{
		return false;
	}
	if (func_342())
	{
		return false;
	}
	iVar0 = get_player_team(player_id());
	if (iVar0 >= 0 && iVar0 < 4)
	{
		if (is_bit_set(Global_1617379.f_80[iVar0 /*6968*/].f_3997, 8))
		{
			return false;
		}
	}
	return true;
}

int func_207()
{
	if (network_is_game_in_progress())
	{
		return func_174(229, -1);
	}
	return 0;
}

auto func_208()
{
	return Global_2561354;
}

Vector3 func_209(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

bool func_210()
{
	Vector3 vVar0;
	
	vVar0 = {func_209(player_id())};
	if (((is_bit_set(Global_2460486.f_4429, 15) || func_88(2038, -1, 0) == 0) || Global_1715399) || vVar0.z < -140f)
	{
		return false;
	}
	return true;
}

bool func_211(int iParam0)
{
	if (func_213(iParam0, 0))
	{
		return true;
	}
	if (func_212())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (is_bit_set(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_212()
{
	return is_bit_set(Global_2359301, 3);
}

int func_213(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_214(-1, 0) == 8;
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

int func_214(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_81();
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

void func_215()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_307 > 0)
	{
		if (!network_is_game_in_progress() || !func_216(player_id(), 0, 1))
		{
			iLocal_307 = 99;
		}
	}
	switch (iLocal_307)
	{
		case 0:
			if (network_is_game_in_progress() && func_216(player_id(), 0, 1))
			{
				iLocal_307++;
			}
			break;
		
		case 1:
			iVar2 = int_to_playerindex(iLocal_308);
			if (func_216(iVar2, 1, 1))
			{
				iVar0 = get_player_ped(iVar2);
				if (!is_ped_injured(iVar0) && is_ped_in_any_vehicle(iVar0, 0))
				{
					iVar1 = get_vehicle_ped_is_in(iVar0, 0);
					if (((does_entity_exist(iVar1) && is_vehicle_driveable(iVar1, 0)) && get_ped_in_vehicle_seat(iVar1, -1) == iVar0) && get_entity_model(iVar1) == joaat("rhino"))
					{
						iLocal_309++;
					}
				}
			}
			iLocal_308++;
			if (iLocal_308 >= 32)
			{
				if (iLocal_309 >= 4)
				{
					if (!iLocal_311)
					{
					}
					iLocal_311 = 1;
					iLocal_310 = get_network_time();
				}
				iLocal_308 = false;
				iLocal_309 = 0;
			}
			if (iLocal_311 && absi(get_time_difference(get_network_time(), iLocal_310)) < 300000)
			{
				if (!iLocal_312)
				{
					request_named_ptfx_asset("scr_mp_tankbattle");
					if (has_named_ptfx_asset_loaded("scr_mp_tankbattle"))
					{
						_set_ptfx_asset_old_to_new("exp_grd_tankshell", "exp_grd_tankshell_mp");
						iLocal_312 = 1;
					}
				}
			}
			else if (iLocal_311)
			{
				iLocal_307 = 99;
			}
			break;
		
		case 99:
			if (iLocal_312)
			{
				_0x89C8553DD3274AAE("exp_grd_tankshell");
			}
			_remove_named_ptfx_asset("scr_mp_tankbattle");
			iLocal_308 = false;
			iLocal_309 = 0;
			iLocal_311 = 0;
			iLocal_312 = 0;
			iLocal_307 = 0;
			break;
	}
}

bool func_216(int iParam0, int iParam1, int iParam2)
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

void func_217()
{
	int iVar0;
	
	if (!func_220())
	{
		if (func_199(&iLocal_159))
		{
			func_194(&iLocal_159);
		}
		return;
	}
	if (!func_199(&iLocal_159))
	{
		func_219(&iLocal_159, 1, 0);
		iLocal_159 = get_time_offset(iLocal_159, 10000);
		iLocal_161 = 10;
		return;
	}
	iVar0 = get_time_difference(get_game_timer(), iLocal_159);
	if (iVar0 >= 6000)
	{
		iLocal_161 = 0;
		func_219(&iLocal_159, 1, 0);
	}
	if (iLocal_161 < 10)
	{
		func_218(iLocal_161);
		iLocal_161++;
	}
}

void func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_220())
	{
		return;
	}
	iVar2 = false;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("faction3");
			break;
		
		case 1:
			iVar0 = joaat("minivan2");
			break;
		
		case 2:
			iVar0 = joaat("sabregt2");
			break;
		
		case 3:
			iVar0 = joaat("slamvan3");
			break;
		
		case 4:
			iVar0 = joaat("tornado5");
			break;
		
		case 5:
			iVar0 = joaat("virgo2");
			break;
		
		case 6:
			iVar0 = joaat("virgo3");
			break;
		
		case 7:
			iVar0 = joaat("prototipo");
			break;
		
		case 8:
			iVar0 = joaat("seven70");
			break;
		
		case 9:
			iVar0 = joaat("pfister811");
			break;
		
		default:
			return;
			break;
	}
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar1 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (!is_entity_dead(iVar1, 0))
			{
				iVar3 = get_entity_model(iVar1);
				if (iVar3 == iVar0)
				{
					clear_ped_tasks_immediately(player_ped_id());
					iVar2 = true;
				}
			}
		}
	}
	if (!iVar2)
	{
		iVar4 = 6;
		iVar1 = get_closest_vehicle(get_entity_coords(player_ped_id(), 1), 500f, iVar0, iVar4);
		if (does_entity_exist(iVar1))
		{
			if (!is_entity_dead(iVar1, 0))
			{
				iVar2 = true;
			}
		}
	}
	if (iVar2)
	{
		if (!is_entity_a_mission_entity(iVar1) || !does_entity_belong_to_this_script(iVar1, 1))
		{
			set_entity_as_mission_entity(iVar1, true, 1);
		}
		delete_vehicle(&iVar1);
	}
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	if (network_is_game_in_progress() && !iParam1)
	{
		if (!iParam2)
		{
			*iParam0 = get_network_time();
		}
		else
		{
			*iParam0 = _0x89023FBBF9200E9F();
		}
	}
	else
	{
		*iParam0 = get_game_timer();
	}
	*iParam0.f_1 = 1;
}

bool func_220()
{
	if (network_is_game_in_progress() || is_player_switch_in_progress())
	{
		return false;
	}
	if (Global_2562051)
	{
		return false;
	}
	if (((func_71() || func_224()) || func_222()) || _0xD422FCC5F239A915())
	{
		return false;
	}
	if (func_221() != 999)
	{
		return false;
	}
	if (_0x4237E822315D8BA9())
	{
		return false;
	}
	return true;
}

auto func_221()
{
	return Global_25121;
}

bool func_222()
{
	if (func_223() == 3 || func_223() == 2)
	{
		return true;
	}
	return false;
}

auto func_223()
{
	return Global_1312466.f_18;
}

bool func_224()
{
	if (func_223() == 1 || func_223() == 4)
	{
		return true;
	}
	return false;
}

void func_225()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_243() || !network_is_game_in_progress())
	{
		return;
	}
	if (!get_frame_count() % 1500 == 0)
	{
		return;
	}
	if (func_242())
	{
		func_241();
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2558630[iVar0] == 1)
		{
			iVar2 = 1;
		}
		else
		{
			iVar0++;
		}
	}
	if (((iVar2 && !is_ped_injured(player_ped_id())) && !func_240()) && !func_239())
	{
		if (func_238() == -1)
		{
			iVar3 = true;
		}
	}
	if (iVar3)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Global_2558630[iVar0] == 1)
			{
				iVar1 = func_88(func_237(iVar0), -1, 0);
				if (!_0x247F0F73A182EA0B(iVar1))
				{
					Global_2558630[iVar0] = 3;
				}
				else if (_network_shop_get_price(iVar1, 1227573907, 1) != 0)
				{
					Global_2558630[iVar0] = 3;
				}
				else if (!func_233(78225582, 1227573907, iVar1, 537254313, 1, 0, 1, 4, 0, 4))
				{
					Global_2558630[iVar0] = 3;
				}
			}
			iVar0++;
		}
		if (!func_230())
		{
			func_226(func_238());
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (Global_2558630[iVar0] == 1)
				{
					Global_2558630[iVar0] = 3;
				}
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (Global_2558630[iVar0] == 1)
				{
					Global_2558630[iVar0] = 2;
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Global_2558630[iVar0] == 3 || Global_2558630[iVar0] == 2)
			{
				Global_2558630[iVar0] = -1;
				func_79(func_237(iVar0), 2, -1, 1);
			}
			iVar0++;
		}
	}
}

void func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_243())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_229(iParam0))
		{
			if (!iVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!iVar0)
		{
			_0xE2A99A9B524BEFFF(Global_2558146[iParam0 /*73*/]);
		}
		func_227(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_227(auto uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = -1593119440;
	*uParam0.f_4 = -2085313189;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 1227573907;
	*uParam0.f_7 = -1161833819;
	*uParam0.f_8 = 0;
	*uParam0.f_8.f_1 = 0;
	*uParam0.f_8.f_2 = 0;
	func_228(uParam0.f_8.f_3);
	func_228(uParam0.f_8.f_16);
	StringCopy(uParam0.f_8.f_29, "", 32);
	StringCopy(uParam0.f_8.f_37, "", 24);
	StringCopy(uParam0.f_8.f_43, "", 16);
	StringCopy(uParam0.f_8.f_47, "", 16);
	*uParam0.f_8.f_51 = 0;
	*uParam0.f_8.f_52 = 0;
	*uParam0.f_8.f_53 = 0;
	*uParam0.f_8.f_54 = 0;
	*uParam0.f_8.f_55 = 0;
	*uParam0.f_8.f_56 = 0;
	*uParam0.f_66 = 0;
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 0;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
}

void func_228(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 0;
}

int func_229(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

bool func_230()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	if (!func_243())
	{
		iVar0 = true;
	}
	iVar1 = func_238();
	if (iVar1 == -1)
	{
		return false;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_81()) || _0x810E8431C0614BF9())
		{
			if (func_232(Global_2558146[iVar1 /*73*/].f_6, Global_2558146[iVar1 /*73*/].f_4, Global_2558146[iVar1 /*73*/].f_1) == 1)
			{
				Global_2558637 = 1;
			}
			return false;
		}
		if (Global_2444207)
		{
			if (Global_2558146[iVar1 /*73*/].f_6 == 1067618600 || Global_2558146[iVar1 /*73*/].f_6 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar2 = func_231(iVar1);
	if (iVar2 != 2147483647)
	{
		if (iVar0 || _0x39BE7CEA8D9CC8E6(iVar2))
		{
			if (iVar0)
			{
				Global_2558146[iVar1 /*73*/].f_66 = 1;
			}
			Global_2558146[iVar1 /*73*/].f_72 = 0;
			Global_2558628 = 1;
			return true;
		}
	}
	return false;
}

int func_231(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/];
	}
	return -1;
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case 1982688246:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

bool func_233(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	
	iVar0 = false;
	if (!func_243())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_81()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar1 = func_238();
	if (iVar1 == -1)
	{
		if (!func_235(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return false;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_234(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_2558146[iVar1 /*73*/].f_70 = Var2;
		Global_2558146[iVar1 /*73*/].f_71 = Var2.f_1;
		if (iVar0 || _0xF30980718C8ED876(&Var2, iParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_234(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
			return true;
			break;
	}
	return false;
}

bool func_235(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, auto uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = false;
	if (!func_243())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_81()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
		{
			iVar2 = true;
		}
		else if (Global_2558146[iVar1 /*73*/].f_5 == 1)
		{
			return false;
		}
		iVar1++;
	}
	if (!iVar2)
	{
		return false;
	}
	*iParam0 = 0;
	if (!iVar0)
	{
		if (_0xA65568121DF2EA26())
		{
			unk_0xFA336E7F40C0A0D0();
		}
	}
	if (iVar0 || _network_shop_basket_start(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_236(iVar3, uParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5);
		return true;
	}
	return false;
}

int func_236(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_243())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = iParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = iParam2;
			Global_2558146[iVar0 /*73*/].f_7 = iParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = iParam0;
			Global_2558146[iVar0 /*73*/].f_6 = iParam4;
			Global_2558146[iVar0 /*73*/].f_69 = uParam8;
			Global_2558146[iVar0 /*73*/].f_68 = iParam7;
			Global_2558146[iVar0 /*73*/].f_72 = 0;
			Global_2558628 = 0;
			if (iParam6)
			{
				Global_2558146[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3170;
			break;
		
		case 1:
			return 3171;
			break;
		
		case 2:
			return 3172;
			break;
		
		case 3:
			return 3173;
			break;
	}
	return 3170;
}

int func_238()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_231(iVar0) != 2147483647)
		{
			if (func_229(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_239()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

int func_240()
{
	return Global_91330.f_296 > 0;
}

void func_241()
{
	int iVar0;
	int iVar1;
	
	if (!func_174(188, -1))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_79(func_237(iVar0), 2, -1, 1);
			Global_2558630[iVar0] = -1;
			iVar0++;
		}
		func_171(188, 1, -1, 1);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Global_2558630[iVar0] == 0)
			{
				iVar1 = func_88(func_237(iVar0), -1, 0);
				if (iVar1 != 2)
				{
					Global_2558630[iVar0] = 1;
				}
				else
				{
					Global_2558630[iVar0] = -1;
				}
			}
			iVar0++;
		}
	}
}

int func_242()
{
	return (1 && Global_2558630[0] == 0);
}

bool func_243()
{
	if (is_pc_version())
	{
		return true;
	}
	return false;
}

void func_244()
{
	if (network_is_game_in_progress())
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_entity_dead(player_ped_id(), 0))
			{
				if (func_245(player_ped_id()))
				{
					if (get_ped_drawable_variation(player_ped_id(), 6) == 35)
					{
						set_ped_config_flag(player_ped_id(), 389, true);
					}
					else
					{
						set_ped_config_flag(player_ped_id(), 389, false);
					}
				}
				else if (get_ped_drawable_variation(player_ped_id(), 6) == 34)
				{
					set_ped_config_flag(player_ped_id(), 389, true);
				}
				else
				{
					set_ped_config_flag(player_ped_id(), 389, false);
				}
			}
		}
	}
}

bool func_245(int iParam0)
{
	if (get_entity_model(iParam0) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

void func_246()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_66)
		{
			func_254(Global_2558146[iVar1 /*73*/]);
		}
		if ((Global_2558146[iVar1 /*73*/].f_2 == 1 && Global_2558628) && func_253(&(Global_2558146[iVar1 /*73*/])))
		{
			iVar0 = true;
		}
		if (Global_2558146[iVar1 /*73*/].f_72 != 0 && !func_342())
		{
			iVar2 = 1000 / round(get_frame_time() * 1000f);
			if (get_frame_count() - Global_2558146[iVar1 /*73*/].f_72 > iVar2 * 35)
			{
				Global_2558146[iVar1 /*73*/].f_72 = 0;
			}
		}
		iVar1++;
	}
	if (!iLocal_276)
	{
		if (iVar0)
		{
			func_251(&Local_230, 0);
			iLocal_276 = 1;
		}
	}
	else if (iVar0)
	{
		StringCopy(&(Local_230.f_1), "HUD_TRANSP", 64);
		func_248(&Local_230, func_250(&Local_230));
	}
	else
	{
		iLocal_276 = 0;
		func_247(0);
	}
}

void func_247(int iParam0)
{
	_0x10D373323E5B9C0D();
	if (iParam0)
	{
		_0xC65AB383CD91DF98();
	}
}

void func_248(auto uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_249(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (*uParam0.f_36)
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			add_text_component_integer(*uParam0.f_33);
			add_text_component_integer(*uParam0.f_34);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		else if (*uParam0.f_37)
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			add_text_component_integer(*uParam0.f_33);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		else if (*uParam0.f_39)
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			add_text_component_substring_player_name(uParam0.f_17);
			add_text_component_integer(*uParam0.f_33);
			add_text_component_integer(*uParam0.f_34);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		else if (*uParam0.f_38)
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			add_text_component_substring_player_name(uParam0.f_17);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		else if (*uParam0.f_40)
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			add_text_component_substring_time(*uParam0.f_33, 70);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		else
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_249(auto uParam0)
{
	*uParam0.f_35 = 0;
}

auto func_250(auto uParam0)
{
	return *uParam0.f_35;
}

void func_251(auto uParam0, int iParam1)
{
	func_252(uParam0);
	if (iParam1)
	{
		func_247(0);
	}
	*uParam0.f_35 = 1;
}

void func_252(auto uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = {Var0};
}

bool func_253(auto uParam0)
{
	if (*uParam0.f_4 == 2043854386)
	{
		return false;
	}
	return true;
}

void func_254(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	auto uVar6;
	int iVar79;
	auto uVar80;
	auto uVar85;
	auto uVar86;
	auto uVar87;
	
	iVar3 = 0;
	iVar4 = false;
	if (!func_243())
	{
		iVar3 = 1;
		vVar0.x = iParam0;
		vVar0.z = 0;
	}
	if (iVar3 || get_event_data(1, iParam0, &vVar0, 3))
	{
		uVar6 = 2147483647;
		iVar5 = func_263(vVar0.x, &uVar6);
		if (iVar5 != -1)
		{
			Global_2558146[iVar5 /*73*/].f_66 = 0;
			if (Global_2558146[iVar5 /*73*/].f_72 == 0)
			{
				Global_2558146[iVar5 /*73*/].f_72 = get_frame_count();
			}
		}
		iVar79 = true;
		switch (vVar0.z)
		{
			case 0:
				if (iVar5 != -1)
				{
					Global_2558146[iVar5 /*73*/].f_2 = 2;
					if (Global_2558146[iVar5 /*73*/].f_69 & 4 != 0)
					{
						func_262(iVar5, iVar79);
					}
					else if (func_243())
					{
						if (iVar79)
						{
							_0xE1A0450ED46A7812(Global_2558146[iVar5 /*73*/], &uVar80);
						}
					}
				}
				break;
			
			default:
				if (iVar5 != -1)
				{
					Global_2558146[iVar5 /*73*/].f_2 = 3;
					if ((Global_2558146[iVar5 /*73*/].f_69 & 1 != 0 && Global_2558146[iVar5 /*73*/].f_67 < 2) && func_261(vVar0.z))
					{
						if (func_229(iVar5))
						{
							if (func_230())
							{
								Global_2558146[iVar5 /*73*/].f_2 = 1;
								Global_2558146[iVar5 /*73*/].f_67++;
							}
							else if (Global_2558146[iVar5 /*73*/].f_69 & 2 != 0)
							{
								Global_2558639 = Global_2558146[iVar5 /*73*/].f_4;
								Global_2558641 = Global_2558146[iVar5 /*73*/].f_6;
								Global_2558642 = vVar0.z;
								Global_2558640 = Global_2558146[iVar5 /*73*/].f_1;
								if (func_260(Global_2558639) && func_243())
								{
									if (!func_259(Global_2558146[iVar5 /*73*/]))
									{
										uVar85 = func_258();
										Global_2558585[uVar85 /*7*/] = Global_2558146[iVar5 /*73*/];
										Global_2558585[uVar85 /*7*/].f_2 = Global_2558639;
										Global_2558585[uVar85 /*7*/].f_3 = Global_2558641;
										Global_2558585[uVar85 /*7*/].f_1 = Global_2558640;
										Global_2558585[uVar85 /*7*/].f_4 = get_network_time();
									}
								}
								else
								{
									Global_2558636 = 1;
								}
							}
						}
						else if (func_257(&iVar5))
						{
							Global_2558146[iVar5 /*73*/].f_2 = 1;
							Global_2558146[iVar5 /*73*/].f_67++;
						}
						else if (Global_2558146[iVar5 /*73*/].f_69 & 2 != 0)
						{
							Global_2558639 = Global_2558146[iVar5 /*73*/].f_4;
							Global_2558641 = Global_2558146[iVar5 /*73*/].f_6;
							Global_2558642 = vVar0.z;
							Global_2558640 = Global_2558146[iVar5 /*73*/].f_1;
							if (func_260(Global_2558639) && func_243())
							{
								if (!func_259(Global_2558146[iVar5 /*73*/]))
								{
									uVar86 = func_258();
									Global_2558585[uVar86 /*7*/] = Global_2558146[iVar5 /*73*/];
									Global_2558585[uVar86 /*7*/].f_2 = Global_2558639;
									Global_2558585[uVar86 /*7*/].f_3 = Global_2558641;
									Global_2558585[uVar86 /*7*/].f_1 = Global_2558640;
									Global_2558585[uVar86 /*7*/].f_4 = get_network_time();
								}
							}
							else
							{
								Global_2558636 = 1;
							}
						}
					}
					else if (Global_2558146[iVar5 /*73*/].f_69 & 2 != 0)
					{
						Global_2558639 = Global_2558146[iVar5 /*73*/].f_4;
						Global_2558641 = Global_2558146[iVar5 /*73*/].f_6;
						Global_2558642 = vVar0.z;
						Global_2558640 = Global_2558146[iVar5 /*73*/].f_1;
						if ((func_260(Global_2558639) && func_243()) && func_261(vVar0.z))
						{
							if (!func_259(Global_2558146[iVar5 /*73*/]))
							{
								uVar87 = func_258();
								Global_2558585[uVar87 /*7*/] = Global_2558146[iVar5 /*73*/];
								Global_2558585[uVar87 /*7*/].f_2 = Global_2558639;
								Global_2558585[uVar87 /*7*/].f_3 = Global_2558641;
								Global_2558585[uVar87 /*7*/].f_1 = Global_2558640;
								Global_2558585[uVar87 /*7*/].f_4 = get_network_time();
							}
						}
						else
						{
							Global_2558636 = 1;
						}
					}
					if (Global_2558146[iVar5 /*73*/].f_2 == 3)
					{
						if (iVar4)
						{
							func_256(1, Global_2558146[iVar5 /*73*/].f_4);
							Global_2558636 = 0;
						}
						if (Global_2558146[iVar5 /*73*/].f_69 & 4 != 0)
						{
							func_255(iVar5, Global_2558146[iVar5 /*73*/].f_4, Global_2558146[iVar5 /*73*/].f_68, Global_2558146[iVar5 /*73*/].f_1, vVar0.z);
						}
					}
				}
				break;
			}
	}
}

void func_255(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			set_bit(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_226(iParam0);
	}
}

void func_256(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

bool func_257(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_243())
	{
		iVar0 = true;
	}
	if (*iParam0 == -1 || func_229(*iParam0))
	{
		return false;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_81()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (Global_2558146[*iParam0 /*73*/].f_6 == 1067618600 || Global_2558146[*iParam0 /*73*/].f_6 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	if (iVar0 || _0x39BE7CEA8D9CC8E6(Global_2558146[*iParam0 /*73*/]))
	{
		if (iVar0)
		{
			if (*iParam0 != -1)
			{
				Global_2558146[*iParam0 /*73*/].f_66 = 1;
			}
		}
		Global_2558146[*iParam0 /*73*/].f_72 = 0;
		return true;
	}
	return false;
}

int func_258()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_2558585;
	iVar0 = 0;
	while (iVar0 <= iVar2 - 1)
	{
		if (Global_2558585[iVar0 /*7*/] != 0 && Global_2558585[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

bool func_259(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_2558585;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= iVar1 - 1)
	{
		if (Global_2558585[iVar0 /*7*/] == iParam0)
		{
			return true;
		}
		if (Global_2558585[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_2558585[iVar0 /*7*/].f_4 = get_network_time();
			Global_2558585[iVar0 /*7*/].f_6 = 2147483647;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_260(int iParam0)
{
	if ((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538)
	{
		return true;
	}
	return false;
}

bool func_261(int iParam0)
{
	if (iParam0 >= 400 && iParam0 <= 599)
	{
		return true;
	}
	return false;
}

void func_262(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	auto uVar6;
	
	if (iParam0 == -1)
	{
		return;
	}
	_0x9507D4271988E1AE(func_231(iParam0));
	if (Global_2558146[iParam0 /*73*/].f_68 == 1)
	{
	}
	else if (Global_2558146[iParam0 /*73*/].f_68 == 4)
	{
		iVar0 = true;
	}
	else if (Global_2558146[iParam0 /*73*/].f_68 == 2)
	{
		iVar1 = true;
	}
	switch (Global_2558146[iParam0 /*73*/].f_4)
	{
		case 631654431:
			unk_0xE7DF4E0545DFB56E(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case -180141073:
			network_spent_buy_wantedlevel(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_3), iVar1, iVar0);
			break;
		
		case 68030260:
			network_spent_pay_vehicle_insurance_premium(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8, &(Global_2558146[iParam0 /*73*/].f_8.f_3), iVar1, iVar0);
			break;
		
		case -982394051:
			network_spent_cinema(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8.f_1, iVar1, iVar0);
			break;
		
		case 454359403:
			_0xEE99784E4467689C(Global_2558146[iParam0 /*73*/].f_1, iVar1, Global_2558146[iParam0 /*73*/].f_8.f_2, iVar0);
			break;
		
		case -1586170317:
			_0x6816FB4416760775(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_29), &(Global_2558146[iParam0 /*73*/].f_8.f_37));
			break;
		
		case 650665123:
			network_spent_telescope(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case 1654961868:
			network_spent_call_player(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_3), iVar1, iVar0);
			break;
		
		case 1182673174:
			network_spent_carwash(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8, Global_2558146[iParam0 /*73*/].f_8.f_1, iVar1, iVar0);
			break;
		
		case 563463121:
			_0xB1CC1B9EC3007A2A(Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case 1940862352:
			_0x9346E14F2AF74D46(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_29), iVar1, iVar0);
			break;
		
		case -1389227906:
			_0x9346E14F2AF74D46(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_29), iVar1, iVar0);
			break;
		
		case -516219046:
			network_buy_healthcare(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case -1398318418:
			network_earn_from_betting(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_37));
			break;
		
		case 2043854386:
			network_spent_cash_drop(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case 277665518:
			network_spent_arrest_bail(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case -1077156170:
			_0x6EA318C91C1A8786(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_37), -1);
			break;
		
		case -96593501:
			network_spent_bounty(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case 742499889:
			unk_0xD99DB210089617FE(Global_2558146[iParam0 /*73*/].f_8.f_54, Global_2558146[iParam0 /*73*/].f_8.f_55, Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case 2050093329:
			unk_0xDBC966A01C02BCA7(Global_2558146[iParam0 /*73*/].f_8.f_54, Global_2558146[iParam0 /*73*/].f_8.f_55, Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case -1752488069:
			unk_0x08A1B82B91900682(Global_2558146[iParam0 /*73*/].f_8.f_54, Global_2558146[iParam0 /*73*/].f_8.f_55, Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case 634375935:
			unk_0xFC4EE00A7B3BFB76(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case -1027218631:
			network_earn_from_job(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_29));
			break;
		
		case 291576838:
			network_buy_item(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8, 14, true, iVar1, &(Global_2558146[iParam0 /*73*/].f_8.f_29), false, 0, 0, iVar0);
			break;
		
		case 1612072658:
			network_spent_buy_passive_mode(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case -990286235:
			network_earn_from_bounty(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_3), &(Global_2558146[iParam0 /*73*/].f_8.f_16), 1);
			break;
		
		case 1349151477:
			_0xA03D4ACE0A3284CE(Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case -31156877:
			network_earn_from_pickup(Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case -1186079845:
			_0xF514621E8EA463D0(Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case 1734805203:
			network_earn_from_holdups(Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case -1645229221:
			_0x5FD5ED82CBBE9989(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case -585718395:
			_0xAFE08B35EC0C9EAE(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case 763367758:
			unk_0x5182A339A3474510(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case 1850983186:
			_0x5FD5ED82CBBE9989(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case -2129781826:
			unk_0xB49ECA122467D05F(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8, iVar1, iVar0);
			break;
		
		case 1941570214:
			unk_0x0FE8E1FCD2B86B33(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8, iVar1, iVar0);
			break;
		
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
			network_refund_cash(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_43), &(Global_2558146[iParam0 /*73*/].f_8.f_47), iVar1);
			break;
		
		case 312105838:
			network_earn_from_rockstar(Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case -1922554349:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case -2043695058:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			_0x8A7B3952DD64D2B5(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8.f_1, iVar1, iVar0);
			break;
		
		case 1839532116:
			_0x995A65F15F581359(Global_2558146[iParam0 /*73*/].f_1, 0, 0);
			break;
		
		case 941287179:
			network_earn_from_import_export(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8.f_51);
			break;
		
		case -352356931:
			_0x515B4A22E4D3C6D7(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8);
			break;
		
		case 1948102096:
			_0x8204DA7934DF3155(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case -1834046564:
			network_spent_taxi(Global_2558146[iParam0 /*73*/].f_1, iVar1, iVar0);
			break;
		
		case 393059668:
			_0x61326EE6DF15B0CA(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_29));
			break;
		
		case -57868256:
			_0x2B171E6B2F64D8DF(Global_2558146[iParam0 /*73*/].f_1, &(Global_2558146[iParam0 /*73*/].f_8.f_37), Global_2558146[iParam0 /*73*/].f_8.f_52);
			break;
		
		case -1127021384:
			_0x4337511FA8221D36(Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case 1564537328:
			_0x9346E14F2AF74D46(Global_2558146[iParam0 /*73*/].f_1, "RaceToPoint", false, false);
			break;
		
		case -1359375127:
			network_spent_prostitutes(Global_2558146[iParam0 /*73*/].f_1, 0, 0);
			break;
		
		case 283351220:
			network_buy_item(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8, Global_2558146[iParam0 /*73*/].f_8.f_53, true, iVar1, &(Global_2558146[iParam0 /*73*/].f_8.f_43), false, 0, 0, iVar0);
			break;
		
		case -2085313189:
			switch (Global_2558146[iParam0 /*73*/].f_6)
			{
				case 1067618600:
					network_buy_item(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8, Global_2558146[iParam0 /*73*/].f_8.f_53, true, iVar1, &(Global_2558146[iParam0 /*73*/].f_8.f_43), false, 0, 0, iVar0);
					break;
			}
			break;
		
		case 1704445500:
			network_spent_betting(Global_2558146[iParam0 /*73*/].f_1, 0, &(Global_2558146[iParam0 /*73*/].f_8.f_37), 0, 0);
			break;
		
		case 1620609399:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case -59668082:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case -1468524125:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case -934465332:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case -1194253122:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case -212607085:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case -815546555:
			_0xFB6DB092FBAE29E6(Global_2558146[iParam0 /*73*/].f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			unk_0x08B0CA7A6AB3AC32(Global_2558146[iParam0 /*73*/].f_8.f_54, Global_2558146[iParam0 /*73*/].f_8.f_55, Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case 569170531:
			unk_0xCDA1C62BE2777802(Global_2558146[iParam0 /*73*/].f_8.f_54, Global_2558146[iParam0 /*73*/].f_8.f_55, Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case -856006867:
			unk_0x0CB1BE0633C024A8(Global_2558146[iParam0 /*73*/].f_8.f_54, Global_2558146[iParam0 /*73*/].f_8.f_55, Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8.f_56);
			break;
		
		case 208223429:
			unk_0xECA658CE2A4E5A72(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8.f_57);
			break;
		
		case 848090538:
			unk_0x84C0116D012E8FC2(Global_2558146[iParam0 /*73*/].f_1);
			break;
		
		case 665109499:
			unk_0xE8B0B270B6E7C76E(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8, 0, 1);
			break;
		
		case -1330755006:
			unk_0x05F04155A226FBBF(Global_2558146[iParam0 /*73*/].f_1, Global_2558146[iParam0 /*73*/].f_8, 0, 1);
			break;
		
		case 1982688246:
			break;
	}
	if (func_243())
	{
		if (iParam1)
		{
			_0xE1A0450ED46A7812(Global_2558146[iParam0 /*73*/], &uVar6);
		}
	}
	func_226(iParam0);
}

int func_263(int iParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/] == iParam0)
		{
			*uParam1 = {Global_2558146[iVar0 /*73*/]};
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_264()
{
	auto uVar0;
	
	if (!Global_2561952)
	{
		if (iLocal_325 > 0)
		{
			if ((((!network_is_game_in_progress() || !func_216(player_id(), 0, 1)) || !func_266()) || !_network_player_is_in_clan()) || iLocal_376 != func_81())
			{
				if (iLocal_325 == 2)
				{
					_0x113E6E3E50E286B0(uLocal_327);
				}
				iLocal_325 = 0;
			}
		}
		switch (iLocal_325)
		{
			case 0:
				if (((network_is_game_in_progress() && func_216(player_id(), 0, 1)) && func_266()) && _network_player_is_in_clan())
				{
					iLocal_376 = func_81();
					Local_363 = {func_265(player_id())};
					if (network_clan_player_is_active(&Local_363) && network_clan_player_get_desc(&uLocal_328, 35, &Local_363))
					{
						uLocal_327 = uLocal_328;
						iLocal_325++;
					}
					else
					{
						iLocal_325 = 98;
					}
				}
				break;
			
			case 1:
				if (_0x13518FF1C6B28938(uLocal_327))
				{
					iLocal_325++;
					iLocal_326 = get_network_time();
				}
				else
				{
					iLocal_325 = 98;
				}
				break;
			
			case 2:
				if (_0xA134777FF7F33331(uLocal_327, &uVar0))
				{
					_0x113E6E3E50E286B0(uLocal_327);
					Global_2561952 = 1;
					iLocal_325 = 0;
				}
				else if (absi(get_time_difference(get_network_time(), iLocal_326)) > 10000)
				{
					_0x113E6E3E50E286B0(uLocal_327);
					iLocal_325 = 98;
				}
				break;
			
			case 98:
				iLocal_326 = get_network_time();
				iLocal_325 = 99;
				break;
			
			case 99:
				if (absi(get_time_difference(get_network_time(), iLocal_326)) > 120000)
				{
					iLocal_325 = 0;
				}
				break;
		}
	}
	else if ((!network_is_game_in_progress() || !func_216(player_id(), 0, 1)) || !func_266())
	{
		Global_2561952 = 0;
	}
}

struct<13> func_265(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_266()
{
	struct<13> Var0;
	
	if (is_player_online())
	{
		if ((network_is_signed_online() && network_is_signed_in()) && _0x67A5589628E0CFF6())
		{
			Var0 = {func_267()};
			if (_network_player_is_in_clan() && network_clan_player_is_active(&Var0))
			{
				return true;
			}
		}
	}
	return false;
}

struct<13> func_267()
{
	struct<13> Var0;
	
	network_get_local_handle(&Var0, 13);
	return Var0;
}

void func_268()
{
	if (!func_46(iLocal_227))
	{
		return;
	}
	if (iLocal_313 != iLocal_227)
	{
		iLocal_313 = iLocal_227;
		iLocal_314 = get_player_has_reserve_parachute(player_id());
	}
	if (get_player_has_reserve_parachute(player_id()))
	{
		if (!iLocal_314)
		{
			if (!is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + iLocal_313))
			{
				set_bit(&(Global_101154.f_1826.f_539.f_1469[4]), 28 + iLocal_313);
			}
			iLocal_314 = 1;
		}
	}
	else if (iLocal_314)
	{
		if (is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + iLocal_313))
		{
			clear_bit(&(Global_101154.f_1826.f_539.f_1469[4]), 28 + iLocal_313);
		}
	}
	else if (is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + iLocal_313))
	{
		set_player_has_reserve_parachute(player_id());
	}
	if (Global_91278 == 7)
	{
		if (iLocal_317[0] && !is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 0))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1469[4]), 28 + 0);
			iLocal_314 = 0;
		}
		if (iLocal_317[1] && !is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 1))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1469[4]), 28 + 1);
			iLocal_314 = 0;
		}
		if (iLocal_317[2] && !is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 2))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1469[4]), 28 + 2);
			iLocal_314 = 0;
		}
	}
	else if (Global_91278 == 8)
	{
		if (iLocal_321[0] && !is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 0))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1469[4]), 28 + 0);
			iLocal_314 = 0;
		}
		if (iLocal_321[1] && !is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 1))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1469[4]), 28 + 1);
			iLocal_314 = 0;
		}
		if (iLocal_321[2] && !is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 2))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1469[4]), 28 + 2);
			iLocal_314 = 0;
		}
	}
	else
	{
		if (Global_91315 > iLocal_315 || Global_91315 == 0)
		{
			iLocal_317[0] = is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 0);
			iLocal_317[1] = is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 1);
			iLocal_317[2] = is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 2);
			iLocal_315 = Global_91315;
		}
		if (iLocal_149 != iLocal_316)
		{
			iLocal_321[0] = is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 0);
			iLocal_321[1] = is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 1);
			iLocal_321[2] = is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 28 + 2);
			iLocal_316 = iLocal_149;
		}
	}
}

void func_269()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_295)
	{
		case 0:
			if (network_is_game_in_progress() && func_342())
			{
				iLocal_296 = get_network_time();
				iLocal_295++;
			}
			break;
		
		case 1:
			if (!func_342())
			{
				if (network_is_game_in_progress())
				{
					iVar0 = absi(get_time_difference(get_network_time(), iLocal_296)) / 1000;
					if (stat_get_int(joaat("total_shop_time"), &iVar1, -1))
					{
						iVar1 += iVar0;
						stat_set_int(joaat("total_shop_time"), iVar1, 1);
					}
				}
				iLocal_295 = 0;
			}
			break;
	}
	if (func_342())
	{
		func_270();
	}
}

void func_270()
{
	_0xEB2D525B57F42B40();
	func_271();
}

void func_271()
{
	Global_17118.f_134 = 1;
}

void func_272()
{
	if (func_274())
	{
		if (!iLocal_294)
		{
			request_named_ptfx_asset("scr_indep_wheelsmoke");
			request_named_ptfx_asset("scr_indep_parachute");
			iLocal_294 = 1;
		}
		if (Global_262145.f_6185)
		{
			func_273();
		}
	}
}

void func_273()
{
	if (!is_bit_set(Global_101154.f_1826.f_539.f_1469[4], 31))
	{
		set_bit(&(Global_101154.f_1826.f_539.f_1469[4]), 31);
	}
}

int func_274()
{
	return is_dlc_present(-1691188696);
}

void func_275()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	
	iVar0 = 0;
	if (!func_283())
	{
		if ((func_90() != -1 && func_90() != 999) && func_90() != 2)
		{
			iVar0 = 1;
		}
		else if (func_221() == 0)
		{
			iVar0 = 1;
		}
		else if (func_281(player_id()))
		{
			iVar0 = 1;
		}
		else if (func_280())
		{
			iVar0 = 1;
		}
	}
	if (iLocal_290 != iVar0)
	{
		iLocal_290 = iVar0;
	}
	iVar1 = 0;
	if (Global_262145.f_4872 && iLocal_290)
	{
		iVar1 = 1;
	}
	if (iVar1 != Global_2558833)
	{
		Global_2558833 = iVar1;
	}
	if (Global_2558833)
	{
		if (_get_next_weather_type() != -1429616491)
		{
			if (!func_279())
			{
				func_279();
				set_override_weather("XMAS");
				iLocal_284 = 1;
				iLocal_287 = true;
			}
		}
	}
	else
	{
		if (_get_next_weather_type() == -1429616491)
		{
			clear_override_weather();
		}
		iLocal_284 = 0;
		iLocal_287 = false;
	}
	if (iLocal_284 && (!network_is_game_in_progress() || func_278(player_id(), 0) == -1))
	{
		if (!iLocal_285)
		{
			request_named_ptfx_asset("core_snow");
			if (request_script_audio_bank("SNOW_FOOTSTEPS", false) && has_named_ptfx_asset_loaded("core_snow"))
			{
				_set_force_ped_footsteps_tracks(1);
				_set_force_vehicle_trails(1);
				iLocal_285 = 1;
			}
		}
		if (does_entity_exist(player_ped_id()) && !is_ped_injured(player_ped_id()))
		{
			if (get_room_key_from_entity(player_ped_id()) == 0)
			{
				if (!iLocal_286)
				{
					hint_script_audio_bank("SNOW_FOOTSTEPS", 0);
					iLocal_286 = 1;
				}
			}
			else if (iLocal_286)
			{
				release_named_script_audio_bank("SNOW_FOOTSTEPS");
				iLocal_286 = 0;
			}
		}
	}
	else
	{
		if (iLocal_286)
		{
			release_named_script_audio_bank("SNOW_FOOTSTEPS");
			iLocal_286 = 0;
		}
		if (iLocal_285)
		{
			_set_force_ped_footsteps_tracks(0);
			_set_force_vehicle_trails(0);
			_remove_named_ptfx_asset("core_snow");
			release_named_script_audio_bank("SNOW_FOOTSTEPS");
			iLocal_285 = 0;
		}
	}
	if (iLocal_287)
	{
		if (!iLocal_288)
		{
			request_named_ptfx_asset("proj_xmas_firework");
			if (has_named_ptfx_asset_loaded("proj_xmas_firework"))
			{
				_set_ptfx_asset_old_to_new("scr_firework_indep_burst_rwb", "scr_firework_xmas_burst_rgw");
				_set_ptfx_asset_old_to_new("scr_firework_indep_spiral_burst_rwb", "scr_firework_xmas_spiral_burst_rgw");
				_set_ptfx_asset_old_to_new("scr_firework_indep_repeat_burst_rwb", "scr_firework_xmas_repeat_burst_rgw");
				_set_ptfx_asset_old_to_new("scr_firework_indep_ring_burst_rwb", "scr_firework_xmas_ring_burst_rgw");
				iLocal_288 = 1;
			}
		}
	}
	else if (iLocal_288)
	{
		_0x89C8553DD3274AAE("scr_firework_indep_burst_rwb");
		_0x89C8553DD3274AAE("scr_firework_indep_spiral_burst_rwb");
		_0x89C8553DD3274AAE("scr_firework_indep_repeat_burst_rwb");
		_0x89C8553DD3274AAE("scr_firework_indep_ring_burst_rwb");
		_remove_named_ptfx_asset("proj_xmas_firework");
		iLocal_288 = 0;
	}
	if (((!Global_262145.f_7249 && iLocal_290) && !func_277(player_id())) && func_90() != 2)
	{
		if (!does_entity_exist(iLocal_282))
		{
			vVar2 = {0f, 0f, -87.66f};
			request_model(118627012);
			iLocal_283 = 1;
			if (has_model_loaded(118627012) && (get_distance_between_coords(vVar2, get_entity_coords(player_ped_id(), 0), 1) > 150f || !func_276()))
			{
				iLocal_282 = create_object_no_offset(118627012, 237.4236f, -880.7832f, 29.4971f, 0, 0, 0);
				freeze_entity_position(iLocal_282, true);
				set_entity_rotation(iLocal_282, vVar2, 2, 1);
				set_entity_lod_dist(iLocal_282, 5000);
				set_model_as_no_longer_needed(118627012);
				iLocal_289 = add_scenario_blocking_area(Vector(29.4971f, -880.7832f, 237.4236f) + Vector(-6f, -6f, -6f), Vector(29.4971f, -880.7832f, 237.4236f) + Vector(20f, 6f, 6f), 0, 1, 1, 1);
				iLocal_283 = 0;
			}
		}
	}
	else
	{
		if (iLocal_283)
		{
			set_model_as_no_longer_needed(118627012);
			iLocal_283 = 0;
		}
		if (does_entity_exist(iLocal_282))
		{
			delete_object(&iLocal_282);
			remove_scenario_blocking_area(iLocal_289, 0);
		}
	}
}

bool func_276()
{
	if (func_223() == 0)
	{
		return true;
	}
	return false;
}

bool func_277(int iParam0)
{
	if (func_309(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

int func_278(int iParam0, int iParam1)
{
	if (func_216(iParam0, 0, 1))
	{
		if (!iParam1)
		{
			return Global_2418472[iParam0 /*313*/].f_257.f_14;
		}
		else
		{
			return Global_2418472[iParam0 /*313*/].f_257.f_16;
		}
	}
	return -1;
}

int func_279()
{
	return is_bit_set(Global_2434762, 21);
}

auto func_280()
{
	return Global_1315880;
}

bool func_281(int iParam0)
{
	if ((((func_282(iParam0) == 36 || func_282(iParam0) == 39) || func_282(iParam0) == 33) || func_282(iParam0) == 34) || func_282(iParam0) == 35)
	{
		return true;
	}
	return false;
}

auto func_282(auto uParam0)
{
	return Global_1587523[uParam0 /*444*/].f_180;
}

auto func_283()
{
	return Global_1315888;
}

void func_284()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_243())
	{
		return;
	}
	iVar1 = Global_2558585;
	iVar0 = 0;
	while (iVar0 <= iVar1 - 1)
	{
		if (Global_2558585[iVar0 /*7*/] != 2147483647)
		{
			if (Global_2558585[iVar0 /*7*/].f_6 == 2147483647)
			{
				iVar2 = func_287(Global_2558585[iVar0 /*7*/].f_5);
				iVar3 = get_time_difference(Global_2558585[iVar0 /*7*/].f_4, get_network_time());
				if (absi(iVar3) >= iVar2)
				{
					Global_2558585[iVar0 /*7*/].f_4 = get_network_time();
					Global_2558585[iVar0 /*7*/].f_5++;
					if (Global_2558585[iVar0 /*7*/].f_5 <= 4)
					{
						func_285(Global_2558585[iVar0 /*7*/].f_2, Global_2558585[iVar0 /*7*/].f_1, &iVar4, 0, 0, 0);
						iVar4 = func_231(iVar4);
						if (Global_2558585[iVar0 /*7*/].f_6 == 0 || Global_2558585[iVar0 /*7*/].f_6 == 2147483647)
						{
							Global_2558585[iVar0 /*7*/].f_6 = iVar4;
						}
					}
					else
					{
						Global_2558636 = 1;
						Global_2558585[iVar0 /*7*/] = 2147483647;
						Global_2558585[iVar0 /*7*/].f_1 = 0;
						Global_2558585[iVar0 /*7*/].f_5 = 0;
						Global_2558585[iVar0 /*7*/].f_2 = -2085313189;
						Global_2558585[iVar0 /*7*/].f_6 = 0;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_285(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_243())
	{
		return;
	}
	iVar0 = 1;
	if (iParam4)
	{
		iVar0 = 4;
	}
	else if (iParam3)
	{
		iVar0 = 2;
	}
	else if (iParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
			if (iParam1 > 0)
			{
				func_286(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
			func_286(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_286(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_243())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_81()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
		{
			iVar2 = true;
		}
		iVar1++;
	}
	if (!iVar2)
	{
		return false;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (iVar0 || _0x3C5FD37B5499582E(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (iVar0 || _0x39BE7CEA8D9CC8E6(iVar3))
		{
			*uParam0 = func_236(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (iVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2558146[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2558628 = 1;
			return true;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2558636 = 1;
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		iVar4 = false;
		if (iVar4)
		{
			func_256(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_255(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 60000;
		
		case 1:
			return 120000;
		
		case 2:
			return 120000;
		
		case 3:
			return 180000;
		
		default:
	}
	return 0;
}

void func_288()
{
	int iVar0;
	
	if (Global_2558636)
	{
		if (func_232(Global_2558641, Global_2558639, Global_2558640) == 1)
		{
			iVar0 = 16384;
			_set_warning_message_2("CTALERT_A", func_289(Global_2558642), iVar0, 0, 0, -1, 0, 0, 1);
			set_input_exclusive(2, 201);
			if (iLocal_291 == 0)
			{
				iLocal_292 = get_game_timer();
				if (network_is_game_in_progress())
				{
					iLocal_293 = get_network_time();
				}
				iLocal_291++;
			}
			else if (iLocal_291 == 1)
			{
				if ((network_is_game_in_progress() && absi(get_time_difference(get_network_time(), iLocal_293)) > 500) || (!network_is_game_in_progress() && get_game_timer() - iLocal_292 > 500))
				{
					if ((is_control_just_pressed(2, 201) || is_disabled_control_just_pressed(2, 201)) || !func_216(player_id(), 1, 1))
					{
						Global_2558636 = 0;
					}
				}
			}
		}
		else if (func_232(Global_2558641, Global_2558639, Global_2558640) == 2)
		{
			_set_notification_text_entry(func_289(Global_2558642));
			_draw_notification(1, 1);
			Global_2558636 = 0;
		}
	}
	else
	{
		iLocal_291 = 0;
	}
	if (Global_2558637)
	{
		_set_notification_text_entry("CTALERT_F_1");
		_draw_notification(1, 1);
		Global_2558637 = 0;
		Global_2558638 = 0;
	}
	else if (Global_2558638)
	{
		_set_notification_text_entry("CTALERT_F_1");
		_draw_notification(1, 1);
		Global_2558637 = 0;
		Global_2558638 = 0;
	}
}

char* func_289(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 23:
		case 13:
		case 14:
		case 18:
		case 19:
		case 22:
		case 24:
		case 25:
			return "CTALERT_F_1";
			break;
		
		case 20:
			return "CTALERT_F_2";
			break;
		
		case 10:
			return "CTALERT_F_3";
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return "CTALERT_F_4";
			break;
		
		default:
			if (iParam0 >= 400 && iParam0 <= 600)
			{
				return "CTALERT_F";
			}
			break;
	}
	return "CTALERT_F_1";
}

void func_290()
{
	int iVar0;
	
	if (func_300() || Global_91330.f_1352)
	{
		disable_frontend_this_frame();
	}
	if (Global_2444457)
	{
		if (is_player_switch_in_progress() && get_player_switch_state() == 3)
		{
			func_297(1);
			func_294();
			Global_2444457 = 0;
		}
	}
	if (timera() < 1000 || iLocal_277 > 0)
	{
		set_input_exclusive(2, 201);
		set_input_exclusive(2, 202);
	}
	if (Global_91330.f_1352)
	{
		if (iLocal_277 < 3)
		{
			iVar0 = 18;
			_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
		}
		if (iLocal_277 == 0)
		{
			iLocal_278 = 0;
			iLocal_279 = 0;
			iLocal_280 = get_game_timer();
			if (network_is_game_in_progress())
			{
				iLocal_281 = get_network_time();
			}
			iLocal_277++;
		}
		else if (iLocal_277 == 1)
		{
			if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(iLocal_281, 500))) || (!network_is_game_in_progress() && get_game_timer() - iLocal_280 > 500))
			{
				if (!is_control_pressed(2, 201))
				{
					iLocal_278 = 1;
				}
				if (!is_control_pressed(2, 202))
				{
					iLocal_279 = 1;
				}
			}
			if (is_control_just_pressed(2, 201) && iLocal_278)
			{
				play_sound_frontend(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				iLocal_277++;
			}
			else if (is_control_just_pressed(2, 202) && iLocal_279)
			{
				play_sound_frontend(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				Global_91330.f_1352 = 0;
			}
			if (!func_216(player_id(), 1, 1))
			{
				Global_91330.f_1352 = 0;
			}
			if (iLocal_278 || iLocal_279)
			{
			}
		}
		else if (iLocal_277 == 2)
		{
			if (network_is_game_in_progress() && Global_2444100 != 31)
			{
				func_291(Global_2444100, 0);
				settimerb(false);
				iLocal_277++;
			}
			else
			{
				if (network_is_game_in_progress())
				{
					Global_2444456 = 1;
					Global_2444457 = 1;
				}
				if (Global_91330.f_1353 == 3)
				{
					_0xFAE628F1E9ADB239(Global_91330.f_1354, Global_91330.f_1355, Global_91330.f_1356);
				}
				else
				{
					_0xFAE628F1E9ADB239(false, 0, false);
				}
				_0x58C21165F6545892("", "", Global_91330.f_1353);
				iLocal_277 = 99;
				settimerb(false);
			}
		}
		else if (iLocal_277 == 3)
		{
			if (network_is_game_in_progress())
			{
				Global_2444456 = 1;
				Global_2444457 = 1;
			}
			if (Global_91330.f_1353 == 3)
			{
				_0xFAE628F1E9ADB239(Global_91330.f_1354, Global_91330.f_1355, Global_91330.f_1356);
			}
			else
			{
				_0xFAE628F1E9ADB239(false, 0, false);
			}
			_0x58C21165F6545892("", "", Global_91330.f_1353);
			iLocal_277 = 99;
			settimerb(false);
		}
		else if (iLocal_277 == 99)
		{
			if (timerb() > 500)
			{
				Global_91330.f_1352 = 0;
			}
		}
		else
		{
			Global_91330.f_1352 = 0;
		}
	}
	else if (iLocal_277 > 0)
	{
		iLocal_277 = 0;
		settimera(false);
	}
}

void func_291(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_293(iParam0, iParam1))
	{
		uVar0 = func_292();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_292()
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

bool func_293(int iParam0, auto uParam1)
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

bool func_294()
{
	if (is_screen_faded_out())
	{
		func_296(0);
		_0xDE81239437E8C5A8();
		return true;
	}
	if (func_295() == 3)
	{
		func_296(2);
		_transition_from_blurred(250f);
	}
	if (is_particle_fx_delayed_blink() >= 250f)
	{
		_transition_from_blurred(250f);
	}
	if (_0x7B226C785A52A0A9() == 0)
	{
		_transition_from_blurred(250f);
	}
	if (is_particle_fx_delayed_blink() <= 0f)
	{
		func_296(0);
		return true;
	}
	return false;
}

auto func_295()
{
	return Global_1312466.f_19;
}

void func_296(int iParam0)
{
	if (Global_1312466.f_19 != iParam0)
	{
		Global_1312466.f_19 = iParam0;
	}
}

void func_297(int iParam0)
{
	if ((func_299() == 1 || is_pause_menu_active()) || iParam0)
	{
		func_298(0);
		_set_frozen_rendering_disabled(1);
		_set_frozen_rendering_disabled(1);
		_0xE1C8709406F2C41C();
	}
}

void func_298(int iParam0)
{
	if (Global_1312466.f_20 != iParam0)
	{
		Global_1312466.f_20 = iParam0;
	}
}

auto func_299()
{
	return Global_1312466.f_20;
}

auto func_300()
{
	return Global_2434762.f_658.f_5;
}

void func_301()
{
	int iVar0;
	
	if (!iLocal_155)
	{
		iLocal_155 = 1;
		func_302(0, 7, "ClothesLowCHEAP", "ClothesLowHipster");
		func_302(1, 8, "ClothesLowHipster", "ClothesLowCHEAP");
		func_302(2, 9, "ClothesLowHipster", "ClothesLowCHEAP");
		func_302(3, 10, "ClothesLowHipster", "ClothesLowCHEAP");
		func_302(4, 11, "ClothesLowHipster", "ClothesLowCHEAP");
		func_302(5, 12, "ClothesLowHipster", "ClothesLowCHEAP");
		func_302(6, 13, "ClothesLowHipster", "ClothesLowCHEAP");
		func_302(7, 28, "", "GunClubWallHooks");
		func_302(8, 29, "", "GunStoreHooks");
		func_302(9, 30, "", "GunStoreHooks");
		func_302(9, 31, "", "GunStoreHooks");
		func_302(10, 32, "", "GunStoreHooks");
		func_302(11, 33, "", "GunStoreHooks");
		func_302(12, 34, "", "GunStoreHooks");
		func_302(13, 35, "", "GunStoreHooks");
		func_302(14, 36, "", "GunStoreHooks");
		func_302(15, 37, "", "GunStoreHooks");
		func_302(16, 38, "", "GunClubWallHooks");
		if (iLocal_155)
		{
		}
		else if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(iLocal_154, 30000))) || (!network_is_game_in_progress() && get_game_timer() - iLocal_153 > 30000))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar0++;
			}
			iLocal_155 = 1;
		}
	}
}

void func_302(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	int iVar0;
	
	if (!is_bit_set(iLocal_152, iParam0))
	{
		iVar0 = get_interior_at_coords_with_type(func_8(iParam1, 0), func_303(iParam1));
		if (iVar0 != 0)
		{
			if (get_hash_key(sParam2) != 0)
			{
				if (_is_interior_prop_enabled(iVar0, sParam2))
				{
					_disable_interior_prop(iVar0, sParam2);
				}
			}
			if (get_hash_key(sParam3) != 0)
			{
				if (!_is_interior_prop_enabled(iVar0, sParam3))
				{
					_enable_interior_prop(iVar0, sParam3);
				}
			}
			set_bit(&iLocal_152, iParam0);
		}
		else
		{
			iLocal_155 = 0;
		}
	}
}

char* func_303(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
	}
	return "";
}

int func_304(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_305(int iParam0)
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_307())
	{
		return 1;
	}
	if (func_306())
	{
		return 1;
	}
	return func_174(119, iParam0);
}

auto func_306()
{
	return Global_1315901;
}

auto func_307()
{
	return Global_1315903;
}

int func_308()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_131, 2);
}

bool func_309(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_310(iParam0))
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

int func_310(auto uParam0)
{
	return func_311(uParam0);
}

int func_311(auto uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

void func_312()
{
	if (iLocal_90 != 0 && iLocal_89 != 2)
	{
		if (iLocal_89 == 0)
		{
			if (network_is_game_in_progress())
			{
				iLocal_89 = 2;
			}
		}
		else if (iLocal_89 == 1)
		{
			if ((((!network_is_game_in_progress() && !func_317()) && !func_313()) || !func_177(player_id())) || func_90() != 0)
			{
				iLocal_89 = 2;
			}
		}
		if (iLocal_89 == 2 || !Global_91330.f_15)
		{
			iLocal_90 = 2;
		}
	}
}

bool func_313()
{
	if ((((func_279() || func_316()) || func_317()) || func_315()) || func_314())
	{
		return true;
	}
	return false;
}

auto func_314()
{
	return Global_2434762.f_715;
}

auto func_315()
{
	return Global_2434762.f_569;
}

auto func_316()
{
	return Global_2434762.f_582;
}

auto func_317()
{
	return Global_2434762.f_567;
}

void func_318()
{
	int iVar0;
	
	if (network_is_game_in_progress() && !is_ped_injured(player_ped_id()))
	{
		if (_get_number_of_instances_of_streamed_script(joaat("wardrobe_mp")) == 0)
		{
			iVar0 = -1;
			if (func_337(1))
			{
				if (iLocal_214 != func_336())
				{
					iLocal_214 = func_336();
					switch (iLocal_214)
					{
						case 7:
						case 8:
						case 9:
						case 10:
						case 11:
						case 12:
						case 13:
							Local_215[0 /*5*/].f_1 = {71.28f, -1387.939f, 28.3761f};
							Local_215[0 /*5*/].f_1 = {Local_215[0 /*5*/].f_1 + Vector(0.9948f, 0f, 0f)};
							Local_215[0 /*5*/].f_4 = 186.8302f;
							func_335(7, iLocal_214, &(Local_215[0 /*5*/].f_1));
							func_332(7, iLocal_214, &(Local_215[0 /*5*/].f_4));
							break;
						
						default:
							Local_215[0 /*5*/].f_1 = {0f, 0f, 0f};
							break;
						}
				}
				if (!func_331(Local_215[0 /*5*/].f_1, 0f, 0f, 0f, 0) && get_distance_between_coords(get_entity_coords(player_ped_id(), 1), Local_215[0 /*5*/].f_1, 1) < 2.5f)
				{
					iVar0 = 0;
				}
			}
			else if (Global_1587523[player_id() /*444*/].f_250.f_9 > 0)
			{
				if (iLocal_212 != Global_1587523[player_id() /*444*/].f_250.f_9 || iLocal_213 != Global_2418472[player_id() /*313*/].f_257.f_14)
				{
					iLocal_212 = Global_1587523[player_id() /*444*/].f_250.f_9;
					iLocal_213 = Global_2418472[player_id() /*313*/].f_257.f_14;
					func_319(iLocal_212, &(Local_215[1 /*5*/].f_1), &(Local_215[1 /*5*/].f_4), iLocal_213);
					Local_215[1 /*5*/].f_1 = {Local_215[1 /*5*/].f_1 + Vector(0.9948f, 0f, 0f)};
				}
				if (!func_331(Local_215[1 /*5*/].f_1, 0f, 0f, 0f, 0) && get_distance_between_coords(get_entity_coords(player_ped_id(), 1), Local_215[1 /*5*/].f_1, 1) < 7.5f)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 != -1)
			{
				request_script("wardrobe_mp");
				if (has_script_loaded("wardrobe_mp"))
				{
					if (_get_free_stack_slots_count(2224) > 1)
					{
						Local_215[iVar0 /*5*/] = 7;
						start_new_script_with_args("wardrobe_mp", &(Local_215[iVar0 /*5*/]), 5, 2224);
						set_script_as_no_longer_needed("wardrobe_mp");
					}
				}
			}
		}
	}
}

void func_319(int iParam0, auto uParam1, auto uParam2, int iParam3)
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_329(iParam0, 40, &Var0, -1);
			*uParam1 = {Var0};
			if (iParam0 == 1)
			{
				*uParam1.f_2 = 200.4294f;
			}
			else if (iParam0 == 2)
			{
				*uParam1.f_2 = 169.6122f;
			}
			else if (iParam0 == 3)
			{
				*uParam1.f_2 = 216.0662f;
			}
			else if (iParam0 == 4)
			{
				*uParam1.f_2 = 152.8101f;
			}
			else if (iParam0 == 5)
			{
				*uParam1.f_2 = 70.0399f;
			}
			else if (iParam0 == 6)
			{
				*uParam1.f_2 = 85.3194f;
			}
			else if (iParam0 == 7)
			{
				*uParam1.f_2 = 62.3652f;
			}
			else if (iParam0 == 34)
			{
				*uParam1.f_2 = 49.7375f;
			}
			else if (iParam0 == 35)
			{
				*uParam1.f_2 = 119.343f;
			}
			else if (iParam0 == 36)
			{
				*uParam1.f_2 = 114.4156f;
			}
			else if (iParam0 == 37)
			{
				*uParam1.f_2 = 88.2696f;
			}
			else if (iParam0 == 38)
			{
				*uParam1.f_2 = 82.9234f;
			}
			else if (iParam0 == 39)
			{
				*uParam1.f_2 = 93.0414f;
			}
			else if (iParam0 == 40)
			{
				*uParam1.f_2 = 78.289f;
			}
			else if (iParam0 == 41)
			{
				*uParam1.f_2 = 102.2488f;
			}
			else if (iParam0 == 42)
			{
				*uParam1.f_2 = 100.8356f;
			}
			else if (iParam0 == 43)
			{
				*uParam1.f_2 = 86.4347f;
			}
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			*uParam1 = {350.7414f, -993.6222f, -100.202f};
			*uParam2 = 179.6123f;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			*uParam1 = {259.8177f, -1003.794f, -100.0086f};
			*uParam2 = 307.1585f;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_329(iParam0, 40, &Var0, 61);
			*uParam1 = {Var0};
			if (iParam0 == 61)
			{
			}
			else if (iParam0 == 62)
			{
			}
			else if (iParam0 == 63)
			{
			}
			else if (iParam0 == 64)
			{
			}
			else if (iParam0 == 65)
			{
			}
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_329(iParam0, 40, &Var0, 73);
			*uParam1 = {Var0};
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_329(iParam0, 40, &Var0, 77);
			*uParam1 = {Var0};
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 83:
		case 84:
		case 85:
			func_329(iParam0, 40, &Var0, 83);
			*uParam1 = {Var0};
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 86:
			func_320(iParam3, 40, &Var0, 0);
			*uParam1 = {Var0};
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_329(iParam0, 40, &Var0, 88);
			*uParam1 = {Var0};
			*uParam2 = Var0.f_3.f_2;
			break;
	}
}

void func_320(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	struct<6>[] Var0 = new struct<6>[2];
	Vector3 vVar13;
	
	if (!iParam3)
	{
		Var0[0 /*6*/] = {func_328(-1)};
	}
	else
	{
		Var0[0 /*6*/] = {Global_4005550[iParam0 /*45*/].f_4};
		Var0[0 /*6*/].f_3 = {0f, 0f, Global_4005550[iParam0 /*45*/].f_7};
	}
	if (!iParam3)
	{
		Var0[1 /*6*/] = {func_328(iParam0)};
	}
	else
	{
		Var0[1 /*6*/] = {Global_4005550[iParam0 /*45*/].f_4};
		Var0[1 /*6*/].f_3 = {0f, 0f, Global_4005550[iParam0 /*45*/].f_7};
	}
	*uParam2 = {func_322(iParam1, 86)};
	vVar13 = {*uParam2 - Var0[0 /*6*/]};
	vVar13 = {func_321(vVar13, -Var0[0 /*6*/].f_3.f_2)};
	vVar13 = {func_321(vVar13, Var0[1 /*6*/].f_3.f_2)};
	*uParam2 = {_get_object_offset_from_coords(Var0[1 /*6*/], 0f, vVar13)};
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 560:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 343:
		case 349:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 201:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 311:
		case 340:
		case 391:
		case 392:
		case 393:
		case 394:
		case 395:
		case 396:
		case 397:
		case 398:
		case 399:
		case 400:
		case 401:
		case 402:
		case 403:
		case 404:
		case 405:
		case 406:
		case 407:
		case 408:
		case 409:
		case 410:
		case 411:
		case 412:
		case 413:
		case 414:
		case 415:
		case 416:
		case 417:
		case 418:
		case 419:
		case 438:
		case 439:
		case 440:
		case 441:
		case 442:
		case 443:
		case 357:
		case 358:
		case 359:
		case 467:
		case 468:
		case 469:
		case 497:
		case 498:
		case 499:
		case 503:
		case 598:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
	switch (iParam1)
	{
		case 362:
		case 363:
		case 364:
		case 365:
		case 366:
		case 367:
		case 368:
		case 360:
		case 361:
		case 383:
		case 386:
		case 372:
		case 373:
		case 374:
		case 375:
		case 376:
		case 377:
		case 378:
		case 370:
		case 371:
		case 384:
		case 387:
		case 486:
		case 487:
		case 488:
		case 489:
		case 490:
		case 491:
		case 492:
		case 485:
		case 544:
		case 543:
		case 545:
		case 516:
		case 517:
		case 583:
		case 584:
		case 518:
		case 519:
		case 520:
		case 521:
		case 522:
		case 523:
		case 524:
		case 525:
		case 526:
		case 527:
		case 553:
		case 552:
		case 551:
		case 550:
		case 556:
		case 555:
		case 593:
		case 594:
		case 595:
		case 596:
		case 554:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 597:
		case 118:
		case 117:
		case 599:
		case 600:
		case 601:
		case 602:
		case 603:
		case 604:
		case 605:
		case 606:
		case 607:
		case 608:
		case 609:
		case 610:
		case 612:
		case 618:
		case 624:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
}

Vector3 func_321(Vector3 vParam0, Vector3 fParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 fVar4;
	
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = vParam0.x * fVar4 - vParam0.y * fVar3;
	vVar0.y = vParam0.x * fVar3 + vParam0.y * fVar4;
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_322(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	struct<6> Var7;
	
	switch (iParam1)
	{
		case -1:
		case 1:
		case 61:
			return func_327(iParam0, iParam1);
			break;
		
		case 73:
		case 77:
			return func_326(iParam0, iParam1);
			break;
		
		case 83:
			return func_325(iParam0, iParam1);
			break;
		
		case 86:
			return func_324(iParam0, iParam1);
			break;
		
		case 88:
			return func_323(iParam0, iParam1);
			break;
	}
	iVar6 = iParam1 == 61;
	_0xB335F761606DB47C(&vVar0, &vVar3, iParam0, iVar6);
	Var7 = {vVar0};
	Var7.f_3 = {vVar3};
	return Var7;
}

struct<6> func_323(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 88:
			switch (iParam0)
			{
				case 278:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 279:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 280:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 281:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 282:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 283:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 0:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 1:
					Var0 = {-1391.014f, -476.7234f, 70.79213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-1398.001f, -477.7338f, 74.10992f};
					Var0.f_3 = {0f, 0f, 6.4421f};
					break;
				
				case 3:
					Var0 = {-1383.954f, -476.7112f, 73.57f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {-1386.187f, -477.2281f, 70.79214f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-1367.155f, -474.5449f, 74.6421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {-1401.071f, -480.6923f, 70.79214f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-1385.056f, -478.5239f, 74.6421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-1386.264f, -478.5925f, 71.0421f};
					Var0.f_3 = {0f, 0f, 278.0621f};
					break;
				
				case 169:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 201:
					Var0 = {-1389.674f, -477.9422f, 72.6524f};
					Var0.f_3 = {-2.3097f, 0f, 128.6406f};
					break;
				
				case 14:
					Var0 = {-1373.873f, -476.794f, 72.457f};
					Var0.f_3 = {0f, 0f, 98f};
					break;
				
				case 557:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 558:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 559:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 15:
					Var0 = {-1380.402f, -478.5354f, 71.9893f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {-1374.076f, -467.7501f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 227.614f;
					break;
				
				case 10:
					Var0 = {-1371.95f, -480.9255f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 289.1039f;
					break;
				
				case 11:
					Var0 = {-1369.476f, -487.2183f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 285.5383f;
					break;
				
				case 12:
					Var0 = {-1382.257f, -480.487f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 308.8578f;
					break;
				
				case 13:
					Var0 = {-1380.136f, -470.4213f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 9.8797f;
					break;
				
				case 16:
					Var0 = {-1369.507f, -476.9786f, 71.0529f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {-1369.393f, -477.3502f, 71.05289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {-1369.491f, -476.5785f, 72.55289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {-1369.618f, -476.2482f, 71.0529f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {-1369.637f, -475.7314f, 71.05289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {-1369.491f, -476.5785f, 72.55289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {-1369.702f, -475.2167f, 71.0529f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {-1369.637f, -475.7314f, 71.05289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {-1369.757f, -474.8527f, 72.55289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-1368.181f, -476.5546f, 72.5085f};
					Var0.f_3 = {-0.3097f, 0f, 92.7977f};
					break;
				
				case 35:
					Var0 = {-1372.001f, -476.5192f, 72.7309f};
					Var0.f_3 = {3.9233f, 0f, 98.3755f};
					break;
				
				case 36:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 560:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 37:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 38:
					Var0 = {-1386.944f, -478.496f, 71.7512f};
					Var0.f_3 = {5.1825f, 0.5013f, -84.0825f};
					break;
				
				case 39:
					Var0 = {-1385.975f, -478.4063f, 71.9382f};
					Var0.f_3 = {5.1825f, 0.5013f, -84.1376f};
					break;
				
				case 767:
					Var0 = {-1381.953f, -478.9279f, 72.2409f};
					Var0.f_3 = {-1.9217f, 0.535f, -54.7591f};
					break;
				
				case 768:
					Var0 = {-1381.828f, -478.5973f, 72.2329f};
					Var0.f_3 = {-1.9217f, 0.535f, -61.4327f};
					break;
				
				case 872:
					Var0 = {-1381.967f, -478.0454f, 72.1758f};
					Var0.f_3 = {4.3412f, 0.0669f, -78.3888f};
					break;
				
				case 873:
					Var0 = {-1382.475f, -478.1498f, 72.1364f};
					Var0.f_3 = {4.3412f, 0.0669f, -78.3888f};
					break;
				
				case 765:
					Var0 = {-1375.141f, -465.8974f, 72.3304f};
					Var0.f_3 = {-2.5795f, 0.7965f, 161.0134f};
					break;
				
				case 766:
					Var0 = {-1374.248f, -467.3159f, 72.3885f};
					Var0.f_3 = {-3.1244f, 0.7965f, -167.5461f};
					break;
				
				case 120:
					Var0 = {-1371.305f, -486.9218f, 72.5809f};
					Var0.f_3 = {-13.7347f, 0.4385f, -35.5008f};
					break;
				
				case 121:
					Var0 = {-1371.435f, -486.9694f, 72.6092f};
					Var0.f_3 = {-13.7347f, 0.4385f, -35.8794f};
					break;
				
				case 759:
					Var0 = {-1371.715f, -467.7556f, 72.5438f};
					Var0.f_3 = {-10.7018f, 0.0514f, 11.934f};
					break;
				
				case 760:
					Var0 = {-1371.848f, -467.295f, 72.8527f};
					Var0.f_3 = {-8.4597f, 0.0514f, 11.275f};
					break;
				
				case 874:
					Var0 = {-1371.98f, -467.0934f, 72.6878f};
					Var0.f_3 = {-10.9607f, 0.0409f, 28.715f};
					break;
				
				case 875:
					Var0 = {-1372.057f, -466.9533f, 72.7673f};
					Var0.f_3 = {-10.1999f, 0.0409f, 28.715f};
					break;
				
				case 876:
					Var0 = {-1371.523f, -466.3904f, 72.533f};
					Var0.f_3 = {-8.4142f, 0.0409f, -3.37f};
					break;
				
				case 877:
					Var0 = {-1371.411f, -466.139f, 72.4949f};
					Var0.f_3 = {-6.5039f, 0.0409f, -2.6958f};
					break;
				
				case 761:
					Var0 = {-1378.041f, -470.9332f, 72.5258f};
					Var0.f_3 = {-1.2251f, 0.3877f, 5.3465f};
					break;
				
				case 762:
					Var0 = {-1377.583f, -469.6385f, 72.4225f};
					Var0.f_3 = {-1.065f, 0.3877f, 8.569f};
					break;
				
				case 870:
					Var0 = {-1378.027f, -467.2617f, 72.5326f};
					Var0.f_3 = {-4.8769f, 0.3877f, 48.9157f};
					break;
				
				case 871:
					Var0 = {-1378.312f, -466.5706f, 72.3701f};
					Var0.f_3 = {-7.0403f, 0.3877f, 51.3359f};
					break;
				
				case 763:
					Var0 = {-1372.144f, -462.4252f, 72.5529f};
					Var0.f_3 = {-6.9621f, 0f, -173.3613f};
					break;
				
				case 764:
					Var0 = {-1374.89f, -462.9107f, 72.4553f};
					Var0.f_3 = {-5.9688f, 0f, -143.2814f};
					break;
				
				case 881:
					Var0 = {-1392.938f, -479.831f, 71.042f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 882:
					Var0 = {-1391.958f, -479.9294f, 71.0422f};
					Var0.f_3 = {0f, 0f, 22.34f};
					break;
				
				case 883:
					Var0 = {-1391.285f, -479.2309f, 71.0422f};
					Var0.f_3 = {0f, 0f, 52.14f};
					break;
				
				case 884:
					Var0 = {-1394.986f, -479.2755f, 72.251f};
					Var0.f_3 = {0.6344f, 0.0182f, -49.3494f};
					break;
				
				case 885:
					Var0 = {-1392.95f, -478.1647f, 71.1922f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 886:
					Var0 = {-1393.623f, -475.4102f, 71.1949f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 888:
					Var0 = {-1392.058f, -478.5261f, 71.0422f};
					Var0.f_3 = {0f, 0f, 167.25f};
					break;
				
				case 889:
					Var0 = {-1393.005f, -478.564f, 71.0422f};
					Var0.f_3 = {0f, 0f, -171.18f};
					break;
				
				case 890:
					Var0 = {-1393.877f, -478.9391f, 71.0422f};
					Var0.f_3 = {0f, 0f, -131.95f};
					break;
				
				case 891:
					Var0 = {-1390.469f, -479.7867f, 72.1899f};
					Var0.f_3 = {3.3931f, 0.0137f, 121.5152f};
					break;
				
				case 892:
					Var0 = {-1392.549f, -481.0493f, 71.2005f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 893:
					Var0 = {-1391.323f, -483.4211f, 71.162f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 125:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 40:
					Var0 = {-1379.844f, -470.5661f, 71.0421f};
					Var0.f_3 = {0f, 0f, 15.031f};
					break;
				
				case 41:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 126:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 127:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 42:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 46:
					Var0 = {-1381.782f, -466.131f, 72.081f};
					Var0.f_3 = {0f, 0f, -43.56f};
					break;
				
				case 47:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, -172.8f};
					break;
				
				case 48:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 49:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 612:
					Var0 = {-1381.782f, -466.131f, 72.081f};
					Var0.f_3 = {0f, 0f, -43.56f};
					break;
				
				case 615:
					Var0 = {-1382.044f, -465.412f, 71.04213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-1379.822f, -465.0819f, 72.79213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-1386.124f, -471.4142f, 72.2421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 57:
					Var0 = {-1385.42f, -470.797f, 71.203f};
					Var0.f_3 = {0f, 0f, -82.16f};
					break;
				
				case 64:
					Var0 = {-1385.72f, -471.56f, 73.37f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-1385.42f, -470.797f, 72.3f};
					Var0.f_3 = {0f, 0f, -82.16f};
					break;
				
				case 58:
					Var0 = {-1384.641f, -471.3463f, 72.9289f};
					Var0.f_3 = {-0.7841f, 0f, 77.4962f};
					break;
				
				case 59:
					Var0 = {-1384.366f, -471.2928f, 72.845f};
					Var0.f_3 = {-7.3248f, 0f, 118.1501f};
					break;
				
				case 60:
					Var0 = {-1384.316f, -471.2809f, 73.1692f};
					Var0.f_3 = {-20.2395f, -0.0003f, 102.8101f};
					break;
				
				case 61:
					Var0 = {-1384.568f, -471.3008f, 73.2522f};
					Var0.f_3 = {-15.012f, 0.0423f, 105.2809f};
					break;
				
				case 62:
					Var0 = {-1385.197f, -470.0034f, 73.7174f};
					Var0.f_3 = {-52.8011f, -0.0058f, 91.9435f};
					break;
				
				case 63:
					Var0 = {-1384.927f, -470.5415f, 72.8936f};
					Var0.f_3 = {-20.0458f, 0f, 53.9154f};
					break;
				
				case 66:
					Var0 = {-1386.093f, -471.48f, 71.1422f};
					break;
				
				case 67:
					Var0 = {-1384.294f, -471.2281f, 73.54627f};
					break;
				
				case 110:
					Var0 = {-1385.937f, -470.1181f, 70.9901f};
					Var0.f_3 = {0f, 0f, 258.2184f};
					break;
				
				case 68:
					Var0 = {-1384.366f, -469.3365f, 72.2902f};
					break;
				
				case 109:
					Var0 = {-1384.366f, -469.3365f, 72.2902f};
					break;
				
				case 69:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 70:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 71:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 74:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 75:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 76:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 89:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 91:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 90:
					Var0 = {-1379.25f, -488.464f, 71.049f};
					Var0.f_3 = {0f, 0f, 13.32f};
					break;
				
				case 92:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 135:
					Var0 = {-1378.361f, -488.3603f, 71.0421f};
					break;
				
				case 136:
					Var0 = {-1379.683f, -488.5495f, 72.7921f};
					break;
				
				case 77:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 79:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 80:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 81:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 82:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 78:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 83:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 85:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 88:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 84:
					Var0 = {-1368.3f, -480.492f, 71.042f};
					Var0.f_3 = {0f, 0f, -177.84f};
					break;
				
				case 86:
					Var0 = {-1367.615f, -480.0959f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {-1368.761f, -480.2637f, 72.54215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 93:
					Var0 = {-1398.157f, -479.3889f, 72.1924f};
					Var0.f_3 = {0f, 0f, 97f};
					break;
				
				case 94:
					Var0 = {-1397.917f, -479.589f, 72.192f};
					Var0.f_3 = {0f, 0f, 98f};
					break;
				
				case 95:
					Var0 = {-1383.879f, -477.9557f, 71.0422f};
					Var0.f_3 = {0f, 0f, 95.66f};
					break;
				
				case 96:
					Var0 = {-1398.447f, -480.4256f, 72.105f};
					Var0.f_3 = {0f, 0f, -80.26f};
					break;
				
				case 97:
					Var0 = {-1392.006f, -479.5026f, 72.105f};
					Var0.f_3 = {0f, 0f, 144.06f};
					break;
				
				case 98:
					Var0 = {-1396.753f, -480.6128f, 72.105f};
					Var0.f_3 = {0f, 0f, -31.76f};
					break;
				
				case 99:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 100:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 101:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 181:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 106:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 107:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 108:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 117:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 122:
					Var0 = {-1390.29f, -479.0549f, 71.0421f};
					Var0.f_3 = {0f, 0f, 277.8842f};
					break;
				
				case 123:
					Var0 = {-1383.99f, -477.7994f, 71.0421f};
					Var0.f_3 = {0f, 0f, 285.7773f};
					break;
				
				case 124:
					Var0 = {-1371.485f, -472.5331f, 71.0421f};
					Var0.f_3 = {0f, 0f, 247.7497f};
					break;
				
				case 137:
					Var0 = {-1371.795f, -470.0197f, 71.0421f};
					break;
				
				case 202:
					Var0 = {-1389.332f, -479.0194f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 203:
					Var0 = {-1389.008f, -480.0021f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 303.181f;
					break;
				
				case 204:
					Var0 = {-1389.814f, -479.6433f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 205:
					Var0 = {-1390.755f, -478.6367f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 273.1809f;
					break;
				
				case 206:
					Var0 = {-1390.449f, -479.4955f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 207:
					Var0 = {-1390.09f, -478.5259f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 208:
					Var0 = {-1390.938f, -479.7606f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 209:
					Var0 = {-1389.573f, -477.7128f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 249.181f;
					break;
				
				case 210:
					Var0 = {-1386.425f, -477.8782f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 211:
					Var0 = {-1386.284f, -479.1848f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.1809f;
					break;
				
				case 212:
					Var0 = {-1389.597f, -480.8671f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 305.1809f;
					break;
				
				case 213:
					Var0 = {-1391.379f, -478.654f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 214:
					Var0 = {-1388.966f, -478.3716f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 215:
					Var0 = {-1388.649f, -479.3325f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 216:
					Var0 = {-1391.445f, -479.7018f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.1809f;
					break;
				
				case 217:
					Var0 = {-1390.214f, -477.4063f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 253.181f;
					break;
			}
			switch (iParam0)
			{
				case 435:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 436:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 437:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 470:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 477:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 445:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 446:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 447:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 448:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 449:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 450:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 471:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 472:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 478:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 479:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 504:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 505:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 506:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 507:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 508:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 509:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 510:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 511:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 512:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 513:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 514:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 515:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 528:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 529:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 530:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 531:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 532:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 533:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 534:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 535:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 536:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 537:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 538:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 539:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 540:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 541:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 542:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 547:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 548:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 549:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 237:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 238:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 239:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 240:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 241:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 242:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 243:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 244:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 245:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 246:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 247:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 248:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 249:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 250:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 251:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 252:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 253:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 254:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 255:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 256:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 257:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 258:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 259:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 260:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 307:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 331:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 332:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 333:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 334:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 298:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 299:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 311:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 431:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 133:
					Var0 = {-1375.394f, -467.9827f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 134:
					Var0 = {-1375.542f, -467.0287f, 73.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 130:
					Var0 = {-1375.271f, -467.526f, 71.042f};
					Var0.f_3 = {0f, 0f, -92.16f};
					break;
				
				case 433:
					Var0 = {-1375.906f, -469.4503f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 434:
					Var0 = {-1374.99f, -468.8127f, 73.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 432:
					Var0 = {-1375.309f, -469.039f, 71.042f};
					Var0.f_3 = {0f, 0f, -149.4f};
					break;
				
				case 102:
					Var0 = {-1375.297f, -466.8609f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-1375.448f, -465.9375f, 73.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {-1375.943f, -467.129f, 72.067f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 501:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 502:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 500:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 104:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 183:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 473:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 474:
					Var0 = {-1372.745f, -476.2592f, 73.9259f};
					Var0.f_3 = {-17.5489f, 0f, -82.352f};
					break;
				
				case 169:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 181:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 629:
					Var0 = {-1379.512f, -477.629f, 71.649f};
					Var0.f_3 = {0f, 0f, -82f};
					break;
				
				case 630:
					Var0 = {-1375.371f, -462.5318f, 71.04215f};
					Var0.f_3 = {1f, 0f, 1f};
					break;
				
				case 631:
					Var0 = {-1370.158f, -462.2543f, 71.04214f};
					Var0.f_3 = {1.75f, 0f, 0f};
					break;
				
				case 714:
					Var0 = {-1371.393f, -461.2212f, 71.3765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 633:
					Var0 = {-1391.066f, -480.86f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 634:
					Var0 = {-1391.796f, -480.9668f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 635:
					Var0 = {-1394.002f, -481.286f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 636:
					Var0 = {-1393.282f, -481.1756f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 637:
					Var0 = {-1394.44f, -478.038f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 638:
					Var0 = {-1393.74f, -477.938f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 639:
					Var0 = {-1391.554f, -477.6193f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 640:
					Var0 = {-1392.254f, -477.7293f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 643:
					Var0 = {-1393.645f, -479.5984f, 72.2997f};
					Var0.f_3 = {23.1365f, 0.0223f, -16.3365f};
					break;
				
				case 644:
					Var0 = {-1393.645f, -479.5984f, 72.2997f};
					Var0.f_3 = {3.6162f, 0.0223f, -16.3365f};
					break;
				
				case 641:
					Var0 = {-1391.824f, -479.9584f, 72.3454f};
					Var0.f_3 = {34.4208f, 0f, 154.6562f};
					break;
				
				case 642:
					Var0 = {-1391.824f, -479.9584f, 72.3454f};
					Var0.f_3 = {-2.2683f, 0f, 154.6562f};
					break;
				
				case 646:
					Var0 = {-1393.123f, -477.881f, 71.04f};
					Var0.f_3 = {0f, 0f, -140.4f};
					break;
				
				case 645:
					Var0 = {-1392.415f, -481.031f, 71.04f};
					Var0.f_3 = {0f, 0f, 40f};
					break;
				
				case 648:
					Var0 = {-1392.685f, -480.3315f, 71.0422f};
					Var0.f_3 = {0f, 0f, 191.9762f};
					break;
				
				case 649:
					Var0 = {-1392.392f, -482.4386f, 71.0421f};
					Var0.f_3 = {0f, 0f, 5.3172f};
					break;
				
				case 650:
					Var0 = {-1392.644f, -479.376f, 71.0421f};
					Var0.f_3 = {0f, 0f, 7.1773f};
					break;
				
				case 651:
					Var0 = {-1382.967f, -480.9828f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 652:
					Var0 = {-1382.788f, -482.5349f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 653:
					Var0 = {-1383.662f, -485.6873f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 654:
					Var0 = {1384.186f, -486.728f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 655:
					Var0 = {-1383.403f, -487.5066f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 656:
					Var0 = {-1382.708f, -488.3592f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 657:
					Var0 = {-1381.329f, -488.1656f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 658:
					Var0 = {-1371.906f, -478.3103f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 659:
					Var0 = {-1372.407f, -474.9426f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 660:
					break;
				
				case 661:
					break;
				
				case 662:
					break;
				
				case 663:
					Var0 = {-1371.851f, -466.166f, 71.049f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 664:
					Var0 = {-1372.581f, -466.2719f, 71.049f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 665:
					Var0 = {-1377.777f, -464.8911f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 672:
					Var0 = {-1390.344f, -481.4404f, 70.79213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 673:
					Var0 = {-1397.326f, -482.5123f, 74.08271f};
					Var0.f_3 = {0f, 0f, 194.5057f};
					break;
				
				case 666:
					Var0 = {-1375.277f, -462.3159f, 72.0926f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 667:
					Var0 = {-1370.489f, -461.6438f, 72.0926f};
					Var0.f_3 = {0f, 0f, 8.11f};
					break;
				
				case 668:
					Var0 = {-1375.277f, -462.3159f, 72.0926f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 669:
					Var0 = {-1370.489f, -461.6438f, 72.0926f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 670:
					Var0 = {-1372.022f, -463.9919f, 74.1304f};
					Var0.f_3 = {-40.8924f, 0.0193f, -23.9982f};
					break;
				
				case 671:
					Var0 = {-1370.7f, -463.5f, 72f};
					Var0.f_3 = {-35.87f, 0f, 8.02f};
					break;
				
				case 674:
					Var0 = {-1375.277f, -462.3159f, 72.0926f};
					Var0.f_3 = {0f, 0.0102f, 87.88f};
					break;
				
				case 675:
					Var0 = {-1372.02f, -463.9937f, 74.1322f};
					Var0.f_3 = {-35.4306f, 0f, 57.5758f};
					break;
				
				case 676:
					Var0 = {-1374.308f, -462.7904f, 71.0514f};
					Var0.f_3 = {0f, 0f, 26.5462f};
					break;
				
				case 677:
					Var0 = {-1370.489f, -461.6438f, 72.0926f};
					Var0.f_3 = {0f, 0f, 98.86f};
					break;
				
				case 678:
					Var0 = {-1368.419f, -485.913f, 71.638f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 679:
					Var0 = {-1368.686f, -483.781f, 71.638f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 680:
					Var0 = {-1369.891f, -483.951f, 71.638f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 681:
					Var0 = {-1371.052f, -484.114f, 71.638f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 682:
					Var0 = {-1370.785f, -486.245f, 71.638f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 683:
					Var0 = {-1369.597f, -486.079f, 71.638f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 684:
					Var0 = {-1372.187f, -463.935f, 71.662f};
					Var0.f_3 = {0f, 0f, -37f};
					break;
				
				case 685:
					Var0 = {-1367.419f, -484.652f, 71.638f};
					Var0.f_3 = {0f, 0f, -82f};
					break;
				
				case 689:
					Var0 = {-1373.629f, -478.7528f, 71.06213f};
					Var0.f_3 = {0.75f, 0f, 0f};
					break;
				
				case 690:
					Var0 = {-1374.166f, -474.9032f, 73.54213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 691:
					Var0 = {-1372.819f, -476.6167f, 71.0529f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 692:
					Var0 = {-1375.222f, -466.2753f, 71.0621f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 693:
					Var0 = {-1375.789f, -462.2126f, 73.54211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 694:
					Var0 = {-1374.244f, -465.2611f, 71.049f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 695:
					Var0 = {-1380.604f, -476.8068f, 71.14214f};
					Var0.f_3 = {1.5f, 0f, 0f};
					break;
				
				case 696:
					Var0 = {-1380.937f, -475.1835f, 73.54211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 697:
					Var0 = {-1384.38f, -478.0885f, 71.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 698:
					Var0 = {-1384.355f, -476.2908f, 71.05213f};
					Var0.f_3 = {0.75f, 0f, 0f};
					break;
				
				case 699:
					Var0 = {-1384.825f, -473.0208f, 73.54213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 700:
					Var0 = {-1383.51f, -474.9492f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 701:
					Var0 = {-1368.4f, -472.6109f, 71.04213f};
					Var0.f_3 = {1.5f, 0f, 0f};
					break;
				
				case 702:
					Var0 = {-1368.804f, -469.5392f, 73.29213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 703:
					Var0 = {-1369.993f, -471.4322f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 704:
					Var0 = {-1378.779f, -474.3721f, 71.05211f};
					Var0.f_3 = {0.5f, 0f, 0f};
					break;
				
				case 705:
					Var0 = {-1377.923f, -480.5733f, 73.54211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 706:
					Var0 = {-1379.317f, -475.9338f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 707:
					Var0 = {-1386.979f, -476.6814f, 71.04211f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 708:
					Var0 = {-1386.429f, -480.5289f, 73.79211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 709:
					Var0 = {-1385.6f, -478.2664f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 710:
					Var0 = {-1369.435f, -461.8229f, 71.04211f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 711:
					Var0 = {-1376.22f, -462.8445f, 73.29211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 712:
					Var0 = {-1373.835f, -463.8867f, 71.0621f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 713:
					Var0 = {-1371.157f, -479.4782f, 71.04215f};
					Var0.f_3 = {3.25f, 0f, 0f};
					break;
				
				case 632:
					Var0 = {-1372.074f, -473.3848f, 73.54215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 715:
					Var0 = {-1370.833f, -461.1512f, 71.3765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 716:
					Var0 = {-1371.393f, -461.2212f, 71.6065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 717:
					Var0 = {-1370.833f, -461.1512f, 71.6065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 718:
					Var0 = {-1371.383f, -461.4812f, 71.3765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 719:
					Var0 = {-1370.803f, -461.4112f, 71.3865f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 720:
					Var0 = {-1371.383f, -461.4812f, 71.6065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 721:
					Var0 = {-1370.803f, -461.4112f, 71.6065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 722:
					Var0 = {-1371.393f, -461.2112f, 71.9765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 723:
					Var0 = {-1370.853f, -461.1512f, 71.9765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 724:
					Var0 = {-1371.393f, -461.2112f, 72.2065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 725:
					Var0 = {-1370.853f, -461.1512f, 72.2065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 726:
					Var0 = {-1371.373f, -461.4712f, 71.9765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 727:
					Var0 = {-1370.813f, -461.3912f, 71.9765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 728:
					Var0 = {-1371.373f, -461.4712f, 72.2065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 729:
					Var0 = {-1370.813f, -461.3912f, 72.2065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 730:
					Var0 = {-1371.393f, -461.2212f, 72.5065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 731:
					Var0 = {-1370.853f, -461.1512f, 72.5065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 732:
					Var0 = {-1371.393f, -461.2212f, 72.7365f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 733:
					Var0 = {-1370.853f, -461.1512f, 72.7365f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 734:
					Var0 = {-1371.373f, -461.4612f, 72.4965f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 735:
					Var0 = {-1370.813f, -461.3912f, 72.4965f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 736:
					Var0 = {-1371.373f, -461.4612f, 72.7365f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 737:
					Var0 = {-1370.813f, -461.3912f, 72.7365f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 738:
					Var0 = {-1373.116f, -488.2086f, 71.04217f};
					Var0.f_3 = {1.25f, 0f, 0f};
					break;
				
				case 739:
					Var0 = {-1365.72f, -487.1443f, 73.79217f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 740:
					Var0 = {-1372.851f, -485.1789f, 71.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 741:
					Var0 = {-1367.549f, -482.0912f, 71.05217f};
					Var0.f_3 = {1.25f, 0f, 0f};
					break;
				
				case 742:
					Var0 = {-1366.609f, -481.9662f, 73.79217f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 743:
					Var0 = {-1368.201f, -482.1139f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 744:
					Var0 = {-1380.242f, -486.2507f, 71.04211f};
					Var0.f_3 = {5.5f, 0f, 0f};
					break;
				
				case 745:
					Var0 = {-1384.697f, -486.9442f, 73.29217f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 746:
					Var0 = {-1379.289f, -486.2473f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 747:
					Var0 = {-1374.37f, -461.766f, 72.241f};
					Var0.f_3 = {-90f, 0f, 35.5f};
					break;
				
				case 748:
					Var0 = {-1374.638f, -461.769f, 72.246f};
					Var0.f_3 = {-90f, 0f, 35.5f};
					break;
				
				case 749:
					Var0 = {-1374.81f, -461.8721f, 71.645f};
					Var0.f_3 = {-2.5f, -66.5f, 91.3f};
					break;
				
				case 750:
					Var0 = {-1374.922f, -461.908f, 71.645f};
					Var0.f_3 = {-2.75f, -66.5f, 91.3f};
					break;
				
				case 751:
					Var0 = {-1383.28f, -472.7275f, 73.44767f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 752:
					Var0 = {-1376.303f, -470.6783f, 73.4041f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 753:
					Var0 = {-1381.757f, -472.5135f, 70.95429f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 754:
					Var0 = {-1376.52f, -469.1397f, 70.98588f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 755:
					Var0 = {-1376.395f, -470.5647f, 72.1921f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 756:
					Var0 = {-1383.19f, -472.639f, 72.1921f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 757:
					Var0 = {-1375.052f, -461.8455f, 72.261f};
					Var0.f_3 = {0f, 0f, 10.1f};
					break;
				
				case 758:
					Var0 = {-1375.242f, -461.8469f, 72.29f};
					Var0.f_3 = {0f, 0f, 41.4f};
					break;
				
				case 769:
					Var0 = {-1392.573f, -480.1384f, 71.0421f};
					Var0.f_3 = {0f, 0f, 276.5135f};
					break;
				
				case 770:
					Var0 = {-1393.545f, -478.9945f, 71.0421f};
					Var0.f_3 = {0f, 0f, 281.3589f};
					break;
				
				case 771:
					Var0 = {-1396.718f, -479.3686f, 71.0421f};
					Var0.f_3 = {0f, 0f, 276.951f};
					break;
				
				case 772:
					Var0 = {-1395.378f, -480.6437f, 71.0421f};
					Var0.f_3 = {0f, 0f, 281.0696f};
					break;
				
				case 773:
					Var0 = {-1392.69f, -479.6239f, 72.5297f};
					Var0.f_3 = {14.0402f, 0f, 7.4741f};
					break;
				
				case 774:
					Var0 = {-1378.496f, -481.8039f, 72.0891f};
					Var0.f_3 = {0.8273f, 0f, -82.807f};
					break;
				
				case 775:
					Var0 = {-1380.646f, -481.2209f, 71.0421f};
					Var0.f_3 = {0f, 0f, 273.8102f};
					break;
				
				case 776:
					Var0 = {-1380.025f, -482.464f, 71.0421f};
					Var0.f_3 = {0f, 0f, 274.1362f};
					break;
				
				case 777:
					Var0 = {-1379.174f, -481.1526f, 71.0421f};
					Var0.f_3 = {0f, 0f, 273.546f};
					break;
				
				case 778:
					Var0 = {-1378.641f, -482.5946f, 71.0421f};
					Var0.f_3 = {0f, 0f, 272.5229f};
					break;
			}
			switch (iParam0)
			{
				case 779:
					Var0 = {-1370.4f, -479.8142f, 71.0421f};
					Var0.f_3 = {0f, 0f, 283.0016f};
					break;
				
				case 780:
					Var0 = {-1370.507f, -480.7826f, 71.0421f};
					Var0.f_3 = {0f, 0f, 281.4162f};
					break;
				
				case 781:
					Var0 = {-1370.4f, -479.8142f, 71.0421f};
					Var0.f_3 = {0f, 0f, 283.0016f};
					break;
				
				case 782:
					Var0 = {-1370.507f, -480.7826f, 71.0421f};
					Var0.f_3 = {0f, 0f, 281.4162f};
					break;
				
				case 783:
					Var0 = {-1372.42f, -477.419f, 72.043f};
					Var0.f_3 = {0f, 0f, -129.25f};
					break;
				
				case 784:
					Var0 = {-1371.118f, -478.731f, 72.043f};
					Var0.f_3 = {0f, 0f, -27.25f};
					break;
				
				case 785:
					Var0 = {-1373.091f, -476.2664f, 72.0529f};
					Var0.f_3 = {0f, 0f, 311.3689f};
					break;
				
				case 786:
					Var0 = {-1371.497f, -473.9364f, 72.0529f};
					Var0.f_3 = {0f, 0f, 151.6133f};
					break;
				
				case 787:
					Var0 = {-1372.355f, -478.725f, 71.561f};
					Var0.f_3 = {0f, 0f, -37.5f};
					break;
				
				case 788:
					Var0 = {-1372.859f, -474.543f, 71.561f};
					Var0.f_3 = {0f, 0f, -133.5f};
					break;
				
				case 789:
					Var0 = {-1372.758f, -477.7887f, 72.0529f};
					Var0.f_3 = {0f, 0f, 302.8123f};
					break;
				
				case 790:
					Var0 = {-1371.446f, -478.7147f, 72.0529f};
					Var0.f_3 = {0f, 0f, 332.7965f};
					break;
				
				case 791:
					Var0 = {-1371.96f, -474.174f, 72.0529f};
					Var0.f_3 = {0f, 0f, 205.0822f};
					break;
				
				case 792:
					Var0 = {-1373.104f, -475.6295f, 72.0529f};
					Var0.f_3 = {0f, 0f, 246.6334f};
					break;
				
				case 793:
					Var0 = {-1372.537f, -477.7263f, 71.0529f};
					Var0.f_3 = {0f, 0f, 233.9974f};
					break;
				
				case 794:
					Var0 = {-1371.131f, -478.5096f, 71.0529f};
					Var0.f_3 = {0f, 0f, 60.3401f};
					break;
				
				case 795:
					Var0 = {-1371.84f, -474.4755f, 71.0529f};
					Var0.f_3 = {0f, 0f, 150.8988f};
					break;
				
				case 796:
					Var0 = {-1372.604f, -475.7714f, 71.0529f};
					Var0.f_3 = {0f, 0f, 320.6061f};
					break;
				
				case 797:
					Var0 = {-1371.508f, -477.4651f, 72.0529f};
					Var0.f_3 = {0f, 0f, 146.0641f};
					break;
				
				case 798:
					Var0 = {-1371.854f, -475.3757f, 72.0529f};
					Var0.f_3 = {0f, 0f, 47.8768f};
					break;
				
				case 799:
					Var0 = {-1371.889f, -478.1164f, 72.0529f};
					Var0.f_3 = {0f, 0f, 144.5707f};
					break;
				
				case 800:
					Var0 = {-1372.4f, -474.8434f, 72.0529f};
					Var0.f_3 = {0f, 0f, 51.6376f};
					break;
				
				case 802:
					Var0 = {-1372.38f, -478.752f, 71.573f};
					Var0.f_3 = {0f, 0f, -35.75f};
					break;
				
				case 801:
					Var0 = {-1388.033f, -478.7589f, 71.0421f};
					Var0.f_3 = {0f, 0f, 286.3443f};
					break;
				
				case 805:
					Var0 = {-1382.268f, -481.5285f, 71.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 803:
					Var0 = {-1383.237f, -483.2296f, 71.04217f};
					Var0.f_3 = {1.1f, 0f, 0f};
					break;
				
				case 804:
					Var0 = {-1383.649f, -480.2233f, 73.29217f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 808:
					Var0 = {-1368.617f, -479.5128f, 71.0621f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 806:
					Var0 = {-1370.561f, -474.6018f, 71.04213f};
					Var0.f_3 = {3.75f, 0f, 0f};
					break;
				
				case 807:
					Var0 = {-1370.13f, -477.8921f, 73.54213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 809:
					Var0 = {-1375.031f, -461.896f, 71.6313f};
					Var0.f_3 = {-1.8f, -66.5f, 93.9f};
					break;
				
				case 810:
					Var0 = {-1371.426f, -465.332f, 71.835f};
					Var0.f_3 = {0f, 0f, -141.25f};
					break;
				
				case 811:
					Var0 = {-1376.985f, -482.3501f, 71.0421f};
					Var0.f_3 = {0f, 0f, 80.6965f};
					break;
				
				case 812:
					Var0 = {-1376.912f, -480.9891f, 71.0421f};
					Var0.f_3 = {0f, 0f, 74.6858f};
					break;
				
				case 813:
					Var0 = {-1375.364f, -481.7466f, 71.0421f};
					Var0.f_3 = {0f, 0f, 92.578f};
					break;
				
				case 814:
					Var0 = {-1374.097f, -481.0571f, 71.0421f};
					Var0.f_3 = {0f, 0f, 98.0056f};
					break;
				
				case 815:
					Var0 = {-1386.889f, -477.0505f, 71.0421f};
					Var0.f_3 = {0f, 0f, 80f};
					break;
				
				case 816:
					Var0 = {-1374.043f, -462.3639f, 73.29215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 818:
					Var0 = {-1372.768f, -464.8512f, 71.04905f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 819:
					Var0 = {-1374.161f, -463.5122f, 72.79215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 820:
					Var0 = {-0.1372f, -463.9352f, 71.6622f};
					Var0.f_3 = {0f, 0f, 37f};
					break;
				
				case 821:
					Var0 = {-1372.619f, -464.239f, 71.432f};
					Var0.f_3 = {0f, 0f, -32.76f};
					break;
				
				case 817:
					Var0 = {-1371.571f, -462.438f, 73.54214f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 647:
					Var0 = {-1393.194f, -477.075f, 71.042f};
					Var0.f_3 = {0f, 0f, -170f};
					break;
				
				case 822:
					Var0 = {-1392.657f, -476.4261f, 71.0421f};
					Var0.f_3 = {0f, 0f, 163.87f};
					break;
				
				case 823:
					Var0 = {-1392.09f, -476.787f, 71.042f};
					Var0.f_3 = {0f, 0f, 111.15f};
					break;
				
				case 824:
					Var0 = {-1393.702f, -476.1204f, 71.0421f};
					Var0.f_3 = {0f, 0f, -167.88f};
					break;
				
				case 825:
					Var0 = {-1393.058f, -477.8514f, 71.2513f};
					Var0.f_3 = {0f, 0f, 191.9762f};
					break;
				
				case 826:
					Var0 = {-1380.28f, -474.1296f, 71.0421f};
					Var0.f_3 = {0f, 0f, 191.9762f};
					break;
				
				case 827:
					Var0 = {-1370.688f, -479.6639f, 72.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 828:
					Var0 = {-1371.642f, -472.7743f, 72.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 829:
					Var0 = {-1368.66f, -478.0478f, 72.0529f};
					Var0.f_3 = {0f, 0f, 101.807f};
					break;
				
				case 830:
					Var0 = {-1369.159f, -479.3572f, 72.0422f};
					Var0.f_3 = {0f, 0f, 19.6959f};
					break;
				
				case 831:
					Var0 = {-1369.618f, -476.4316f, 72.0529f};
					Var0.f_3 = {0f, 0f, 168.1197f};
					break;
				
				case 832:
					Var0 = {-1374.543f, -481.3387f, 72.0422f};
					Var0.f_3 = {0f, 0f, 277.0777f};
					break;
				
				case 833:
					Var0 = {-1369.872f, -475.1957f, 72.0529f};
					Var0.f_3 = {0f, 0f, 61.6439f};
					break;
				
				case 834:
					Var0 = {-1369.106f, -473.6916f, 72.0529f};
					Var0.f_3 = {0f, 0f, 70.5975f};
					break;
				
				case 835:
					Var0 = {-1368.954f, -471.6623f, 72.0422f};
					Var0.f_3 = {0f, 0f, 76.359f};
					break;
				
				case 836:
					Var0 = {-1370.482f, -470.7346f, 72.0422f};
					Var0.f_3 = {0f, 0f, 155.9964f};
					break;
				
				case 838:
					Var0 = {-1378.063f, -467.0028f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 839:
					Var0 = {-1377.933f, -467.785f, 73.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 837:
					Var0 = {-1377.825f, -467.389f, 71.05f};
					Var0.f_3 = {0f, 0f, 87.84f};
					break;
				
				case 842:
					Var0 = {-1372.015f, -468.9812f, 71.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 840:
					Var0 = {-1373.58f, -466.8963f, 71.04905f};
					Var0.f_3 = {1.5f, 0f, 0f};
					break;
				
				case 841:
					Var0 = {-1370.55f, -466.4406f, 73.54905f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 843:
					Var0 = {-1375.149f, -461.8709f, 71.63f};
					Var0.f_3 = {-1.8f, -66.5f, 93.9f};
					break;
				
				case 844:
					Var0 = {-1369.763f, -485.0164f, 72.1498f};
					Var0.f_3 = {-23.7676f, 0f, -80.7839f};
					break;
				
				case 845:
					Var0 = {-1380.299f, -481.8173f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 846:
					Var0 = {-1384.702f, -478.7025f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 847:
					Var0 = {-1380.176f, -480.645f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 848:
					Var0 = {-1384.398f, -478.1262f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 849:
					Var0 = {-1377.932f, -481.5936f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 850:
					Var0 = {-1384.41f, -479.2907f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 851:
					Var0 = {-1380.405f, -481.5397f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 852:
					Var0 = {-1383.782f, -478.5861f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 853:
					Var0 = {-1392.677f, -479.7237f, 72.4105f};
					Var0.f_3 = {0.7434f, 0f, 7.4741f};
					break;
				
				case 854:
					Var0 = {-1377.628f, -481.6943f, 72.1015f};
					Var0.f_3 = {0.8273f, 0f, -82.807f};
					break;
				
				case 855:
					Var0 = {-1382.699f, -479.8376f, 72.2729f};
					Var0.f_3 = {0.8044f, 0f, -111.6133f};
					break;
				
				case 856:
					Var0 = {-1383.487f, -479.5229f, 72.2603f};
					Var0.f_3 = {0.8044f, 0f, -111.6133f};
					break;
				
				case 686:
					Var0 = {-1378.393f, -484.121f, 71.643f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 687:
					Var0 = {-1376.883f, -483.909f, 71.643f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 688:
					Var0 = {-1375.373f, -483.697f, 71.643f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
			}
			switch (iParam0)
			{
				case 857:
					Var0 = {-1371.476f, -480.6698f, 31.04214f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 858:
					Var0 = {-1377.564f, -481.4189f, 73.72964f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 859:
					Var0 = {-1378.863f, -479.5141f, 71.0421f};
					Var0.f_3 = {0f, 0f, 156f};
					break;
				
				case 860:
					Var0 = {-1381.632f, -478.6535f, 71.0421f};
					Var0.f_3 = {0f, 0f, 190f};
					break;
				
				case 861:
					Var0 = {-1382.021f, -482.9339f, 71.0421f};
					Var0.f_3 = {0f, 0f, 324f};
					break;
				
				case 862:
					Var0 = {-1369.401f, -482.3335f, 71.0421f};
					Var0.f_3 = {0f, 0f, 44f};
					break;
				
				case 863:
					Var0 = {-1379.681f, -477.5754f, 71.6343f};
					Var0.f_3 = {0f, 0f, -78.12f};
					break;
				
				case 864:
					Var0 = {-1367.611f, -473.8776f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 865:
					Var0 = {-1369.875f, -474.216f, 72.55293f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 866:
					Var0 = {-1366.966f, -477.8354f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 867:
					Var0 = {-1369.294f, -478.1736f, 72.55293f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 899:
					Var0 = {-1367.721f, -477.4963f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 900:
					Var0 = {-1368.16f, -474.3671f, 72.54215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 868:
					Var0 = {-1392.101f, -478.448f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 869:
					Var0 = {-1388.971f, -478.1062f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 880:
					Var0 = {-1376.621f, -485.3536f, 71.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 878:
					Var0 = {-1374.779f, -483.3618f, 71.04215f};
					Var0.f_3 = {1.75f, 0f, 0f};
					break;
				
				case 879:
					Var0 = {-1379.531f, -484.1284f, 73.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 887:
					Var0 = {-1369.734f, -484.9951f, 71.8463f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 894:
					Var0 = {-1385.207f, -478.4178f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 895:
					Var0 = {-1384.483f, -479.1004f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 896:
					Var0 = {-1385.59f, -479.3416f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 897:
					Var0 = {-1385.831f, -477.7351f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.7484f;
					break;
				
				case 898:
					Var0 = {-1384.825f, -477.4939f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 901:
					Var0 = {-1392.254f, -477.7293f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 902:
					Var0 = {-1393.74f, -477.938f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 903:
					Var0 = {-1395.517f, -478.1879f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 904:
					Var0 = {-1397.004f, -478.3966f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 905:
					Var0 = {-1391.796f, -480.9668f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 906:
					Var0 = {-1393.282f, -481.1756f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 907:
					Var0 = {-1395.059f, -481.4254f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 908:
					Var0 = {-1396.545f, -481.6342f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 909:
					Var0 = {-1372.66f, -476.5803f, 70.80293f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 910:
					Var0 = {-1373.991f, -476.762f, 73.93909f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_324(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 86:
			switch (iParam0)
			{
				case 1:
					Var0 = {-1446.808f, -3762.878f, 4.8851f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-1447.32f, -3764.615f, 7.1351f};
					Var0.f_3 = {0f, 0f, -105.421f};
					break;
				
				case 3:
					Var0 = {-1472.317f, -3754.113f, 4.9666f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {-1442.132f, -3765.401f, 4.6422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-1491.069f, -3749.399f, 7.8848f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-1447.664f, -3763.538f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 9:
					Var0 = {-1477.099f, -3753.808f, 7.9712f};
					Var0.f_3 = {0f, 0f, 72.0645f};
					break;
				
				case 10:
					Var0 = {-1469.098f, -3756.622f, 7.9712f};
					Var0.f_3 = {0f, 0f, -108.8264f};
					break;
				
				case 11:
					Var0 = {-1462.95f, -3755.3f, 4.8842f};
					Var0.f_3 = {0f, 0f, -17.3354f};
					break;
				
				case 12:
					Var0 = {-1484.953f, -3757.543f, 4.8811f};
					Var0.f_3 = {0f, 0f, -100.4841f};
					break;
				
				case 14:
					Var0 = {-1464.4f, -3758.122f, 9.4872f};
					Var0.f_3 = {0f, 0f, 72f};
					break;
				
				case 15:
					Var0 = {-1447.537f, -3764.701f, 7.2679f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 562:
					Var0 = {-1468.309f, -3761.743f, 8.464f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 563:
					Var0 = {-1470.705f, -3760.114f, 8.466f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 564:
					Var0 = {-1468.763f, -3754.111f, 8.464f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 565:
					Var0 = {-1468.523f, -3752.656f, 8.431f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 566:
					Var0 = {-1466.566f, -3752.179f, 8.434f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 567:
					Var0 = {-1469.603f, -3761.323f, 8.464f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 568:
					Var0 = {-1465.59f, -3752.742f, 8.469f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 569:
					Var0 = {-1467.868f, -3761.448f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 570:
					Var0 = {-1470.374f, -3760.535f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 571:
					Var0 = {-1468.372f, -3754.463f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 572:
					Var0 = {-1467.756f, -3752.503f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 573:
					Var0 = {-1466.979f, -3752.699f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 574:
					Var0 = {-1468.851f, -3760.945f, 7.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 575:
					Var0 = {-1465.823f, -3753.801f, 7.97122f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 576:
					Var0 = {-1468.691f, -3761.233f, 9.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 577:
					Var0 = {-1470.116f, -3759.786f, 9.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 578:
					Var0 = {-1468.126f, -3753.701f, 9.4712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 579:
					Var0 = {-1467.965f, -3753.221f, 9.4712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 580:
					Var0 = {-1466.372f, -3752.868f, 9.4712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 581:
					Var0 = {-1469.704f, -3760.67f, 9.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 582:
					Var0 = {-1465.417f, -3752.599f, 9.721219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-1466.258f, -3757.699f, 9.501f};
					Var0.f_3 = {-1.2041f, 0.3327f, -104.2489f};
					break;
				
				case 35:
					Var0 = {-1469.413f, -3754.47f, 9.8603f};
					Var0.f_3 = {-9.4021f, 0f, -124.0641f};
					break;
				
				case 40:
					Var0 = {-1480.999f, -3750.434f, 4.8844f};
					Var0.f_3 = {0f, 0f, 74.7582f};
					break;
				
				case 41:
					Var0 = {-1469.779f, -3759.773f, 8.99f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 42:
					Var0 = {-1469.304f, -3759.843f, 7.99f};
					Var0.f_3 = {0f, 0f, 70.92f};
					break;
				
				case 46:
					Var0 = {-1484.913f, -3751.229f, 4.88439f};
					Var0.f_3 = {0f, 0f, -16.57f};
					break;
				
				case 47:
					Var0 = {-1485.11f, -3749.337f, 5.349f};
					Var0.f_3 = {0f, 0f, -20.16f};
					break;
				
				case 50:
					Var0 = {-1486.254f, -3750.081f, 4.911377f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {-1484.091f, -3750.708f, 6.911377f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 612:
					Var0 = {-1483.299f, -3747.215f, 5.915f};
					Var0.f_3 = {0f, 0f, 110.52f};
					break;
				
				case 615:
					Var0 = {-1485.33f, -3747.146f, 4.911378f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-1483.3f, -3747.885f, 6.911377f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-1487.777f, -3745.036f, 4.8842f};
					Var0.f_3 = {0f, 0f, 116.7347f};
					break;
				
				case 58:
					Var0 = {-1489.353f, -3745.367f, 7.0828f};
					Var0.f_3 = {-3.8443f, -0.028f, -81.512f};
					break;
				
				case 59:
					Var0 = {-1489.111f, -3744.742f, 7.0897f};
					Var0.f_3 = {-13.452f, -0.0144f, -128.8492f};
					break;
				
				case 60:
					Var0 = {-1489.171f, -3744.723f, 6.9663f};
					Var0.f_3 = {-11.7216f, -0.0144f, -158.9758f};
					break;
				
				case 61:
					Var0 = {-1489.528f, -3745.62f, 6.8107f};
					Var0.f_3 = {-15.2796f, -0.0144f, -107.6647f};
					break;
				
				case 62:
					Var0 = {-1486.3f, -3744.352f, 6.443f};
					Var0.f_3 = {4.3878f, -0.3949f, 127.0602f};
					break;
				
				case 63:
					Var0 = {-1488.215f, -3746.252f, 7.0088f};
					Var0.f_3 = {-16.9377f, -0.0626f, 23.247f};
					break;
				
				case 64:
					Var0 = {-1488.644f, -3745.901f, 7.1418f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-1488.548f, -3745.67f, 5.4501f};
					Var0.f_3 = {-51.3342f, 0f, -18.5131f};
					break;
				
				case 66:
					Var0 = {-1488.019f, -3746.062f, 4.811914f};
					Var0.f_3 = {0f, 0f, -179f};
					break;
				
				case 67:
					Var0 = {-1488.63f, -3744.632f, 7.136929f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 68:
					Var0 = {-1485.86f, -3744.431f, 4.8846f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 69:
					Var0 = {-1477.398f, -3750.441f, 7.9712f};
					Var0.f_3 = {0f, 0f, 135.1895f};
					break;
				
				case 70:
					Var0 = {-1478.481f, -3750.172f, 8.471f};
					Var0.f_3 = {0f, 0f, -134.36f};
					break;
				
				case 71:
					Var0 = {-1480.469f, -3757.628f, 7.969229f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 72:
					Var0 = {-1477.972f, -3749.26f, 10.34622f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 73:
					Var0 = {-1478.017f, -3750.726f, 7.9712f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 74:
					Var0 = {-1478.209f, -3751.382f, 8.9712f};
					Var0.f_3 = {0f, 0f, 306.4598f};
					break;
				
				case 75:
					Var0 = {-1477.742f, -3750.582f, 8.9712f};
					Var0.f_3 = {0f, 0f, 169.4526f};
					break;
				
				case 76:
					Var0 = {-1478.209f, -3751.382f, 8.9712f};
					Var0.f_3 = {0f, 0f, 306.4598f};
					break;
				
				case 78:
					Var0 = {-1483.029f, -3754.988f, 7.978f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 81:
					Var0 = {-1483.636f, -3754.824f, 7.9805f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 82:
					Var0 = {-1482.618f, -3754.687f, 9.7305f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 84:
					Var0 = {-1481.445f, -3749.58f, 7.98f};
					Var0.f_3 = {0f, 0f, 139.2f};
					break;
				
				case 86:
					Var0 = {-1481.279f, -3750.068f, 7.9805f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {-1481.873f, -3749.484f, 9.7305f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 89:
					Var0 = {-1461.222f, -3760.608f, 8.97f};
					Var0.f_3 = {0f, 0f, 69.91f};
					break;
				
				case 90:
					Var0 = {-1461.222f, -3760.608f, 7.97f};
					Var0.f_3 = {0f, 0f, -110.88f};
					break;
				
				case 93:
					Var0 = {-1446.683f, -3764.576f, 6.0341f};
					Var0.f_3 = {0f, 0f, -108f};
					break;
				
				case 94:
					Var0 = {-1445.094f, -3764.118f, 4.947f};
					Var0.f_3 = {0f, 0f, -108f};
					break;
				
				case 95:
					Var0 = {-1447.214f, -3763.414f, 5.947f};
					Var0.f_3 = {0f, 0f, -109.34f};
					break;
				
				case 96:
					Var0 = {-1445.979f, -3763.761f, 5.947f};
					Var0.f_3 = {0f, 0f, 74.74f};
					break;
				
				case 97:
					Var0 = {-1448.581f, -3763.566f, 5.947f};
					Var0.f_3 = {0f, 0f, -60.94f};
					break;
				
				case 98:
					Var0 = {-1447.435f, -3762.875f, 5.947f};
					Var0.f_3 = {0f, 0f, 123.24f};
					break;
				
				case 99:
					Var0 = {-1445.094f, -3764.118f, 4.947f};
					Var0.f_3 = {0f, 0f, -108f};
					break;
				
				case 100:
					Var0 = {-1447.406f, -3763.303f, 5.96f};
					Var0.f_3 = {0f, 0f, -105.26f};
					break;
				
				case 101:
					Var0 = {-1444.846f, -3763.649f, 6.3325f};
					Var0.f_3 = {1.1681f, 0.0076f, -77.9873f};
					break;
				
				case 102:
					Var0 = {-1471.817f, -3756.322f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-1472.123f, -3757.26f, 6.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 104:
					Var0 = {-1464.724f, -3758.992f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {-1464.471f, -3758.163f, 6.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 110:
					Var0 = {-1487.114f, -3744.942f, 4.8842f};
					Var0.f_3 = {0f, 0f, 307.2348f};
					break;
				
				case 119:
					Var0 = {-1444.848f, -3765.358f, 4.8847f};
					Var0.f_3 = {0f, 0f, 42.619f};
					break;
				
				case 126:
					Var0 = {-1469.953f, -3760.144f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 127:
					Var0 = {-1469.652f, -3759.159f, 9.7212f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 130:
					Var0 = {-1483.029f, -3754.988f, 7.978f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 133:
					Var0 = {-1483.636f, -3754.824f, 7.9805f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 134:
					Var0 = {-1482.618f, -3754.687f, 9.7305f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 135:
					Var0 = {-1461.493f, -3760.982f, 7.9715f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 136:
					Var0 = {-1461.05f, -3759.931f, 9.9715f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 169:
					Var0 = {-1463.954f, -3755.54f, 7.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-1464.205f, -3756.409f, 9.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 181:
					Var0 = {-1463.829f, -3755.636f, 8.851f};
					Var0.f_3 = {0f, 0f, -110.727f};
					break;
				
				case 182:
					Var0 = {-1471.324f, -3756.496f, 5.76f};
					Var0.f_3 = {0f, 0f, -123.12f};
					break;
				
				case 183:
					Var0 = {-1465.113f, -3758.882f, 5.75f};
					Var0.f_3 = {0f, 0f, 74.88f};
					break;
				
				case 588:
					Var0 = {-1463.023f, -3758.697f, 7.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 587:
					Var0 = {-1462.763f, -3757.992f, 9.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 589:
					Var0 = {-1463.29f, -3758.862f, 8.851f};
					Var0.f_3 = {0f, 0f, 85.32f};
					break;
				
				case 591:
					Var0 = {-1483.584f, -3745.06f, 6.884395f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 590:
					Var0 = {-1484.416f, -3744.834f, 4.884395f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 592:
					Var0 = {-1484.373f, -3744.65f, 5.75f};
					Var0.f_3 = {0f, 0f, -16f};
					break;
				
				case 201:
					Var0 = {-1447.458f, -3762.726f, 6.486f};
					Var0.f_3 = {-2.7455f, 0.0091f, -130.6178f};
					break;
				
				case 202:
					Var0 = {-1447.664f, -3763.538f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 203:
					Var0 = {-1448.587f, -3763.156f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 204:
					Var0 = {-1447.481f, -3762.614f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 205:
					Var0 = {-1449.94f, -3765.321f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 206:
					Var0 = {-1448.046f, -3764.462f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 207:
					Var0 = {-1448.205f, -3762.231f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 208:
					Var0 = {-1448.657f, -3759.897f, 4.885f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 209:
					Var0 = {-1450.222f, -3766.645f, 4.8819f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 210:
					Var0 = {-1448.97f, -3764.079f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 211:
					Var0 = {-1449.211f, -3765.073f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 212:
					Var0 = {-1447.198f, -3761.39f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 213:
					Var0 = {-1449.216f, -3766.903f, 4.8846f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 214:
					Var0 = {-1448.629f, -3765.786f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 215:
					Var0 = {-1447.946f, -3760.925f, 4.8851f};
					Var0.f_3 = {0f, 0f, 255.7055f};
					break;
				
				case 216:
					Var0 = {-1447.55f, -3759.656f, 4.8821f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 217:
					Var0 = {-1446.781f, -3760.051f, 4.882f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 276:
					Var0 = {-1468.683f, -3756.704f, 4.6207f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-1491.069f, -3749.399f, 7.8848f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 298:
					Var0 = {-1483.188f, -3754.52f, 8.9789f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 299:
					Var0 = {-1481.603f, -3750.063f, 8.93f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 311:
					Var0 = {-1462.11f, -3758.155f, 8.0775f};
					Var0.f_3 = {0f, 0f, 106.1f};
					break;
				
				case 341:
					Var0 = {-1479.579f, -3753.227f, 7.7212f};
					Var0.f_3 = {0f, 0f, 5.8f};
					break;
				
				case 343:
					Var0 = {-1477.056f, -3749.575f, 5.315f};
					Var0.f_3 = {0f, 0f, -20.88f};
					break;
				
				case 346:
					Var0 = {-1478.391f, -3750.33f, 4.884243f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 347:
					Var0 = {-1476.525f, -3750.974f, 6.884243f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 618:
					Var0 = {-1475.45f, -3747.539f, 5.915f};
					Var0.f_3 = {0f, 0f, 110.52f};
					break;
				
				case 621:
					Var0 = {-1477.482f, -3747.602f, 4.884243f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 622:
					Var0 = {-1475.804f, -3748.159f, 6.884243f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 349:
					Var0 = {-1459.512f, -3758.9f, 5.349f};
					Var0.f_3 = {0f, 0f, 161.64f};
					break;
				
				case 352:
					Var0 = {-1458.289f, -3758.243f, 4.8898f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 353:
					Var0 = {-1460.635f, -3757.476f, 6.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 624:
					Var0 = {-1461.202f, -3761.051f, 5.915f};
					Var0.f_3 = {0f, 0f, -65.52f};
					break;
				
				case 627:
					Var0 = {-1459.431f, -3761.208f, 4.884149f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 628:
					Var0 = {-1461.364f, -3760.571f, 6.884149f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 354:
					Var0 = {-1486.442f, -3749.991f, 5.78f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 355:
					Var0 = {-1478.653f, -3750.469f, 5.78f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 356:
					Var0 = {-1458.24f, -3758.581f, 5.78f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 357:
					Var0 = {-1488.263f, -3744.759f, 6.1615f};
					Var0.f_3 = {0f, 0f, 117f};
					break;
				
				case 358:
					Var0 = {-1479.48f, -3754.686f, 6.1355f};
					Var0.f_3 = {0f, 0f, 117f};
					break;
				
				case 359:
					Var0 = {-1467.563f, -3757.183f, 6.1355f};
					Var0.f_3 = {0f, 0f, 117f};
					break;
				
				case 360:
					Var0 = {-1478.651f, -3755.416f, 4.8889f};
					Var0.f_3 = {0f, 0f, -179f};
					break;
				
				case 361:
					Var0 = {-1479.187f, -3754.366f, 6.8889f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 362:
					Var0 = {-1479.755f, -3755.78f, 7.1482f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 363:
					Var0 = {-1479.755f, -3755.775f, 5.3251f};
					Var0.f_3 = {-62.0222f, 0f, -17.696f};
					break;
				
				case 364:
					Var0 = {-1479.497f, -3756.253f, 6.9088f};
					Var0.f_3 = {1.2958f, 0.1689f, 20.4999f};
					break;
				
				case 365:
					Var0 = {-1479.497f, -3756.253f, 6.9088f};
					Var0.f_3 = {-7.427f, 0.1171f, 20.4063f};
					break;
				
				case 366:
					Var0 = {-1480.318f, -3754.569f, 7.1457f};
					Var0.f_3 = {-21.5455f, 0.2229f, -158.8809f};
					break;
				
				case 367:
					Var0 = {-1480.159f, -3754.812f, 7.0318f};
					Var0.f_3 = {-14.0111f, 0.1714f, -175.8724f};
					break;
				
				case 368:
					Var0 = {-1480.266f, -3754.571f, 6.6033f};
					Var0.f_3 = {3.3357f, 0.2198f, -149.3704f};
					break;
				
				case 369:
					Var0 = {-1478.26f, -3754.211f, 4.8889f};
					Var0.f_3 = {0f, 0f, 312.4691f};
					break;
				
				case 370:
					Var0 = {-1466.68f, -3757.925f, 4.8817f};
					Var0.f_3 = {0f, 0f, -179f};
					break;
				
				case 371:
					Var0 = {-1467.205f, -3756.834f, 6.8817f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 372:
					Var0 = {-1467.907f, -3758.286f, 7.0358f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 373:
					Var0 = {-1467.909f, -3758.083f, 5.1862f};
					Var0.f_3 = {-62.0222f, 0f, -17.696f};
					break;
				
				case 374:
					Var0 = {-1468.696f, -3758.387f, 6.7899f};
					Var0.f_3 = {3.1594f, -0.1537f, -52.4148f};
					break;
				
				case 375:
					Var0 = {-1468.696f, -3758.387f, 6.7899f};
					Var0.f_3 = {3.1594f, -0.1537f, -52.4148f};
					break;
				
				case 376:
					Var0 = {-1468.448f, -3757.17f, 7.21f};
					Var0.f_3 = {-21.8662f, -0.1252f, -161.5497f};
					break;
				
				case 377:
					Var0 = {-1468.4f, -3757.185f, 6.3925f};
					Var0.f_3 = {0.8043f, -0.1812f, -165.0518f};
					break;
				
				case 378:
					Var0 = {-1468.44f, -3756.969f, 6.7422f};
					Var0.f_3 = {-0.3434f, -0.307f, -153.0706f};
					break;
				
				case 379:
					Var0 = {-1466.88f, -3757.383f, 4.8731f};
					Var0.f_3 = {0f, 0f, 311.9359f};
					break;
				
				case 380:
					Var0 = {-1485.36f, -3744.655f, 5.8877f};
					Var0.f_3 = {0f, 0f, 72f};
					break;
				
				case 381:
					Var0 = {-1477.239f, -3753.594f, 5.8927f};
					Var0.f_3 = {0f, 0f, -63.2f};
					break;
				
				case 382:
					Var0 = {-1465.516f, -3756.622f, 5.8927f};
					Var0.f_3 = {0f, 0f, -63.2f};
					break;
				
				case 383:
					Var0 = {-1478.103f, -3752.667f, 4.8889f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 384:
					Var0 = {-1466.408f, -3755.691f, 4.8818f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 385:
					Var0 = {-1486.232f, -3745.631f, 7.1342f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 386:
					Var0 = {-1477.522f, -3753.809f, 7.1389f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 387:
					Var0 = {-1465.799f, -3756.852f, 7.1318f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 388:
					Var0 = {-1424.162f, -3771.192f, 4.6323f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 389:
					Var0 = {-1425.755f, -3770.688f, 7.6323f};
					Var0.f_3 = {0f, 0f, 78.4651f};
					break;
				
				case 390:
					Var0 = {-1425.334f, -3770.985f, 4.8876f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 391:
					Var0 = {-1423.754f, -3769.757f, 6.6128f};
					Var0.f_3 = {-16.1178f, 0f, 116.8816f};
					break;
				
				case 392:
					Var0 = {-1424.657f, -3770.128f, 4.885f};
					Var0.f_3 = {-0.067f, 0f, 52.003f};
					break;
				
				case 393:
					Var0 = {-1424.824f, -3771.119f, 4.874f};
					Var0.f_3 = {0f, 0f, 74.52f};
					break;
				
				case 394:
					Var0 = {-1424.182f, -3769.503f, 6.2866f};
					Var0.f_3 = {2.1025f, 0.0535f, 159.5091f};
					break;
				
				case 395:
					Var0 = {-1411.107f, -3768.087f, 8.1648f};
					Var0.f_3 = {-10.4774f, 0f, 96.1273f};
					break;
				
				case 396:
					Var0 = {-1408.346f, -3748.977f, 14.3548f};
					Var0.f_3 = {-8.6722f, 0f, 110.6113f};
					break;
				
				case 397:
					Var0 = {-1422.037f, -3771.962f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 398:
					Var0 = {-1422.961f, -3771.58f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 399:
					Var0 = {-1421.655f, -3771.038f, 4.8824f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 400:
					Var0 = {-1421.114f, -3772.345f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 401:
					Var0 = {-1422.42f, -3772.886f, 4.8827f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 402:
					Var0 = {-1422.578f, -3770.656f, 4.8824f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 403:
					Var0 = {-1420.731f, -3771.421f, 4.8824f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 404:
					Var0 = {-1421.496f, -3773.269f, 4.8827f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 405:
					Var0 = {-1423.344f, -3772.503f, 4.8827f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 406:
					Var0 = {-1423.885f, -3771.197f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 407:
					Var0 = {-1421.272f, -3770.115f, 4.8828f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 408:
					Var0 = {-1420.19f, -3772.728f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 409:
					Var0 = {-1422.803f, -3773.81f, 4.8828f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 410:
					Var0 = {-1423.12f, -3769.349f, 4.8829f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 411:
					Var0 = {-1419.424f, -3770.88f, 4.8828f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 412:
					Var0 = {-1420.955f, -3774.575f, 4.8831f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 413:
					Var0 = {-1422.037f, -3771.962f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 414:
					Var0 = {-1424.983f, -3771.068f, 4.865f};
					Var0.f_3 = {0f, 0f, 72f};
					break;
				
				case 415:
					Var0 = {-1424.182f, -3769.503f, 6.2866f};
					Var0.f_3 = {2.1025f, 0.0535f, 159.5091f};
					break;
				
				case 416:
					Var0 = {-1424.629f, -3770.126f, 6.318f};
					Var0.f_3 = {0f, 0f, 77.2f};
					break;
				
				case 417:
					Var0 = {-1504.034f, -3721.481f, 18.6389f};
					Var0.f_3 = {-20.8595f, 0f, -153.4179f};
					break;
				
				case 418:
					Var0 = {-1425.131f, -3771.658f, 6.08f};
					Var0.f_3 = {0f, 0f, 72f};
					break;
				
				case 419:
					Var0 = {-1425.331f, -3772.208f, 4.63f};
					Var0.f_3 = {0f, 0f, -108f};
					break;
				
				case 420:
					Var0 = {-1472.25f, -3753.718f, 6.5f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 586:
					Var0 = {-1462.875f, -3757.102f, 6.5f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 585:
					Var0 = {-1482.616f, -3749.898f, 6.5f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 421:
					Var0 = {-1477.534f, -3753.708f, 9f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 550:
					Var0 = {-1416.474f, -3771.997f, 5.5693f};
					Var0.f_3 = {0f, 0f, 163.44f};
					break;
				
				case 551:
					Var0 = {-1423.845f, -3771.194f, 7.2235f};
					Var0.f_3 = {6.157f, -0.5868f, -114.8645f};
					break;
				
				case 552:
					Var0 = {-1448.08f, -3765.959f, 12.2481f};
					Var0.f_3 = {0f, 0f, 161.525f};
					break;
				
				case 553:
					Var0 = {-1504.292f, -3747.308f, 7.03f};
					Var0.f_3 = {0f, 0f, -91.08f};
					break;
				
				case 554:
					Var0 = {-1448.323f, -3765.571f, 11.938f};
					Var0.f_3 = {0f, 0f, 161.54f};
					break;
				
				case 555:
					Var0 = {-1447.279f, -3765.672f, 10.90751f};
					break;
				
				case 556:
					Var0 = {-1448.415f, -3765.298f, 12.65751f};
					break;
				
				case 593:
					Var0 = {-1415.715f, -3771.379f, 4.882401f};
					break;
				
				case 594:
					Var0 = {-1416.696f, -3771.028f, 6.632306f};
					break;
				
				case 595:
					Var0 = {-1504.859f, -3746.824f, 6.820841f};
					break;
				
				case 596:
					Var0 = {-1504.818f, -3747.812f, 8.310176f};
					break;
				
				case 118:
					Var0 = {-1416.474f, -3771.997f, 5.5693f};
					break;
				
				case 117:
					Var0 = {-1448.08f, -3765.959f, 12.281f};
					break;
				
				case 597:
					Var0 = {-1504.292f, 3747.308f, 7.03f};
					break;
				
				case 438:
					Var0 = {-1482.661f, -3753.946f, 9.1149f};
					Var0.f_3 = {0f, 0f, 90.67f};
					break;
				
				case 439:
					Var0 = {-1482.428f, -3753.661f, -9.0072f};
					Var0.f_3 = {0f, 0f, 136.08f};
					break;
				
				case 440:
					Var0 = {-1482.195f, -3752.423f, 8.9881f};
					Var0.f_3 = {0f, 0f, -109.08f};
					break;
				
				case 441:
					Var0 = {-1480.779f, -3753.358f, 7.9805f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 442:
					Var0 = {-1480.385f, -3752.208f, 9.9805f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 443:
					Var0 = {-1482.369f, -3750.713f, 9.797f};
					Var0.f_3 = {0f, 0f, 160.92f};
					break;
				
				case 451:
					Var0 = {-1412.098f, -3776.824f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 452:
					Var0 = {-1410.334f, -3776.322f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 453:
					Var0 = {-1410.334f, -3776.322f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 454:
					Var0 = {-1409.817f, -3774.685f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 455:
					Var0 = {-1409.817f, -3774.685f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 456:
					Var0 = {-1411.213f, -3773.381f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 457:
					Var0 = {-1412.801f, -3777.227f, 4.6097f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 458:
					Var0 = {-1412.741f, -3773.397f, 4.6097f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 459:
					Var0 = {-1411.074f, -3776.781f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 460:
					Var0 = {-1411.074f, -3776.781f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 461:
					Var0 = {-1409.814f, -3775.525f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 462:
					Var0 = {-1409.814f, -3775.525f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 463:
					Var0 = {-1410.314f, -3773.913f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 464:
					Var0 = {-1410.314f, -3773.913f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 465:
					Var0 = {-1413.634f, -3776.301f, 6.3597f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 466:
					Var0 = {-1411.531f, -3773.027f, 6.3597f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 467:
					Var0 = {-1473.431f, -3755.282f, 11.7769f};
					Var0.f_3 = {0f, 0f, 73.6618f};
					break;
				
				case 468:
					Var0 = {-1462.827f, -3757.944f, 7.9712f};
					Var0.f_3 = {0f, 0f, -116.3799f};
					break;
				
				case 469:
					Var0 = {-1475.21f, -3761.727f, 4.8823f};
					Var0.f_3 = {0f, 0f, -68.2425f};
					break;
				
				case 476:
					Var0 = {-1464.017f, -3755.137f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 483:
					Var0 = {-1452.078f, -3762.095f, 5.5102f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 484:
					Var0 = {-1477.694f, -3753.838f, 10.7213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 485:
					Var0 = {-1411.949f, -3777.132f, 4.595f};
					Var0.f_3 = {0f, 0f, -12.96f};
					break;
				
				case 599:
					Var0 = {-1411.802f, -3777.198f, 4.593f};
					Var0.f_3 = {0f, 0f, -10.8f};
					break;
				
				case 605:
					Var0 = {-1411.802f, -3777.198f, 4.593f};
					Var0.f_3 = {0f, 0f, -10.8f};
					break;
				
				case 486:
					Var0 = {-1410.77f, -3776.988f, 4.595f};
					Var0.f_3 = {0f, 0f, 5.4f};
					break;
				
				case 600:
					Var0 = {-1410.848f, -3777.035f, 4.593f};
					Var0.f_3 = {0f, 0f, 23.4f};
					break;
				
				case 606:
					Var0 = {-1410.848f, -3777.035f, 4.593f};
					Var0.f_3 = {0f, 0f, 23.4f};
					break;
				
				case 487:
					Var0 = {-1410.151f, -3776.356f, 4.595f};
					Var0.f_3 = {0f, 0f, 57.6f};
					break;
				
				case 601:
				case 607:
					Var0 = {-1410.062f, -3776.337f, 4.593f};
					Var0.f_3 = {0f, 0f, 49.68f};
					break;
				
				case 488:
					Var0 = {-1409.828f, -3775.41f, 4.595f};
					Var0.f_3 = {0f, 0f, 82.8f};
					break;
				
				case 602:
				case 608:
					Var0 = {-1409.749f, -3775.25f, 4.593f};
					Var0.f_3 = {0f, 0f, 77.76f};
					break;
				
				case 489:
					Var0 = {-1410.04f, -3774.39f, 4.595f};
					Var0.f_3 = {0f, 0f, 114.12f};
					break;
				
				case 603:
				case 609:
					Var0 = {-1409.985f, -3774.344f, 4.593f};
					Var0.f_3 = {0f, 0f, 110.16f};
					break;
				
				case 490:
					Var0 = {-1410.756f, -3773.671f, 4.595f};
					Var0.f_3 = {0f, 0f, 147.24f};
					break;
				
				case 604:
				case 610:
					Var0 = {-1410.734f, -3773.636f, 4.593f};
					Var0.f_3 = {0f, 0f, 147.24f};
					break;
				
				case 491:
					Var0 = {-1413.856f, -3774.906f, 4.565f};
					Var0.f_3 = {0f, 0f, -3.6f};
					break;
				
				case 492:
					Var0 = {-1413.922f, -3775.091f, 4.568f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 545:
					Var0 = {-1422.092f, -3771.913f, 8.99f};
					Var0.f_3 = {0f, 0f, -105.48f};
					break;
				
				case 543:
					Var0 = {-1421.924f, -3771.311f, 7.980618f};
					break;
				
				case 544:
					Var0 = {-1422.29f, -3772.494f, 9.730741f};
					break;
				
				case 493:
					Var0 = {-1487.771f, -3755.084f, 4.8841f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 494:
					Var0 = {-1473.982f, -3748.51f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 495:
					Var0 = {-1471.58f, -3751.941f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 496:
					Var0 = {-1458.156f, -3756.48f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 497:
					Var0 = {-1457.04f, -3760.4f, 4.7f};
					Var0.f_3 = {2f, -0.7f, 165.7f};
					break;
				
				case 498:
					Var0 = {-1457.855f, -3762.939f, 5.3f};
					Var0.f_3 = {0f, 0f, 160.625f};
					break;
				
				case 499:
					Var0 = {-1460.637f, -3761.931f, 5.3f};
					Var0.f_3 = {0f, 0f, 162.494f};
					break;
				
				case 503:
					Var0 = {-1470.853f, -3756.249f, 14.9899f};
					break;
				
				case 516:
					Var0 = {-1458.544f, -3759.33f, 10.84487f};
					break;
				
				case 517:
					Var0 = {-1458.574f, -3757.84f, 13.21987f};
					break;
				
				case 583:
					Var0 = {-1460.078f, -3761.072f, 10.84484f};
					break;
				
				case 584:
					Var0 = {-1459.093f, -3758.036f, 13.15734f};
					break;
				
				case 518:
					Var0 = {-1464.525f, -3756.986f, 10.72609f};
					break;
				
				case 519:
					Var0 = {-1465.161f, -3759.006f, 13.16036f};
					break;
				
				case 520:
					Var0 = {-1467.205f, -3756.822f, 11.7822f};
					Var0.f_3 = {0f, 0f, 72.5473f};
					break;
				
				case 521:
					Var0 = {-1458.401f, -3760.269f, 10.9074f};
					Var0.f_3 = {0f, 0f, 250f};
					break;
				
				case 522:
					Var0 = {-1458.855f, -3757.521f, 12.21145f};
					Var0.f_3 = {0.68509f, -0.496208f, 163.4133f};
					break;
				
				case 523:
					Var0 = {-1459.906f, -3760.123f, 10.925f};
					Var0.f_3 = {0f, 0f, 71.73f};
					break;
				
				case 524:
					Var0 = {-1458.855f, -3757.521f, 12.21145f};
					Var0.f_3 = {0.68509f, -0.496208f, 163.4133f};
					break;
				
				case 525:
					Var0 = {-1460.229f, -3760.121f, 10.925f};
					Var0.f_3 = {0f, 0f, 71.73f};
					break;
				
				case 526:
					Var0 = {-1460.354f, -3760.894f, 12.09f};
					Var0.f_3 = {0f, 0f, 72.25f};
					break;
				
				case 527:
					Var0 = {-1411.424f, -3775.375f, 4.7548f};
					Var0.f_3 = {-89.5007f, 0.3909f, -105.0659f};
					break;
				
				case 561:
					Var0 = {-1424.229f, -3768.595f, 7.3809f};
					Var0.f_3 = {-28.298f, -0.2891f, -177.0236f};
					break;
				
				case 598:
					Var0 = {-1462.959f, -3758.295f, 25.7771f};
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_325(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 83:
			switch (iParam0)
			{
				case 278:
					Var0 = {-780.3696f, 342.9996f, 186.1041f};
					break;
				
				case 279:
					Var0 = {-790.949f, 343.2666f, 190.1135f};
					break;
				
				case 280:
					Var0 = {-801.4162f, 325.805f, 205.0629f};
					break;
				
				case 281:
					Var0 = {-801.5137f, 342.8037f, 209.2183f};
					break;
				
				case 282:
					Var0 = {-796.1956f, 440.2408f, 79.64348f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 283:
					Var0 = {-862.6429f, 353.2339f, 74.35394f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 0:
					Var0 = {-795.23f, 326.754f, 207.017f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 1:
					Var0 = {-780.4277f, 318.1914f, 186.9136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-783.2335f, 318.1667f, 189.6636f};
					Var0.f_3 = {0f, 0f, 180.0391f};
					break;
				
				case 3:
					Var0 = {-773.2f, 322.8f, 195.9f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {-793.4061f, 317.2896f, 185.7757f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-793.4227f, 343.811f, 190.2164f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {-798.6541f, 325.8727f, 189.2506f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-798.7937f, 340.662f, 194.0852f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-782.0123f, 319.0174f, 186.9539f};
					Var0.f_3 = {0f, 0f, 4.405f};
					break;
				
				case 7:
					Var0 = {-797.852f, 325.335f, 186.321f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 8:
					Var0 = {-794.578f, 321.323f, 188.731f};
					Var0.f_3 = {-7.632f, 0f, -211.063f};
					break;
				
				case 141:
					Var0 = {-800.012f, 325.846f, 187.895f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 142:
					Var0 = {-799.987f, 325.496f, 189.045f};
					Var0.f_3 = {180f, -180f, -90f};
					break;
				
				case 143:
					Var0 = {-799.987f, 323.601f, 189.04f};
					Var0.f_3 = {180f, -180f, -90f};
					break;
				
				case 144:
					Var0 = {-797.079f, 325.817f, 187.844f};
					Var0.f_3 = {0.1322f, 0.0536f, -269.934f};
					break;
				
				case 158:
					Var0 = {-797.944f, 325.029f, 187.849f};
					Var0.f_3 = {-2.3423f, 0.0392f, -267.756f};
					break;
				
				case 145:
					Var0 = {-797.073f, 324.826f, 187.845f};
					Var0.f_3 = {-0.2118f, 0.062f, -268.343f};
					break;
				
				case 146:
					Var0 = {-797.079f, 325.817f, 187.844f};
					Var0.f_3 = {0.994f, 0.0536f, 83.2112f};
					break;
				
				case 147:
					Var0 = {-798.294f, 327.416f, 188.283f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 148:
					Var0 = {-798.786f, 327.386f, 187.26f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 153:
					Var0 = {-799.622f, 325.8f, 186.317f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 154:
					Var0 = {-798.042f, 325.939f, 188.428f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 155:
					Var0 = {-798.042f, 325.938f, 187.483f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 157:
					Var0 = {-797.421f, 325.817f, 187.845f};
					Var0.f_3 = {-7.145f, 0.0536f, -41.7083f};
					break;
				
				case 234:
					Var0 = {-798.4081f, 327.0646f, 188.498f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 149:
					Var0 = {-798.0435f, 322.5277f, 186.3132f};
					Var0.f_3 = {0f, 0f, 1.7263f};
					break;
				
				case 150:
					Var0 = {-795.0529f, 323.3902f, 186.3132f};
					Var0.f_3 = {0f, 0f, 53.5498f};
					break;
				
				case 151:
					Var0 = {-795.3783f, 326.7546f, 186.3132f};
					Var0.f_3 = {0f, 0f, 89.7247f};
					break;
				
				case 152:
					Var0 = {-797.6187f, 327.2416f, 186.3132f};
					Var0.f_3 = {0f, 0f, 107.3385f};
					break;
				
				case 169:
					Var0 = {-778.2188f, 332.2201f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-776.9868f, 332.502f, 208.3432f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 173:
					Var0 = {-794.218f, 323.43f, 186.316f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 174:
					Var0 = {-797.392f, 327.146f, 186.325f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 175:
					Var0 = {-797.282f, 327.806f, 186.325f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 176:
					Var0 = {-797.172f, 328.466f, 186.325f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 177:
					Var0 = {-797.062f, 329.126f, 186.325f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 178:
					Var0 = {-785.307f, 324.03f, 186.316f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 179:
					Var0 = {-788.996f, 326.935f, 187.055f};
					Var0.f_3 = {9.1439f, 0f, -226.355f};
					break;
				
				case 180:
					Var0 = {-788.295f, 326.2f, 187.055f};
					Var0.f_3 = {9.1439f, 0f, -226.355f};
					break;
				
				case 201:
					Var0 = {-781.1226f, 318.9703f, 188.2957f};
					Var0.f_3 = {-3.5408f, 0.0466f, 166.3594f};
					break;
				
				case 235:
					Var0 = {-787.896f, 347.644f, 186.115f};
					Var0.f_3 = {-0.3015f, 0f, -197.848f};
					break;
				
				case 261:
					Var0 = {-798.174f, 324.572f, 187.308f};
					Var0.f_3 = {0f, 0f, 57f};
					break;
				
				case 262:
					Var0 = {-798.174f, 324.572f, 187.308f};
					Var0.f_3 = {0f, 0f, 57f};
					break;
				
				case 263:
					Var0 = {-786.274f, 343.352f, 187.139f};
					Var0.f_3 = {0f, 0f, -40.68f};
					break;
				
				case 264:
					Var0 = {-786.274f, 343.352f, 187.139f};
					Var0.f_3 = {0f, 0f, -40.68f};
					break;
				
				case 265:
					Var0 = {-786.274f, 343.352f, 187.139f};
					Var0.f_3 = {0f, 0f, -40.68f};
					break;
				
				case 266:
					Var0 = {-786.274f, 343.352f, 187.139f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 267:
					Var0 = {-785.961f, 338.227f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 268:
					Var0 = {-785.961f, 338.227f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 269:
					Var0 = {-785.961f, 338.227f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 270:
					Var0 = {-785.961f, 338.227f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 312:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 313:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 314:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 315:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 316:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 317:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 318:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 319:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 320:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 321:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 322:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 323:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 324:
					Var0 = {-785.522f, 327.189f, 187.361f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 325:
					Var0 = {-785.522f, 327.189f, 187.361f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 326:
					Var0 = {-785.522f, 327.189f, 187.361f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 327:
					Var0 = {-785.449f, 327.827f, 187.326f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 328:
					Var0 = {-785.449f, 327.827f, 187.326f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 329:
					Var0 = {-785.449f, 327.827f, 187.326f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 271:
					Var0 = {-786.042f, 337.4311f, 186.1135f};
					Var0.f_3 = {0f, 0f, -97.3161f};
					break;
				
				case 272:
					Var0 = {-786.0505f, 338.8861f, 186.1135f};
					Var0.f_3 = {0f, 0f, -89.4383f};
					break;
				
				case 273:
					Var0 = {-785.3838f, 339.5632f, 186.1135f};
					Var0.f_3 = {0f, 0f, 7.7813f};
					break;
				
				case 274:
					Var0 = {-783.6962f, 339.5856f, 186.1135f};
					Var0.f_3 = {0f, 0f, 27.9575f};
					break;
				
				case 275:
					Var0 = {-787.7805f, 334.9232f, 186.1134f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 304:
					Var0 = {-789.041f, 335.29f, 180.108f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 305:
					Var0 = {-782.449f, 317.53f, 188.062f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 308:
					Var0 = {-787.783f, 322.956f, 186.316f};
					Var0.f_3 = {0f, 0f, -156.402f};
					break;
				
				case 309:
					Var0 = {-786.884f, 318.407f, 186.316f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 14:
					Var0 = {-780.405f, 338.4678f, 186.1134f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 557:
					Var0 = {-780.4701f, 338.4247f, 187.5084f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 558:
					Var0 = {-780.3515f, 338.4704f, 186.1632f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 559:
					Var0 = {-780.3515f, 338.4704f, 186.1134f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 15:
					Var0 = {-780.5159f, 317.8105f, 189.9103f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {-787.512f, 321.1864f, 186.3132f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 343.1089f;
					break;
				
				case 10:
					Var0 = {-789.3117f, 341.6458f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 239.3656f;
					break;
				
				case 11:
					Var0 = {-784.5588f, 325.9694f, 186.3132f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 52.8327f;
					break;
				
				case 12:
					Var0 = {-787.5304f, 335.4393f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 290.6938f;
					break;
				
				case 13:
					Var0 = {-805.6618f, 332.3758f, 189.7133f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 175.5243f;
					break;
				
				case 16:
					Var0 = {-786.672f, 337.58f, 186.613f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {-786.3284f, 337.1518f, 186.15f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {-786.335f, 338.0908f, 187.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {-785.343f, 340.278f, 186.613f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {-785.9196f, 339.7838f, 186.15f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {-784.7827f, 339.8064f, 187.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {-784.286f, 340.278f, 186.613f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {-783.6854f, 339.7922f, 186.15f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {-784.7827f, 339.8064f, 187.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-788.0222f, 340.1685f, 187.9267f};
					Var0.f_3 = {-7.239f, 0f, -102.9762f};
					break;
				
				case 35:
					Var0 = {-782.9066f, 338.4675f, 187.2776f};
					Var0.f_3 = {1.9639f, 0f, -89.4888f};
					break;
				
				case 36:
					Var0 = {-782.9214f, 338.467f, 187.6588f};
					Var0.f_3 = {2.0141f, -0.008f, -89.539f};
					break;
				
				case 560:
					Var0 = {-782.9009f, 337.7527f, 187.2779f};
					Var0.f_3 = {2.0696f, -0.0281f, -89.4518f};
					break;
				
				case 37:
					Var0 = {-795.085f, 333.845f, 205.221f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 38:
					Var0 = {-781.9872f, 343.5015f, 188.2368f};
					Var0.f_3 = {-12.4175f, 0f, 153.0748f};
					break;
				
				case 39:
					Var0 = {-788.0585f, 343.5015f, 188.2368f};
					Var0.f_3 = {-12.4175f, 0f, -174.9393f};
					break;
				
				case 120:
					Var0 = {-795.7497f, 339.9315f, 191.1167f};
					Var0.f_3 = {-3.984f, 0f, 149.8896f};
					break;
				
				case 121:
					Var0 = {-799.9801f, 340.0232f, 191.1167f};
					Var0.f_3 = {-3.984f, 0f, -148.3764f};
					break;
				
				case 125:
					Var0 = {-777.5101f, 328.2689f, 208.0708f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 40:
					Var0 = {-797.7752f, 327.1325f, 189.7135f};
					Var0.f_3 = {0f, 0f, 357.0931f};
					break;
				
				case 41:
					Var0 = {-792.9531f, 341.6f, 206.2202f};
					Var0.f_3 = {0f, 0f, 119.72f};
					break;
				
				case 126:
					Var0 = {-786.1208f, 337.9957f, 186.1135f};
					break;
				
				case 127:
					Var0 = {-786.1259f, 339.1616f, 187.8635f};
					break;
				
				case 42:
					Var0 = {-785.625f, 338.649f, 186.103f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 46:
					Var0 = {-795.8572f, 336.1213f, 190.7138f};
					Var0.f_3 = {0f, 0f, 125.23f};
					break;
				
				case 47:
					Var0 = {-797.682f, 335.683f, 190.155f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 48:
					Var0 = {-616.5919f, 65.3481f, 101.8033f};
					Var0.f_3 = {0.9407f, 0.0521f, 147.8146f};
					break;
				
				case 49:
					Var0 = {-619.5043f, 62.4537f, 102.0873f};
					Var0.f_3 = {-1.4768f, -0.0422f, -101.6693f};
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = {-796.5303f, 334.3555f, 189.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {-796.5093f, 336.8433f, 191.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 612:
					Var0 = {-799.787f, 336.563f, 190.75f};
					Var0.f_3 = {0f, 0f, -133.2f};
					break;
				
				case 615:
					Var0 = {-799.1369f, 334.6384f, 189.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-799.1272f, 336.8023f, 191.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-804.0815f, 335.5993f, 190.8021f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 57:
					Var0 = {-804.216f, 335.065f, 189.952f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 64:
					Var0 = {-803.8332f, 335.6036f, 192.1505f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-803.7757f, 335.7051f, 192.0836f};
					Var0.f_3 = {-64.3203f, 0f, 90.0509f};
					break;
				
				case 58:
					Var0 = {-787.2075f, 330.4225f, 201.8932f};
					Var0.f_3 = {0.0309f, 0.0078f, 94.294f};
					break;
				
				case 59:
					Var0 = {-804.6812f, 335.9174f, 191.8717f};
					Var0.f_3 = {3.6086f, 0f, -100.4403f};
					break;
				
				case 60:
					Var0 = {-805.2352f, 335.686f, 191.5975f};
					Var0.f_3 = {-7.8804f, 0f, -90f};
					break;
				
				case 61:
					Var0 = {-805.226f, 335.5853f, 192.2601f};
					Var0.f_3 = {-18.726f, 0.0564f, -65.9443f};
					break;
				
				case 62:
					Var0 = {-806.9933f, 331.4514f, 192.5549f};
					Var0.f_3 = {-24.3193f, 0f, -37.258f};
					break;
				
				case 63:
					Var0 = {-806.9933f, 331.4514f, 192.5549f};
					Var0.f_3 = {-24.3193f, 0f, -37.258f};
					break;
				
				case 66:
					Var0 = {-805.214f, 335.7104f, 189.7554f};
					Var0.f_3 = {0f, 0f, 1f};
					break;
				
				case 67:
					Var0 = {-803.511f, 335.6873f, 192.2554f};
					break;
				
				case 110:
					Var0 = {-804.4796f, 334.4111f, 189.7136f};
					Var0.f_3 = {0f, 0f, 164.7228f};
					break;
				
				case 68:
					Var0 = {-803.2f, 333.1f, 189.8f};
					break;
				
				case 109:
					Var0 = {-803.209f, 332.229f, 190.863f};
					break;
				
				case 69:
					Var0 = {-783.0114f, 336.0096f, 186.1135f};
					Var0.f_3 = {0f, 0f, 318.1693f};
					break;
				
				case 70:
					Var0 = {-781.938f, 335.66f, 186.65f};
					Var0.f_3 = {0f, 0f, 42.25f};
					break;
				
				case 71:
					Var0 = {-787.1086f, 335.7561f, 186.1136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {-781.3259f, 337.3147f, 188.6136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {-782.9689f, 336.8207f, 187.1f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 74:
					Var0 = {-782.2608f, 336.8359f, 187.1499f};
					Var0.f_3 = {0f, 0f, 131.8715f};
					break;
				
				case 75:
					Var0 = {-782.9863f, 336.1273f, 187.1136f};
					Var0.f_3 = {0f, 0f, 309.98f};
					break;
				
				case 76:
					Var0 = {-782.2608f, 336.8359f, 187.1499f};
					Var0.f_3 = {0f, 0f, 318.1693f};
					break;
				
				case 89:
					Var0 = {-792.8026f, 330.2704f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0.11f};
					break;
				
				case 91:
					Var0 = {-791.3608f, 331.6151f, 206.7155f};
					Var0.f_3 = {-6.1061f, 0f, 124.716f};
					break;
				
				case 90:
					Var0 = {-784.825f, 327.887f, 186.314f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 92:
					Var0 = {-791.1231f, 329.0256f, 207.0468f};
					Var0.f_3 = {-10.5496f, 0f, 38.2733f};
					break;
				
				case 135:
					Var0 = {-784.7092f, 327.2737f, 186.3132f};
					break;
				
				case 136:
					Var0 = {-784.7196f, 328.3914f, 188.1346f};
					break;
				
				case 77:
					Var0 = {-795.4578f, 337.2369f, 205.2183f};
					Var0.f_3 = {0f, 0f, 82.6775f};
					break;
				
				case 79:
					Var0 = {-796.8416f, 336.5425f, 206.3782f};
					Var0.f_3 = {4.1239f, 0.032f, -35.7362f};
					break;
				
				case 80:
					Var0 = {-794.1184f, 339.0253f, 207.2513f};
					Var0.f_3 = {-14.3736f, 0f, 132.7127f};
					break;
				
				case 81:
					Var0 = {-796.8088f, 337.2715f, 207.0081f};
					break;
				
				case 82:
					Var0 = {-794.73f, 337.4924f, 205.2183f};
					break;
				
				case 78:
					Var0 = {Vector(206.15f, 337.263f, -796.115f) + Vector(0.0084f, -0.1213f, -0.0385f) + Vector(-0.0001f, 0.0008f, 0.0245f)};
					Var0.f_3 = {Vector(84.6f, 0f, 0f) + Vector(5.64f, 0f, 0f)};
					break;
				
				case 83:
					Var0 = {-793.3814f, 333.4903f, 205.2183f};
					Var0.f_3 = {0f, 0f, 182.6354f};
					break;
				
				case 85:
					Var0 = {-792.4017f, 332.1834f, 206.589f};
					Var0.f_3 = {-0.4759f, 0f, 56.2407f};
					break;
				
				case 88:
					Var0 = {-792.6917f, 334.5816f, 206.9306f};
					Var0.f_3 = {-15.2511f, -0.1442f, 161.552f};
					break;
				
				case 84:
					Var0 = {-784.798f, 330.004f, 186.315f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 86:
					Var0 = {-784.6601f, 330.8065f, 186.3132f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {-784.6879f, 329.7155f, 188.1622f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 93:
					Var0 = {-782.4497f, 317.5156f, 188.0627f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 94:
					Var0 = {-781.52f, 316.153f, 186.9748f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 95:
					Var0 = {-781.506f, 318.387f, 187.9748f};
					Var0.f_3 = {0f, 0f, 178.664f};
					break;
				
				case 96:
					Var0 = {-781.4541f, 317.1049f, 187.9748f};
					Var0.f_3 = {0f, 0f, 2.74f};
					break;
				
				case 97:
					Var0 = {-792.0729f, 319.6482f, 187.9748f};
					Var0.f_3 = {0f, 0f, -132.94f};
					break;
				
				case 98:
					Var0 = {-781.0619f, 318.7636f, 187.9748f};
					Var0.f_3 = {0f, 0f, 141.24f};
					break;
				
				case 99:
					Var0 = {-782.45f, 317.52f, 188.03f};
					Var0.f_3 = {0.18f, 0f, 180f};
					break;
				
				case 100:
					Var0 = {-781.4619f, 318.6847f, 187.9561f};
					Var0.f_3 = {0f, 0f, -177.26f};
					break;
				
				case 101:
					Var0 = {-781.0864f, 316.1974f, 188.3137f};
					Var0.f_3 = {3.2417f, 0f, 13.251f};
					break;
				
				case 181:
					Var0 = {-777.695f, 332.054f, 207.34f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 106:
					Var0 = {-796.3882f, 336.8372f, 202.5976f};
					Var0.f_3 = {-22.7361f, 0f, -129.0221f};
					break;
				
				case 107:
					Var0 = {-801.9172f, 326.3802f, 207.4878f};
					Var0.f_3 = {-35.2381f, 0f, -111.7465f};
					break;
				
				case 108:
					Var0 = {-781.9736f, 316.5539f, 187.9136f};
					Var0.f_3 = {90f, 0f, 0f};
					break;
				
				case 117:
					Var0 = {-794.9332f, 335.1039f, 201.5308f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {-800.421f, 325.5437f, 206.1822f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {-784.6674f, 316.7436f, 186.9136f};
					Var0.f_3 = {0f, 0f, 280.1147f};
					break;
				
				case 122:
					Var0 = {-782.0186f, 321.1352f, 186.9539f};
					Var0.f_3 = {0f, 0f, 82.882f};
					break;
				
				case 123:
					Var0 = {-788.7533f, 325.9305f, 186.3132f};
					Var0.f_3 = {0f, 0f, 353.52f};
					break;
				
				case 124:
					Var0 = {-785.7533f, 325.9305f, 186.3132f};
					Var0.f_3 = {0f, 0f, 353.52f};
					break;
				
				case 137:
					Var0 = {-787.9853f, 324.4699f, 186.3132f};
					break;
				
				case 139:
					Var0 = {-794.9999f, 334.6179f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 140:
					Var0 = {-797.3075f, 328.841f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 172:
					Var0 = {-794.003f, 324.638f, 187.485f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 187:
					Var0 = {-793.942f, 324.588f, 186.315f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 188:
					Var0 = {-786.312f, 325.696f, 187.795f};
					Var0.f_3 = {-0.7f, 0f, -205.1f};
					break;
				
				case 189:
					Var0 = {-786.412f, 325.796f, 187.795f};
					Var0.f_3 = {0.1f, 0f, -232.3f};
					break;
				
				case 190:
					Var0 = {-796.684f, 322.784f, 187.754f};
					Var0.f_3 = {-3.1551f, 0f, -61.2858f};
					break;
				
				case 191:
					Var0 = {-796.733f, 322.872f, 187.754f};
					Var0.f_3 = {-3.1551f, 0f, -61.2858f};
					break;
				
				case 192:
					Var0 = {-795.412f, 327.796f, 187.795f};
					Var0.f_3 = {1.3f, 0f, -250.8f};
					break;
				
				case 193:
					Var0 = {-795.242f, 326.996f, 187.795f};
					Var0.f_3 = {1.3f, 0f, -264.596f};
					break;
				
				case 194:
					Var0 = {-781.8395f, 317.5467f, 186.9137f};
					Var0.f_3 = {0f, 0f, 178.1117f};
					break;
				
				case 195:
					Var0 = {-793.9963f, 323.9361f, 186.3132f};
					Var0.f_3 = {0f, 0f, 87.3152f};
					break;
				
				case 196:
					Var0 = {-796.0561f, 324.0782f, 186.3132f};
					Var0.f_3 = {0f, 0f, 54.5574f};
					break;
				
				case 197:
					Var0 = {-796.0561f, 324.0782f, 186.3132f};
					Var0.f_3 = {0f, 0f, 87.3152f};
					break;
				
				case 198:
					Var0 = {-798.4224f, 325.4083f, 186.3132f};
					Var0.f_3 = {0f, 0f, 87.3152f};
					break;
				
				case 199:
					Var0 = {-792.4963f, 323.9361f, 186.3132f};
					Var0.f_3 = {0f, 0f, 87.3152f};
					break;
				
				case 200:
					Var0 = {-800.0872f, 325.8634f, 186.3132f};
					Var0.f_3 = {0f, 0f, 89.2238f};
					break;
				
				case 284:
					Var0 = {-797.997f, 323.205f, 187.717f};
					Var0.f_3 = {-3.027f, 0f, -34.1061f};
					break;
				
				case 285:
					Var0 = {-798.481f, 323.885f, 187.702f};
					Var0.f_3 = {-2.4917f, 0f, -43.7623f};
					break;
				
				case 286:
					Var0 = {-794.985f, 328.244f, 188.135f};
					Var0.f_3 = {-2.6168f, 0f, -242.364f};
					break;
				
				case 287:
					Var0 = {-795.018f, 327.653f, 188.121f};
					Var0.f_3 = {-2.7465f, 0f, -254.215f};
					break;
				
				case 202:
					Var0 = {-781.9592f, 319.4946f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 203:
					Var0 = {-781.2353f, 319.1119f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 204:
					Var0 = {-782.3419f, 318.7707f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 205:
					Var0 = {-782.6831f, 319.4773f, 186.9185f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 206:
					Var0 = {-781.5765f, 320.4185f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 60.9243f;
					break;
				
				case 207:
					Var0 = {-782.518f, 321.788f, 186.914f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 84.9243f;
					break;
				
				case 208:
					Var0 = {-782.2658f, 320.3534f, 186.9172f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 66.9243f;
					break;
				
				case 209:
					Var0 = {-782.7004f, 320.9011f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 71.9243f;
					break;
				
				case 210:
					Var0 = {-781.1526f, 320.0358f, 186.915f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 75.9243f;
					break;
				
				case 211:
					Var0 = {-781.8115f, 321.6292f, 186.915f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 77.9243f;
					break;
				
				case 212:
					Var0 = {-787.7246f, 319.8468f, 186.314f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 0f;
					break;
				
				case 213:
					Var0 = {-786.407f, 319.6599f, 186.314f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 0f;
					break;
				
				case 214:
					Var0 = {-781.1938f, 321.3423f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 84.9243f;
					break;
				
				case 215:
					Var0 = {-787.1768f, 321.6815f, 186.314f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 0f;
					break;
				
				case 216:
					Var0 = {-788.0723f, 320.8122f, 186.314f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 0f;
					break;
				
				case 217:
					Var0 = {-786.4416f, 320.9077f, 186.314f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 0f;
					break;
			}
			switch (iParam0)
			{
				case 435:
					Var0 = {-789.0784f, 333.4356f, 186.3136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 436:
					Var0 = {-789.0784f, 333.4356f, 186.3136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 437:
					Var0 = {-782.36f, 333.2263f, 186.3132f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 470:
					Var0 = {-798.2663f, 330.7226f, 189.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 477:
					Var0 = {-799.2601f, 338.592f, 189.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 445:
					Var0 = {-789.5599f, 325.2023f, 186.3182f};
					Var0.f_3 = {7.65f, 0f, 0f};
					break;
				
				case 446:
					Var0 = {-789.5522f, 332.7971f, 189.0635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 447:
					Var0 = {-791.6868f, 337.492f, 186.1185f};
					Var0.f_3 = {3.65f, 0f, 0f};
					break;
				
				case 448:
					Var0 = {-791.7123f, 332.791f, 187.8135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 449:
					Var0 = {-786.5101f, 334.9225f, 186.1358f};
					Var0.f_3 = {2.75f, 0f, 0f};
					break;
				
				case 450:
					Var0 = {-780.6341f, 334.9514f, 189.0138f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 471:
					Var0 = {-799.9768f, 331.2536f, 189.7135f};
					Var0.f_3 = {1.5f, 0f, 0f};
					break;
				
				case 472:
					Var0 = {-799.8502f, 326.0806f, 192.4562f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 478:
					Var0 = {-800.4473f, 336.3873f, 189.7135f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 479:
					Var0 = {-800.4662f, 340.076f, 192.2135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 504:
					Var0 = {-782.8615f, 341.9581f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 505:
					Var0 = {-780.2718f, 342.0182f, 186.1208f};
					Var0.f_3 = {4.25f, 0f, 0f};
					break;
				
				case 506:
					Var0 = {-782.438f, 342.0197f, 188.8635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 507:
					Var0 = {-804.3848f, 333.8651f, 189.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 508:
					Var0 = {-805.4896f, 335.0002f, 189.7155f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 509:
					Var0 = {-805.471f, 333.3125f, 191.9633f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 510:
					Var0 = {-788.6317f, 320.9997f, 186.3132f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 511:
					Var0 = {-789.5604f, 319.666f, 186.3132f};
					Var0.f_3 = {1.57f, 0f, 0f};
					break;
				
				case 512:
					Var0 = {-788.0121f, 319.6924f, 188.5632f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 513:
					Var0 = {-792.0585f, 341.4463f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 514:
					Var0 = {-792.0259f, 340.3044f, 186.1136f};
					Var0.f_3 = {2.65f, 0f, 0f};
					break;
				
				case 515:
					Var0 = {-792.1705f, 338.4408f, 189.8998f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 528:
					Var0 = {-788.878f, 338.0769f, 186.1136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 529:
					Var0 = {-789.9435f, 337.4386f, 186.1135f};
					Var0.f_3 = {1.25f, 0f, 0f};
					break;
				
				case 530:
					Var0 = {-789.9385f, 338.612f, 188.1136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 531:
					Var0 = {-782.5031f, 338.2492f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 532:
					Var0 = {-785.4359f, 336.6565f, 186.1135f};
					Var0.f_3 = {4.75f, 0f, 0f};
					break;
				
				case 533:
					Var0 = {-785.3582f, 341.1275f, 188.3635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 534:
					Var0 = {-781.649f, 320.3884f, 186.9175f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 535:
					Var0 = {-780.7493f, 320.9498f, 186.9157f};
					Var0.f_3 = {1.5f, 0f, 0f};
					break;
				
				case 536:
					Var0 = {-780.7726f, 318.901f, 189.1642f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 537:
					Var0 = {-791.6885f, 341.563f, 186.1535f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 538:
					Var0 = {-793.2805f, 340.489f, 186.1136f};
					Var0.f_3 = {1.95f, 0f, 0f};
					break;
				
				case 539:
					Var0 = {-793.2911f, 343.794f, 188.3636f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 540:
					Var0 = {-797.9947f, 327.1148f, 189.7136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 541:
					Var0 = {-796.0374f, 326.6479f, 189.7234f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 542:
					Var0 = {-797.2122f, 326.6525f, 192.4635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 547:
					Var0 = {-797.5703f, 338.8147f, 189.7159f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 548:
					Var0 = {-795.5723f, 336.2789f, 189.7159f};
					Var0.f_3 = {1.75f, 0f, 0f};
					break;
				
				case 549:
					Var0 = {-795.6097f, 340.2508f, 191.9636f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {-796.735f, 326.499f, 186.32f};
					Var0.f_3 = {0f, 0f, -224.456f};
					break;
				
				case 237:
					Var0 = {-795.664f, 327.014f, 186.32f};
					Var0.f_3 = {0f, 0f, -211.657f};
					break;
				
				case 238:
					Var0 = {-795.584f, 326.146f, 186.32f};
					Var0.f_3 = {0f, 0f, -251.877f};
					break;
				
				case 239:
					Var0 = {-797.471f, 327.577f, 186.32f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 240:
					Var0 = {-798.102f, 324.236f, 187.882f};
					Var0.f_3 = {-2.8579f, 0f, -33.7881f};
					break;
				
				case 241:
					Var0 = {-795.653f, 326.818f, 186.325f};
					Var0.f_3 = {0f, 0f, 61.4979f};
					break;
				
				case 242:
					Var0 = {-795.318f, 327.555f, 186.325f};
					Var0.f_3 = {0f, 0f, -249.34f};
					break;
				
				case 243:
					Var0 = {-794.852f, 327.075f, 186.325f};
					Var0.f_3 = {0f, 0f, 83.8199f};
					break;
				
				case 244:
					Var0 = {-795.173f, 326.222f, 186.325f};
					Var0.f_3 = {0f, 0f, 67.3949f};
					break;
				
				case 245:
					Var0 = {-797.773f, 327.28f, 187.989f};
					Var0.f_3 = {-5.44662f, 0f, -87.9654f};
					break;
				
				case 246:
					Var0 = {-796.601f, 327.56f, 186.324f};
					Var0.f_3 = {0f, 0f, -186.657f};
					break;
				
				case 247:
					Var0 = {-795.899f, 327.478f, 186.32f};
					Var0.f_3 = {0f, 0f, -225.607f};
					break;
				
				case 248:
					Var0 = {-795.989f, 328.255f, 186.325f};
					Var0.f_3 = {0f, 0f, -217.412f};
					break;
				
				case 249:
					Var0 = {-796.868f, 328.027f, 186.324f};
					Var0.f_3 = {0f, 0f, -177.017f};
					break;
				
				case 250:
					Var0 = {-796.967f, 325.235f, 187.889f};
					Var0.f_3 = {-2.98413f, 0f, -6.62068f};
					break;
				
				case 251:
					Var0 = {-796.691f, 323.0321f, 186.316f};
					Var0.f_3 = {0f, 0f, -11.3392f};
					break;
				
				case 252:
					Var0 = {-796.287f, 322.2451f, 186.316f};
					Var0.f_3 = {0f, 0f, 3.3108f};
					break;
				
				case 253:
					Var0 = {-797.229f, 322.4801f, 186.316f};
					Var0.f_3 = {0f, 0f, -22.7142f};
					break;
				
				case 254:
					Var0 = {-797.604f, 322.9381f, 186.316f};
					Var0.f_3 = {0f, 0f, -34.6142f};
					break;
				
				case 255:
					Var0 = {-796.324f, 325.5321f, 187.742f};
					Var0.f_3 = {-0.2929f, 0f, -184.117f};
					break;
				
				case 256:
					Var0 = {-798.536f, 326.943f, 186.32f};
					Var0.f_3 = {0f, 0f, -199.908f};
					break;
				
				case 257:
					Var0 = {-797.799f, 327.812f, 186.32f};
					Var0.f_3 = {0f, 0f, -198.783f};
					break;
				
				case 258:
					Var0 = {-798.8f, 327.666f, 186.32f};
					Var0.f_3 = {0f, 0f, -184.134f};
					break;
				
				case 259:
					Var0 = {-797.741f, 327.17f, 186.32f};
					Var0.f_3 = {0f, 0f, -214.008f};
					break;
				
				case 260:
					Var0 = {-799.168f, 324.758f, 187.849f};
					Var0.f_3 = {-1.83503f, 0f, -11.7304f};
					break;
				
				case 307:
					Var0 = {-795.744f, 327.166f, 187.866f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 331:
					Var0 = {-795.744f, 327.166f, 187.866f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 332:
					Var0 = {-795.744f, 327.166f, 187.866f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 333:
					Var0 = {-797.114f, 318.666f, 187.183f};
					Var0.f_3 = {0f, 0f, -216f};
					break;
				
				case 334:
					Var0 = {-795.084f, 326.453f, 187.984f};
					Var0.f_3 = {0f, 0f, -107.85f};
					break;
				
				case 298:
					Var0 = {-793.858f, 341.4139f, 187.1133f};
					break;
				
				case 299:
					Var0 = {-784.331f, 330.2035f, 187.2646f};
					break;
				
				case 300:
					Var0 = {-790.502f, 323.522f, 186.316f};
					Var0.f_3 = {0f, 0f, 0.836098f};
					break;
				
				case 301:
					Var0 = {-789.585f, 324.198f, 186.316f};
					Var0.f_3 = {0f, 0f, 0.836098f};
					break;
				
				case 302:
					Var0 = {-791.426f, 323.905f, 186.316f};
					Var0.f_3 = {0f, 0f, 0.836098f};
					break;
				
				case 303:
					Var0 = {-789.62f, 322.646f, 186.316f};
					Var0.f_3 = {0f, 0f, 0.836098f};
					break;
				
				case 310:
				case 335:
				case 336:
					Var0 = {-787.8991f, 339.9203f, 187.1403f};
					Var0.f_3 = {1.0275f, 0f, -103.1806f};
					break;
				
				case 337:
				case 338:
				case 339:
					Var0 = {-787.0869f, 339.7301f, 187.1553f};
					Var0.f_3 = {1.0275f, 0f, -103.1806f};
					break;
				
				case 311:
					Var0 = {-788.0102f, 319.6611f, 186.5651f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 431:
					Var0 = {-790.1639f, 335.2293f, 187.1133f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 133:
					Var0 = {-793.5669f, 340.5959f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 134:
					Var0 = {-793.5555f, 341.7935f, 187.8635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 130:
					Var0 = {-793.39f, 341.565f, 186.114f};
					Var0.f_3 = {0f, 0f, -91f};
					break;
				
				case 433:
					Var0 = {-789.6328f, 334.3963f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 434:
					Var0 = {-789.6397f, 335.5693f, 187.8635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 432:
					Var0 = {-789.696f, 335.38f, 186.114f};
					Var0.f_3 = {0f, 0f, -91f};
					break;
				
				case 102:
					Var0 = {-793.5547f, 342.9295f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-793.5555f, 341.7935f, 187.8635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {-793.808f, 341.84f, 187.01f};
					Var0.f_3 = {0f, 0f, 88.51f};
					break;
				
				case 501:
					Var0 = {-789.6354f, 336.738f, 186.1136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 502:
					Var0 = {-789.6397f, 335.5693f, 187.8635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 500:
					Var0 = {-790.125f, 335.69f, 187.01f};
					Var0.f_3 = {0f, 0f, 88.51f};
					break;
				
				case 104:
					Var0 = {-800.4421f, 325.256f, 207.2709f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {-800.4426f, 326.6761f, 205.1558f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 183:
					Var0 = {-795.07f, 321.699f, 187.035f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 473:
					Var0 = {-796.497f, 331.5252f, 192.2901f};
					Var0.f_3 = {-34.9118f, 0f, 21.4059f};
					break;
				
				case 474:
					Var0 = {-789.592f, 334.359f, 188.7709f};
					Var0.f_3 = {-26.6941f, 0f, -139.8585f};
					break;
				
				case 475:
					Var0 = {-796.4861f, 322.8627f, 188.785f};
					Var0.f_3 = {-27.0831f, 0f, 3.9303f};
					break;
				
				case 169:
					Var0 = {-794.368f, 322.0654f, 186.3132f};
					break;
				
				case 170:
					Var0 = {-795.291f, 322.0415f, 187.8132f};
					break;
				
				case 181:
					Var0 = {-795.102f, 321.527f, 187.025f};
					Var0.f_3 = {0f, 0f, -152.431f};
					break;
				
				case 546:
					Var0 = {-787.7805f, 334.9232f, 186.1134f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_326(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 73:
			switch (iParam0)
			{
				case 278:
					Var0 = {-798.7061f, 341.8386f, 204.7183f};
					break;
				
				case 279:
					Var0 = {-785.138f, 341.7283f, 208.6144f};
					break;
				
				case 280:
					Var0 = {-801.4162f, 325.805f, 205.0629f};
					break;
				
				case 281:
					Var0 = {-801.5137f, 342.8037f, 209.2183f};
					break;
				
				case 282:
					Var0 = {-796.1956f, 440.2408f, 79.64348f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 283:
					Var0 = {-862.6429f, 353.2339f, 74.35394f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 0:
					Var0 = {-795.23f, 326.754f, 207.017f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 1:
					Var0 = {-175.0825f, 497.5359f, 136.6536f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-172.8586f, 497.9793f, 139.1536f};
					Var0.f_3 = {0f, 0f, 6.0703f};
					break;
				
				case 3:
					Var0 = {-170.4f, 487f, 133.8f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {-165.6559f, 478.3115f, 139.4199f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-170.4f, 501.9f, 132.8f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {-179.25f, 494.9512f, 128.857f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-167.6152f, 497.1908f, 139.6569f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 483:
					Var0 = {-168.8141f, 493.1552f, 128.8654f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 484:
					Var0 = {-176.7701f, 491.5644f, 132.2936f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-775.0327f, 340.3672f, 206.6209f};
					Var0.f_3 = {0f, 0f, 90.0569f};
					break;
				
				case 7:
					Var0 = {-172.988f, 491.272f, 129.053f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 8:
					Var0 = {-169.675f, 495.252f, 131.463f};
					Var0.f_3 = {-7.632f, 0f, -110.063f};
					break;
				
				case 141:
					Var0 = {-173.078f, 489.054f, 130.627f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 142:
					Var0 = {-172.739f, 489.146f, 131.777f};
					Var0.f_3 = {180f, -180f, 11f};
					break;
				
				case 143:
					Var0 = {-170.879f, 489.507f, 131.772f};
					Var0.f_3 = {180f, -180f, 11f};
					break;
				
				case 144:
					Var0 = {-173.609f, 491.939f, 130.576f};
					Var0.f_3 = {0.1322f, 0.0536f, -168.934f};
					break;
				
				case 145:
					Var0 = {-172.638f, 492.134f, 130.577f};
					Var0.f_3 = {-0.2118f, 0.062f, -167.343f};
					break;
				
				case 146:
					Var0 = {-173.609f, 491.939f, 130.576f};
					Var0.f_3 = {0.994f, 0.0536f, 184.211f};
					break;
				
				case 147:
					Var0 = {-174.947f, 490.441f, 131.015f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 148:
					Var0 = {-174.823f, 489.964f, 129.992f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 149:
					Var0 = {-170.7103f, 491.0771f, 129.0436f};
					Var0.f_3 = {0f, 0f, 114.6864f};
					break;
				
				case 150:
					Var0 = {-171.5056f, 493.8445f, 129.0436f};
					Var0.f_3 = {0f, 0f, 156.2637f};
					break;
				
				case 151:
					Var0 = {-174.0269f, 493.4414f, 129.0436f};
					Var0.f_3 = {0f, 0f, 183.8747f};
					break;
				
				case 152:
					Var0 = {-175.5986f, 491.8787f, 129.0436f};
					Var0.f_3 = {0f, 0f, 205.0738f};
					break;
				
				case 153:
					Var0 = {-173.107f, 489.446f, 129.049f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 154:
					Var0 = {-173.545f, 490.971f, 131.16f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 155:
					Var0 = {-173.544f, 490.971f, 130.215f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 157:
					Var0 = {-173.543f, 491.603f, 130.577f};
					Var0.f_3 = {-7.145f, 0.0536f, 59.2917f};
					break;
				
				case 158:
					Var0 = {-172.671f, 491.241f, 130.581f};
					Var0.f_3 = {-2.3423f, 0.0392f, -166.756f};
					break;
				
				case 169:
					Var0 = {-778.2188f, 332.2201f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-776.9868f, 332.502f, 208.3432f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 173:
					Var0 = {-173.277f, 494.095f, 129.048f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 174:
					Var0 = {-176.451f, 497.811f, 129.057f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 175:
					Var0 = {-176.341f, 498.471f, 129.057f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 176:
					Var0 = {-176.231f, 499.131f, 129.057f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 177:
					Var0 = {-176.121f, 499.791f, 129.057f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 178:
					Var0 = {-164.366f, 494.695f, 129.048f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 179:
					Var0 = {-168.055f, 497.6f, 129.787f};
					Var0.f_3 = {9.1439f, 0f, -226.355f};
					break;
				
				case 180:
					Var0 = {-167.354f, 496.865f, 129.787f};
					Var0.f_3 = {9.1439f, 0f, -226.355f};
					break;
				
				case 201:
					Var0 = {-175.0776f, 496.811f, 138.0631f};
					Var0.f_3 = {-2.6572f, 0.071f, -18.613f};
					break;
				
				case 235:
					Var0 = {-196.787f, 496.789f, 128.847f};
					Var0.f_3 = {-0.3015f, 0f, -96.8483f};
					break;
				
				case 271:
					Var0 = {-164.2207f, 481.8606f, 136.2704f};
					Var0.f_3 = {0f, 0f, 352.6839f};
					break;
				
				case 272:
					Var0 = {-166.0936f, 481.5848f, 136.2704f};
					Var0.f_3 = {0f, 0f, 0.5617f};
					break;
				
				case 273:
					Var0 = {-166.7556f, 482.014f, 136.2704f};
					Var0.f_3 = {0f, 0f, 97.7813f};
					break;
				
				case 274:
					Var0 = {-164.7762f, 485.2427f, 136.2442f};
					Var0.f_3 = {0f, 0f, 117.9575f};
					break;
				
				case 275:
					Var0 = {-166.4324f, 481.537f, 136.2436f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 304:
					Var0 = {-184.442f, 498.022f, 122.84f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 305:
					Var0 = {-173.763f, 498.355f, 137.806f};
					Var0.f_3 = {0f, 0f, 13f};
					break;
				
				case 308:
					Var0 = {-172.574f, 501.611f, 129.048f};
					Var0.f_3 = {0f, 0f, -55.4023f};
					break;
				
				case 309:
					Var0 = {-168.281f, 503.361f, 129.048f};
					Var0.f_3 = {0f, 0f, 101f};
					break;
				
				case 14:
					Var0 = {-161.6548f, 482.8907f, 136.2438f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 15:
					Var0 = {-172.3831f, 497.8868f, 138.1285f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {-169.4518f, 480.9929f, 136.2442f};
					Var0.f_3 = {0f, 0f, 344.7783f};
					break;
				
				case 10:
					Var0 = {-164.8997f, 491.9128f, 136.4436f};
					Var0.f_3 = {0f, 0f, 107.1011f};
					break;
				
				case 11:
					Var0 = {-173.0706f, 495.1959f, 136.6721f};
					Var0.f_3 = {0f, 0f, 188.6403f};
					break;
				
				case 12:
					Var0 = {-168.3477f, 483.4451f, 132.879f};
					Var0.f_3 = {0f, 0f, 190.8347f};
					break;
				
				case 16:
					Var0 = {-165.513f, 480.552f, 136.774f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {-165.2708f, 480.9601f, 136.3812f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {-166.0695f, 480.8013f, 138.1186f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {-166.55f, 480.35f, 136.774f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {-166.9543f, 480.5982f, 136.2704f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {-166.0695f, 480.8013f, 138.1186f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {-167.581f, 481.445f, 136.774f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {-167.0705f, 481.1044f, 136.2704f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {-167.2282f, 481.9047f, 138.0204f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 19:
					Var0 = {-167.912f, 482.804f, 136.774f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 25:
					Var0 = {-167.4854f, 483.3647f, 136.2704f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 31:
					Var0 = {-167.2751f, 482.3819f, 138.0204f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 20:
					Var0 = {-799.761f, 336.402f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 26:
					Var0 = {-799.757f, 337.57f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 32:
					Var0 = {-799.757f, 335.847f, 207.043f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 21:
					Var0 = {-800.721f, 336.402f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 27:
					Var0 = {-800.72f, 337.588f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 33:
					Var0 = {-800.733f, 335.888f, 207.224f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-168.5386f, 482.6213f, 137.9076f};
					Var0.f_3 = {0.3833f, 0f, -87.7897f};
					break;
				
				case 35:
					Var0 = {-164.0561f, 482.3845f, 137.3793f};
					Var0.f_3 = {1.0126f, 0f, -79.1184f};
					break;
				
				case 36:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 37:
					Var0 = {-795.085f, 333.845f, 205.221f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 38:
					Var0 = {-172.0057f, 491.9648f, 138.085f};
					Var0.f_3 = {-5.7141f, 0f, -128.7489f};
					break;
				
				case 39:
					Var0 = {-172.0057f, 487.7235f, 138.085f};
					Var0.f_3 = {-5.7141f, 0f, -135.9926f};
					break;
				
				case 120:
					Var0 = {-168.9293f, 480.117f, 134.1824f};
					Var0.f_3 = {-4.9261f, 0f, -22.4311f};
					break;
				
				case 121:
					Var0 = {-166.2631f, 480.117f, 134.1824f};
					Var0.f_3 = {-4.9261f, 0f, -33.5511f};
					break;
				
				case 125:
					Var0 = {-777.5101f, 328.2689f, 208.0708f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 40:
					Var0 = {-167.3926f, 487.7373f, 132.8437f};
					Var0.f_3 = {0f, 0f, 185.7943f};
					break;
				
				case 41:
					Var0 = {-166.37f, 482.274f, 136.267f};
					Var0.f_3 = {0f, 0f, 101.16f};
					break;
				
				case 126:
					Var0 = {-166.6772f, 482.5891f, 136.2704f};
					break;
				
				case 127:
					Var0 = {-166.4967f, 481.5552f, 138.0204f};
					break;
				
				case 42:
					Var0 = {-166.37f, 482.274f, 136.267f};
					Var0.f_3 = {0f, 0f, 101.16f};
					break;
				
				case 46:
					Var0 = {-164.2584f, 484.9542f, 133.8511f};
					Var0.f_3 = {0f, 0f, -131.45f};
					break;
				
				case 47:
					Var0 = {-163.457f, 483.474f, 133.282f};
					Var0.f_3 = {0f, 0f, -166.68f};
					break;
				
				case 48:
					Var0 = {-616.5919f, 65.3481f, 101.8033f};
					Var0.f_3 = {0.9407f, 0.0521f, 147.8146f};
					break;
				
				case 49:
					Var0 = {-619.5043f, 62.4537f, 102.0873f};
					Var0.f_3 = {-1.4768f, -0.0422f, -101.6693f};
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = {-162.6263f, 484.8703f, 132.8697f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {-164.7478f, 484.4771f, 134.8697f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 340:
					Var0 = {-161.9514f, 483.8063f, 134.6804f};
					Var0.f_3 = {0f, 0f, -79f};
					break;
				
				case 612:
					Var0 = {-163.988f, 481.337f, 133.863f};
					Var0.f_3 = {0f, 0f, -31.68f};
					break;
				
				case 615:
					Var0 = {-162.3055f, 482.5231f, 132.8697f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-164.4513f, 482.0749f, 134.8697f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-168.338f, 490.5f, 133.028f};
					Var0.f_3 = {0f, 0f, 81.0207f};
					break;
				
				case 57:
					Var0 = {-168.421f, 490.779f, 133.025f};
					Var0.f_3 = {0f, 0f, -78.75f};
					break;
				
				case 64:
					Var0 = {-167.851f, 490.0606f, 135.7694f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-167.5152f, 490.5291f, 134.8193f};
					Var0.f_3 = {-8.5698f, 0f, 118.8549f};
					break;
				
				case 58:
					Var0 = {-166.1256f, 490.0562f, 135.3182f};
					Var0.f_3 = {1.1132f, 0.1017f, 78.9651f};
					break;
				
				case 59:
					Var0 = {-166.589f, 489.7625f, 135.3233f};
					Var0.f_3 = {-7.0985f, 0.0535f, 82.2329f};
					break;
				
				case 60:
					Var0 = {-166.9374f, 490.8625f, 134.5452f};
					Var0.f_3 = {-6.8571f, 0f, 131.6332f};
					break;
				
				case 61:
					Var0 = {-166.9697f, 489.8927f, 135.6625f};
					Var0.f_3 = {-11.4914f, 0.1004f, 75.5478f};
					break;
				
				case 62:
					Var0 = {-167.7089f, 489.8488f, 135.6187f};
					Var0.f_3 = {-22.5721f, -0.0838f, 81.6919f};
					break;
				
				case 63:
					Var0 = {-168.5833f, 494.9f, 134.5053f};
					Var0.f_3 = {-1.0545f, 0f, -167.6487f};
					break;
				
				case 66:
					Var0 = {-166.4547f, 491.385f, 132.8437f};
					Var0.f_3 = {0f, 0f, 2f};
					break;
				
				case 67:
					Var0 = {-169.3389f, 490.9203f, 135.2034f};
					break;
				
				case 110:
					Var0 = {-168.2406f, 491.6804f, 132.8611f};
					Var0.f_3 = {0f, 0f, 18.306f};
					break;
				
				case 68:
					Var0 = {-164.5028f, 487.4701f, 134.0591f};
					break;
				
				case 109:
					Var0 = {-163.5246f, 487.6743f, 133.9934f};
					break;
				
				case 69:
					Var0 = {-164.5202f, 483.4868f, 137.2654f};
					Var0.f_3 = {0f, 0f, 60.1065f};
					break;
				
				case 70:
					Var0 = {-164.163f, 484.498f, 136.784f};
					Var0.f_3 = {0f, 0f, 142.25f};
					break;
				
				case 71:
					Var0 = {-163.0436f, 483.429f, 136.2442f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {-168.8236f, 482.4795f, 138.9579f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {-164.9669f, 483.3863f, 137.4704f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 74:
					Var0 = {-165.6417f, 484.3788f, 137.2653f};
					Var0.f_3 = {0f, 0f, 237.9561f};
					break;
				
				case 75:
					Var0 = {-164.8447f, 483.716f, 137.2999f};
					Var0.f_3 = {0f, 0f, -35.91f};
					break;
				
				case 76:
					Var0 = {-164.9954f, 484.6449f, 137.3065f};
					Var0.f_3 = {0f, 0f, 237.9561f};
					break;
				
				case 89:
					Var0 = {-792.8026f, 330.2704f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0.11f};
					break;
				
				case 91:
					Var0 = {-791.3608f, 331.6151f, 206.7155f};
					Var0.f_3 = {-6.1061f, 0f, 124.716f};
					break;
				
				case 90:
					Var0 = {-166.444f, 496.71f, 136.653f};
					Var0.f_3 = {0f, 0f, -163.44f};
					break;
				
				case 92:
					Var0 = {-791.1231f, 329.0256f, 207.0468f};
					Var0.f_3 = {-10.5496f, 0f, 38.2733f};
					break;
				
				case 135:
					Var0 = {-166.6697f, 496.8538f, 136.6536f};
					break;
				
				case 136:
					Var0 = {-165.9252f, 497.0006f, 138.4036f};
					break;
				
				case 77:
					Var0 = {-795.4578f, 337.2369f, 205.2183f};
					Var0.f_3 = {0f, 0f, 82.6775f};
					break;
				
				case 79:
					Var0 = {-796.8416f, 336.5425f, 206.3782f};
					Var0.f_3 = {4.1239f, 0.032f, -35.7362f};
					break;
				
				case 80:
					Var0 = {-794.1184f, 339.0253f, 207.2513f};
					Var0.f_3 = {-14.3736f, 0f, 132.7127f};
					break;
				
				case 81:
					Var0 = {-170.5805f, 481.6559f, 136.2442f};
					break;
				
				case 82:
					Var0 = {-170.6783f, 482.6563f, 137.9942f};
					break;
				
				case 78:
					Var0 = {-170.645f, 482.24f, 136.242f};
					Var0.f_3 = {0f, 0f, -77.04f};
					break;
				
				case 133:
					Var0 = {-170.5805f, 481.6559f, 136.2442f};
					break;
				
				case 134:
					Var0 = {-170.6783f, 482.6563f, 137.9942f};
					break;
				
				case 130:
					Var0 = {-170.645f, 482.24f, 136.242f};
					Var0.f_3 = {0f, 0f, -77.04f};
					break;
				
				case 83:
					Var0 = {-793.3814f, 333.4903f, 205.2183f};
					Var0.f_3 = {0f, 0f, 182.6354f};
					break;
				
				case 85:
					Var0 = {-792.4017f, 332.1834f, 206.589f};
					Var0.f_3 = {-0.4759f, 0f, 56.2407f};
					break;
				
				case 88:
					Var0 = {-792.6917f, 334.5816f, 206.9306f};
					Var0.f_3 = {-15.2511f, -0.1442f, 161.552f};
					break;
				
				case 84:
					Var0 = {-169.932f, 494.616f, 136.654f};
					Var0.f_3 = {0f, 0f, -172.8f};
					break;
				
				case 86:
					Var0 = {-169.3039f, 494.8466f, 136.6536f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {-170.5257f, 494.6144f, 138.4035f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 93:
					Var0 = {-173.755f, 498.325f, 137.805f};
					Var0.f_3 = {0f, 0f, 11.1f};
					break;
				
				case 94:
					Var0 = {-174.927f, 499.487f, 136.717f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 95:
					Var0 = {-174.7326f, 497.7486f, 136.6536f};
					Var0.f_3 = {0f, 0f, 9.66f};
					break;
				
				case 96:
					Var0 = {-174.81f, 498.54f, 137.7175f};
					Var0.f_3 = {0f, 0f, -166.26f};
					break;
				
				case 97:
					Var0 = {-173.719f, 496.1693f, 137.7175f};
					Var0.f_3 = {0f, 0f, 58.06f};
					break;
				
				case 98:
					Var0 = {-174.8786f, 496.8369f, 137.7175f};
					Var0.f_3 = {0f, 0f, -117.76f};
					break;
				
				case 99:
					Var0 = {-775.316f, 340.308f, 206.654f};
					Var0.f_3 = {0.18f, 0f, -90f};
					break;
				
				case 100:
					Var0 = {-174.5523f, 497.1214f, 136.6721f};
					Var0.f_3 = {0f, 0f, 18.2729f};
					break;
				
				case 101:
					Var0 = {-775.1893f, 340.8357f, 208.0344f};
					Var0.f_3 = {-0.162607f, 0.264814f, 116.59f};
					break;
				
				case 102:
					Var0 = {-170.9538f, 482.8296f, 136.2442f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-171.1906f, 483.9088f, 137.7442f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {-171.265f, 482.663f, 137.125f};
					Var0.f_3 = {0f, 0f, 76.32f};
					break;
				
				case 104:
					Var0 = {-170.67f, 482.1911f, 132.8437f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {-170.8454f, 483.0067f, 134.3437f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 183:
					Var0 = {-170.865f, 482.245f, 133.705f};
					Var0.f_3 = {0f, 0f, 110.16f};
					break;
				
				case 181:
					Var0 = {-169.938f, 494.725f, 129.775f};
					Var0.f_3 = {0f, 0f, -78.84f};
					break;
				
				case 169:
					Var0 = {-170.4434f, 495.2874f, 129.0436f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-170.2916f, 494.5287f, 130.5436f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 106:
					Var0 = {-796.3882f, 336.8372f, 202.5976f};
					Var0.f_3 = {-22.7361f, 0f, -129.0221f};
					break;
				
				case 107:
					Var0 = {-801.9172f, 326.3802f, 207.4878f};
					Var0.f_3 = {-35.2381f, 0f, -111.7465f};
					break;
				
				case 108:
					Var0 = {-174.4623f, 499.1877f, 137.9236f};
					Var0.f_3 = {90f, 0f, 10.9f};
					break;
				
				case 117:
					Var0 = {-794.9332f, 335.1039f, 201.5308f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {-800.421f, 325.5437f, 206.1822f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {-173.1384f, 499.1628f, 136.6536f};
					Var0.f_3 = {0f, 0f, 185.2395f};
					break;
				
				case 122:
					Var0 = {-172.4295f, 495.6633f, 136.7f};
					Var0.f_3 = {0f, 0f, 192.7531f};
					break;
				
				case 123:
					Var0 = {-174.2972f, 494.7493f, 136.6536f};
					Var0.f_3 = {0f, 0f, 203.5112f};
					break;
				
				case 124:
					Var0 = {-172.8577f, 494.0585f, 136.6535f};
					Var0.f_3 = {0f, 0f, 207.16f};
					break;
				
				case 137:
					Var0 = {-792.5942f, 335.772f, 205.2183f};
					break;
				
				case 139:
					Var0 = {-794.9999f, 334.6179f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 140:
					Var0 = {-797.3075f, 328.841f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 172:
					Var0 = {-173.038f, 495.184f, 130.217f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 187:
					Var0 = {-173.001f, 495.253f, 129.047f};
					Var0.f_3 = {0f, 0f, 190.713f};
					break;
				
				case 188:
					Var0 = {-165.371f, 496.361f, 130.527f};
					Var0.f_3 = {-0.7f, 0f, -205.1f};
					break;
				
				case 189:
					Var0 = {-165.471f, 496.461f, 130.527f};
					Var0.f_3 = {0.1f, 0f, -232.3f};
					break;
				
				case 190:
					Var0 = {-175.743f, 493.448f, 130.486f};
					Var0.f_3 = {-3.1551f, 0f, -61.2858f};
					break;
				
				case 191:
					Var0 = {-175.792f, 493.537f, 130.486f};
					Var0.f_3 = {-3.1551f, 0f, -61.2858f};
					break;
				
				case 192:
					Var0 = {-174.471f, 498.461f, 130.527f};
					Var0.f_3 = {1.3f, 0f, -250.8f};
					break;
				
				case 193:
					Var0 = {-174.301f, 497.661f, 130.527f};
					Var0.f_3 = {1.3f, 0f, -264.596f};
					break;
				
				case 194:
					Var0 = {-166.793f, 491.363f, 130.162f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 195:
					Var0 = {-173.171f, 495.661f, 130.427f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 196:
					Var0 = {-171.6152f, 492.7902f, 129.0436f};
					Var0.f_3 = {0f, 0f, 151.6694f};
					break;
				
				case 197:
					Var0 = {-175.521f, 494.234f, 129.048f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 198:
					Var0 = {-178.105f, 496.171f, 129.051f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 199:
					Var0 = {-172.2417f, 496.4529f, 129.0436f};
					Var0.f_3 = {0f, 0f, 188.6054f};
					break;
				
				case 200:
					Var0 = {-176.22f, 494.651f, 129.048f};
					Var0.f_3 = {0f, 0f, -269.352f};
					break;
				
				case 284:
					Var0 = {-177.056f, 493.87f, 130.449f};
					Var0.f_3 = {-3.027f, 0f, -34.1061f};
					break;
				
				case 285:
					Var0 = {-177.54f, 494.55f, 130.434f};
					Var0.f_3 = {-2.4917f, 0f, -43.7623f};
					break;
				
				case 286:
					Var0 = {-174.044f, 498.909f, 130.867f};
					Var0.f_3 = {-2.6168f, 0f, -242.364f};
					break;
				
				case 287:
					Var0 = {-174.077f, 498.318f, 130.853f};
					Var0.f_3 = {-2.7465f, 0f, -254.215f};
					break;
				
				case 202:
					Var0 = {-172.7426f, 494.3526f, 136.6721f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 203:
					Var0 = {-171.8187f, 493.9699f, 136.6534f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 204:
					Var0 = {-173.1253f, 493.4287f, 136.6535f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 205:
					Var0 = {-173.6664f, 494.7353f, 136.6721f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 206:
					Var0 = {-172.3599f, 495.2765f, 136.6536f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 207:
					Var0 = {-172.2014f, 493.0461f, 136.6534f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 208:
					Var0 = {-174.0491f, 493.8114f, 136.6536f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 209:
					Var0 = {-173.2838f, 495.6591f, 136.6721f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 210:
					Var0 = {-171.436f, 494.8938f, 136.6534f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 211:
					Var0 = {-170.8948f, 493.5872f, 136.6534f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 212:
					Var0 = {-173.5079f, 492.5049f, 136.6535f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 213:
					Var0 = {-174.5903f, 495.118f, 136.6536f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 214:
					Var0 = {-171.9772f, 496.2003f, 136.6536f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 215:
					Var0 = {-171.6602f, 491.7395f, 136.6534f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 216:
					Var0 = {-175.3557f, 493.2702f, 136.6536f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 217:
					Var0 = {-173.825f, 496.0657f, 136.6721f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {-174.344f, 492.146f, 129.052f};
					Var0.f_3 = {0f, 0f, -123.456f};
					break;
				
				case 237:
					Var0 = {-175.054f, 493.099f, 129.052f};
					Var0.f_3 = {0f, 0f, -110.657f};
					break;
				
				case 238:
					Var0 = {-174.218f, 493.344f, 129.052f};
					Var0.f_3 = {0f, 0f, -150.877f};
					break;
				
				case 239:
					Var0 = {-175.262f, 491.218f, 129.052f};
					Var0.f_3 = {0f, 0f, -79f};
					break;
				
				case 240:
					Var0 = {-171.862f, 491.237f, 130.614f};
					Var0.f_3 = {-2.8579f, 0f, 67.2119f};
					break;
				
				case 241:
					Var0 = {-174.864f, 493.148f, 129.057f};
					Var0.f_3 = {0f, 0f, 162.498f};
					break;
				
				case 242:
					Var0 = {-175.651f, 493.336f, 129.057f};
					Var0.f_3 = {0f, 0f, -148.34f};
					break;
				
				case 243:
					Var0 = {-175.269f, 493.885f, 129.057f};
					Var0.f_3 = {0f, 0f, 184.82f};
					break;
				
				case 244:
					Var0 = {-174.37f, 493.733f, 129.057f};
					Var0.f_3 = {0f, 0f, 168.395f};
					break;
				
				case 245:
					Var0 = {-174.913f, 490.978f, 130.721f};
					Var0.f_3 = {-5.44662f, 0f, 13.0346f};
					break;
				
				case 246:
					Var0 = {-175.411f, 492.076f, 129.056f};
					Var0.f_3 = {0f, 0f, -85.6566f};
					break;
				
				case 247:
					Var0 = {-175.465f, 492.78f, 129.052f};
					Var0.f_3 = {0f, 0f, -124.607f};
					break;
				
				case 248:
					Var0 = {-176.21f, 492.544f, 129.057f};
					Var0.f_3 = {0f, 0f, -116.412f};
					break;
				
				case 249:
					Var0 = {-175.819f, 491.724f, 129.056f};
					Var0.f_3 = {0f, 0f, -76.0166f};
					break;
				
				case 250:
					Var0 = {-173.059f, 492.16f, 130.621f};
					Var0.f_3 = {-2.98413f, 0f, 94.3793f};
					break;
				
				case 251:
					Var0 = {-170.994f, 492.854f, 129.048f};
					Var0.f_3 = {0f, 0f, 89.6608f};
					break;
				
				case 252:
					Var0 = {-170.299f, 493.401f, 129.048f};
					Var0.f_3 = {0f, 0f, 104.311f};
					break;
				
				case 253:
					Var0 = {-170.349f, 492.432f, 129.048f};
					Var0.f_3 = {0f, 0f, 78.2858f};
					break;
				
				case 254:
					Var0 = {-170.727f, 491.976f, 129.048f};
					Var0.f_3 = {0f, 0f, 66.3858f};
					break;
				
				case 255:
					Var0 = {-173.163f, 492.738f, 130.474f};
					Var0.f_3 = {-0.2929f, 0f, -83.1173f};
					break;
				
				case 256:
					Var0 = {-173.518f, 490.294f, 129.052f};
					Var0.f_3 = {0f, 0f, -98.9085f};
					break;
				
				case 257:
					Var0 = {-175.43f, 490.851f, 129.052f};
					Var0.f_3 = {0f, 0f, -97.7835f};
					break;
				
				case 258:
					Var0 = {-175.096f, 489.897f, 129.052f};
					Var0.f_3 = {0f, 0f, -83.1335f};
					break;
				
				case 259:
					Var0 = {-174.811f, 491.031f, 129.052f};
					Var0.f_3 = {0f, 0f, -113.008f};
					break;
				
				case 260:
					Var0 = {-172.17f, 490.09f, 130.581f};
					Var0.f_3 = {-1.83503f, 0f, 89.2696f};
					break;
				
				case 307:
					Var0 = {-175.188f, 492.992f, 130.598f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 331:
					Var0 = {-175.188f, 492.992f, 130.598f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 332:
					Var0 = {-175.188f, 492.992f, 130.598f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 333:
					Var0 = {-166.583f, 493.269f, 129.915f};
					Var0.f_3 = {0f, 0f, -115f};
					break;
				
				case 334:
					Var0 = {-174.614f, 493.776f, 130.716f};
					Var0.f_3 = {0f, 0f, -6.85f};
					break;
				
				case 298:
					Var0 = {-171.0628f, 481.9798f, 137.2427f};
					break;
				
				case 299:
					Var0 = {-169.6761f, 494.188f, 137.6043f};
					break;
				
				case 300:
					Var0 = {-173.8131f, 496.8874f, 129.0412f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 26.882f;
					break;
				
				case 301:
					Var0 = {-172.2603f, 496.7129f, 129.0436f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 8.9738f;
					break;
				
				case 302:
					Var0 = {-172.5036f, 498.7915f, 129.0418f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 55.0647f;
					break;
				
				case 303:
					Var0 = {-174.2426f, 498.6731f, 129.0391f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 49.5334f;
					break;
				
				case 310:
				case 335:
				case 336:
					Var0 = {-163.1103f, 484.7386f, 137.2687f};
					Var0.f_3 = {-0.0155f, -0.5599f, 126.1069f};
					break;
				
				case 337:
				case 338:
				case 339:
					Var0 = {-163.6812f, 484.3223f, 137.2687f};
					Var0.f_3 = {-0.0155f, -0.5599f, 126.1069f};
					break;
				
				case 311:
					Var0 = {-172.215f, 490.042f, 136.69f};
					Var0.f_3 = {0f, 0f, -15.3f};
					break;
				
				case 234:
					Var0 = {-174.569f, 490.772f, 131.048f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 261:
					Var0 = {-172.178f, 491.102f, 130.04f};
					Var0.f_3 = {0f, 0f, 158f};
					break;
				
				case 262:
					Var0 = {-172.178f, 491.102f, 130.04f};
					Var0.f_3 = {0f, 0f, 158f};
					break;
				
				case 263:
					Var0 = {-163.159f, 479.715f, 137.242f};
					Var0.f_3 = {0f, 0f, 172.08f};
					break;
				
				case 264:
					Var0 = {-163.159f, 479.715f, 137.242f};
					Var0.f_3 = {0f, 0f, 172.08f};
					break;
				
				case 265:
					Var0 = {-163.159f, 479.715f, 137.205f};
					Var0.f_3 = {0f, 0f, 172.08f};
					break;
				
				case 266:
					Var0 = {-163.159f, 479.715f, 137.205f};
					Var0.f_3 = {0f, 0f, 172.08f};
					break;
				
				case 267:
					Var0 = {-167.134f, 483.09f, 137.305f};
					Var0.f_3 = {0f, 0f, -77.4f};
					break;
				
				case 268:
					Var0 = {-167.134f, 483.09f, 137.305f};
					Var0.f_3 = {0f, 0f, -77.4f};
					break;
				
				case 269:
					Var0 = {-167.134f, 483.09f, 137.305f};
					Var0.f_3 = {0f, 0f, -77.4f};
					break;
				
				case 270:
					Var0 = {-167.134f, 483.09f, 137.305f};
					Var0.f_3 = {0f, 0f, -77.4f};
					break;
				
				case 312:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 313:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 314:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 315:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 316:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 317:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 318:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 319:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 320:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 321:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 322:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 323:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 324:
					Var0 = {-164.528f, 493.608f, 137.691f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 325:
					Var0 = {-164.528f, 493.608f, 137.691f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 326:
					Var0 = {-164.528f, 493.608f, 137.691f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 327:
					Var0 = {-164.528f, 493.696f, 137.666f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 328:
					Var0 = {-164.528f, 493.696f, 137.666f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 329:
					Var0 = {-164.528f, 493.696f, 137.666f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 475:
					Var0 = {-172.5f, 493.1f, 130f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 473:
					Var0 = {-168.7f, 483.9f, 133.9f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 474:
					Var0 = {-169.1f, 485.3f, 137.4f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 546:
					Var0 = {-166.432f, 481.537f, 136.243f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 278:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 279:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 280:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 281:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 282:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 283:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 0:
					Var0 = {-795.23f, 326.754f, 207.017f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 1:
					Var0 = {116.4776f, 559.8413f, 183.2967f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {117.9619f, 560.0188f, 185.8099f};
					Var0.f_3 = {0f, 0f, 1.1032f};
					break;
				
				case 3:
					Var0 = {119.2f, 550.6f, 180.5f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {122.8527f, 539.0169f, 179.3677f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {120.3379f, 563.1256f, 186.385f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {123.4507f, 561.6588f, 179.8728f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {113.1089f, 560.6088f, 175.4467f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 483:
					Var0 = {121.3152f, 567.02f, 178.8824f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 484:
					Var0 = {112.4321f, 566.0848f, 175.5437f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {117.2947f, 559.1152f, 183.3195f};
					Var0.f_3 = {0f, 0f, 184.2975f};
					break;
				
				case 7:
					Var0 = {117.247f, 568.7f, 175.703f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 8:
					Var0 = {113.599f, 565.024f, 178.113f};
					Var0.f_3 = {-7.632f, 0f, 64.937f};
					break;
				
				case 141:
					Var0 = {117.53f, 570.901f, 177.277f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 142:
					Var0 = {117.184f, 570.84f, 178.427f};
					Var0.f_3 = {180f, -180f, 186f};
					break;
				
				case 143:
					Var0 = {115.3f, 570.642f, 178.422f};
					Var0.f_3 = {180f, -180f, 186f};
					break;
				
				case 144:
					Var0 = {117.807f, 567.981f, 177.226f};
					Var0.f_3 = {0.1322f, 0.0536f, 6.0657f};
					break;
				
				case 158:
					Var0 = {116.934f, 568.759f, 177.231f};
					Var0.f_3 = {-2.3423f, 0.0392f, 8.2442f};
					break;
				
				case 145:
					Var0 = {116.823f, 567.871f, 177.227f};
					Var0.f_3 = {-0.2118f, 0.062f, 7.6568f};
					break;
				
				case 146:
					Var0 = {117.807f, 567.981f, 177.226f};
					Var0.f_3 = {0.994f, 0.0536f, 359.211f};
					break;
				
				case 147:
					Var0 = {119.271f, 569.357f, 177.665f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 148:
					Var0 = {119.189f, 569.843f, 176.642f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 153:
					Var0 = {117.525f, 570.508f, 175.699f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 154:
					Var0 = {117.828f, 568.952f, 177.81f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 155:
					Var0 = {117.827f, 568.951f, 176.865f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 157:
					Var0 = {117.771f, 568.321f, 177.227f};
					Var0.f_3 = {-7.145f, 0.0536f, 234.292f};
					break;
				
				case 234:
					Var0 = {118.866f, 569.061f, 177.698f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 149:
					Var0 = {114.8325f, 569.0005f, 175.6971f};
					Var0.f_3 = {0f, 0f, 287.6271f};
					break;
				
				case 150:
					Var0 = {115.0929f, 565.8835f, 175.6971f};
					Var0.f_3 = {0f, 0f, 337.041f};
					break;
				
				case 151:
					Var0 = {117.4577f, 566.4731f, 175.6971f};
					Var0.f_3 = {0f, 0f, 340.7748f};
					break;
				
				case 152:
					Var0 = {119.8496f, 567.2011f, 175.6971f};
					Var0.f_3 = {0f, 0f, 19.3824f};
					break;
				
				case 169:
					Var0 = {-778.2188f, 332.2201f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-776.9868f, 332.502f, 208.3432f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 173:
					Var0 = {115.733f, 564.887f, 175.698f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 174:
					Var0 = {119.096f, 568.431f, 175.707f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 175:
					Var0 = {119.764f, 568.391f, 175.707f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 176:
					Var0 = {120.432f, 568.351f, 175.707f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 177:
					Var0 = {121.1f, 568.31f, 175.707f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 178:
					Var0 = {117.261f, 556.087f, 175.698f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 179:
					Var0 = {119.764f, 560.06f, 176.437f};
					Var0.f_3 = {9.1439f, 0f, 49.6453f};
					break;
				
				case 180:
					Var0 = {119.106f, 559.285f, 176.437f};
					Var0.f_3 = {9.1439f, 0f, 49.6453f};
					break;
				
				case 201:
					Var0 = {116.2337f, 558.9236f, 184.8102f};
					Var0.f_3 = {-1.2605f, -0.117f, -20.7566f};
					break;
				
				case 235:
					Var0 = {140.474f, 561.13f, 175.497f};
					Var0.f_3 = {-0.3015f, 0f, 78.1517f};
					break;
				
				case 261:
					Var0 = {116.455f, 568.94f, 176.69f};
					Var0.f_3 = {0f, 0f, 333f};
					break;
				
				case 262:
					Var0 = {116.455f, 568.94f, 176.69f};
					Var0.f_3 = {0f, 0f, 333f};
					break;
				
				case 263:
					Var0 = {125.669f, 540.35f, 183.878f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 264:
					Var0 = {125.669f, 540.35f, 183.878f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 265:
					Var0 = {125.669f, 540.35f, 183.878f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 266:
					Var0 = {125.669f, 540.35f, 183.878f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 267:
					Var0 = {122.019f, 542.775f, 183.928f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 268:
					Var0 = {122.019f, 542.775f, 183.928f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 269:
					Var0 = {122.019f, 542.775f, 183.928f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 270:
					Var0 = {122.019f, 542.775f, 183.928f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 312:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 313:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 314:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 315:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 316:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 317:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 318:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 319:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 320:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 321:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 322:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 323:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 324:
					Var0 = {125.169f, 554.163f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 325:
					Var0 = {125.169f, 554.163f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 326:
					Var0 = {125.169f, 554.163f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 327:
					Var0 = {125.169f, 554.25f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 328:
					Var0 = {125.169f, 554.25f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 329:
					Var0 = {125.169f, 554.25f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 271:
					Var0 = {124.8518f, 542.6487f, 182.9297f};
					Var0.f_3 = {0f, 0f, 178.684f};
					break;
				
				case 272:
					Var0 = {123.4077f, 542.3077f, 182.9297f};
					Var0.f_3 = {0f, 0f, 186.562f};
					break;
				
				case 273:
					Var0 = {122.5815f, 542.4899f, 182.9297f};
					Var0.f_3 = {0f, 0f, 283.781f};
					break;
				
				case 274:
					Var0 = {122.1604f, 543.7183f, 182.9297f};
					Var0.f_3 = {0f, 0f, 303.957f};
					break;
				
				case 275:
					Var0 = {122.5349f, 542.5076f, 182.8967f};
					Var0.f_3 = {0f, 0f, 6f};
					break;
				
				case 304:
					Var0 = {128.069f, 560.977f, 169.49f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 305:
					Var0 = {117.8f, 560.5f, 184.448f};
					Var0.f_3 = {0f, 0f, 5.04f};
					break;
				
				case 308:
					Var0 = {115.934f, 558.437f, 175.698f};
					Var0.f_3 = {0f, 0f, 119.598f};
					break;
				
				case 309:
					Var0 = {111.504f, 557.067f, 175.698f};
					Var0.f_3 = {0f, 0f, 276f};
					break;
				
				case 14:
					Var0 = {127.2918f, 543.401f, 182.9871f};
					Var0.f_3 = {0f, 0f, -84f};
					break;
				
				case 15:
					Var0 = {115.9149f, 562.2825f, 185.9155f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {119.1077f, 541.812f, 182.8972f};
					Var0.f_3 = {0f, 0f, 346.5059f};
					break;
				
				case 10:
					Var0 = {124.206f, 552.4236f, 183.0967f};
					Var0.f_3 = {0f, 0f, 99.2318f};
					break;
				
				case 11:
					Var0 = {117.5891f, 557.4708f, 183.3f};
					Var0.f_3 = {0f, 0f, 203.9372f};
					break;
				
				case 12:
					Var0 = {120.6515f, 543.9923f, 179.532f};
					Var0.f_3 = {0f, 0f, 196.4342f};
					break;
				
				case 16:
					Var0 = {124.036f, 541.498f, 183.425f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {124.4782f, 542.0929f, 182.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {123.4112f, 541.9592f, 183.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {122.985f, 541.388f, 183.425f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {122.3936f, 541.8428f, 182.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {123.4112f, 541.9592f, 183.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {121.233f, 544.03f, 183.425f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {121.8474f, 543.66f, 182.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {121.7479f, 544.5643f, 183.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 19:
					Var0 = {-798.831f, 336.392f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 25:
					break;
				
				case 31:
					break;
				
				case 20:
					break;
				
				case 26:
					break;
				
				case 32:
					break;
				
				case 21:
					break;
				
				case 27:
					break;
				
				case 33:
					break;
				
				case 34:
					Var0 = {120.0193f, 543.7301f, 184.7616f};
					Var0.f_3 = {-6.4435f, 0f, -93.4584f};
					break;
				
				case 35:
					Var0 = {124.7541f, 543.1176f, 184.1151f};
					Var0.f_3 = {0.3841f, 0f, -84.0241f};
					break;
				
				case 36:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 37:
					Var0 = {-795.085f, 333.845f, 205.221f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 38:
					Var0 = {117.5934f, 553.3547f, 184.6455f};
					Var0.f_3 = {-4.9687f, 0f, -128.8533f};
					break;
				
				case 39:
					Var0 = {117.5968f, 549.5334f, 184.6455f};
					Var0.f_3 = {-4.9687f, 0f, -135.5197f};
					break;
				
				case 120:
					Var0 = {120.1006f, 540.8033f, 181.1527f};
					Var0.f_3 = {-7.7205f, 0f, -31.997f};
					break;
				
				case 121:
					Var0 = {123.0448f, 540.8033f, 181.1527f};
					Var0.f_3 = {-7.7205f, 0f, -31.997f};
					break;
				
				case 125:
					Var0 = {-777.5101f, 328.2689f, 208.0708f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 40:
					Var0 = {122.2105f, 548.7648f, 179.4972f};
					Var0.f_3 = {0f, 0f, 174.6041f};
					break;
				
				case 41:
					Var0 = {122.63f, 543.209f, 182.917f};
					Var0.f_3 = {0f, 0f, 88.2f};
					break;
				
				case 126:
					Var0 = {122.2454f, 543.8647f, 182.9297f};
					break;
				
				case 127:
					Var0 = {122.3742f, 542.7989f, 184.6797f};
					break;
				
				case 42:
					Var0 = {122.63f, 543.209f, 182.917f};
					Var0.f_3 = {0f, 0f, 88.2f};
					break;
				
				case 46:
					Var0 = {125.1505f, 546.0822f, 180.5208f};
					Var0.f_3 = {0f, 0f, -142.61f};
					break;
				
				case 47:
					Var0 = {125.65f, 544.475f, 179.97f};
					Var0.f_3 = {0f, 0f, -177.84f};
					break;
				
				case 48:
					Var0 = {-616.5919f, 65.3481f, 101.8033f};
					Var0.f_3 = {0.9407f, 0.0521f, 147.8146f};
					break;
				
				case 49:
					Var0 = {-619.5043f, 62.4537f, 102.0873f};
					Var0.f_3 = {-1.4768f, -0.0422f, -101.6693f};
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = {126.4232f, 545.7162f, 179.5227f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {124.3618f, 545.5223f, 181.5227f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 612:
					Var0 = {124.887f, 541.925f, 180.512f};
					Var0.f_3 = {0f, 0f, -41.76f};
					break;
				
				case 615:
					Var0 = {126.7189f, 542.8882f, 179.5227f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {124.6794f, 542.6829f, 181.5227f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {121.75f, 551.25f, 179.7f};
					Var0.f_3 = {0f, 0f, -132.84f};
					break;
				
				case 57:
					Var0 = {121.371f, 551.86f, 179.677f};
					Var0.f_3 = {0f, 0f, -84.24f};
					break;
				
				case 64:
					Var0 = {121.9528f, 551.1089f, 182.449f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {121.6896f, 551.3428f, 181.282f};
					Var0.f_3 = {-12.7072f, 0f, 106.2162f};
					break;
				
				case 58:
					Var0 = {123.4637f, 550.5748f, 182.0598f};
					Var0.f_3 = {1.3316f, 0.0211f, 63.1983f};
					break;
				
				case 59:
					Var0 = {123.2292f, 550.7562f, 182.0586f};
					Var0.f_3 = {-2.6725f, 0.0252f, 75.3702f};
					break;
				
				case 60:
					Var0 = {122.8969f, 551.7355f, 181.568f};
					Var0.f_3 = {-12.6595f, -0.0559f, 111.6776f};
					break;
				
				case 61:
					Var0 = {121.9945f, 550.6105f, 182.3346f};
					Var0.f_3 = {-24.0093f, 0.0018f, 52.9632f};
					break;
				
				case 62:
					Var0 = {121.5827f, 551.2434f, 181.6459f};
					Var0.f_3 = {-23.0919f, 0.0869f, 74.3553f};
					break;
				
				case 63:
					Var0 = {121.3262f, 555.3304f, 180.9944f};
					Var0.f_3 = {-4.7479f, 0f, -174.122f};
					break;
				
				case 66:
					Var0 = {120.2884f, 552.1728f, 179.5101f};
					Var0.f_3 = {0f, 0f, 2.5f};
					break;
				
				case 67:
					Var0 = {123.3423f, 552.4438f, 181.7469f};
					break;
				
				case 110:
					Var0 = {121.8218f, 552.3264f, 179.5141f};
					Var0.f_3 = {0f, 0f, 346.8389f};
					break;
				
				case 68:
					Var0 = {125.3961f, 548.2598f, 180.7278f};
					break;
				
				case 109:
					Var0 = {125.9697f, 548.3368f, 180.6464f};
					break;
				
				case 69:
					Var0 = {124.7203f, 544.2501f, 182.9296f};
					Var0.f_3 = {0f, 0f, 52.8871f};
					break;
				
				case 70:
					Var0 = {124.988f, 545.185f, 183.445f};
					Var0.f_3 = {0f, 0f, 137f};
					break;
				
				case 71:
					Var0 = {126.3463f, 543.9017f, 182.8975f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {120.2029f, 543.7465f, 185.6171f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {124.3153f, 544.3066f, 182.9296f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 74:
					Var0 = {123.87f, 544.7672f, 183.9245f};
					Var0.f_3 = {0f, 0f, 229.824f};
					break;
				
				case 75:
					Var0 = {124.2379f, 544.4689f, 183.961f};
					Var0.f_3 = {0f, 0f, -41.02f};
					break;
				
				case 76:
					Var0 = {124.1725f, 545.4073f, 183.9675f};
					Var0.f_3 = {0f, 0f, 137.2f};
					break;
				
				case 89:
					Var0 = {-792.8026f, 330.2704f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0.11f};
					break;
				
				case 91:
					Var0 = {-791.3608f, 331.6151f, 206.7155f};
					Var0.f_3 = {-6.1061f, 0f, 124.716f};
					break;
				
				case 90:
					Var0 = {123.681f, 557.632f, 183.304f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 92:
					Var0 = {-791.1231f, 329.0256f, 207.0468f};
					Var0.f_3 = {-10.5496f, 0f, 38.2733f};
					break;
				
				case 135:
					Var0 = {123.5052f, 557.7494f, 183.2967f};
					break;
				
				case 136:
					Var0 = {124.3367f, 557.8538f, 185.2967f};
					break;
				
				case 77:
					Var0 = {-795.4578f, 337.2369f, 205.2183f};
					Var0.f_3 = {0f, 0f, 82.6775f};
					break;
				
				case 79:
					Var0 = {-796.8416f, 336.5425f, 206.3782f};
					Var0.f_3 = {4.1239f, 0.032f, -35.7362f};
					break;
				
				case 80:
					Var0 = {-794.1184f, 339.0253f, 207.2513f};
					Var0.f_3 = {-14.3736f, 0f, 132.7127f};
					break;
				
				case 81:
					Var0 = {-796.8088f, 337.2715f, 207.0081f};
					break;
				
				case 82:
					Var0 = {-794.73f, 337.4924f, 205.2183f};
					break;
				
				case 78:
					Var0 = {Vector(206.15f, 337.263f, -796.115f) + Vector(0.0084f, -0.1213f, -0.0385f) + Vector(-0.0001f, 0.0008f, 0.0245f)};
					Var0.f_3 = {Vector(84.6f, 0f, 0f) + Vector(5.64f, 0f, 0f)};
					break;
				
				case 133:
					Var0 = {118.3172f, 543.0574f, 182.8972f};
					break;
				
				case 134:
					Var0 = {118.2704f, 543.7819f, 184.6472f};
					break;
				
				case 130:
					Var0 = {118.373f, 543.555f, 182.89f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 83:
					Var0 = {-793.3814f, 333.4903f, 205.2183f};
					Var0.f_3 = {0f, 0f, 182.6354f};
					break;
				
				case 85:
					Var0 = {-792.4017f, 332.1834f, 206.589f};
					Var0.f_3 = {-0.4759f, 0f, 56.2407f};
					break;
				
				case 88:
					Var0 = {-792.6917f, 334.5816f, 206.9306f};
					Var0.f_3 = {-15.2511f, -0.1442f, 161.552f};
					break;
				
				case 84:
					Var0 = {120.136f, 555.817f, 183.309f};
					Var0.f_3 = {0f, 0f, -174.4f};
					break;
				
				case 86:
					Var0 = {120.666f, 555.8313f, 183.2967f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {119.6679f, 555.7427f, 185.0471f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 93:
					Var0 = {117.7951f, 560.5258f, 184.4464f};
					Var0.f_3 = {0f, 0f, 6f};
					break;
				
				case 94:
					Var0 = {116.708f, 561.789f, 183.359f};
					Var0.f_3 = {0f, 0f, 6.9f};
					break;
				
				case 95:
					Var0 = {116.8164f, 559.4781f, 183.31f};
					Var0.f_3 = {0f, 0f, 5.56f};
					break;
				
				case 96:
					Var0 = {116.757f, 560.8361f, 184.359f};
					Var0.f_3 = {0f, 0f, -170.36f};
					break;
				
				case 97:
					Var0 = {117.6757f, 558.3934f, 184.359f};
					Var0.f_3 = {0f, 0f, 53.96f};
					break;
				
				case 98:
					Var0 = {116.5668f, 559.1422f, 184.359f};
					Var0.f_3 = {0f, 0f, -121.86f};
					break;
				
				case 99:
					Var0 = {117.555f, 562.81f, 184.445f};
					Var0.f_3 = {0f, 0f, 6f};
					break;
				
				case 100:
					Var0 = {116.7616f, 559.5724f, 183.31f};
					Var0.f_3 = {0f, 0f, 8.74f};
					break;
				
				case 101:
					Var0 = {115.7786f, 564.577f, 184.6896f};
					Var0.f_3 = {-2.5476f, 0.7873f, -144.1641f};
					break;
				
				case 102:
					Var0 = {118.1845f, 544.1455f, 182.8975f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {118.0736f, 545.0422f, 184.6475f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {117.901f, 544.088f, 183.798f};
					Var0.f_3 = {0f, 0f, 85.32f};
					break;
				
				case 104:
					Var0 = {118.5495f, 543.521f, 179.4969f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {118.442f, 544.4215f, 181.2469f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 183:
					Var0 = {118.075f, 543.55f, 180.363f};
					Var0.f_3 = {0f, 0f, 91.8f};
					break;
				
				case 181:
					Var0 = {113.863f, 565.563f, 176.399f};
					Var0.f_3 = {0f, 0f, 106.56f};
					break;
				
				case 169:
					Var0 = {114.3477f, 564.9015f, 175.7084f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {114.2297f, 565.869f, 177.4467f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 475:
					Var0 = {115.9057f, 567.5313f, 177f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 473:
					Var0 = {121.8264f, 544.0052f, 181f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 474:
					Var0 = {120.1062f, 546.6083f, 185f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 106:
					Var0 = {-796.3882f, 336.8372f, 202.5976f};
					Var0.f_3 = {-22.7361f, 0f, -129.0221f};
					break;
				
				case 107:
					Var0 = {-801.9172f, 326.3802f, 207.4878f};
					Var0.f_3 = {-35.2381f, 0f, -111.7465f};
					break;
				
				case 108:
					Var0 = {117.13f, 561.44f, 184.56f};
					Var0.f_3 = {90f, 0f, 6f};
					break;
				
				case 117:
					Var0 = {-794.9332f, 335.1039f, 201.5308f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {-800.421f, 325.5437f, 206.1822f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {118.8059f, 561.6073f, 183.2968f};
					Var0.f_3 = {0f, 0f, 144.7546f};
					break;
				
				case 122:
					Var0 = {117.7512f, 556.8251f, 183.3013f};
					Var0.f_3 = {0f, 0f, 192.1243f};
					break;
				
				case 123:
					Var0 = {118.9029f, 555.9317f, 183.2983f};
					Var0.f_3 = {0f, 0f, 198.3833f};
					break;
				
				case 124:
					Var0 = {117.4407f, 554.3014f, 183.3021f};
					Var0.f_3 = {0f, 0f, 185.1604f};
					break;
				
				case 137:
					Var0 = {-792.5942f, 335.772f, 205.2183f};
					break;
				
				case 139:
					Var0 = {-794.9999f, 334.6179f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 140:
					Var0 = {-797.3075f, 328.841f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 156:
					Var0 = {117.5551f, 562.8094f, 184.4464f};
					Var0.f_3 = {0f, 0f, 6f};
					break;
				
				case 172:
					Var0 = {116.956f, 564.799f, 176.867f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 187:
					Var0 = {-173.001f, 495.253f, 129.047f};
					Var0.f_3 = {0f, 0f, 190.713f};
					break;
				
				case 188:
					Var0 = {118.813f, 557.261f, 177.177f};
					Var0.f_3 = {-0.7f, 0f, 70.9f};
					break;
				
				case 189:
					Var0 = {118.901f, 557.37f, 177.177f};
					Var0.f_3 = {0.1f, 0f, 43.7f};
					break;
				
				case 190:
					Var0 = {114.832f, 567.272f, 177.136f};
					Var0.f_3 = {-3.1551f, 0f, 214.714f};
					break;
				
				case 191:
					Var0 = {114.915f, 567.329f, 177.136f};
					Var0.f_3 = {-3.1551f, 0f, 214.714f};
					break;
				
				case 192:
					Var0 = {119.95f, 566.53f, 177.177f};
					Var0.f_3 = {1.3f, 0f, 25.2f};
					break;
				
				case 193:
					Var0 = {119.172f, 566.277f, 177.177f};
					Var0.f_3 = {1.3f, 0f, 11.4037f};
					break;
				
				case 194:
					Var0 = {113.693f, 558.153f, 176.812f};
					Var0.f_3 = {0f, 0f, 96f};
					break;
				
				case 195:
					Var0 = {117.301f, 564.945f, 177.077f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 196:
					Var0 = {115.8271f, 568.0894f, 175.6971f};
					Var0.f_3 = {0f, 0f, 320.5218f};
					break;
				
				case 197:
					Var0 = {115.636f, 567.133f, 175.698f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 198:
					Var0 = {117.293f, 569.905f, 175.701f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 199:
					Var0 = {116.208f, 563.5542f, 175.6971f};
					Var0.f_3 = {0f, 0f, 12.1319f};
					break;
				
				case 200:
					Var0 = {115.978f, 567.871f, 175.698f};
					Var0.f_3 = {0f, 0f, 6.6476f};
					break;
				
				case 284:
					Var0 = {-779.2086f, 329.115f, 208.0224f};
					Var0.f_3 = {-3.027f, 0f, 55.8939f};
					break;
				
				case 285:
					Var0 = {-779.8893f, 328.631f, 208.0071f};
					Var0.f_3 = {-2.4917f, 0f, 46.2377f};
					break;
				
				case 286:
					Var0 = {-784.2476f, 332.1267f, 208.4403f};
					Var0.f_3 = {-2.6168f, 0f, -152.3636f};
					break;
				
				case 287:
					Var0 = {-783.6574f, 332.094f, 208.4264f};
					Var0.f_3 = {-2.7465f, 0f, -164.2146f};
					break;
				
				case 202:
					Var0 = {117.4257f, 559.3446f, 183.3099f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 203:
					Var0 = {118.9018f, 554.9273f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 204:
					Var0 = {117.5083f, 554.8685f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 205:
					Var0 = {117.9669f, 558.038f, 183.3099f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 206:
					Var0 = {117.0191f, 556.1034f, 183.2784f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 207:
					Var0 = {117.1845f, 556.7512f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 208:
					Var0 = {118.1322f, 555.6858f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 209:
					Var0 = {117.173f, 558.5792f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 210:
					Var0 = {116.6603f, 557.4968f, 183.2987f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 211:
					Var0 = {118.5779f, 554.11f, 183.3495f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 212:
					Var0 = {118.291f, 557.3924f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 213:
					Var0 = {118.508f, 556.7315f, 183.2984f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 214:
					Var0 = {117.5126f, 554.0622f, 183.297f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 215:
					Var0 = {117.8724f, 557.2373f, 183.32f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 216:
					Var0 = {119.221f, 559.7747f, 183.2968f};
					Var0.f_3 = {0f, 0f, 135.2553f};
					break;
				
				case 217:
					Var0 = {120.1753f, 556.7762f, 183.2971f};
					Var0.f_3 = {0f, 0f, 121.9463f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {118.521f, 567.71f, 175.702f};
					Var0.f_3 = {0f, 0f, 51.5437f};
					break;
				
				case 237:
					Var0 = {119.145f, 566.699f, 175.702f};
					Var0.f_3 = {0f, 0f, 64.3427f};
					break;
				
				case 238:
					Var0 = {118.291f, 566.529f, 175.702f};
					Var0.f_3 = {0f, 0f, 24.123f};
					break;
				
				case 239:
					Var0 = {119.517f, 568.555f, 175.702f};
					Var0.f_3 = {0f, 0f, 96f};
					break;
				
				case 240:
					Var0 = {116.128f, 568.833f, 177.264f};
					Var0.f_3 = {-2.8579f, 0f, 242.212f};
					break;
				
				case 241:
					Var0 = {118.952f, 566.668f, 175.707f};
					Var0.f_3 = {0f, 0f, 337.498f};
					break;
				
				case 242:
					Var0 = {119.72f, 566.411f, 175.707f};
					Var0.f_3 = {0f, 0f, 26.6596f};
					break;
				
				case 243:
					Var0 = {119.291f, 565.897f, 175.707f};
					Var0.f_3 = {0f, 0f, 359.82f};
					break;
				
				case 244:
					Var0 = {118.409f, 566.128f, 175.707f};
					Var0.f_3 = {0f, 0f, 343.395f};
					break;
				
				case 245:
					Var0 = {119.19f, 568.824f, 177.371f};
					Var0.f_3 = {-5.44662f, 0f, 188.035f};
					break;
				
				case 246:
					Var0 = {119.59f, 567.688f, 175.706f};
					Var0.f_3 = {0f, 0f, 89.3434f};
					break;
				
				case 247:
					Var0 = {119.583f, 566.981f, 175.702f};
					Var0.f_3 = {0f, 0f, 50.3927f};
					break;
				
				case 248:
					Var0 = {120.345f, 567.151f, 175.707f};
					Var0.f_3 = {0f, 0f, 58.5877f};
					break;
				
				case 249:
					Var0 = {120.027f, 568.003f, 175.706f};
					Var0.f_3 = {0f, 0f, 98.9834f};
					break;
				
				case 250:
					Var0 = {117.24f, 567.809f, 177.271f};
					Var0.f_3 = {-2.98413f, 0f, 269.379f};
					break;
				
				case 251:
					Var0 = {114.765f, 567.285f, 175.698f};
					Var0.f_3 = {0f, 0f, 264.661f};
					break;
				
				case 252:
					Var0 = {114.025f, 566.801f, 175.698f};
					Var0.f_3 = {0f, 0f, 279.311f};
					break;
				
				case 253:
					Var0 = {114.159f, 567.762f, 175.698f};
					Var0.f_3 = {0f, 0f, 253.286f};
					break;
				
				case 254:
					Var0 = {114.576f, 568.183f, 175.698f};
					Var0.f_3 = {0f, 0f, 241.386f};
					break;
				
				case 255:
					Var0 = {117.289f, 567.181f, 177.124f};
					Var0.f_3 = {-0.2929f, 0f, 91.8827f};
					break;
				
				case 256:
					Var0 = {118.775f, 569.547f, 175.702f};
					Var0.f_3 = {0f, 0f, 76.0915f};
					break;
				
				case 257:
					Var0 = {119.716f, 568.906f, 175.702f};
					Var0.f_3 = {0f, 0f, 77.2165f};
					break;
				
				case 258:
					Var0 = {119.466f, 569.886f, 175.702f};
					Var0.f_3 = {0f, 0f, 91.8665f};
					break;
				
				case 259:
					Var0 = {119.083f, 568.781f, 175.702f};
					Var0.f_3 = {0f, 0f, 61.9915f};
					break;
				
				case 260:
					Var0 = {116.535f, 569.948f, 177.231f};
					Var0.f_3 = {-1.83503f, 0f, 264.27f};
					break;
				
				case 307:
					Var0 = {119.288f, 566.794f, 177.248f};
					Var0.f_3 = {0f, 0f, 174f};
					break;
				
				case 331:
					Var0 = {119.288f, 566.794f, 177.248f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 332:
					Var0 = {119.288f, 566.794f, 177.248f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 333:
					Var0 = {110.692f, 567.268f, 176.565f};
					Var0.f_3 = {0f, 0f, 60f};
					break;
				
				case 334:
					Var0 = {118.648f, 566.064f, 177.366f};
					Var0.f_3 = {0f, 0f, 168.15f};
					break;
				
				case 298:
					Var0 = {117.9327f, 543.3307f, 183.8931f};
					break;
				
				case 299:
					Var0 = {120.3781f, 555.3716f, 184.2547f};
					break;
				
				case 300:
					Var0 = {116.212f, 561.201f, 175.698f};
					Var0.f_3 = {0f, 0f, 276.836f};
					break;
				
				case 301:
					Var0 = {116.98f, 560.359f, 175.698f};
					Var0.f_3 = {0f, 0f, 276.836f};
					break;
				
				case 302:
					Var0 = {116.496f, 562.159f, 175.698f};
					Var0.f_3 = {0f, 0f, 276.836f};
					break;
				
				case 303:
					Var0 = {115.433f, 560.231f, 175.698f};
					Var0.f_3 = {0f, 0f, 276.836f};
					break;
				
				case 310:
				case 335:
				case 336:
					Var0 = {126.3562f, 545.3469f, 183.9628f};
					Var0.f_3 = {0.2302f, -0.2706f, 120.8358f};
					break;
				
				case 337:
				case 338:
				case 339:
					Var0 = {125.944f, 545.1008f, 183.9648f};
					Var0.f_3 = {0.2302f, -0.2706f, 120.8358f};
					break;
				
				case 311:
					Var0 = {117.523f, 551.659f, 183.343f};
					Var0.f_3 = {0f, 0f, -51.7f};
					break;
				
				case 546:
					Var0 = {122.534f, 542.507f, 182.896f};
					Var0.f_3 = {0f, 0f, 6f};
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_327(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 61:
			switch (iParam0)
			{
				case 0:
					break;
				
				case 1:
					Var0 = {-776.5227f, 323.7823f, 210.7473f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-778.5126f, 323.7496f, 214.2471f};
					Var0.f_3 = {0f, 0f, 108.6861f};
					break;
				
				case 3:
					Var0 = {-776.3f, 334.6f, 212.5f};
					break;
				
				case 4:
					Var0 = {-777.8493f, 320.4183f, 209.5652f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-777.3683f, 344.2699f, 214.7482f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {-761.3398f, 329.3192f, 209.6467f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-800.4241f, 329.2564f, 214.8797f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-782.5724f, 324.1019f, 211.4972f};
					Var0.f_3 = {0f, 0f, 250.3059f};
					break;
				
				case 7:
					Var0 = {-764.6471f, 328.812f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 8:
					Var0 = {-764.9313f, 331.6124f, 212.429f};
					Var0.f_3 = {-7.632f, 0f, -121.063f};
					break;
				
				case 141:
					Var0 = {-761.73f, 328.945f, 211.979f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 142:
					Var0 = {-761.755f, 329.29f, 213.133f};
					Var0.f_3 = {180f, -180f, 90f};
					break;
				
				case 143:
					Var0 = {-761.745f, 331.19f, 213.135f};
					Var0.f_3 = {180f, -180f, 90f};
					break;
				
				case 144:
					Var0 = {-764.599f, 328.964f, 211.952f};
					Var0.f_3 = {0.1322f, 0.0536f, -449.934f};
					break;
				
				case 158:
					Var0 = {-763.714f, 330.001f, 212.01f};
					Var0.f_3 = {-2.3423f, 0.0392f, -447.756f};
					break;
				
				case 145:
					Var0 = {-764.6001f, 329.8803f, 211.9535f};
					Var0.f_3 = {0.1045f, 0.0948f, -86.912f};
					break;
				
				case 146:
					Var0 = {-764.599f, 328.964f, 211.952f};
					Var0.f_3 = {0.994f, 0.0536f, -96.7888f};
					break;
				
				case 147:
					Var0 = {-763.408f, 327.378f, 212.375f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 148:
					Var0 = {-762.916f, 327.408f, 211.352f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 153:
					Var0 = {-762.5432f, 329.3139f, 210.3965f};
					Var0.f_3 = {180f, -180f, 0f};
					break;
				
				case 154:
					Var0 = {-763.66f, 328.855f, 212.52f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 155:
					Var0 = {-763.66f, 328.856f, 211.575f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 157:
					Var0 = {-764.237f, 329.214f, 212.005f};
					Var0.f_3 = {-7.145f, 0.0536f, -221.708f};
					break;
				
				case 234:
					Var0 = {-763.4594f, 327.7491f, 212.2718f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 149:
					Var0 = {-765.3744f, 327.4776f, 210.3965f};
					Var0.f_3 = {0f, 0f, 284.6798f};
					break;
				
				case 150:
					Var0 = {-766.7778f, 330.676f, 210.3965f};
					Var0.f_3 = {0f, 0f, 263.0767f};
					break;
				
				case 151:
					Var0 = {-766.3467f, 332.6851f, 210.3965f};
					Var0.f_3 = {0f, 0f, 209.9717f};
					break;
				
				case 152:
					Var0 = {-763.444f, 332.6569f, 210.3965f};
					Var0.f_3 = {0f, 0f, 159.6486f};
					break;
				
				case 174:
					Var0 = {-763.4923f, 327.3426f, 210.3965f};
					Var0.f_3 = {0f, 0f, 47.9457f};
					break;
				
				case 175:
					Var0 = {-763.5795f, 327.9056f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 176:
					Var0 = {-763.6245f, 328.2909f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 177:
					Var0 = {-763.6774f, 328.756f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 178:
					Var0 = {-774.7498f, 331.1707f, 210.4373f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 179:
					Var0 = {-782.939f, 338.1156f, 207.3599f};
					Var0.f_3 = {9.1439f, 0f, -136.3547f};
					break;
				
				case 180:
					Var0 = {-782.2037f, 338.8171f, 207.3599f};
					Var0.f_3 = {9.1439f, 0f, -136.3547f};
					break;
				
				case 235:
					Var0 = {-784.2213f, 341.3405f, 211.3644f};
					Var0.f_3 = {-2.2923f, 0f, -135.1282f};
					break;
				
				case 261:
					Var0 = {-763.713f, 329.725f, 211.387f};
					Var0.f_3 = {0f, 0f, -131.25f};
					break;
				
				case 263:
					Var0 = {-773.075f, 341.675f, 211.4f};
					Var0.f_3 = {0f, 0f, -45.25f};
					break;
				
				case 264:
					Var0 = {-773.075f, 341.675f, 211.4f};
					Var0.f_3 = {0f, 0f, -45.25f};
					break;
				
				case 265:
					Var0 = {-773.075f, 341.675f, 211.4f};
					Var0.f_3 = {0f, 0f, -45.25f};
					break;
				
				case 266:
					Var0 = {-773.075f, 341.675f, 211.4f};
					Var0.f_3 = {0f, 0f, -45.25f};
					break;
				
				case 267:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 268:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 269:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 270:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 271:
					Var0 = {-783.2791f, 338.3737f, 210.2371f};
					Var0.f_3 = {0f, 0f, 220.2962f};
					break;
				
				case 272:
					Var0 = {-783.4805f, 337.3643f, 210.197f};
					Var0.f_3 = {0f, 0f, 257.2607f};
					break;
				
				case 273:
					Var0 = {-780.0349f, 337.0173f, 210.197f};
					Var0.f_3 = {0f, 0f, 40.2944f};
					break;
				
				case 274:
					Var0 = {-780.9129f, 336.5271f, 210.197f};
					Var0.f_3 = {0f, 0f, 17.7598f};
					break;
				
				case 275:
					Var0 = {-779.1f, 333.8f, 211.7f};
					Var0.f_3 = {-4.9f, 0f, 40.3f};
					break;
				
				case 304:
					Var0 = {-772.701f, 319.501f, 204.192f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 305:
					Var0 = {-777.968f, 324.294f, 212.126f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 306:
					Var0 = {-778.506f, 331.316f, 210.397f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 308:
					Var0 = {-775.9152f, 323.6722f, 211.0376f};
					Var0.f_3 = {0f, 0f, 93.6366f};
					break;
				
				case 309:
					Var0 = {-780.331f, 323.8253f, 210.9971f};
					Var0.f_3 = {0f, 0f, 265.1681f};
					break;
				
				case 14:
					Var0 = {-781.8525f, 342.028f, 211.188f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 15:
					Var0 = {-777.7648f, 322.8674f, 214.2165f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {-779.1797f, 333.9276f, 210.197f};
					Var0.f_3 = {0f, 0f, 15.0747f};
					break;
				
				case 10:
					Var0 = {-764.1613f, 330.934f, 210.3965f};
					Var0.f_3 = {0f, 0f, 130.9707f};
					break;
				
				case 11:
					Var0 = {-791.767f, 332.9774f, 210.7966f};
					Var0.f_3 = {0f, 0f, 18.201f};
					break;
				
				case 12:
					Var0 = {-772.1329f, 323.2887f, 210.997f};
					Var0.f_3 = {0f, 0f, 69.4807f};
					break;
				
				case 16:
					Var0 = {-781.31f, 335.92f, 210.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {-781.1396f, 337.2012f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {-781.1335f, 335.2529f, 212.3327f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {-782.17f, 335.91f, 210.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {-782.0966f, 337.2361f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {-782.0477f, 335.1334f, 212.286f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {-783.07f, 335.91f, 210.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {-782.9213f, 336.8988f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {-782.8946f, 335.5682f, 213.2568f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 19:
					Var0 = {-783.82f, 336.97f, 210.66f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 25:
					Var0 = {-783.1451f, 336.9444f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 31:
					Var0 = {-784.7938f, 336.9716f, 212.286f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 20:
					Var0 = {-783.82f, 337.83f, 210.66f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 26:
					Var0 = {-783.1597f, 337.8318f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 32:
					Var0 = {-784.7744f, 337.8362f, 212.286f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 21:
					Var0 = {-783.81f, 338.68f, 210.66f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 27:
					Var0 = {-783.133f, 338.7082f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 33:
					Var0 = {-784.8043f, 338.6786f, 212.286f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-781.8131f, 339.4708f, 211.6216f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 35:
					Var0 = {-780.9454f, 332.7312f, 211.7032f};
					Var0.f_3 = {-4.539f, 0f, 16.647f};
					break;
				
				case 36:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 37:
					break;
				
				case 38:
					Var0 = {-786.1395f, 341.9217f, 211.3448f};
					Var0.f_3 = {0.0124f, 0.0003f, -121.9123f};
					break;
				
				case 39:
					Var0 = {-786.8088f, 340.5944f, 211.3448f};
					Var0.f_3 = {0.8049f, 0.0003f, -115.7942f};
					break;
				
				case 120:
					Var0 = {-789.6643f, 335.5028f, 211.0014f};
					Var0.f_3 = {-3.5475f, 0.0003f, 132.4699f};
					break;
				
				case 121:
					Var0 = {-790.9958f, 335.9232f, 211.0014f};
					Var0.f_3 = {-0.8993f, 0.0003f, 148.8257f};
					break;
				
				case 125:
					break;
				
				case 40:
					Var0 = {-793.3626f, 326.2888f, 209.7966f};
					Var0.f_3 = {0f, 0f, 352.2422f};
					break;
				
				case 41:
					Var0 = {-780.5624f, 338.0597f, 211.227f};
					Var0.f_3.f_2 = 90f;
					break;
				
				case 42:
					Var0 = {-781.034f, 337.971f, 210.227f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 126:
					Var0 = {-780.2787f, 337.1397f, 210.197f};
					break;
				
				case 127:
					Var0 = {-780.4131f, 338.3048f, 212.2371f};
					break;
				
				case 43:
					break;
				
				case 44:
					break;
				
				case 45:
					break;
				
				case 46:
					Var0 = {-793.2892f, 332.1312f, 209.7966f};
					Var0.f_3 = {0f, 0f, 72.63f};
					break;
				
				case 47:
					Var0 = {-793.594f, 333.759f, 210.225f};
					Var0.f_3 = {0f, 0f, -1f};
					break;
				
				case 48:
					break;
				
				case 49:
					break;
				
				case 50:
					Var0 = {-792.4382f, 332.6826f, 209.7966f};
					break;
				
				case 51:
					Var0 = {-794.6772f, 332.6597f, 211.7966f};
					break;
				
				case 612:
					Var0 = {-792.625f, 335.862f, 210.813f};
					Var0.f_3 = {0f, 0f, 133.2f};
					break;
				
				case 615:
					Var0 = {-794.6525f, 335.1653f, 209.7966f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-792.5333f, 335.1687f, 211.7966f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-797.3611f, 333.4506f, 210.7966f};
					Var0.f_3 = {0f, 0f, 264.6319f};
					break;
				
				case 57:
					Var0 = {-796.8f, 332.849f, 209.951f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 64:
					Var0 = {-796.4452f, 333.5307f, 212.1467f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-796.3611f, 333.2506f, 210.7966f};
					Var0.f_3 = {315f, 0f, 264.6319f};
					break;
				
				case 58:
					Var0 = {-797.3146f, 333.8285f, 211.7727f};
					Var0.f_3 = {15.7322f, -0.0116f, -109.2361f};
					break;
				
				case 59:
					Var0 = {-797.4847f, 333.8927f, 211.7222f};
					Var0.f_3 = {13.1712f, 0.0002f, -108.5568f};
					break;
				
				case 60:
					Var0 = {-797.849f, 333.55f, 211.2733f};
					Var0.f_3 = {4.9339f, -0.0651f, -89.7198f};
					break;
				
				case 61:
					Var0 = {-797.665f, 333.5193f, 212.3671f};
					Var0.f_3 = {-28.4554f, -0.0194f, -91.8209f};
					break;
				
				case 62:
					Var0 = {-787.6302f, 329.9987f, 203.0104f};
					Var0.f_3 = {-31.5824f, 0.0118f, 90.1879f};
					break;
				
				case 63:
					Var0 = {-797.2556f, 330.9376f, 211.385f};
					Var0.f_3 = {-5.2724f, 0f, -0.1483f};
					break;
				
				case 66:
					Var0 = {-795.6288f, 331.7296f, 209.5466f};
					Var0.f_3 = {0f, 0f, 5.25f};
					break;
				
				case 67:
					Var0 = {-800.379f, 331.6541f, 213.85f};
					break;
				
				case 110:
					Var0 = {-797.2831f, 332.5585f, 209.8139f};
					Var0.f_3 = {0f, 0f, 175.3101f};
					break;
				
				case 68:
					Var0 = {-795.6696f, 330.9879f, 209.7966f};
					break;
				
				case 109:
					Var0 = {-795.574f, 330.2081f, 210.9462f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 69:
					Var0 = {-786.083f, 339.5002f, 211.197f};
					Var0.f_3 = {0f, 0f, 142.9192f};
					break;
				
				case 70:
					Var0 = {-786.89f, 340.565f, 210.73f};
					Var0.f_3 = {0f, 0f, -92f};
					break;
				
				case 71:
					Var0 = {-786.0963f, 338.6112f, 209.947f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {-785.8922f, 342.4188f, 212.5402f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {-786.083f, 339.5002f, 211.197f};
					Var0.f_3 = {0f, 0f, -28.07f};
					break;
				
				case 74:
					Var0 = {-786.083f, 339.5002f, 211.197f};
					Var0.f_3 = {0f, 0f, -75.82f};
					break;
				
				case 75:
					Var0 = {-785.853f, 340.4683f, 211.2459f};
					Var0.f_3 = {0f, 0f, 88f};
					break;
				
				case 76:
					Var0 = {-786.5244f, 339.8033f, 211.2525f};
					Var0.f_3 = {0f, 0f, -92f};
					break;
				
				case 89:
					Var0 = {-772.427f, 337.641f, 210.397f};
					Var0.f_3 = {0f, 0f, 270.7889f};
					break;
				
				case 91:
					break;
				
				case 90:
					Var0 = {-772.427f, 337.641f, 210.398f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 92:
					break;
				
				case 135:
					Var0 = {-772.3922f, 338.159f, 210.397f};
					break;
				
				case 136:
					Var0 = {-772.3887f, 336.9825f, 212.397f};
					break;
				
				case 77:
					break;
				
				case 79:
					break;
				
				case 80:
					break;
				
				case 81:
					break;
				
				case 82:
					break;
				
				case 78:
					break;
				
				case 128:
					Var0 = {-786.243f, 336.793f, 211.196f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 131:
					break;
				
				case 132:
					break;
				
				case 133:
					Var0 = {-786.0952f, 335.7543f, 210.197f};
					break;
				
				case 134:
					Var0 = {-786.105f, 337.229f, 212.197f};
					break;
				
				case 130:
					Var0 = {-786.243f, 336.793f, 210.196f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 83:
					Var0 = {-772.401f, 339.7611f, 211.3992f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 85:
					break;
				
				case 88:
					break;
				
				case 84:
					Var0 = {-772.401f, 339.761f, 210.399f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 86:
					Var0 = {-772.3981f, 339.0866f, 210.397f};
					break;
				
				case 87:
					Var0 = {-772.4125f, 340.542f, 212.397f};
					break;
				
				case 93:
					Var0 = {-777.9681f, 324.2937f, 212.1467f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 94:
					Var0 = {-779.334f, 323.366f, 211.039f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 95:
					Var0 = {-777.1005f, 323.352f, 212.039f};
					Var0.f_3 = {0f, 0f, 88.66f};
					break;
				
				case 96:
					Var0 = {-782.5724f, 324.1019f, 210.9972f};
					Var0.f_3 = {0f, 0f, 250.3059f};
					break;
				
				case 97:
					Var0 = {-775.8468f, 323.9188f, 212.039f};
					Var0.f_3 = {0f, 0f, 137.06f};
					break;
				
				case 98:
					Var0 = {-776.7234f, 322.9079f, 212.039f};
					Var0.f_3 = {0f, 0f, -38.76f};
					break;
				
				case 99:
					Var0 = {-777.968f, 324.294f, 212.126f};
					Var0.f_3 = {0.18f, 0f, 90f};
					break;
				
				case 100:
					Var0 = {-776.8833f, 323.3055f, 212.0525f};
					Var0.f_3 = {0f, 0f, 92.74f};
					break;
				
				case 101:
					Var0 = {-779.9111f, 322.7118f, 212.371f};
					Var0.f_3 = {-2.5476f, 0.7873f, -60.1641f};
					break;
				
				case 102:
					Var0 = {-785.9226f, 338.5676f, 210.197f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-787.3499f, 338.5698f, 212.397f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 104:
					Var0 = {-790.3068f, 333.9099f, 209.8369f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {-788.9803f, 333.9269f, 212.0424f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {-786.995f, 337.645f, 211.15f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 183:
					Var0 = {-789.262f, 333.715f, 210.79f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 169:
					Var0 = {-767.2747f, 332.7098f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-766.3311f, 332.7101f, 212.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 181:
					Var0 = {-766.61f, 333.15f, 211.113f};
					Var0.f_3 = {0f, 0f, 11.52f};
					break;
				
				case 187:
					Var0 = {-767.79f, 330.2081f, 210.394f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 173:
					Var0 = {-767.7999f, 330.2081f, 211.5462f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 172:
					Var0 = {-767.799f, 330.2f, 211.54f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 201:
					Var0 = {-776.4926f, 322.5599f, 212.4393f};
					Var0.f_3 = {1.846f, -0.0314f, 55.0867f};
					break;
				
				case 106:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 107:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 108:
					Var0 = {-778.979f, 323.526f, 211.997f};
					Var0.f_3 = {90f, 0f, 0f};
					break;
				
				case 117:
					Var0 = {-786.97f, 337.87f, 211.23f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {-789.28f, 333.94f, 210.87f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {-781.3228f, 324.9367f, 210.9971f};
					Var0.f_3 = {0f, 0f, 155.399f};
					break;
				
				case 122:
					Var0 = {-774.2581f, 324.3845f, 211.0376f};
					Var0.f_3 = {0f, 0f, 359.6826f};
					break;
				
				case 123:
					Var0 = {-770.5826f, 322.8713f, 210.997f};
					Var0.f_3 = {0f, 0f, 44.1694f};
					break;
				
				case 124:
					Var0 = {-774.3812f, 330.5458f, 210.4373f};
					Var0.f_3 = {0f, 0f, 12.1428f};
					break;
				
				case 137:
					Var0 = {-776.7812f, 335.7841f, 210.397f};
					break;
				
				case 138:
					Var0 = {-787.4073f, 341.3253f, 211.4155f};
					Var0.f_3 = {-11.2423f, 0f, -122.0545f};
					break;
				
				case 139:
					Var0 = {-770.7645f, 323.2468f, 210.997f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 140:
					Var0 = {-775.7316f, 334.9848f, 210.397f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 156:
					Var0 = {-777.9761f, 322.9964f, 212.1467f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 480:
					Var0 = {-774.0504f, 323.412f, 211.0376f};
					Var0.f_3 = {359.9196f, 0f, 0f};
					break;
				
				case 481:
					Var0 = {-778.4175f, 323.7099f, 210.9971f};
					Var0.f_3 = {3.5f, 0f, 0f};
					break;
				
				case 482:
					Var0 = {-785.2412f, 323.6552f, 213.7473f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 188:
					Var0 = {-775.4138f, 332.4451f, 211.7283f};
					Var0.f_3 = {3.0037f, 0f, -170.7307f};
					break;
				
				case 189:
					Var0 = {-775.4138f, 332.4451f, 211.7283f};
					Var0.f_3 = {-2.7705f, 0f, -108.8474f};
					break;
				
				case 190:
					Var0 = {-765.5242f, 331.7669f, 211.8768f};
					Var0.f_3 = {-3.3052f, 0f, 109.5992f};
					break;
				
				case 191:
					Var0 = {-765.4753f, 331.6203f, 211.8768f};
					Var0.f_3 = {-3.3052f, 0f, 107.0265f};
					break;
				
				case 192:
					Var0 = {-766.5858f, 327.0256f, 211.8885f};
					Var0.f_3 = {-0.4145f, 0f, -70.3221f};
					break;
				
				case 193:
					Var0 = {-766.6987f, 327.4344f, 211.8885f};
					Var0.f_3 = {-0.4145f, 0f, -77.6678f};
					break;
				
				case 194:
					Var0 = {-777.9681f, 324.2937f, 212.1264f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 195:
					Var0 = {-768f, 330f, 211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 196:
					Var0 = {-764.7206f, 331.1032f, 210.3965f};
					Var0.f_3 = {0f, 0f, 225.1773f};
					break;
				
				case 197:
					Var0 = {-765.2438f, 331.0884f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 198:
					Var0 = {-762.7346f, 329.6304f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 199:
					Var0 = {-770.2153f, 331.3272f, 210.397f};
					Var0.f_3 = {0f, 0f, 259.9557f};
					break;
				
				case 200:
					Var0 = {-764.171f, 331.3927f, 210.3965f};
					Var0.f_3 = {0f, 0f, 211.3965f};
					break;
				
				case 284:
					Var0 = {-763.511f, 332.1678f, 212.1505f};
					Var0.f_3 = {-4.7773f, 0f, 149.1447f};
					break;
				
				case 285:
					Var0 = {-763.1504f, 331.66f, 212.1303f};
					Var0.f_3 = {-4.7773f, 0f, 141.9896f};
					break;
				
				case 286:
					Var0 = {-766.4193f, 326.5125f, 212.5311f};
					Var0.f_3 = {-11.4509f, 0f, -44.0223f};
					break;
				
				case 287:
					Var0 = {-766.4193f, 326.5125f, 212.5311f};
					Var0.f_3 = {-11.4509f, 0f, -60.4506f};
					break;
				
				case 202:
					Var0 = {-775.9611f, 323.5558f, 211.0376f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 203:
					Var0 = {-775.0372f, 323.1731f, 211.0376f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 204:
					Var0 = {-772.7438f, 322.6319f, 210.9973f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 205:
					Var0 = {-773.885f, 323.9385f, 210.9974f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 206:
					Var0 = {-775.5784f, 324.4797f, 211.0376f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 207:
					Var0 = {-774.5199f, 325.2492f, 210.9972f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 208:
					Var0 = {-773.3677f, 323.0146f, 210.9975f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 209:
					Var0 = {-773.8023f, 324.8623f, 210.9973f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 210:
					Var0 = {-774.6545f, 324.097f, 211.0376f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 211:
					Var0 = {-774.1133f, 322.7904f, 211.0376f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 212:
					Var0 = {-774.9265f, 326.208f, 211.038f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 213:
					Var0 = {-773.3089f, 325.8212f, 210.9972f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 214:
					Var0 = {-775.1957f, 325.4035f, 210.9971f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 215:
					Var0 = {-773.0787f, 323.9427f, 211.038f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 216:
					Var0 = {-774.0742f, 326.0734f, 210.997f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 217:
					Var0 = {-775.5435f, 326.1689f, 211.038f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 278:
					Var0 = {-787.4547f, 341.7032f, 209.918f};
					break;
				
				case 279:
					Var0 = {-768.1786f, 343.2638f, 214.6127f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {-764.992f, 328.58f, 210.422f};
					Var0.f_3 = {0f, 0f, -44.4563f};
					break;
				
				case 237:
					Var0 = {-766.013f, 327.767f, 210.428f};
					Var0.f_3 = {0f, 0f, -391.657f};
					break;
				
				case 238:
					Var0 = {-766.094f, 328.635f, 210.428f};
					Var0.f_3 = {0f, 0f, -431.877f};
					break;
				
				case 239:
					Var0 = {-764.291f, 327.454f, 210.422f};
					Var0.f_3 = {0f, 0f, 19.2554f};
					break;
				
				case 240:
					Var0 = {-763.809f, 330.573f, 211.974f};
					Var0.f_3 = {-3.55867f, 0f, -212.394f};
					break;
				
				case 241:
					Var0 = {-766.074f, 328.26f, 210.427f};
					Var0.f_3 = {0f, 0f, -118.502f};
					break;
				
				case 242:
					Var0 = {-766.41f, 327.523f, 210.426f};
					Var0.f_3 = {0f, 0f, -69.3404f};
					break;
				
				case 243:
					Var0 = {-766.876f, 328.004f, 210.427f};
					Var0.f_3 = {0f, 0f, -96.1801f};
					break;
				
				case 244:
					Var0 = {-766.555f, 328.857f, 210.426f};
					Var0.f_3 = {0f, 0f, -112.605f};
					break;
				
				case 245:
					Var0 = {-763.954f, 327.798f, 212.09f};
					Var0.f_3 = {-5.44662f, 0f, -267.965f};
					break;
				
				case 246:
					Var0 = {-765.127f, 327.519f, 210.426f};
					Var0.f_3 = {0f, 0f, -6.65659f};
					break;
				
				case 247:
					Var0 = {-765.828f, 327.652f, 210.422f};
					Var0.f_3 = {0f, 0f, -45.6073f};
					break;
				
				case 248:
					Var0 = {-765.739f, 326.824f, 210.426f};
					Var0.f_3 = {0f, 0f, -37.4123f};
					break;
				
				case 249:
					Var0 = {-764.859f, 327.051f, 210.426f};
					Var0.f_3 = {0f, 0f, 2.9834f};
					break;
				
				case 250:
					Var0 = {-764.761f, 329.844f, 211.99f};
					Var0.f_3 = {-2.98413f, 0f, -186.621f};
					break;
				
				case 251:
					Var0 = {-764.973f, 332.062f, 210.424f};
					Var0.f_3 = {0f, 0f, -191.339f};
					break;
				
				case 252:
					Var0 = {-765.377f, 332.849f, 210.424f};
					Var0.f_3 = {0f, 0f, -176.689f};
					break;
				
				case 253:
					Var0 = {-764.435f, 332.614f, 210.424f};
					Var0.f_3 = {0f, 0f, -202.714f};
					break;
				
				case 254:
					Var0 = {-764.06f, 332.156f, 210.424f};
					Var0.f_3 = {0f, 0f, -214.614f};
					break;
				
				case 255:
					Var0 = {-765.34f, 329.562f, 211.85f};
					Var0.f_3 = {-0.2929f, 0f, -364.117f};
					break;
				
				case 256:
					Var0 = {-763.142f, 327.838f, 210.428f};
					Var0.f_3 = {0f, 0f, -379.909f};
					break;
				
				case 257:
					Var0 = {-763.879f, 326.969f, 210.428f};
					Var0.f_3 = {0f, 0f, -378.784f};
					break;
				
				case 258:
					Var0 = {-762.878f, 327.115f, 210.428f};
					Var0.f_3 = {0f, 0f, -364.134f};
					break;
				
				case 259:
					Var0 = {-763.937f, 327.611f, 210.428f};
					Var0.f_3 = {0f, 0f, -394.008f};
					break;
				
				case 260:
					Var0 = {-762.51f, 330.023f, 211.957f};
					Var0.f_3 = {-1.83503f, 0f, -191.73f};
					break;
				
				case 307:
					Var0 = {-765.9982f, 327.6255f, 211.9497f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 331:
					Var0 = {-765.9982f, 327.6255f, 211.9497f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 332:
					Var0 = {-765.9982f, 327.6255f, 211.9497f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 333:
					Var0 = {-764.564f, 336.115f, 211.291f};
					Var0.f_3 = {0f, 0f, -396f};
					break;
				
				case 334:
					Var0 = {-766.594f, 328.328f, 212.092f};
					Var0.f_3 = {0f, 0f, -287.85f};
					break;
				
				case 298:
					Var0 = {-786.7094f, 336.6323f, 211.1975f};
					break;
				
				case 299:
					Var0 = {-771.9327f, 339.9579f, 211.3496f};
					break;
				
				case 300:
					Var0 = {-771.7077f, 330.874f, 210.397f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 87.5541f;
					break;
				
				case 301:
					Var0 = {-770.7838f, 331.6742f, 210.3968f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 87.5541f;
					break;
				
				case 302:
					Var0 = {-770.0904f, 330.633f, 210.397f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 88.5541f;
					break;
				
				case 303:
					Var0 = {-769.0316f, 330.9395f, 210.397f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 87.5541f;
					break;
				
				case 310:
					Var0 = {-777.1f, 342.2f, 211.6f};
					Var0.f_3 = {-3.4f, 0f, 132.4f};
					break;
				
				case 337:
					Var0 = {-777.8727f, 341.4907f, 211.5446f};
					Var0.f_3 = {-1.8116f, 0.05f, 133.352f};
					break;
				
				case 335:
					Var0 = {-772.6966f, 331.9936f, 211.381f};
					Var0.f_3 = {0.3868f, 0f, 56.8358f};
					break;
				
				case 338:
					Var0 = {-773.5449f, 332.5226f, 211.3917f};
					Var0.f_3 = {0.6157f, -0.0123f, 58.2345f};
					break;
				
				case 336:
					Var0 = {-786.1434f, 329.2248f, 211.4969f};
					Var0.f_3 = {0.8433f, 0.0824f, -17.4418f};
					break;
				
				case 339:
					Var0 = {-786.217f, 329.6877f, 211.5049f};
					Var0.f_3 = {1.056f, 0.1046f, -16.8046f};
					break;
				
				case 311:
					Var0 = {-769.6929f, 323.9527f, 211.2633f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 312:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 313:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 314:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 315:
					Var0 = {-781.888f, 336.562f, 211.242f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 316:
					Var0 = {-781.888f, 336.562f, 211.242f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 317:
					Var0 = {-781.888f, 336.562f, 211.242f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 318:
					Var0 = {-772.555f, 340.33f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 319:
					Var0 = {-772.555f, 340.33f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 320:
					Var0 = {-772.555f, 340.33f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 321:
					Var0 = {-772.425f, 339.575f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 322:
					Var0 = {-772.425f, 339.575f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 323:
					Var0 = {-772.425f, 339.575f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 324:
					Var0 = {-773.775f, 335.855f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 325:
					Var0 = {-773.775f, 335.855f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 326:
					Var0 = {-773.775f, 335.855f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 327:
					Var0 = {-773.775f, 335.2f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 328:
					Var0 = {-773.775f, 335.2f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 329:
					Var0 = {-773.775f, 335.2f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
			}
			break;
		
		case -1:
		case 1:
			switch (iParam0)
			{
				case 278:
					Var0 = {-798.7061f, 341.8386f, 204.7183f};
					break;
				
				case 279:
					Var0 = {-785.138f, 341.7283f, 208.6144f};
					break;
				
				case 280:
					Var0 = {-801.4162f, 325.805f, 205.0629f};
					break;
				
				case 281:
					Var0 = {-801.5137f, 342.8037f, 209.2183f};
					break;
				
				case 282:
					Var0 = {-796.1956f, 440.2408f, 79.64348f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 283:
					Var0 = {-862.6429f, 353.2339f, 74.35394f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 0:
					Var0 = {-795.23f, 326.754f, 207.017f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 1:
					Var0 = {-777.986f, 340.524f, 206.371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-775.679f, 340.355f, 209.621f};
					Var0.f_3 = {0f, 0f, -81.2011f};
					break;
				
				case 3:
					Var0 = {-790.411f, 337.121f, 200.414f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {-804.4529f, 334.1814f, 205.146f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-772.4561f, 334.1661f, 210.103f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {-797.6042f, 336.3656f, 200.2337f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-777.6318f, 336.4067f, 205.821f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-775.0327f, 340.3672f, 206.6209f};
					Var0.f_3 = {0f, 0f, 90.0569f};
					break;
				
				case 7:
					Var0 = {-781.339f, 329.26f, 206.626f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 8:
					Var0 = {-777.327f, 332.534f, 209.036f};
					Var0.f_3 = {-7.632f, 0f, -121.063f};
					break;
				
				case 141:
					Var0 = {-781.85f, 327.1f, 208.2f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 142:
					Var0 = {-781.5f, 327.125f, 209.35f};
					Var0.f_3 = {180f, -180f, 0f};
					break;
				
				case 143:
					Var0 = {-779.605f, 327.125f, 209.345f};
					Var0.f_3 = {180f, -180f, 0f};
					break;
				
				case 144:
					Var0 = {-781.8206f, 330.0332f, 208.1489f};
					Var0.f_3 = {0.1322f, 0.0536f, -179.9343f};
					break;
				
				case 158:
					Var0 = {-781.0333f, 329.1684f, 208.1541f};
					Var0.f_3 = {-2.3423f, 0.0392f, -177.7558f};
					break;
				
				case 145:
					Var0 = {-780.8303f, 330.0394f, 208.1503f};
					Var0.f_3 = {-0.2118f, 0.062f, -178.3432f};
					break;
				
				case 146:
					Var0 = {-781.8206f, 330.0332f, 208.1489f};
					Var0.f_3 = {0.994f, 0.0536f, 173.2112f};
					break;
				
				case 147:
					Var0 = {-783.42f, 328.818f, 208.588f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 148:
					Var0 = {-783.39f, 328.3264f, 207.5647f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 153:
					Var0 = {-781.804f, 327.4904f, 206.6219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 154:
					Var0 = {-781.9431f, 329.0702f, 208.7333f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 155:
					Var0 = {-781.9422f, 329.0702f, 207.7881f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 157:
					Var0 = {-781.8206f, 329.6909f, 208.1497f};
					Var0.f_3 = {-7.145f, 0.0536f, 48.2917f};
					break;
				
				case 234:
					Var0 = {-782.9864f, 329.0702f, 208.6212f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 149:
					Var0 = {-783.0602f, 330.8799f, 206.6294f};
					Var0.f_3 = {0f, 0f, 249.5208f};
					break;
				
				case 150:
					Var0 = {-779.8566f, 331.8636f, 206.6209f};
					Var0.f_3 = {0f, 0f, 144.9461f};
					break;
				
				case 151:
					Var0 = {-778.3817f, 330.2339f, 206.6209f};
					Var0.f_3 = {0f, 0f, 108.2755f};
					break;
				
				case 152:
					Var0 = {-779.6613f, 328.0661f, 206.6224f};
					Var0.f_3 = {0f, 0f, 2.1244f};
					break;
				
				case 169:
					Var0 = {-778.2188f, 332.2201f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-776.9868f, 332.502f, 208.3432f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 173:
					Var0 = {-779.4343f, 332.8936f, 206.6209f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 174:
					Var0 = {-783.15f, 329.72f, 206.63f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 175:
					Var0 = {-783.81f, 329.83f, 206.63f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 176:
					Var0 = {-784.47f, 329.94f, 206.63f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 177:
					Var0 = {-785.13f, 330.05f, 206.63f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 178:
					Var0 = {-780.0342f, 341.8051f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 179:
					Var0 = {-782.939f, 338.1156f, 207.3599f};
					Var0.f_3 = {9.1439f, 0f, -136.3547f};
					break;
				
				case 180:
					Var0 = {-782.2037f, 338.8171f, 207.3599f};
					Var0.f_3 = {9.1439f, 0f, -136.3547f};
					break;
				
				case 201:
					Var0 = {-778.9756f, 341.8501f, 208.1999f};
					Var0.f_3 = {-3.0273f, -0.0245f, -131.691f};
					break;
				
				case 235:
					Var0 = {-803.6476f, 339.2161f, 206.4198f};
					Var0.f_3 = {-0.3015f, 0f, -107.8483f};
					break;
				
				case 261:
					Var0 = {-780.576f, 328.938f, 207.613f};
					Var0.f_3 = {0f, 0f, 147f};
					break;
				
				case 262:
					Var0 = {-780.576f, 328.938f, 207.613f};
					Var0.f_3 = {0f, 0f, 147f};
					break;
				
				case 263:
					Var0 = {-803.75f, 338.61f, 206.23f};
					Var0.f_3 = {0f, 0f, 88.75f};
					break;
				
				case 264:
					Var0 = {-803.75f, 338.61f, 206.23f};
					Var0.f_3 = {0f, 0f, 88.75f};
					break;
				
				case 265:
					Var0 = {-803.75f, 338.61f, 206.23f};
					Var0.f_3 = {0f, 0f, 88.75f};
					break;
				
				case 266:
					Var0 = {-803.75f, 338.61f, 206.23f};
					Var0.f_3 = {0f, 0f, 88.75f};
					break;
				
				case 267:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 268:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 269:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 270:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 271:
					Var0 = {-800.5109f, 337.0358f, 205.2443f};
					Var0.f_3 = {0f, 0f, 352.6839f};
					break;
				
				case 272:
					Var0 = {-799.0406f, 337.0152f, 205.2443f};
					Var0.f_3 = {0f, 0f, 0.5617f};
					break;
				
				case 273:
					Var0 = {-798.2809f, 338.6735f, 205.2183f};
					Var0.f_3 = {0f, 0f, 97.7813f};
					break;
				
				case 274:
					Var0 = {-798.5187f, 340.1423f, 205.2443f};
					Var0.f_3 = {0f, 0f, 117.9575f};
					break;
				
				case 275:
					Var0 = {-794.7f, 341.5f, 206.6f};
					Var0.f_3 = {-2.6f, 0f, 126.4f};
					break;
				
				case 304:
					Var0 = {-791.294f, 338.071f, 200.413f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 305:
					Var0 = {-776.752f, 339.378f, 207.73f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 308:
					Var0 = {-778.9598f, 339.3295f, 206.6209f};
					Var0.f_3 = {0f, 0f, 293.5977f};
					break;
				
				case 309:
					Var0 = {-774.4114f, 340.2285f, 206.6209f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 14:
					Var0 = {-800.302f, 342.911f, 207.254f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 15:
					Var0 = {-777.35f, 341.299f, 209.269f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {-795.653f, 336.958f, 200.441f};
					Var0.f_3 = {0f, 0f, -94.1775f};
					break;
				
				case 10:
					Var0 = {-796.9207f, 329.1438f, 205.2183f};
					Var0.f_3 = {0f, 0f, 314.7556f};
					break;
				
				case 11:
					Var0 = {-800.836f, 337.378f, 205.244f};
					Var0.f_3 = {0f, 0f, -0.979401f};
					break;
				
				case 12:
					Var0 = {-793.525f, 341.505f, 205.244f};
					Var0.f_3 = {0f, 0f, 150.429f};
					break;
				
				case 16:
					Var0 = {-797.691f, 339.522f, 205.693f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {-798.984f, 339.539f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {-797.24f, 339.524f, 207.169f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {-797.671f, 338.612f, 205.693f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {-798.992f, 338.65f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {-797.13f, 338.628f, 207.037f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {-797.671f, 337.652f, 205.693f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {-798.984f, 337.647f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {-797.104f, 337.627f, 207.072f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 19:
					Var0 = {-798.831f, 336.392f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 25:
					Var0 = {-798.826f, 337.569f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 31:
					Var0 = {-798.822f, 335.815f, 207.095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 20:
					Var0 = {-799.761f, 336.402f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 26:
					Var0 = {-799.757f, 337.57f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 32:
					Var0 = {-799.757f, 335.847f, 207.043f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 21:
					Var0 = {-800.721f, 336.402f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 27:
					Var0 = {-800.72f, 337.588f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 33:
					Var0 = {-800.733f, 335.888f, 207.224f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-801.7045f, 339.0622f, 206.8001f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 35:
					Var0 = {-796.8376f, 333.3725f, 207.3909f};
					Var0.f_3 = {-9.4648f, 0f, 32.451f};
					break;
				
				case 36:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 37:
					Var0 = {-795.085f, 333.845f, 205.221f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 38:
					Var0 = {-803.8287f, 342.3719f, 206.3142f};
					Var0.f_3 = {0.0594f, 0f, -121.121f};
					break;
				
				case 39:
					Var0 = {-804.1694f, 341.7474f, 206.3142f};
					Var0.f_3 = {0.0111f, 0f, -126.9666f};
					break;
				
				case 120:
					Var0 = {-790.2173f, 342.8064f, 201.4386f};
					Var0.f_3 = {1.2116f, 0f, 126.699f};
					break;
				
				case 121:
					Var0 = {-790.019f, 342.5399f, 201.4386f};
					Var0.f_3 = {1.2116f, 0f, 132.3405f};
					break;
				
				case 125:
					Var0 = {-777.5101f, 328.2689f, 208.0708f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 40:
					Var0 = {-796.22f, 331.85f, 200.414f};
					Var0.f_3 = {0f, 0f, -85.518f};
					break;
				
				case 41:
					Var0 = {-792.9531f, 341.6f, 206.2202f};
					Var0.f_3 = {0f, 0f, 119.72f};
					break;
				
				case 126:
					Var0 = {-792.7816f, 341.9671f, 205.2202f};
					break;
				
				case 127:
					Var0 = {-793.8069f, 340.9885f, 207.2202f};
					break;
				
				case 42:
					Var0 = {Vector(205.673f, 341.996f, -794.072f) + Vector(0.002f, 0.2081f, 0.0758f)};
					Var0.f_3 = {0f, 0f, 45.72f};
					break;
				
				case 340:
					Var0 = {-796.2623f, 338.737f, 201.2637f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 46:
					Var0 = {-795.6178f, 337.0022f, 201.3958f};
					Var0.f_3 = {0f, 0f, 30.2104f};
					break;
				
				case 47:
					Var0 = {-795.891f, 338.663f, 200.827f};
					Var0.f_3 = {0f, 0f, -5.76f};
					break;
				
				case 48:
					Var0 = {-616.5919f, 65.3481f, 101.8033f};
					Var0.f_3 = {0.9407f, 0.0521f, 147.8146f};
					break;
				
				case 49:
					Var0 = {-619.5043f, 62.4537f, 102.0873f};
					Var0.f_3 = {-1.4768f, -0.0422f, -101.6693f};
					break;
				
				case 612:
					Var0 = {-794.937f, 340.63f, 201.428f};
					Var0.f_3 = {0f, 0f, 129.24f};
					break;
				
				case 615:
					Var0 = {-794.1949f, 339.969f, 200.4136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-796.447f, 339.9556f, 202.4136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = {-796.3056f, 337.3367f, 202.4136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {-793.9697f, 337.3367f, 200.4136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-787.837f, 329.8524f, 201.5026f};
					Var0.f_3 = {0f, 0f, 81.0207f};
					break;
				
				case 57:
					Var0 = {-788.33f, 330.65f, 200.612f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 64:
					Var0 = {-788.731f, 330f, 202.775f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-787.9f, 329.6f, 202.5f};
					Var0.f_3 = {315f, 0f, 270f};
					break;
				
				case 58:
					Var0 = {-787.2075f, 330.4225f, 201.8932f};
					Var0.f_3 = {0.0309f, 0.0078f, 94.294f};
					break;
				
				case 59:
					Var0 = {-787.7042f, 329.7779f, 202.4025f};
					Var0.f_3 = {13.0276f, -0.0448f, 76.7381f};
					break;
				
				case 60:
					Var0 = {-787.3719f, 329.972f, 202.0055f};
					Var0.f_3 = {-1.5606f, 0.051f, 89.4345f};
					break;
				
				case 61:
					Var0 = {-787.6302f, 329.9987f, 203.0104f};
					Var0.f_3 = {-31.5824f, 0.0118f, 90.1879f};
					break;
				
				case 62:
					Var0 = {-787.6302f, 329.9987f, 203.0104f};
					Var0.f_3 = {-31.5824f, 0.0118f, 90.1879f};
					break;
				
				case 63:
					Var0 = {-787.8431f, 333.6357f, 201.671f};
					Var0.f_3 = {-7.1813f, 0.0176f, 176.9822f};
					break;
				
				case 66:
					Var0 = {-789.2f, 331.9405f, 200.2136f};
					Var0.f_3 = {0f, 0f, 6.8f};
					break;
				
				case 67:
					Var0 = {-784.3f, 331.9405f, 203.4136f};
					break;
				
				case 110:
					Var0 = {-787.9185f, 330.928f, 200.4275f};
					Var0.f_3 = {0f, 0f, 356.6557f};
					break;
				
				case 68:
					Var0 = {-789.3445f, 332.7155f, 201f};
					break;
				
				case 109:
					Var0 = {-789.3017f, 332.0119f, 201.5596f};
					break;
				
				case 69:
					Var0 = {-793.4663f, 339.1717f, 205.2183f};
					Var0.f_3 = {0f, 0f, 241.5163f};
					break;
				
				case 70:
					Var0 = {-793.609f, 338.332f, 205.696f};
					Var0.f_3 = {0f, 0f, -28.08f};
					break;
				
				case 71:
					Var0 = {-793.9657f, 334.1319f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {-793.9049f, 343.3448f, 206.2567f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {-793.8227f, 336.3578f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 74:
					Var0 = {-792.57f, 338.76f, 206.2183f};
					Var0.f_3 = {0f, 0f, 320f};
					break;
				
				case 75:
					Var0 = {-793.07f, 339.22f, 206.31f};
					Var0.f_3 = {0f, 0f, 151.92f};
					break;
				
				case 76:
					Var0 = {-792.76f, 338.33f, 206.32f};
					Var0.f_3 = {0f, 0f, -28.08f};
					break;
				
				case 89:
					Var0 = {-792.8026f, 330.2704f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0.11f};
					break;
				
				case 91:
					Var0 = {-791.3608f, 331.6151f, 206.7155f};
					Var0.f_3 = {-6.1061f, 0f, 124.716f};
					break;
				
				case 90:
					Var0 = {-791.55f, 331.098f, 206.346f};
					Var0.f_3 = {0f, 0f, -89.64f};
					break;
				
				case 92:
					Var0 = {-791.1231f, 329.0256f, 207.0468f};
					Var0.f_3 = {-10.5496f, 0f, 38.2733f};
					break;
				
				case 135:
					Var0 = {-792.3248f, 330.4116f, 205.2183f};
					break;
				
				case 136:
					Var0 = {-793.3149f, 330.4896f, 207.2183f};
					break;
				
				case 77:
					Var0 = {-795.4578f, 337.2369f, 205.2183f};
					Var0.f_3 = {0f, 0f, 82.6775f};
					break;
				
				case 79:
					Var0 = {-796.8416f, 336.5425f, 206.3782f};
					Var0.f_3 = {4.1239f, 0.032f, -35.7362f};
					break;
				
				case 80:
					Var0 = {-794.1184f, 339.0253f, 207.2513f};
					Var0.f_3 = {-14.3736f, 0f, 132.7127f};
					break;
				
				case 81:
					Var0 = {-796.8088f, 337.2715f, 207.0081f};
					break;
				
				case 82:
					Var0 = {-794.73f, 337.4924f, 205.2183f};
					break;
				
				case 78:
					Var0 = {Vector(206.15f, 337.263f, -796.115f) + Vector(0.0084f, -0.1213f, -0.0385f) + Vector(-0.0001f, 0.0008f, 0.0245f)};
					Var0.f_3 = {Vector(84.6f, 0f, 0f) + Vector(5.64f, 0f, 0f)};
					break;
				
				case 83:
					Var0 = {-793.3814f, 333.4903f, 205.2183f};
					Var0.f_3 = {0f, 0f, 182.6354f};
					break;
				
				case 85:
					Var0 = {-792.4017f, 332.1834f, 206.589f};
					Var0.f_3 = {-0.4759f, 0f, 56.2407f};
					break;
				
				case 88:
					Var0 = {-792.6917f, 334.5816f, 206.9306f};
					Var0.f_3 = {-15.2511f, -0.1442f, 161.552f};
					break;
				
				case 84:
					Var0 = {Vector(205.209f, 332.875f, -793.279f) - Vector(0.0001f, -0.0385f, -0.024f) + Vector(0.0002f, 0.0024f, -0.0121f)};
					Var0.f_3 = {Vector(-178.56f, 0f, 0f) + Vector(2.39f, 0f, 0f)};
					break;
				
				case 86:
					Var0 = {-793.25f, 332.5f, 207f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {-793.25f, 333.75f, 205f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 93:
					Var0 = {-776.7022f, 339.3779f, 207.7347f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 94:
					Var0 = {-775.303f, 340.308f, 206.661f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 95:
					Var0 = {-777.537f, 340.322f, 206.648f};
					Var0.f_3 = {0f, 0f, -89.39f};
					break;
				
				case 96:
					Var0 = {-774.1763f, 330.914f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0.1966f};
					break;
				
				case 97:
					Var0 = {-778.79f, 339.755f, 206.648f};
					Var0.f_3 = {0f, 0f, -42.94f};
					break;
				
				case 98:
					Var0 = {-777.914f, 340.766f, 206.648f};
					Var0.f_3 = {0f, 0f, 141.24f};
					break;
				
				case 99:
					Var0 = {-775.316f, 340.308f, 206.654f};
					Var0.f_3 = {0.18f, 0f, -90f};
					break;
				
				case 100:
					Var0 = {-777.77f, 340.369f, 206.659f};
					Var0.f_3 = {0f, 0f, -87.26f};
					break;
				
				case 101:
					Var0 = {-775.1893f, 340.8357f, 208.0344f};
					Var0.f_3 = {-0.162607f, 0.264814f, 116.59f};
					break;
				
				case 102:
					Var0 = {-794.8591f, 335.3709f, 202.3962f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-794.8546f, 336.6222f, 200.3511f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {-794.419f, 335.328f, 201.441f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 104:
					Var0 = {-800.4421f, 325.256f, 207.2709f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {-800.4426f, 326.6761f, 205.1558f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 183:
					Var0 = {-800.012f, 325.807f, 206.097f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 181:
					Var0 = {-777.695f, 332.054f, 207.34f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 106:
					Var0 = {-796.3882f, 336.8372f, 202.5976f};
					Var0.f_3 = {-22.7361f, 0f, -129.0221f};
					break;
				
				case 107:
					Var0 = {-801.9172f, 326.3802f, 207.4878f};
					Var0.f_3 = {-35.2381f, 0f, -111.7465f};
					break;
				
				case 108:
					Var0 = {-775.7377f, 340.0719f, 207.6209f};
					Var0.f_3 = {90f, 0f, 0f};
					break;
				
				case 117:
					Var0 = {-794.9332f, 335.1039f, 201.5308f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {-800.421f, 325.5437f, 206.1822f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {-774.0972f, 334.244f, 206.6209f};
					Var0.f_3 = {0f, 0f, 352.8303f};
					break;
				
				case 122:
					Var0 = {-779.7051f, 338.5465f, 206.6209f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 123:
					Var0 = {-786.6962f, 335.6548f, 205.2183f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 124:
					Var0 = {-787.4521f, 337.461f, 205.2183f};
					Var0.f_3 = {0f, 0f, 360f};
					break;
				
				case 137:
					Var0 = {-792.5942f, 335.772f, 205.2183f};
					break;
				
				case 139:
					Var0 = {-794.9999f, 334.6179f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 140:
					Var0 = {-797.3075f, 328.841f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 480:
					Var0 = {-778.8162f, 337.2836f, 206.6209f};
					Var0.f_3 = {81.5959f, 0f, 0f};
					break;
				
				case 481:
					Var0 = {-774.3743f, 342.161f, 206.8709f};
					Var0.f_3 = {3.25f, 0f, 0f};
					break;
				
				case 482:
					Var0 = {-774.4149f, 333.1899f, 209.1209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 172:
					Var0 = {-780.6417f, 333.1093f, 207.79f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 187:
					Var0 = {-780.592f, 333.17f, 206.62f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 188:
					Var0 = {-781.7f, 340.8f, 208.1f};
					Var0.f_3 = {-0.7f, 0f, -115.1f};
					break;
				
				case 189:
					Var0 = {-781.8f, 340.7f, 208.1f};
					Var0.f_3 = {0.1f, 0f, -142.3f};
					break;
				
				case 190:
					Var0 = {-778.7875f, 330.4278f, 208.0589f};
					Var0.f_3 = {-3.1551f, 0f, 28.7142f};
					break;
				
				case 191:
					Var0 = {-778.8762f, 330.3792f, 208.0589f};
					Var0.f_3 = {-3.1551f, 0f, 28.7142f};
					break;
				
				case 192:
					Var0 = {-783.8f, 331.7f, 208.1f};
					Var0.f_3 = {1.3f, 0f, -160.8f};
					break;
				
				case 193:
					Var0 = {-782.9999f, 331.8702f, 208.1f};
					Var0.f_3 = {1.3f, 0f, -174.5963f};
					break;
				
				case 194:
					Var0 = {-776.7022f, 339.3779f, 207.7347f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 195:
					Var0 = {-781f, 333f, 208f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 196:
					Var0 = {-780.0269f, 330.2854f, 206.6209f};
					Var0.f_3 = {0f, 0f, 134.6611f};
					break;
				
				case 197:
					Var0 = {-779.5729f, 330.6496f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 198:
					Var0 = {-781.5103f, 328.0656f, 206.6237f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 199:
					Var0 = {-779.7507f, 334.918f, 206.6209f};
					Var0.f_3 = {0f, 0f, 178.965f};
					break;
				
				case 200:
					Var0 = {-779.9905f, 329.9511f, 206.6214f};
					Var0.f_3 = {0f, 0f, 180.6476f};
					break;
				
				case 284:
					Var0 = {-779.2086f, 329.115f, 208.0224f};
					Var0.f_3 = {-3.027f, 0f, 55.8939f};
					break;
				
				case 285:
					Var0 = {-779.8893f, 328.631f, 208.0071f};
					Var0.f_3 = {-2.4917f, 0f, 46.2377f};
					break;
				
				case 286:
					Var0 = {-784.2476f, 332.1267f, 208.4403f};
					Var0.f_3 = {-2.6168f, 0f, -152.3636f};
					break;
				
				case 287:
					Var0 = {-783.6574f, 332.094f, 208.4264f};
					Var0.f_3 = {-2.7465f, 0f, -164.2146f};
					break;
				
				case 202:
					Var0 = {-778.2794f, 340.0222f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 203:
					Var0 = {-778.2555f, 339.0395f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 204:
					Var0 = {-778.3621f, 340.8983f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 205:
					Var0 = {-779f, 340.4049f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 206:
					Var0 = {-779f, 339.4461f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 207:
					Var0 = {-779f, 341.4157f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 208:
					Var0 = {-779f, 338.581f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 209:
					Var0 = {-779.6f, 340.981f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 210:
					Var0 = {-779.6728f, 339.9634f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 211:
					Var0 = {-779.7316f, 338.9568f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 212:
					Var0 = {-779.6448f, 338.1745f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 213:
					Var0 = {-779.5272f, 341.9876f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 214:
					Var0 = {-778.414f, 337.97f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 215:
					Var0 = {-778.997f, 337.4091f, 206.621f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 216:
					Var0 = {-780.2925f, 338.9398f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 217:
					Var0 = {-780.2618f, 337.8353f, 206.621f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {-782.5022f, 330.3769f, 206.625f};
					Var0.f_3 = {0f, 0f, 225.5437f};
					break;
				
				case 237:
					Var0 = {-783.0176f, 331.4477f, 206.625f};
					Var0.f_3 = {0f, 0f, 238.3427f};
					break;
				
				case 238:
					Var0 = {-782.15f, 331.5283f, 206.625f};
					Var0.f_3 = {0f, 0f, 198.123f};
					break;
				
				case 239:
					Var0 = {-783.581f, 329.641f, 206.625f};
					Var0.f_3 = {0f, 0f, 270f};
					break;
				
				case 240:
					Var0 = {-780.2399f, 329.0106f, 208.1872f};
					Var0.f_3 = {-2.857897f, 0f, 56.2119f};
					break;
				
				case 241:
					Var0 = {-782.822f, 331.4591f, 206.63f};
					Var0.f_3 = {0f, 0f, 151.4979f};
					break;
				
				case 242:
					Var0 = {-783.5588f, 331.7943f, 206.6295f};
					Var0.f_3 = {0f, 0f, 200.6596f};
					break;
				
				case 243:
					Var0 = {-783.0787f, 332.2606f, 206.6301f};
					Var0.f_3 = {0f, 0f, 173.8199f};
					break;
				
				case 244:
					Var0 = {-782.2255f, 331.9394f, 206.6295f};
					Var0.f_3 = {0f, 0f, 157.3949f};
					break;
				
				case 245:
					Var0 = {-783.2838f, 329.3391f, 208.2937f};
					Var0.f_3 = {-5.446615f, 0f, 2.034569f};
					break;
				
				case 246:
					Var0 = {-783.5632f, 330.5113f, 206.6291f};
					Var0.f_3 = {0f, 0f, 263.3434f};
					break;
				
				case 247:
					Var0 = {-783.482f, 331.213f, 206.625f};
					Var0.f_3 = {0f, 0f, 224.3927f};
					break;
				
				case 248:
					Var0 = {-784.2584f, 331.1237f, 206.6295f};
					Var0.f_3 = {0f, 0f, 232.5877f};
					break;
				
				case 249:
					Var0 = {-784.0311f, 330.2437f, 206.629f};
					Var0.f_3 = {0f, 0f, 272.9834f};
					break;
				
				case 250:
					Var0 = {-781.2383f, 330.1453f, 208.1935f};
					Var0.f_3 = {-2.984129f, 0f, 83.37932f};
					break;
				
				case 251:
					Var0 = {-778.7227f, 330.4073f, 206.6209f};
					Var0.f_3 = {0f, 0f, 78.6608f};
					break;
				
				case 252:
					Var0 = {-777.936f, 330.8115f, 206.6209f};
					Var0.f_3 = {0f, 0f, 93.3108f};
					break;
				
				case 253:
					Var0 = {-778.1702f, 329.8693f, 206.6209f};
					Var0.f_3 = {0f, 0f, 67.2858f};
					break;
				
				case 254:
					Var0 = {-778.6282f, 329.4945f, 206.6209f};
					Var0.f_3 = {0f, 0f, 55.3858f};
					break;
				
				case 255:
					Var0 = {-781.2223f, 330.7747f, 208.0468f};
					Var0.f_3 = {-0.2929f, 0f, -94.1173f};
					break;
				
				case 256:
					Var0 = {-782.9468f, 328.5765f, 206.6246f};
					Var0.f_3 = {0f, 0f, 250.0915f};
					break;
				
				case 257:
					Var0 = {-783.8154f, 329.3127f, 206.6246f};
					Var0.f_3 = {0f, 0f, 251.2165f};
					break;
				
				case 258:
					Var0 = {-783.6699f, 328.3123f, 206.6246f};
					Var0.f_3 = {0f, 0f, 265.8665f};
					break;
				
				case 259:
					Var0 = {-783.1733f, 329.3715f, 206.6246f};
					Var0.f_3 = {0f, 0f, 235.9915f};
					break;
				
				case 260:
					Var0 = {-780.7612f, 327.9438f, 208.1539f};
					Var0.f_3 = {-1.835026f, 0f, 78.26962f};
					break;
				
				case 307:
					Var0 = {-783.1698f, 331.3681f, 208.1709f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 331:
					Var0 = {-783.1698f, 331.3681f, 208.1709f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 332:
					Var0 = {-783.1698f, 331.3681f, 208.1709f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 333:
					Var0 = {-774.6698f, 329.9981f, 207.4879f};
					Var0.f_3 = {0f, 0f, -126f};
					break;
				
				case 334:
					Var0 = {-782.4568f, 332.0281f, 208.2889f};
					Var0.f_3 = {0f, 0f, -17.85f};
					break;
				
				case 298:
					Var0 = {-796.1306f, 337.1404f, 206.1808f};
					break;
				
				case 299:
					Var0 = {-793.1521f, 332.7068f, 206.3769f};
					break;
				
				case 300:
					Var0 = {-779.5258f, 336.6098f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 301:
					Var0 = {-780.2019f, 337.5271f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 302:
					Var0 = {-779.9085f, 335.6859f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 303:
					Var0 = {-778.6497f, 337.4925f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 310:
					Var0 = {-803.8f, 340.1f, 206.4f};
					Var0.f_3 = {-3.9f, -0.2f, -122.1f};
					break;
				
				case 337:
					Var0 = {-803.5448f, 340.019f, 206.3814f};
					Var0.f_3 = {-3.33f, -0.1433f, -122.0807f};
					break;
				
				case 335:
					Var0 = {-792.1119f, 328.9167f, 206.7493f};
					Var0.f_3 = {-0.9549f, 0f, 28.6771f};
					break;
				
				case 338:
					Var0 = {-792.2817f, 329.3245f, 206.7437f};
					Var0.f_3 = {-0.7326f, -0.0475f, 27.4558f};
					break;
				
				case 336:
					Var0 = {-789.8785f, 332.0506f, 206.8976f};
					Var0.f_3 = {-1.9523f, 0f, 61.3248f};
					break;
				
				case 339:
					Var0 = {-790.3087f, 332.2463f, 206.88f};
					Var0.f_3 = {-2.5427f, 0.0051f, 62.3184f};
					break;
				
				case 311:
					Var0 = {-788.0662f, 342.4757f, 205.5004f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 312:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 313:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 314:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 315:
					Var0 = {-800.088f, 337.221f, 206.265f};
					Var0.f_3 = {0f, 0f, -5.25f};
					break;
				
				case 316:
					Var0 = {-800.088f, 337.221f, 206.265f};
					Var0.f_3 = {0f, 0f, -5.25f};
					break;
				
				case 317:
					Var0 = {-800.088f, 337.221f, 206.265f};
					Var0.f_3 = {0f, 0f, -5.25f};
					break;
				
				case 318:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 319:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 320:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 321:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 322:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 323:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 324:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 325:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 326:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 327:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 328:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 329:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_328(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
		case default:
			Var0 = {-1478.436f, -3753.538f, 9.7027f};
			Var0.f_3 = {0f, 0f, -18f};
			break;
		
		case 0:
			Var0 = {-3555.115f, 1473.013f, 9.7027f};
			Var0.f_3 = {0f, 0f, 57f};
			break;
		
		case 1:
			Var0 = {-3147.049f, 2827.088f, 9.7027f};
			Var0.f_3 = {0f, 0f, -88f};
			break;
		
		case 2:
			Var0 = {-3277.473f, 2159.85f, 9.7027f};
			Var0.f_3 = {0f, 0f, -93f};
			break;
		
		case 3:
			Var0 = {-2822.419f, 4054.84f, 9.7027f};
			Var0.f_3 = {0f, 0f, 72f};
			break;
		
		case 4:
			Var0 = {-3249.849f, 3704.681f, 9.7027f};
			Var0.f_3 = {0f, 0f, -98f};
			break;
		
		case 5:
			Var0 = {-2383.193f, 4685.003f, 9.7027f};
			Var0.f_3 = {0f, 0f, 47f};
			break;
		
		case 6:
			Var0 = {-3224.686f, -215.9825f, 9.7027f};
			Var0.f_3 = {0f, 0f, -3f};
			break;
		
		case 7:
			Var0 = {-3447.876f, 291.9275f, 9.7027f};
			Var0.f_3 = {0f, 0f, 97f};
			break;
		
		case 8:
			Var0 = {-2713.098f, -528.3185f, 9.7027f};
			Var0.f_3 = {0f, 0f, -33f};
			break;
		
		case 9:
			Var0 = {-1981.618f, -1537.269f, 9.7027f};
			Var0.f_3 = {0f, 0f, 142f};
			break;
		
		case 10:
			Var0 = {-2100.817f, -2533.233f, 9.7027f};
			Var0.f_3 = {0f, 0f, -143f};
			break;
		
		case 11:
			Var0 = {-1599.642f, -1891.277f, 9.7027f};
			Var0.f_3 = {0f, 0f, 112f};
			break;
		
		case 12:
			Var0 = {-733.6151f, -3916.985f, 9.7027f};
			Var0.f_3 = {0f, 0f, -168f};
			break;
		
		case 13:
			Var0 = {-363.3534f, -3568.56f, 9.7027f};
			Var0.f_3 = {0f, 0f, 57f};
			break;
		
		case 14:
			Var0 = {-1478.436f, -3753.538f, 9.7027f};
			Var0.f_3 = {0f, 0f, -18f};
			break;
		
		case 15:
			Var0 = {1535.974f, -3061.877f, 9.7027f};
			Var0.f_3 = {0f, 0f, 62f};
			break;
		
		case 16:
			Var0 = {2471.418f, -2430.93f, 9.7027f};
			Var0.f_3 = {0f, 0f, 12f};
			break;
		
		case 17:
			Var0 = {2067.371f, -2813.01f, 9.7027f};
			Var0.f_3 = {0f, 0f, -148f};
			break;
		
		case 18:
			Var0 = {3021.088f, -1513.602f, 9.7027f};
			Var0.f_3 = {0f, 0f, 72f};
			break;
		
		case 19:
			Var0 = {3025.956f, -704.3854f, 9.7027f};
			Var0.f_3 = {0f, 0f, -98f};
			break;
		
		case 20:
			Var0 = {2961.863f, -2007.631f, 9.7027f};
			Var0.f_3 = {0f, 0f, 47f};
			break;
		
		case 21:
			Var0 = {3398.169f, 1958.521f, 9.7027f};
			Var0.f_3 = {0f, 0f, 77f};
			break;
		
		case 22:
			Var0 = {3428.681f, 1202.06f, 9.7027f};
			Var0.f_3 = {0f, 0f, -148f};
			break;
		
		case 23:
			Var0 = {3787.83f, 2567.884f, 9.7027f};
			Var0.f_3 = {0f, 0f, -93f};
			break;
		
		case 24:
			Var0 = {4235.946f, 4004.252f, 9.7027f};
			Var0.f_3 = {0f, 0f, -118f};
			break;
		
		case 25:
			Var0 = {4245.151f, 4595.375f, 9.7027f};
			Var0.f_3 = {0f, 0f, -68f};
			break;
		
		case 26:
			Var0 = {4209.057f, 3392.705f, 9.7027f};
			Var0.f_3 = {0f, 0f, -98f};
			break;
		
		case 27:
			Var0 = {3738.81f, 5768.252f, 9.7027f};
			Var0.f_3 = {0f, 0f, -43f};
			break;
		
		case 28:
			Var0 = {3472.966f, 6315.245f, 9.7027f};
			Var0.f_3 = {0f, 0f, -23f};
			break;
		
		case 29:
			Var0 = {3693.468f, 5194.659f, 9.7027f};
			Var0.f_3 = {0f, 0f, 122f};
			break;
		
		case 30:
			Var0 = {572.9806f, 7142.138f, 9.7027f};
			Var0.f_3 = {0f, 0f, -58f};
			break;
		
		case 31:
			Var0 = {2024.036f, 6907.536f, 9.7027f};
			Var0.f_3 = {0f, 0f, -173f};
			break;
		
		case 32:
			Var0 = {1377.296f, 6863.23f, 9.7027f};
			Var0.f_3 = {0f, 0f, -3f};
			break;
		
		case 33:
			Var0 = {-1169.36f, 6000.214f, 9.7027f};
			Var0.f_3 = {0f, 0f, -88f};
			break;
		
		case 34:
			Var0 = {-759.2205f, 6573.955f, 9.7027f};
			Var0.f_3 = {0f, 0f, -153f};
			break;
		
		case 35:
			Var0 = {-373.8432f, 6964.86f, 9.7027f};
			Var0.f_3 = {0f, 0f, -108f};
			break;
	}
	return Var0;
}

void func_329(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	struct<6>[] Var0 = new struct<6>[2];
	Vector3 vVar13;
	
	Var0[0 /*6*/] = {func_330(iParam3)};
	Var0[1 /*6*/] = {func_330(iParam0)};
	*uParam2 = {func_322(iParam1, iParam3)};
	vVar13 = {*uParam2 - Var0[0 /*6*/]};
	vVar13 = {func_321(vVar13, -Var0[0 /*6*/].f_3.f_2)};
	vVar13 = {func_321(vVar13, Var0[1 /*6*/].f_3.f_2)};
	*uParam2 = {_get_object_offset_from_coords(Var0[1 /*6*/], 0f, vVar13)};
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
}

struct<6> func_330(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = {-794.9184f, 339.6266f, 200.4135f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 1:
			Var0 = {-794.9184f, 339.6266f, 200.4135f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 2:
			Var0 = {-761.0982f, 317.6259f, 169.5963f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 3:
			Var0 = {-761.1888f, 317.6295f, 216.0503f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 4:
			Var0 = {-795.3856f, 340.0188f, 152.7941f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 61:
			Var0 = {-778.5056f, 332.3779f, 212.1968f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 5:
			Var0 = {-258.1807f, -950.6853f, 70.0239f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
		
		case 6:
			Var0 = {-285.0051f, -957.6552f, 85.3035f};
			Var0.f_3 = {0f, 0f, -110f};
			break;
		
		case 7:
			Var0 = {-1471.882f, -530.7484f, 62.34918f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 34:
			Var0 = {-1471.882f, -530.7484f, 49.72156f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 62:
			Var0 = {-1463.15f, -540.2369f, 74.2439f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 35:
			Var0 = {-885.3702f, -451.4775f, 119.327f};
			Var0.f_3 = {0f, 0f, 27.55617f};
			break;
		
		case 36:
			Var0 = {-913.0385f, -438.4284f, 114.3997f};
			Var0.f_3 = {0f, 0f, -153.3093f};
			break;
		
		case 37:
			Var0 = {-892.5499f, -430.4789f, 88.25368f};
			Var0.f_3 = {0f, 0f, 116.9193f};
			break;
		
		case 38:
			Var0 = {-35.0462f, -576.317f, 82.90739f};
			Var0.f_3 = {0f, 0f, 160f};
			break;
		
		case 39:
			Var0 = {-10.3788f, -590.7431f, 93.02542f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
		
		case 65:
			Var0 = {-22.2487f, -589.1461f, 80.2305f};
			Var0.f_3 = {0f, 0f, 69.88f};
			break;
		
		case 40:
			Var0 = {-900.6311f, -376.7462f, 78.27306f};
			Var0.f_3 = {0f, 0f, 26.92611f};
			break;
		
		case 41:
			Var0 = {-929.483f, -374.5104f, 102.2329f};
			Var0.f_3 = {0f, 0f, -152.5531f};
			break;
		
		case 63:
			Var0 = {-914.4202f, -375.8189f, 114.4743f};
			Var0.f_3 = {0f, 0f, -63f};
			break;
		
		case 42:
			Var0 = {-617.1647f, 64.6042f, 100.8196f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 43:
			Var0 = {-584.2015f, 42.7133f, 86.4187f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 64:
			Var0 = {-609.5665f, 50.2203f, 98.3998f};
			Var0.f_3 = {0f, 0f, -90f};
			break;
		
		case 73:
			Var0 = {-171.3969f, 494.2671f, 134.4935f};
			Var0.f_3 = {0f, 0f, 11f};
			break;
		
		case 74:
			Var0 = {339.4982f, 434.0887f, 146.2206f};
			Var0.f_3 = {0f, 0f, -63.5f};
			break;
		
		case 75:
			Var0 = {-761.3884f, 615.7333f, 140.9805f};
			Var0.f_3 = {0f, 0f, -71.5f};
			break;
		
		case 76:
			Var0 = {-678.1752f, 591.0076f, 142.2196f};
			Var0.f_3 = {0f, 0f, 40.5f};
			break;
		
		case 77:
			Var0 = {120.0541f, 553.793f, 181.0943f};
			Var0.f_3 = {0f, 0f, 6f};
			break;
		
		case 78:
			Var0 = {-571.4039f, 655.2008f, 142.6293f};
			Var0.f_3 = {0f, 0f, -14.5f};
			break;
		
		case 79:
			Var0 = {-742.2565f, 587.6547f, 143.0577f};
			Var0.f_3 = {0f, 0f, -29f};
			break;
		
		case 80:
			Var0 = {-857.2222f, 685.051f, 149.6502f};
			Var0.f_3 = {0f, 0f, 4.5f};
			break;
		
		case 81:
			Var0 = {-1287.65f, 443.2707f, 94.6919f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 82:
			Var0 = {374.2012f, 416.9688f, 142.6977f};
			Var0.f_3 = {0f, 0f, -14f};
			break;
		
		case 83:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 84:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 85:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = {0f, 0f, -90f};
			break;
		
		case 86:
			Var0 = {-1573.098f, -4085.806f, 9.7851f};
			Var0.f_3 = {0f, 0f, 162f};
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = {342.8157f, -997.4288f, -100f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = {260.3297f, -997.4288f, -100f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 87:
			Var0 = {-1572.187f, -570.8315f, 109.9879f};
			Var0.f_3 = {0f, 0f, -54f};
			break;
		
		case 88:
			Var0 = {-1383.954f, -476.7112f, 73.507f};
			Var0.f_3 = {0f, 0f, 8f};
			break;
		
		case 89:
			Var0 = {-138.0029f, -629.739f, 170.2854f};
			Var0.f_3 = {0f, 0f, -84f};
			break;
		
		case 90:
			Var0 = {-74.8895f, -817.6883f, 244.8508f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
	}
	return Var0;
}

int func_331(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_332(int iParam0, int iParam1, auto uParam2)
{
	auto uVar0;
	Vector3 vVar3;
	auto uVar6;
	Vector3 vVar9;
	
	func_333(iParam0, &uVar0, &vVar3);
	func_333(iParam1, &uVar6, &vVar9);
	*uParam2 += vVar9.z - vVar3.z;
}

bool func_333(int iParam0, auto uParam1, auto uParam2)
{
	*uParam1 = {0f, 0f, 0f};
	*uParam2 = {0f, 0f, 0f};
	switch (iParam0)
	{
		case -1:
			break;
		
		case 0:
			*uParam1 = {-821.61f, -183.79f, 37.43f};
			*uParam2 = {0f, 0f, func_334(-2.6f)};
			break;
		
		case 1:
			*uParam1 = {133.97f, -1708.3f, 29.48f};
			*uParam2 = {0f, 0f, func_334(-3.84f)};
			break;
		
		case 2:
			*uParam1 = {-1284.88f, -1115.09f, 7.18f};
			*uParam2 = {0f, 0f, func_334(-4.71f)};
			break;
		
		case 3:
			*uParam1 = {1930.9f, 3727.41f, 33.03f};
			*uParam2 = {0f, 0f, func_334(-2.62f)};
			break;
		
		case 4:
			*uParam1 = {1210.92f, -470.18f, 66.39f};
			*uParam2 = {0f, 0f, func_334(-4.97f)};
			break;
		
		case 5:
			*uParam1 = {-30.28f, -151.18f, 57.26f};
			*uParam2 = {0f, 0f, func_334(-0.35f)};
			break;
		
		case 6:
			*uParam1 = {-278.21f, 6231.15f, 31.88f};
			*uParam2 = {0f, 0f, func_334(-5.49f)};
			break;
		
		case 7:
			*uParam1 = {74.6f, -1392.09f, 29.53f};
			*uParam2 = {0f, 0f, func_334(-1.57f)};
			break;
		
		case 8:
			*uParam1 = {1694.87f, 4822.11f, 42.22f};
			*uParam2 = {0f, 0f, func_334(-4.58f)};
			break;
		
		case 9:
			*uParam1 = {426.35f, -807.12f, 29.65f};
			*uParam2 = {0f, 0f, func_334(-4.71f)};
			break;
		
		case 10:
			*uParam1 = {-1101.41f, 2711.75f, 19.26f};
			*uParam2 = {0f, 0f, func_334(-2.41f)};
			break;
		
		case 11:
			*uParam1 = {1197.49f, 2711f, 38.38f};
			*uParam2 = {0f, 0f, func_334(-3.14f)};
			break;
		
		case 12:
			*uParam1 = {-822.1f, -1072.44f, 11.48f};
			*uParam2 = {0f, 0f, func_334(-2.62f)};
			break;
		
		case 13:
			*uParam1 = {4.75f, 6511.3f, 32.03f};
			*uParam2 = {0f, 0f, func_334(-5.54f)};
			break;
		
		case 14:
			*uParam1 = {-1193.51f, -767.47f, 17.33f};
			*uParam2 = {0f, 0f, func_334(-2.5f)};
			break;
		
		case 15:
			*uParam1 = {613.6f, 2762.76f, 42.1f};
			*uParam2 = {0f, 0f, func_334(-1.5f)};
			break;
		
		case 16:
			*uParam1 = {126.36f, -224.03f, 54.57f};
			*uParam2 = {0f, 0f, func_334(1.22f)};
			break;
		
		case 17:
			*uParam1 = {-3170f, 1043.45f, 20.87f};
			*uParam2 = {0f, 0f, func_334(1.16f)};
			break;
		
		case 18:
			*uParam1 = {-708.59f, -152.21f, 37.09f};
			*uParam2 = {0f, 0f, func_334(-1.05f)};
			break;
		
		case 19:
			*uParam1 = {-164.82f, -302.45f, 39.41f};
			*uParam2 = {0f, 0f, func_334(1.24f)};
			break;
		
		case 20:
			*uParam1 = {-1449.23f, -238.49f, 49.49f};
			*uParam2 = {0f, 0f, func_334(-2.3f)};
			break;
		
		case 21:
			break;
		
		case 22:
			*uParam1 = {320.59f, 181.43f, 103.79f};
			*uParam2 = {0f, 0f, func_334(-1.92f)};
			break;
		
		case 23:
			*uParam1 = {1861.29f, 3748.57f, 33.24f};
			*uParam2 = {0f, 0f, func_334(-5.67f)};
			break;
		
		case 24:
			*uParam1 = {-290.83f, 6199.93f, 31.69f};
			*uParam2 = {0f, 0f, func_334(-2.27f)};
			break;
		
		case 25:
			*uParam1 = {-1152.24f, -1424.77f, 5.16f};
			*uParam2 = {0f, 0f, func_334(-4.1f)};
			break;
		
		case 26:
			*uParam1 = {1324.44f, -1650.99f, 52.47f};
			*uParam2 = {0f, 0f, func_334(-4.03f)};
			break;
		
		case 27:
			*uParam1 = {-3170.92f, 1073.84f, 21.04f};
			*uParam2 = {0f, 0f, func_334(-0.41f)};
			break;
		
		case 28:
			*uParam1 = {23.6862f, -1106.461f, 29.9159f};
			*uParam2 = {0f, 0f, 160f};
			break;
		
		case 29:
			*uParam1 = {1693.572f, 3761.601f, 34.8242f};
			*uParam2 = {0f, 0f, -132.6081f};
			break;
		
		case 30:
			*uParam1 = {252.8583f, -51.6284f, 70.06f};
			*uParam2 = {0f, 0f, 69.9999f};
			break;
		
		case 31:
			*uParam1 = {841.0564f, -1034.762f, 28.3137f};
			*uParam2 = {0f, 0f, 0f};
			break;
		
		case 32:
			*uParam1 = {-330.2908f, 6085.548f, 31.5737f};
			*uParam2 = {0f, 0f, -135.0001f};
			break;
		
		case 33:
			*uParam1 = {-660.9294f, -934.1031f, 21.9481f};
			*uParam2 = {0f, 0f, 180f};
			break;
		
		case 34:
			*uParam1 = {-1304.976f, -395.8181f, 36.8147f};
			*uParam2 = {0f, 0f, 75.7783f};
			break;
		
		case 35:
			*uParam1 = {-1117.612f, 2700.264f, 18.673f};
			*uParam2 = {0f, 0f, -138.1729f};
			break;
		
		case 36:
			*uParam1 = {-3172.511f, 1089.412f, 20.9576f};
			*uParam2 = {0f, 0f, -113.4187f};
			break;
		
		case 37:
			*uParam1 = {2566.592f, 293.1332f, 108.8538f};
			*uParam2 = {0f, 0f, 0f};
			break;
		
		case 38:
			*uParam1 = {808.8609f, -2158.508f, 29.7379f};
			*uParam2 = {0f, 0f, 0f};
			break;
		
		case 39:
			*uParam1 = {-1148.15f, -2003.86f, 13.89f};
			*uParam2 = {0f, 0f, func_334(2.36f)};
			break;
		
		case 40:
			*uParam1 = {730.73f, -1073.13f, 23.02f};
			*uParam2 = {0f, 0f, func_334(1.57f)};
			break;
		
		case 41:
			*uParam1 = {-343.62f, -131.44f, 39.71f};
			*uParam2 = {0f, 0f, func_334(-1.92f)};
			break;
		
		case 42:
			*uParam1 = {106.42f, 6623.02f, 33.52f};
			*uParam2 = {0f, 0f, func_334(0.78f)};
			break;
		
		case 43:
			*uParam1 = {1180.45f, 2639.85f, 39.48f};
			*uParam2 = {0f, 0f, func_334(-3.14f)};
			break;
		
		case 44:
			*uParam1 = {-202.98f, -1312.58f, 29.89f};
			*uParam2 = {0f, 0f, func_334(-1.57f)};
			break;
	}
	if (func_331(*uParam1, 0f, 0f, 0f, 0) && func_331(*uParam2, 0f, 0f, 0f, 0))
	{
		return false;
	}
	return true;
}

float func_334(float fParam0)
{
	return fParam0 * 57.29578f;
}

void func_335(int iParam0, int iParam1, auto uParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	
	if (func_331(*uParam2, 0f, 0f, 0f, 0))
	{
		return;
	}
	func_333(iParam0, &vVar0, &vVar3);
	func_333(iParam1, &vVar6, &vVar9);
	vVar12 = {*uParam2 - vVar0};
	vVar12 = {func_321(vVar12, -vVar3.z)};
	vVar12 = {func_321(vVar12, vVar9.z)};
	*uParam2 = {_get_object_offset_from_coords(vVar6, 0f, vVar12)};
}

auto func_336()
{
	return Global_91330.f_380;
}

bool func_337(int iParam0)
{
	int iVar0;
	
	if (func_240())
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			if (func_31(iVar0) == iParam0)
			{
				if (func_61(iVar0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

auto func_338()
{
	func_339();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_339()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_341(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_340(player_ped_id());
			if (func_46(iVar0) && (!func_304(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_46(Global_101154.f_1826.f_539.f_3549))
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

int func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_341(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_341(int iParam0)
{
	if (func_46(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_342()
{
	return Global_91330.f_297 > 0;
}

