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
	struct<21> Local_56 = 0;
	auto uLocal_77 = 0;
	Vector3[] vLocal_78 = new Vector3[32];
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	auto uLocal_180 = 0;
	auto uLocal_181 = 0;
	auto uLocal_182 = 0;
	auto uLocal_183 = 0;
	auto uLocal_184 = 16;
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
	struct<20> Local_349 = 0;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_108(Local_349))
		{
			func_102();
		}
	}
	while (true)
	{
		func_101();
		if (func_91())
		{
			func_102();
		}
		if (network_is_in_tutorial_session() != iLocal_179)
		{
			func_102();
		}
		if (network_get_player_index(network_get_host_of_this_script()) != Local_56.f_17)
		{
			func_102();
		}
		_0x2302C0264EA58D31();
		switch (func_90(participant_id_to_int()))
		{
			case 0:
				if (func_88())
				{
					if (func_87() == 1)
					{
						func_86();
						vLocal_78[participant_id_to_int() /*3*/] = 1;
					}
					else if (func_87() == 4)
					{
						vLocal_78[participant_id_to_int() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_87() == 1)
				{
					func_67();
				}
				else if (func_87() == 4)
				{
					vLocal_78[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_66(&(Local_56.f_20));
				if (func_65(&(Local_56.f_20)))
				{
					vLocal_78[participant_id_to_int() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_78[participant_id_to_int() /*3*/] = 4;
			
			case 4:
				func_102();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_87())
			{
				case 0:
					if (func_41())
					{
						Local_56 = 1;
					}
					break;
				
				case 1:
					func_7();
					if (func_1())
					{
						Local_56 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_1()
{
	if (func_2())
	{
		return true;
	}
	return false;
}

bool func_2()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_175, 8))
	{
		if (!func_6(player_id(), 1, 1))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_56.f_1, 9))
			{
				GAMEPLAY::SET_BIT(&(Local_56.f_1), 9);
			}
			return false;
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_56.f_1, 9))
		{
			return true;
		}
	}
	if (Local_56.f_12 == 0 || Local_56.f_12 == 1)
	{
		if (!network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_4))
		{
			if (!func_4(Local_56.f_2))
			{
				return true;
			}
			if (func_3(Local_56.f_3))
			{
				return true;
			}
			if (Local_56.f_12 > 0)
			{
				return true;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_175, 8))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_56.f_6, 250f, 250f, 250f, false, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_3(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return PED::IS_PED_INJURED(net_to_ped(iParam0));
	}
	return true;
}

int func_4(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return !func_5(net_to_veh(iParam0));
	}
	return false;
}

bool func_5(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return true;
		}
		else if (!is_vehicle_driveable(iParam0, 0))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_6(int iParam0, int iParam1, int iParam2)
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

void func_7()
{
	switch (Local_56.f_12)
	{
		case 0:
			func_35();
			if (func_10())
			{
				func_9();
				Local_56.f_12 = 1;
			}
			break;
		
		case 1:
			if (network_does_network_id_exist(Local_56.f_4))
			{
				if (Local_56.f_15 == 3)
				{
					if (!network_does_network_id_exist(Local_56.f_5))
					{
						Local_56.f_15 = 2;
					}
				}
				if (network_does_network_id_exist(Local_56.f_2))
				{
					func_8(&(Local_56.f_2));
				}
				else if (Local_56.f_13 == 1)
				{
					Local_56.f_13 = 0;
				}
				if (network_does_network_id_exist(Local_56.f_3))
				{
					func_8(&(Local_56.f_3));
				}
				else if (Local_56.f_14 == 1)
				{
					Local_56.f_14 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_8(auto uParam0)
{
	int iVar0;
	
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		set_entity_as_no_longer_needed(&iVar0);
	}
}

void func_9()
{
	if (!does_blip_exist(iLocal_176))
	{
		iLocal_176 = add_blip_for_entity(net_to_obj(Local_56.f_4));
		set_blip_scale(iLocal_176, 0.7f);
		set_blip_sprite(iLocal_176, 351);
		set_blip_colour(iLocal_176, 2);
		set_blip_alpha(iLocal_176, 120);
		set_blip_name_from_text_file(iLocal_176, "AMD_BLIPN");
	}
}

bool func_10()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_56.f_1, 7))
	{
		if (func_4(Local_56.f_2))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(net_to_veh(Local_56.f_2), Local_56.f_6, 5f, 5f, 600f, false, true, 0))
			{
				GAMEPLAY::SET_BIT(&(Local_56.f_1), 7);
			}
		}
	}
	else if (func_88())
	{
		if (func_13())
		{
			if (func_11())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_11()
{
	STREAMING::REQUEST_MODEL(Local_56.f_18.f_1);
	if (STREAMING::HAS_MODEL_LOADED(Local_56.f_18.f_1))
	{
		if (!network_does_network_id_exist(Local_56.f_18) && network_does_network_id_exist(Local_56.f_4))
		{
			if (can_register_mission_objects(1))
			{
				if (func_12(&(Local_56.f_18), Local_56.f_18.f_1, ENTITY::GET_ENTITY_COORDS(net_to_obj(Local_56.f_4), 1) - Vector(5f, 0f, 0f), 1, 1, 1, 0))
				{
					set_network_id_exists_on_all_machines(Local_56.f_18, 1);
					set_entity_heading(net_to_obj(Local_56.f_18), get_entity_heading(net_to_obj(Local_56.f_4)));
					attach_entity_to_entity(net_to_obj(Local_56.f_4), net_to_obj(Local_56.f_18), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
					set_activate_object_physics_as_soon_as_it_is_unfrozen(net_to_obj(Local_56.f_18), 1);
					_0x3910051CCECDB00C(net_to_obj(Local_56.f_18), false);
					activate_physics(net_to_obj(Local_56.f_18));
					set_entity_velocity(net_to_obj(Local_56.f_18), 0f, 0f, -0.2f);
					set_disable_breaking(net_to_obj(Local_56.f_18), 1);
				}
			}
		}
	}
	if (!network_does_network_id_exist(Local_56.f_18))
	{
		return false;
	}
	return true;
}

bool func_12(auto uParam0, int iParam1, Vector3 vParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	STREAMING::REQUEST_MODEL(joaat("prop_box_ammo02a"));
	STREAMING::REQUEST_MODEL(joaat("p_cargo_chute_s"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("prop_box_ammo02a")) && STREAMING::HAS_MODEL_LOADED(joaat("p_cargo_chute_s")))
	{
		if (!network_does_network_id_exist(Local_56.f_4) && !network_does_network_id_exist(Local_56.f_5))
		{
			if (func_4(Local_56.f_2) && can_register_mission_entities(0, 0, 2, 0))
			{
				iVar0 = 200;
				if (!network_does_network_id_exist(Local_56.f_4))
				{
					iVar1 = 0;
					GAMEPLAY::SET_BIT(&iVar1, 12);
					Local_56.f_4 = obj_to_net(create_ambient_pickup(joaat("pickup_ammo_bullet_mp"), ENTITY::GET_ENTITY_COORDS(net_to_veh(Local_56.f_2), 1) - Vector(3f, 0f, 0f), iVar1, iVar0, joaat("prop_box_ammo02a"), 1, 1));
					set_entity_invincible(net_to_obj(Local_56.f_4), true);
					_0x77F33F2CCF64B3AA(net_to_obj(Local_56.f_4), 1);
					set_activate_object_physics_as_soon_as_it_is_unfrozen(net_to_obj(Local_56.f_4), 1);
					_0x3910051CCECDB00C(net_to_obj(Local_56.f_4), false);
					activate_physics(net_to_obj(Local_56.f_4));
					func_34();
					iVar2 = AUDIO::GET_SOUND_ID();
					play_sound_from_entity(iVar2, "Crate_Beeps", net_to_obj(Local_56.f_4), "MP_CRATE_DROP_SOUNDS", 1, 0);
					Local_56.f_16 = get_network_id_from_sound_id(iVar2);
				}
				if (network_does_network_id_exist(Local_56.f_4) && !network_does_network_id_exist(Local_56.f_5))
				{
					if (func_12(&(Local_56.f_5), joaat("p_cargo_chute_s"), ENTITY::GET_ENTITY_COORDS(net_to_veh(Local_56.f_2), 1) - Vector(2f, 0f, 0f), 1, 1, 0, 1))
					{
						set_network_id_exists_on_all_machines(Local_56.f_5, 1);
						attach_entity_to_entity(net_to_obj(Local_56.f_5), net_to_obj(Local_56.f_4), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						set_activate_object_physics_as_soon_as_it_is_unfrozen(net_to_obj(Local_56.f_5), 1);
						_0x3910051CCECDB00C(net_to_obj(Local_56.f_5), false);
						play_entity_anim(net_to_obj(Local_56.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, false, 0, 0, 0f, 0);
						force_entity_ai_and_animation_update(net_to_obj(Local_56.f_5));
					}
				}
				func_32();
				if (!GAMEPLAY::IS_BIT_SET(iLocal_175, 15))
				{
					func_31(&uLocal_184, 3, net_to_ped(Local_56.f_3), "FM_Pilot_Ammo", 0, 1);
					func_14(&uLocal_184, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					GAMEPLAY::SET_BIT(&iLocal_175, 15);
				}
			}
		}
	}
	if (network_does_network_id_exist(Local_56.f_4) && network_does_network_id_exist(Local_56.f_5))
	{
		return true;
	}
	return false;
}

int func_14(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_15(sParam2, iParam3, 0);
}

bool func_15(char* sParam0, int iParam1, int iParam2)
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
					func_29();
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
		if (func_28(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_27();
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
				func_20();
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
				if (func_19())
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
			if (func_18())
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
			func_17();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_16();
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
		func_29();
	}
	return false;
}

void func_16()
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

void func_17()
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

bool func_18()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_19()
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

void func_20()
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
		Global_14413 = func_21();
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

auto func_21()
{
	func_22();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_22()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_25(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_24(PLAYER::PLAYER_PED_ID());
			if (func_23(iVar0) && (!func_26(14) || Global_100106))
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
	return Global_35711 == iParam0;
}

void func_27()
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

int func_28(int iParam0, int iParam1)
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

void func_29()
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

void func_30(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

void func_31(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_32()
{
	if (func_33())
	{
		if (!does_particle_fx_looped_exist(iLocal_178))
		{
			iLocal_178 = _start_particle_fx_looped_on_entity_2("scr_crate_drop_beacon", net_to_obj(Local_56.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			set_particle_fx_looped_colour(iLocal_178, 0.8f, 0.18f, 0.19f, 0);
		}
	}
	if (!does_particle_fx_looped_exist(iLocal_178))
	{
		return false;
	}
	return true;
}

bool func_33()
{
	request_ptfx_asset();
	if (has_ptfx_asset_loaded())
	{
		return true;
	}
	return false;
}

void func_34()
{
	if (AUDIO::GET_SOUND_ID_from_network_id(Local_56.f_16) != -1)
	{
		if (network_does_network_id_exist(Local_56.f_4))
		{
			if (!has_sound_finished(AUDIO::GET_SOUND_ID_from_network_id(Local_56.f_16)))
			{
				stop_sound(AUDIO::GET_SOUND_ID_from_network_id(Local_56.f_16));
			}
			release_sound_id(AUDIO::GET_SOUND_ID_from_network_id(Local_56.f_16));
		}
		else
		{
			if (!has_sound_finished(AUDIO::GET_SOUND_ID_from_network_id(Local_56.f_16)))
			{
				stop_sound(AUDIO::GET_SOUND_ID_from_network_id(Local_56.f_16));
			}
			release_sound_id(AUDIO::GET_SOUND_ID_from_network_id(Local_56.f_16));
		}
	}
}

void func_35()
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(iLocal_175, 11))
	{
		if (!is_help_message_being_displayed())
		{
			iVar0 = func_40(1183, -1, 0);
			if (!GAMEPLAY::IS_BIT_SET(iVar0, 10))
			{
				func_39("AMD_HELP1", -1);
				GAMEPLAY::SET_BIT(&iVar0, 10);
				func_36(1183, iVar0, -1, 1);
				GAMEPLAY::SET_BIT(&iLocal_175, 11);
			}
			else if (!GAMEPLAY::IS_BIT_SET(iVar0, 11))
			{
				func_39("AMD_HELP2", -1);
				GAMEPLAY::SET_BIT(&iVar0, 11);
				func_36(1183, iVar0, -1, 1);
				GAMEPLAY::SET_BIT(&iLocal_175, 11);
			}
			else
			{
				GAMEPLAY::SET_BIT(&iLocal_175, 11);
			}
		}
	}
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_37(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_37(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
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

auto func_38()
{
	return Global_1312747;
}

void func_39(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_40(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_37(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_41()
{
	if (func_64(joaat("cuban800")) && func_64(joaat("s_m_m_pilot_02")))
	{
		if (func_62(&uLocal_182, 4000, 0))
		{
			if (func_44() && func_42())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_42()
{
	if ((!network_does_network_id_exist(Local_56.f_3) && func_64(joaat("s_m_m_pilot_02"))) && network_does_network_id_exist(Local_56.f_2))
	{
		if (func_4(Local_56.f_2))
		{
			if (func_43(&(Local_56.f_3), Local_56.f_2, 22, joaat("s_m_m_pilot_02"), -1, 1, 1, 1))
			{
				set_blocking_of_non_temporary_events(net_to_ped(Local_56.f_3), true);
				PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(net_to_ped(Local_56.f_3), Global_1574231);
				set_ped_random_component_variation(net_to_ped(Local_56.f_3), 0);
				set_ped_keep_task(net_to_ped(Local_56.f_3), true);
				ENTITY::SET_ENTITY_HEALTH(net_to_ped(Local_56.f_3), round(200f * Global_262145.f_151));
				func_86();
				task_perform_sequence(net_to_ped(Local_56.f_3), iLocal_177);
				_set_plane_min_height_above_ground(net_to_veh(Local_56.f_2), round(50f));
			}
		}
	}
	if (!network_does_network_id_exist(Local_56.f_3))
	{
		return false;
	}
	set_model_as_no_longer_needed(joaat("s_m_m_pilot_02"));
	return true;
}

bool func_43(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

bool func_44()
{
	Vector3 vVar0;
	float fVar3;
	
	if (!network_does_network_id_exist(Local_56.f_2))
	{
		if (func_64(joaat("cuban800")))
		{
			func_59(&vVar0, &fVar3);
			if (func_46(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				if (func_45(&(Local_56.f_2), joaat("cuban800"), vVar0, fVar3, 1, 1, 1, 0, 1, 1))
				{
					set_vehicle_doors_locked(net_to_veh(Local_56.f_2), 2);
					ENTITY::FREEZE_ENTITY_POSITION(net_to_veh(Local_56.f_2), false);
					set_entity_dynamic(net_to_veh(Local_56.f_2), 1);
					activate_physics(net_to_veh(Local_56.f_2));
					set_vehicle_forward_speed(net_to_veh(Local_56.f_2), 60f);
					set_heli_blades_full_speed(net_to_veh(Local_56.f_2));
					set_vehicle_engine_on(net_to_veh(Local_56.f_2), true, 1, 0);
					set_vehicle_engine_can_degrade(net_to_veh(Local_56.f_2), false);
					_0x3910051CCECDB00C(net_to_veh(Local_56.f_2), false);
					_set_vehicle_landing_gear(net_to_veh(Local_56.f_2), 3);
					_open_vehicle_bomb_bay(net_to_veh(Local_56.f_2));
				}
			}
		}
	}
	if (!network_does_network_id_exist(Local_56.f_2))
	{
		return false;
	}
	set_model_as_no_longer_needed(joaat("cuban800"));
	return true;
}

bool func_45(auto uParam0, int iParam1, Vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

bool func_46(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
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
		if (func_52(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_47(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_47(Vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_6(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_51(player_id()), vParam0, 1) <= fVar2 + fParam3)
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
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
		if (func_6(iVar1, 1, 1))
		{
			if (!func_49(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_48(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
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
								if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_51(iVar1), vParam0, 1) <= fVar2 + fParam3)
								{
									if (CAM::IS_SPHERE_VISIBLE_to_player(iVar1, vParam0, fParam3))
									{
										return true;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam8 || get_player_team(iVar1) == -1)
						{
							if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_51(iVar1), vParam0, 1) <= fVar2 + fParam3)
							{
								if (CAM::IS_SPHERE_VISIBLE_to_player(iVar1, vParam0, fParam3))
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

bool func_48(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_50(-1, 0) == 8;
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

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
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

Vector3 func_51(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

bool func_52(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_6(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!PED::IS_PED_INJURED(get_player_ped(iVar1)) && func_48(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_53(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(get_player_ped(iVar1)))
							{
								if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_51(iVar1), vParam0, 1) < fParam3)
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

bool func_53(int iParam0)
{
	if (func_58(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_57(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_54(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_56(iParam0);
	if (!iVar0 == func_55())
	{
		if (iVar0 == func_56(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_55()
{
	return -1;
}

int func_56(int iParam0)
{
	if (iParam0 != func_55())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_55();
}

struct<13> func_57(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_58(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_57(iParam0)};
		Global_2459453 = {func_57(iParam1)};
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

void func_59(auto uParam0, auto uParam1)
{
	float fVar0;
	
	*uParam0 = {func_60(Local_56.f_6 + Vector(200f, 0f, 0f), 400f / 2f, 400f, 200f / 2f)};
	*uParam1 = get_heading_from_vector_2d(Local_56.f_6 - *uParam0, Local_56.f_6.f_1 - *uParam0.f_1);
	fVar0 = _0x8ABE8608576D9CE3(*uParam0 - 400f, *uParam0.f_1 - 400f, *uParam0 + 400f, *uParam0.f_1 + 400f);
	if (*uParam0.f_2 < fVar0)
	{
		*uParam0.f_2 = fVar0;
	}
}

Vector3 func_60(Vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	Vector3 vVar0;
	float fVar3;
	
	vVar0 = {get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f};
	fVar3 = fParam5 / 2f;
	vVar0 = {func_61(vVar0, get_random_float_in_range(fParam3, fParam4))};
	vVar0.z = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_61(Vector3 vParam0, float fParam1)
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

bool func_62(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_63(uParam0, iParam2, 0);
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

void func_63(auto uParam0, int iParam1, int iParam2)
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

int func_64(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_65(auto uParam0)
{
	if (*uParam0.f_1)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_66(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_63(uParam0, 0, 0);
		}
	}
}

void func_67()
{
	func_77();
	switch (vLocal_78[participant_id_to_int() /*3*/].f_2)
	{
		case 0:
			if (Local_56.f_12 > 0)
			{
				vLocal_78[participant_id_to_int() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_72();
			func_68();
			break;
		
		case 2:
			func_102();
			break;
	}
}

void func_68()
{
	int iVar0;
	int iVar1;
	
	if (network_does_network_id_exist(Local_56.f_4))
	{
		if (func_6(player_id(), 1, 1))
		{
			iVar1 = func_71(PLAYER::PLAYER_PED_ID());
			if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
			{
				iVar1 = Global_1312415;
			}
			get_max_ammo(PLAYER::PLAYER_PED_ID(), iVar1, &iVar0);
			if ((func_70(iVar1) && func_69(iVar1)) && get_ammo_in_ped_weapon(PLAYER::PLAYER_PED_ID(), iVar1) < iVar0)
			{
			}
			else if (network_is_host_of_this_script())
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_175, 12))
				{
					if (!is_help_message_being_displayed())
					{
						func_39("AMD_HELP3", -1);
						GAMEPLAY::SET_BIT(&iLocal_175, 12);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(iLocal_175, 13))
				{
					if (!is_help_message_being_displayed())
					{
						if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_4))
						{
							if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), net_to_obj(Local_56.f_4), 10f, 10f, 10f, 0, 1, 0))
							{
								if (func_62(&uLocal_180, 20000, 0))
								{
									func_39("AMD_HELP3", -1);
									GAMEPLAY::SET_BIT(&iLocal_175, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_69(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return false;
	}
	return true;
}

bool func_70(int iParam0)
{
	if (iParam0 == joaat("weapon_flare"))
	{
		return false;
	}
	return true;
}

auto func_71(int iParam0)
{
	auto uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

void func_72()
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_4))
	{
		if (network_has_control_of_network_id(Local_56.f_4) || (!_0xA1607996431332DF(Local_56.f_4) && network_is_host_of_this_script()))
		{
			if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_5))
			{
				if (network_has_control_of_network_id(Local_56.f_5) || (!_0xA1607996431332DF(Local_56.f_5) && network_is_host_of_this_script()))
				{
					if (func_76(Local_56.f_4) && func_76(Local_56.f_5))
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_175, 8))
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_175, 7))
							{
								if (!is_entity_playing_anim(net_to_obj(Local_56.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									GAMEPLAY::SET_BIT(&iLocal_175, 8);
									func_75(&(Local_56.f_5));
								}
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_175, 7))
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_175, 6))
							{
								if (is_entity_playing_anim(net_to_obj(Local_56.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									GAMEPLAY::SET_BIT(&iLocal_175, 7);
								}
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_175, 6))
						{
							set_damping(net_to_obj(Local_56.f_4), 2, 0.0245f);
							if (func_73())
							{
								play_entity_anim(net_to_obj(Local_56.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, false, 0, 0, 0f, 0);
								GAMEPLAY::SET_BIT(&iLocal_175, 6);
								if (does_blip_exist(iLocal_176))
								{
									set_blip_alpha(iLocal_176, 255);
								}
							}
						}
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(iLocal_175, 14))
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_18))
				{
					if (network_has_control_of_network_id(Local_56.f_18) || (!_0xA1607996431332DF(Local_56.f_18) && network_is_host_of_this_script()))
					{
						if (func_76(Local_56.f_18))
						{
							set_damping(net_to_obj(Local_56.f_18), 2, 0.1f);
							if (has_object_been_broken(net_to_obj(Local_56.f_18)))
							{
								if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_4))
								{
									detach_entity(net_to_obj(Local_56.f_4), 1, true);
								}
								GAMEPLAY::SET_BIT(&iLocal_175, 14);
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_56.f_1, 8) && GAMEPLAY::IS_BIT_SET(iLocal_175, 8))
						{
							if (func_76(Local_56.f_18))
							{
								if (!is_entity_waiting_for_world_collision(net_to_obj(Local_56.f_18)) && has_collision_loaded_around_entity(net_to_obj(Local_56.f_18)))
								{
									if (has_entity_been_damaged_by_any_ped(net_to_obj(Local_56.f_18)))
									{
										iVar0 = true;
									}
									else if (!is_entity_in_air(net_to_obj(Local_56.f_18)) && is_entity_static(net_to_obj(Local_56.f_18)))
									{
										iVar0 = true;
									}
									if (iVar0)
									{
										set_disable_breaking(net_to_obj(Local_56.f_18), 0);
										GAMEPLAY::SET_BIT(&(Local_56.f_1), 8);
									}
								}
							}
						}
					}
				}
			}
			vVar1 = {ENTITY::GET_ENTITY_COORDS(net_to_obj(Local_56.f_4), 1)};
			if (vVar1.z < -50f && !is_entity_in_water(net_to_obj(Local_56.f_4)))
			{
				if (func_76(Local_56.f_4))
				{
					set_entity_coords(net_to_obj(Local_56.f_4), Local_56.f_6, 1, false, 0, 1);
				}
			}
			if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_4))
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_18) && is_entity_attached(net_to_obj(Local_56.f_4)))
				{
					iVar4 = net_to_obj(Local_56.f_18);
				}
				else
				{
					iVar4 = net_to_obj(Local_56.f_4);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_175, 16))
				{
					if (get_entity_submerged_level(iVar4) >= 0.9f)
					{
						if (AUDIO::GET_SOUND_ID_from_network_id(Local_56.f_16) != -1)
						{
							set_variable_on_sound(AUDIO::GET_SOUND_ID_from_network_id(Local_56.f_16), "Crate_Underwater", 1f);
						}
						GAMEPLAY::SET_BIT(&iLocal_175, 16);
					}
				}
				else if (get_entity_submerged_level(iVar4) < 0.9f)
				{
					if (AUDIO::GET_SOUND_ID_from_network_id(Local_56.f_16) != -1)
					{
						set_variable_on_sound(AUDIO::GET_SOUND_ID_from_network_id(Local_56.f_16), "Crate_Underwater", 0f);
					}
					GAMEPLAY::CLEAR_BIT(&iLocal_175, 16);
				}
			}
		}
	}
}

bool func_73()
{
	int iVar0;
	
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_18))
	{
		if (!is_entity_in_air(net_to_obj(Local_56.f_18)))
		{
			iVar0 = 1;
		}
		if (has_object_been_broken(net_to_obj(Local_56.f_18)))
		{
			iVar0 = 1;
		}
		if (is_entity_in_water(net_to_obj(Local_56.f_18)))
		{
			iVar0 = 1;
		}
		if (func_74())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (func_76(Local_56.f_18))
			{
				set_disable_breaking(net_to_obj(Local_56.f_18), 0);
				return true;
			}
		}
	}
	return false;
}

bool func_74()
{
	float fVar0;
	
	fVar0 = get_entity_pitch(net_to_obj(Local_56.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return true;
	}
	fVar0 = get_entity_roll(net_to_obj(Local_56.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return true;
	}
	return false;
}

void func_75(auto uParam0)
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

int func_76(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		network_request_control_of_network_id(iParam0);
		return network_has_control_of_network_id(iParam0);
	}
	return false;
}

void func_77()
{
	int iVar0;
	
	iVar0 = get_num_reserved_mission_vehicles(false);
	if (Local_56.f_13 != iVar0)
	{
		if (Local_56.f_13 > 0 || !network_does_network_id_exist(Local_56.f_2))
		{
			if (Local_56.f_13 < iVar0 || func_85(Local_56.f_13, 0, 1))
			{
				reserve_network_mission_vehicles(Local_56.f_13);
			}
		}
	}
	iVar0 = get_num_reserved_mission_peds(false);
	if (Local_56.f_14 != iVar0)
	{
		if (Local_56.f_14 > 0 || !network_does_network_id_exist(Local_56.f_3))
		{
			if (Local_56.f_14 < iVar0 || func_84(Local_56.f_14, 0, 1))
			{
				reserve_network_mission_peds(Local_56.f_14);
			}
		}
	}
	iVar0 = get_num_reserved_mission_objects(false);
	if (Local_56.f_15 != iVar0)
	{
		if (Local_56.f_15 < iVar0 || func_78(Local_56.f_15, 0, 1))
		{
			reserve_network_mission_objects(Local_56.f_15);
		}
	}
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	return func_79(2, iParam0, 1, iParam1, iParam2);
}

bool func_79(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_1348769, false))
	{
		return false;
	}
	if ((iParam2 && !iParam3) && iParam1 <= func_83(iParam0) - func_82(iParam0, 0))
	{
		return true;
	}
	else
	{
		if (iParam3)
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_82(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_83(iParam0) - func_81(iParam0);
		}
		else
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_82(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_83(iParam0) - func_82(iParam0, 1);
		}
		if (!iParam4 && Global_1587523[player_id() /*444*/] != 3)
		{
			iVar1 -= func_80(iParam0);
		}
		if (iVar0 < iVar1)
		{
			return true;
		}
	}
	return false;
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348769.f_1;
			break;
		
		case 1:
			return Global_1348769.f_2;
			break;
		
		case 2:
			return Global_1348769.f_3;
			break;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = player_id();
	switch (iParam0)
	{
		case 0:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_207;
			}
			else
			{
				return get_num_reserved_mission_peds(!iParam1);
			}
			break;
		
		case 1:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_208;
			}
			else
			{
				return get_num_reserved_mission_vehicles(!iParam1);
			}
			break;
		
		case 2:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_209;
			}
			else
			{
				return get_num_reserved_mission_objects(!iParam1);
			}
			break;
	}
	return 0;
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348777;
			break;
		
		case 1:
			return Global_1348778;
			break;
		
		case 2:
			return Global_1348779;
			break;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2)
{
	return func_79(0, iParam0, 1, iParam1, iParam2);
}

int func_85(int iParam0, int iParam1, int iParam2)
{
	return func_79(1, iParam0, 1, iParam1, iParam2);
}

void func_86()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_175, 10))
	{
		if (func_4(Local_56.f_2))
		{
			open_sequence_task(&iLocal_177);
			task_vehicle_drive_to_coord(false, net_to_veh(Local_56.f_2), Local_56.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			task_vehicle_drive_to_coord(false, net_to_veh(Local_56.f_2), Local_56.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			close_sequence_task(iLocal_177);
			GAMEPLAY::SET_BIT(&iLocal_175, 10);
		}
	}
}

int func_87()
{
	return Local_56;
}

bool func_88()
{
	STREAMING::REQUEST_MODEL(joaat("prop_box_ammo02a"));
	STREAMING::REQUEST_MODEL(joaat("p_cargo_chute_s"));
	if ((STREAMING::HAS_MODEL_LOADED(joaat("prop_box_ammo02a")) && STREAMING::HAS_MODEL_LOADED(joaat("p_cargo_chute_s"))) && func_89())
	{
		return true;
	}
	return false;
}

bool func_89()
{
	request_anim_dict("P_cargo_chute_S");
	if (has_anim_dict_loaded("P_cargo_chute_S"))
	{
		return true;
	}
	return false;
}

auto func_90(int iParam0)
{
	return vLocal_78[iParam0 /*3*/];
}

bool func_91()
{
	int iVar0;
	
	func_98(&iVar0);
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
	if (func_97())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_96())
	{
		return true;
	}
	if (func_95(157))
	{
		if (!func_94())
		{
			return true;
		}
	}
	if (func_95(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_92() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_92()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_92()
{
	switch (func_93())
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

auto func_93()
{
	return Global_25120;
}

auto func_94()
{
	return Global_2434762.f_574;
}

bool func_95(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_96()
{
	return Global_2443085;
}

auto func_97()
{
	return Global_2434762.f_569;
}

void func_98(auto uParam0)
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
					func_99(iVar0);
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

void func_99(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_100(iVar4, &iVar5))
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

bool func_100(int iParam0, auto uParam1)
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

void func_101()
{
	wait(0);
}

void func_102()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (does_blip_exist(iLocal_176))
	{
		remove_blip(&iLocal_176);
	}
	if (network_is_host_of_this_script())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_18))
				{
					if (has_object_been_broken(net_to_obj(Local_56.f_18)))
					{
						if (func_76(Local_56.f_18))
						{
							set_disable_breaking(net_to_obj(Local_56.f_18), 0);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_4))
				{
					if (is_entity_attached(net_to_obj(Local_56.f_4)))
					{
						if (func_76(Local_56.f_4))
						{
							detach_entity(net_to_obj(Local_56.f_4), 1, true);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_56.f_5))
				{
					if (func_76(Local_56.f_5))
					{
						func_75(&(Local_56.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				wait(0);
			}
			iVar0++;
		}
		Local_56 = 4;
		func_106(func_107(1, 1), 8, func_55());
	}
	func_105();
	func_34();
	func_104();
	func_103();
}

void func_103()
{
	terminate_this_thread();
}

void func_104()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_175, 10))
	{
		clear_sequence_task(&iLocal_177);
	}
}

void func_105()
{
	if (iLocal_178 != 0)
	{
		if (does_particle_fx_looped_exist(iLocal_178))
		{
			stop_particle_fx_looped(iLocal_178, 0);
			iLocal_178 = 0;
		}
	}
}

void func_106(int iParam0, int iParam1, auto uParam2)
{
	struct<4> Var0;
	
	Var0 = 326;
	Var0.f_1 = player_id();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		trigger_script_event(1, &Var0, 6, iParam0);
	}
}

auto func_107(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_6(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_49(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_108(struct<20> Param0)
{
	int iVar0;
	
	func_112(func_113(Param0), Param0);
	reserve_network_mission_peds(1);
	reserve_network_mission_vehicles(1);
	reserve_network_mission_objects(2);
	func_110(0, -1, 0);
	network_register_host_broadcast_variables(&Local_56, 22);
	network_register_player_broadcast_variables(&vLocal_78, 97);
	if (!func_109())
	{
		return false;
	}
	set_this_script_can_be_paused(0);
	if (network_is_host_of_this_script())
	{
		Local_56.f_17 = player_id();
		Local_56.f_6 = {get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), 0f, 5f * 1.5f, 0f)};
		Local_56.f_13 = 1;
		Local_56.f_14 = 1;
		Local_56.f_15 = 3;
		Local_56.f_9 = {0f, 0f, 500f};
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 1)
		{
			Local_56.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_56.f_9 = -9000f;
		}
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 1)
		{
			Local_56.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_56.f_9.f_1 = -9000f;
		}
		if (Local_56.f_9 == 0f && Local_56.f_9.f_1 == 0f)
		{
			Local_56.f_9 = {-9000f, 5000f, 500f};
		}
	}
	iLocal_179 = network_is_in_tutorial_session();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		vLocal_78[participant_id_to_int() /*3*/] = 0;
	}
	return true;
}

bool func_109()
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
		if (func_97())
		{
			return false;
		}
		if (func_95(155))
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

bool func_110(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_103();
			}
			else
			{
				return false;
			}
		}
		if (!func_111())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_103();
					}
					else
					{
						return false;
					}
				}
				if (func_97())
				{
					if (!iParam2)
					{
						func_103();
					}
					else
					{
						return false;
					}
				}
				if (func_95(155))
				{
					if (!iParam2)
					{
						func_103();
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
					func_103();
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
				func_103();
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
			func_103();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_111()
{
	return Global_1315888;
}

void func_112(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_103();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_113(int iParam0)
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

