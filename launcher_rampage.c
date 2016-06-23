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
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	auto uLocal_33 = 0;
	auto uLocal_34 = 0;
	int iLocal_35 = 0;
	auto uLocal_36 = 0;
	struct<4>[] Local_37 = new struct<4>[10];
	int iLocal_78 = 0;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	auto uLocal_86 = 0;
	auto uLocal_87 = 0;
	auto uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
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
	int iLocal_101 = 0;
	float fLocal_102 = 0;
	float fLocal_103 = 0;
	float fLocal_104 = 0;
	float fLocal_105 = 0;
	float fLocal_106 = 0;
	auto uLocal_107 = 0;
	Vector3 vLocal_108 = 0;
	Vector3 vLocal_111 = 0;
	auto uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int[] iLocal_117 = new int[3];
	auto uLocal_121 = 16;
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
	auto uLocal_284 = 0;
	auto uLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	auto uLocal_294 = 3;
	auto uLocal_295 = 0;
	auto uLocal_296 = 0;
	auto uLocal_297 = 0;
	Vector3 vLocal_298 = 0;
	int iLocal_301 = 0;
	struct<2> Local_302 = 0;
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
	auto uLocal_319 = 5;
	auto uLocal_320 = 0;
	auto uLocal_321 = 0;
	auto uLocal_322 = 0;
	auto uLocal_323 = 0;
	auto uLocal_324 = 0;
#endregion

void main()
{
	struct<42> Var0;
	Vector3 vVar61;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_82 = 1;
	iLocal_83 = 65;
	iLocal_84 = 49;
	iLocal_85 = 64;
	iLocal_89 = _0x4A9923385BDB9DAD();
	iLocal_90 = _get_blip_info_id_iterator();
	fLocal_102 = -0.05f;
	fLocal_103 = 0.92f;
	fLocal_104 = 1.94f;
	fLocal_105 = 2.99f;
	fLocal_106 = 3.7f;
	vLocal_108 = {1180.969f, -402.381f, 67.2f};
	vLocal_111 = {5f, 0f, 57.33f};
	iLocal_115 = -1;
	iLocal_288 = 77;
	iLocal_289 = -1;
	iLocal_290 = -1;
	iLocal_291 = 1;
	iLocal_292 = 1;
	iLocal_293 = 1;
	_0x6F2135B6129620C1(1);
	func_338();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	vVar61 = {Local_302.f_1[0 /*3*/]};
	Global_88883 = 1;
	func_337(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_336(" Force cleanup [TERMINATING]");
		func_321(&Var0, 1);
	}
	if (!func_320(108))
	{
		func_209(&Var0, vVar61);
	}
	else
	{
		func_1(&Var0, vVar61);
	}
}

void func_1(int iParam0, Vector3 vParam1)
{
	while (true)
	{
		if (!is_world_point_within_brain_activation_range())
		{
			func_336("  Ambient - Player isn't within World Point Range");
			func_321(iParam0, 1);
		}
		if (func_208() != 2)
		{
			func_336("  Ambient - Player is not Trevor");
			func_321(iParam0, 1);
		}
		iLocal_290 = func_207(5f);
		if (iLocal_290 != -1)
		{
			if (!func_201())
			{
				*iParam0 = func_200(iLocal_290);
				StringCopy(iParam0.f_1, func_199(iLocal_290), 32);
				*iParam0.f_16 = 3;
				*iParam0.f_15 = 5f;
				if (*iParam0 == -1)
				{
					func_336("  -  Ambient Rampage Mission ID is invalid");
					func_321(iParam0, 1);
				}
				if (is_string_null_or_empty(iParam0.f_1))
				{
					func_336("  -  Ambient Rampage Mission ID is invalid");
					func_321(iParam0, 1);
				}
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_17264[*iParam0 /*6*/]), false);
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_17264[*iParam0 /*6*/]), 2);
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_17264[*iParam0 /*6*/]), 3);
				Global_100241[*iParam0 /*10*/].f_1 = 0;
				if (!func_198(0))
				{
					Global_100241[*iParam0 /*10*/].f_3 = 0;
				}
				if (!func_190(*iParam0))
				{
					func_336(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_321(iParam0, 1);
				}
				else if (!func_5(iParam0))
				{
					func_336(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_321(iParam0, 1);
				}
				else
				{
					func_4(500, 1);
					clear_area(vParam1, *iParam0.f_15, 1, 0, 0, false);
					func_336(" RC Ambient Launcher Waiting To Terminate");
					Global_100241[*iParam0 /*10*/].f_1 = 0;
					if (func_3(iParam0))
					{
						func_336(" Ambient - Ready To Terminate");
						func_321(iParam0, 0);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG"))
			{
				clear_help(1);
			}
			iLocal_293 = 0;
		}
		wait(0);
	}
}

int func_2(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

bool func_3(int iParam0)
{
	while (!Global_100241[*iParam0 /*10*/])
	{
		wait(0);
	}
	return true;
}

void func_4(int iParam0, int iParam1)
{
	if (is_screen_faded_in())
	{
		if (!is_screen_fading_out())
		{
			do_screen_fade_out(iParam0);
			if (iParam1)
			{
				while (!is_screen_faded_out())
				{
					wait(0);
				}
			}
		}
	}
}

bool func_5(int iParam0)
{
	struct<4> Var0;
	char* sVar32;
	
	if (!func_189())
	{
		while (!func_184(*iParam0))
		{
			if (func_183(*iParam0))
			{
				func_175();
			}
			if (!func_132(iParam0, *iParam0 != 2))
			{
				func_336("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return false;
			}
			wait(0);
		}
	}
	if (func_131())
	{
		func_129();
	}
	if (!func_98(iParam0))
	{
		func_336("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return false;
	}
	func_95(*iParam0, &Var0);
	MemCopy(&sVar32, {func_94(*iParam0)}, 4);
	func_93(&sVar32, Var0.f_3, 0);
	func_92(*iParam0);
	if (!func_189())
	{
		if (*iParam0.f_16 == 2)
		{
			func_25(iParam0.f_1, 0);
		}
		else
		{
			func_25(iParam0.f_1, 1);
		}
	}
	func_6(*iParam0, Var0);
	return true;
}

void func_6(int iParam0, char* sParam1)
{
	func_24(sParam1);
	GAMEPLAY::CLEAR_BIT(&(Global_101154.f_17264[iParam0 /*6*/]), 5);
	if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
	{
		while (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
		{
			func_22();
			wait(0);
		}
	}
	if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) < 1)
	{
		Global_55750 = 0;
		SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_stat_watcher"))
		{
			wait(0);
		}
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", 1828);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
	}
	while (!GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iParam0 /*6*/], 5))
	{
		if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_17264[iParam0 /*6*/]), 5);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_55747 == 1)
	{
		func_21();
		Global_55747 = 0;
		if (Global_55742)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_55750 = 1;
		func_13();
		return;
	}
	MemCopy(&Global_55764, {func_12(iParam0)}, 4);
	Global_55752 = 0;
	Global_55751 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_55739 = 1;
			Global_55742 = 1;
			Global_55745 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_55750 = 1;
			Global_55751 = 1;
			func_13();
			func_22();
			return;
			break;
	}
	iVar0 = Global_67994;
	Global_67994 = 1;
	iVar1 = Global_67995;
	Global_67995 = iParam0;
	if (!Global_55739)
	{
		if ((Global_67995 != iVar1 || Global_67844 == 0) || iVar0 != Global_67994)
		{
			Global_25369 = 0;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_55742 = 1;
		}
	}
	Global_55777 = GAMEPLAY::GET_GAME_TIMER();
	func_8();
	Global_55749 = 0;
}

void func_8()
{
	int iVar0;
	
	if (!Global_55746)
	{
		return;
	}
	if (Global_67844 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		switch (Global_55974[Global_67845[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_67845[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_55757)
				{
					Global_67845[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_67845[iVar0 /*9*/].f_1 != 0)
					{
						Global_67845[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_55746 = 0;
}

void func_9(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_10(741);
			func_10(742);
			return;
		
		case 3:
			func_10(743);
			func_10(744);
			return;
		
		case 5:
			func_10(745);
			func_10(746);
			return;
		
		case 6:
			func_10(747);
			func_10(748);
			return;
		
		case 8:
			func_10(749);
			return;
		
		case 12:
			func_10(750);
			return;
		
		case 14:
			func_10(751);
			func_10(752);
			return;
		
		case 16:
			func_10(753);
			func_10(754);
			return;
		
		case 17:
			func_10(755);
			func_10(756);
			func_10(757);
			return;
		
		case 18:
			func_10(758);
			func_10(759);
			return;
		
		case 19:
			func_10(760);
			func_10(761);
			return;
		
		case 20:
			func_10(762);
			return;
		
		case 21:
			func_10(763);
			return;
		
		case 22:
			func_10(764);
			func_10(765);
			return;
		
		case 23:
			func_10(766);
			return;
		
		case 25:
			func_10(767);
			func_10(768);
			func_10(769);
			return;
		
		case 26:
			func_10(770);
			func_10(771);
			return;
		
		case 28:
			func_10(772);
			func_10(773);
			return;
		
		case 29:
			func_10(774);
			func_10(775);
			return;
		
		case 30:
			func_10(776);
			func_10(777);
			return;
		
		case 32:
			func_10(778);
			func_10(779);
			return;
		
		case 33:
			func_10(780);
			func_10(781);
			func_10(782);
			return;
		
		case 34:
			func_10(783);
			func_10(784);
			return;
		
		case 38:
			func_10(785);
			func_10(786);
			return;
		
		case 39:
			func_10(787);
			func_10(788);
			return;
		
		case 40:
			func_10(789);
			return;
		
		case 41:
			func_10(790);
			func_10(791);
			func_10(792);
			return;
		
		case 42:
			func_10(793);
			func_10(794);
			func_10(795);
			return;
		
		case 43:
			func_10(796);
			func_10(797);
			return;
		
		case 46:
			func_10(798);
			func_10(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_10(800);
			func_10(801);
			return;
		
		case 49:
			func_10(802);
			func_10(803);
			return;
		
		case 50:
			func_10(804);
			func_10(805);
			return;
		
		case 51:
			func_10(806);
			return;
		
		case 57:
			func_10(807);
			func_10(808);
			func_10(809);
			return;
		
		case 58:
			func_10(828);
			func_10(829);
			func_10(830);
			return;
		
		case 59:
			func_10(831);
			func_10(832);
			func_10(833);
			return;
		
		case 60:
			func_10(834);
			func_10(835);
			func_10(836);
			return;
		
		case 61:
			func_10(837);
			func_10(838);
			func_10(839);
			return;
		
		case 62:
			func_10(840);
			func_10(841);
			func_10(842);
			return;
		
		case 24:
			func_10(843);
			func_10(844);
			func_10(845);
			return;
		
		default:
	}
}

void func_10(int iParam0)
{
	Global_55742 = 1;
	Global_55745 = 1;
	if (Global_67844 > 15)
	{
		return;
	}
	func_11(Global_67844);
	Global_67845[Global_67844 /*9*/] = iParam0;
	Global_67844++;
	if (Global_55974[iParam0 /*13*/] == 16)
	{
		Global_67996 = 1;
	}
}

void func_11(auto uParam0)
{
	Global_67845[uParam0 /*9*/].f_1 = 0;
	Global_67845[uParam0 /*9*/].f_2 = 0f;
	Global_67845[uParam0 /*9*/].f_3 = 0;
	Global_67845[uParam0 /*9*/].f_4 = 0;
}

struct<2> func_12(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_94(iParam0)};
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

void func_13()
{
	if (Global_55749)
	{
		return;
	}
	Global_55758 = 0;
	Global_67844 = 0;
	Global_55760 = 0;
	if (Global_55757)
	{
	}
	Global_55757 = 0;
	func_20(0);
	func_19();
	Global_67996 = 0;
	Global_55748 = 1;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_55739 = 0;
	Global_55769 = 0;
	Global_55777 = -1;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_68031[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68040 = 0;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_67997[iVar0 /*2*/] = 0;
		Global_67997[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68030 = 0;
}

void func_16()
{
	Global_55908 = 0;
}

void func_17()
{
	Global_55768 = 0;
	Global_55772 = func_18(joaat("sp0_shots"));
	Global_55771 = func_18(joaat("sp0_hits"));
	Global_55774 = func_18(joaat("sp1_shots"));
	Global_55773 = func_18(joaat("sp1_hits"));
	Global_55776 = func_18(joaat("sp2_shots"));
	Global_55775 = func_18(joaat("sp2_hits"));
}

auto func_18(int iParam0)
{
	auto uVar0;
	
	STATS::STAT_GET_INT(iParam0, &uVar0, -1);
	return uVar0;
}

void func_19()
{
	int iVar0;
	
	Global_55778 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55779[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_20(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

void func_21()
{
	int iVar0;
	
	Global_55747 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		Global_67845[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_55757)
	{
	}
	Global_55757 = 0;
}

void func_22()
{
	if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
	{
		if (func_23())
		{
			if (Global_55744 && !Global_55743)
			{
				Global_55744 = 0;
				terminate_all_scripts_with_this_name("mission_stat_watcher");
			}
		}
		else
		{
			terminate_all_scripts_with_this_name("mission_stat_watcher");
		}
	}
}

int func_23()
{
	if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_55742)
	{
		return 0;
	}
	return Global_55754;
}

void func_24(char* sParam0)
{
	if (are_strings_equal(sParam0, sParam0))
	{
	}
}

void func_25(char* sParam0, int iParam1)
{
	GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 17);
	func_26(sParam0, iParam1, 0);
}

void func_26(char* sParam0, int iParam1, int iParam2)
{
	if (Global_91278 != 10 && Global_91278 != 9)
	{
		StringCopy(&Global_93083, sParam0, 32);
		func_28(&Global_93091, sParam0, 0, "Start", iParam1, iParam2);
		func_27();
		Global_85789 = 0;
	}
}

void func_27()
{
	int iVar0;
	int iVar1;
	
	Global_95496 = Global_93091;
	Global_95496.f_1 = Global_93091.f_1;
	Global_95496.f_6 = Global_93091.f_6;
	Global_95496.f_7 = Global_93091.f_7;
	Global_95496.f_8 = Global_93091.f_8;
	Global_95496.f_2 = Global_93091.f_2;
	Global_95496.f_3 = Global_93091.f_3;
	Global_95496.f_4 = Global_93091.f_4;
	Global_95496.f_5 = Global_93091.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_95496.f_9[iVar1] = Global_93091.f_9[iVar1];
		Global_95496.f_13[iVar1] = Global_93091.f_13[iVar1];
		Global_95496.f_17[iVar1] = Global_93091.f_17[iVar1];
		Global_95496.f_21[iVar1] = Global_93091.f_21[iVar1];
		Global_95496.f_25[0 /*295*/][iVar1 /*98*/] = {Global_93091.f_25[0 /*295*/][iVar1 /*98*/]};
		Global_95496.f_25[1 /*295*/][iVar1 /*98*/] = {Global_93091.f_25[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_95496.f_616[iVar1 /*65*/][iVar0] = Global_93091.f_616[iVar1 /*65*/][iVar0];
			Global_95496.f_616[iVar1 /*65*/].f_13[iVar0] = Global_93091.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_95496.f_616[iVar1 /*65*/].f_26[iVar0] = Global_93091.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_95496.f_616[iVar1 /*65*/].f_59 = Global_93091.f_616[iVar1 /*65*/].f_59;
		Global_95496.f_616[iVar1 /*65*/].f_60 = Global_93091.f_616[iVar1 /*65*/].f_60;
		Global_95496.f_616[iVar1 /*65*/].f_61 = Global_93091.f_616[iVar1 /*65*/].f_61;
		Global_95496.f_616[iVar1 /*65*/].f_62 = Global_93091.f_616[iVar1 /*65*/].f_62;
		Global_95496.f_616[iVar1 /*65*/].f_63 = Global_93091.f_616[iVar1 /*65*/].f_63;
		Global_95496.f_616[iVar1 /*65*/].f_64 = Global_93091.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_95496.f_616[iVar1 /*65*/].f_39[iVar0] = Global_93091.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_95496.f_616[iVar1 /*65*/].f_49[iVar0] = Global_93091.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_95496.f_812[iVar1 /*284*/][iVar0 /*3*/] = {Global_93091.f_812[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_95496.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = {Global_93091.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_95496.f_1665[iVar1 /*32*/][iVar0] = Global_93091.f_1665[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_95496.f_1665[iVar1 /*32*/].f_5[iVar0] = Global_93091.f_1665[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_95496.f_1665[iVar1 /*32*/].f_16[iVar0] = Global_93091.f_1665[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_95496.f_1762[iVar1] = Global_93091.f_1762[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_95496.f_2259[iVar1 /*15*/][iVar0] = Global_93091.f_2259[iVar1 /*15*/][iVar0];
			Global_95496.f_2259[iVar1 /*15*/].f_5[iVar0] = Global_93091.f_2259[iVar1 /*15*/].f_5[iVar0];
			Global_95496.f_2259[iVar1 /*15*/].f_10[iVar0] = Global_93091.f_2259[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_95496.f_1766[iVar1 /*164*/][iVar0] = Global_93091.f_1766[iVar1 /*164*/][iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_4[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_4[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_8[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_8[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_12[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_12[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_16[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_16[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_20[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_20[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_24[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_24[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_28[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_28[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_32[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_32[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_36[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_36[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_40[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_40[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_44[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_44[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_48[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_48[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_52[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_52[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_56[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_56[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_60[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_60[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_64[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_64[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_68[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_68[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_72[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_72[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_76[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_76[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_80[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_80[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_84[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_84[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_88[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_88[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_92[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_92[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_96[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_96[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_100[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_100[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_104[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_104[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_108[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_108[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_112[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_112[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_116[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_116[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_120[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_120[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_124[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_124[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_128[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_128[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_132[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_132[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_136[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_136[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_140[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_140[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_144[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_144[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_148[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_148[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_152[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_152[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_156[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_156[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_160[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_95496.f_2305 = {Global_93091.f_2305};
	Global_95496.f_2305.f_3 = Global_93091.f_2305.f_3;
	Global_95496.f_2311 = {Global_93091.f_2311};
	Global_95496.f_2311.f_3 = {Global_93091.f_2311.f_3};
	Global_95496.f_2311.f_6 = Global_93091.f_2311.f_6;
	Global_95496.f_2311.f_8 = Global_95496.f_2311.f_8;
	Global_95496.f_2311.f_7 = Global_93091.f_2311.f_7;
	Global_95496.f_2311.f_9 = Global_93091.f_2311.f_9;
	Global_95496.f_2311.f_11 = Global_93091.f_2311.f_11;
	Global_95496.f_2311.f_10 = Global_93091.f_2311.f_10;
	Global_95496.f_2311.f_12 = Global_93091.f_2311.f_12;
	Global_95496.f_2311.f_12.f_1 = {Global_93091.f_2311.f_12.f_1};
	Global_95496.f_2311.f_12.f_5 = Global_93091.f_2311.f_12.f_5;
	Global_95496.f_2311.f_12.f_6 = Global_93091.f_2311.f_12.f_6;
	Global_95496.f_2311.f_12.f_7 = Global_93091.f_2311.f_12.f_7;
	Global_95496.f_2311.f_12.f_8 = Global_93091.f_2311.f_12.f_8;
	Global_95496.f_2311.f_12.f_9 = {Global_93091.f_2311.f_12.f_9};
	Global_95496.f_2311.f_12.f_59 = {Global_93091.f_2311.f_12.f_59};
	Global_95496.f_2311.f_12.f_62 = Global_93091.f_2311.f_12.f_62;
	Global_95496.f_2311.f_12.f_63 = Global_93091.f_2311.f_12.f_63;
	Global_95496.f_2311.f_12.f_64 = Global_93091.f_2311.f_12.f_64;
	Global_95496.f_2311.f_12.f_65 = Global_93091.f_2311.f_12.f_65;
	Global_95496.f_2311.f_12.f_77 = Global_93091.f_2311.f_12.f_77;
	Global_95496.f_2311.f_12.f_66 = Global_93091.f_2311.f_12.f_66;
	Global_95496.f_2311.f_12.f_67 = Global_93091.f_2311.f_12.f_67;
	Global_95496.f_2311.f_12.f_68 = Global_93091.f_2311.f_12.f_68;
	Global_95496.f_2311.f_12.f_69 = Global_93091.f_2311.f_12.f_69;
	Global_95496.f_2311.f_12.f_71 = Global_93091.f_2311.f_12.f_71;
	Global_95496.f_2311.f_12.f_72 = Global_93091.f_2311.f_12.f_72;
	Global_95496.f_2311.f_12.f_73 = Global_93091.f_2311.f_12.f_73;
	Global_95496.f_2311.f_12.f_74 = Global_93091.f_2311.f_12.f_74;
	Global_95496.f_2311.f_12.f_75 = Global_93091.f_2311.f_12.f_75;
	Global_95496.f_2311.f_12.f_76 = Global_93091.f_2311.f_12.f_76;
	Global_95496.f_2401 = Global_93091.f_2401;
	Global_95496.f_2401.f_1 = Global_93091.f_2401.f_1;
	Global_95496.f_2401.f_2 = Global_93091.f_2401.f_2;
	Global_95496.f_2401.f_3 = Global_93091.f_2401.f_3;
}

void func_28(auto uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_208();
	*uParam0.f_1 = func_81();
	_get_weather_type_transition(uParam0.f_6, uParam0.f_7, uParam0.f_8);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_66(uParam0.f_2305, 0);
		func_65(PLAYER::PLAYER_PED_ID());
		func_59(PLAYER::PLAYER_PED_ID(), 0);
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), uParam0.f_2, 1);
		if (*uParam0.f_2 == 0 || *uParam0.f_2 == joaat("object"))
		{
			*uParam0.f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		*uParam0.f_17[iVar1] = Global_101154.f_1826.f_539.f_294[iVar1];
		if (iVar1 == func_56())
		{
			func_49(PLAYER::PLAYER_PED_ID(), uParam0.f_616[iVar1 /*65*/], 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				*(uParam0.f_616[iVar1 /*65*/])[iVar0] = Global_91068[iVar1 /*65*/][iVar0];
				*(uParam0.f_616[iVar1 /*65*/].f_13)[iVar0] = Global_91068[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			*(uParam0.f_616[iVar1 /*65*/]).f_59 = Global_91068[iVar1 /*65*/].f_59;
			*(uParam0.f_616[iVar1 /*65*/]).f_60 = Global_91068[iVar1 /*65*/].f_60;
			*(uParam0.f_616[iVar1 /*65*/]).f_61 = Global_91068[iVar1 /*65*/].f_61;
			*(uParam0.f_616[iVar1 /*65*/]).f_62 = Global_91068[iVar1 /*65*/].f_62;
			*(uParam0.f_616[iVar1 /*65*/]).f_63 = Global_91068[iVar1 /*65*/].f_63;
			*(uParam0.f_616[iVar1 /*65*/]).f_64 = Global_91068[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				*(uParam0.f_616[iVar1 /*65*/].f_39)[iVar0] = Global_91068[iVar1 /*65*/].f_39[iVar0];
				*(uParam0.f_616[iVar1 /*65*/].f_49)[iVar0] = Global_91068[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			*(uParam0.f_812[iVar1 /*284*/][iVar0 /*3*/]) = {Global_101154.f_1826.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			*(uParam0.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]) = {Global_101154.f_1826.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
		}
		*uParam0.f_9[iVar1] = Global_101154.f_25089.f_233[iVar1 /*69*/].f_1;
		*uParam0.f_13[iVar1] = Global_52923[iVar1];
		*(uParam0.f_25[0 /*295*/][iVar1 /*98*/]) = {Global_101154.f_1826.f_539.f_1635[0 /*295*/][iVar1 /*98*/]};
		*(uParam0.f_25[1 /*295*/][iVar1 /*98*/]) = {Global_101154.f_1826.f_539.f_1635[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			*(uParam0.f_2259[iVar1 /*15*/])[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/][iVar0];
			*(uParam0.f_2259[iVar1 /*15*/].f_5)[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_5[iVar0];
			*(uParam0.f_2259[iVar1 /*15*/].f_10)[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			*(uParam0.f_1766[iVar1 /*164*/])[iVar0] = Global_101154.f_1826[iVar1 /*164*/][iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_4)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_4[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_8)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_8[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_12)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_12[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_16)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_16[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_20)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_20[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_24)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_24[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_28)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_28[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_32)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_32[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_36)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_36[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_40)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_40[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_44)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_44[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_48)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_48[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_52)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_52[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_56)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_56[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_60)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_60[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_64)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_64[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_68)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_68[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_72)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_72[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_76)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_76[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_80)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_80[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_84)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_84[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_88)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_88[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_92)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_92[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_96)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_96[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_100)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_100[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_104)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_104[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_108)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_108[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_112)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_112[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_116)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_116[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_120)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_120[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_124)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_124[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_128)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_128[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_132)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_132[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_136)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_136[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_140)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_140[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_144)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_144[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_148)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_148[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_152)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_152[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_156)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_156[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_160)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), uParam0.f_1762[0], -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), uParam0.f_1762[1], -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), uParam0.f_1762[2], -1);
	*uParam0.f_5 = 145;
	if (iParam4 == 1)
	{
		func_30(uParam0.f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_29(uParam0.f_2401);
	sParam3 = sParam3;
	iParam2 = iParam2;
}

bool func_29(auto uParam0)
{
	*uParam0 = Global_87460;
	*uParam0.f_1 = Global_87461;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	return true;
}

void func_30(auto uParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		*uParam1.f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!is_entity_dead(iVar0, 0))
		{
			if (is_vehicle_model(iVar0, joaat("skylift")) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

bool func_31(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	if (is_vehicle_driveable(iParam2, 0))
	{
		func_33(uParam0, iParam2, iParam3);
		*uParam1.f_4 = iParam2;
		if (func_32(iParam2))
		{
			*uParam1.f_3 = 1;
		}
		else
		{
			*uParam1.f_3 = 0;
		}
		return true;
	}
	return false;
}

bool func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91278.f_22[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_33(auto uParam0, int iParam1, int iParam2)
{
	func_40(iParam1, uParam0.f_12);
	*uParam0.f_7 = func_36(iParam1, 145, 0);
	*uParam0.f_11 = func_35(iParam1);
	if (!*uParam0.f_7)
	{
		if (!*uParam0.f_10)
		{
			*uParam0.f_10 = func_34(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = {get_entity_coords(iParam1, 1)};
		*uParam0.f_6 = get_entity_heading(iParam1);
		*uParam0.f_3 = {get_entity_velocity(iParam1)};
		if (is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_6 = 305.6424f;
		}
		if (Global_69224 == iParam1)
		{
			*uParam0.f_9 = 1;
		}
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		*uParam0.f_8 = 1;
	}
	else
	{
		*uParam0.f_8 = 0;
	}
}

bool func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]))
		{
			if (iParam0 == Global_68319.f_484[iVar0])
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_35(int iParam0)
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

bool func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88952[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_37(iParam1, iParam2))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_37(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_39(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_38(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_38(int iParam0, auto uParam1, int iParam2)
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

int func_39(int iParam0)
{
	return iParam0 < 3;
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
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 22);
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
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 27);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 27);
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

bool func_44(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = get_players_last_vehicle();
			}
			else
			{
				*uParam1 = get_vehicle_ped_is_in(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (is_vehicle_driveable(*uParam1, 0))
				{
					if (iParam2 == 0 || get_distance_between_coords(get_entity_coords(*uParam1, 1), get_entity_coords(iParam0, 1), 1) < 100f)
					{
						if (is_vehicle_model(*uParam1, joaat("taxi")))
						{
							if (get_ped_in_vehicle_seat(*uParam1, -1) != iParam0 && get_ped_in_vehicle_seat(*uParam1, -1) != 0)
							{
								return false;
							}
						}
						if (func_45(*uParam1, func_208(), 1))
						{
							sVar0 = get_this_script_name();
							if (!are_strings_equal(sVar0, "save_anywhere"))
							{
								return false;
							}
							else if (!is_ped_in_any_vehicle(iParam0, 1))
							{
								return false;
							}
						}
						if (iParam3 == 1)
						{
							if (decor_exist_on(*uParam1, "IgnoredByQuickSave"))
							{
								if (decor_get_bool(*uParam1, "IgnoredByQuickSave"))
								{
									return false;
								}
							}
						}
						else if (is_vehicle_model(*uParam1, joaat("blimp")))
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[uVar9], false))
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

bool func_46(int iParam0, int iParam1, char* sParam2, auto uParam3)
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

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_39(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_49(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_47(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_55(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_54(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_39(iVar0))
		{
			*uParam1.f_59 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_59;
			*uParam1.f_60 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_60;
			*uParam1.f_61 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_61;
			*uParam1.f_62 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_62;
			*uParam1.f_63 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_63;
			*uParam1.f_64 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_53(161, -1))
			{
				*uParam1.f_59 = func_50(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_50(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_50(746, Global_69309, 0);
			*uParam1.f_61 = func_50(747, Global_69309, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_53(161, -1))
			{
				*uParam1.f_59 = func_50(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_50(745, Global_69309, 0);
			}
		}
	}
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_51(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
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

auto func_52()
{
	return Global_1312747;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_51(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_54(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_prop_index(iParam0, iParam1);
		*uParam3 = get_ped_prop_texture_index(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (is_ped_wearing_helmet(iParam0) && _0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = _0x451294E859ECC018(iParam0);
					*uParam3 = _0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_55(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_drawable_variation(iParam0, iParam1);
		*uParam3 = get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = get_ped_palette_variation(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

auto func_56()
{
	func_57();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_57()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_48(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_47(PLAYER::PLAYER_PED_ID());
			if (func_39(iVar0) && (!func_58(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_39(Global_101154.f_1826.f_539.f_3549))
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

int func_58(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_59(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_47(iParam0);
	if (func_39(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_60(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= 8 - 1)
			{
				Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] = _0xA13E93403F26C812(iVar2);
				if (iParam1)
				{
					iVar1 = _0xA48931185F0536FE();
					if (Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101154.f_1826.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			get_player_parachute_pack_tint_index(player_id(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_60(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			*(uParam1[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			iVar3 = func_64(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_64(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed"))
				{
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute"))
					{
						vVar4.y = 1;
					}
					GAMEPLAY::GAMEPLAY::SET_BIT(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1[iVar0 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					iVar2 = func_62(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							GAMEPLAY::GAMEPLAY::SET_BIT(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_62(vVar4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1)
		{
			*(uParam1.f_133[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar8 = get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_61(Var9.f_1)) && iVar70 < 50)
			{
				if (!_is_dlc_data_empty(Var9))
				{
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(vVar4.f_2), 20);
					}
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1.f_133[iVar70 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					while (iVar1 < get_num_dlc_weapon_components(iVar7))
					{
						if (get_dlc_weapon_component_data(iVar7, iVar1, &Var48))
						{
							if (has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3))
							{
								GAMEPLAY::GAMEPLAY::SET_BIT(&(vVar4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0)
				{
					if (!has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						vVar4.x = false;
						vVar4.y = 0;
					}
				}
				*(uParam1.f_133[iVar70 /*3*/]) = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

bool func_61(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return false;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return false;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return false;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return false;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return false;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return false;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return false;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return false;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return false;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
				return true;
				break;
			}
	}
	return false;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_63(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < get_num_dlc_weapon_components(iVar1))
					{
						if (get_dlc_weapon_component_data(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_63(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (get_dlc_weapon_data(iVar0, uParam1))
		{
			if (*uParam1.f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (func_39(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_66(auto uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	auto uVar4;
	int iVar5;
	
	*uParam0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	*uParam0.f_3 = get_entity_heading(PLAYER::PLAYER_PED_ID());
	*uParam0.f_5 = get_ped_parachute_state(PLAYER::PLAYER_PED_ID());
	if (is_player_playing(player_id()))
	{
		*uParam0.f_4 = get_player_wanted_level(player_id());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = {301.2162f, 202.1357f, 103.3797f};
		*uParam0.f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = {394.2567f, -713.5439f, 28.2853f};
		*uParam0.f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = {-1423.472f, -214.2539f, 45.5004f};
		*uParam0.f_3 = 353.8757f;
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("finale_choice")) > 0)
	{
		*uParam0 = {4.2587f, 525.0214f, 173.6281f};
		*uParam0.f_3 = 203.6746f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 4))
	{
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		*uParam0.f_3 = 78.9858f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 5))
	{
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		*uParam0.f_3 = 261.747f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 6))
	{
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		*uParam0.f_3 = 271.8208f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 7))
	{
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		*uParam0.f_3 = 316.8879f;
	}
	else if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		*uParam0.f_3 = 204.1703f;
	}
	else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = {-601.59f, 2099.197f, 128.8928f};
		*uParam0.f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = {-1018.376f, -483.9436f, 36.0964f};
		*uParam0.f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = {497.7238f, -1310.932f, 28.2372f};
		*uParam0.f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = {2316.93f, 2594.153f, 45.7199f};
		*uParam0.f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_70(&iVar0))
		{
			if (func_68(iVar0, &vVar1, &uVar4))
			{
				vVar1.z++;
				*uParam0 = {vVar1};
				*uParam0.f_3 = uVar4;
			}
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_208();
			if (iVar5 == 0)
			{
				*uParam0 = {-65.1234f, 81.2517f, 70.5644f};
				*uParam0.f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = {-68.5531f, -1824.377f, 25.9424f};
				*uParam0.f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = {-220.8189f, -1162.302f, 22.0242f};
				*uParam0.f_3 = 70.2711f;
			}
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			*uParam0.f_3 = 213.6273f;
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_3 = 305.6424f;
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			*uParam0.f_3 = 186.6814f;
		}
		else if (func_67(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			*uParam0.f_3 = 48.8028f;
		}
	}
}

bool func_67(Vector3 vParam0, char* sParam1, Vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!_are_coords_colliding_with_exterior(vParam0))
	{
		iVar0 = get_interior_at_coords_with_type(vParam4, sParam3);
		if (!is_valid_interior(iVar0))
		{
			return false;
		}
		iVar1 = get_interior_from_collision(vParam0);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_68(int iParam0, auto uParam1, auto uParam2)
{
	*uParam1 = {0f, 0f, 0f};
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = {-829.842f, -191.7454f, 36.4386f};
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = {129.8484f, -1716.528f, 28.0702f};
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = {-1296.913f, -1120.999f, 5.3951f};
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = {1938.028f, 3718.736f, 31.3154f};
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = {1197.866f, -469.3809f, 65.0885f};
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = {-32.2161f, -135.8212f, 56.0532f};
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = {-287.7696f, 6238.081f, 30.2902f};
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = {99.2876f, -1395.16f, 28.2759f};
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = {1679.445f, 4819.056f, 41.0035f};
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = {411.3063f, -809.1863f, 28.1554f};
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = {-1088.054f, 2699.167f, 19.2748f};
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = {1194.163f, 2695.644f, 36.9225f};
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = {-821.2829f, -1088.027f, 10.0499f};
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = {-3.3416f, 6521.303f, 30.2961f};
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = {-1208.417f, -785.9635f, 16.0139f};
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = {623.1845f, 2739.191f, 40.9588f};
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = {130.9555f, -198.2084f, 53.41f};
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = {-3164.065f, 1067.317f, 19.6778f};
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = {-713.2797f, -174.2767f, 35.8962f};
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = {-147.0616f, -306.4322f, 37.7912f};
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = {-1461.355f, -230.6092f, 48.3064f};
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = {-1347.739f, -1278.573f, 3.8952f};
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = {325.6833f, 164.3263f, 102.4425f};
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = {1858.774f, 3742.393f, 32.0779f};
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = {-286.3272f, 6202.802f, 30.3323f};
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = {-1161.596f, -1417.7f, 3.712f};
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = {1308.952f, -1660.611f, 50.2362f};
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = {-3161.585f, 1074.214f, 19.6847f};
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = {28.423f, -1110.814f, 28.2848f};
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = {1704.966f, 3749.709f, 33.0188f};
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = {223.949f, -38.7894f, 68.6483f};
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = {837.7854f, -1017.963f, 26.3045f};
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = {-313.1914f, 6093.351f, 30.4625f};
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = {-663.4631f, -952.8069f, 20.3143f};
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = {-1323.06f, -392.8577f, 35.4596f};
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = {-1106.102f, 2684.35f, 18.0953f};
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = {-3157.932f, 1081.309f, 19.6953f};
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = {2562.882f, 312.8641f, 107.4612f};
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = {822.48f, -2142.875f, 27.8496f};
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = {-1137.053f, -1993.916f, 12.1677f};
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = {717.8107f, -1084.081f, 21.3094f};
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = {-387.6789f, -128.2568f, 37.6796f};
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = {117.8835f, 6599.415f, 31.0134f};
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = {1201.709f, 2664.813f, 36.8102f};
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = {-200.1521f, -1297.502f, 30.296f};
			*uParam2 = 269.0687f;
			break;
	}
	return !func_69(*uParam1, 0f, 0f, 0f, 0);
}

int func_69(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_70(auto uParam0)
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_80())
		{
			*uParam0 = func_76(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 5, -1, 0, 1, -1);
			if (func_75(*uParam0) && !func_71(*uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_71(int iParam0)
{
	return func_72(iParam0, 0, 1);
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_74() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_50(func_73(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_73(int iParam0)
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

auto func_74()
{
	return Global_25120;
}

int func_75(int iParam0)
{
	return func_72(iParam0, 5, 1);
}

int func_76(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_79(iVar0))
		{
			if (!iParam5 || func_78(iVar0))
			{
				fVar1 = get_distance_between_coords(vParam0, func_77(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_77(int iParam0, int iParam1)
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

int func_78(int iParam0)
{
	return func_72(iParam0, 0, 0);
}

int func_79(int iParam0)
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

int func_80()
{
	return Global_91330.f_296 > 0;
}

auto func_81()
{
	auto uVar0;
	
	func_91(&uVar0, get_clock_seconds());
	func_90(&uVar0, get_clock_minutes());
	func_89(&uVar0, get_clock_hours());
	func_84(&uVar0, get_clock_day_of_month());
	func_83(&uVar0, get_clock_month());
	func_82(&uVar0, get_clock_year());
	return uVar0;
}

void func_82(auto uParam0, int iParam1)
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

void func_83(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_88(*uParam0);
	iVar1 = func_86(*uParam0);
	if (iParam1 < 1 || iParam1 > func_85(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_85(int iParam0, int iParam1)
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

auto func_86(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_87(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_88(int iParam0)
{
	return (iParam0 && 15);
}

void func_89(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_90(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_91(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_92(auto uParam0)
{
	auto uVar0;
	char[24] cVar1;
	
	if (is_xbox360_version() || is_durango_version())
	{
		uVar0 = uParam0;
		network_set_rich_presence(9, &uVar0, 1, 1);
	}
	else if (is_ps3_version() || is_orbis_version())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, uParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		_0x3E200C2BCF4164EB(9, &cVar1);
	}
}

void func_93(char* sParam0, int iParam1, int iParam2)
{
	if (!is_string_null_or_empty(&Global_88681))
	{
		playstats_mission_over(&Global_88681, 0, 0, 0, 1, 0);
		StringCopy(&Global_88681, "", 64);
	}
	StringCopy(&Global_88681, sParam0, 64);
	playstats_mission_started(sParam0, iParam1, iParam2, func_198(0));
}

struct<2> func_94(int iParam0)
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

void func_95(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_96(uParam1, "Abigail1", func_12(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 1:
			func_96(uParam1, "Abigail2", func_12(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 2:
			func_96(uParam1, "Barry1", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 3:
			func_96(uParam1, "Barry2", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 4:
			func_96(uParam1, "Barry3", func_12(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 5:
			func_96(uParam1, "Barry3A", func_12(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 6:
			func_96(uParam1, "Barry3C", func_12(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 7:
			func_96(uParam1, "Barry4", func_12(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_97(iParam0), 0, 0);
			break;
		
		case 8:
			func_96(uParam1, "Dreyfuss1", func_12(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 9:
			func_96(uParam1, "Epsilon1", func_12(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 10:
			func_96(uParam1, "Epsilon2", func_12(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 11:
			func_96(uParam1, "Epsilon3", func_12(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 12:
			func_96(uParam1, "Epsilon4", func_12(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 13:
			func_96(uParam1, "Epsilon5", func_12(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 14:
			func_96(uParam1, "Epsilon6", func_12(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 15:
			func_96(uParam1, "Epsilon7", func_12(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 16:
			func_96(uParam1, "Epsilon8", func_12(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 17:
			func_96(uParam1, "Extreme1", func_12(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 18:
			func_96(uParam1, "Extreme2", func_12(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 19:
			func_96(uParam1, "Extreme3", func_12(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 20:
			func_96(uParam1, "Extreme4", func_12(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 21:
			func_96(uParam1, "Fanatic1", func_12(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 22:
			func_96(uParam1, "Fanatic2", func_12(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 23:
			func_96(uParam1, "Fanatic3", func_12(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_97(iParam0), 0, 1);
			break;
		
		case 24:
			func_96(uParam1, "Hao1", func_12(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_97(iParam0), 0, 1);
			break;
		
		case 25:
			func_96(uParam1, "Hunting1", func_12(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 26:
			func_96(uParam1, "Hunting2", func_12(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 27:
			func_96(uParam1, "Josh1", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 28:
			func_96(uParam1, "Josh2", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 29:
			func_96(uParam1, "Josh3", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 30:
			func_96(uParam1, "Josh4", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 31:
			func_96(uParam1, "Maude1", func_12(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 32:
			func_96(uParam1, "Minute1", func_12(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 33:
			func_96(uParam1, "Minute2", func_12(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 34:
			func_96(uParam1, "Minute3", func_12(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 35:
			func_96(uParam1, "MrsPhilips1", func_12(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 36:
			func_96(uParam1, "MrsPhilips2", func_12(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 37:
			func_96(uParam1, "Nigel1", func_12(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 38:
			func_96(uParam1, "Nigel1A", func_12(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 39:
			func_96(uParam1, "Nigel1B", func_12(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 40:
			func_96(uParam1, "Nigel1C", func_12(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 41:
			func_96(uParam1, "Nigel1D", func_12(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 42:
			func_96(uParam1, "Nigel2", func_12(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 43:
			func_96(uParam1, "Nigel3", func_12(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 44:
			func_96(uParam1, "Omega1", func_12(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 45:
			func_96(uParam1, "Omega2", func_12(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 46:
			func_96(uParam1, "Paparazzo1", func_12(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 47:
			func_96(uParam1, "Paparazzo2", func_12(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 48:
			func_96(uParam1, "Paparazzo3", func_12(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 49:
			func_96(uParam1, "Paparazzo3A", func_12(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 50:
			func_96(uParam1, "Paparazzo3B", func_12(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 51:
			func_96(uParam1, "Paparazzo4", func_12(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 52:
			func_96(uParam1, "Rampage1", func_12(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 54:
			func_96(uParam1, "Rampage3", func_12(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 55:
			func_96(uParam1, "Rampage4", func_12(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 56:
			func_96(uParam1, "Rampage5", func_12(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 53:
			func_96(uParam1, "Rampage2", func_12(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 57:
			func_96(uParam1, "TheLastOne", func_12(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 58:
			func_96(uParam1, "Tonya1", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 59:
			func_96(uParam1, "Tonya2", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 60:
			func_96(uParam1, "Tonya3", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 61:
			func_96(uParam1, "Tonya4", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 62:
			func_96(uParam1, "Tonya5", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_96(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_97(int iParam0)
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

bool func_98(int iParam0)
{
	int iVar0;
	
	if (func_128(iParam0.f_1))
	{
		if (!is_string_null_or_empty(iParam0.f_9))
		{
			func_118(1);
			func_116(iParam0, 1, func_117(*iParam0));
		}
		if (*iParam0.f_27)
		{
			if (func_115(*iParam0))
			{
				while (!is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
				{
					func_175();
					wait(0);
				}
			}
		}
		func_99(*iParam0);
		iVar0 = SYSTEM::START_NEW_SCRIPT_with_args(iParam0.f_1, iParam0, 61, 18000);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(iParam0.f_1);
		if (has_cutscene_loaded())
		{
			func_336("Initial cutscene loaded and passing to RC mission.");
			_0x8D9DF6ECA8768583(iVar0);
		}
		else
		{
			func_336("Initial cutscene wasn't loaded in time to pass to RC mission.");
			remove_cutscene();
		}
		return true;
	}
	return false;
}

void func_99(int iParam0)
{
	struct<2> Var0;
	
	func_114();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, false);
	}
	if (func_113(iParam0))
	{
		remove_ped_helmet(PLAYER::PLAYER_PED_ID(), 0);
	}
	set_all_random_peds_flee(player_id(), 1);
	clear_additional_text(false, true);
	clear_additional_text(3, true);
	clear_additional_text(2, true);
	if (Global_36839 == 1)
	{
		if (func_111(PLAYER::PLAYER_PED_ID()))
		{
			func_102(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!func_189())
	{
		if (iParam0 < 63)
		{
			func_100(iParam0);
			Var0 = {func_12(iParam0)};
			set_mission_name(1, &Var0);
		}
	}
}

void func_100(int iParam0)
{
	if (iParam0 < 63)
	{
		func_101();
		Global_69744 = iParam0;
		Global_69743 = 0;
		Global_69746 = 7;
	}
}

void func_101()
{
	if (Global_69743 != 6)
	{
	}
	if (Global_69748)
	{
		reset_hud_component_values(15);
		Global_69748 = 0;
		Global_17257.f_7862 = 0;
	}
	Global_69743 = 6;
	Global_69745 = -1;
	Global_69744 = -1;
}

void func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_110(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		func_105(1, iVar1, 1);
		return;
	}
	iVar2 = func_104(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_103(iVar2);
}

void func_103(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36616[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36616[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_36837 = 0;
		}
	}
	Global_36616[iParam0 /*5*/] = 13;
	Global_36616[iParam0 /*5*/].f_1 = 0;
	Global_36616[iParam0 /*5*/].f_2 = 0;
	Global_36616[iParam0 /*5*/].f_3 = 0;
	Global_36616[iParam0 /*5*/].f_4 = 0;
	Global_36615--;
	if (Global_36615 < 0)
	{
		Global_36615 = 0;
	}
}

int func_104(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36616[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_105(int iParam0, int iParam1, int iParam2)
{
	func_106(iParam0, iParam1, iParam2, 0, 0);
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_108(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_107();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36723[iVar0 /*5*/] = iParam0;
	Global_36723[iVar0 /*5*/].f_1 = iParam1;
	Global_36723[iVar0 /*5*/].f_2 = iParam2;
	Global_36723[iVar0 /*5*/].f_3 = iParam3;
	Global_36723[iVar0 /*5*/].f_4 = iParam4;
}

int func_107()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36723[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_108(int iParam0, int iParam1, int iParam2)
{
	if (func_109(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36723[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36723[iVar0 /*5*/])
			{
				if (iParam1 == Global_36723[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_110(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36642[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_111(int iParam0)
{
	if (func_112(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_112(int iParam0)
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

bool func_113(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return false;
			break;
	}
	return true;
}

void func_114()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	GAMEPLAY::CLEAR_BIT(&Global_2283, 25);
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 11);
}

bool func_115(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return false;
			break;
	}
	return true;
}

void func_116(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(*uParam0.f_28[iVar0]))
		{
			set_entity_proofs(*uParam0.f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_112(*uParam0.f_35[iVar0]))
		{
			set_entity_proofs(*uParam0.f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(*uParam0.f_41[iVar0]))
		{
			set_entity_proofs(*uParam0.f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		}
		iVar0++;
	}
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		set_entity_proofs(PLAYER::PLAYER_PED_ID(), iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		set_entity_invincible(PLAYER::PLAYER_PED_ID(), iParam1);
		if (iParam2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		}
	}
}

bool func_117(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return false;
			break;
	}
	return true;
}

void func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = get_player_index();
	if (!is_player_dead(iVar0))
	{
		if (iParam0)
		{
		}
		set_player_control(iVar0, iParam0, 16);
		set_player_control(iVar0, iParam0, 32);
	}
	func_119(1, 1, 0, 0);
}

void func_119(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_127(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_126())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_125(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_127(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_125(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_123(player_id())) && !func_121(player_id(), 0)) && !func_120())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_123(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_120()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_122(-1, 0) == 8;
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

int func_122(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
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

bool func_123(int iParam0)
{
	if (func_121(iParam0, 0))
	{
		return true;
	}
	if (func_124())
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

int func_124()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_125(int iParam0, int iParam1, auto uParam2, int iParam3)
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

bool func_126()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_127(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 13);
	}
}

bool func_128(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
		SCRIPT::REQUEST_SCRIPT(sParam0);
		while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			SCRIPT::REQUEST_SCRIPT(sParam0);
			wait(0);
		}
		return true;
	}
	func_336("Attempting to launch invalid script file [TERMINATING]");
	return false;
}

void func_129()
{
	Global_14578 = 0;
	func_130();
}

void func_130()
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

bool func_131()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_132(auto uParam0, int iParam1)
{
	struct<27> Var0;
	
	if (Global_69489)
	{
		func_336("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return false;
	}
	func_95(*uParam0, &Var0);
	if ((func_174(*uParam0) || func_172(*uParam0)) || Global_69734 == 1)
	{
		return true;
	}
	if (!is_world_point_within_brain_activation_range())
	{
		func_336("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return false;
	}
	if (func_164(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_163(*uParam0.f_28[0]);
		}
		func_336("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return false;
	}
	if (*uParam0.f_25 == 1)
	{
		if (!func_143(uParam0, 1, 0))
		{
			return false;
		}
	}
	else if (*uParam0.f_16 == 0)
	{
		if (!func_143(uParam0, 0, 0))
		{
			return false;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_140(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_139(uParam0);
			}
			else
			{
				func_137(uParam0);
			}
			return false;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_140(uParam0, 0, 1))
		{
			func_137(uParam0);
			return false;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_140(uParam0, 0, 1))
		{
			return false;
		}
	}
	else if (*uParam0.f_26 == 1)
	{
		if (!func_140(uParam0, 1, 0))
		{
			func_137(uParam0);
			return false;
		}
	}
	else if (*uParam0.f_16 == 2 || *uParam0.f_16 == 1)
	{
		if (!func_140(uParam0, 0, 0))
		{
			func_137(uParam0);
			return false;
		}
	}
	if (*uParam0.f_16 == 2 || *uParam0.f_16 == 1)
	{
		if (func_112(*uParam0.f_35[0]))
		{
			if (!is_entity_at_coord(*uParam0.f_35[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return false;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (is_explosion_in_sphere(-1, *(uParam0.f_17[0 /*3*/]), 8f))
		{
			func_336("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return false;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!GAMEPLAY::IS_BIT_SET(Var0.f_26, func_208()))
		{
			func_336("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return false;
		}
	}
	if (func_136(uParam0.f_48) && iParam1)
	{
		func_133(*uParam0.f_28[0], uParam0.f_48, *uParam0);
	}
	return true;
}

void func_133(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_112(iParam0))
	{
		switch (*uParam1.f_3)
		{
			case 1:
				if (func_136(uParam1))
				{
					if (has_anim_dict_loaded(*uParam1))
					{
						clear_ped_tasks_immediately(iParam0);
						if (iParam2 != 21)
						{
							if (func_69(*uParam1.f_5, 0f, 0f, 0f, 0))
							{
								task_play_anim(iParam0, *uParam1, *uParam1.f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								open_sequence_task(&iVar0);
								if (func_135(uParam1))
								{
									task_play_anim_advanced(false, *uParam1, *uParam1.f_2, *uParam1.f_5, *uParam1.f_8, 1000f, -8f, -1, 262152, 0f, 2, 0);
								}
								else
								{
									task_play_anim_advanced(false, *uParam1, *uParam1.f_1, *uParam1.f_5, *uParam1.f_8, 1000f, -8f, -1, 262152, 0f, 2, 0);
								}
								task_play_anim_advanced(false, *uParam1, *uParam1.f_1, *uParam1.f_5, *uParam1.f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
								close_sequence_task(iVar0);
								task_perform_sequence(iParam0, iVar0);
								clear_sequence_task(&iVar0);
							}
						}
						else
						{
							task_play_anim_advanced(iParam0, *uParam1, *uParam1.f_1, *uParam1.f_5, *uParam1.f_8, 8f, -8f, -1, 262153, 0f, 2, 3);
						}
						*uParam1.f_3 = 2;
					}
					else
					{
						*uParam1.f_3 = 0;
					}
				}
				else
				{
					*uParam1.f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_135(uParam1) || !is_entity_playing_anim(iParam0, *uParam1, *uParam1.f_2, 3))
				{
					if (func_134(iParam2) && !is_ped_facing_ped(iParam0, PLAYER::PLAYER_PED_ID(), 25f))
					{
						task_turn_ped_to_face_entity(iParam0, PLAYER::PLAYER_PED_ID(), false);
						*uParam1.f_3 = 5;
					}
					else if ((func_135(uParam1) && *uParam1.f_4 == 0) && get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iParam0, 1), 1) < 20f)
					{
						*uParam1.f_3 = 3;
					}
				}
				break;
			
			case 3:
				open_sequence_task(&iVar1);
				if (func_69(*uParam1.f_5, 0f, 0f, 0f, 0))
				{
					task_play_anim(false, *uParam1, *uParam1.f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					task_play_anim(false, *uParam1, *uParam1.f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					task_play_anim_advanced(false, *uParam1, *uParam1.f_2, *uParam1.f_5, *uParam1.f_8, 4f, -4f, -1, 262152, 0f, 2, 0);
					task_play_anim_advanced(false, *uParam1, *uParam1.f_1, *uParam1.f_5, *uParam1.f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
				}
				close_sequence_task(iVar1);
				task_perform_sequence(iParam0, iVar1);
				clear_sequence_task(&iVar1);
				*uParam1.f_4 = 1;
				if (func_134(iParam2))
				{
					*uParam1.f_3 = 2;
				}
				else
				{
					*uParam1.f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_134(iParam2) || is_ped_facing_ped(iParam0, PLAYER::PLAYER_PED_ID(), 10f))
				{
					if (func_69(*uParam1.f_5, 0f, 0f, 0f, 0))
					{
						task_play_anim(iParam0, *uParam1, *uParam1.f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						task_play_anim_advanced(iParam0, *uParam1, *uParam1.f_1, *uParam1.f_5, *uParam1.f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
					}
					*uParam1.f_3 = 2;
				}
				break;
			}
	}
}

bool func_134(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return true;
	}
	return false;
}

bool func_135(auto uParam0)
{
	if (is_string_null_or_empty(*uParam0.f_2))
	{
		return false;
	}
	return true;
}

bool func_136(auto uParam0)
{
	if (is_string_null_or_empty(*uParam0) || is_string_null_or_empty(*uParam0.f_1))
	{
		return false;
	}
	return true;
}

void func_137(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 52)
	{
		func_138(uParam0.f_41[1]);
		func_138(uParam0.f_41[2]);
	}
	if (func_112(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= *uParam0.f_28 - 1)
		{
			if (func_111(*uParam0.f_28[iVar0]))
			{
				if (!is_ped_in_any_vehicle(*uParam0.f_28[iVar0], 0))
				{
					set_entity_collision(*uParam0.f_28[iVar0], true, 0);
					freeze_entity_position(*uParam0.f_28[0], false);
				}
				set_ped_keep_task(*uParam0.f_28[iVar0], true);
				if (*uParam0 == 34)
				{
					if (func_112(*uParam0.f_41[0]))
					{
						set_entity_collision(*uParam0.f_41[0], true, 0);
						freeze_entity_position(*uParam0.f_41[0], false);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_163(*uParam0.f_28[iVar0]);
						break;
					
					case 8:
						request_anim_dict("rcmcollect_paperleadinout@");
						while (!has_anim_dict_loaded("rcmcollect_paperleadinout@"))
						{
							wait(0);
						}
						open_sequence_task(&iVar1);
						task_play_anim(false, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						task_smart_flee_ped(false, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						close_sequence_task(iVar1);
						task_perform_sequence(*uParam0.f_28[iVar0], iVar1);
						clear_sequence_task(&iVar1);
						break;
					
					case 0:
					case 1:
						request_anim_dict("rcmabigail");
						while (!has_anim_dict_loaded("rcmabigail"))
						{
							wait(0);
						}
						open_sequence_task(&iVar1);
						task_play_anim(false, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						task_smart_flee_ped(false, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						close_sequence_task(iVar1);
						task_perform_sequence(*uParam0.f_28[iVar0], iVar1);
						clear_sequence_task(&iVar1);
						break;
					
					case 32:
						request_anim_dict("rcmminute1");
						while (!has_anim_dict_loaded("rcmminute1"))
						{
							wait(0);
						}
						open_sequence_task(&iVar1);
						if (iVar0 == 0)
						{
							task_play_anim(false, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							task_play_anim(false, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						task_smart_flee_ped(false, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						close_sequence_task(iVar1);
						task_perform_sequence(*uParam0.f_28[iVar0], iVar1);
						clear_sequence_task(&iVar1);
						break;
					
					case 24:
						request_anim_dict("special_ped@hao@base");
						while (!has_anim_dict_loaded("special_ped@hao@base"))
						{
							wait(0);
						}
						open_sequence_task(&iVar1);
						task_play_anim(false, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						task_smart_flee_ped(false, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						close_sequence_task(iVar1);
						task_perform_sequence(*uParam0.f_28[iVar0], iVar1);
						clear_sequence_task(&iVar1);
						break;
					
					default:
						clear_ped_secondary_task(*uParam0.f_28[iVar0]);
						task_smart_flee_ped(*uParam0.f_28[iVar0], PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_138(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, 1, true);
		}
		delete_object(iParam0);
	}
}

void func_139(auto uParam0)
{
	int iVar0;
	
	if (func_112(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= *uParam0.f_28 - 1)
		{
			if (func_111(*uParam0.f_28[iVar0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0.f_28[iVar0], 1, false);
				set_blocking_of_non_temporary_events(*uParam0.f_28[iVar0], false);
				set_ped_keep_task(*uParam0.f_28[iVar0], true);
				task_combat_ped(*uParam0.f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_as_no_longer_needed(uParam0.f_28[iVar0]);
			}
			iVar0++;
		}
	}
}

bool func_140(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1)
	{
		iVar1 = *uParam0.f_35 - 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (func_111(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_35[iVar0]))
			{
				if (is_entity_dead(*uParam0.f_35[iVar0], 0))
				{
					func_336("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return false;
				}
				if (!is_vehicle_driveable(*uParam0.f_35[iVar0], 0))
				{
					func_336("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return false;
				}
				if (has_entity_been_damaged_by_entity(*uParam0.f_35[iVar0], PLAYER::PLAYER_PED_ID(), 0))
				{
					func_336("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return false;
				}
				if (get_entity_health(*uParam0.f_35[iVar0]) < 850)
				{
					func_336("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return false;
				}
				if (iParam2)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (is_entity_touching_entity(*uParam0.f_35[iVar0], PLAYER::PLAYER_PED_ID()) && get_entity_speed(PLAYER::PLAYER_PED_ID()) > 5f)
						{
							func_336("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return false;
						}
						iVar2 = get_players_last_vehicle();
						if (func_142(iVar2))
						{
							if (ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("towtruck2"))
							{
								if (func_142(*uParam0.f_35[iVar0]))
								{
									if (is_vehicle_attached_to_tow_truck(iVar2, *uParam0.f_35[iVar0]))
									{
										func_336("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return false;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = get_players_last_vehicle();
						if (func_142(iVar3))
						{
							if (is_entity_touching_entity(*uParam0.f_35[iVar0], iVar3) && get_entity_speed(iVar3) > 6f)
							{
								func_336("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return false;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_141(PLAYER::PLAYER_PED_ID(), *uParam0.f_35[iVar0]))
							{
								func_336("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return false;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (is_vehicle_driveable(iParam1, 0))
		{
			iVar0 = get_vehicle_ped_is_using(iParam0);
			if (iVar0 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_142(int iParam0)
{
	if (func_112(iParam0))
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

bool func_143(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = *uParam0.f_28 - 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_111(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_28[iVar0]))
			{
				if (!PED::IS_PED_INJURED(*uParam0.f_28[iVar0]))
				{
					if (is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
					{
						if (is_entity_touching_entity(PLAYER::PLAYER_PED_ID(), *uParam0.f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_137(uParam0);
							}
							else
							{
								func_139(uParam0);
							}
							if (func_131())
							{
								func_129();
							}
							func_336("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return false;
						}
					}
					if ((has_entity_been_damaged_by_any_ped(*uParam0.f_28[iVar0]) || has_entity_been_damaged_by_any_vehicle(*uParam0.f_28[iVar0])) || has_entity_been_damaged_by_any_object(*uParam0.f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_137(uParam0);
						}
						else
						{
							func_139(uParam0);
						}
						func_336("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return false;
					}
					if (is_ped_ragdoll(*uParam0.f_28[iVar0]))
					{
						if (is_entity_at_entity(*uParam0.f_28[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_137(uParam0);
							}
							else
							{
								func_139(uParam0);
							}
							func_336("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return false;
						}
					}
					if (func_162(*uParam0))
					{
						if (!func_183(*uParam0))
						{
							if (func_157(*uParam0.f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_137(uParam0);
								}
								else
								{
									func_139(uParam0);
								}
								func_336("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return false;
							}
						}
						if (is_explosion_in_sphere(-1, get_entity_coords(*uParam0.f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_137(uParam0);
							}
							else
							{
								func_139(uParam0);
							}
							func_336("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
						if (func_145(*uParam0.f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_137(uParam0);
							}
							else
							{
								func_139(uParam0);
							}
							func_336("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return false;
						}
					}
					if (!func_144(*uParam0))
					{
						if (is_explosion_in_sphere(-1, get_entity_coords(*uParam0.f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_137(uParam0);
							}
							else
							{
								func_139(uParam0);
							}
							func_336("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
						if (get_player_wanted_level(player_id()) > 0)
						{
							if (iParam2 == 0)
							{
								func_137(uParam0);
							}
							else
							{
								func_139(uParam0);
							}
							func_336("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return false;
						}
					}
				}
				else
				{
					func_336("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_112(*uParam0.f_41[0]))
						{
							set_entity_collision(*uParam0.f_41[0], true, 0);
							freeze_entity_position(*uParam0.f_41[0], false);
						}
					}
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_144(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return true;
	}
	return false;
}

bool func_145(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_112(PLAYER::PLAYER_PED_ID()) && func_112(iParam0))
	{
		if (func_156(iParam0) || is_player_targetting_entity(player_id(), iParam0))
		{
			if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_146(iParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_146(int iParam0, float fParam1)
{
	return func_147(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

int func_147(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	auto uVar0;
	Vector3 vVar1;
	int iVar4;
	
	iVar4 = func_155(iParam0, iParam1);
	if (!func_112(iParam0) || !func_112(iParam1))
	{
		if (iVar4 != -1)
		{
			func_154(&(Local_37[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_151(iParam0, iParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_150();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = {get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f)};
	uVar0 = func_148(&(Local_37[iVar4 /*4*/]), vVar1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || GAMEPLAY::GET_GAME_TIMER() - Local_37[iVar4 /*4*/].f_3 < iParam4);
}

bool func_148(auto uParam0, Vector3 vParam1, int iParam2, auto uParam3, int iParam4, int iParam5)
{
	auto uVar0;
	Vector3 vVar1;
	auto uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = false;
	if (!func_112(iParam4))
	{
		*uParam0 = 0;
		return false;
	}
	if (*uParam0 == 0)
	{
		vVar1 = {func_149(iParam4, iParam7)};
		*uParam0 = _0x7EE9F5D83DD4F90E(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return false;
	}
	iVar8 = _get_raycast_result(*uParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return false;
	}
	else if (iVar8 == 1)
	{
		return false;
	}
	*uParam0 = 0;
	if (is_entity_a_ped(iVar7))
	{
		func_112(iVar7);
		if (get_ped_index_from_entity_index(iVar7) == iParam4)
		{
			if (iLocal_78)
			{
				draw_debug_line_with_two_colours(vParam1, get_entity_coords(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = GAMEPLAY::GET_GAME_TIMER();
			return true;
		}
		return false;
	}
	if (is_entity_a_vehicle(iVar7))
	{
		func_112(iVar7);
		if (is_ped_in_any_vehicle(iParam4, 0))
		{
			if (get_vehicle_index_from_entity_index(iVar7) == get_vehicle_ped_is_in(iParam4, 0))
			{
				if (iLocal_78)
				{
					draw_debug_line_with_two_colours(vParam1, get_entity_coords(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
		return false;
	}
	return false;
}

Vector3 func_149(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = get_random_int_in_range(false, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return get_entity_coords(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return get_ped_bone_coords(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return get_ped_bone_coords(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return get_ped_bone_coords(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return get_ped_bone_coords(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return get_ped_bone_coords(iParam0, 36864, 0f, 0f, 0f);
	}
	return get_entity_coords(iParam0, 1);
}

int func_150()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_151(int iParam0, int iParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	vVar0 = {func_153(get_entity_coords(iParam1, 1) - get_entity_coords(iParam0, 1))};
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return true;
	}
	if (iParam3 == 0)
	{
		vVar3 = {get_entity_forward_vector(iParam0)};
	}
	else
	{
		vVar3 = {func_153(get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) - get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_152(vVar3, vVar0);
	if (fVar6 <= cos(fParam2 / 2f))
	{
		return false;
	}
	return true;
}

float func_152(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

Vector3 func_153(Vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * Vector(fVar1, fVar1, fVar1)};
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_154(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
}

int func_155(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_156(int iParam0)
{
	if (is_player_free_aiming_at_entity(player_id(), iParam0) && is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
	{
		return true;
	}
	return false;
}

bool func_157(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (iParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (iParam2)
	{
		fVar0 = 2f;
	}
	if (func_112(PLAYER::PLAYER_PED_ID()) && func_112(iParam0))
	{
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!iParam2)
		{
			if (func_161(iParam0, iParam1, fVar0, fVar1))
			{
				return true;
			}
			if (func_158(iParam0, fVar1, iParam3, iParam4))
			{
				return true;
			}
		}
		else
		{
			if (is_ped_current_weapon_silenced(PLAYER::PLAYER_PED_ID()))
			{
				if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
				{
					if (is_bullet_in_area(get_entity_coords(iParam0, 1), fVar0, 1))
					{
						return true;
					}
				}
			}
			else
			{
				if (iParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_161(iParam0, iParam1, fVar0, fVar1))
				{
					return true;
				}
			}
			if (func_158(iParam0, fVar1, iParam3, iParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_158(int iParam0, float fParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {get_entity_coords(iParam0, 1)};
	vVar3 = {vVar0};
	vVar0.x -= fParam1;
	vVar0.y -= fParam1;
	vVar0.z -= fParam1;
	vVar3.x += fParam1;
	vVar3.y += fParam1;
	vVar3.z += fParam1;
	if (iParam2)
	{
		if (((_0x34318593248C8FB2(get_entity_coords(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || _0x34318593248C8FB2(get_entity_coords(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || _0x34318593248C8FB2(get_entity_coords(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || _0x34318593248C8FB2(get_entity_coords(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (iParam3)
			{
				if (func_159(iParam0, fParam1))
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
	}
	else
	{
		if (iParam3)
		{
			if (func_159(iParam0, fParam1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (is_projectile_in_area(vVar0, vVar3, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_159(int iParam0, float fParam1)
{
	auto uVar0;
	Vector3 vVar1;
	
	if ((((_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_160(iParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_160(int iParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	vVar0 = {func_153(vParam1 - get_entity_coords(iParam0, 1))};
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return true;
	}
	if (iParam5 == 0)
	{
		vVar3 = {get_entity_forward_vector(iParam0)};
	}
	else
	{
		vVar3 = {func_153(get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) - get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_152(vVar3, vVar0);
	if (fVar6 <= cos(fParam4 / 2f))
	{
		return false;
	}
	return true;
}

bool func_161(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam1)
	{
		if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
		{
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return true;
			}
		}
	}
	if (is_bullet_in_area(get_entity_coords(iParam0, 1), fParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_162(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return false;
	}
	return true;
}

void func_163(int iParam0)
{
	int iVar0;
	
	if (func_112(PLAYER::PLAYER_PED_ID()) && func_112(iParam0))
	{
		request_anim_dict("rcmextreme3");
		while (!has_anim_dict_loaded("rcmextreme3"))
		{
			wait(0);
		}
		open_sequence_task(&iVar0);
		task_play_anim(false, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		task_set_blocking_of_non_temporary_events(false, 1);
		task_parachute_to_target(false, 64.6f, -737.8f, 44.2f);
		task_smart_flee_ped(false, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(iParam0, iVar0);
		clear_sequence_task(&iVar0);
	}
}

bool func_164(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_170();
	}
	if (iParam0 == -1)
	{
		return true;
	}
	if (func_174(iParam0))
	{
		return false;
	}
	if (!func_168(4))
	{
		if (func_172(iParam0))
		{
		}
		else
		{
			return true;
		}
	}
	if (func_167() && !func_166())
	{
		return true;
	}
	if (!func_165(iParam0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (get_player_wanted_level(player_id()) != 0)
			{
				return true;
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iParam0 /*6*/], 2))
	{
		return true;
	}
	return false;
}

bool func_165(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_166()
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

int func_167()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

int func_168(int iParam0)
{
	return func_169(iParam0, Global_35711);
}

bool func_169(int iParam0, int iParam1)
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

int func_170()
{
	return func_171(get_this_script_name(), 0);
}

int func_171(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_95(iVar0, &sVar1);
		if (get_hash_key(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

bool func_172(int iParam0)
{
	if ((func_173() && Global_91278.f_11 == 6) && iParam0 == func_171(&(Global_91278.f_3), 0))
	{
		return true;
	}
	return false;
}

bool func_173()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

bool func_174(int iParam0)
{
	if (func_198(0))
	{
		if (Global_69735.f_1 == 7)
		{
			if (Global_69735 == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_175()
{
	func_179();
	func_178();
	func_176();
}

void func_176()
{
	if (is_player_playing(player_id()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (func_177(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (get_script_task_status(PLAYER::PLAYER_PED_ID(), -828834893) != 1)
				{
					task_leave_any_vehicle(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
		}
	}
}

bool func_177(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
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

void func_178()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 21, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 257, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 23, 1);
}

void func_179()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_182(0))
		{
			func_180(0);
		}
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
}

void func_180(int iParam0)
{
	if (Global_14571)
	{
		func_181(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_126())
	{
		Global_14413.f_1 = 3;
	}
}

void func_181(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_182(0))
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

bool func_182(int iParam0)
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

bool func_183(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return true;
	}
	return false;
}

bool func_184(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_170();
	}
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_186(&(Global_100241[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return false;
	}
	func_185(iParam0);
	return true;
}

void func_185(int iParam0)
{
	Global_100241[iParam0 /*10*/].f_4 = 1;
	Global_100241[iParam0 /*10*/].f_5 = 0;
	Global_100241[iParam0 /*10*/].f_6 = 0;
	Global_100241[iParam0 /*10*/] = 0;
}

int func_186(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_188(0))
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
		if (!func_168(iParam2))
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
			func_187(uParam0, iParam4);
		}
	}
	return 2;
}

void func_187(auto uParam0, int iParam1)
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

bool func_188(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_168(iParam0))
	{
		return false;
	}
	return true;
}

bool func_189()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return true;
	}
	return false;
}

bool func_190(int iParam0)
{
	char* sVar0;
	
	if (Global_69489)
	{
		func_336("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return false;
	}
	if (!Global_101154.f_7775 && !func_198(1))
	{
		func_336("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return false;
	}
	if (!func_191(iParam0))
	{
		Global_100241[iParam0 /*10*/].f_1 = 1;
		func_336("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return false;
	}
	if (Global_91278.f_11 == 6)
	{
		if (Global_91278 < 9)
		{
			func_95(iParam0, &sVar0);
			if (are_strings_equal(&(Global_91278.f_3), sVar0))
			{
				func_336("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return false;
			}
		}
	}
	if (_get_number_of_instances_of_streamed_script(joaat("candidate_controller")) == 0)
	{
		Global_100241[iParam0 /*10*/].f_1 = 1;
		func_336("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return false;
	}
	return true;
}

bool func_191(int iParam0)
{
	auto uVar0;
	
	func_95(iParam0, &uVar0);
	if (!func_168(4))
	{
		if (func_172(iParam0))
		{
		}
		else
		{
			return false;
		}
	}
	if (func_167() && !func_166())
	{
		return false;
	}
	if (func_197(iParam0))
	{
		return false;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_170();
	}
	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_174(iParam0))
	{
		if (!func_196(iParam0))
		{
			return false;
		}
		if (!func_195(iParam0))
		{
			return false;
		}
		if (func_194(iParam0))
		{
			return false;
		}
	}
	if (iParam0 == 58)
	{
		if (func_192(5))
		{
			Global_100241[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_100241[iParam0 /*10*/].f_3 == 1)
	{
		return false;
	}
	return true;
}

bool func_192(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_91330.f_294 == 0)
	{
		return false;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_192(iVar0))
			{
				return true;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_193(iParam0, &sVar1);
		iVar9 = get_interior_at_coords_with_type(Global_86649[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_91330.f_294 == iVar9)
		{
			return true;
		}
	}
	return false;
}

int func_193(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (is_ipl_active("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (is_ipl_active("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (is_ipl_active("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !are_strings_equal(sParam1, "");
}

int func_194(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iParam0 /*6*/], 3);
}

int func_195(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iParam0 /*6*/], 2);
}

int func_196(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iParam0 /*6*/], false);
}

bool func_197(int iParam0)
{
	if (func_165(iParam0))
	{
		return false;
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (get_player_wanted_level(player_id()) != 0)
		{
			return true;
		}
	}
	return false;
}

int func_198(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Rampage1";
		
		case 1:
			return "Rampage3";
		
		case 2:
			return "Rampage4";
		
		case 3:
			return "Rampage5";
		
		case 4:
			return "Rampage2";
		
		default:
	}
	return "";
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 52;
		
		case 1:
			return 54;
		
		case 2:
			return 55;
		
		case 3:
			return 56;
		
		case 4:
			return 53;
		
		default:
	}
	return -1;
}

int func_201()
{
	int iVar0;
	
	iVar0 = false;
	if (!func_206(PLAYER::PLAYER_PED_ID()))
	{
		return iVar0;
	}
	if (Global_100241[56 /*10*/].f_3)
	{
		return iVar0;
	}
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		if (iLocal_292)
		{
			clear_help(1);
			func_205("RAMP_HELP_CRIM", -1);
			iLocal_292 = 0;
		}
		iVar0 = true;
	}
	else if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (iLocal_291)
		{
			clear_help(1);
			func_205("RAMP_HELP_FOOT", -1);
			iLocal_291 = 0;
		}
		iVar0 = true;
	}
	else if ((func_204(0) || is_player_switch_in_progress()) || func_203())
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			if (func_204(0))
			{
			}
			else if (is_player_switch_in_progress())
			{
			}
			else if (func_203())
			{
			}
			clear_help(1);
			iLocal_293 = 0;
		}
		iVar0 = true;
	}
	else if (func_320(108))
	{
		if (!iLocal_293)
		{
			if (!func_2("RAMP_HELP_TRIG"))
			{
				clear_help(1);
				func_202("RAMP_HELP_TRIG");
			}
			iLocal_293 = 1;
		}
		iVar0 = !is_control_pressed(2, 51);
	}
	return iVar0;
}

void func_202(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

int func_203()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

int func_204(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

void func_205(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_206(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	return !is_entity_dead(iParam0, 0);
}

int func_207(float fParam0)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	
	if (!func_206(PLAYER::PLAYER_PED_ID()))
	{
		return -1;
	}
	vVar4 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	iVar0 = 0;
	while (iVar0 < 5)
	{
		vVar1 = {Global_25433[iLocal_288 + iVar0 /*23*/][0 /*3*/]};
		if (get_distance_between_coords(vVar4, vVar1, 1) <= fParam0 && absf(vVar4.z - vVar1.z) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

auto func_208()
{
	func_57();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_209(int iParam0, Vector3 vParam1)
{
	int iVar0;
	int[] iVar1 = new int[5];
	int iVar7;
	
	iVar0 = 0;
	iVar1[0] = 52;
	iVar1[1] = 53;
	iVar1[2] = 54;
	iVar1[3] = 55;
	iVar1[4] = 56;
	if (!func_317(&iVar1, iParam0, vParam1, 5f))
	{
		func_336(" Didn't know which RC To Launch");
		func_321(iParam0, 1);
	}
	if (!func_190(*iParam0))
	{
		func_336(" RC Can't Launch");
		func_321(iParam0, 1);
	}
	if (func_316(*iParam0))
	{
		while (true)
		{
			wait(0);
			if (func_315(*iParam0))
			{
				func_321(iParam0, 1);
			}
		}
	}
	func_251(iParam0);
	clear_area(vParam1, *iParam0.f_15, 1, 0, 0, false);
	while (true)
	{
		wait(0);
		if (*iParam0 == 52 || *iParam0 == 53)
		{
			if (func_112(*iParam0.f_28[0]))
			{
				if (is_explosion_in_sphere(-1, get_entity_coords(*iParam0.f_28[0], 1), 5.1f))
				{
					if (*iParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < *iParam0.f_41)
						{
							if (ENTITY::DOES_ENTITY_EXIST(*iParam0.f_41[iVar7]))
							{
								if ((func_112(*iParam0.f_28[0]) && is_entity_attached_to_entity(*iParam0.f_41[iVar7], *iParam0.f_28[0])) || (func_112(*iParam0.f_28[1]) && is_entity_attached_to_entity(*iParam0.f_41[iVar7], *iParam0.f_28[1])))
								{
									delete_object(iParam0.f_41[iVar7]);
								}
							}
							iVar7++;
						}
					}
					set_ped_to_ragdoll(*iParam0.f_28[0], 100, 500, 0, 1, 1, 0);
					apply_damage_to_ped(*iParam0.f_28[0], 1000, 1);
					if (func_112(*iParam0.f_28[1]))
					{
						set_ped_to_ragdoll(*iParam0.f_28[1], 100, 500, 0, 1, 1, 0);
						apply_damage_to_ped(*iParam0.f_28[1], 1000, 1);
					}
					func_336("Sitting Rampage attacked with explosives, cleaning up");
					func_321(iParam0, 1);
				}
			}
			if (func_112(*iParam0.f_28[1]))
			{
				if (is_explosion_in_sphere(-1, get_entity_coords(*iParam0.f_28[1], 1), 5.1f))
				{
					if (*iParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < *iParam0.f_41)
						{
							if (ENTITY::DOES_ENTITY_EXIST(*iParam0.f_41[iVar7]))
							{
								if ((func_112(*iParam0.f_28[0]) && is_entity_attached_to_entity(*iParam0.f_41[iVar7], *iParam0.f_28[0])) || (func_112(*iParam0.f_28[1]) && is_entity_attached_to_entity(*iParam0.f_41[iVar7], *iParam0.f_28[1])))
								{
									delete_object(iParam0.f_41[iVar7]);
								}
							}
							iVar7++;
						}
					}
					set_ped_to_ragdoll(*iParam0.f_28[1], 100, 500, 0, 1, 1, 0);
					apply_damage_to_ped(*iParam0.f_28[1], 1000, 1);
					if (func_112(*iParam0.f_28[0]))
					{
						set_ped_to_ragdoll(*iParam0.f_28[0], 100, 500, 0, 1, 1, 0);
						apply_damage_to_ped(*iParam0.f_28[0], 1000, 1);
					}
					func_336("Sitting Rampage attacked with explosives, cleaning up");
					func_321(iParam0, 1);
				}
			}
		}
		if (func_250(iParam0))
		{
			func_249(iParam0);
			func_336(" RC combat happening in area, tell peds to flee");
			func_137(iParam0);
			func_321(iParam0, 1);
		}
		if (!func_132(iParam0, 1))
		{
			func_336(" RC Is Not Fine And In Range");
			func_321(iParam0, 1);
		}
		if (func_248(52))
		{
			if (is_scenario_group_enabled("Rampage1"))
			{
				func_336(" Turning Off Scenario Group For Rampage 1");
				set_scenario_group_enabled("Rampage1", false);
			}
		}
		func_247(*iParam0);
		func_239(&iLocal_289, iParam0.f_9, vParam1);
		if (iVar0 == 0 && iLocal_289 != -1)
		{
			func_238(iParam0, &uLocal_294);
			if (has_cutscene_loaded())
			{
				func_336(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		vLocal_298 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
		if ((!(*iParam0 == 52 && vLocal_298.z > 34f) && !(*iParam0 == 53 && vLocal_298.z > 71f)) && !(*iParam0 == 54 && vLocal_298.z > 30f))
		{
			if (func_226(iParam0, 0))
			{
				if (*iParam0 == 53)
				{
					if (func_223(iParam0))
					{
						func_336(" Trigger Conditions Met");
						func_175();
						if (!func_5(iParam0))
						{
							func_336(" RC Can't Launch");
							func_321(iParam0, 1);
						}
						func_336(" RC Launcher Waiting To Terminate");
						if (func_3(iParam0))
						{
							func_336(" Ready To Terminate");
							func_321(iParam0, 0);
						}
					}
				}
				else if (func_222(iParam0))
				{
					func_336(" Trigger Conditions Met");
					func_175();
					if (!func_5(iParam0))
					{
						func_336(" RC Can't Launch");
						func_321(iParam0, 1);
					}
					func_336(" RC Launcher Waiting To Terminate");
					if (func_3(iParam0))
					{
						func_336(" Ready To Terminate");
						func_321(iParam0, 0);
					}
				}
			}
			else
			{
				if (*iParam0 == 53)
				{
					func_210(iParam0);
				}
				if (is_gameplay_hint_active())
				{
					iLocal_115 = -1;
					stop_gameplay_hint(0);
					task_clear_look_at(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
}

void func_210(int iParam0)
{
	char* sVar0;
	
	sVar0 = "misstrvram_2";
	switch (iLocal_116)
	{
		case 0:
			request_anim_dict(sVar0);
			if (has_anim_dict_loaded(sVar0))
			{
				iLocal_116++;
			}
			break;
		
		case 1:
			if (func_112(*iParam0.f_28[0]))
			{
				if (func_221(*iParam0.f_28[0], PLAYER::PLAYER_PED_ID(), 1) < 30f && is_entity_on_screen(*iParam0.f_28[0]))
				{
					func_220(&uLocal_121, 0, *iParam0.f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_116++;
				}
			}
			break;
		
		case 2:
			iLocal_117[0] = create_synchronized_scene(vLocal_108, vLocal_111, 2);
			if (func_112(*iParam0.f_28[0]))
			{
				func_211(&uLocal_121, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				task_synchronized_scene(*iParam0.f_28[0], iLocal_117[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1000f, 0);
			}
			set_synchronized_scene_looped(iLocal_117[0], false);
			_0x394B9CD12435C981(iLocal_117[0], true);
			iLocal_116++;
			break;
		
		case 3:
			if (is_synchronized_scene_running(iLocal_117[0]))
			{
				if (get_synchronized_scene_phase(iLocal_117[0]) >= 0.95f)
				{
					iLocal_116++;
				}
			}
			break;
		
		case 4:
			iLocal_117[1] = create_synchronized_scene(vLocal_108, vLocal_111, 2);
			if (func_112(*iParam0.f_28[0]))
			{
				func_211(&uLocal_121, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				task_synchronized_scene(*iParam0.f_28[0], iLocal_117[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1000f, 0);
			}
			set_synchronized_scene_looped(iLocal_117[1], false);
			_0x394B9CD12435C981(iLocal_117[1], true);
			iLocal_116++;
			break;
		
		case 5:
			if (is_synchronized_scene_running(iLocal_117[1]))
			{
				if (get_synchronized_scene_phase(iLocal_117[1]) >= 0.95f)
				{
					iLocal_116++;
				}
			}
			break;
		
		case 6:
			iLocal_117[2] = create_synchronized_scene(vLocal_108, vLocal_111, 2);
			if (func_112(*iParam0.f_28[0]))
			{
				task_synchronized_scene(*iParam0.f_28[0], iLocal_117[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1000f, 0);
			}
			set_synchronized_scene_looped(iLocal_117[2], true);
			_0x394B9CD12435C981(iLocal_117[2], false);
			iLocal_116++;
			break;
		
		case 7:
			break;
	}
}

int func_211(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_219(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_212(sParam2, iParam4, 0);
}

bool func_212(char* sParam0, int iParam1, int iParam2)
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
					func_130();
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
		if (func_218(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_217();
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
				func_216();
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
				if (func_215())
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
			if (func_126())
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
			func_214();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_213();
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
		func_130();
	}
	return false;
}

void func_213()
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

void func_214()
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

bool func_215()
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

void func_216()
{
	if (func_58(14))
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
		Global_14413 = func_208();
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

void func_217()
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

int func_218(int iParam0, int iParam1)
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

void func_219(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_220(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

auto func_221(int iParam0, int iParam1, int iParam2)
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

bool func_222(int iParam0)
{
	func_175();
	if (iLocal_115 < 0)
	{
		if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(*iParam0.f_28[1], 1)) < 25f)
		{
			return true;
		}
		switch (*iParam0)
		{
			case 52:
				set_gameplay_entity_hint(*iParam0.f_28[0], 0.1f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				task_look_at_entity(PLAYER::PLAYER_PED_ID(), *iParam0.f_28[0], -1, 0, 2);
				get_is_multiplayer_brief(1);
				_0xD1F8363DFAD03848(-5f);
				_0x5D7B620DAE436138(0.1f);
				_0xC92717EF615B6704(0f);
				_0xF8BDBF3D573049A1(0.3f);
				set_gameplay_hint_fov(40f);
				break;
			
			case 54:
				set_gameplay_entity_hint(*iParam0.f_28[0], 0f, -0.1f, 0.9f, 1, -1, 2500, 2000, 0);
				task_look_at_entity(PLAYER::PLAYER_PED_ID(), *iParam0.f_28[0], -1, 0, 2);
				get_is_multiplayer_brief(1);
				_0xD1F8363DFAD03848(-10f);
				_0x5D7B620DAE436138(-0.9f);
				_0xC92717EF615B6704(0f);
				_0xF8BDBF3D573049A1(0.35f);
				set_gameplay_hint_fov(40f);
				break;
			
			case 55:
				set_gameplay_entity_hint(*iParam0.f_28[1], 0f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				task_look_at_entity(PLAYER::PLAYER_PED_ID(), *iParam0.f_28[1], -1, 0, 2);
				get_is_multiplayer_brief(1);
				_0xD1F8363DFAD03848(-8f);
				_0x5D7B620DAE436138(-0.9f);
				_0xC92717EF615B6704(0.1f);
				_0xF8BDBF3D573049A1(0.35f);
				set_gameplay_hint_fov(40f);
				break;
			
			case 56:
				set_gameplay_entity_hint(*iParam0.f_28[1], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
				task_look_at_entity(PLAYER::PLAYER_PED_ID(), *iParam0.f_28[1], -1, 0, 2);
				get_is_multiplayer_brief(1);
				_0xD1F8363DFAD03848(-5f);
				_0x5D7B620DAE436138(0.15f);
				_0xC92717EF615B6704(0f);
				_0xF8BDBF3D573049A1(0.3f);
				set_gameplay_hint_fov(40f);
				break;
		}
		iLocal_115 = GAMEPLAY::GET_GAME_TIMER() + 2500;
	}
	else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_115)
	{
		iLocal_115 = -1;
		return true;
	}
	return false;
}

bool func_223(auto uParam0)
{
	func_175();
	switch (iLocal_286)
	{
		case 0:
			if (func_112(*uParam0.f_28[0]))
			{
				func_224();
				iLocal_286++;
			}
			break;
		
		case 1:
			if (func_112(*uParam0.f_28[0]))
			{
				if (!func_131())
				{
					if (func_211(&uLocal_121, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						iLocal_287 = create_synchronized_scene(vLocal_108, vLocal_111, 2);
						task_synchronized_scene(*uParam0.f_28[0], iLocal_287, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1000f, 0);
						set_gameplay_entity_hint(*uParam0.f_28[0], 0f, 0f, 0.5f, 1, -1, 2500, 2000, 0);
						task_look_at_entity(PLAYER::PLAYER_PED_ID(), *uParam0.f_28[0], -1, 0, 2);
						get_is_multiplayer_brief(1);
						_0xD1F8363DFAD03848(0f);
						_0x5D7B620DAE436138(0.1f);
						_0xC92717EF615B6704(0f);
						_0xF8BDBF3D573049A1(0.35f);
						set_gameplay_hint_fov(40f);
						iLocal_286++;
					}
				}
			}
			break;
		
		case 2:
			if (func_112(*uParam0.f_28[0]))
			{
				if (!func_131())
				{
					iLocal_286++;
				}
			}
			break;
		
		case 3:
			return true;
			break;
	}
	return false;
}

void func_224()
{
	Global_14578 = 0;
	func_225();
}

void func_225()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

bool func_226(auto uParam0, int iParam1)
{
	switch (*uParam0.f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, true, 0))
				{
					if (func_112(*uParam0.f_28[0]))
					{
						if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(*uParam0.f_28[0], 1), 1) < 3f)
						{
							if (func_231(2))
							{
								if (func_230(*uParam0.f_27))
								{
									func_229(*uParam0.f_27, *uParam0);
									func_336("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return true;
								}
							}
						}
					}
					else
					{
						return false;
					}
				}
				else if (func_112(*uParam0.f_28[0]))
				{
					if (func_228(uParam0))
					{
						if (func_231(2))
						{
							if (func_230(*uParam0.f_27))
							{
								func_229(*uParam0.f_27, *uParam0);
								return true;
							}
						}
					}
				}
				else
				{
					return false;
				}
			}
			else if (*uParam0 == 21)
			{
				if ((((!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, true, 0) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, true, 0)) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, true, 0)) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, true, 0)) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, true, 0))
				{
					if (func_112(*uParam0.f_28[0]))
					{
						if (func_228(uParam0))
						{
							if (func_231(2))
							{
								if (func_230(*uParam0.f_27))
								{
									func_229(*uParam0.f_27, *uParam0);
									return true;
								}
							}
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
			else if (*uParam0 == 22)
			{
				if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, true, 0))
				{
					if (func_112(*uParam0.f_28[0]))
					{
						if (func_228(uParam0))
						{
							if (func_231(2))
							{
								if (func_230(*uParam0.f_27))
								{
									func_229(*uParam0.f_27, *uParam0);
									return true;
								}
							}
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
			else if (func_112(*uParam0.f_28[0]))
			{
				if (func_228(uParam0))
				{
					if (func_231(2))
					{
						if (func_230(*uParam0.f_27))
						{
							func_229(*uParam0.f_27, *uParam0);
							return true;
						}
					}
				}
			}
			else
			{
				return false;
			}
			break;
		
		case 2:
			if (func_112(*uParam0.f_35[0]))
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), *uParam0.f_35[0], 0))
				{
					if (func_231(3))
					{
						func_229(*uParam0.f_27, *uParam0);
						return true;
					}
				}
				else if (iParam1 == 1)
				{
					func_227();
				}
			}
			else
			{
				return false;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_35[0]))
			{
				if (!is_entity_dead(*uParam0.f_35[0], 0))
				{
					if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(*uParam0.f_35[0], 1), 1) < *uParam0.f_15)
					{
						if (func_231(2))
						{
							if (func_230(*uParam0.f_27))
							{
								func_229(*uParam0.f_27, *uParam0);
								return true;
							}
						}
					}
				}
			}
			else
			{
				return false;
			}
			break;
		
		case 3:
			if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), *(uParam0.f_17[0 /*3*/]), 1) < *uParam0.f_15)
			{
				if (func_231(2))
				{
					if (func_230(*uParam0.f_27))
					{
						func_229(*uParam0.f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
		
		case 4:
			if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), *(uParam0.f_17[0 /*3*/]), *(uParam0.f_17[1 /*3*/]), false, true, 0))
			{
				if (func_231(2))
				{
					if (func_230(*uParam0.f_27))
					{
						func_229(*uParam0.f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
		
		case 5:
			if (*uParam0 == 6)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_112(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (is_vehicle_model(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck")) || is_vehicle_model(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck2")))
						{
							if (is_vehicle_attached_to_tow_truck(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), *uParam0.f_35[0]))
							{
								if (func_231(3))
								{
									return true;
								}
							}
						}
						else if ((is_vehicle_model(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob")) || is_vehicle_model(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob2"))) || is_vehicle_model(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob3")))
						{
							if (_is_cargobob_hook_active(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) && is_vehicle_attached_to_cargobob(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), *uParam0.f_35[0]))
							{
								if (func_231(3))
								{
									return true;
								}
							}
						}
					}
				}
			}
			else if (*uParam0 == 10)
			{
				if (get_ped_desired_move_blend_ratio(PLAYER::PLAYER_PED_ID()) >= 2f)
				{
					if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, true, 0))
					{
						if (func_231(2))
						{
							if (func_230(*uParam0.f_27))
							{
								func_229(*uParam0.f_27, *uParam0);
								func_336("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return true;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, true, 0))
				{
					return false;
				}
			}
			else if (*uParam0 == 31)
			{
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, true, 0))
				{
					if (func_231(2))
					{
						if (func_230(1))
						{
							func_229(1, *uParam0);
							func_336("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return true;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, true, 0))
				{
					if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, true, 0))
					{
						if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, true, 0))
						{
							if (func_231(2))
							{
								if (func_230(*uParam0.f_27))
								{
									func_229(*uParam0.f_27, *uParam0);
									func_336("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return true;
								}
							}
						}
					}
				}
			}
			if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), *(uParam0.f_17[0 /*3*/]), *(uParam0.f_17[1 /*3*/]), *uParam0.f_24, 0, true, 0))
			{
				if (*uParam0 == 45)
				{
					if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, true, 0))
					{
						return false;
					}
				}
				if (func_231(2))
				{
					if (func_230(*uParam0.f_27))
					{
						func_229(*uParam0.f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
		
		case 6:
			break;
	}
	return false;
}

void func_227()
{
	func_30(&(Global_93091.f_2311), &Global_93091, 0, 1, 1, 0);
}

bool func_228(auto uParam0)
{
	float fVar0;
	
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && *uParam0.f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(*uParam0.f_28[0], 1), 1) < *uParam0.f_15 + fVar0)
		{
			return true;
		}
	}
	else if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(*uParam0.f_28[0], 1), 1) < *uParam0.f_15)
	{
		return true;
	}
	return false;
}

void func_229(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_115(iParam1))
		{
			return;
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_336("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()) || is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
			{
				func_336("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				set_vehicle_engine_on(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), false, 1, 0);
			}
			func_175();
		}
	}
}

bool func_230(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(get_player_index()))
	{
		if (is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
		else if (iParam0)
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = get_players_last_vehicle();
				if (func_142(iVar0))
				{
					if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()) || is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
					{
						if ((!has_entity_collided_with_anything(iVar0) && !is_entity_in_air(iVar0)) && get_entity_speed(iVar0) < 1f)
						{
							return true;
						}
					}
					else if (!is_entity_in_air(iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_231(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_208();
				if (!func_39(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_203()) || Global_100201) || Global_25122) || func_237()) || func_218(8, -1)) || func_80()) || func_236()) || func_235()) || func_234()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_203()) || Global_25122) || func_237()) || func_218(8, -1)) || func_235()) || func_80()) || func_236()) || func_234()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_203()) || Global_100201) || Global_25122) || func_237()) || func_218(8, -1)) || func_235()) || func_80()) || func_236()) || func_234()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_203()) || Global_100201) || Global_25122) || func_237()) || func_218(8, -1)) || func_80()) || func_236()) || func_234()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_203() || get_player_wanted_level(player_id()) > 0) || func_218(8, -1)) || func_234()) || func_233()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_218(8, -1) || func_80()) || func_236()) || func_233()) || func_232())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_203()) || Global_25122) || func_237()) || func_218(8, -1)) || func_236()) || func_235()) || func_234()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_203()) || func_236()) || Global_100201) || Global_25122) || func_237()) || Global_36839) || func_218(8, -1)) || func_235()) || func_233()) || func_234()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_203()) || Global_100201) || Global_25122) || func_237()) || func_218(8, -1)) || func_235()) || func_233()) || func_80()) || func_236()) || func_234())
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

auto func_232()
{
	return Global_91317.f_1;
}

int func_233()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_234()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_235()
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

int func_236()
{
	return Global_91330.f_297 > 0;
}

auto func_237()
{
	return Global_1315913;
}

void func_238(auto uParam0, auto uParam1)
{
	if (_0xB56BBBCC2955D9CB())
	{
		if (func_112(PLAYER::PLAYER_PED_ID()))
		{
			_0x2A56C06EBEF2B0D9("Trevor", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
		}
		switch (*uParam0)
		{
			case 52:
				if (func_112(*uParam0.f_28[0]))
				{
					*uParam1[0] = "TriggerHappy_WhiteTrash";
					_0x2A56C06EBEF2B0D9(*uParam1[0], *uParam0.f_28[0], false);
				}
				if (func_112(*uParam0.f_28[1]))
				{
					*uParam1[1] = "Nervous_WhiteTrash";
					_0x2A56C06EBEF2B0D9(*uParam1[1], *uParam0.f_28[1], false);
				}
				break;
			
			case 53:
				if (func_112(*uParam0.f_28[0]))
				{
					*uParam1[0] = "Rampage_Hipster";
					_0x2A56C06EBEF2B0D9(*uParam1[0], *uParam0.f_28[0], false);
				}
				break;
			
			case 54:
				if (func_112(*uParam0.f_28[0]))
				{
					*uParam1[0] = "Armed_Mexican_Goon";
					_0x2A56C06EBEF2B0D9(*uParam1[0], *uParam0.f_28[0], false);
					set_cutscene_ped_component_variation(*uParam1[0], 8, 1, false, false);
				}
				if (func_112(*uParam0.f_28[1]))
				{
					*uParam1[1] = "Mexican_Goon";
					_0x2A56C06EBEF2B0D9(*uParam1[1], *uParam0.f_28[1], false);
				}
				break;
			
			case 55:
				if (func_112(*uParam0.f_28[0]))
				{
					*uParam1[0] = "Thug";
					_0x2A56C06EBEF2B0D9(*uParam1[0], *uParam0.f_28[0], false);
					set_cutscene_ped_component_variation(*uParam1[0], 10, 0, true, false);
				}
				if (func_112(*uParam0.f_28[1]))
				{
					*uParam1[1] = "Armed_Thug";
					_0x2A56C06EBEF2B0D9(*uParam1[1], *uParam0.f_28[1], false);
					set_cutscene_ped_component_variation(*uParam1[1], 10, 1, false, false);
				}
				break;
			
			case 56:
				if (func_112(*uParam0.f_28[0]))
				{
					*uParam1[0] = "Army_Guy_Right";
					_0x2A56C06EBEF2B0D9(*uParam1[0], *uParam0.f_28[0], false);
				}
				if (func_112(*uParam0.f_28[1]))
				{
					*uParam1[1] = "Army_Guy_Left";
					_0x2A56C06EBEF2B0D9(*uParam1[1], *uParam0.f_28[1], false);
				}
				break;
			}
	}
}

void func_239(int iParam0, char* sParam1, Vector3 vParam2)
{
	if (is_player_playing(player_id()))
	{
		if (!is_string_null_or_empty(sParam1))
		{
			if (Global_35711 == 17)
			{
				if (*iParam0 != -1)
				{
					func_245(iParam0);
				}
			}
			else if (func_244())
			{
				if (*iParam0 != -1)
				{
					func_245(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_243(PLAYER::PLAYER_PED_ID(), vParam2, 1) <= 100f)
				{
					func_242(iParam0, 1);
				}
			}
			else
			{
				switch (func_241(*iParam0))
				{
					case 1:
						if (are_strings_equal(sParam1, "JOSH_1_INT_CONCAT"))
						{
							_request_cutscene_2(sParam1, 14, 8);
						}
						else
						{
							request_cutscene(sParam1, 8);
						}
						_0xF8155A7F03DDFC8E(2);
						func_240(*iParam0, 1);
						break;
					
					case 2:
						stop_cutscene(0);
						remove_cutscene();
						_0xF8155A7F03DDFC8E(0);
						func_240(*iParam0, 0);
						break;
				}
				if (func_243(PLAYER::PLAYER_PED_ID(), vParam2, 1) > 120f)
				{
					func_245(iParam0);
				}
			}
		}
	}
}

void func_240(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (Global_69485 == iParam0)
		{
			Global_69486 = iParam0;
		}
	}
	else if (Global_69486 == iParam0)
	{
		Global_69486 = -1;
	}
}

int func_241(int iParam0)
{
	if (Global_69485 == iParam0)
	{
		if (Global_69486 == -1)
		{
			if (Global_69484 < GAMEPLAY::GET_FRAME_COUNT())
			{
				return 1;
			}
		}
	}
	else if (Global_69486 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_242(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_69482 < 5)
	{
		Global_69471[Global_69482 /*2*/] = 0;
		Global_69471[Global_69482 /*2*/].f_1 = iParam1;
		iVar0 = false;
		while (!iVar0)
		{
			iVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_69482)
			{
				if (Global_69471[iVar1 /*2*/] == Global_69471[Global_69482 /*2*/])
				{
					Global_69471[Global_69482 /*2*/]++;
					iVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_69471[Global_69482 /*2*/];
		Global_69482++;
		Global_69483 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

auto func_243(int iParam0, Vector3 vParam1, int iParam2)
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

auto func_244()
{
	return Global_88920;
}

void func_245(int iParam0)
{
	stop_cutscene(0);
	remove_cutscene();
	func_246(iParam0);
}

void func_246(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_69486 == *iParam0)
	{
		func_240(*iParam0, 0);
	}
	if (Global_69485 == *iParam0)
	{
		Global_69485 = -1;
	}
	iVar0 = false;
	iVar1 = 0;
	while (!iVar0 && iVar1 < Global_69482)
	{
		if (Global_69471[iVar1 /*2*/] == *iParam0)
		{
			iVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!iVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= Global_69482 - 2)
	{
		Global_69471[iVar2 /*2*/] = Global_69471[iVar2 + 1 /*2*/];
		Global_69471[iVar2 /*2*/].f_1 = Global_69471[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_69471[Global_69482 - 1 /*2*/] = -1;
	Global_69471[Global_69482 - 1 /*2*/].f_1 = 3;
	Global_69482--;
	Global_69483 = 1;
	Global_69484 = GAMEPLAY::GET_FRAME_COUNT();
	*iParam0 = -1;
}

void func_247(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_170();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_100241[iParam0 /*10*/].f_1 = 1;
}

auto func_248(int iParam0)
{
	return Global_100241[iParam0 /*10*/].f_1;
}

void func_249(auto uParam0)
{
	if (*uParam0 == 52)
	{
		func_336(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_41[3]))
		{
			freeze_entity_position(*uParam0.f_41[3], true);
			set_object_as_no_longer_needed(uParam0.f_41[3]);
			*uParam0.f_41[3] = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_41[4]))
		{
			freeze_entity_position(*uParam0.f_41[4], true);
			set_object_as_no_longer_needed(uParam0.f_41[4]);
			*uParam0.f_41[4] = 0;
		}
	}
}

bool func_250(auto uParam0)
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0)
		{
			return true;
		}
	}
	return false;
}

void func_251(auto uParam0)
{
	switch (*uParam0)
	{
		case 52:
			func_314(uParam0);
			iLocal_301 = func_313();
			break;
		
		case 53:
			func_307(uParam0);
			iLocal_301 = func_305();
			break;
		
		case 54:
			func_304(uParam0);
			break;
		
		case 55:
			func_303(uParam0);
			iLocal_301 = func_302();
			break;
		
		case 56:
			func_252(uParam0);
			break;
		
		default:
			break;
	}
	if (iLocal_301 != 0)
	{
	}
	*uParam0.f_16 = 0;
	if (*uParam0 == 53)
	{
		*uParam0.f_15 = 15f;
	}
	else
	{
		*uParam0.f_15 = 12f;
	}
	*uParam0.f_25 = 1;
}

void func_252(auto uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "misstvrram_5";
	iVar1 = joaat("s_m_y_marine_03");
	iVar2 = joaat("crusader");
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	request_anim_dict(sVar0);
	request_weapon_asset(joaat("weapon_grenadelauncher"), 31, 0);
	while ((!STREAMING::HAS_MODEL_LOADED(iVar1) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !has_anim_dict_loaded(sVar0))
	{
		wait(0);
	}
	while (!func_300(uParam0.f_28[0], iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		wait(0);
	}
	func_299(uParam0.f_28[0]);
	set_ped_name_debug(*uParam0.f_28[0], "RAMP:PED 0");
	task_play_anim(*uParam0.f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	set_ped_component_variation(*uParam0.f_28[0], false, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], true, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 2, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 3, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 4, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 5, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 6, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 7, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 8, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 9, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 10, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 11, 0, false, 0);
	clear_ped_prop(*uParam0.f_28[0], false);
	clear_ped_prop(*uParam0.f_28[0], true);
	clear_ped_prop(*uParam0.f_28[0], 2);
	clear_ped_prop(*uParam0.f_28[0], 3);
	clear_ped_prop(*uParam0.f_28[0], 4);
	clear_ped_prop(*uParam0.f_28[0], 5);
	clear_ped_prop(*uParam0.f_28[0], 6);
	clear_ped_prop(*uParam0.f_28[0], 7);
	clear_ped_prop(*uParam0.f_28[0], 8);
	while (!func_300(uParam0.f_28[1], iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		wait(0);
	}
	func_299(uParam0.f_28[1]);
	set_ped_component_variation(*uParam0.f_28[1], false, 1, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], true, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 2, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 3, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 4, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 5, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 6, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 7, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 8, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 9, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 10, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 11, 0, false, 0);
	clear_ped_prop(*uParam0.f_28[1], false);
	clear_ped_prop(*uParam0.f_28[1], true);
	clear_ped_prop(*uParam0.f_28[1], 2);
	clear_ped_prop(*uParam0.f_28[1], 3);
	clear_ped_prop(*uParam0.f_28[1], 4);
	clear_ped_prop(*uParam0.f_28[1], 5);
	clear_ped_prop(*uParam0.f_28[1], 6);
	clear_ped_prop(*uParam0.f_28[1], 7);
	clear_ped_prop(*uParam0.f_28[1], 8);
	set_ped_name_debug(*uParam0.f_28[1], "RAMP:PED 1");
	task_play_anim(*uParam0.f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_298(uParam0.f_35[0], iVar2, -1298.16f, 2504.153f, 21.062f, 165.48f))
	{
		wait(0);
	}
	set_vehicle_on_ground_properly(*uParam0.f_35[0]);
	func_297(uParam0.f_35[0]);
	set_vehicle_extra(*uParam0.f_35[0], 1, false);
	set_vehicle_extra(*uParam0.f_35[0], 1, true);
	freeze_entity_position(*uParam0.f_35[0], true);
	if (!func_253(uParam0.f_41[0], joaat("weapon_grenadelauncher"), -1297.84f, 2505.91f, 19.34f, func_296(-0.5f)))
	{
	}
	else
	{
		set_entity_collision(*uParam0.f_41[0], false, 0);
		set_entity_coords(*uParam0.f_41[0], -1297.84f, 2505.91f, 19.34f, 1, false, 0, 1);
		set_entity_heading(*uParam0.f_41[0], func_296(-0.5f));
		freeze_entity_position(*uParam0.f_41[0], true);
	}
	StringCopy(uParam0.f_9, "TRVRAM_5_CON", 24);
	*uParam0.f_27 = 0;
	set_model_as_no_longer_needed(iVar1);
	set_model_as_no_longer_needed(iVar2);
}

bool func_253(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3)
{
	int iVar0;
	auto uVar1;
	int iVar7;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		delete_object(iParam0);
		*iParam0 = 0;
	}
	iVar0 = get_weapontype_model(iParam1);
	STREAMING::REQUEST_MODEL(iVar0);
	iVar7 = GAMEPLAY::GET_GAME_TIMER() + 10000;
	while (GAMEPLAY::GET_GAME_TIMER() < iVar7)
	{
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			*iParam0 = create_weapon_object(iParam1, -1, vParam2, 1, 1f, false, 0, 1);
			set_model_as_no_longer_needed(iVar0);
			if (func_295(&uVar1, iParam1, 962500902))
			{
				if (has_weapon_got_weapon_component(*iParam0, func_254(&uVar1, iParam1, 962500902, 0)))
				{
					remove_weapon_component_from_weapon_object(*iParam0, func_254(&uVar1, iParam1, 962500902, 0));
				}
				else if (has_weapon_got_weapon_component(*iParam0, func_254(&uVar1, iParam1, 962500902, 1)))
				{
					remove_weapon_component_from_weapon_object(*iParam0, func_254(&uVar1, iParam1, 962500902, 1));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				set_entity_coords(*iParam0, vParam2, 1, false, 0, 1);
				set_entity_heading(*iParam0, fParam5);
				return true;
			}
		}
		wait(0);
	}
	set_model_as_no_longer_needed(iVar0);
	return false;
}

int func_254(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar6;
	int iVar7;
	
	func_294(&Var0, *uParam0, *uParam0.f_4, *uParam0.f_5, *uParam0.f_1);
	iVar7 = 0;
	while (func_255(&Var0, iParam1, iVar6, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			if (iParam3 == iVar7)
			{
				return Var0;
			}
			iVar7++;
		}
		iVar6++;
	}
	return 0;
}

int func_255(auto uParam0, int iParam1, int iParam2, int iParam3)
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
	auto uVar12;
	struct<4> Var51;
	
	func_294(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_pistol_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_pistol_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_pi_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_pi_supp_02"), 1863181664, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_pistol_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_combatpistol_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_combatpistol_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_pi_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_pi_supp"), 1863181664, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_combatpistol_varmod_lowrider"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_appistol_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_appistol_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_pi_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_pi_supp"), 1863181664, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_appistol_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_microsmg_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_microsmg_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_pi_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_scope_macro"), 196630833, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
				
				case 5:
					func_294(uParam0, joaat("component_microsmg_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_smg_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_smg_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_smg_clip_03"), -571619404, 3, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_at_scope_macro_02"), 196630833, 1, 0);
					break;
				
				case 5:
					func_294(uParam0, joaat("component_at_pi_supp"), 1863181664, 1, 0);
					break;
				
				case 6:
					func_294(uParam0, joaat("component_smg_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_assaultrifle_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_assaultrifle_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_assaultrifle_clip_03"), -571619404, 3, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 5:
					func_294(uParam0, joaat("component_at_scope_macro"), 196630833, 1, 0);
					break;
				
				case 6:
					func_294(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
				
				case 7:
					func_294(uParam0, joaat("component_assaultrifle_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_carbinerifle_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_carbinerifle_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_carbinerifle_clip_03"), -571619404, 3, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_railcover_01"), -1843287667, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 5:
					func_294(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 6:
					func_294(uParam0, joaat("component_at_scope_medium"), 196630833, 1, 0);
					break;
				
				case 7:
					func_294(uParam0, joaat("component_at_ar_supp"), 1863181664, 1, 0);
					break;
				
				case 8:
					func_294(uParam0, joaat("component_carbinerifle_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_advancedrifle_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_advancedrifle_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_scope_small"), 196630833, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_at_ar_supp"), 1863181664, 1, 0);
					break;
				
				case 5:
					func_294(uParam0, joaat("component_advancedrifle_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_mg_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_mg_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_scope_small_02"), 196630833, 1, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_mg_varmod_lowrider"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_combatmg_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_combatmg_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_scope_medium"), 196630833, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_combatmg_varmod_lowrider"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_at_sr_supp"), 1863181664, 1, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_assaultshotgun_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_assaultshotgun_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_at_ar_supp"), 1863181664, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_sniperrifle_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_scope_large"), 196630833, 1, 1);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_scope_max"), 196630833, 2, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_sniperrifle_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_heavysniper_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_at_scope_large"), 196630833, 1, 1);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_scope_max"), 196630833, 2, 0);
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_scope_small"), 196630833, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_minigun_clip_01"), -571619404, 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_assaultsmg_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_assaultsmg_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_scope_macro"), 196630833, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
				
				case 5:
					func_294(uParam0, joaat("component_assaultsmg_varmod_lowrider"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_at_ar_afgrip"), -1322016827, 1, 0);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_at_ar_flsh"), 679107254, 1, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_pistol50_clip_01"), -571619404, 1, 1);
					break;
				
				case 1:
					func_294(uParam0, joaat("component_pistol50_clip_02"), -571619404, 2, 0);
					break;
				
				case 2:
					func_294(uParam0, joaat("component_at_pi_flsh"), 679107254, 1, 0);
					break;
				
				case 3:
					func_294(uParam0, joaat("component_at_ar_supp_02"), 1863181664, 1, 0);
					break;
				
				case 4:
					func_294(uParam0, joaat("component_pistol50_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_294(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), 962500902, 1, 0);
					break;
			}
			break;
		
		default:
			iVar10 = func_63(iParam1, &uVar12);
			if (iVar10 != -1)
			{
				iVar11 = false;
				while (iVar11 < get_num_dlc_weapon_components(iVar10))
				{
					if (get_dlc_weapon_component_data(iVar10, iVar11, &Var51))
					{
						if (Var51 == -571619404 || Var51 == 291640902)
						{
							iVar1++;
						}
						else if (Var51 == 679107254 || Var51 == -1572840598)
						{
							iVar2++;
						}
						else if (Var51 == 196630833 || Var51 == 1684637069)
						{
							iVar3++;
						}
						else if (Var51 == -1843287667 || Var51 == 497110245)
						{
							iVar4++;
						}
						else if (Var51 == -1322016827 || Var51 == -546751811)
						{
							iVar5++;
						}
						else if (Var51 == 1863181664 || Var51 == 945598191)
						{
							iVar6++;
						}
						else if (Var51 == 1731751835)
						{
							iVar7++;
						}
						else if (Var51 == 962500902)
						{
							iVar8++;
						}
						else
						{
							iVar9++;
						}
						if (iVar11 == iParam2)
						{
							if (Var51 == -571619404 || Var51 == 291640902)
							{
								iVar0 = iVar1;
							}
							else if (Var51 == 679107254 || Var51 == -1572840598)
							{
								iVar0 = iVar2;
							}
							else if (Var51 == 196630833 || Var51 == 1684637069)
							{
								iVar0 = iVar3;
							}
							else if (Var51 == -1843287667 || Var51 == 497110245)
							{
								iVar0 = iVar4;
							}
							else if (Var51 == -1322016827 || Var51 == -546751811)
							{
								iVar0 = iVar5;
							}
							else if (Var51 == 1863181664 || Var51 == 945598191)
							{
								iVar0 = iVar6;
							}
							else if (Var51 == 1731751835)
							{
								iVar0 = iVar7;
							}
							else if (Var51 == 962500902)
							{
								iVar0 = iVar8;
							}
							else
							{
								iVar0 = iVar9;
							}
							func_294(uParam0, Var51.f_3, Var51, iVar0, Var51.f_1);
						}
					}
					iVar11++;
				}
			}
			break;
	}
	if (iParam3)
	{
		*uParam0.f_2 = func_256(iParam1, *uParam0);
	}
	return *uParam0.f_4 != 989182658;
}

int func_256(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	struct<6> Var43;
	int iVar65;
	int iVar66;
	auto uVar67;
	struct<6> Var106;
	char* sVar128;
	char[16] cVar144;
	float fVar148;
	
	iVar0 = false;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = 14500;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = 15600;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = 14000;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = 16900;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = 17600;
						break;
				}
				if (func_293() && (func_292() || func_291()))
				{
					iVar0 = false;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (func_293() && (func_292() || func_291()))
				{
					iVar0 = false;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (func_293() && (func_292() || func_291()))
				{
					iVar0 = false;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = false;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case 371102273:
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = 4900;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = 5600;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = 5500;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = 5200;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = 4600;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = 4700;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = 4800;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = 4300;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = 4000;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = 9950;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2575;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = 16600;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 29;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = 9150;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = 13900;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = 9975;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2525;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 11550;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = 18000;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_63(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = false;
					while (iVar3 < get_num_dlc_weapon_components(iVar2))
					{
						if (get_dlc_weapon_component_data(iVar2, iVar3, &Var43))
						{
							if (Var43.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (!func_290(iParam1))
								{
									Var43.f_5 = -1;
								}
								if (Var43.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var43.f_5;
								}
								if (iParam0 == joaat("weapon_hammer"))
								{
									if (func_293() && (func_292() || func_291()))
									{
										iVar0 = false;
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2880);
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4330);
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4331);
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_8528;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4408);
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 9250;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2881);
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4332);
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12100;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4333);
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_262145.f_9895;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4403);
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2883);
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4334);
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4335);
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_8527;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4397);
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2884);
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4338);
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4340);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4339);
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_8531;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4407);
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2885);
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = Global_262145.f_13494;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4341);
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4343);
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4342);
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_8530;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4412);
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2887);
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = Global_262145.f_13489;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4351);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4348);
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4350);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4349);
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8524;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4398);
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2888);
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = Global_262145.f_13488;
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4359);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4356);
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4358);
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4357);
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_8526;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4401);
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2890);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4361);
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4363);
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4362);
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8525;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4396);
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2891);
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_262145.f_9896;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4406);
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2892);
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4386);
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4387);
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_262145.f_9897;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4402);
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4368);
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4369);
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_262145.f_9892;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4410);
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2894);
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4372);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4373);
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4374);
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4375);
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4376);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4377);
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8533;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4413);
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4378);
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4379);
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4388);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4384);
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4385);
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2886);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4344);
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4347);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4345);
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_262145.f_9893;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4346);
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_5006;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_5584;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_262145.f_9894;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_5589;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = Global_262145.f_13491;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5592;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_5588;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_5586;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5591;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_262145.f_9898;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_5590;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_5594;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_5587;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_5614;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_5597;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5600;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_5595;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_5596;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5598;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_262145.f_9899;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_6070;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_6071;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_6725;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						iVar0 = Global_262145.f_13495;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6726;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_6727;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6728;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_6731;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6732;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_6734;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6735;
						break;
					
					case 371102273:
						iVar0 = Global_262145.f_6736;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_12052);
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4370);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4371);
						break;
				}
				if (func_293() && (func_292() || func_291()))
				{
					iVar0 = false;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_2882);
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4336);
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4337);
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_8529;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4409);
						break;
				}
				if (func_293() && (func_292() || func_291()))
				{
					iVar0 = false;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_8532;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4411);
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_262145.f_8844;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4416);
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_262145.f_8845;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4417);
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_262145.f_8846;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4418);
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_262145.f_8847;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4419);
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_262145.f_8848;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4420);
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_262145.f_8849;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4421);
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_262145.f_8850;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4422);
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_262145.f_8851;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4423);
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_262145.f_8852;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4424);
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = Global_262145.f_8869;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4426);
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = Global_262145.f_13493;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_8870;
						iVar0 = floor(to_float(iVar0) * Global_262145.f_4427);
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						iVar0 = false;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						iVar0 = Global_262145.f_10740;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_262145.f_10741;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						iVar0 = Global_262145.f_10798;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_262145.f_10739;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						iVar0 = Global_262145.f_11982;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						iVar0 = Global_262145.f_13490;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						iVar0 = false;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						iVar0 = false;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						iVar0 = 9950;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						iVar0 = Global_262145.f_13492;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 2400;
						break;
				}
				break;
			
			default:
				iVar65 = func_63(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = false;
					while (iVar66 < get_num_dlc_weapon_components(iVar65))
					{
						if (get_dlc_weapon_component_data(iVar65, iVar66, &Var106))
						{
							if (Var106.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var106.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var106.f_5;
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_288())
	{
		StringCopy(&cVar144, func_286(iParam1, iParam0), 16);
		func_283(&sVar128, cVar144, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_284(iParam0), -1, -1);
		if (_0xBD4D7EAF8A30F637(&sVar128))
		{
			iVar0 = _network_shop_get_price(get_hash_key(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_257(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_257(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_288())
	{
		return 1f;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = floor(to_float(*iParam1) * fParam2);
	}
	if (!Global_69489)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_280(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_101 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = floor(to_float(*iParam1) * Global_262145.f_76);
			fVar1 += to_float(Global_262145.f_119) / 100f;
		}
	}
	if (iLocal_101 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = floor(to_float(*iParam1) * Global_262145.f_76);
			if (func_258())
			{
				fVar1 += to_float(Global_262145.f_119) / 100f;
				iLocal_101 = 1;
			}
			else
			{
				iLocal_101 = -1;
			}
		}
	}
	fVar0 = 1f - fVar1;
	*iParam1 = floor(to_float(*iParam1) * fVar0);
	return fVar0;
}

bool func_258()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return false;
	}
	if (func_277())
	{
		if (func_262())
		{
			iVar0 = func_260();
			iVar1 = func_259();
			fVar2 = to_float(iVar1) / to_float(iVar0) * 100f;
			if (fVar2 > IntToFloat(Global_262145.f_118) && iVar0 >= 8)
			{
				return true;
			}
		}
	}
	return false;
}

int func_259()
{
	int iVar0;
	
	iVar0 += Global_1347647;
	iVar0 += Global_1347650;
	return iVar0;
}

int func_260()
{
	int iVar0;
	
	iVar0 += Global_1347648;
	iVar0 += Global_1347649;
	iVar0 += Global_1347647;
	iVar0 += Global_1347650;
	iVar0 += Global_1347652;
	iVar0 += Global_1347651;
	iVar0 += func_261(joaat("mpply_exploits"));
	iVar0 += func_261(joaat("mpply_vc_annoyingme"));
	iVar0 += func_261(joaat("mpply_vc_hate"));
	iVar0 += func_261(joaat("mpply_bad_crew_name"));
	iVar0 += func_261(joaat("mpply_bad_crew_motto"));
	iVar0 += func_261(joaat("mpply_bad_crew_status"));
	iVar0 += func_261(joaat("mpply_bad_crew_emblem"));
	iVar0 += func_261(joaat("mpply_playermade_title"));
	iVar0 += func_261(joaat("mpply_playermade_desc"));
	return iVar0;
}

int func_261(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_262()
{
	struct<7> Var0;
	struct<7> Var7;
	
	get_posix_time(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = {func_276(joaat("mpply_started_mp"))};
	if (func_263(Var7, Var0, 7))
	{
		return true;
	}
	return false;
}

bool func_263(struct<7> Param0, struct<7> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_274(Param7);
	iVar1 = func_270(Param0, iParam14);
	if (iVar1 == -15)
	{
		return false;
	}
	if (func_264(iVar0, iVar1) == 1)
	{
		return true;
	}
	return false;
}

bool func_264(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_269(iParam1) || !func_269(iParam0))
	{
		return true;
	}
	iVar0 = func_86(iParam0);
	iVar1 = func_86(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_88(iParam0);
	iVar1 = func_88(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_268(iParam0);
	iVar1 = func_268(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_267(iParam0);
	iVar1 = func_267(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_266(iParam0);
	iVar1 = func_266(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_265(iParam0);
	iVar1 = func_265(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

int func_265(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_266(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_267(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_268(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

bool func_269(int iParam0)
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
	iVar0 = func_265(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_266(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_267(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_86(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_88(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_268(iParam0);
	if (iVar5 < 1 || iVar5 > func_85(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

auto func_270(struct<7> Param0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	
	if (func_273(Param0) == 0)
	{
		uVar0 = func_274(Param0);
		uVar1 = uVar0;
		func_271(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_271(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_86(*uParam0);
	iVar1 = func_88(*uParam0);
	iVar2 = func_268(*uParam0);
	iVar3 = func_267(*uParam0);
	iVar4 = func_266(*uParam0);
	iVar5 = func_265(*uParam0);
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
	iVar6 = func_85(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_85(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_272(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_272(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_91(uParam0, iParam1);
	func_90(uParam0, iParam2);
	func_89(uParam0, iParam3);
	func_83(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_82(uParam0, iParam6);
}

bool func_273(struct<7> Param0)
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return true;
	}
	return false;
}

auto func_274(struct<6> Param0, auto uParam1)
{
	auto uVar0;
	
	if (Param0 > 0)
	{
		func_82(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_83(&uVar0, func_275(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_84(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_89(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_90(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_91(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_275(int iParam0)
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
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
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_276(int iParam0)
{
	auto uVar0;
	struct<7> Var1;
	struct<7> Var8;
	
	uVar0 = iParam0;
	if (stat_get_date(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

bool func_277()
{
	if (func_279() && func_278(0))
	{
		return true;
	}
	return false;
}

auto func_278(int iParam0)
{
	return Global_1312369[iParam0];
}

auto func_279()
{
	return func_278(func_52() + 1);
}

int func_280(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var[] uVar3 = new var[6];
	int iVar10;
	
	iVar0 = func_208();
	if (iParam0 == 0 || !func_39(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_281(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		uVar3[0] = func_281(1, iVar0);
		uVar3[1] = func_281(3, iVar0);
		uVar3[2] = func_281(2, iVar0);
		uVar3[3] = func_281(4, iVar0);
		uVar3[4] = func_281(5, iVar0);
		uVar3[5] = func_281(0, iVar0);
		iVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (uVar3[iVar2] < 3)
			{
				iVar10 = true;
			}
			iVar2++;
		}
		if (!iVar10)
		{
			return 1;
		}
		iVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (uVar3[iVar2] < 2)
			{
				iVar10 = true;
			}
			iVar2++;
		}
		if (!iVar10)
		{
			return 2;
		}
		iVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (uVar3[iVar2] < 1)
			{
				iVar10 = true;
			}
			iVar2++;
		}
		if (!iVar10)
		{
			return 3;
		}
	}
	return -1;
}

int func_281(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_282(iVar0, iParam1);
	if (func_282(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_282(iVar1, iParam1);
	}
	if (func_282(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_282(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_282(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_282(iVar3, iParam1);
		}
	}
	return iVar4;
}

auto func_282(int iParam0, auto uParam1)
{
	return Global_101154.f_17837[uParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

void func_283(char* sParam0, struct<4> Param1, int iParam2, int iParam3, int iParam4, auto uParam5, int iParam6, int iParam7)
{
	switch (get_hash_key(&Param1))
	{
		case 64715401:
		case -2016195117:
			StringCopy(&Param1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case -1253005183:
			StringCopy(&Param1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case -1119195824:
			StringCopy(&Param1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case -672224483:
			StringCopy(&Param1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case 600999375:
			StringCopy(&Param1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case -859056265:
			StringCopy(&Param1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case 82051787:
			StringCopy(&Param1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &Param1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, uParam8, 64);
			break;
		
		case 1:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &Param1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, uParam8, 64);
			break;
		
		case 2:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &Param1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, uParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &Param1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, uParam8, 64);
			break;
		
		case 4:
			if (iParam5 == Global_68041)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &Param1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, uParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&Param1, get_display_name_from_vehicle_model(iParam5), 16);
				if (is_string_null_or_empty(&Param1) || get_hash_key(&Param1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &Param1, 64);
				switch (iParam5)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
			}
			else if (iParam7 == 40)
			{
				StringCopy(&Param1, get_display_name_from_vehicle_model(iParam5), 16);
				if (is_string_null_or_empty(&Param1))
				{
					return;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &Param1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, uParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &Param1, 64);
				switch (iParam5)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, uParam8, 64);
			}
			break;
	}
}

int func_284(int iParam0)
{
	return func_285(iParam0);
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
	}
	return 0;
}

char* func_286(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<7> Var41;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_INVALID";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case 371102273:
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_63(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = false;
					while (iVar1 < get_num_dlc_weapon_components(iVar0))
					{
						if (get_dlc_weapon_component_data(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_287(&(Var41.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

auto func_287(auto uParam0)
{
	return uParam0;
}

bool func_288()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_289())
	{
		return true;
	}
	return false;
}

bool func_289()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	return false;
}

bool func_290(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return false;
			}
		
		default:
	}
	return true;
}

bool func_291()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (GAMEPLAY::IS_BIT_SET(Global_25, 6))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_25, 2) || GAMEPLAY::IS_BIT_SET(Global_25, 4))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (GAMEPLAY::IS_BIT_SET(iVar0, 6))
		{
			if (GAMEPLAY::IS_BIT_SET(iVar0, 2) || GAMEPLAY::IS_BIT_SET(iVar0, 4))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (stat_slot_is_loaded(0))
	{
		if (Global_138275.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (GAMEPLAY::IS_BIT_SET(iVar1, 8))
				{
					return true;
				}
			}
		}
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		iVar3 = get_profile_setting(866);
		if (GAMEPLAY::IS_BIT_SET(iVar3, 2) || GAMEPLAY::IS_BIT_SET(iVar3, 4))
		{
			return true;
		}
	}
	return false;
}

bool func_292()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (GAMEPLAY::IS_BIT_SET(Global_25, 5))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_25, true) || GAMEPLAY::IS_BIT_SET(Global_25, 3))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			if (GAMEPLAY::IS_BIT_SET(iVar0, true) || GAMEPLAY::IS_BIT_SET(iVar0, 3))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (stat_slot_is_loaded(0))
	{
		if (Global_138275.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (GAMEPLAY::IS_BIT_SET(iVar1, 5))
				{
					return true;
				}
			}
		}
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		iVar3 = get_profile_setting(866);
		if (GAMEPLAY::IS_BIT_SET(iVar3, true) || GAMEPLAY::IS_BIT_SET(iVar3, 3))
		{
			return true;
		}
	}
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, true);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, 3);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, 5);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, true);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 3);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar4 = get_profile_setting(866);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, true);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, 3);
					_0xDAC073C7901F9E15(iVar4);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_293()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
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
		if (GAMEPLAY::IS_BIT_SET(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

void func_294(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	*uParam0.f_4 = iParam2;
	*uParam0.f_5 = iParam3;
	*uParam0.f_1 = iParam4;
}

bool func_295(auto uParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar6;
	
	func_294(&Var0, *uParam0, *uParam0.f_4, *uParam0.f_5, *uParam0.f_1);
	while (func_255(&Var0, iParam1, iVar6, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			return true;
		}
		iVar6++;
	}
	return false;
}

float func_296(float fParam0)
{
	return fParam0 * 57.29578f;
}

bool func_297(auto uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	set_entity_only_damaged_by_player(*uParam0, true);
	return true;
}

bool func_298(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		delete_vehicle(iParam0);
		*iParam0 = 0;
	}
	*iParam0 = create_vehicle(iParam1, vParam2, fParam5, 1, true);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	return true;
}

bool func_299(auto uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	set_ped_money(*uParam0, false);
	set_ped_name_debug(*uParam0, "RAMP:SCENE PED");
	set_ped_can_be_targetted(*uParam0, false);
	set_blocking_of_non_temporary_events(*uParam0, true);
	return true;
}

bool func_300(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		delete_ped(iParam0);
		*iParam0 = 0;
	}
	*iParam0 = PED::CREATE_PED(26, iParam1, vParam2, fParam5, 1, true);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (iParam6)
	{
		func_301(*iParam0, vParam2);
		set_entity_heading(*iParam0, fParam5);
	}
	set_ped_money(*iParam0, false);
	set_ped_name_debug(*iParam0, "RAMP:SCENE PED");
	set_ped_can_be_targetted(*iParam0, false);
	set_blocking_of_non_temporary_events(*iParam0, true);
	return true;
}

Vector3 func_301(int iParam0, Vector3 vParam1)
{
	auto uVar0;
	
	vParam1.z += 0.15f;
	if (get_ground_z_for_3d_coord(vParam1, &uVar0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_206(iParam0))
	{
		set_entity_coords(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

int func_302()
{
	return add_scenario_blocking_area(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, 0, 1, 1, 1);
}

void func_303(auto uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_gang");
	sVar1 = "misstrvram_4";
	STREAMING::REQUEST_MODEL(iVar0);
	request_anim_dict(sVar1);
	request_weapon_asset(joaat("weapon_assaultrifle"), 31, 0);
	while (!STREAMING::HAS_MODEL_LOADED(iVar0) || !has_anim_dict_loaded(sVar1))
	{
		wait(0);
	}
	while (!func_300(uParam0.f_28[0], iVar0, -161.37f, -1669.63f, 33.1f, func_296(1.03f), 1))
	{
		wait(0);
	}
	func_299(uParam0.f_28[0]);
	set_ped_name_debug(*uParam0.f_28[0], "RP0_NOGUN");
	set_ped_default_component_variation(*uParam0.f_28[0]);
	set_ped_component_variation(*uParam0.f_28[0], false, 1, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], true, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 2, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 3, 0, true, 0);
	set_ped_component_variation(*uParam0.f_28[0], 4, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 5, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 6, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 7, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 8, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 9, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 10, 0, true, 0);
	set_ped_component_variation(*uParam0.f_28[0], 11, 0, false, 0);
	task_play_anim(*uParam0.f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_300(uParam0.f_28[1], iVar0, -161.93f, -1670.39f, 33.14f, func_296(0.2f), 1))
	{
		wait(0);
	}
	func_299(uParam0.f_28[1]);
	set_ped_name_debug(*uParam0.f_28[1], "RP1_GUN");
	set_ped_default_component_variation(*uParam0.f_28[1]);
	set_ped_component_variation(*uParam0.f_28[1], false, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], true, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 2, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 3, 1, true, 0);
	set_ped_component_variation(*uParam0.f_28[1], 4, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 5, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 6, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 7, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 8, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 9, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 10, 1, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 11, 0, false, 0);
	give_weapon_to_ped(*uParam0.f_28[1], joaat("weapon_assaultrifle"), 100, true, true);
	task_play_anim(*uParam0.f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	StringCopy(uParam0.f_9, "TRVRAM_4", 24);
	*uParam0.f_27 = 0;
	set_model_as_no_longer_needed(iVar0);
}

void func_304(auto uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_mex");
	sVar1 = "misstrvram_3";
	STREAMING::REQUEST_MODEL(iVar0);
	request_anim_dict(sVar1);
	request_weapon_asset(joaat("weapon_microsmg"), 31, 10);
	while ((!STREAMING::HAS_MODEL_LOADED(iVar0) || !has_weapon_asset_loaded(joaat("weapon_microsmg"))) || !has_anim_dict_loaded(sVar1))
	{
		wait(0);
	}
	while (!func_300(uParam0.f_28[0], iVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 1))
	{
		wait(0);
	}
	func_299(uParam0.f_28[0]);
	set_ped_component_variation(*uParam0.f_28[0], false, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], true, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 2, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 3, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 4, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 5, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 6, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 7, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 8, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 9, 1, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 10, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[0], 11, 0, false, 0);
	set_ped_name_debug(*uParam0.f_28[0], "RAMP:PED 0");
	task_play_anim(*uParam0.f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_300(uParam0.f_28[1], iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		wait(0);
	}
	func_299(uParam0.f_28[1]);
	set_ped_component_variation(*uParam0.f_28[1], false, 1, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], true, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 2, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 3, 1, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 4, 0, true, 0);
	set_ped_component_variation(*uParam0.f_28[1], 5, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 6, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 7, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 8, 1, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 9, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 10, 0, false, 0);
	set_ped_component_variation(*uParam0.f_28[1], 11, 0, false, 0);
	set_ped_name_debug(*uParam0.f_28[1], "RAMP:PED 1");
	task_play_anim(*uParam0.f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	if (func_253(uParam0.f_41[0], joaat("weapon_microsmg"), 467f, -1855.4f, 32f, func_296(-0.85f)))
	{
		give_weapon_component_to_weapon_object(*uParam0.f_41[0], joaat("component_at_scope_macro"));
		give_weapon_component_to_weapon_object(*uParam0.f_41[0], joaat("component_microsmg_clip_02"));
	}
	StringCopy(uParam0.f_9, "TRVRAM_3", 24);
	*uParam0.f_27 = 0;
	set_model_as_no_longer_needed(iVar0);
}

int func_305()
{
	return func_306(1182.137f, -400.4787f, 66.92414f, 8f);
}

int func_306(Vector3 vParam0, float fParam1)
{
	Vector3 vVar0;
	
	vVar0 = {fParam3 / 2f, fParam3 / 2f, fParam3 / 2f};
	return add_scenario_blocking_area(vParam0 - vVar0, vParam0 + vVar0, 0, 1, 1, 1);
}

void func_307(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	Vector3 vVar5;
	Vector3 vVar8;
	
	iVar0 = joaat("ig_ramp_hipster");
	iVar1 = joaat("prop_chair_01a");
	iVar2 = joaat("prop_npc_phone");
	sVar3 = "misstrvram_2";
	iVar4 = 60309;
	vVar5 = {0f, 0f, 0f};
	vVar8 = {0f, 0f, 0f};
	request_weapon_asset(joaat("weapon_sawnoffshotgun"), 31, 0);
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	request_anim_dict(sVar3);
	func_311(&uLocal_114);
	while ((((!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_MODEL_LOADED(iVar1)) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !has_anim_dict_loaded(sVar3)) || !func_310(&uLocal_114))
	{
		wait(0);
	}
	clear_area_of_objects(1180.021f, -401.7374f, 66.8767f, 0.75f, 0);
	*uParam0.f_41[2] = get_closest_object_of_type(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_41[2]))
	{
		set_entity_coords(*uParam0.f_41[2], 1180.05f, -401.83f, 66.88f, 1, false, 0, 1);
		set_entity_rotation(*uParam0.f_41[2], 0f, 0f, 50f, 2, 1);
		freeze_entity_position(*uParam0.f_41[2], true);
	}
	*uParam0.f_41[3] = get_closest_object_of_type(1181.243f, -402.5309f, 67.2564f, 1f, -207026330, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_41[3]))
	{
		freeze_entity_position(*uParam0.f_41[3], true);
	}
	while (!func_300(uParam0.f_28[0], iVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0))
	{
		wait(0);
	}
	func_299(uParam0.f_28[0]);
	freeze_entity_position(*uParam0.f_28[0], true);
	set_ped_default_component_variation(*uParam0.f_28[0]);
	set_ped_component_variation(*uParam0.f_28[0], 2, 0, false, 0);
	func_309(uParam0.f_41[1], iVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
	attach_entity_to_entity(*uParam0.f_41[1], *uParam0.f_28[0], get_ped_bone_index(*uParam0.f_28[0], iVar4), vVar8, vVar5, 1, 0, 0, 0, 2, 1);
	func_308(&uLocal_114, 0, 3);
	if (!is_synchronized_scene_running(*uParam0.f_59))
	{
		*uParam0.f_59 = create_synchronized_scene(vLocal_108, vLocal_111, 2);
		if (func_112(*uParam0.f_28[0]))
		{
			task_synchronized_scene(*uParam0.f_28[0], *uParam0.f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1000f, 0);
		}
		set_synchronized_scene_looped(*uParam0.f_59, true);
	}
	if (!func_253(uParam0.f_41[0], joaat("weapon_sawnoffshotgun"), 1162.2f, -395.4f, 72.9f, func_296(-0.71f)))
	{
	}
	StringCopy(uParam0.f_9, "TRVRAM_2_CONCAT", 24);
	*uParam0.f_27 = 0;
	set_model_as_no_longer_needed(iVar0);
	set_model_as_no_longer_needed(iVar1);
	set_model_as_no_longer_needed(iVar2);
}

void func_308(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (has_scaleform_movie_loaded(*uParam0))
	{
		if (iParam1)
		{
			get_mobile_phone_render_id(&iVar0);
		}
		else
		{
			if (!is_named_rendertarget_registered("npcphone"))
			{
				register_named_rendertarget("npcphone", 0);
				link_named_rendertarget(joaat("prop_npc_phone"));
			}
			iVar0 = get_named_rendertarget_render_id("npcphone");
		}
		set_text_render_id(iVar0);
		_push_scaleform_movie_function(*uParam0, "DISPLAY_VIEW");
		_push_scaleform_movie_function_parameter_int(iParam2);
		_pop_scaleform_movie_function_void();
		draw_scaleform_movie(*uParam0, Global_14333, Global_14334, Global_14335, Global_14336, 255, 255, 255, 255, 0);
	}
}

void func_309(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3)
{
	func_138(iParam0);
	*iParam0 = create_object(iParam1, vParam2, 1, true, false);
	set_entity_heading(*iParam0, fParam5);
}

bool func_310(auto uParam0)
{
	if (has_scaleform_movie_loaded(*uParam0))
	{
		return true;
	}
	return false;
}

void func_311(auto uParam0)
{
	*uParam0 = unk_0x67D02A194A2FC2BD(func_312());
}

char* func_312()
{
	return "CELLPHONE_CUTSCENE";
}

int func_313()
{
	return func_306(911.5349f, 3642.111f, 31.64738f, 8f);
}

void func_314(auto uParam0)
{
	Vector3 vVar0;
	char* sVar3;
	int iVar4;
	Vector3 vVar5;
	Vector3 vVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	
	sVar3 = "misstrvram_1";
	iVar4 = 28422;
	vVar5 = {0f, 0f, 0f};
	vVar8 = {0f, 0f, -0.1f};
	iVar11 = joaat("ig_ramp_hic");
	iVar12 = 146905321;
	iVar13 = 1172836182;
	STREAMING::REQUEST_MODEL(iVar11);
	STREAMING::REQUEST_MODEL(iVar12);
	STREAMING::REQUEST_MODEL(iVar13);
	request_anim_dict(sVar3);
	request_weapon_asset(joaat("weapon_assaultrifle"), 31, 0);
	while ((((!STREAMING::HAS_MODEL_LOADED(iVar11) || !STREAMING::HAS_MODEL_LOADED(iVar12)) || !STREAMING::HAS_MODEL_LOADED(iVar13)) || !has_anim_dict_loaded(sVar3)) || !has_weapon_asset_loaded(joaat("weapon_assaultrifle")))
	{
		wait(0);
	}
	while (!func_300(uParam0.f_28[0], iVar11, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0))
	{
		wait(0);
	}
	if (func_112(*uParam0.f_28[0]))
	{
		set_ped_component_variation(*uParam0.f_28[0], false, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[0], true, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[0], 2, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[0], 3, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[0], 4, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[0], 5, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[0], 6, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[0], 7, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[0], 8, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[0], 9, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[0], 10, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[0], 11, 0, false, 0);
		vVar0 = {get_ped_bone_coords(*uParam0.f_28[0], iVar4, 0f, 0f, 0f)};
		set_ped_name_debug(*uParam0.f_28[0], "RAMP:PED 0");
		func_309(uParam0.f_41[1], iVar13, vVar0, 0f);
		attach_entity_to_entity(*uParam0.f_41[1], *uParam0.f_28[0], get_ped_bone_index(*uParam0.f_28[0], iVar4), vVar8, vVar5, 1, 1, 0, 0, 2, 1);
		set_activate_object_physics_as_soon_as_it_is_unfrozen(*uParam0.f_41[1], 1);
		freeze_entity_position(*uParam0.f_28[0], true);
		PED::SET_PED_CONFIG_FLAG(*uParam0.f_28[0], 208, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0.f_28[0], 1862763509);
	}
	while (!func_300(uParam0.f_28[1], iVar11, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0))
	{
		wait(0);
	}
	if (func_112(*uParam0.f_28[1]))
	{
		set_ped_component_variation(*uParam0.f_28[1], false, 1, false, 0);
		set_ped_component_variation(*uParam0.f_28[1], true, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[1], 2, 1, false, 0);
		set_ped_component_variation(*uParam0.f_28[1], 3, 1, false, 0);
		set_ped_component_variation(*uParam0.f_28[1], 4, 1, false, 0);
		set_ped_component_variation(*uParam0.f_28[1], 5, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[1], 6, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[1], 7, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[1], 8, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[1], 9, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[1], 10, 0, false, 0);
		set_ped_component_variation(*uParam0.f_28[1], 11, 0, false, 0);
		vVar0 = {get_ped_bone_coords(*uParam0.f_28[1], iVar4, 0f, 0f, 0f)};
		set_ped_name_debug(*uParam0.f_28[1], "RAMP:PED 1");
		func_309(uParam0.f_41[2], iVar13, vVar0, 0f);
		attach_entity_to_entity(*uParam0.f_41[2], *uParam0.f_28[1], get_ped_bone_index(*uParam0.f_28[1], iVar4), vVar8, vVar5, 1, 1, 0, 0, 2, 1);
		set_activate_object_physics_as_soon_as_it_is_unfrozen(*uParam0.f_41[2], 1);
		freeze_entity_position(*uParam0.f_28[1], true);
		PED::SET_PED_CONFIG_FLAG(*uParam0.f_28[1], 208, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0.f_28[1], 1862763509);
	}
	*uParam0.f_41[3] = get_closest_object_of_type(909.3884f, 3643.652f, 31.699f, 1f, 146905321, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_41[3]))
	{
		freeze_entity_position(*uParam0.f_41[3], true);
	}
	*uParam0.f_41[4] = get_closest_object_of_type(908.0437f, 3643.682f, 31.7073f, 1f, 146905321, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_41[4]))
	{
		freeze_entity_position(*uParam0.f_41[4], true);
	}
	if (!is_synchronized_scene_running(*uParam0.f_59))
	{
		*uParam0.f_59 = create_synchronized_scene(910.13f, 3643.74f, 31.69f, 0f, 0f, func_296(-0.26f), 2);
		if (func_112(*uParam0.f_28[0]))
		{
			task_synchronized_scene(*uParam0.f_28[0], *uParam0.f_59, sVar3, "redneck_idle_a", 8f, -8f, 513, 0, 1000f, 0);
		}
		if (func_112(*uParam0.f_28[1]))
		{
			task_synchronized_scene(*uParam0.f_28[1], *uParam0.f_59, sVar3, "redneck_idle_b", 8f, -8f, 513, 0, 1000f, 0);
		}
		set_synchronized_scene_looped(*uParam0.f_59, true);
	}
	if (!func_253(uParam0.f_41[0], joaat("weapon_assaultrifle"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	set_model_as_no_longer_needed(iVar11);
	set_model_as_no_longer_needed(iVar12);
	StringCopy(uParam0.f_9, "TRVRAM_1", 24);
	*uParam0.f_27 = 0;
}

bool func_315(int iParam0)
{
	if (!is_world_point_within_brain_activation_range())
	{
		return true;
	}
	if (is_player_switch_in_progress())
	{
		return true;
	}
	if (func_164(iParam0))
	{
		return true;
	}
	return false;
}

bool func_316(int iParam0)
{
	struct<27> Var0;
	int iVar32;
	
	func_95(iParam0, &Var0);
	iVar32 = func_208();
	if (iVar32 == 145)
	{
		return true;
	}
	else if ((iVar32 != 1 && iVar32 != 0) && iVar32 != 2)
	{
		return true;
	}
	if (!GAMEPLAY::IS_BIT_SET(Var0.f_26, iVar32))
	{
		return true;
	}
	return false;
}

bool func_317(int iParam0, auto uParam1, Vector3 vParam2, float fParam3)
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_318(*iParam0[0], vParam2, fParam5, uParam1))
		{
			return true;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_318(*iParam0[iVar0], vParam2, fParam5, uParam1))
			{
				iVar0 = *iParam0;
				return true;
			}
			iVar0++;
		}
	}
	func_336("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return false;
}

bool func_318(int iParam0, Vector3 vParam1, float fParam2, auto uParam3)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_95(iParam0, &Var1);
	if (func_319(Var1.f_6, vParam1, fParam4, 0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iParam0 /*6*/], false))
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_174(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam5 = iParam0;
		StringCopy(uParam5.f_1, Var1, 32);
		return true;
	}
	return false;
}

bool func_319(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
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

int func_320(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

void func_321(int iParam0, int iParam1)
{
	func_249(iParam0);
	if (iParam1)
	{
		func_336(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_324(iParam0, 0, 0, 0);
	}
	func_323(iParam0.f_48);
	if (iLocal_289 != -1)
	{
		func_336("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_246(&iLocal_289);
	}
	if (iLocal_301 != 0)
	{
		if (*iParam0 == 55 || *iParam0 == 53)
		{
			remove_scenario_blocking_area(iLocal_301, 0);
		}
	}
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(0);
	}
	if (iLocal_293)
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			clear_help(1);
			iLocal_293 = 0;
		}
	}
	func_322();
	func_336("SCRIPT TERMINATED");
	Global_88883 = 0;
	terminate_this_thread();
}

void func_322()
{
	func_336("Running end routines.");
	Global_100872--;
}

bool func_323(auto uParam0)
{
	if (func_136(uParam0))
	{
		if (has_anim_dict_loaded(*uParam0))
		{
			remove_anim_dict(*uParam0);
			*uParam0 = "";
			*uParam0.f_1 = "";
			return true;
		}
	}
	return false;
}

void func_324(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	func_332(uParam0, iParam1);
	func_328(uParam0, iParam2);
	func_325(uParam0, iParam3);
}

void func_325(auto uParam0, int iParam1)
{
	func_326(uParam0.f_41, iParam1);
}

void func_326(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (iParam1)
		{
			func_138(uParam0[iVar0]);
		}
		else
		{
			func_327(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_327(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, 1, true);
		}
		if (!iParam1)
		{
			set_object_as_no_longer_needed(iParam0);
		}
		else
		{
			_mark_object_for_deletion(*iParam0);
		}
	}
}

void func_328(auto uParam0, int iParam1)
{
	func_329(uParam0.f_35, iParam1);
}

void func_329(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (iParam1)
		{
			func_331(uParam0[iVar0]);
		}
		else
		{
			func_330(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_330(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		is_entity_dead(*iParam0, 0);
		if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

void func_331(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, 0);
		}
		if (func_142(*iParam0))
		{
			if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
			{
				if (func_112(PLAYER::PLAYER_PED_ID()))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
					{
						set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				delete_vehicle(iParam0);
			}
		}
		else
		{
			if (func_112(PLAYER::PLAYER_PED_ID()))
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
				{
					set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			delete_vehicle(iParam0);
		}
	}
}

void func_332(auto uParam0, int iParam1)
{
	func_333(uParam0.f_28, iParam1);
}

void func_333(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (iParam1 == 1)
		{
			func_335(uParam0[iVar0]);
		}
		else
		{
			func_334(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_334(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			set_entity_load_collision_flag(*iParam0, false);
			if (iParam3 == 0)
			{
				clear_ped_secondary_task(*iParam0);
			}
			set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				set_blocking_of_non_temporary_events(*iParam0, false);
			}
		}
		set_ped_as_no_longer_needed(iParam0);
	}
}

void func_335(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!is_entity_dead(*iParam0, 0))
		{
			set_entity_load_collision_flag(*iParam0, false);
		}
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, 0);
		}
		delete_ped(iParam0);
	}
}

void func_336(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
	}
}

void func_337(auto uParam0)
{
	*uParam0 = -1;
	StringCopy(uParam0.f_1, "", 32);
	*uParam0.f_15 = 12f;
	*uParam0.f_16 = 6;
	*uParam0.f_25 = 0;
	*uParam0.f_26 = 0;
	*uParam0.f_27 = 0;
}

void func_338()
{
	func_336("Running start routines.");
	Global_100872++;
}

