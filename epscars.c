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
	auto uLocal_20 = 0;
	char* sLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	float fLocal_24 = 0;
	auto uLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	float fLocal_28 = 0;
	float fLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	auto uLocal_32 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	float fLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	int iLocal_38 = 0;
	auto uLocal_39 = 0;
	Vector3 vLocal_40 = 0;
	struct<27> Local_43 = 0;
	Vector3[] vLocal_70 = new Vector3[5];
	int[] iLocal_86 = new int[5];
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
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	Vector3[] vLocal_109 = new Vector3[2];
	auto uLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	auto uLocal_119 = 16;
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
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	auto uLocal_286 = 0;
#endregion

void main()
{
	Vector3 vVar0;
	Vector3 vVar3;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	vLocal_40 = {-690.938f, 512.2703f, 109.3639f};
	iLocal_100 = -1;
	iLocal_108 = 60000;
	iLocal_285 = 99;
	if (has_force_cleanup_occurred(146))
	{
		func_90();
	}
	if (func_89(90) == 1)
	{
		func_88();
		terminate_this_thread();
	}
	iLocal_99 = Global_101154.f_8739.f_103;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_85(6);
	func_84(&Local_43, joaat("prop_ch2_09c_garage_door"), -689.81f, 510.34f, 109.98f, vLocal_40, -688.4919f, 507.2549f, 108.9186f, -691.8835f, 516.2689f, 113.4316f, 9.25f, -687.4553f, 507.5179f, 109.3635f, -690.9484f, 506.2783f, 109.3631f);
	func_83(&Local_43, 2);
	Local_43.f_4 = 3;
	clear_area_of_vehicles(vLocal_40, 5f, 0, 0, 0, 0, false);
	func_82(&vLocal_109, -691.9059f, 515.8249f, 108.6139f, -684.0605f, 493.0171f, 110.8504f, 8.25f);
	set_roads_in_angled_area(vLocal_109[0 /*3*/], vLocal_109[1 /*3*/], 8.25f, 0, false, 1);
	set_roads_in_angled_area(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, false, 1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &vVar0, &vVar3);
	iLocal_118 = add_scenario_blocking_area(vVar0, vVar3, 0, 1, 1, 1);
	if (func_89(90) == 1)
	{
		func_88();
		func_90();
	}
	if (Global_101154.f_8739.f_104 == 0)
	{
		Global_101154.f_8739.f_104 = get_clock_day_of_month();
	}
	func_77(1);
	func_76(0);
	while (true)
	{
		if (func_89(90) == 1)
		{
			func_88();
			func_90();
		}
		func_75(PLAYER::PLAYER_PED_ID());
		if (get_mission_flag() || func_70() != 0)
		{
			func_65();
		}
		switch (iLocal_94)
		{
			case 0:
				func_64(&iLocal_93);
				break;
			
			case 4:
				func_63(&iLocal_93);
				break;
			
			case 1:
				func_62(&iLocal_93);
				break;
			
			case 2:
				func_56(&iLocal_93);
				break;
			
			case 3:
				func_52(&iLocal_93);
				break;
			
			case 6:
				func_49(2, 6, 1);
				func_48(2, "EPS_LSTEMAIL", 1);
				func_47(2);
				func_90();
				break;
		}
		func_44(&Local_43);
		if (func_43(&Local_43))
		{
			if (func_37(&Local_43))
			{
				if (_0xB2D06FAEDE65B577() == Global_69224)
				{
					Global_69224 = 0;
					Global_101154.f_18807.f_5588 = 0;
				}
				clear_area_of_vehicles(Local_43.f_14, 8.5f, 0, 0, 0, 0, false);
				Global_101154.f_8739.f_103 = iLocal_99;
				func_35();
				func_34(&uLocal_119, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				func_22(&uLocal_119, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (func_21("EPS_DROP_HELP"))
				{
					clear_help(1);
				}
				func_19();
			}
		}
		if (Global_101154.f_8739.f_104 != 0)
		{
			iLocal_97 = Global_101154.f_8739.f_104 + 14 % func_18(get_clock_month(), get_clock_year());
			if (((get_clock_day_of_month() == iLocal_97 && !func_17(0)) && !is_player_dead(player_id())) && is_player_playing(player_id()))
			{
				func_4(func_16());
			}
		}
		func_1(&iLocal_284, &uLocal_286, &iLocal_285);
		if ((iLocal_107 > 0 && GAMEPLAY::GET_GAME_TIMER() > iLocal_107) && iLocal_285 == 99)
		{
			iLocal_107 = 0;
			if (func_86())
			{
				func_76(6);
			}
		}
		wait(0);
	}
}

void func_1(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	
	switch (*iParam2)
	{
		case 0:
			*iParam0 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
			if (has_scaleform_movie_loaded(*iParam0))
			{
				iVar0 = get_sound_id();
				play_sound_frontend(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 1);
				*iParam2++;
			}
			break;
		
		case 1:
			_push_scaleform_movie_function(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
			_begin_text_component("EPS_CAR_TITLE");
			_end_text_component();
			_begin_text_component("EPS_CAR_NOTE");
			add_text_component_integer(func_3());
			_end_text_component();
			_pop_scaleform_movie_function_void();
			*uParam1 = GAMEPLAY::GET_GAME_TIMER();
			*iParam2++;
			break;
		
		case 2:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam1 > 7000)
			{
				_push_scaleform_movie_function(*iParam0, "SHARD_ANIM_OUT");
				_push_scaleform_movie_function_parameter_int(true);
				_push_scaleform_movie_function_parameter_float(0.33f);
				_pop_scaleform_movie_function_void();
				*iParam2++;
			}
			else if (!func_2())
			{
				if (has_scaleform_movie_loaded(*iParam0))
				{
					draw_scaleform_movie_fullscreen(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 3:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam1 > 7500)
			{
				*iParam2++;
			}
			else if (!func_2())
			{
				if (has_scaleform_movie_loaded(*iParam0))
				{
					draw_scaleform_movie_fullscreen(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 4:
			if (has_scaleform_movie_loaded(*iParam0))
			{
				set_scaleform_movie_as_no_longer_needed(iParam0);
			}
			*iParam2 = 99;
			break;
		
		case 99:
			break;
	}
}

bool func_2()
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

int func_3()
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	iVar1 = 0;
	iVar0 = false;
	while (iVar0 < 5)
	{
		if (is_bit_set(iLocal_99, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	func_49(2, vLocal_70[5 - iParam0 /*3*/], 1);
	if (func_15(iLocal_100))
	{
		func_48(2, vLocal_70[5 - iParam0 /*3*/].f_2, 0);
	}
	else
	{
		func_48(2, vLocal_70[5 - iParam0 /*3*/].f_1, 0);
	}
	iParam0 = false;
	iVar0 = 0;
	iParam0 = false;
	while (iParam0 < iLocal_86)
	{
		if (!func_14(iParam0))
		{
			func_12(2, func_13(iLocal_86[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	func_5(2);
	Global_101154.f_8739.f_104 = get_clock_day_of_month();
	if (iVar0 == 0)
	{
	}
}

void func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	auto uVar7;
	char* sVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/];
	iVar2 = Global_46152[iVar0 /*203*/].f_9 - 1;
	if (!Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		uVar7 = Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_36852[uVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = {Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2};
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_6(1, Global_36852[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36852[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_6(1, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_6(2, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	int iVar1;
	char[64] cVar2;
	
	if (is_cutscene_playing())
	{
		return;
	}
	iVar0 = func_70();
	iVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &iVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				_set_notification_text_entry("PROPR_INCEMAIL1");
				break;
			
			case 73:
				_set_notification_text_entry("PROPR_INCEMAIL3");
				break;
			
			case 74:
				_set_notification_text_entry("PROPR_INCEMAIL2");
				break;
			
			default:
				_set_notification_text_entry(sParam3);
				if (!is_string_null_or_empty(sParam4))
				{
					_add_text_component_item_string(sParam4);
				}
				if (!is_string_null_or_empty(sParam5))
				{
					_add_text_component_item_string(sParam5);
				}
				if (!is_string_null_or_empty(sParam6))
				{
					_add_text_component_item_string(sParam6);
				}
				if (!is_string_null_or_empty(sParam7))
				{
					_add_text_component_item_string(sParam7);
				}
				if (!is_string_null_or_empty(sParam8))
				{
					_add_text_component_item_string(sParam8);
				}
				if (!is_string_null_or_empty(sParam9))
				{
					_add_text_component_item_string(sParam9);
				}
				if (!is_string_null_or_empty(sParam10))
				{
					_add_text_component_item_string(sParam10);
				}
				if (!is_string_null_or_empty(sParam11))
				{
					_add_text_component_item_string(sParam11);
				}
				if (!is_string_null_or_empty(sParam12))
				{
					_add_text_component_item_string(sParam12);
				}
				if (!is_string_null_or_empty(sParam13))
				{
					_add_text_component_item_string(sParam13);
				}
				break;
		}
		if (iVar1)
		{
			func_7(_set_notification_message(&cVar2, &cVar2, 0, 2, _get_label_text(func_8(iParam1)), 0));
		}
		else
		{
			func_7(_set_notification_message("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, _get_label_text(func_8(iParam1)), 0));
		}
		switch (Global_14413)
		{
			case 0:
				StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
				Global_36844++;
				if (Global_36844 > 16)
				{
					Global_36844 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
				Global_36846++;
				if (Global_36846 > 16)
				{
					Global_36846 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
				Global_36845++;
				if (Global_36845 > 16)
				{
					Global_36845 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
				break;
		}
		play_sound_frontend(-1, "Notification", &Global_14402, 1);
	}
}

void func_7(auto uParam0)
{
	Global_36847[Global_36851] = uParam0;
	Global_16770 = 1;
	Global_16769 = uParam0;
	Global_36851++;
	if (Global_36851 == 3)
	{
		Global_36851 = 0;
	}
}

char* func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_9(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return _get_label_text(&(Global_101154.f_32575[0 /*29*/].f_7));
		
		case 1:
			return _get_label_text(&(Global_101154.f_32575[1 /*29*/].f_7));
		
		case 2:
			return _get_label_text(&(Global_101154.f_32575[2 /*29*/].f_7));
		
		case 7:
			return _get_label_text(&(Global_101154.f_32575[12 /*29*/].f_7));
		
		case 4:
			return _get_label_text(&(Global_101154.f_32575[60 /*29*/].f_7));
		
		case 6:
			return _get_label_text(&(Global_101154.f_32575[62 /*29*/].f_7));
		
		case 3:
			return _get_label_text(&(Global_101154.f_32575[14 /*29*/].f_7));
		
		case 16:
			return _get_label_text(&(Global_101154.f_32575[97 /*29*/].f_7));
		
		case 19:
			return _get_label_text(&(Global_101154.f_32575[99 /*29*/].f_7));
		
		case 15:
			return _get_label_text(&(Global_101154.f_32575[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return _get_label_text(&(Global_101154.f_32575[15 /*29*/].f_7));
		
		case 26:
			return _get_label_text(&(Global_101154.f_32575[30 /*29*/].f_7));
		
		case 27:
			return _get_label_text(&(Global_101154.f_32575[17 /*29*/].f_7));
		
		case 29:
			return _get_label_text(&(Global_101154.f_32575[20 /*29*/].f_7));
		
		case 30:
			return _get_label_text(&(Global_101154.f_32575[43 /*29*/].f_7));
		
		case 31:
			return _get_label_text(&(Global_101154.f_32575[44 /*29*/].f_7));
		
		case 32:
			return _get_label_text(&(Global_101154.f_32575[19 /*29*/].f_7));
		
		case 34:
			return _get_label_text(&(Global_101154.f_32575[40 /*29*/].f_7));
		
		case 36:
			return _get_label_text(&(Global_101154.f_32575[22 /*29*/].f_7));
		
		case 38:
			return _get_label_text(&(Global_101154.f_32575[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return _get_label_text(&(Global_101154.f_32575[122 /*29*/].f_7));
		
		case 40:
			return _get_label_text(&(Global_101154.f_32575[125 /*29*/].f_7));
		
		case 41:
			return _get_label_text(&(Global_101154.f_32575[113 /*29*/].f_7));
		
		case 42:
			return _get_label_text(&(Global_101154.f_32575[126 /*29*/].f_7));
		
		case 43:
			return _get_label_text(&(Global_101154.f_32575[127 /*29*/].f_7));
		
		case 44:
			return _get_label_text(&(Global_101154.f_32575[124 /*29*/].f_7));
		
		case 45:
			return _get_label_text(&(Global_101154.f_32575[114 /*29*/].f_7));
		
		case 46:
			return _get_label_text(&(Global_101154.f_32575[115 /*29*/].f_7));
		
		case 47:
			return _get_label_text(&(Global_101154.f_32575[116 /*29*/].f_7));
		
		case 48:
			return _get_label_text(&(Global_101154.f_32575[123 /*29*/].f_7));
		
		case 49:
			return _get_label_text(&(Global_101154.f_32575[117 /*29*/].f_7));
		
		case 50:
			return _get_label_text(&(Global_101154.f_32575[118 /*29*/].f_7));
		
		case 51:
			return _get_label_text(&(Global_101154.f_32575[119 /*29*/].f_7));
		
		case 52:
			return _get_label_text(&(Global_101154.f_32575[120 /*29*/].f_7));
		
		case 53:
			return _get_label_text(&(Global_101154.f_32575[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_10(int iParam0)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (iParam0 > -1)
	{
		StringCopy(&cVar0, "EMSTR_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		return cVar0;
	}
	StringCopy(&cVar16, "FAIL", 64);
	return cVar16;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_46152[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46152[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46152[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_12(int iParam0, char* sParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_6 == 10)
	{
		return;
	}
	uVar1 = Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_6;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_6++;
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[uVar1 /*4*/]), sParam1, 16);
}

char* func_13(int iParam0)
{
	if (iParam0 == iLocal_86[0])
	{
		return "EPS_CARNME_0";
	}
	if (iParam0 == iLocal_86[1])
	{
		return "EPS_CARNME_1";
	}
	if (iParam0 == iLocal_86[2])
	{
		return "EPS_CARNME_2";
	}
	if (iParam0 == iLocal_86[3])
	{
		return "EPS_CARNME_3";
	}
	if (iParam0 == iLocal_86[4])
	{
		return "EPS_CARNME_4";
	}
	return "EPS_CARNME_N";
}

int func_14(int iParam0)
{
	return is_bit_set(iLocal_99, iParam0);
}

int func_15(int iParam0)
{
	if (iParam0 < 0)
	{
		return true;
	}
	return is_bit_set(iLocal_99, iParam0 + 5);
}

int func_16()
{
	return 5 - func_3();
}

bool func_17(int iParam0)
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

int func_18(int iParam0, int iParam1)
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

void func_19()
{
	int iVar0;
	
	iLocal_285 = 0;
	stat_get_int(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 6 + func_3())
	{
		stat_set_int(joaat("num_epsilon_step"), 6 + func_3(), 1);
		func_20(23, 6 + func_3());
	}
}

int func_20(int iParam0, int iParam1)
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

int func_21(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

int func_22(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0);
}

bool func_23(char* sParam0, int iParam1, int iParam2)
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
					func_32();
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
		if (func_31(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_30();
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
				func_28();
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
				if (func_27())
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
			if (func_26())
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
			func_25();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_24();
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
		func_32();
	}
	return false;
}

void func_24()
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

void func_25()
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

bool func_26()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_27()
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

void func_28()
{
	if (func_29(14))
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
		Global_14413 = func_70();
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

int func_29(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_30()
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

int func_31(int iParam0, int iParam1)
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

void func_32()
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

void func_33(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

void func_34(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_35()
{
	if (func_36(0))
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

int func_36(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

int func_37(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var[] uVar3 = new var[20];
	
	iVar2 = 0;
	iVar1 = get_ped_nearby_vehicles(PLAYER::PLAYER_PED_ID(), &uVar3);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_75(uVar3[iVar0]))
		{
			if (is_entity_in_angled_area(uVar3[iVar0], *(uParam0.f_6[0 /*3*/]), *(uParam0.f_6[1 /*3*/]), *uParam0.f_6.f_7, 0, true, 0) && !*uParam0.f_26)
			{
				if (func_38(uVar3[iVar0]))
				{
					iVar2 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		Global_101154.f_8739.f_104 = get_clock_day_of_month();
		iLocal_107 = GAMEPLAY::GET_GAME_TIMER() + iLocal_108;
	}
	return iVar2;
}

bool func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_42(iParam0))
	{
		return false;
	}
	iVar0 = false;
	while (iVar0 < 5)
	{
		if (func_41(iVar1, iVar0))
		{
			if (!func_14(iVar0))
			{
				func_40(iVar0, get_entity_health(iParam0) < 875);
				func_39(iVar0, 1);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_39(int iParam0, int iParam1)
{
	if (iParam1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_99, iParam0);
		iLocal_100 = iParam0;
	}
	else
	{
		clear_bit(&iLocal_99, iParam0);
	}
}

void func_40(int iParam0, int iParam1)
{
	if (iParam1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_99, iParam0 + 5);
	}
	else
	{
		clear_bit(&iLocal_99, iParam0 + 5);
	}
}

bool func_41(int iParam0, int iParam1)
{
	if (iParam0 == iLocal_86[iParam1])
	{
		return true;
	}
	if (iLocal_86[iParam1] != joaat("tornado2"))
	{
		return false;
	}
	if (iParam0 == joaat("tornado"))
	{
		return true;
	}
	if (iParam0 == joaat("tornado2"))
	{
		return true;
	}
	if (iParam0 == joaat("tornado3"))
	{
		return true;
	}
	if (iParam0 == joaat("tornado4"))
	{
		return true;
	}
	return false;
}

int func_42(int iParam0)
{
	if (!func_75(iParam0))
	{
		return true;
	}
	if (get_entity_health(iParam0) < 750)
	{
		return true;
	}
	if (is_vehicle_bumper_broken_off(iParam0, 1) || is_vehicle_bumper_broken_off(iParam0, 0))
	{
		return true;
	}
	return _0x42A4BEB35D372407(iParam0) > 0;
}

int func_43(auto uParam0)
{
	return (*uParam0.f_5 == 2 && *uParam0.f_4 == 2);
}

void func_44(auto uParam0)
{
	Vector3 vVar0;
	
	*uParam0.f_26 = 0;
	if (is_position_occupied(*(uParam0.f_19[0 /*3*/]), 1.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0))
	{
		*uParam0.f_26 = 1;
	}
	else if (is_position_occupied(*(uParam0.f_19[1 /*3*/]), 1.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0))
	{
		*uParam0.f_26 = 1;
	}
	else
	{
		vVar0 = {func_45(*(uParam0.f_19[0 /*3*/]), *(uParam0.f_19[1 /*3*/]), 0.5f, 1)};
		*uParam0.f_26 = is_position_occupied(vVar0, 1.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0);
		if (*uParam0.f_26)
		{
		}
	}
	if (*uParam0.f_5 == 2 && (*uParam0.f_4 != 2 || *uParam0.f_4 == 3))
	{
		*uParam0.f_17 -= *uParam0.f_18;
		if (*uParam0.f_17 <= 0f)
		{
			*uParam0.f_17 = 0f;
			*uParam0.f_4 = 2;
			stop_sound(iLocal_95);
			iLocal_96 = 0;
			play_sound_from_coord(-1, "CLOSED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_96)
		{
			play_sound_from_coord(iLocal_95, "CLOSING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_96 = 1;
		}
	}
	if (*uParam0.f_5 == 1 && (*uParam0.f_4 != 1 || *uParam0.f_4 == 4))
	{
		*uParam0.f_17 += *uParam0.f_18;
		if (*uParam0.f_17 >= 1f)
		{
			*uParam0.f_17 = 1f;
			*uParam0.f_4 = 1;
			stop_sound(iLocal_95);
			iLocal_96 = 0;
			play_sound_from_coord(-1, "OPENED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_96)
		{
			play_sound_from_coord(iLocal_95, "OPENING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_96 = 1;
		}
	}
	if (does_object_of_type_exist_at_coords(*uParam0, 20f, *uParam0.f_3, 0))
	{
		set_state_of_closest_door_of_type(*uParam0.f_3, *uParam0, true, *uParam0.f_17, 0);
	}
}

Vector3 func_45(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	if (iParam7)
	{
		fParam6 = func_46(fParam6, 0f, 1f);
	}
	return vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3 - vParam0;
}

float func_46(float fParam0, float fParam1, float fParam2)
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

void func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!is_bit_set(Global_101154.f_29511, 4 - 1))
		{
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46152[iVar0 /*203*/] = 0;
}

void func_48(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_1 = 1;
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_2), sParam1, 16);
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_6 = 0;
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[4 /*4*/]), "", 16);
	if (iParam2)
	{
		func_5(iParam0);
	}
}

bool func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_51(iParam0, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 4)
	{
		return false;
	}
	Global_46152[iVar0 /*203*/].f_2 = iParam0;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46152[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46152[iVar0 /*203*/].f_4[iVar1] == Global_36852[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46152[iVar0 /*203*/].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_46152[iVar0 /*203*/].f_4[Global_46152[iVar0 /*203*/].f_3] = Global_36852[iParam1 /*12*/].f_3;
			Global_46152[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46152[iVar0 /*203*/].f_4[iVar1] == Global_36852[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46152[iVar0 /*203*/].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_46152[iVar0 /*203*/].f_4[Global_46152[iVar0 /*203*/].f_3] = Global_36852[iParam1 /*12*/].f_2;
			Global_46152[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46152[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_50(Global_46152[iVar0 /*203*/].f_4[iVar1], Global_46152[iVar0 /*203*/].f_1, 1, iParam2, 0);
		}
		iVar1++;
	}
	return true;
}

void func_50(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	auto uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	auto uVar25;
	auto uVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!iParam2)
	{
		iVar19 = Global_40177[iParam1 /*46*/].f_42 - 1;
		if (iVar19 < 0)
		{
			return;
		}
		uVar20 = Global_40177[iParam1 /*46*/].f_32[iVar19];
		iVar2 = uVar20;
		Var3 = {func_10(Global_36852[uVar20 /*12*/].f_1)};
		if (Global_36852[uVar20 /*12*/].f_2 == iParam0 && !Global_36852[uVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36852[uVar20 /*12*/].f_2;
		iVar0 = Global_45790[iParam0 /*120*/];
		iVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 -= 16;
			iVar21 = true;
		}
		if (iVar21)
		{
			if (!Global_45790[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36844--;
						if (Global_36844 < 0)
						{
							Global_36844 = 0;
						}
						break;
					
					case 1:
						Global_36845--;
						if (Global_36845 < 0)
						{
							Global_36845 = 0;
						}
						break;
					
					case 2:
						Global_36846--;
						if (Global_36846 < 0)
						{
							Global_36846 = 0;
						}
						break;
					}
				}
		}
		Global_45790[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45790[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45790[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45790[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45790[iParam0 /*120*/];
		iVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 -= 16;
			iVar22 = true;
		}
		if (iVar22)
		{
			if (!Global_45790[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36844--;
						if (Global_36844 < 0)
						{
							Global_36844 = 0;
						}
						break;
					
					case 1:
						Global_36845--;
						if (Global_36845 < 0)
						{
							Global_36845 = 0;
						}
						break;
					
					case 2:
						Global_36846--;
						if (Global_36846 < 0)
						{
							Global_36846 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_46152[iVar24 /*203*/].f_1 == iParam1 && Global_46152[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45790[iParam0 /*120*/].f_18[iVar0] = Global_46152[iVar23 /*203*/].f_1;
		Global_45790[iParam0 /*120*/].f_1[iVar0] = Global_46152[iVar23 /*203*/].f_9 - 1;
		Global_45790[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45790[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45790[iParam0 /*120*/]++;
		uVar25 = Global_45790[iParam0 /*120*/].f_1[iVar0];
		uVar26 = Global_46152[iVar23 /*203*/].f_10[uVar25 /*48*/];
		iVar2 = uVar26;
		iVar1 = Global_36852[uVar26 /*12*/].f_2;
		if (Global_46152[iVar23 /*203*/].f_10[Global_46152[iVar23 /*203*/].f_9 - 1 /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46152[iVar23 /*203*/].f_10[Global_46152[iVar23 /*203*/].f_9 - 1 /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = {func_10(Global_36852[uVar26 /*12*/].f_1)};
		}
	}
	if (!iParam4)
	{
		if (!Global_45790[iParam0 /*120*/].f_69[iVar0] && !iParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_6(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_51(int iParam0, int iParam1)
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
	
	iVar0 = func_11(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46152[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	iVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46152[iVar1 /*203*/] == 0)
		{
			iVar2 = true;
		}
		iVar1++;
	}
	if (!iVar2)
	{
		return -1;
	}
	iVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46152[iVar1 /*203*/] == 0)
		{
			if (iVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46152[iVar1 /*203*/].f_1;
				iVar3 = false;
			}
			else if (iVar5 > Global_46152[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46152[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46152[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46152[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45790[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45790[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45790[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45790[iVar6 /*120*/].f_18[iVar8] == Global_46152[iVar4 /*203*/].f_1)
							{
								if (Global_45790[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36844--;
											break;
										
										case 1:
											Global_36845--;
											break;
										
										case 2:
											Global_36846--;
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_46152[iVar4 /*203*/].f_2 = iParam0;
	Global_46152[iVar4 /*203*/].f_3 = 0;
	if (!iParam1)
	{
		Global_46152[iVar4 /*203*/] = 1;
	}
	Global_101154.f_25562.f_310++;
	if (Global_101154.f_25562.f_310 == 0)
	{
		Global_101154.f_25562.f_310 = 1;
	}
	Global_46152[iVar4 /*203*/].f_1 = Global_101154.f_25562.f_310;
	Global_46152[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_52(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_55(&iLocal_92);
			func_54("EPS_DROP_PERSON", -1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (!func_53())
			{
				*iParam0 = 4;
				return;
			}
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1);
				if (func_75(iVar0))
				{
					if (get_vehicle_number_of_passengers(iVar0) == 0)
					{
						*iParam0 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (!func_53())
			{
				func_76(0);
			}
			else
			{
				func_54("EPS_DROP_ESCAPE", -1);
				func_76(2);
			}
			break;
	}
}

bool func_53()
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	if (!func_75(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_102 = 0;
		return false;
	}
	iVar1 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
	if (!func_75(iVar1))
	{
		return false;
	}
	iVar0 = false;
	while (iVar0 < 5)
	{
		if (!func_14(iVar0))
		{
			if (func_41(ENTITY::GET_ENTITY_MODEL(iVar1), iVar0))
			{
				if (func_42(iVar1))
				{
					if (!iLocal_102)
					{
						func_54("EPS_DROP_FAIL", -1);
						iLocal_102 = 1;
					}
					return false;
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_54(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_55(int iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_route(*iParam0, false);
		remove_blip(iParam0);
	}
}

void func_56(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_83(&Local_43, 1);
			Local_43.f_4 = 4;
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				stop_fire_in_range(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 1.5f);
			}
			*iParam0 = 2;
			iLocal_98 = 0;
			iLocal_106 = 0;
			break;
		
		case 2:
			switch (iLocal_98)
			{
				case 0:
					if (iLocal_103 == 1 && !Local_43.f_26)
					{
						if (func_21("EPS_DROP_MESS"))
						{
							clear_help(1);
						}
					}
					if (get_player_wanted_level(player_id()) > 0)
					{
						func_76(4);
						return;
					}
					if (func_61(PLAYER::PLAYER_PED_ID()) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1);
					}
					if (func_75(iVar0) && get_vehicle_number_of_passengers(iVar0) > 0)
					{
						if (get_ped_in_vehicle_seat(iVar0, false) != PLAYER::PLAYER_PED_ID())
						{
							func_76(3);
							return;
						}
					}
					if (!Local_43.f_26)
					{
						if (iLocal_104 == 0)
						{
							if (func_60(iVar0))
							{
								if (is_entity_in_angled_area(iVar0, Local_43.f_6[0 /*3*/], Local_43.f_6[1 /*3*/], Local_43.f_6.f_7, 0, true, 0))
								{
									func_59("EPS_DROP_EXIT", 7500, 1);
									iLocal_106 = 0;
									iLocal_104 = 1;
									iLocal_103 = 0;
								}
							}
						}
						if (func_58(PLAYER::PLAYER_PED_ID(), Local_43.f_14, 0) < 3f)
						{
							func_55(&iLocal_92);
						}
						if (func_58(PLAYER::PLAYER_PED_ID(), Local_43, 0) > 15f + 5f)
						{
							func_83(&Local_43, 2);
							Local_43.f_4 = 3;
							iLocal_104 = 0;
							iLocal_103 = 0;
							iLocal_106 = 0;
							func_76(1);
							return;
						}
						if (func_57(&Local_43) && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
						{
							func_83(&Local_43, 2);
							Local_43.f_4 = 3;
							iLocal_106 = 0;
							func_76(0);
							return;
						}
					}
					if ((Local_43.f_26 && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_106 == 0)
						{
							iLocal_106 = GAMEPLAY::GET_GAME_TIMER();
						}
						else if (GAMEPLAY::GET_GAME_TIMER() - iLocal_106 > 500)
						{
							if (iLocal_103 == 0)
							{
								clear_prints();
								func_54("EPS_DROP_MESS", -1);
								iLocal_103 = 1;
								iLocal_104 = 0;
							}
						}
					}
					break;
			}
			break;
	}
}

int func_57(auto uParam0)
{
	return (!*uParam0.f_26 && !is_position_occupied(*uParam0.f_14, 6.2f, 0, 0, 1, 0, 0, false, 0));
}

float func_58(int iParam0, Vector3 vParam1, int iParam2)
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

void func_59(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

bool func_60(int iParam0)
{
	if (func_61(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_61(int iParam0)
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

void func_62(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			if (!does_blip_exist(iLocal_92))
			{
				iLocal_92 = add_blip_for_coord(vLocal_40);
				if (does_blip_exist(iLocal_92))
				{
					set_blip_sprite(iLocal_92, 206);
					set_blip_colour(iLocal_92, 42);
				}
			}
			*iParam0 = 2;
			iLocal_98 = 0;
			break;
		
		case 2:
			if (!func_53())
			{
				func_76(0);
				return;
			}
			if (get_player_wanted_level(player_id()) > 0)
			{
				func_76(4);
				return;
			}
			if (func_61(PLAYER::PLAYER_PED_ID()) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1);
			}
			if (func_75(iVar0) && get_vehicle_number_of_passengers(iVar0) > 0)
			{
				if (get_ped_in_vehicle_seat(iVar0, false) != PLAYER::PLAYER_PED_ID())
				{
					func_76(3);
					return;
				}
			}
			if (func_58(PLAYER::PLAYER_PED_ID(), Local_43, 0) < 15f)
			{
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			func_76(2);
			break;
	}
}

void func_63(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			func_55(&iLocal_92);
			if (iLocal_105 == 0)
			{
				func_54("EPS_DROP_WANTED", -1);
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (get_player_wanted_level(player_id()) == 0)
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			if (!func_53())
			{
				func_76(0);
			}
			else
			{
				if (iLocal_105 == 0)
				{
					func_54("EPS_DROP_ESCAPE", -1);
				}
				func_76(2);
			}
			iLocal_105 = 1;
			break;
	}
}

void func_64(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			*iParam0 = 2;
			iLocal_101 = 0;
			iLocal_103 = 0;
			func_55(&iLocal_92);
			break;
		
		case 2:
			if (func_61(PLAYER::PLAYER_PED_ID()))
			{
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), Local_43.f_6[0 /*3*/], Local_43.f_6[1 /*3*/], Local_43.f_6.f_7, 0, true, 0) && func_43(&Local_43))
				{
					set_entity_coords(PLAYER::PLAYER_PED_ID(), -687.6668f, 500.598f, 109.0364f, 1, false, 0, 1);
					set_entity_heading(PLAYER::PLAYER_PED_ID(), 200.7367f);
				}
			}
			if (func_58(PLAYER::PLAYER_PED_ID(), Local_43, 0) > 15f + 5f)
			{
				func_83(&Local_43, 2);
				if (Local_43.f_4 != 2)
				{
					Local_43.f_4 = 3;
				}
			}
			if (func_53())
			{
				if (get_player_wanted_level(player_id()) > 0)
				{
					func_76(4);
					return;
				}
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			if (iLocal_101 == 0 && func_61(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_117 != get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_117 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 1);
					func_54("EPS_DROP_HELP", -1);
					iLocal_101 = 1;
				}
			}
			iLocal_102 = 0;
			func_76(1);
			break;
	}
}

void func_65()
{
	func_67();
	while (get_mission_flag() || func_70() != 0)
	{
		wait(0);
	}
	func_66();
}

void func_66()
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!func_75(PLAYER::PLAYER_PED_ID()))
	{
	}
	set_roads_in_angled_area(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, false, 1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &vVar0, &vVar3);
	iLocal_118 = add_scenario_blocking_area(vVar0, vVar3, 0, 1, 1, 1);
	iLocal_99 = Global_101154.f_8739.f_103;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_77(1);
	if (func_11(2) == -1)
	{
		func_4(func_16());
	}
	func_76(0);
}

void func_67()
{
	if (does_blip_exist(iLocal_92))
	{
		func_55(&iLocal_92);
		iLocal_92 = 0;
	}
	Global_101154.f_8739.f_103 = iLocal_99;
	func_55(&iLocal_92);
	func_77(0);
	func_69();
	func_68(&Local_43);
	remove_scenario_blocking_area(iLocal_118, 0);
	set_roads_back_to_original_in_angled_area(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	set_roads_back_to_original_in_angled_area(vLocal_109[0 /*3*/], vLocal_109[1 /*3*/], 8.25f, 1);
}

void func_68(auto uParam0)
{
	if (does_object_of_type_exist_at_coords(*uParam0, 20f, *uParam0.f_3, 0))
	{
		set_state_of_closest_door_of_type(*uParam0.f_3, *uParam0, true, 0f, 0);
	}
}

void func_69()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		set_model_as_no_longer_needed(iLocal_86[iVar0]);
		iVar0++;
	}
}

auto func_70()
{
	func_71();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_71()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_74(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_73(PLAYER::PLAYER_PED_ID());
			if (func_72(iVar0) && (!func_29(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_72(Global_101154.f_1826.f_539.f_3549))
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

int func_72(int iParam0)
{
	return iParam0 < 3;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_74(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_74(int iParam0)
{
	if (func_72(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_75(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	return !is_entity_dead(iParam0, 0);
}

void func_76(int iParam0)
{
	iLocal_94 = iParam0;
	iLocal_93 = 1;
}

void func_77(int iParam0)
{
	func_78(44, iParam0);
	func_78(45, iParam0);
	func_78(46, iParam0);
	func_78(47, iParam0);
	func_78(48, iParam0);
	func_78(49, iParam0);
	func_78(50, iParam0);
}

void func_78(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_80(iParam0, 0))
		{
			func_79(iParam0, 1, 0);
			func_79(iParam0, 2, 0);
			func_79(iParam0, 3, 0);
			func_79(iParam0, 4, 0);
			func_79(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_79(iParam0, 0, 0);
	}
}

void func_79(int iParam0, int iParam1, int iParam2)
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

int func_80(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_18807[iParam0], iParam1);
}

void func_81(Vector3 vParam0, float fParam1, auto uParam2, auto uParam3)
{
	Vector3 vVar0;
	
	vVar0 = {fParam3, fParam3, fParam3};
	*uParam4 = {vParam0 - vVar0};
	*uParam5 = {vParam0 + vVar0};
}

void func_82(auto uParam0, Vector3 vParam1, Vector3 vParam2, float fParam3)
{
	*(uParam0[0 /*3*/]) = {vParam1};
	*(uParam0[1 /*3*/]) = {vParam4};
	*uParam0.f_7 = fParam7;
}

void func_83(auto uParam0, int iParam1)
{
	*uParam0.f_5 = iParam1;
}

void func_84(auto uParam0, int iParam1, Vector3 vParam2, Vector3 vParam3, Vector3 vParam4, Vector3 vParam5, float fParam6, Vector3 vParam7, Vector3 vParam8)
{
	*uParam0.f_3 = iParam1;
	*uParam0 = {vParam2};
	*uParam0.f_5 = 2;
	*uParam0.f_4 = 0;
	*(uParam0.f_19[0 /*3*/]) = {vParam15};
	*(uParam0.f_19[1 /*3*/]) = {vParam18};
	*uParam0.f_14 = {vParam5};
	func_82(uParam0.f_6, vParam8, vParam11, fParam14);
}

bool func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (is_bit_set(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		return false;
	}
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
	return true;
}

int func_86()
{
	return func_3() == 5;
}

void func_87()
{
	iLocal_86[0] = joaat("vacca");
	iLocal_86[1] = joaat("surano");
	iLocal_86[2] = joaat("tornado2");
	iLocal_86[3] = joaat("superd");
	iLocal_86[4] = joaat("double");
	vLocal_70[0 /*3*/] = 1;
	vLocal_70[0 /*3*/].f_1 = "EPS_GMAIL_G5";
	vLocal_70[0 /*3*/].f_2 = "EPS_BMAIL_G5";
	vLocal_70[1 /*3*/] = 2;
	vLocal_70[1 /*3*/].f_1 = "EPS_GMAIL_G4";
	vLocal_70[1 /*3*/].f_2 = "EPS_BMAIL_G4";
	vLocal_70[2 /*3*/] = 3;
	vLocal_70[2 /*3*/].f_1 = "EPS_GMAIL_G3";
	vLocal_70[2 /*3*/].f_2 = "EPS_BMAIL_G3";
	vLocal_70[3 /*3*/] = 4;
	vLocal_70[3 /*3*/].f_1 = "EPS_GMAIL_G2";
	vLocal_70[3 /*3*/].f_2 = "EPS_BMAIL_G2";
	vLocal_70[4 /*3*/] = 5;
	vLocal_70[4 /*3*/].f_1 = "EPS_GMAIL_G1";
	vLocal_70[4 /*3*/].f_2 = "EPS_BMAIL_G1";
}

void func_88()
{
	int iVar0;
	
	iLocal_99 = false;
	iVar0 = false;
	while (iVar0 < 5)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_99, iVar0);
		iVar0++;
	}
}

int func_89(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

void func_90()
{
	int iVar0;
	
	func_55(&iLocal_92);
	func_77(0);
	func_69();
	func_68(&Local_43);
	Global_101154.f_8739.f_103 = iLocal_99;
	if (func_86() || func_89(90) == 1)
	{
		func_92(90, 1);
		func_91(6);
	}
	set_roads_back_to_original_in_angled_area(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	set_roads_back_to_original_in_angled_area(vLocal_109[0 /*3*/], vLocal_109[1 /*3*/], 8.25f, 1);
	remove_scenario_blocking_area(iLocal_118, 0);
	if (iLocal_284 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&iLocal_284);
		iLocal_284 = 0;
	}
	stat_get_int(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 6 + func_3())
	{
		stat_set_int(joaat("num_epsilon_step"), 6 + func_3(), 1);
		func_20(23, 6 + func_3());
	}
	terminate_this_thread();
}

bool func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (is_bit_set(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		clear_bit(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
		return true;
	}
	return false;
}

void func_92(int iParam0, int iParam1)
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

