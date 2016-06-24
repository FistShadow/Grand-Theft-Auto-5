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
	int iLocal_45 = 0;
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
	auto uLocal_57 = 0;
	auto uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	Vector3 vLocal_63 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	auto uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var[] uLocal_76 = new var[1];
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	auto uLocal_81 = 16;
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
	auto uLocal_243 = 0;
	auto uLocal_244 = 0;
	auto uLocal_245 = 0;
	int iLocal_246 = 0;
	auto uLocal_247 = 0;
	auto uLocal_248 = 0;
	int iLocal_249 = 0;
	auto uLocal_250 = 0;
	auto uLocal_251 = 0;
	int iLocal_252 = 0;
	auto uLocal_253 = 0;
	auto uLocal_254 = 0;
	int iLocal_255 = 0;
	auto uLocal_256 = 0;
	auto uLocal_257 = 0;
	int iLocal_258 = 0;
	auto uLocal_259 = 0;
	auto uLocal_260 = 0;
	int iLocal_261 = 0;
	auto uLocal_262 = 0;
	auto uLocal_263 = 0;
	int iLocal_264 = 0;
	auto uLocal_265 = 0;
	auto uLocal_266 = 0;
	auto uLocal_267 = 0;
	auto uLocal_268 = 0;
	auto uLocal_269 = 1097859072;
	auto uLocal_270 = 1500;
	auto uLocal_271 = 45;
	auto uLocal_272 = 1103626240;
	auto uLocal_273 = 5;
	int[] iLocal_274 = new int[1];
	char* sLocal_276 = 0;
	char* sLocal_277 = 0;
	auto uLocal_278 = 1;
	auto uLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	var[] uLocal_282 = new var[1];
	int[] iLocal_284 = new int[4];
	struct<9> Local_289 = 0;
	auto uLocal_298 = 0;
	auto uLocal_299 = 0;
	auto uLocal_300 = 0;
	int iLocal_301 = 0;
	Vector3 vLocal_302 = 0;
	Vector3 vLocal_305 = 0;
	Vector3 vLocal_308 = 0;
	Vector3 vLocal_311 = 0;
	Vector3 vLocal_314 = 0;
	Vector3 vLocal_317 = 0;
	Vector3 vLocal_320 = 0;
	Vector3 vLocal_323 = 0;
	Vector3 fLocal_326 = 0;
	Vector3 fLocal_327 = 0;
	Vector3 fLocal_328 = 0;
	Vector3 fLocal_329 = 0;
	int iLocal_330 = 0;
	auto uLocal_331 = 0;
	int iLocal_332 = 0;
	auto uLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	struct<5> Local_341 = 1;
	auto uLocal_346 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	vLocal_63 = {500f, 500f, 500f};
	fLocal_329 = -1f;
	iLocal_332 = -1;
	iLocal_336 = true;
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stripperhome");
	set_mission_flag(1);
	set_hud_anim_stop_level(player_id(), 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(75))
	{
		func_288();
	}
	iLocal_337 = Local_341.f_5;
	if (iLocal_337)
	{
		network_set_this_script_is_network_script(32, 0, -1);
		func_283(0, -1, 0);
		reserve_network_mission_peds(1);
		set_this_script_can_be_paused(0);
	}
	uLocal_76[0] = Local_341[0];
	Global_100179.f_1 = uLocal_76[0];
	iVar0 = false;
	iVar1 = true;
	iVar2 = get_clock_hours();
	if (func_282() && Local_341.f_4)
	{
		iVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			iVar0 = true;
		}
	}
	while (((!func_253(&Local_341, iVar0) && iLocal_74 != 6) && iLocal_74 != 5) && (iLocal_74 != -1 || !func_252(uLocal_333, 1024)))
	{
		func_244(0);
		wait(false);
	}
	set_model_as_no_longer_needed(func_243(0, 0));
	set_model_as_no_longer_needed(func_243(1, 0));
	if (!iVar1)
	{
		iLocal_74 = 2;
	}
	while (true)
	{
		wait(false);
		if (iLocal_335 > 0)
		{
			func_241();
			iLocal_335 -= round(get_frame_time() * 1000f);
		}
		switch (iLocal_74)
		{
			case -1:
				func_240();
				break;
			
			case 0:
				func_201(1);
				break;
			
			case 1:
				func_104();
				break;
			
			case 2:
				func_201(0);
				break;
			
			case 3:
				func_86();
				break;
			
			case 4:
				func_36(iLocal_336);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&iLocal_261))
				{
					func_7(&iLocal_261);
				}
				else if (func_1(&iLocal_261, 7.5f))
				{
					func_288();
				}
				break;
		}
	}
}

bool func_1(int iParam0, float fParam1)
{
	if (func_3(iParam0, fParam1))
	{
		func_2(iParam0);
		return true;
	}
	return false;
}

void func_2(int iParam0)
{
	*iParam0.f_1 = 0f;
	*iParam0.f_2 = 0f;
	*iParam0 = 0;
}

bool func_3(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

float func_4(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_5(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_5(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
}

int func_6(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

void func_7(int iParam0)
{
	if (!func_10(iParam0))
	{
		func_8(iParam0);
	}
}

void func_8(int iParam0)
{
	func_9(iParam0, 0f);
}

void func_9(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_5(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(iParam0, true);
	GAMEPLAY::CLEAR_BIT(iParam0, 2);
	*iParam0.f_2 = 0f;
}

int func_10(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, true);
}

void func_11()
{
	if (!func_252(uLocal_333, 8192))
	{
		if (func_35())
		{
			func_26();
		}
		else
		{
			iLocal_74 = 6;
		}
	}
	if (func_252(uLocal_333, 16384))
	{
		if (func_12())
		{
			iLocal_74 = 6;
		}
	}
}

bool func_12()
{
	if (is_entity_dead(iLocal_274[0], 0))
	{
		return true;
	}
	if (func_252(uLocal_333, 8192))
	{
		set_ped_reset_flag(iLocal_274[0], 60, true);
		if (is_entity_at_coord(iLocal_274[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_25(PLAYER::PLAYER_PED_ID(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (does_object_of_type_exist_at_coords(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				set_state_of_closest_door_of_type(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, true, 0f, 0);
			}
			if (does_cam_exist(iLocal_284[0]))
			{
				if (is_cam_rendering(iLocal_284[0]))
				{
					func_13(1, 1, 0);
					render_script_cams(false, false, 3000, 1, 0, 0);
					destroy_cam(iLocal_284[0], 1);
				}
			}
			delete_ped(&(iLocal_274[0]));
			return true;
		}
	}
	return false;
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		set_player_control(get_player_index(), true, 0);
	}
	_0xC61B86C9F61EB404(1);
	func_15(0, 1, iParam2, 0);
	if (iParam1)
	{
		display_radar(true);
		display_hud(true);
	}
	func_14(23, 0);
}

void func_14(int iParam0, int iParam1)
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

void func_15(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_24(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_23())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_24(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_20(player_id())) && !func_17(player_id(), 0)) && !func_16())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_20(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_16()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

auto func_19()
{
	return Global_1312747;
}

bool func_20(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return true;
	}
	if (func_21())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_21()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_22(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_23()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_24(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 13);
	}
}

auto func_25(int iParam0, Vector3 vParam1, int iParam2)
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

void func_26()
{
	int iVar0;
	
	func_29();
	if (does_object_of_type_exist_at_coords(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		set_state_of_closest_door_of_type(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, false, 0f, 0);
	}
	func_27(&uLocal_333, 16384);
	freeze_entity_position(iLocal_274[0], false);
	PED::SET_PED_CONFIG_FLAG(iLocal_274[0], 104, true);
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(false, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	task_follow_nav_mesh_to_coord(false, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	task_play_anim(false, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	close_sequence_task(iVar0);
	task_perform_sequence(iLocal_274[0], iVar0);
	clear_sequence_task(&iVar0);
	func_27(&uLocal_333, 8192);
}

void func_27(auto uParam0, int iParam1)
{
	func_28(uParam0, iParam1);
}

void func_28(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()
{
	if (!is_entity_occluded(iLocal_274[0]) && func_34(1, 0, 1))
	{
		func_30(0, 0, 0);
		iLocal_284[0] = create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		render_script_cams(true, false, 3000, 1, 0, 0);
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	set_player_control(get_player_index(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		stop_fire_in_range(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 15f);
	}
	_0xC61B86C9F61EB404(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0);
	display_radar(false);
	display_hud(false);
	func_14(23, 1);
}

void func_31(int iParam0)
{
	if (Global_14571)
	{
		func_32(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_23())
	{
		Global_14413.f_1 = 3;
	}
}

void func_32(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_33(0))
		{
			Global_14571 = 1;
			if (iParam1)
			{
				get_mobile_phone_position(&Global_14350);
			}
			Global_14341 = {Global_14359[Global_14358 /*3*/]};
			set_mobile_phone_position(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = {Global_14366[Global_14358 /*3*/]};
		if (iParam1)
		{
			set_mobile_phone_position(Global_14350);
		}
		else
		{
			set_mobile_phone_position(Global_14341);
		}
	}
}

bool func_33(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 14))
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

bool func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_minigame_in_progress())
	{
		return false;
	}
	if (iParam0)
	{
		if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
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
			if (is_entity_dead(iVar0, 0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!is_entity_dead(iVar0, 0))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1) != PLAYER::PLAYER_PED_ID())
				{
					return false;
				}
			}
		}
		if (!is_entity_dead(iVar0, 0))
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

bool func_35()
{
	if ((uLocal_76[0] == 8 || uLocal_76[0] == 9) || func_25(iLocal_274[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return false;
	}
	return true;
}

void func_36(int iParam0)
{
	Vector3 vVar0;
	auto uVar3;
	int iVar4;
	
	func_62();
	if (iParam0)
	{
		vVar0 = {vLocal_308};
	}
	else
	{
		func_61(&vVar0, &uVar3, 0);
	}
	func_58(vVar0);
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_ped_in_any_vehicle(iLocal_274[0], 0))
		{
			iVar4 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !is_entity_dead(iVar4, 0))
			{
				if (iLocal_338)
				{
					if (func_57(iVar4, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_56();
						task_leave_any_vehicle(iLocal_274[0], false, 16777216);
						func_37();
					}
				}
				else if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vVar0, 4f, 4f, 2f, true, true, 2))
				{
					iLocal_338 = 1;
				}
			}
		}
	}
}

void func_37()
{
	func_55();
	func_48(295, 0, 0);
	func_38(0);
	func_288();
}

void func_38(int iParam0)
{
	struct<8>[] Var0 = new struct<8>[3];
	struct<6>[] Var25 = new struct<6>[3];
	
	if (!func_45())
	{
		return;
	}
	if (!iLocal_69)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (iParam0)
	{
		StringCopy(&(Var25[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var25[1 /*6*/]), "City", 24);
	StringCopy(&(Var25[2 /*6*/]), "????", 24);
	if (func_43(200, &Var25, &Var0, 3, -1, 0, 0))
	{
		_0x0BCA1D2C47B0D269(131, func_42(), 0f);
		_0x0BCA1D2C47B0D269(108, func_41(), 0f);
		_0x0BCA1D2C47B0D269(102, func_40(), 0f);
		_0x0BCA1D2C47B0D269(8, func_39(), 0f);
	}
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
}

int func_39()
{
	return iLocal_67;
}

int func_40()
{
	return iLocal_68;
}

int func_41()
{
	return iLocal_66;
}

bool func_42()
{
	return false;
}

bool func_43(int iParam0, auto uParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	auto uVar82;
	
	if (!network_is_signed_online())
	{
	}
	if ((!network_player_is_cheater() && (network_have_online_privileges() || !_0x1353F87E89946207())) && _0x422D396F80A96547())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (_network_player_is_in_clan())
			{
				Var69 = {func_44(player_id())};
				if (network_clan_player_is_active(&Var69))
				{
					if (network_clan_player_get_desc(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = {*(uParam2[iVar68 /*8*/])};
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (iParam5)
		{
			Global_1835013.f_5 = {Var0};
		}
		if (!iParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2441456.f_3)
			{
				_0xC980E62E33DF1D5C(&Var0, &(Global_1715541.f_10));
			}
			else
			{
				leaderboards2_write_data(&Var0);
			}
		}
		return true;
	}
	if (network_player_is_cheater())
	{
	}
	if (!network_have_online_privileges())
	{
	}
	if (_0x1353F87E89946207())
	{
	}
	if (!_0x422D396F80A96547())
	{
	}
	return false;
}

struct<13> func_44(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_45()
{
	if ((network_is_signed_online() && network_is_signed_in()) && func_46())
	{
		return true;
	}
	return false;
}

bool func_46()
{
	if (func_47())
	{
		return false;
	}
	if (network_is_cloud_available() == 0)
	{
		return false;
	}
	return true;
}

auto func_47()
{
	return Global_2443548;
}

void func_48(int iParam0, int iParam1, int iParam2)
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
		func_54(891 + iParam0, 1, -1, 1);
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
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
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
		func_49();
	}
}

void func_49()
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
		func_53(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_52() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_50();
				}
			}
		}
	}
}

bool func_50()
{
	if (func_51(0))
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

int func_51(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

auto func_52()
{
	return Global_25120;
}

int func_53(int iParam0, int iParam1)
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

int func_54(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_19();
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

void func_55()
{
	iLocal_68++;
	iLocal_69 = 1;
}

void func_56()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]) && !is_entity_dead(iLocal_274[0], 0))
	{
		stop_ped_speaking(iLocal_274[0], 1);
		if (is_ped_in_group(iLocal_274[0]))
		{
			remove_ped_from_group(iLocal_274[0]);
		}
	}
}

bool func_57(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (iParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!iParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
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

void func_58(Vector3 vParam0)
{
	int iVar0;
	
	if (does_blip_exist(iLocal_281))
	{
		remove_blip(&iLocal_281);
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !is_entity_dead(iVar0, 0))
	{
		if (is_ped_in_any_vehicle(iLocal_274[0], 0))
		{
			if (is_ped_in_vehicle(iLocal_274[0], get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if (!does_blip_exist(iLocal_280))
				{
					iLocal_280 = func_59(vParam0, 1);
				}
			}
		}
	}
}

int func_59(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_60(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_60(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(auto uParam0, auto uParam1, int iParam2)
{
	vLocal_317 = {vLocal_317};
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!iParam2)
			{
				*uParam0 = {92.8829f, -1281.123f, 28.1845f};
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = {vLocal_314};
				*uParam1 = fLocal_326;
			}
			vLocal_317 = {*uParam0};
			break;
		
		case 8:
			if (!iParam2)
			{
				*uParam0 = {-1615.991f, 187.4827f, 59.1337f};
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = {vLocal_314};
				*uParam1 = fLocal_326;
			}
			vLocal_317 = {*uParam0};
			break;
		
		case 9:
			if (!iParam2)
			{
				*uParam0 = {1538.432f, 3776.85f, 33.5178f};
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = {vLocal_314};
				*uParam1 = fLocal_326;
			}
			vLocal_317 = {*uParam0};
			break;
	}
}

void func_62()
{
	if (PED::IS_PED_INJURED(iLocal_274[0]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
		{
		}
		else if (is_entity_dead(iLocal_274[0], 0))
		{
		}
		func_63(0);
	}
}

void func_63(int iParam0)
{
	if ((uLocal_76[0] > -1 && uLocal_76[0] < 10) && iParam0 != 2)
	{
		func_84(uLocal_76[0], func_85(uLocal_76[0]) / 2);
	}
	func_82();
	switch (iParam0)
	{
		case 0:
			func_80("SCLUB_HOME_D", uLocal_76[0]);
			func_84(uLocal_76[0], 0);
			func_69(uLocal_76[0], 1);
			iLocal_74 = 6;
			break;
		
		case 1:
			clear_prints();
			func_64("SCLUB_HOME_A", uLocal_76[0], 0);
			iLocal_74 = 5;
			break;
		
		case 2:
			iLocal_74 = 5;
			break;
		
		case 4:
			func_80("SCLUB_HOME_D3", uLocal_76[0]);
			iLocal_74 = 6;
			break;
		
		case 3:
			if (func_25(iLocal_274[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_74 = 5;
			}
			else
			{
				iLocal_74 = 6;
			}
			break;
	}
}

void func_64(char* sParam0, auto uParam1, int iParam2)
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_68(uParam1)}, 6);
	if (!func_67(sParam0, &sVar0))
	{
		if (!iParam2)
		{
			func_66(sParam0, &sVar0, -1);
		}
		else
		{
			func_65(sParam0, &sVar0);
		}
	}
}

void func_65(char* sParam0, char* sParam1)
{
	_set_text_component_format(sParam0);
	_add_text_component_item_string(sParam1);
	_display_help_text_from_string_label(0, 1, true, -1);
}

void func_66(char* sParam0, char* sParam1, int iParam2)
{
	_set_text_component_format(sParam0);
	_add_text_component_item_string(sParam1);
	_display_help_text_from_string_label(0, 0, true, iParam2);
}

int func_67(char* sParam0, char* sParam1)
{
	_0x0A24DA3A41B718F5(sParam0);
	_add_text_component_item_string(sParam1);
	return _0x10BDDBFC529428DD(0);
}

struct<4> func_68(auto uParam0)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, "SCLUB_NM_", 16);
	StringIntConCat(&cVar0, uParam0, 16);
	return cVar0;
}

void func_69(auto uParam0, int iParam1)
{
	if (iParam1)
	{
		func_27(&(Global_101154.f_243[func_72() /*53*/].f_2[uParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_70(&(Global_101154.f_243[func_72() /*53*/].f_2[uParam0 /*5*/].f_3), 2);
	}
}

void func_70(auto uParam0, int iParam1)
{
	func_71(uParam0, iParam1);
}

void func_71(auto uParam0, auto uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

int func_72()
{
	int iVar0;
	
	iVar0 = func_74();
	switch (iVar0)
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
		
		default:
			switch (func_73(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

auto func_74()
{
	func_75();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_75()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_79(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_78(PLAYER::PLAYER_PED_ID());
			if (func_77(iVar0) && (!func_76(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_77(Global_101154.f_1826.f_539.f_3549))
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

int func_76(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_77(int iParam0)
{
	return iParam0 < 3;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_79(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_79(int iParam0)
{
	if (func_77(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_80(char* sParam0, auto uParam1)
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_68(uParam1)}, 6);
	func_81(sParam0, &sVar0, 7500, 1);
}

void func_81(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	_set_text_entry_2(sParam0);
	_add_text_component_item_string(sParam1);
	_draw_subtitle_timed(iParam2, 1);
}

void func_82()
{
	if (does_blip_exist(iLocal_281))
	{
		remove_blip(&iLocal_281);
	}
	if (does_blip_exist(iLocal_280))
	{
		remove_blip(&iLocal_280);
	}
	func_83();
}

void func_83()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (does_blip_exist(uLocal_282[iVar0]))
		{
			remove_blip(&(uLocal_282[iVar0]));
		}
		iVar0++;
	}
}

void func_84(auto uParam0, int iParam1)
{
	Global_101154.f_243[func_72() /*53*/].f_2[uParam0 /*5*/] = iParam1;
}

auto func_85(auto uParam0)
{
	return Global_101154.f_243[func_72() /*53*/].f_2[uParam0 /*5*/];
}

void func_86()
{
	func_62();
	func_82();
	switch (iLocal_80)
	{
		case 0:
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (is_ped_in_any_vehicle(iLocal_274[0], 0))
				{
					if (!func_103("SCLUB_SECLUDED"))
					{
						func_102("SCLUB_SECLUDED");
					}
					if (func_101() && get_entity_speed(PLAYER::PLAYER_PED_ID()) == 0f)
					{
						clear_help(1);
						request_anim_dict(func_96(iLocal_274[0], 0, 0));
						iLocal_80 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_89())
			{
				iLocal_80 = 2;
			}
			break;
		
		case 2:
			if (get_script_task_status(PLAYER::PLAYER_PED_ID(), 242628503) != 1)
			{
				func_241();
				if (get_clock_hours() > 20 || get_clock_hours() < 4)
				{
					iLocal_336 = false;
				}
				set_follow_ped_cam_view_mode(iLocal_45);
				func_87(iLocal_336);
				iLocal_74 = 4;
			}
			break;
	}
}

void func_87(int iParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (iParam0)
			{
				func_80("SCLUB_HOME_GO", uLocal_76[0]);
			}
			else
			{
				func_88("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_88("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_88(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

bool func_89()
{
	if (has_anim_dict_loaded(func_96(iLocal_274[0], 0, 0)))
	{
		func_90(iLocal_274[0], 0, 1, -1);
		func_90(PLAYER::PLAYER_PED_ID(), 0, 0, -1);
		return true;
	}
	return false;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	
	if (is_entity_dead(iParam0, 0))
	{
		return;
	}
	iVar0 = get_vehicle_ped_is_in(iParam0, 1);
	if (!is_vehicle_driveable(iVar0, 0))
	{
		return;
	}
	iLocal_45 = get_follow_ped_cam_view_mode();
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) && func_95(0, 1))
	{
		if (iLocal_45 != 4)
		{
			set_follow_ped_cam_view_mode(4);
		}
	}
	iVar1 = func_94(iVar0);
	sVar2 = func_96(iParam0, 0, 0);
	if (!has_anim_dict_loaded(sVar2))
	{
		request_anim_dict(sVar2);
	}
	else
	{
		open_sequence_task(&iVar3);
		task_play_anim(false, sVar2, func_91(0, iParam2, iParam1, iVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		task_play_anim(false, sVar2, func_91(1, iParam2, iParam1, iVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		task_play_anim(false, sVar2, func_91(2, iParam2, iParam1, iVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		task_play_anim(false, sVar2, func_91(3, iParam2, iParam1, iVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		task_play_anim(false, sVar2, func_91(4, iParam2, iParam1, iVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		close_sequence_task(iVar3);
		task_perform_sequence(iParam0, iVar3);
		clear_sequence_task(&iVar3);
	}
}

char* func_91(int iParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (iParam3)
			{
				if (iParam2)
				{
					if (iParam1)
					{
						sVar0 = func_93(18);
					}
					else
					{
						sVar0 = func_93(23);
					}
				}
				else if (iParam1)
				{
					sVar0 = func_93(8);
				}
				else
				{
					sVar0 = func_93(13);
				}
			}
			else if (iParam2)
			{
				if (iParam1)
				{
					sVar0 = func_92(18);
				}
				else
				{
					sVar0 = func_92(23);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_92(8);
			}
			else
			{
				sVar0 = func_92(13);
			}
			break;
		
		case 1:
			if (iParam3)
			{
				if (iParam2)
				{
					if (iParam1)
					{
						sVar0 = func_93(19);
					}
					else
					{
						sVar0 = func_93(24);
					}
				}
				else if (iParam1)
				{
					sVar0 = func_93(9);
				}
				else
				{
					sVar0 = func_93(14);
				}
			}
			else if (iParam2)
			{
				if (iParam1)
				{
					sVar0 = func_92(19);
				}
				else
				{
					sVar0 = func_92(24);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_92(9);
			}
			else
			{
				sVar0 = func_92(14);
			}
			break;
		
		case 2:
			if (iParam3)
			{
				if (iParam2)
				{
					if (iParam1)
					{
						sVar0 = func_93(20);
					}
					else
					{
						sVar0 = func_93(25);
					}
				}
				else if (iParam1)
				{
					sVar0 = func_93(10);
				}
				else
				{
					sVar0 = func_93(15);
				}
			}
			else if (iParam2)
			{
				if (iParam1)
				{
					sVar0 = func_92(20);
				}
				else
				{
					sVar0 = func_92(25);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_92(10);
			}
			else
			{
				sVar0 = func_92(15);
			}
			break;
		
		case 3:
			if (iParam3)
			{
				if (iParam2)
				{
					if (iParam1)
					{
						sVar0 = func_93(21);
					}
					else
					{
						sVar0 = func_93(26);
					}
				}
				else if (iParam1)
				{
					sVar0 = func_93(11);
				}
				else
				{
					sVar0 = func_93(16);
				}
			}
			else if (iParam2)
			{
				if (iParam1)
				{
					sVar0 = func_92(21);
				}
				else
				{
					sVar0 = func_92(26);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_92(11);
			}
			else
			{
				sVar0 = func_92(16);
			}
			break;
		
		case 4:
			if (iParam3)
			{
				if (iParam2)
				{
					if (iParam1)
					{
						sVar0 = func_93(22);
					}
					else
					{
						sVar0 = func_93(27);
					}
				}
				else if (iParam1)
				{
					sVar0 = func_93(12);
				}
				else
				{
					sVar0 = func_93(17);
				}
			}
			else if (iParam2)
			{
				if (iParam1)
				{
					sVar0 = func_92(22);
				}
				else
				{
					sVar0 = func_92(27);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_92(12);
			}
			else
			{
				sVar0 = func_92(17);
			}
			break;
		
		case 5:
			if (iParam3)
			{
				if (iParam1)
				{
					sVar0 = func_93(3);
				}
				else
				{
					sVar0 = func_93(2);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_92(3);
			}
			else
			{
				sVar0 = func_92(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_92(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_93(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

bool func_94(int iParam0)
{
	if (is_vehicle_driveable(iParam0, 0))
	{
		switch (get_vehicle_layout_hash(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
				return true;
				break;
			}
	}
	return false;
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	if (iParam0)
	{
		iVar0 = _0xEE778F8C7E1142E2(0) == 4;
	}
	if (iParam1)
	{
		if (!iVar0)
		{
			iVar0 = _0xEE778F8C7E1142E2(1) == 4;
		}
	}
	return iVar0;
}

auto func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		iVar0 = get_vehicle_ped_is_in(iParam0, 1);
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (func_94(iVar0))
			{
				if ((!func_95(0, 1) || iParam2) && !iParam1)
				{
					return func_100();
				}
				else
				{
					return func_99();
				}
			}
		}
	}
	if ((!func_95(0, 1) || iParam2) && !iParam1)
	{
		return func_98();
	}
	return func_97();
}

char* func_97()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_98()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_99()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_100()
{
	return "mini@prostitutes@sexlow_veh";
}

bool func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	float fVar6;
	Vector3 vVar7;
	auto uVar10;
	Vector3 vVar11;
	Vector3 fVar14;
	int iVar15;
	
	fVar6 = 25f;
	func_61(&vVar7, &uVar10, 0);
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar2 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		}
		vVar3 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
		if (get_closest_major_vehicle_node(vVar3, &vVar11, 1077936128, 0))
		{
			fVar14 = vdist(vVar3, vVar11);
			if (fVar14 <= 10f)
			{
				return false;
			}
		}
		if (vdist(vVar3, vLocal_308) < 20f || vdist(vVar3, vVar7) < 20f)
		{
			return false;
		}
		if (is_cop_vehicle_in_area_3d(vVar3 - Vector(20f, 20f, 20f), vVar3 + Vector(20f, 20f, 20f)))
		{
			return false;
		}
		get_closest_ped(vVar3, fVar6, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!is_entity_dead(iVar0, 0))
			{
				if (has_entity_clear_los_to_entity(iVar0, PLAYER::PLAYER_PED_ID(), 17))
				{
					return false;
				}
			}
		}
		else
		{
			iVar1 = get_random_vehicle_in_sphere(vVar3, fVar6, false, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (is_vehicle_driveable(iVar1, 0))
					{
						iVar0 = get_ped_in_vehicle_seat(iVar1, -1);
						if (!iVar0 == 0)
						{
							return false;
						}
					}
				}
			}
		}
		iVar15 = get_interior_from_entity(PLAYER::PLAYER_PED_ID());
		if (!iVar15 == 0)
		{
			return false;
		}
	}
	return true;
}

void func_102(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

int func_103(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_104()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_75 < 12 && iLocal_75 >= 2)
	{
		if (func_199(3000))
		{
			do_screen_fade_out(1000);
			iLocal_75 = 12;
		}
	}
	if (!iLocal_71 && iLocal_75 >= 5)
	{
		iVar0 = _0xB2D06FAEDE65B577();
		if (is_vehicle_driveable(iVar0, 0) && !is_entity_dead(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blimp2"))
			{
				iLocal_71 = false;
			}
			else if (is_big_vehicle(_0xB2D06FAEDE65B577()) && uLocal_76[0] == 5)
			{
				iLocal_71 = func_196(&uLocal_70, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_195(_0xB2D06FAEDE65B577()))
			{
				iLocal_71 = func_196(&uLocal_70, vLocal_323, 1, fLocal_327);
			}
			else
			{
				iLocal_71 = func_196(&uLocal_70, vLocal_308, 1, fLocal_327);
			}
		}
	}
	if (iLocal_75 > 0 && iLocal_75 < 13)
	{
		hide_hud_and_radar_this_frame();
	}
	switch (iLocal_75)
	{
		case 0:
			clear_help(1);
			clear_prints();
			func_82();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false);
			func_30(56, 1, 0);
			if (!func_252(uLocal_333, 131072))
			{
				func_27(&uLocal_333, 131072);
			}
			if (!func_252(uLocal_333, 256))
			{
				func_194();
				func_27(&uLocal_333, 256);
			}
			if (!func_252(uLocal_333, 32768))
			{
				request_anim_dict(func_193());
				func_27(&uLocal_333, 32768);
			}
			if (!func_252(uLocal_333, 256))
			{
				request_anim_dict(func_192());
				func_27(&uLocal_333, 256);
			}
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_340 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				func_191(PLAYER::PLAYER_PED_ID(), iLocal_340);
				iLocal_75 = 1;
			}
			else
			{
				func_56();
				func_189(PLAYER::PLAYER_PED_ID(), vLocal_302);
				func_189(iLocal_274[0], vLocal_305);
				iLocal_75 = 2;
			}
			func_187();
			break;
		
		case 1:
			if (!is_entity_dead(iLocal_340, 0))
			{
				if (vdist(get_entity_coords(iLocal_340, 1), vLocal_308) < 2f)
				{
					func_56();
					func_189(PLAYER::PLAYER_PED_ID(), vLocal_302);
					func_189(iLocal_274[0], vLocal_305);
					new_load_scene_stop();
					iLocal_75 = 2;
				}
				else if (GAMEPLAY::GET_GAME_TIMER() >= 10000)
				{
					iLocal_75 = 13;
				}
			}
			break;
		
		case 2:
			if (!is_cam_rendering(iLocal_284[0]))
			{
				set_cam_active(iLocal_284[0], true);
				render_script_cams(true, false, 3000, 1, 0, 0);
				if (!is_entity_dead(iLocal_340, 0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) == joaat("blimp2"))
					{
						set_entity_visible(iLocal_340, false, 0);
					}
				}
				func_8(&iLocal_255);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			if (func_186(&iLocal_255) > 1f)
			{
				set_cam_active_with_interp(iLocal_284[1], iLocal_284[0], 6000, 1, 1);
				func_185(&Local_289, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = get_clock_hours();
				iLocal_330 = iVar1 + 8;
				if (iLocal_330 > 23)
				{
					iLocal_330 -= 24;
				}
				Local_289.f_7 = iVar1;
				Local_289.f_8 = iLocal_330;
				func_2(&iLocal_255);
				iLocal_75 = 4;
			}
			break;
		
		case 4:
			if (!is_cam_interpolating(iLocal_284[1]) && is_cam_rendering(iLocal_284[1]))
			{
				if (!func_252(uLocal_331, 512))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_340) && !is_entity_dead(iLocal_340, 0))
					{
						set_vehicle_doors_shut(iLocal_340, 1);
					}
					func_182(PLAYER::PLAYER_PED_ID(), func_184());
					set_entity_heading(PLAYER::PLAYER_PED_ID(), func_181());
					func_163();
					func_27(&uLocal_331, 512);
				}
				else if (!func_252(uLocal_331, 2048))
				{
					if (is_entity_dead(iLocal_274[0], 0))
					{
					}
					if (!func_162() && !is_ambient_speech_playing(iLocal_274[0]))
					{
						func_163();
						if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
						{
							stop_current_playing_ambient_speech(PLAYER::PLAYER_PED_ID());
							_play_ambient_speech1(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_331, 2048);
						func_8(&iLocal_255);
						sLocal_277 = func_161();
						iLocal_75 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_186(&iLocal_255) > 1f)
			{
				if (func_136(iLocal_330, 0, sLocal_277, "", &Local_289, func_186(&iLocal_255) * 0.2f, 0))
				{
					if (!func_162())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_340))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_340) != joaat("blimp2"))
							{
								clear_area(vLocal_305, 20f, 1, 0, 0, false);
							}
						}
						else
						{
							clear_area(vLocal_305, 20f, 1, 0, 0, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
						{
							set_entity_visible(iLocal_274[0], false, 0);
						}
						set_ped_path_avoid_fire(PLAYER::PLAYER_PED_ID(), 0);
						func_8(&iLocal_255);
						iLocal_75 = 6;
					}
				}
			}
			break;
		
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			if (func_186(&iLocal_255) > 1.5f)
			{
				if (iLocal_71)
				{
					func_134(&uLocal_70);
				}
				func_8(&iLocal_255);
				iLocal_75 = 7;
			}
			break;
		
		case 7:
			if (!is_cam_rendering(iLocal_284[2]))
			{
				_0x03FC694AE06C5A20();
				_0x0AE73D8DF3A762B2(1);
				_set_far_shadows_suppressed(1);
				set_cam_active_with_interp(iLocal_284[2], iLocal_284[1], 6000, 1, 1);
				func_8(&iLocal_255);
				iLocal_75 = 8;
			}
			break;
		
		case 8:
			if (!func_252(uLocal_333, 262144))
			{
				if (func_186(&iLocal_255) >= 1.25f)
				{
					func_133();
				}
			}
			if (func_186(&iLocal_255) > 6f)
			{
				set_cam_active(iLocal_284[3], true);
				if (!is_entity_dead(iLocal_340, 0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) == joaat("blimp2"))
					{
						set_entity_visible(iLocal_340, true, 0);
					}
					set_entity_as_mission_entity(iLocal_340, true, 1);
					set_vehicle_engine_health(iLocal_340, 1000f);
					set_vehicle_petrol_tank_health(iLocal_340, 1000f);
					set_vehicle_fixed(iLocal_340);
				}
				func_8(&iLocal_255);
				iLocal_75 = 10;
			}
			break;
		
		case 10:
			if (func_186(&iLocal_255) > 2f)
			{
				_0xC819F3CBB62BF692(0, 0f, 3, 0);
				iLocal_75 = 13;
			}
			break;
		
		case 12:
			if (is_screen_faded_out() && !is_screen_fading_out())
			{
				if (!func_252(uLocal_333, 262144))
				{
					start_player_teleport(player_id(), vLocal_314, fLocal_326, false, true, 1);
					func_133();
				}
				if (!is_entity_dead(iLocal_340, 0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) == joaat("blimp2"))
					{
						set_entity_visible(iLocal_340, true, 0);
					}
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				if (!is_entity_dead(iLocal_340, 0))
				{
					set_entity_as_mission_entity(iLocal_340, true, 1);
					set_vehicle_engine_health(iLocal_340, 1000f);
					set_vehicle_petrol_tank_health(iLocal_340, 1000f);
					set_vehicle_fixed(iLocal_340);
				}
				func_8(&iLocal_255);
				iLocal_75 = 13;
			}
			break;
		
		case 13:
			if (!is_screen_fading_out() && func_186(&iLocal_255) >= 1f)
			{
				func_13(1, 1, 0);
				set_entity_health(PLAYER::PLAYER_PED_ID(), get_ped_max_health(PLAYER::PLAYER_PED_ID()));
				special_ability_charge_absolute(player_id(), 30, 1);
				if (is_ped_model(PLAYER::PLAYER_PED_ID(), func_79(0)))
				{
					func_132();
				}
				set_roads_back_to_original_in_angled_area(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), 15f, 1);
				if (!is_entity_dead(iLocal_340, 0))
				{
					set_entity_as_mission_entity(iLocal_340, true, 1);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) != joaat("blimp2"))
					{
						set_entity_coords(iLocal_340, vLocal_308, 1, false, 0, 1);
						set_entity_heading(iLocal_340, fLocal_327);
						if (is_big_vehicle(iLocal_340) && uLocal_76[0] == 5)
						{
							set_entity_coords(iLocal_340, -865f, 516.3f, 90f, 1, false, 0, 1);
							set_entity_heading(iLocal_340, 15f);
						}
						else if (func_195(iLocal_340))
						{
							set_entity_coords(iLocal_340, vLocal_323, 1, false, 0, 1);
							set_entity_heading(iLocal_340, fLocal_328);
						}
						set_vehicle_on_ground_properly(iLocal_340);
					}
				}
				if (!is_screen_faded_out())
				{
					func_185(&Local_289, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					add_to_clock_time(8, 0, 0);
					func_130(to_float(8));
					do_screen_fade_in(2000);
					set_gameplay_cam_relative_heading(0);
					set_gameplay_cam_relative_pitch(0, 1f);
					func_185(&Local_289, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
				{
					delete_ped(&(iLocal_274[0]));
				}
				if (!func_129(uLocal_76[0], -1))
				{
					if (uLocal_76[0] == 5)
					{
						func_64("SCLUB_PHON_HELP_ALT", uLocal_76[0], 0);
					}
					else
					{
						func_64("SCLUB_PHON_HELP", uLocal_76[0], 0);
					}
					func_115(uLocal_76[0], 1, -1);
					wait(4000);
				}
				func_113(uLocal_76[0]);
				iVar2 = func_112(uLocal_76[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_111(uLocal_76[0]);
					iVar4 = func_110(iVar2);
					func_105(-384575792, iVar3, iVar4, 3, func_109(), func_108(uLocal_76[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_37();
			}
			break;
	}
}

bool func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_51(0))
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
		if (GAMEPLAY::IS_BIT_SET(iParam4, iParam5))
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
		Var0.f_3 = func_107(iParam3);
		Var0.f_4 = GAMEPLAY::GET_GAME_TIMER() + iParam6;
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
		GAMEPLAY::CLEAR_BIT(&(Var0.f_1), false);
		Global_101154.f_6378.f_651[Global_101154.f_6378.f_764 /*14*/] = {Var0};
		Global_101154.f_6378.f_764++;
		func_106(0);
		func_106(1);
		func_106(2);
		return true;
	}
	return false;
}

void func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_77(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_6378[iVar0 /*15*/].f_2, iParam0))
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
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_6378.f_651[iVar2 /*14*/].f_2, iParam0))
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

int func_107(int iParam0)
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

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_109()
{
	func_75();
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

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

auto func_112(auto uParam0)
{
	return Global_101154.f_243[func_72() /*53*/].f_2[uParam0 /*5*/].f_2;
}

void func_113(auto uParam0)
{
	if (func_112(uParam0) < 0)
	{
		func_114(uParam0, 0);
	}
	Global_101154.f_243[func_72() /*53*/].f_2[uParam0 /*5*/].f_2++;
}

void func_114(auto uParam0, int iParam1)
{
	Global_101154.f_243[func_72() /*53*/].f_2[uParam0 /*5*/].f_2 = iParam1;
}

void func_115(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_72();
	}
	if (func_128(iParam2) == 4)
	{
	}
	iVar0 = Global_101154.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (iVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_127(func_108(iParam0), 3))
			{
				iVar0 = false;
			}
		}
		else if (!func_127(func_108(iParam0), 4))
		{
			iVar0 = false;
		}
	}
	Global_101154.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = iParam1;
	if (iParam1)
	{
		if (!iVar0)
		{
			func_126(iParam0, 0);
			func_123(func_108(iParam0), func_128(iParam2), 1);
			iVar1 = get_random_int_in_range(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					GAMEPLAY::SET_BIT(&(Global_2097152[func_122() /*10375*/].f_7704.f_747), iParam0);
					func_119(15, 0);
					break;
			}
			func_118(iVar1);
			func_117(iParam0, iVar1);
			Global_100148.f_15[iParam0] = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	else if (iVar0)
	{
		func_116(func_108(iParam0), func_128(iParam2));
	}
}

void func_116(auto uParam0, int iParam1)
{
	if (Global_117[uParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_101154.f_32575[uParam0 /*29*/].f_12[iParam1] = 0;
			Global_101154.f_32575[uParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_117(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_100148.f_4[iParam0] = GAMEPLAY::GET_GAME_TIMER() + iParam1;
	}
	else
	{
		Global_100148.f_4[iParam0] = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(1200000, 2100000);
	}
}

void func_118(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_100148.f_3 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
	}
	else
	{
		Global_100148.f_3 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(21600000, 25200000);
	}
}

void func_119(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_121(iParam0, iParam1))
	{
		uVar0 = func_120();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_120()
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

bool func_121(int iParam0, auto uParam1)
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

int func_122()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_125();
		if (iParam1 == 4)
		{
			Global_101154.f_32575[iParam0 /*29*/].f_12[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[2] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				iParam2 = false;
			}
			Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (iParam2)
		{
			if (!Global_69489)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_124();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_124();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_124();
			}
		}
	}
}

void func_124()
{
	char[64] cVar0;
	char[64] cVar16;
	char* sVar32;
	
	StringCopy(&cVar0, _get_label_text(&(Global_101154.f_32575[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		_set_notification_text_entry("");
		StringCopy(&cVar16, _get_label_text(&(Global_2893[1 /*6*/])), 64);
		sVar32 = _get_label_text("CELL_253");
		_set_notification_message(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		_set_notification_text_entry("CELL_255");
		_add_text_component_item_string(&(Global_2893[1 /*6*/]));
		_set_notification_message(&cVar0, &cVar0, 0, 3, "", 0);
	}
	GAMEPLAY::CLEAR_BIT(&Global_2283, false);
}

void func_125()
{
	if (func_76(14))
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
		Global_14413 = func_74();
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

void func_126(int iParam0, int iParam1)
{
	Global_101154.f_243[func_72() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

bool func_127(auto uParam0, int iParam1)
{
	if (Global_101154.f_32575[uParam0 /*29*/].f_12[iParam1] == 1)
	{
		return true;
	}
	return false;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

auto func_129(auto uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_72();
	}
	return Global_101154.f_243[iParam1 /*53*/].f_2[uParam0 /*5*/].f_4;
}

void func_130(Vector3 fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_101154.f_16793.f_175[iVar0 /*19*/].f_5)))
		{
			func_131(&(Global_101154.f_16793.f_175[iVar0 /*19*/].f_5), fParam0 * 60f);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_101154.f_16793.f_362[iVar1 /*3*/])))
		{
			func_131(&(Global_101154.f_16793.f_362[iVar1 /*3*/]), fParam0 * 60f);
		}
		iVar1++;
	}
	skip_radio_forward();
}

void func_131(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		func_9(iParam0, func_4(iParam0) + fParam1);
	}
}

void func_132()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_88073[iVar0] = Global_88073[iVar0 + 1];
		}
		else
		{
			Global_88073[iVar0] = GAMEPLAY::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_133()
{
	int iVar0;
	int iVar1;
	
	if (!has_anim_dict_loaded(sLocal_276))
	{
	}
	else
	{
		iVar0 = get_random_int_in_range(false, 50000);
		clear_ped_tasks(PLAYER::PLAYER_PED_ID());
		open_sequence_task(&iVar1);
		task_follow_nav_mesh_to_coord(false, vLocal_314, 1f, -1, 0.25f, 0, fLocal_326);
		if (iVar0 < 15000)
		{
			task_play_anim(false, sLocal_276, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			task_play_anim(false, sLocal_276, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			task_play_anim(false, sLocal_276, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		close_sequence_task(iVar1);
		task_perform_sequence(PLAYER::PLAYER_PED_ID(), iVar1);
		clear_sequence_task(&iVar1);
		func_27(&uLocal_333, 262144);
	}
}

void func_134(auto uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_135(iVar0))
		{
			set_entity_collision(iVar0, true, 0);
			set_entity_visible(iVar0, true, 0);
			freeze_entity_position(iVar0, false);
		}
	}
}

bool func_135(int iParam0)
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

bool func_136(int iParam0, int iParam1, char* sParam2, char* sParam3, auto uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	auto uVar5;
	auto uVar6;
	auto uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (*uParam4.f_3)
	{
		case 0:
			*uParam4 = func_160();
			iVar4 = func_160();
			func_159(&iVar4, iParam0);
			func_158(&iVar4, iParam1);
			func_157(&iVar4, 0);
			if (func_155(*uParam4, iVar4))
			{
				func_150(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_147(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			*uParam4.f_11 = iVar0 + iVar1 * 60 + iVar2 + iParam6 * 3600;
			func_130(to_float(*uParam4.f_11) / 3600f);
			_0x5F0F3F56635809EF(0.6f);
			_set_far_shadows_suppressed(0);
			_0x0AE73D8DF3A762B2(0);
			func_146();
			*uParam4.f_10 = get_sound_id();
			play_sound_frontend(*uParam4.f_10, "TIME_LAPSE_MASTER", 0, 1);
			start_audio_scene("TOD_SHIFT_SCENE");
			func_145();
			*uParam4.f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (*uParam4.f_3 == 1)
				{
					if (get_hash_key(sParam2) != 0)
					{
						_set_weather_type_over_time(sParam2, 1f);
					}
					if (get_hash_key(sParam3) != 0)
					{
						_clear_cloud_hat();
						_set_cloud_hat_transition(sParam3, 0);
					}
					*uParam4.f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_150(&iVar4, *uParam4.f_11, 0, 0, 0, 0, 0);
				set_clock_time(func_144(iVar4), func_143(iVar4), func_142(iVar4));
				stop_sound(*uParam4.f_10);
				release_named_script_audio_bank("TIME_LAPSE");
				return true;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_141(fVar10 - fVar8 / fVar9 - fVar8, 0f, 1f);
			iVar3 = round(IntToFloat(*uParam4.f_11) * fVar11);
			iVar4 = *uParam4;
			func_150(&iVar4, iVar3, 0, 0, 0, 0, 0);
			set_clock_time(func_144(iVar4), func_143(iVar4), func_142(iVar4));
			if (func_140(iVar4) != get_clock_day_of_month())
			{
				set_clock_date(func_140(iVar4), func_139(iVar4), func_137(iVar4));
			}
			func_241();
			_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return false;
}

auto func_137(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_138(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_138(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_139(int iParam0)
{
	return (iParam0 && 15);
}

int func_140(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

float func_141(float fParam0, float fParam1, float fParam2)
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

int func_142(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_143(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_144(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_145()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		_remove_notification(Global_101154.f_12831[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

bool func_146()
{
	int iVar0;
	
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		return false;
	}
	if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
	if (!is_entity_dead(iVar0, 0))
	{
		return false;
	}
	set_veh_radio_station(iVar0, "OFF");
	return true;
}

void func_147(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_155(iParam0, iParam1))
	{
		iVar0 = func_139(iParam1);
		iVar1 = func_137(iParam0);
		iVar2 = func_137(iParam0) - func_137(iParam1);
		iVar3 = func_139(iParam0) - func_139(iParam1);
		iVar4 = func_140(iParam0) - func_140(iParam1);
		iVar5 = func_144(iParam0) - func_144(iParam1);
		iVar6 = func_143(iParam0) - func_143(iParam1);
		iVar7 = func_142(iParam0) - func_142(iParam1);
	}
	else
	{
		iVar0 = func_139(iParam0);
		iVar1 = func_137(iParam1);
		iVar2 = func_137(iParam1) - func_137(iParam0);
		iVar3 = func_139(iParam1) - func_139(iParam0);
		iVar4 = func_140(iParam1) - func_140(iParam0);
		iVar5 = func_144(iParam1) - func_144(iParam0);
		iVar6 = func_143(iParam1) - func_143(iParam0);
		iVar7 = func_142(iParam1) - func_142(iParam0);
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
		iVar4 += func_149(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_148(to_float(iVar0 + 1), 0f, 12f));
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

float func_148(Vector3 fParam0, float fParam1, float fParam2)
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

int func_149(int iParam0, int iParam1)
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

void func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_137(*iParam0);
	iVar1 = func_139(*iParam0);
	iVar2 = func_140(*iParam0);
	iVar3 = func_144(*iParam0);
	iVar4 = func_143(*iParam0);
	iVar5 = func_142(*iParam0);
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
	iVar6 = func_149(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_149(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_151(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_151(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_157(uParam0, iParam1);
	func_158(uParam0, iParam2);
	func_159(uParam0, iParam3);
	func_154(uParam0, iParam5);
	func_153(uParam0, iParam4);
	func_152(uParam0, iParam6);
}

void func_152(auto uParam0, int iParam1)
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

void func_153(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_139(*uParam0);
	iVar1 = func_137(*uParam0);
	if (iParam1 < 1 || iParam1 > func_149(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_154(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

bool func_155(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_156(iParam1) || !func_156(iParam0))
	{
		return true;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

bool func_156(int iParam0)
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
	iVar0 = func_142(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_143(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_144(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_137(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_139(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_140(iParam0);
	if (iVar5 < 1 || iVar5 > func_149(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_157(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_158(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_159(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

auto func_160()
{
	auto uVar0;
	
	func_157(&uVar0, get_clock_seconds());
	func_158(&uVar0, get_clock_minutes());
	func_159(&uVar0, get_clock_hours());
	func_153(&uVar0, get_clock_day_of_month());
	func_154(&uVar0, get_clock_month());
	func_152(&uVar0, get_clock_year());
	return uVar0;
}

char* func_161()
{
	char* sVar0;
	
	switch (uLocal_76[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

bool func_162()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_163()
{
	if (!is_entity_dead(iLocal_274[0], 0))
	{
		if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
		{
			func_179(&uLocal_81, 1, 0, func_180(uLocal_76[0]), 0, 1);
			func_166("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_164(iLocal_274[0], "SEX_ORAL", 10);
		}
	}
}

void func_164(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_165(iParam2), 1);
}

int func_165(int iParam0)
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

bool func_166(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	char* sVar6;
	
	if (func_178())
	{
		StringCopy(&Var0, sParam0, 24);
		if (iParam1)
		{
			func_177(&Var0, iParam2);
		}
		else
		{
			Var0 = {func_176(Var0)};
		}
		if (iParam3)
		{
			sVar6 = "SCAUD";
		}
		else
		{
			sVar6 = "SHAUD";
		}
		if (func_167(&uLocal_81, sVar6, &Var0, 7, 0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

int func_167(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_175(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_168(sParam2, iParam3, 0);
}

bool func_168(char* sParam0, int iParam1, int iParam2)
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
					func_174();
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
		if (func_173(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_172();
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
				func_125();
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
				if (func_171())
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
			if (func_23())
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
			func_170();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_169();
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
		func_174();
	}
	return false;
}

void func_169()
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

void func_170()
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

bool func_171()
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

void func_172()
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

int func_173(int iParam0, int iParam1)
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

void func_174()
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

void func_175(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

struct<6> func_176(char[24] cParam0)
{
	auto uVar0;
	
	StringConCat(&cParam0, "_", 24);
	uVar0 = uLocal_76[0];
	StringIntConCat(&cParam0, uVar0, 24);
	return cParam0;
}

void func_177(char* sParam0, int iParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_74() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_74() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_74() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (iParam1)
	{
		*sParam0 = {func_176(*sParam0)};
	}
}

bool func_178()
{
	if ((is_message_being_displayed() || is_scripted_conversation_ongoing()) || Global_15712 != 0)
	{
		return false;
	}
	return true;
}

void func_179(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_181()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_182(int iParam0, Vector3 vParam1)
{
	auto uVar0;
	
	vParam1.z += 0.15f;
	if (get_ground_z_for_3d_coord(vParam1, &uVar0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_183(iParam0))
	{
		set_entity_coords(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

int func_183(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	return !is_entity_dead(iParam0, 0);
}

Vector3 func_184()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_185(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		set_player_control(player_id(), is_player_control_on(player_id()), 64);
	}
	if (!is_cutscene_playing())
	{
		set_player_control(player_id(), !iParam1, 0);
	}
	if (iParam7)
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			remove_ped_helmet(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!iParam1 && iParam6)
	{
		_0xC819F3CBB62BF692(0, 0f, 3, 0);
	}
	else
	{
		render_script_cams(iParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (iParam1)
	{
		clear_help(1);
	}
	else
	{
		if (does_cam_exist(*uParam0.f_4))
		{
			if (is_cam_active(*uParam0.f_4))
			{
				set_cam_active(*uParam0.f_4, false);
			}
			destroy_cam(*uParam0.f_4, 1);
		}
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			set_entity_visible(PLAYER::PLAYER_PED_ID(), true, 0);
		}
		iVar0 = get_players_last_vehicle();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			set_entity_visible(iVar0, true, 0);
		}
		release_named_script_audio_bank("TIME_LAPSE");
		if (is_audio_scene_active("TOD_SHIFT_SCENE"))
		{
			stop_sound(*uParam0.f_10);
			release_named_script_audio_bank("TIME_LAPSE");
			stop_audio_scene("TOD_SHIFT_SCENE");
		}
	}
	func_15(iParam1, 1, 0, 0);
	func_145();
	if (!iParam1 && iParam5)
	{
		if (*uParam0.f_5)
		{
			set_clock_time(*uParam0.f_7, false, false);
		}
		else
		{
			set_clock_time(*uParam0.f_8, false, false);
		}
	}
	if (!iParam1)
	{
		if (is_screen_faded_out())
		{
			do_screen_fade_in(250);
		}
	}
	if (!iParam1)
	{
		if (Global_101154.f_18807.f_4801 != -15)
		{
			Global_101154.f_18807.f_4801 = func_160();
		}
	}
}

float func_186(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_5(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return 0f;
}

void func_187()
{
	int iVar0;
	Vector3[] vVar1 = new Vector3[4];
	Vector3[] vVar14 = new Vector3[4];
	var[] uVar27 = new var[4];
	
	func_188(&vVar1, &vVar14, &uVar27);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!does_cam_exist(iLocal_284[iVar0]))
		{
			iLocal_284[iVar0] = create_camera_with_params(26379945, vVar1[iVar0 /*3*/], vVar14[iVar0 /*3*/], uVar27[iVar0], 0, 2);
			shake_cam(iLocal_284[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_289.f_4 = create_cam("DEFAULT_SPLINE_CAMERA", false);
	add_cam_spline_node(Local_289.f_4, vVar1[0 /*3*/], vVar14[0 /*3*/], 6000, 3, 2);
	add_cam_spline_node(Local_289.f_4, vVar1[1 /*3*/], vVar14[1 /*3*/], 6000, 3, 2);
	set_cam_fov(Local_289.f_4, uVar27[0]);
}

void func_188(auto uParam0, auto uParam1, auto uParam2)
{
	switch (uLocal_76[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = {140.9085f, -1885.527f, 25.6959f};
			*(uParam1[0 /*3*/]) = {-9.0308f, 0f, 126.3829f};
			*uParam2[0] = 40f;
			*(uParam0[1 /*3*/]) = {141.712f, -1884.935f, 30.7241f};
			*(uParam1[1 /*3*/]) = {4.7025f, 0f, 129.5531f};
			*uParam2[1] = 40f;
			*(uParam0[2 /*3*/]) = {139.1899f, -1885.865f, 24.96737f};
			*(uParam1[2 /*3*/]) = {-3.535496f, 0.081819f, 135.1308f};
			*uParam2[2] = 50f;
			*(uParam0[3 /*3*/]) = {133.9669f, -1893.292f, 23.9573f};
			*(uParam1[3 /*3*/]) = {-1.8669f, -0.0329f, -5.5828f};
			*uParam2[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = {-186.5408f, -1629.328f, 35.8275f};
			*(uParam1[0 /*3*/]) = {-1.5588f, 0f, -118.8025f};
			*uParam2[0] = 40f;
			*(uParam0[1 /*3*/]) = {-186.1923f, -1629.505f, 48.7132f};
			*(uParam1[1 /*3*/]) = {-1.2745f, 0f, -116.9616f};
			*uParam2[1] = 40f;
			*(uParam0[2 /*3*/]) = {-184.9595f, -1632.193f, 36.32303f};
			*(uParam1[2 /*3*/]) = {-3.262451f, 0.073971f, -100.6756f};
			*uParam2[2] = 40f;
			*(uParam0[3 /*3*/]) = {-164.7078f, -1632.25f, 34.0944f};
			*(uParam1[3 /*3*/]) = {-3.7303f, 0.0222f, 108.1824f};
			*uParam2[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = {-208.6886f, 112.8581f, 73.0855f};
			*(uParam1[0 /*3*/]) = {-0.1055f, 0f, -156.0082f};
			*uParam2[0] = 40f;
			*(uParam0[1 /*3*/]) = {-208.9068f, 113.3747f, 85.2889f};
			*(uParam1[1 /*3*/]) = {3.8438f, 0f, -157.0767f};
			*uParam2[1] = 40f;
			*(uParam0[2 /*3*/]) = {-206.2357f, 106.941f, 72.07555f};
			*(uParam1[2 /*3*/]) = {-11.58381f, 0.084975f, -158.9702f};
			*uParam2[2] = 45f;
			*(uParam0[3 /*3*/]) = {-197.6886f, 94.7063f, 69.814f};
			*(uParam1[3 /*3*/]) = {0.5155f, -0.0266f, 48.8652f};
			*uParam2[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = {-871.6285f, 520.8466f, 93.1945f};
			*(uParam1[0 /*3*/]) = {-0.1377f, -1.3933f, -105.9309f};
			*uParam2[0] = 40f;
			*(uParam0[1 /*3*/]) = {-871.5255f, 521.1066f, 104.6356f};
			*(uParam1[1 /*3*/]) = {3.1118f, -1.3933f, -105.9309f};
			*uParam2[1] = 40f;
			*(uParam0[2 /*3*/]) = {-866.6436f, 514.6121f, 92.90275f};
			*(uParam1[2 /*3*/]) = {-5.957637f, -1.324997f, -101.9062f};
			*uParam2[2] = 40f;
			*(uParam0[3 /*3*/]) = {-849.5522f, 514.2322f, 91.0095f};
			*(uParam1[3 /*3*/]) = {-1.626f, -1.3198f, 92.3739f};
			*uParam2[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = {-27.698f, -1584.646f, 31.1034f};
			*(uParam1[0 /*3*/]) = {0.0044f, 0f, -1.9117f};
			*uParam2[0] = 40f;
			*(uParam0[1 /*3*/]) = {-27.698f, -1584.646f, 40.4849f};
			*(uParam1[1 /*3*/]) = {7.981f, 0f, -1.9117f};
			*uParam2[1] = 40f;
			*(uParam0[2 /*3*/]) = {-28.63904f, -1579.74f, 30.82423f};
			*(uParam1[2 /*3*/]) = {-7.527712f, 0.030218f, -14.33051f};
			*uParam2[2] = 40f;
			*(uParam0[3 /*3*/]) = {-28.6719f, -1568.09f, 29.7492f};
			*(uParam1[3 /*3*/]) = {-1.5414f, 0f, -168.6005f};
			*uParam2[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = {3323.631f, 5148.861f, 20.9592f};
			*(uParam1[0 /*3*/]) = {1.1547f, 1.0064f, 21.8733f};
			*uParam2[0] = 40f;
			*(uParam0[1 /*3*/]) = {3323.844f, 5148.672f, 28.2303f};
			*(uParam1[1 /*3*/]) = {11.4168f, 1.0064f, 22.8025f};
			*uParam2[1] = 40f;
			*(uParam0[2 /*3*/]) = {3328.904f, 5157.818f, 20.5799f};
			*(uParam1[2 /*3*/]) = {-3.634001f, 1.039937f, 30.44809f};
			*uParam2[2] = 40f;
			*(uParam0[3 /*3*/]) = {3315.368f, 5171.771f, 18.9066f};
			*(uParam1[3 /*3*/]) = {-2.8773f, 1.0064f, -103.0585f};
			*uParam2[3] = 40f;
			break;
	}
}

void func_189(int iParam0, Vector3 vParam1)
{
	Vector3 fVar0;
	Vector3 fVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		set_ped_path_avoid_fire(iParam0, 1);
		if (get_script_task_status(iParam0, 242628503) != 1)
		{
			clear_sequence_task(&iLocal_339);
			open_sequence_task(&iLocal_339);
			if (is_ped_in_any_vehicle(iParam0, 0))
			{
				task_leave_any_vehicle(false, false, 16777216);
			}
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = vdist(get_entity_coords(iParam0, 1), vLocal_302);
				fVar1 = vdist(get_entity_coords(iParam0, 1), vLocal_305);
				if (fVar1 < fVar0)
				{
					task_turn_ped_to_face_entity(false, iLocal_274[0], false);
				}
				else if (!is_string_null_or_empty(func_190()))
				{
					task_follow_waypoint_recording(false, func_190(), 0, 552, -1);
				}
				else
				{
					task_follow_nav_mesh_to_coord(false, vLocal_302, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != PLAYER::PLAYER_PED_ID())
			{
				if (!is_string_null_or_empty(func_190()))
				{
					task_follow_waypoint_recording(false, func_190(), 0, 546, -1);
				}
				else
				{
					task_follow_nav_mesh_to_coord(false, vParam1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_25(iParam0, vParam1, 1) > 5f)
				{
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
					task_play_anim(false, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					task_stand_still(false, get_random_int_in_range(3000, 6000));
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
					task_play_anim(false, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					task_stand_still(false, get_random_int_in_range(3000, 6000));
					task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
					task_play_anim(false, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					task_play_anim(false, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			close_sequence_task(iLocal_339);
			task_perform_sequence(iParam0, iLocal_339);
		}
	}
}

char* func_190()
{
	char* sVar0;
	
	if (uLocal_76[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_191(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0) && !is_entity_dead(iParam1, 0))
	{
		task_vehicle_park(iParam0, iParam1, vLocal_308, fLocal_327, 3, 10f, 0);
	}
}

char* func_192()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_193()
{
	if (func_74() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_74() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_74() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_194()
{
	sLocal_276 = "move_p_m_one_idles@generic";
	request_anim_dict(sLocal_276);
}

bool func_195(int iParam0)
{
	if (is_vehicle_model(iParam0, joaat("blimp")))
	{
		return true;
	}
	else if (is_vehicle_model(iParam0, joaat("cargobob")))
	{
		return true;
	}
	else if (is_vehicle_model(iParam0, joaat("cargobob2")))
	{
		return true;
	}
	else if (is_vehicle_model(iParam0, joaat("cargobob3")))
	{
		return true;
	}
	else if (is_vehicle_model(iParam0, joaat("buzzard")))
	{
		return true;
	}
	else if (is_vehicle_model(iParam0, joaat("buzzard2")))
	{
		return true;
	}
	else if (is_vehicle_model(iParam0, joaat("maverick")))
	{
		return true;
	}
	else if (is_vehicle_model(iParam0, joaat("polmav")))
	{
		return true;
	}
	else if (is_vehicle_model(iParam0, joaat("annihilator")))
	{
		return true;
	}
	else if (is_vehicle_model(iParam0, joaat("frogger")))
	{
		return true;
	}
	else if (is_vehicle_model(iParam0, joaat("frogger2")))
	{
		return true;
	}
	return false;
}

bool func_196(auto uParam0, Vector3 vParam1, int iParam2, Vector3 fParam3)
{
	if (func_198(uParam0))
	{
		_0xACFB2463CC22BED2(*uParam0);
		if (!func_197(vParam1))
		{
			set_entity_coords(*uParam0, vParam1, 1, false, 0, 1);
			if (iParam4)
			{
				set_entity_heading(*uParam0, fParam5);
			}
			set_vehicle_on_ground_properly(*uParam0);
		}
		return true;
	}
	return false;
}

bool func_197(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_198(auto uParam0)
{
	int iVar0;
	
	iVar0 = get_players_last_vehicle();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_135(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && is_entity_at_entity(iVar0, PLAYER::PLAYER_PED_ID(), vLocal_63, 0, 1, 0))
			{
				_0xACFB2463CC22BED2(iVar0);
				set_entity_collision(iVar0, false, 0);
				set_entity_visible(iVar0, false, 0);
				freeze_entity_position(iVar0, true);
				set_entity_as_mission_entity(iVar0, true, 1);
				*uParam0 = iVar0;
				return true;
			}
		}
	}
	return false;
}

bool func_199(int iParam0)
{
	if (is_screen_faded_in())
	{
		if (GAMEPLAY::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			Global_27 = GAMEPLAY::GET_GAME_TIMER();
		}
		Global_28 = GAMEPLAY::GET_GAME_TIMER();
		if (GAMEPLAY::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_200())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
	}
	return false;
}

bool func_200()
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_control_just_pressed(0, 18) || is_control_just_pressed(2, 18))
	{
		return true;
	}
	return false;
}

void func_201(int iParam0)
{
	struct<4> Var0;
	Vector3 fVar4;
	
	func_62();
	if (is_entity_dead(iLocal_274[0], 0))
	{
		return;
	}
	set_all_vehicle_generators_active_in_area(vLocal_308 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), vLocal_308 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, 1);
	fVar4 = vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iLocal_274[0], 1));
	if (iLocal_78 != 9)
	{
		if (((fVar4 >= 200f / 2f && func_178()) && !func_252(uLocal_333, 2)) || func_239(iLocal_274[0], 0))
		{
			if (does_blip_exist(iLocal_281))
			{
				remove_blip(&iLocal_281);
			}
			if (does_blip_exist(iLocal_280))
			{
				remove_blip(&iLocal_280);
			}
			func_236(0);
			func_80("SCLUB_HOME_R", uLocal_76[0]);
			iLocal_78 = 9;
		}
	}
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		if (iLocal_78 != 8)
		{
			if (does_blip_exist(iLocal_281))
			{
				remove_blip(&iLocal_281);
			}
			if (does_blip_exist(iLocal_280))
			{
				remove_blip(&iLocal_280);
			}
			iLocal_78 = 8;
		}
	}
	if (func_225(iLocal_274[0], &uLocal_267, &iLocal_264))
	{
		func_63(4);
	}
	if (iLocal_78 <= 1)
	{
		func_244(1);
	}
	switch (iLocal_78)
	{
		case 0:
			iLocal_79 = 0;
			if (func_178())
			{
				if (!func_252(uLocal_333, 1))
				{
					freeze_entity_position(iLocal_274[0], true);
					func_80("SCLUB_HOME_MEET", uLocal_76[0]);
					func_236(0);
					func_27(&uLocal_333, 1);
				}
				iLocal_78 = 1;
			}
			break;
		
		case 1:
			iLocal_79 = 1;
			Var0 = {func_68(uLocal_76[0])};
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_340 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_334 = get_entity_health(iLocal_340);
			}
			if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), get_entity_coords(iLocal_274[0], 1), 3f, 3f, 3f, false, true, 0) || (is_vehicle_driveable(iLocal_340, 0) && func_224(iLocal_340, iLocal_274[0], 1) <= 10f))
			{
				freeze_entity_position(iLocal_274[0], false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_340) && (get_vehicle_max_number_of_passengers(iLocal_340) < 1 || (!iParam0 && !is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(iLocal_340)))))
				{
					if (!func_67("SCLUB_SMALL_CAR", &Var0))
					{
						func_64("SCLUB_SMALL_CAR", uLocal_76[0], 0);
						func_164(iLocal_274[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					clear_help(1);
					clear_ped_tasks(iLocal_274[0]);
					func_222();
					if (!func_252(uLocal_333, 2))
					{
						func_27(&uLocal_333, 2);
					}
					func_221();
					func_82();
					func_214(39, 1);
					func_214(40, 1);
					func_214(41, 1);
					func_214(42, 1);
					func_214(43, 1);
					func_214(44, 1);
					iLocal_78 = 2;
				}
			}
			else if (func_67("SCLUB_SMALL_CAR", &Var0))
			{
				clear_help(1);
			}
			break;
		
		case 2:
			iLocal_79 = 2;
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (is_ped_in_any_vehicle(iLocal_274[0], 0))
				{
					iLocal_78 = 3;
				}
			}
			else
			{
				func_164(iLocal_274[0], "NEED_A_VEHICLE", 10);
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			iLocal_79 = 3;
			func_211();
			if (!func_162())
			{
				if (func_178())
				{
					set_roads_in_area(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), false, 1);
					set_all_vehicle_generators_active_in_area(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), false, 1);
					clear_area_of_vehicles(vLocal_308, 10f, 0, 0, 0, 0, false);
					clear_area_of_peds(vLocal_308, 10f, 0);
					iLocal_301 = add_scenario_blocking_area(vLocal_308 - Vector(35f, 35f, 35f), vLocal_308 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&iLocal_246);
					if (iParam0)
					{
						func_87(1);
						func_210();
					}
					else
					{
						iLocal_74 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_79 = 4;
			func_207(fVar4, vLocal_311);
			func_202();
			if ((func_4(&iLocal_258) > 45f || vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vLocal_320) > 100f * 100f) && func_25(PLAYER::PLAYER_PED_ID(), vLocal_311, 1) > 100f)
			{
				if (uLocal_76[0] == 8)
				{
					func_166("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_164(iLocal_274[0], "GENERIC_FUCK_YOU", 10);
				}
				func_63(3);
			}
			else if (func_239(iLocal_274[0], 1))
			{
				if (does_blip_exist(iLocal_281))
				{
					remove_blip(&iLocal_281);
				}
				if (does_blip_exist(iLocal_280))
				{
					remove_blip(&iLocal_280);
				}
				func_236(0);
				func_80("SCLUB_HOME_R", uLocal_76[0]);
				iLocal_78 = 9;
			}
			else if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_308, 3f, 3f, 2f, true, true, 2) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_305, 5f, 5f, 2f, true, true, 1))
			{
				if (func_34(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			else if (!is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
			{
				func_210();
			}
			break;
		
		case 5:
			iLocal_79 = 5;
			func_207(fVar4, vLocal_308);
			func_202();
			func_222();
			if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_308, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_78 = 6;
			}
			else
			{
				if (is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
				{
					func_210();
				}
				else
				{
					func_58(vLocal_308);
				}
				if (func_103("SCLUB_HOME_WALK"))
				{
					clear_help(1);
				}
			}
			break;
		
		case 6:
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
				{
					if (func_57(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_56();
						func_189(iLocal_274[0], vLocal_305);
						if (uLocal_76[0] == 9 || uLocal_76[0] == 8)
						{
							func_166("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_166("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_78 = 7;
					}
				}
			}
			else if (is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
			{
				clear_ped_tasks_immediately(iLocal_274[0]);
				func_210();
				clear_help(1);
			}
			break;
		
		case 7:
			iLocal_79 = 7;
			if ((!func_162() && !is_message_being_displayed()) && !func_252(uLocal_333, 2048))
			{
				Var0 = {func_68(uLocal_76[0])};
				func_81("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_82();
				func_236(0);
				func_27(&uLocal_333, 2048);
			}
			if ((is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_311, 5f, 5f, 2f, false, true, 1) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_305, 5f, 5f, 2f, false, true, 1)) && is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
			{
				if (func_34(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_252(uLocal_331, 4096) && !func_162()) && !is_ambient_speech_playing(iLocal_274[0]))
			{
				if (iLocal_79 > 1 || vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iLocal_274[0], 1)) < 3f * 3f)
				{
					func_164(iLocal_274[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_331, 4096);
				}
			}
			if (!is_player_wanted_level_greater(player_id(), 0))
			{
				iLocal_78 = iLocal_79;
			}
			break;
		
		case 9:
			if (fVar4 > 200f)
			{
				func_63(1);
			}
			else if (fVar4 <= 200f / 2f && !func_239(iLocal_274[0], 1))
			{
				clear_prints();
				iLocal_78 = iLocal_79;
				if (is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
				{
					func_210();
				}
			}
			break;
	}
}

void func_202()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_252(uLocal_333, 16))
	{
		if (func_203())
		{
			func_27(&uLocal_333, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_96(iLocal_274[0], 0, 0);
	if (!func_252(uLocal_333, 8))
	{
		if (!func_252(uLocal_333, 4))
		{
			if (!func_252(uLocal_331, 256))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					func_166("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_331, 256);
			}
			else
			{
				request_anim_dict(sVar0);
				func_27(&uLocal_333, 4);
			}
		}
		else if (has_anim_dict_loaded(sVar0))
		{
			func_90(iLocal_274[0], 1, 1, -1);
			set_ped_keep_task(iLocal_274[0], true);
			func_7(&iLocal_255);
			func_27(&uLocal_333, 8);
		}
	}
	else if (func_252(uLocal_333, 4))
	{
		iVar1 = 0;
		iVar2 = is_entity_playing_anim(iLocal_274[0], sVar0, func_91(4, 1, 1, func_94(iLocal_340)), 3);
		iVar3 = is_ped_shooting(PLAYER::PLAYER_PED_ID());
		iVar4 = get_script_task_status(iLocal_274[0], 242628503) == 7;
		iVar5 = is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0);
		iVar6 = false;
		if (iVar5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) && !is_entity_dead(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				iVar6 = (has_entity_collided_with_anything(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) && get_entity_speed(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) > 5f);
			}
		}
		if ((((!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) || func_4(&iLocal_255) > 35f) || vdist(vLocal_308, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) < 75f) || iVar3) || iVar6)
		{
			if (!iVar4 && !iVar2)
			{
				task_play_anim(iLocal_274[0], sVar0, func_91(4, 1, 1, func_94(iLocal_340)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (iVar3)
			{
				iLocal_335 = 2000;
			}
			iVar1 = 1;
		}
		else if (iVar4)
		{
			iVar1 = 1;
		}
		if (iVar2)
		{
			func_241();
		}
		if ((iVar1 && iVar4) && !iVar2)
		{
			if (!iVar3 && iVar5)
			{
				if (iVar6)
				{
					set_entity_health(PLAYER::PLAYER_PED_ID(), get_entity_health(PLAYER::PLAYER_PED_ID()) - ceil(IntToFloat(get_ped_max_health(PLAYER::PLAYER_PED_ID())) * 0.1f));
					func_164(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_164(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_331, 128);
			}
			remove_anim_dict(sVar0);
			func_70(&uLocal_333, 4);
		}
		if (!func_252(uLocal_331, 64))
		{
			if (func_4(&iLocal_255) > 10f)
			{
				func_164(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", 10);
				func_164(iLocal_274[0], "SEX_ORAL", 10);
				func_27(&uLocal_331, 64);
			}
		}
		_disable_vehicle_first_person_cam_this_frame();
		func_241();
	}
}

bool func_203()
{
	Vector3 vVar0;
	auto uVar3;
	
	if (!func_178())
	{
		return false;
	}
	func_61(&vVar0, &uVar3, 0);
	if (((vdist(vLocal_308, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) > 75f * 2f && vdist(vVar0, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) > 75f / 2f) && func_112(uLocal_76[0]) > 1) && func_204())
	{
		return true;
	}
	return false;
}

bool func_204()
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		return false;
	}
	iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
	if (is_vehicle_driveable(iVar0, 0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_206(iVar1, 0) && func_205(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[16] cVar3;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (get_num_mod_kits(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (get_vehicle_mod(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, get_mod_text_label(iParam0, iVar1, get_vehicle_mod(iParam0, iVar1)), 16);
						iVar2 = get_hash_key(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == get_hash_key("SABRE_CAG"))
							{
								return false;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (get_vehicle_layout_hash(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
				return true;
				break;
		}
		if (get_vehicle_layout_hash(iParam0) == 931866387 && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("slamvan"))
		{
			return true;
		}
	}
	return false;
}

bool func_206(int iParam0, int iParam1)
{
	if ((((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0)) || is_this_model_a_bike(iParam0))
	{
		return false;
	}
	if (!iParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return false;
		}
	}
	if ((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2"))
	{
		return false;
	}
	return true;
}

void func_207(Vector3 fParam0, Vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_252(uLocal_331, 262144))
	{
		if (func_209(iLocal_274[0]))
		{
			if (uLocal_76[0] == 8)
			{
				func_166("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_164(iLocal_274[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&iLocal_249);
			func_27(&uLocal_331, 262144);
		}
	}
	else if (func_4(&iLocal_249) > 10f)
	{
		func_70(&uLocal_331, 262144);
		func_8(&iLocal_249);
	}
	if ((fParam0 > 5f || !func_178()) || func_252(uLocal_333, 4))
	{
		return;
	}
	if (!func_252(uLocal_331, 1) && !func_252(uLocal_331, 128))
	{
		if (vdist(vParam1, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) < 75f)
		{
			if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
			{
				if (func_166("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_331, 1);
				}
			}
			else
			{
				func_27(&uLocal_331, 1);
			}
			clear_area_of_vehicles(vLocal_308, 5f, 0, 0, 0, 0, false);
		}
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
	if (!is_vehicle_driveable(iVar0, 0))
	{
		if (!func_252(uLocal_331, 16))
		{
			func_164(iLocal_274[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_331, 16);
			func_8(&iLocal_246);
		}
		if (!func_252(uLocal_331, 4))
		{
			func_70(&uLocal_331, 4);
		}
		if (!func_252(uLocal_331, 8))
		{
			func_70(&uLocal_331, 8);
		}
	}
	else
	{
		fVar1 = get_entity_speed(iVar0);
		fVar2 = _0x53AF99BAA671CA47(iVar0);
		if (fVar1 < fVar2 * 0.9f || fVar1 > fVar2 * 0.1f)
		{
			func_8(&iLocal_252);
		}
		if (!func_252(uLocal_331, 4))
		{
			if (func_4(&iLocal_246) > 15f && func_4(&iLocal_252) > 5f)
			{
				func_164(iLocal_274[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_331, 4);
				func_8(&iLocal_246);
			}
		}
		else if (func_4(&iLocal_246) < 5f)
		{
			func_70(&uLocal_331, 4);
			func_8(&iLocal_246);
		}
		if (!func_252(uLocal_331, 8))
		{
			if (func_4(&iLocal_246) > 15f && func_4(&iLocal_252) > 5f)
			{
				func_164(iLocal_274[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_331, 4);
				func_8(&iLocal_246);
			}
		}
		else if (func_4(&iLocal_246) < 5f)
		{
			func_70(&uLocal_331, 8);
			func_8(&iLocal_246);
		}
		if (!func_252(uLocal_331, 131072))
		{
			if (func_208(iLocal_274[0], &iLocal_334))
			{
				if (func_4(&iLocal_249) > 5f)
				{
					func_164(iLocal_274[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_331, 131072);
					func_8(&iLocal_246);
				}
			}
		}
		else if (func_4(&iLocal_249) > 5f)
		{
			func_70(&uLocal_331, 131072);
			func_8(&iLocal_249);
		}
		if (!func_252(uLocal_331, 65536))
		{
			if (func_4(&iLocal_246) > 30f || (func_4(&iLocal_246) > 10f && !func_252(uLocal_331, 32)))
			{
				func_164(iLocal_274[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_331, 32);
				func_27(&uLocal_331, 524288);
				func_8(&iLocal_246);
			}
			else if (func_252(uLocal_331, 524288))
			{
				if (!is_ambient_speech_playing(iLocal_274[0]) && func_4(&iLocal_246) > 4f)
				{
					func_164(PLAYER::PLAYER_PED_ID(), "BOOTY_FLIRT_RESP", 10);
					func_70(&uLocal_331, 524288);
				}
			}
		}
	}
}

bool func_208(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
	if (is_vehicle_driveable(iVar0, 0))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iVar0))
		{
			if (has_entity_collided_with_anything(iVar0))
			{
				iVar1 = get_entity_health(iVar0);
				iVar2 = *iParam1 - iVar1;
				*iParam1 = iVar1;
				clear_entity_last_damage_entity(iVar0);
				if (iVar2 > 10)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_209(int iParam0)
{
	if (!is_entity_dead(iParam0, 0))
	{
		if (is_shocking_event_in_sphere(108, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 10f) && has_entity_clear_los_to_entity_in_front(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
	}
	return false;
}

void func_210()
{
	func_83();
	func_8(&iLocal_246);
	if (is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
	{
		if (does_blip_exist(iLocal_280))
		{
			remove_blip(&iLocal_280);
		}
		if (!does_blip_exist(iLocal_281))
		{
			iLocal_281 = func_59(vLocal_311, 0);
		}
		func_8(&iLocal_258);
		vLocal_320 = {get_entity_coords(iLocal_274[0], 1)};
		iLocal_78 = 4;
	}
	else
	{
		func_8(&iLocal_249);
		func_58(vLocal_308);
		iLocal_78 = 5;
	}
}

void func_211()
{
	if (!func_252(uLocal_331, 1024))
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (func_212(uLocal_76[0]))
			{
				if (!func_162())
				{
					func_164(iLocal_274[0], "NICE_CAR", 10);
					func_27(&uLocal_331, 1024);
				}
			}
		}
	}
}

bool func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
	if (is_vehicle_driveable(iVar0, 0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_213(iParam0, iVar1))
		{
			return true;
		}
	}
	return false;
}

bool func_213(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return true;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return true;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return true;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return true;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return true;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return true;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_214(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_220(iParam0, 2, 1))
		{
			func_219(iParam0, 2, 1);
		}
	}
	else if (func_220(iParam0, 2, 1))
	{
		func_215(iParam0, 2, 1);
	}
}

void func_215(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_52() == 0)
		{
			iVar0 = func_217(func_218(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_216(func_218(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_216(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_73(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_217(auto uParam0, int iParam1, int iParam2)
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

int func_218(int iParam0)
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

void func_219(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_52() == 0)
		{
			iVar0 = func_217(func_218(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_216(func_218(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_220(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_52() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_217(func_218(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_221()
{
	if (uLocal_76[0] == 8)
	{
		func_166("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_164(iLocal_274[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_222()
{
	if (!is_ped_in_group(iLocal_274[0]) && vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iLocal_274[0], 1)) < 10f)
	{
		set_ped_as_group_member(iLocal_274[0], func_223());
		set_ped_group_member_passenger_index(iLocal_274[0], false);
	}
}

int func_223()
{
	return get_player_group(get_player_index());
}

auto func_224(int iParam0, int iParam1, int iParam2)
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

bool func_225(int iParam0, auto uParam1, int iParam2)
{
	auto uVar0;
	int iVar1;
	
	if (!func_10(iParam2))
	{
		func_7(iParam2);
	}
	if (func_4(iParam2) > 3f)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (func_228(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_226(&uVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!is_entity_dead(iParam0, 0))
				{
					if (!unk_0xCC6E3B6BB69501F1(iLocal_72))
					{
						add_relationship_group("BootyCall", &iLocal_72);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_72, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_72);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_72);
					task_smart_flee_ped(iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
			}
			func_8(iParam2);
			return true;
		}
	}
	return false;
}

void func_226(auto uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_227(1);
			break;
		
		case 2:
			break;
	}
}

void func_227(int iParam0)
{
	Global_100148 = 0;
	Global_100148.f_1 = -1;
	Global_100148.f_2 = -1;
	if (iParam0)
	{
		func_118(-1);
	}
}

bool func_228(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!is_entity_dead(iVar0, 0) && !is_entity_dead(iParam0, 0))
	{
		if (!func_252(*uParam2, 1))
		{
			if (func_235(iParam0, uParam2))
			{
				*uParam3 = 1;
				return true;
			}
		}
		if (!func_252(*uParam2, 2))
		{
			if (get_player_wanted_level(player_id()) > 0)
			{
				*uParam3 = 2;
				return true;
			}
		}
		if (!func_252(*uParam2, 4))
		{
			if (func_233(iVar0, iParam0, uParam2, iParam5))
			{
				*uParam3 = 4;
				return true;
			}
		}
		if (!func_252(*uParam2, 8))
		{
			if (func_232(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return true;
			}
		}
		iVar1 = !func_252(*uParam2, 128);
		if (iParam4)
		{
			if (func_229(iParam0, iParam1, 1, iParam6, iVar1, 1))
			{
				*uParam3 = 32;
				return true;
			}
		}
		else if (!func_252(*uParam2, 16))
		{
			if (func_229(iParam0, iParam1, 0, iParam6, iVar1, iParam8))
			{
				*uParam3 = 16;
				return true;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && has_entity_been_damaged_by_entity(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return true;
		}
	}
	return false;
}

bool func_229(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3)
	{
		if (!iLocal_59)
		{
			iLocal_60 = get_entity_health(iParam0);
			iLocal_59 = true;
		}
		iLocal_61 = get_entity_health(iParam0);
		iLocal_62 = iLocal_60 - iLocal_61;
		iVar0 = get_players_last_vehicle();
		if (!is_entity_dead(iVar0, 0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return true;
				}
			}
		}
		if (iLocal_59)
		{
			if (has_entity_been_damaged_by_entity(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return true;
				}
			}
		}
	}
	else if (has_entity_been_damaged_by_entity(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return true;
	}
	if (!iParam3)
	{
		iVar1 = get_players_last_vehicle();
		if (!is_entity_dead(iVar1, 0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1))
			{
				return true;
			}
		}
	}
	if (iParam4)
	{
		if (!is_entity_dead(iParam0, 0))
		{
			if (is_ped_being_jacked(iParam0))
			{
				if (get_peds_jacker(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return true;
				}
			}
		}
	}
	if (iParam5)
	{
		if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
		{
			if (is_entity_at_coord(iParam0, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, false, true, 0))
			{
				if (has_player_damaged_at_least_one_ped(player_id()))
				{
					return true;
				}
			}
		}
	}
	if (is_ped_performing_stealth_kill(PLAYER::PLAYER_PED_ID()))
	{
		if (was_ped_killed_by_stealth(iParam0))
		{
			return true;
		}
	}
	if (func_231(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return true;
	}
	if (iParam2)
	{
		if (is_ped_ragdoll(iParam0) && func_230(iParam0, 1) < 1.5f)
		{
			return true;
		}
		else if (is_ped_in_any_vehicle(iParam0, 0))
		{
			if (is_entity_touching_entity(PLAYER::PLAYER_PED_ID(), get_vehicle_ped_is_in(iParam0, 0)))
			{
				return true;
			}
		}
		else if (is_entity_touching_entity(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return true;
		}
		if (!is_entity_dead(iParam1, 0))
		{
			if (has_entity_been_damaged_by_entity(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return true;
			}
		}
	}
	return false;
}

auto func_230(int iParam0, int iParam1)
{
	return func_224(get_player_ped(get_player_index()), iParam0, iParam1);
}

bool func_231(int iParam0, int iParam1)
{
	int iVar0;
	
	get_current_ped_weapon(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (is_ped_shooting(iParam0))
		{
			if (vdist(get_entity_coords(iParam0, 1), get_entity_coords(iParam1, 1)) < 2.5f)
			{
				if (is_ped_facing_ped(iParam0, iParam1, 180f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_232(int iParam0, int iParam1, auto uParam2)
{
	if (is_ped_armed(iParam0, 4))
	{
		if (is_ped_shooting(iParam0) && !is_ped_current_weapon_silenced(iParam0))
		{
			if (is_entity_at_coord(iParam1, get_entity_coords(iParam0, 1), IntToFloat(*uParam2.f_4), IntToFloat(*uParam2.f_4), IntToFloat(*uParam2.f_4), false, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_233(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	Vector3 vVar0;
	int iVar3;
	
	iVar3 = false;
	if (!is_entity_dead(iParam1, 0))
	{
		vVar0 = {get_entity_coords(iParam1, 1)};
	}
	if (is_bullet_in_area(vVar0, 4f, 1))
	{
		return true;
	}
	if (has_bullet_impacted_in_area(vVar0, to_float(*uParam2.f_6), 1, 1))
	{
		return true;
	}
	if (is_ped_armed(iParam0, 2))
	{
		if (is_ped_shooting(iParam0))
		{
			if (is_entity_at_coord(iParam1, get_entity_coords(iParam0, 1), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), false, true, 0))
			{
				if (is_ped_facing_ped(get_ped_index_from_entity_index(iParam1), iParam0, 120f) && has_entity_clear_los_to_entity(iParam1, iParam0, 17))
				{
					return true;
				}
			}
		}
		else
		{
			if (is_ped_in_any_vehicle(get_ped_index_from_entity_index(iParam1), 0))
			{
				iVar3 = get_vehicle_ped_is_in(get_ped_index_from_entity_index(iParam1), 0);
			}
			if (is_ped_planting_bomb(iParam0) || func_234(iVar3))
			{
				if (is_entity_at_coord(iParam1, get_entity_coords(iParam0, 1), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), false, true, 0))
				{
					if (is_ped_facing_ped(get_ped_index_from_entity_index(iParam1), iParam0, 120f) && has_entity_clear_los_to_entity(iParam1, iParam0, 17))
					{
						return true;
					}
				}
			}
		}
	}
	if (iParam3)
	{
		if (is_projectile_in_area(vVar0.x - IntToFloat(*uParam2.f_6), vVar0.y - IntToFloat(*uParam2.f_6), vVar0.z - IntToFloat(*uParam2.f_6), vVar0.x + IntToFloat(*uParam2.f_6), vVar0.y + IntToFloat(*uParam2.f_6), vVar0.z + IntToFloat(*uParam2.f_6), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (get_ped_in_vehicle_seat(iParam0, -1) != 0)
			{
				if (get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_224(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (get_entity_player_is_free_aiming_at(player_id(), &iVar1))
							{
								if ((is_entity_a_vehicle(iVar1) && get_vehicle_index_from_entity_index(iVar1) == iParam0) || (is_entity_a_ped(iVar1) && get_ped_index_from_entity_index(iVar1) == get_ped_in_vehicle_seat(iParam0, -1)))
								{
									if ((is_ped_on_foot(PLAYER::PLAYER_PED_ID()) && is_control_pressed(0, 24)) || (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_control_pressed(0, 69)))
									{
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_235(int iParam0, auto uParam1)
{
	if (!is_entity_dead(iParam0, 0))
	{
		if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (is_player_free_aiming_at_entity(player_id(), iParam0) || is_player_targetting_entity(player_id(), iParam0))
			{
				if (is_ped_facing_ped(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_230(iParam0, 1) < *uParam1.f_2)
					{
						if (*uParam1.f_1 == 0)
						{
							*uParam1.f_1 = GAMEPLAY::GET_GAME_TIMER();
						}
						else if (GAMEPLAY::GET_GAME_TIMER() - *uParam1.f_1 > *uParam1.f_3)
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_236(int iParam0)
{
	struct<4> Var0;
	
	if (does_blip_exist(uLocal_282[iParam0]))
	{
		remove_blip(&(uLocal_282[iParam0]));
	}
	uLocal_282[iParam0] = func_237(iLocal_274[iParam0], 0, 145);
	Var0 = {func_68(uLocal_76[iParam0])};
	set_blip_name_from_text_file(uLocal_282[iParam0], &Var0);
}

int func_237(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_238(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_238(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_60(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_60(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_60(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_239(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	float fVar7;
	
	vVar0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	vVar3 = {get_entity_coords(iParam0, 1)};
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar6 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (get_ped_group_index(iParam0) == func_223())
		{
			if (is_vehicle_driveable(iVar6, 0))
			{
				if (!is_ped_in_vehicle(iParam0, iVar6, 0) && vdist(vVar0, vVar3) > 10f)
				{
					return true;
				}
			}
		}
	}
	if (iParam1 && func_252(uLocal_333, 2))
	{
		fVar7 = absf(vVar0.z - vVar3.z);
		if (fVar7 > 8f)
		{
			return true;
		}
	}
	return false;
}

void func_240()
{
	if (!is_entity_dead(iLocal_274[0], 0))
	{
		if (!is_new_load_scene_active())
		{
			func_182(iLocal_274[0], _get_object_offset_from_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_heading(PLAYER::PLAYER_PED_ID()), 0f, 2f, 0f));
			iLocal_74 = 1;
			iLocal_75 = 0;
		}
	}
}

void func_241()
{
	_0xEB2D525B57F42B40();
	func_242();
}

void func_242()
{
	Global_17118.f_134 = 1;
}

int func_243(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (iParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (iParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_244(int iParam0)
{
	struct<16> Var0;
	
	if (!func_156(iLocal_73))
	{
		iLocal_73 = func_160();
		func_150(&iLocal_73, 0, 0, get_random_int_in_range(5, 7), 0, 0, 0);
	}
	else if (iParam0)
	{
		if (!func_252(uLocal_333, 512))
		{
			if (func_251(iLocal_73) && is_entity_occluded(iLocal_274[0]))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_76[0], 64);
					func_179(&uLocal_81, 1, 0, func_180(uLocal_76[0]), 0, 1);
					func_250(&uLocal_81, func_108(uLocal_76[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_248();
				}
				func_247(iLocal_274[0]);
				func_27(&uLocal_333, 512);
			}
		}
		else if (func_246())
		{
			func_70(&uLocal_333, 512);
		}
		else if ((!func_162() && func_245()) && !func_246())
		{
			func_227(1);
			func_63(2);
		}
	}
}

bool func_245()
{
	if (Global_15712 == 0)
	{
		return true;
	}
	return false;
}

bool func_246()
{
	if (Global_15761 == 1 || Global_16728 == 1)
	{
		return true;
	}
	return false;
}

void func_247(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		set_ped_path_avoid_fire(iParam0, 1);
		if (get_script_task_status(iParam0, 242628503) != 1)
		{
			clear_sequence_task(&iLocal_339);
			open_sequence_task(&iLocal_339);
			task_use_mobile_phone_timed(false, 8000);
			task_follow_nav_mesh_to_coord(false, vLocal_305, 1.5f, -1, 0.25f, 0, 1193033728);
			close_sequence_task(iLocal_339);
			task_perform_sequence(iParam0, iLocal_339);
		}
	}
}

void func_248()
{
	int iVar0;
	
	if (func_249())
	{
		return;
	}
	iVar0 = func_111(uLocal_76[0]);
	func_105(-384575792, iVar0, 6, 3, func_109(), func_108(uLocal_76[0]), 0, 10000, -1, 0, -1, 0, 1);
}

bool func_249()
{
	if (func_52() == 0)
	{
		return true;
	}
	return false;
}

int func_250(auto uParam0, auto uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_175(uParam0, uParam1, sParam2, iParam5, iParam6, 0);
	Global_15760 = 1;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
	return func_168(sParam3, iParam4, iParam7);
}

int func_251(int iParam0)
{
	return func_155(func_160(), iParam0);
}

int func_252(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_253(auto uParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	auto uVar4;
	char[64] cVar5;
	struct<16> Var21;
	struct<16> Var37;
	
	func_281();
	func_61(&vVar0, &fVar3, iParam1);
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (fLocal_329 == -1f)
		{
			fLocal_329 = vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vVar0);
		}
		if (iLocal_332 == -1)
		{
			iLocal_332 = *uParam0.f_3;
		}
		if (!func_252(uLocal_333, 32))
		{
			func_277(&uLocal_278, func_279(*uParam0[0], 0));
			func_276(&uLocal_278);
			func_27(&uLocal_333, 32);
			request_anim_dict("mini@strip_club@idles@stripper");
			request_anim_dict("gestures@f@standing@casual");
			func_275();
			return false;
		}
		else if ((!func_274(&uLocal_278) || !has_anim_dict_loaded("mini@strip_club@idles@stripper")) || !func_273())
		{
			return false;
		}
		if (iLocal_337)
		{
			if (!can_register_mission_peds(1))
			{
				return false;
			}
		}
		if (!func_252(uLocal_333, 1024))
		{
			uLocal_76[0] = *uParam0[0];
			iLocal_274[0] = PED::CREATE_PED(26, func_279(*uParam0[0], 0), vVar0, fVar3, 1, true);
			func_267(iLocal_274[0], uLocal_76[0], 0);
			set_blocking_of_non_temporary_events(iLocal_274[uVar4], true);
			set_ped_keep_task(iLocal_274[0], true);
			set_ped_dies_when_injured(iLocal_274[0], true);
			func_263(iLocal_274[0]);
			task_play_anim(iLocal_274[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, 0, 0, 0);
			task_look_at_entity(iLocal_274[uVar4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
			set_ped_group_member_passenger_index(iLocal_274[0], false);
			set_ambient_voice_name(iLocal_274[0], func_180(*uParam0[0]));
			func_179(&uLocal_81, 1, iLocal_274[0], func_180(*uParam0[0]), 0, 1);
			func_27(&uLocal_333, 1024);
		}
		if (vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vVar0) > 100f)
		{
			if (func_178())
			{
				if (!func_252(uLocal_333, 1))
				{
					func_262(iParam1);
					func_236(0);
					func_27(&uLocal_333, 1);
				}
			}
			if (!func_252(uLocal_333, 64) && !func_252(uLocal_333, 512))
			{
				if (func_261(func_108(*uParam0[0])))
				{
					StringCopy(&cVar5, "BC_PLYRC_", 64);
					if (func_74() == 2)
					{
						func_179(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						StringConCat(&cVar5, "T", 64);
					}
					else if (func_74() == 0)
					{
						func_179(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						StringConCat(&cVar5, "M", 64);
					}
					else if (func_74() == 1)
					{
						func_179(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						StringConCat(&cVar5, "F", 64);
					}
					func_179(&uLocal_81, 3, 0, func_180(*uParam0[0]), 0, 1);
					Var21 = {func_260()};
					func_255(&uLocal_81, func_108(*uParam0[0]), "BCAUD", &cVar5, &cVar5, &Var21, &Var21, 12, 1, 0, 0, 0);
					func_27(&uLocal_333, 64);
				}
				if (func_156(iLocal_73))
				{
					if (func_251(iLocal_73))
					{
						if (*uParam0[0] == 8 || *uParam0[0] == 9)
						{
							StringCopy(&Var37, "SC_CANCEL_", 64);
							StringIntConCat(&Var37, *uParam0[0], 64);
							func_179(&uLocal_81, 1, 0, func_180(*uParam0[0]), 0, 1);
							func_250(&uLocal_81, func_108(*uParam0[0]), "SHAUD", &Var37, 12, 0, 0, 1);
						}
						else
						{
							func_248();
						}
						func_27(&uLocal_333, 512);
					}
				}
			}
			else if (func_246())
			{
				func_70(&uLocal_333, 64);
				func_70(&uLocal_333, 512);
			}
			else if ((!func_162() && func_245()) && !func_246())
			{
				func_254(*uParam0[0]);
				func_227(1);
				func_63(2);
			}
			if (!func_252(uLocal_333, 128))
			{
				if (!func_33(0))
				{
					func_64("SCLUB_HOME_C_H", uLocal_76[0], 0);
					func_27(&uLocal_333, 128);
				}
			}
			if (vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vVar0) > fLocal_329 + 200f * 3f)
			{
				func_63(1);
			}
			else if (vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vVar0) < fLocal_329)
			{
				fLocal_329 = vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vVar0);
			}
			return false;
		}
	}
	else
	{
		return false;
	}
	if (func_74() == 2)
	{
		func_179(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (func_74() == 0)
	{
		func_179(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_74() == 1)
	{
		func_179(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	return true;
}

void func_254(auto uParam0)
{
	if (Global_101154.f_243[func_72() /*53*/].f_2[uParam0 /*5*/].f_1 < 0)
	{
		Global_101154.f_243[func_72() /*53*/].f_2[uParam0 /*5*/].f_1 = 0;
	}
	Global_101154.f_243[func_72() /*53*/].f_2[uParam0 /*5*/].f_1++;
}

int func_255(auto uParam0, auto uParam1, char* sParam2, char[4] cParam3, char[4] cParam4, auto uParam5, auto uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	auto uVar0;
	auto uVar11;
	
	func_175(uParam0, uParam1, sParam2, iParam9, iParam10, 0);
	func_259();
	if (iParam8 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_257(2, &uVar0, &uVar11, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_256(&uVar0, &uVar11, iParam7, iParam11);
}

bool func_256(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam2 > Global_15714)
			{
				if (iParam3 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
				}
				else
				{
					func_174();
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
		if (func_173(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_172();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16708 = Global_16709;
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15331.f_370 = Global_16701;
		Global_15708 = Global_15709;
		Global_15710 = Global_15711;
		if (Global_15970 == 0)
		{
			Global_15866[0 /*6*/] = {Global_15892[0 /*6*/]};
			Global_15866[1 /*6*/] = {Global_15892[1 /*6*/]};
			Global_15918[0 /*6*/] = {Global_15944[0 /*6*/]};
			Global_15918[1 /*6*/] = {Global_15944[1 /*6*/]};
			Global_15879[0 /*6*/] = {Global_15905[0 /*6*/]};
			Global_15879[1 /*6*/] = {Global_15905[1 /*6*/]};
			Global_15931[0 /*6*/] = {Global_15957[0 /*6*/]};
			Global_15931[1 /*6*/] = {Global_15957[1 /*6*/]};
		}
		if (Global_15718)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2285, false);
			if (iParam3)
			{
				func_125();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_171())
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
					if (Global_15970 == 0)
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
			}
			if (func_23())
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
			}
			func_170();
			Global_15722 = iParam3;
		}
		Global_15714 = iParam2;
		if (Global_15708 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15708)
			{
				StringCopy(&(Global_15331.f_6[iVar0 /*6*/]), *uParam0[iVar0], 24);
				StringCopy(&(Global_15331.f_187[iVar0 /*6*/]), *uParam1[iVar0], 24);
				iVar0++;
			}
		}
		Global_14578 = 0;
		func_169();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam2 < Global_15714 || iParam2 == Global_15714)
	{
		return false;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_174();
	}
	return false;
}

void func_257(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_258(iParam0);
	*uParam1[0] = uParam3;
	*uParam2[0] = uParam4;
	*uParam1[1] = uParam5;
	*uParam2[1] = uParam6;
	*uParam1[2] = iParam7;
	*uParam2[2] = iParam8;
	*uParam1[3] = iParam9;
	*uParam2[3] = iParam10;
	*uParam1[4] = iParam11;
	*uParam2[4] = iParam12;
	*uParam1[5] = iParam13;
	*uParam2[5] = iParam14;
	*uParam1[6] = iParam15;
	*uParam2[6] = iParam16;
}

void func_258(auto uParam0)
{
	Global_15709 = uParam0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
}

void func_259()
{
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_15726 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
}

struct<16> func_260()
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "BC_DECR_", 64);
	StringIntConCat(&cVar0, uLocal_76[0], 64);
	return cVar0;
}

bool func_261(int iParam0)
{
	if ((Global_16826 || Global_16825) || Global_16827)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14413.f_1 == 10)
		{
			if (Global_1598 == iParam0)
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
	return false;
}

void func_262(int iParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (iParam0)
			{
				func_80("SCLUB_HOME_MEE4", uLocal_76[0]);
			}
			else
			{
				func_80("SCLUB_HOME_MEET", uLocal_76[0]);
			}
			break;
		
		case 8:
			func_80("SCLUB_HOME_LIZ", uLocal_76[0]);
			break;
		
		case 9:
			func_80("SCLUB_HOME_HITCH", uLocal_76[0]);
			break;
	}
}

void func_263(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_f_y_stripper_02"))
	{
		func_266(iParam0, 2, get_random_int_in_range(false, 3));
		func_265(iParam0, 2, get_random_int_in_range(false, 3));
		func_264(iParam0, 0, 0);
	}
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	if (is_ped_component_variation_valid(iParam0, 6, iParam1, iParam2))
	{
		set_ped_component_variation(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_265(int iParam0, int iParam1, int iParam2)
{
	if (is_ped_component_variation_valid(iParam0, 3, iParam1, iParam2))
	{
		set_ped_component_variation(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_266(int iParam0, int iParam1, int iParam2)
{
	if (is_ped_component_variation_valid(iParam0, 8, iParam1, iParam2))
	{
		set_ped_component_variation(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		set_ped_default_component_variation(iParam0);
		iVar0 = false;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_stripperlite"))
		{
			iVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (iVar0)
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_265(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, -1, -1);
				}
				else
				{
					func_272(iParam0, 1, 1);
					func_271(iParam0, 2, 0);
					func_265(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_266(iParam0, 1, 0);
					func_268(iParam0, 0, 0);
					func_269(iParam0, iParam2, -1, -1);
				}
				break;
			
			case 1:
				if (iVar0)
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_265(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, iParam2, -1, -1);
				}
				else
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_265(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_264(iParam0, 4, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, iParam2, 0, 4);
				}
				break;
			
			case 2:
				if (iVar0)
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 1);
					func_265(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, -1, -1);
				}
				else
				{
					func_272(iParam0, 0, 1);
					func_271(iParam0, 1, 1);
					func_265(iParam0, 1, 0);
					func_270(iParam0, 1, 1);
					func_266(iParam0, 1, 0);
					func_268(iParam0, 1, 0);
					func_269(iParam0, iParam2, -1, -1);
				}
				break;
			
			case 3:
				if (iVar0)
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 0, 1);
					func_265(iParam0, 0, 1);
					func_270(iParam0, 0, 1);
					func_266(iParam0, 0, 0);
					func_269(iParam0, iParam2, -1, -1);
				}
				else
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 2, 0);
					func_265(iParam0, 0, 2);
					func_270(iParam0, 1, 1);
					func_264(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, iParam2, 2, 0);
				}
				break;
			
			case 4:
				if (iVar0)
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_265(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, -1, -1);
				}
				else
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 2, 1);
					func_265(iParam0, 1, 2);
					func_270(iParam0, 0, 2);
					func_266(iParam0, 1, 0);
					func_268(iParam0, 1, 2);
					func_269(iParam0, iParam2, -1, -1);
				}
				break;
			
			case 5:
				if (iVar0)
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_265(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, iParam2, -1, -1);
				}
				else
				{
					func_272(iParam0, 1, 1);
					func_271(iParam0, 1, 0);
					func_265(iParam0, 0, 1);
					func_270(iParam0, 0, 2);
					func_264(iParam0, 2, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, iParam2, 1, 2);
				}
				break;
			
			case 6:
				if (iVar0)
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_265(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, -1, -1);
				}
				else
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 1, 0);
					func_265(iParam0, 0, 1);
					func_270(iParam0, 0, 1);
					func_266(iParam0, 1, 0);
					func_268(iParam0, 0, 1);
					func_269(iParam0, iParam2, 0, 1);
				}
				break;
			
			case 7:
				if (iVar0)
				{
					func_272(iParam0, 0, 0);
					func_271(iParam0, 0, 1);
					func_265(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_269(iParam0, iParam2, -1, -1);
				}
				else
				{
					func_272(iParam0, 1, 0);
					func_271(iParam0, 0, 2);
					func_265(iParam0, 1, 1);
					func_270(iParam0, 0, 1);
					func_264(iParam0, 0, 0);
					func_266(iParam0, 1, 0);
					func_269(iParam0, iParam2, 0, 0);
				}
				break;
			
			case 8:
				set_ped_component_variation(iParam0, 3, 2, false, 0);
				set_ped_component_variation(iParam0, 4, false, true, 0);
				break;
			
			case 9:
				set_ped_component_variation(iParam0, false, false, true, 0);
				set_ped_component_variation(iParam0, 2, false, true, 0);
				set_ped_component_variation(iParam0, 3, false, false, 0);
				set_ped_component_variation(iParam0, 4, false, true, 0);
				set_ped_component_variation(iParam0, 8, true, false, 0);
				set_ped_component_variation(iParam0, 10, false, false, 0);
				break;
			}
	}
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	if (is_ped_component_variation_valid(iParam0, 11, iParam1, iParam2))
	{
		set_ped_component_variation(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_269(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (is_entity_dead(iParam0, 0))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == func_243(0, 0) || iVar0 == func_243(0, 1))
	{
		if (iParam1)
		{
			func_265(iParam0, 2, 0);
			func_266(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_243(1, 0) || iVar0 == func_243(1, 1))
	{
		if (iParam1)
		{
			func_265(iParam0, 0, iParam2);
			func_264(iParam0, iParam3, 0);
			func_266(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (iParam1)
		{
			func_266(iParam0, 1, 0);
		}
	}
}

void func_270(int iParam0, int iParam1, int iParam2)
{
	if (is_ped_component_variation_valid(iParam0, 4, iParam1, iParam2))
	{
		set_ped_component_variation(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	if (is_ped_component_variation_valid(iParam0, 2, iParam1, iParam2))
	{
		set_ped_component_variation(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_272(int iParam0, int iParam1, int iParam2)
{
	if (is_ped_component_variation_valid(iParam0, 0, iParam1, iParam2))
	{
		set_ped_component_variation(iParam0, false, iParam1, iParam2, 0);
	}
}

bool func_273()
{
	if (is_string_null_or_empty(func_190()))
	{
		return true;
	}
	else if (get_is_waypoint_recording_loaded(func_190()))
	{
		return true;
	}
	return false;
}

bool func_274(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(*uParam0[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED(*uParam0[iVar0]))
				{
				}
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_275()
{
	if (!is_string_null_or_empty(func_190()))
	{
		request_waypoint_recording(func_190());
	}
}

void func_276(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(*uParam0[iVar0]);
		}
		iVar0++;
	}
}

bool func_277(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] != 0)
		{
			if (*uParam0[iVar0] == iParam1)
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar1 = func_278(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return false;
	}
	*uParam0[iVar1] = iParam1;
	return true;
}

int func_278(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_279(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_108(iParam0);
	if (iVar0 != 145)
	{
		return func_280(iVar0);
	}
	return func_243(0, 0);
}

int func_280(int iParam0)
{
	if (!func_77(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_281()
{
	switch (uLocal_76[0])
	{
		case 1:
			vLocal_302 = {128.1002f, -1895.001f, 22.4811f};
			vLocal_305 = {128.1059f, -1896.819f, 22.6792f};
			vLocal_308 = {133.9411f, -1881.89f, 22.5257f};
			vLocal_311 = {130.1663f, -1893.057f, 22.3748f};
			vLocal_314 = {133.4958f, -1891.641f, 22.4252f};
			fLocal_326 = 330.5705f;
			fLocal_327 = 244f;
			vLocal_323 = {146.293f, -1888.049f, 22.2193f};
			fLocal_328 = fLocal_327;
			break;
		
		case 0:
			vLocal_302 = {-161.9628f, -1636.501f, 33.0339f};
			vLocal_305 = {-159.9415f, -1637.307f, 33.0339f};
			vLocal_308 = {-178.6316f, -1629.522f, 32.1789f};
			vLocal_311 = {-166.1453f, -1633.102f, 32.6574f};
			vLocal_314 = {-166.6636f, -1633.229f, 32.6567f};
			fLocal_326 = 108.072f;
			fLocal_327 = 180.9811f;
			vLocal_323 = {vLocal_308};
			fLocal_328 = fLocal_327;
			break;
		
		case 4:
			vLocal_302 = {-198.3824f, 87.8785f, 68.7436f};
			vLocal_305 = {-197.2292f, 86.3497f, 68.7561f};
			vLocal_308 = {-200.9078f, 113.537f, 68.5518f};
			vLocal_311 = {-200.1384f, 96.9809f, 68.5203f};
			vLocal_314 = {-199.5068f, 95.7042f, 68.5193f};
			fLocal_326 = 48.99f;
			fLocal_327 = 64.3f;
			vLocal_323 = {vLocal_308};
			fLocal_328 = fLocal_327;
			break;
		
		case 5:
			vLocal_302 = {-849.0348f, 510.6906f, 89.8218f};
			vLocal_305 = {-849.0408f, 508.5767f, 89.8218f};
			vLocal_308 = {-846.1005f, 520.2202f, 89.6217f};
			vLocal_311 = {-851.8972f, 512.73f, 89.6217f};
			vLocal_314 = {-851.8746f, 513.6746f, 89.6217f};
			fLocal_326 = 92.365f;
			fLocal_327 = 293f;
			vLocal_323 = {-860.4819f, 514.2496f, 88.1473f};
			fLocal_328 = fLocal_327;
			break;
		
		case 8:
			vLocal_302 = {-28.2427f, -1555.892f, 29.6918f};
			vLocal_305 = {-24.8589f, -1556.846f, 29.6819f};
			vLocal_308 = {-41.8174f, -1575.609f, 28.2831f};
			vLocal_311 = {-25.3404f, -1556.341f, 29.6919f};
			vLocal_314 = {-27.7382f, -1570.572f, 29.3f};
			fLocal_326 = 181.352f;
			fLocal_327 = 47.9206f;
			vLocal_323 = {vLocal_308};
			fLocal_328 = fLocal_327;
			break;
		
		case 9:
			vLocal_302 = {3313.487f, 5175.831f, 18.619f};
			vLocal_305 = {3310.816f, 5176.331f, 18.619f};
			vLocal_308 = {3334.321f, 5161.122f, 17.2996f};
			vLocal_311 = {3317.788f, 5171.707f, 17.4471f};
			vLocal_314 = {3318.076f, 5171.805f, 17.4385f};
			fLocal_326 = 236.4579f;
			vLocal_323 = {3322.927f, 5148.607f, 17.3141f};
			fLocal_328 = 310.8648f;
			break;
	}
}

bool func_282()
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (iLocal_337)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		default:
			return false;
			break;
	}
	return false;
}

bool func_283(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_287();
			}
			else
			{
				return false;
			}
		}
		if (!func_286())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_287();
					}
					else
					{
						return false;
					}
				}
				if (func_285())
				{
					if (!iParam2)
					{
						func_287();
					}
					else
					{
						return false;
					}
				}
				if (func_284(155))
				{
					if (!iParam2)
					{
						func_287();
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
					func_287();
				}
				else
				{
					return false;
				}
			}
		}
		wait(false);
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
				func_287();
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
			func_287();
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_284(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_285()
{
	return Global_2434762.f_569;
}

auto func_286()
{
	return Global_1315888;
}

void func_287()
{
	terminate_this_thread();
}

void func_288()
{
	set_debug_lines_and_spheres_drawing_active(0);
	set_all_vehicle_generators_active();
	func_82();
	clear_prints();
	remove_scenario_blocking_area(iLocal_301, 0);
	set_all_vehicle_generators_active_in_area(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), true, 1);
	set_roads_back_to_original_in_angled_area(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), 15f, 1);
	if (is_player_playing(player_id()))
	{
		set_player_control(player_id(), true, 0);
	}
	render_script_cams(false, false, 3000, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
	{
		if (!is_entity_dead(iLocal_274[0], 0))
		{
			if (!func_252(uLocal_333, 8192))
			{
				task_wander_standard(iLocal_274[0], 1193033728, 0);
			}
			set_ped_keep_task(iLocal_274[0], true);
			if (!unk_0xCC6E3B6BB69501F1(iLocal_72))
			{
				add_relationship_group("BootyCall", &iLocal_72);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_72, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_72);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_274[0], iLocal_72);
		}
		set_ped_as_no_longer_needed(&(iLocal_274[0]));
	}
	if (iLocal_332 != -1)
	{
		func_290(&iLocal_332);
	}
	if (iLocal_71)
	{
		func_134(&uLocal_70);
	}
	set_hud_anim_stop_level(player_id(), 0);
	func_117(uLocal_76[0], -1);
	Global_100148 = 0;
	func_289(0);
	terminate_this_thread();
}

void func_289(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_214(iVar0, iParam0);
		iVar0++;
	}
}

void func_290(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35673)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

