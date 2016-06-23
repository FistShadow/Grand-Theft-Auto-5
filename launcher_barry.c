#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4>[] Local_37 = new struct<4>[10];
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	struct<8> Local_97 = 5;
	var uLocal_105 = 0;
	var uLocal_106 = 16;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	int iLocal_271 = 0;
	struct<2> Local_272 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 5;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
#endregion

void main()
{
	struct<42> Var0;
	vector3 vVar61;
	int iVar64;
	
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
	uLocal_92 = func_291(49);
	iLocal_93 = -1;
	_0x6F2135B6129620C1(1);
	func_290();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	vVar61 = {0f, 0f, 0f};
	func_289(&Var0);
	vVar61 = {Local_272.f_1[0 /*3*/]};
	if (has_force_cleanup_occurred(83))
	{
		func_288("Force cleanup [TERMINATING]");
		if (Var0 != -1)
		{
			if (Global_100241[Var0 /*10*/].f_9 != -1)
			{
				func_288("Relinquishing candidate id...");
				func_287(&(Global_100241[Var0 /*10*/].f_9));
			}
		}
		func_270(&Var0, 1);
	}
	if (!func_267(&Var0, vVar61, 1f))
	{
		func_266();
		func_288("SCRIPT TERMINATED");
		terminate_this_thread();
	}
	if (!func_258(Var0))
	{
		func_266();
		func_288("SCRIPT TERMINATED");
		terminate_this_thread();
	}
	if (func_257(Var0))
	{
		func_266();
		func_288("SCRIPT TERMINATED");
		terminate_this_thread();
	}
	while (!func_235(&Var0))
	{
		wait(0);
		if (!is_world_point_within_brain_activation_range())
		{
			func_288("Player out of range [TERMINATING]");
			func_270(&Var0, 1);
		}
	}
	if (Var0 == 6)
	{
		iLocal_95 = func_234();
	}
	clear_area(vVar61, Var0.f_15, 1, 0, 0, false);
	if (Var0 == 4)
	{
		func_233(&uLocal_106, 3, Var0.f_28[0], "BARRY", 0, 1);
		iLocal_271 = get_game_timer();
	}
	while (true)
	{
		wait(0);
		if (Var0 == 2 || Var0 == 3)
		{
			func_231(&Var0);
			func_229();
			if (_0xB56BBBCC2955D9CB())
			{
				set_cutscene_ped_prop_variation("Barry", true, 0, 0, false);
			}
		}
		else if (Var0 == 4)
		{
			if (_0xB56BBBCC2955D9CB())
			{
				set_cutscene_ped_prop_variation("BARRY", true, 0, 0, false);
			}
		}
		if (!func_191(&Var0, Var0 != 2))
		{
			func_270(&Var0, 1);
		}
		func_190(Var0);
		func_183(&iLocal_93, &(Var0.f_9), vVar61);
		if (func_182(Var0.f_28[0]))
		{
			if (Var0 == 2)
			{
				if (func_180(&Var0, get_entity_coords(Var0.f_28[0], 1), "BARY1AU", "BARY1_PRELEA", 5, "BARRY", 10000, 23f))
				{
					func_179(&Var0, Local_97, 1, 0);
				}
			}
			else if (Var0 == 3)
			{
				if (func_180(&Var0, get_entity_coords(Var0.f_28[0], 1), "BARY2AU", "BARY2_AMB", 3, "BARRY", 10000, 23f))
				{
				}
			}
			else if (Var0 == 4)
			{
				func_169(&uLocal_105, get_entity_coords(Var0.f_28[0], 1), "BARR3AU", "BARRY3_AMB");
			}
		}
		iVar64 = 0;
		if (func_168(Var0))
		{
			if (get_game_timer() - iLocal_94 > 5000)
			{
				iVar64 = 1;
				iLocal_94 = get_game_timer();
			}
		}
		if (func_153(&Var0, iVar64))
		{
			if (func_152(Var0))
			{
				func_149(Var0, &iLocal_96);
			}
			if (!func_2(&Var0))
			{
				func_270(&Var0, 1);
			}
			if (func_1(&Var0))
			{
				func_270(&Var0, 0);
			}
		}
	}
}

bool func_1(int iParam0)
{
	while (!Global_100241[*iParam0 /*10*/])
	{
		wait(0);
	}
	return true;
}

bool func_2(int iParam0)
{
	struct<4> Var0;
	char* sVar32;
	
	if (!func_148())
	{
		while (!func_139(*iParam0))
		{
			if (func_138(*iParam0))
			{
				func_130();
			}
			if (!func_191(iParam0, *iParam0 != 2))
			{
				func_288("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return false;
			}
			wait(0);
		}
	}
	if (func_129())
	{
		func_127();
	}
	if (!func_97(iParam0))
	{
		func_288("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return false;
	}
	func_94(*iParam0, &Var0);
	MemCopy(&sVar32, {func_93(*iParam0)}, 4);
	func_91(&sVar32, Var0.f_3, 0);
	func_90(*iParam0);
	if (!func_148())
	{
		if (*iParam0.f_16 == 2)
		{
			func_22(iParam0.f_1, 0);
		}
		else
		{
			func_22(iParam0.f_1, 1);
		}
	}
	func_3(*iParam0, Var0);
	return true;
}

void func_3(int iParam0, char* sParam1)
{
	func_21(sParam1);
	clear_bit(&(Global_101154.f_17264[iParam0 /*6*/]), 5);
	if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
	{
		while (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			wait(0);
		}
	}
	if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) < 1)
	{
		Global_55750 = 0;
		request_script("mission_stat_watcher");
		while (!has_script_loaded("mission_stat_watcher"))
		{
			wait(0);
		}
		start_new_script("mission_stat_watcher", 1828);
		set_script_as_no_longer_needed("mission_stat_watcher");
	}
	while (!is_bit_set(Global_101154.f_17264[iParam0 /*6*/], 5))
	{
		if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
		{
			set_bit(&(Global_101154.f_17264[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_55747 == 1)
	{
		func_18();
		Global_55747 = 0;
		if (Global_55742)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_55750 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_55764, {func_9(iParam0)}, 4);
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
			func_10();
			func_19();
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
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_55742 = 1;
		}
	}
	Global_55777 = get_game_timer();
	func_5();
	Global_55749 = 0;
}

void func_5()
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

void func_6(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
		
		case 3:
			func_7(743);
			func_7(744);
			return;
		
		case 5:
			func_7(745);
			func_7(746);
			return;
		
		case 6:
			func_7(747);
			func_7(748);
			return;
		
		case 8:
			func_7(749);
			return;
		
		case 12:
			func_7(750);
			return;
		
		case 14:
			func_7(751);
			func_7(752);
			return;
		
		case 16:
			func_7(753);
			func_7(754);
			return;
		
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
		
		case 18:
			func_7(758);
			func_7(759);
			return;
		
		case 19:
			func_7(760);
			func_7(761);
			return;
		
		case 20:
			func_7(762);
			return;
		
		case 21:
			func_7(763);
			return;
		
		case 22:
			func_7(764);
			func_7(765);
			return;
		
		case 23:
			func_7(766);
			return;
		
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
		
		case 26:
			func_7(770);
			func_7(771);
			return;
		
		case 28:
			func_7(772);
			func_7(773);
			return;
		
		case 29:
			func_7(774);
			func_7(775);
			return;
		
		case 30:
			func_7(776);
			func_7(777);
			return;
		
		case 32:
			func_7(778);
			func_7(779);
			return;
		
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
		
		case 34:
			func_7(783);
			func_7(784);
			return;
		
		case 38:
			func_7(785);
			func_7(786);
			return;
		
		case 39:
			func_7(787);
			func_7(788);
			return;
		
		case 40:
			func_7(789);
			return;
		
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
		
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
		
		case 43:
			func_7(796);
			func_7(797);
			return;
		
		case 46:
			func_7(798);
			func_7(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
		
		case 49:
			func_7(802);
			func_7(803);
			return;
		
		case 50:
			func_7(804);
			func_7(805);
			return;
		
		case 51:
			func_7(806);
			return;
		
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
		
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
		
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
		
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
		
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
		
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
		
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
		
		default:
	}
}

void func_7(int iParam0)
{
	Global_55742 = 1;
	Global_55745 = 1;
	if (Global_67844 > 15)
	{
		return;
	}
	func_8(Global_67844);
	Global_67845[Global_67844 /*9*/] = iParam0;
	Global_67844++;
	if (Global_55974[iParam0 /*13*/] == 16)
	{
		Global_67996 = 1;
	}
}

void func_8(var uParam0)
{
	Global_67845[uParam0 /*9*/].f_1 = 0;
	Global_67845[uParam0 /*9*/].f_2 = 0f;
	Global_67845[uParam0 /*9*/].f_3 = 0;
	Global_67845[uParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_93(iParam0)};
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

void func_10()
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
	func_17(0);
	func_16();
	Global_67996 = 0;
	Global_55748 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_55739 = 0;
	Global_55769 = 0;
	Global_55777 = -1;
}

void func_11()
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

void func_12()
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

void func_13()
{
	Global_55908 = 0;
}

void func_14()
{
	Global_55768 = 0;
	Global_55772 = func_15(joaat("sp0_shots"));
	Global_55771 = func_15(joaat("sp0_hits"));
	Global_55774 = func_15(joaat("sp1_shots"));
	Global_55773 = func_15(joaat("sp1_hits"));
	Global_55776 = func_15(joaat("sp2_shots"));
	Global_55775 = func_15(joaat("sp2_hits"));
}

var func_15(int iParam0)
{
	var uVar0;
	
	stat_get_int(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()
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

void func_17(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

void func_18()
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

void func_19()
{
	if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
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

int func_20()
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

void func_21(char* sParam0)
{
	if (are_strings_equal(sParam0, sParam0))
	{
	}
}

void func_22(char* sParam0, int iParam1)
{
	clear_bit(&(Global_91278.f_20), 17);
	func_23(sParam0, iParam1, 0);
}

void func_23(char* sParam0, int iParam1, int iParam2)
{
	if (Global_91278 != 10 && Global_91278 != 9)
	{
		StringCopy(&Global_93083, sParam0, 32);
		func_25(&Global_93091, sParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_85789 = 0;
	}
}

void func_24()
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

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_89();
	*uParam0.f_1 = func_78();
	_get_weather_type_transition(uParam0.f_6, uParam0.f_7, uParam0.f_8);
	if (!is_ped_injured(player_ped_id()))
	{
		func_63(uParam0.f_2305, 0);
		func_62(player_ped_id());
		func_56(player_ped_id(), 0);
		get_current_ped_weapon(player_ped_id(), uParam0.f_2, 1);
		if (*uParam0.f_2 == 0 || *uParam0.f_2 == joaat("object"))
		{
			*uParam0.f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		*uParam0.f_17[iVar1] = Global_101154.f_1826.f_539.f_294[iVar1];
		if (iVar1 == func_53())
		{
			func_46(player_ped_id(), uParam0.f_616[iVar1 /*65*/], 1);
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
				stat_get_int(joaat("sp0_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp0_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 1:
				stat_get_int(joaat("sp1_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp1_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 2:
				stat_get_int(joaat("sp2_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp2_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
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
	stat_get_int(joaat("sp0_special_ability"), uParam0.f_1762[0], -1);
	stat_get_int(joaat("sp1_special_ability"), uParam0.f_1762[1], -1);
	stat_get_int(joaat("sp2_special_ability"), uParam0.f_1762[2], -1);
	*uParam0.f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(uParam0.f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_26(uParam0.f_2401);
	sParam3 = sParam3;
	iParam2 = iParam2;
}

bool func_26(var uParam0)
{
	*uParam0 = Global_87460;
	*uParam0.f_1 = Global_87461;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	return true;
}

void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = player_ped_id();
	}
	if (does_entity_exist(iParam2))
	{
		*uParam1.f_5 = func_44(iParam2);
	}
	if (func_41(iParam2, &iVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0, 0))
		{
			if (is_vehicle_model(iVar0, joaat("skylift")) && is_ped_in_vehicle(player_ped_id(), iVar0, 0))
			{
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

bool func_28(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (is_vehicle_driveable(iParam2, 0))
	{
		func_30(uParam0, iParam2, iParam3);
		*uParam1.f_4 = iParam2;
		if (func_29(iParam2))
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

bool func_29(int iParam0)
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

void func_30(var uParam0, int iParam1, int iParam2)
{
	func_37(iParam1, uParam0.f_12);
	*uParam0.f_7 = func_33(iParam1, 145, 0);
	*uParam0.f_11 = func_32(iParam1);
	if (!*uParam0.f_7)
	{
		if (!*uParam0.f_10)
		{
			*uParam0.f_10 = func_31(iParam1);
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
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		*uParam0.f_8 = 1;
	}
	else
	{
		*uParam0.f_8 = 0;
	}
}

bool func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_68319.f_484[iVar0]))
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

int func_32(int iParam0)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
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
		if (does_entity_exist(Global_88942[iVar0]))
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

bool func_33(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
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
		if (does_entity_exist(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88952[iVar0])
				{
					if (iParam2 == 0 || get_entity_model(iParam0) == func_34(iParam1, iParam2))
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

int func_34(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_36(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_35(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35(int iParam0, var uParam1, int iParam2)
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

int func_36(int iParam0)
{
	return iParam0 < 3;
}

void func_37(int iParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_40(uParam1);
		*uParam1.f_66 = get_entity_model(iParam0);
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
			set_bit(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			set_bit(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			set_bit(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			set_bit(uParam1.f_77, 31);
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
						set_bit(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						clear_bit(uParam1.f_77, 23);
						clear_bit(uParam1.f_77, 22);
						break;
					
					case 4:
						set_bit(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				set_bit(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			set_bit(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			set_bit(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 12);
		}
		func_39(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(uParam1.f_77, func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			set_bit(uParam1.f_77, 11);
		}
		else
		{
			clear_bit(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			set_bit(uParam1.f_77, 27);
		}
		else
		{
			clear_bit(uParam1.f_77, 27);
		}
	}
}

int func_38(int iParam0)
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

bool func_39(int iParam0, var uParam1, var uParam2)
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

void func_40(var uParam0)
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

bool func_41(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam0 == player_ped_id())
			{
				*uParam1 = get_players_last_vehicle();
			}
			else
			{
				*uParam1 = get_vehicle_ped_is_in(iParam0, 1);
			}
			if (does_entity_exist(*uParam1))
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
						if (func_42(*uParam1, func_89(), 1))
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

bool func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	var uVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_43(iParam1, iVar0, &sVar1, &uVar9))
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

bool func_43(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_45(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_45(int iParam0)
{
	if (func_36(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_46(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_44(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_52(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_51(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_36(iVar0))
		{
			*uParam1.f_59 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_59;
			*uParam1.f_60 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_60;
			*uParam1.f_61 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_61;
			*uParam1.f_62 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_62;
			*uParam1.f_63 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_63;
			*uParam1.f_64 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_64;
		}
		else if (network_is_game_in_progress() && get_entity_model(iParam0) == get_entity_model(player_ped_id()))
		{
			if (func_50(161, -1))
			{
				*uParam1.f_59 = func_47(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_47(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_47(746, Global_69309, 0);
			*uParam1.f_61 = func_47(747, Global_69309, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_50(161, -1))
			{
				*uParam1.f_59 = func_47(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_47(745, Global_69309, 0);
			}
		}
	}
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_48(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
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

var func_49()
{
	return Global_1312747;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_48(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_51(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
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

void func_52(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
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

var func_53()
{
	func_54();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_54()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_45(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_44(player_ped_id());
			if (func_36(iVar0) && (!func_55(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_36(Global_101154.f_1826.f_539.f_3549))
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

int func_55(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			func_57(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
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
				stat_set_int(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				stat_set_int(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				stat_set_int(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_57(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!is_ped_injured(iParam0))
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
			iVar3 = func_61(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_61(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed"))
				{
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute"))
					{
						vVar4.y = 1;
					}
					set_bit(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1[iVar0 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					iVar2 = func_59(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							set_bit(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_59(vVar4.x, iVar1);
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
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_58(Var9.f_1)) && iVar70 < 50)
			{
				if (!_is_dlc_data_empty(Var9))
				{
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						set_bit(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else
					{
						set_bit(&(vVar4.f_2), 20);
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
								set_bit(&(vVar4.f_2), iVar1);
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

bool func_58(int iParam0)
{
	if (network_is_game_in_progress())
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

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
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
				iVar1 = func_60(iParam0, &uVar2);
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

int func_60(int iParam0, var uParam1)
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

int func_61(int iParam0)
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

void func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_63(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;
	
	*uParam0 = {get_entity_coords(player_ped_id(), 1)};
	*uParam0.f_3 = get_entity_heading(player_ped_id());
	*uParam0.f_5 = get_ped_parachute_state(player_ped_id());
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
	else if (is_bit_set(Global_69737, 4))
	{
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		*uParam0.f_3 = 78.9858f;
	}
	else if (is_bit_set(Global_69737, 5))
	{
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		*uParam0.f_3 = 261.747f;
	}
	else if (is_bit_set(Global_69737, 6))
	{
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		*uParam0.f_3 = 271.8208f;
	}
	else if (is_bit_set(Global_69737, 7))
	{
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		*uParam0.f_3 = 316.8879f;
	}
	else if (get_interior_from_entity(player_ped_id()) == get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		*uParam0.f_3 = 204.1703f;
	}
	else if (is_entity_in_angled_area(player_ped_id(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
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
		if (func_67(&iVar0))
		{
			if (func_65(iVar0, &vVar1, &uVar4))
			{
				vVar1.z++;
				*uParam0 = {vVar1};
				*uParam0.f_3 = uVar4;
			}
		}
		else if (is_entity_in_angled_area(player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_89();
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
		else if (is_entity_in_angled_area(player_ped_id(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			*uParam0.f_3 = 213.6273f;
		}
		else if (is_entity_in_angled_area(player_ped_id(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_3 = 305.6424f;
		}
		else if (is_entity_in_angled_area(player_ped_id(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			*uParam0.f_3 = 186.6814f;
		}
		else if (func_64(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			*uParam0.f_3 = 48.8028f;
		}
	}
}

bool func_64(vector3 vParam0, char* sParam1, vector3 vParam2)
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

int func_65(int iParam0, var uParam1, var uParam2)
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
	return !func_66(*uParam1, 0f, 0f, 0f, 0);
}

int func_66(vector3 vParam0, vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_67(var uParam0)
{
	if (!is_entity_dead(player_ped_id(), 0) && !is_ped_injured(player_ped_id()))
	{
		if (func_77())
		{
			*uParam0 = func_73(get_entity_coords(player_ped_id(), 0), 5, -1, 0, 1, -1);
			if (func_72(*uParam0) && !func_68(*uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_68(int iParam0)
{
	return func_69(iParam0, 0, 1);
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_71() == 0)
		{
			return is_bit_set(func_47(func_70(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_70(int iParam0)
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

var func_71()
{
	return Global_25120;
}

int func_72(int iParam0)
{
	return func_69(iParam0, 5, 1);
}

int func_73(vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		if (iParam3 == 5 || iParam3 == func_76(iVar0))
		{
			if (!iParam5 || func_75(iVar0))
			{
				fVar1 = get_distance_between_coords(vParam0, func_74(iVar0, 0), 1);
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

Vector3 func_74(int iParam0, int iParam1)
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

int func_75(int iParam0)
{
	return func_69(iParam0, 0, 0);
}

int func_76(int iParam0)
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

int func_77()
{
	return Global_91330.f_296 > 0;
}

var func_78()
{
	var uVar0;
	
	func_88(&uVar0, get_clock_seconds());
	func_87(&uVar0, get_clock_minutes());
	func_86(&uVar0, get_clock_hours());
	func_81(&uVar0, get_clock_day_of_month());
	func_80(&uVar0, get_clock_month());
	func_79(&uVar0, get_clock_year());
	return uVar0;
}

void func_79(var uParam0, int iParam1)
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

void func_80(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_81(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_85(*uParam0);
	iVar1 = func_83(*uParam0);
	if (iParam1 < 1 || iParam1 > func_82(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_82(int iParam0, int iParam1)
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

var func_83(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_84(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_84(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_85(var uParam0)
{
	return uParam0 & 15;
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

var func_89()
{
	func_54();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_90(var uParam0)
{
	var uVar0;
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

void func_91(char* sParam0, var uParam1, int iParam2)
{
	if (!is_string_null_or_empty(&Global_88681))
	{
		playstats_mission_over(&Global_88681, 0, 0, 0, 1, 0);
		StringCopy(&Global_88681, "", 64);
	}
	StringCopy(&Global_88681, sParam0, 64);
	playstats_mission_started(sParam0, uParam1, iParam2, func_92(0));
}

int func_92(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

struct<2> func_93(int iParam0)
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

void func_94(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_95(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 1:
			func_95(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 2:
			func_95(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 3:
			func_95(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 4:
			func_95(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 5:
			func_95(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 6:
			func_95(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 7:
			func_95(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_96(iParam0), 0, 0);
			break;
		
		case 8:
			func_95(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 9:
			func_95(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 10:
			func_95(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 11:
			func_95(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 12:
			func_95(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 13:
			func_95(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 14:
			func_95(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 15:
			func_95(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 16:
			func_95(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 17:
			func_95(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 18:
			func_95(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 19:
			func_95(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 20:
			func_95(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 21:
			func_95(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 22:
			func_95(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 23:
			func_95(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_96(iParam0), 0, 1);
			break;
		
		case 24:
			func_95(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_96(iParam0), 0, 1);
			break;
		
		case 25:
			func_95(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 26:
			func_95(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 27:
			func_95(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 28:
			func_95(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 29:
			func_95(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 30:
			func_95(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 31:
			func_95(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 32:
			func_95(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 33:
			func_95(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 34:
			func_95(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 35:
			func_95(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 36:
			func_95(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 37:
			func_95(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 38:
			func_95(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 39:
			func_95(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 40:
			func_95(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 41:
			func_95(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 42:
			func_95(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 43:
			func_95(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 44:
			func_95(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 45:
			func_95(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 46:
			func_95(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 47:
			func_95(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 48:
			func_95(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 49:
			func_95(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 50:
			func_95(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 51:
			func_95(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 52:
			func_95(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 54:
			func_95(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 55:
			func_95(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 56:
			func_95(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 53:
			func_95(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 57:
			func_95(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 58:
			func_95(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 59:
			func_95(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 60:
			func_95(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 61:
			func_95(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 62:
			func_95(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_95(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

bool func_96(int iParam0)
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

bool func_97(int iParam0)
{
	int iVar0;
	
	if (func_126(iParam0.f_1))
	{
		if (!is_string_null_or_empty(iParam0.f_9))
		{
			func_116(1);
			func_114(iParam0, 1, func_115(*iParam0));
		}
		if (*iParam0.f_27)
		{
			if (func_113(*iParam0))
			{
				while (!is_ped_on_foot(player_ped_id()))
				{
					func_130();
					wait(0);
				}
			}
		}
		func_98(*iParam0);
		iVar0 = start_new_script_with_args(iParam0.f_1, iParam0, 61, 18000);
		set_script_as_no_longer_needed(iParam0.f_1);
		if (has_cutscene_loaded())
		{
			func_288("Initial cutscene loaded and passing to RC mission.");
			_0x8D9DF6ECA8768583(iVar0);
		}
		else
		{
			func_288("Initial cutscene wasn't loaded in time to pass to RC mission.");
			remove_cutscene();
		}
		return true;
	}
	return false;
}

void func_98(int iParam0)
{
	struct<2> Var0;
	
	func_112();
	if (!is_ped_injured(player_ped_id()))
	{
		set_ped_config_flag(player_ped_id(), 32, false);
		set_ped_config_flag(player_ped_id(), 250, false);
	}
	if (func_111(iParam0))
	{
		remove_ped_helmet(player_ped_id(), 0);
	}
	set_all_random_peds_flee(player_id(), 1);
	clear_additional_text(false, true);
	clear_additional_text(3, true);
	clear_additional_text(2, true);
	if (Global_36839 == 1)
	{
		if (func_110(player_ped_id()))
		{
			func_101(player_ped_id());
		}
	}
	if (!func_148())
	{
		if (iParam0 < 63)
		{
			func_99(iParam0);
			Var0 = {func_9(iParam0)};
			set_mission_name(1, &Var0);
		}
	}
}

void func_99(int iParam0)
{
	if (iParam0 < 63)
	{
		func_100();
		Global_69744 = iParam0;
		Global_69743 = 0;
		Global_69746 = 7;
	}
}

void func_100()
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

void func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		func_104(1, iVar1, 1);
		return;
	}
	iVar2 = func_103(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_102(iVar2);
}

void func_102(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36616[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36616[iParam0 /*5*/].f_1 == player_ped_id())
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

int func_103(int iParam0)
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

void func_104(int iParam0, int iParam1, int iParam2)
{
	func_105(iParam0, iParam1, iParam2, 0, 0);
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_107(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_106();
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

int func_106()
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

bool func_107(int iParam0, int iParam1, int iParam2)
{
	if (func_108(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_108(int iParam0, int iParam1, int iParam2)
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

int func_109(int iParam0)
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

bool func_110(int iParam0)
{
	if (func_182(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_111(int iParam0)
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

void func_112()
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
	clear_bit(&Global_2283, 25);
	set_bit(&Global_2284, 11);
}

bool func_113(int iParam0)
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

void func_114(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_182(*uParam0.f_28[iVar0]))
		{
			set_entity_proofs(*uParam0.f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_182(*uParam0.f_35[iVar0]))
		{
			set_entity_proofs(*uParam0.f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_182(*uParam0.f_41[iVar0]))
		{
			set_entity_proofs(*uParam0.f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		}
		iVar0++;
	}
	if (!is_entity_dead(player_ped_id(), 0))
	{
		set_entity_proofs(player_ped_id(), iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		set_entity_invincible(player_ped_id(), iParam1);
		if (iParam2)
		{
			set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
		}
	}
}

bool func_115(int iParam0)
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

void func_116(int iParam0)
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
	func_117(1, 1, 0, 0);
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_125(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_124())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_123(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_125(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_123(0, iParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_121(player_id())) && !func_119(player_id(), 0)) && !func_118())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_121(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_118()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_119(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_120(-1, 0) == 8;
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

int func_120(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_49();
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

bool func_121(int iParam0)
{
	if (func_119(iParam0, 0))
	{
		return true;
	}
	if (func_122())
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

int func_122()
{
	return is_bit_set(Global_2359301, 3);
}

int func_123(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_124()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_125(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 13);
	}
	else
	{
		clear_bit(&Global_2283, 13);
	}
}

bool func_126(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
		request_script(sParam0);
		while (!has_script_loaded(sParam0))
		{
			request_script(sParam0);
			wait(0);
		}
		return true;
	}
	func_288("Attempting to launch invalid script file [TERMINATING]");
	return false;
}

void func_127()
{
	Global_14578 = 0;
	func_128();
}

void func_128()
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

bool func_129()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_130()
{
	func_134();
	func_133();
	func_131();
}

void func_131()
{
	if (is_player_playing(player_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (func_132(get_vehicle_ped_is_in(player_ped_id(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (get_script_task_status(player_ped_id(), -828834893) != 1)
				{
					task_leave_any_vehicle(player_ped_id(), 0, 0);
				}
			}
		}
	}
}

bool func_132(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
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
	if (get_game_timer() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = get_game_timer();
	if (!is_entity_dead(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_133()
{
	disable_control_action(0, 21, 1);
	disable_control_action(0, 37, 1);
	disable_control_action(0, 25, 1);
	disable_control_action(0, 141, 1);
	disable_control_action(0, 140, 1);
	disable_control_action(0, 24, 1);
	disable_control_action(0, 257, 1);
	disable_control_action(0, 22, 1);
	disable_control_action(0, 23, 1);
}

void func_134()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_137(0))
		{
			func_135(0);
		}
		set_bit(&Global_2284, 2);
	}
}

void func_135(int iParam0)
{
	if (Global_14571)
	{
		func_136(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		set_bit(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 30);
	}
	else
	{
		clear_bit(&Global_2283, 30);
	}
	if (!func_124())
	{
		Global_14413.f_1 = 3;
	}
}

void func_136(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_137(0))
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

bool func_137(int iParam0)
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

bool func_138(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return true;
	}
	return false;
}

bool func_139(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_146();
	}
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_141(&(Global_100241[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return false;
	}
	func_140(iParam0);
	return true;
}

void func_140(int iParam0)
{
	Global_100241[iParam0 /*10*/].f_4 = 1;
	Global_100241[iParam0 /*10*/].f_5 = 0;
	Global_100241[iParam0 /*10*/].f_6 = 0;
	Global_100241[iParam0 /*10*/] = 0;
}

int func_141(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_145(0))
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
		if (!func_143(iParam2))
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
			func_142(uParam0, iParam4);
		}
	}
	return 2;
}

void func_142(var uParam0, int iParam1)
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

int func_143(int iParam0)
{
	return func_144(iParam0, Global_35711);
}

bool func_144(int iParam0, int iParam1)
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

bool func_145(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_143(iParam0))
	{
		return false;
	}
	return true;
}

int func_146()
{
	return func_147(get_this_script_name(), 0);
}

int func_147(char* sParam0, int iParam1)
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
		func_94(iVar0, &sVar1);
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

bool func_148()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return true;
	}
	return false;
}

void func_149(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = func_150(-1604.668f, 5239.1f, 3.01f, 0);
			set_blip_sprite(*iParam1, 66);
			set_blip_colour(*iParam1, 42);
			break;
		
		case 1:
			*iParam1 = func_150(-1592.84f, 5214.04f, 3.01f, 0);
			set_blip_sprite(*iParam1, 400);
			set_blip_colour(*iParam1, 42);
			break;
		
		case 2:
		case 3:
			*iParam1 = func_150(190.26f, -956.35f, 29.63f, 0);
			if ((is_bit_set(Global_101154.f_17264[2 /*6*/], 3) || is_bit_set(Global_101154.f_17264[4 /*6*/], 3)) || is_bit_set(Global_101154.f_17264[4 /*6*/], 3))
			{
				set_blip_sprite(*iParam1, 381);
			}
			else
			{
				set_blip_sprite(*iParam1, 66);
			}
			if (iParam0 == 2)
			{
				set_blip_colour(*iParam1, 42);
			}
			else
			{
				set_blip_colour(*iParam1, 44);
			}
			break;
		
		case 4:
			*iParam1 = func_150(414f, -761f, 29f, 0);
			if (is_bit_set(Global_101154.f_17264[2 /*6*/], 3) || is_bit_set(Global_101154.f_17264[3 /*6*/], 3))
			{
				set_blip_sprite(*iParam1, 381);
			}
			else
			{
				set_blip_sprite(*iParam1, 66);
			}
			set_blip_colour(*iParam1, 43);
			break;
		
		case 9:
			*iParam1 = func_150(-1622.89f, 4204.87f, 83.3f, 0);
			set_blip_sprite(*iParam1, 66);
			set_blip_colour(*iParam1, 42);
			break;
		
		case 11:
		case 12:
		case 13:
			if (iParam0 == 11)
			{
				*iParam1 = func_150(1835.53f, 4705.86f, 38.1f, 0);
			}
			else if (iParam0 == 12)
			{
				*iParam1 = func_150(1826.13f, 4698.88f, 38.92f, 0);
			}
			else
			{
				*iParam1 = func_150(637.02f, 119.7093f, 89.5f, 0);
			}
			set_blip_sprite(*iParam1, 206);
			set_blip_colour(*iParam1, 42);
			break;
		
		case 18:
		case 19:
			if (iParam0 == 18)
			{
				*iParam1 = func_150(-954.19f, -2760.05f, 14.64f, 0);
			}
			else
			{
				*iParam1 = func_150(-63.8f, -809.5f, 321.8f, 0);
			}
			set_blip_sprite(*iParam1, 382);
			set_blip_colour(*iParam1, 43);
			break;
		
		case 21:
		case 23:
			if (iParam0 == 21)
			{
				*iParam1 = func_150(-1877.82f, -440.649f, 45.05f, 0);
			}
			else
			{
				*iParam1 = func_150(-915.6f, 6139.2f, 5.5f, 0);
			}
			if ((is_bit_set(Global_101154.f_17264[21 /*6*/], 3) || is_bit_set(Global_101154.f_17264[22 /*6*/], 3)) || is_bit_set(Global_101154.f_17264[23 /*6*/], 3))
			{
				set_blip_sprite(*iParam1, 405);
			}
			else
			{
				set_blip_sprite(*iParam1, 66);
			}
			if (iParam0 == 21)
			{
				set_blip_colour(*iParam1, 42);
			}
			else
			{
				set_blip_colour(*iParam1, 43);
			}
			break;
		
		case 27:
			*iParam1 = func_150(-1104.93f, 291.25f, 64.3f, 0);
			set_blip_sprite(*iParam1, 66);
			set_blip_colour(*iParam1, 44);
			break;
		
		case 30:
			*iParam1 = func_150(-1104.93f, 291.25f, 64.3f, 0);
			set_blip_sprite(*iParam1, 385);
			set_blip_colour(*iParam1, 44);
			break;
		
		case 34:
			*iParam1 = func_150(-303.82f, 6211.29f, 31.05f, 0);
			set_blip_sprite(*iParam1, 386);
			set_blip_colour(*iParam1, 44);
			break;
		
		case 43:
			*iParam1 = func_150(-44.75f, -1288.67f, 28.21f, 0);
			set_blip_sprite(*iParam1, 149);
			set_blip_colour(*iParam1, 44);
			break;
		
		case 46:
			*iParam1 = func_150(-149.75f, 285.81f, 93.67f, 0);
			set_blip_sprite(*iParam1, 66);
			set_blip_colour(*iParam1, 43);
			break;
		
		case 47:
		case 48:
			if (iParam0 == 47)
			{
				*iParam1 = func_150(-70.71f, 301.43f, 106.79f, 0);
			}
			else
			{
				*iParam1 = func_150(-257.22f, 292.85f, 90.63f, 0);
			}
			set_blip_sprite(*iParam1, 389);
			set_blip_colour(*iParam1, 43);
			break;
	}
}

int func_150(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_151(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_151(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 9:
		case 11:
		case 12:
		case 13:
		case 18:
		case 19:
		case 21:
		case 23:
		case 27:
		case 30:
		case 34:
		case 43:
		case 46:
		case 47:
		case 48:
			return true;
			break;
	}
	return false;
}

bool func_153(int iParam0, int iParam1)
{
	switch (*iParam0.f_16)
	{
		case 0:
			if (*iParam0 == 12)
			{
				if (is_entity_in_angled_area(player_ped_id(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, true, 0))
				{
					if (func_182(*iParam0.f_28[0]))
					{
						if (get_distance_between_coords(get_entity_coords(player_ped_id(), 1), get_entity_coords(*iParam0.f_28[0], 1), 1) < 3f)
						{
							if (func_159(2))
							{
								if (func_157(*iParam0.f_27))
								{
									func_156(*iParam0.f_27, *iParam0);
									func_288("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
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
				else if (func_182(*iParam0.f_28[0]))
				{
					if (func_155(iParam0))
					{
						if (func_159(2))
						{
							if (func_157(*iParam0.f_27))
							{
								func_156(*iParam0.f_27, *iParam0);
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
			else if (*iParam0 == 21)
			{
				if ((((!is_entity_in_angled_area(player_ped_id(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, true, 0) && !is_entity_in_angled_area(player_ped_id(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, true, 0)) && !is_entity_in_angled_area(player_ped_id(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, true, 0)) && !is_entity_in_angled_area(player_ped_id(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, true, 0))
				{
					if (func_182(*iParam0.f_28[0]))
					{
						if (func_155(iParam0))
						{
							if (func_159(2))
							{
								if (func_157(*iParam0.f_27))
								{
									func_156(*iParam0.f_27, *iParam0);
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
			else if (*iParam0 == 22)
			{
				if (!is_entity_in_angled_area(player_ped_id(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, true, 0))
				{
					if (func_182(*iParam0.f_28[0]))
					{
						if (func_155(iParam0))
						{
							if (func_159(2))
							{
								if (func_157(*iParam0.f_27))
								{
									func_156(*iParam0.f_27, *iParam0);
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
			else if (func_182(*iParam0.f_28[0]))
			{
				if (func_155(iParam0))
				{
					if (func_159(2))
					{
						if (func_157(*iParam0.f_27))
						{
							func_156(*iParam0.f_27, *iParam0);
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
			if (func_182(*iParam0.f_35[0]))
			{
				if (is_ped_in_vehicle(player_ped_id(), *iParam0.f_35[0], 0))
				{
					if (func_159(3))
					{
						func_156(*iParam0.f_27, *iParam0);
						return true;
					}
				}
				else if (iParam1 == 1)
				{
					func_154();
				}
			}
			else
			{
				return false;
			}
			break;
		
		case 1:
			if (does_entity_exist(*iParam0.f_35[0]))
			{
				if (!is_entity_dead(*iParam0.f_35[0], 0))
				{
					if (get_distance_between_coords(get_entity_coords(player_ped_id(), 1), get_entity_coords(*iParam0.f_35[0], 1), 1) < *iParam0.f_15)
					{
						if (func_159(2))
						{
							if (func_157(*iParam0.f_27))
							{
								func_156(*iParam0.f_27, *iParam0);
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
			if (get_distance_between_coords(get_entity_coords(player_ped_id(), 1), *(iParam0.f_17[0 /*3*/]), 1) < *iParam0.f_15)
			{
				if (func_159(2))
				{
					if (func_157(*iParam0.f_27))
					{
						func_156(*iParam0.f_27, *iParam0);
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
			if (is_entity_at_coord(player_ped_id(), *(iParam0.f_17[0 /*3*/]), *(iParam0.f_17[1 /*3*/]), false, true, 0))
			{
				if (func_159(2))
				{
					if (func_157(*iParam0.f_27))
					{
						func_156(*iParam0.f_27, *iParam0);
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
			if (*iParam0 == 6)
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					if (func_182(get_vehicle_ped_is_in(player_ped_id(), 0)))
					{
						if (is_vehicle_model(get_vehicle_ped_is_in(player_ped_id(), 0), joaat("towtruck")) || is_vehicle_model(get_vehicle_ped_is_in(player_ped_id(), 0), joaat("towtruck2")))
						{
							if (is_vehicle_attached_to_tow_truck(get_vehicle_ped_is_in(player_ped_id(), 0), *iParam0.f_35[0]))
							{
								if (func_159(3))
								{
									return true;
								}
							}
						}
						else if ((is_vehicle_model(get_vehicle_ped_is_in(player_ped_id(), 0), joaat("cargobob")) || is_vehicle_model(get_vehicle_ped_is_in(player_ped_id(), 0), joaat("cargobob2"))) || is_vehicle_model(get_vehicle_ped_is_in(player_ped_id(), 0), joaat("cargobob3")))
						{
							if (_is_cargobob_hook_active(get_vehicle_ped_is_in(player_ped_id(), 0)) && is_vehicle_attached_to_cargobob(get_vehicle_ped_is_in(player_ped_id(), 0), *iParam0.f_35[0]))
							{
								if (func_159(3))
								{
									return true;
								}
							}
						}
					}
				}
			}
			else if (*iParam0 == 10)
			{
				if (get_ped_desired_move_blend_ratio(player_ped_id()) >= 2f)
				{
					if (is_entity_in_angled_area(player_ped_id(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, true, 0))
					{
						if (func_159(2))
						{
							if (func_157(*iParam0.f_27))
							{
								func_156(*iParam0.f_27, *iParam0);
								func_288("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return true;
							}
						}
					}
				}
			}
			else if (*iParam0 == 46)
			{
				if (is_entity_in_angled_area(player_ped_id(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, true, 0))
				{
					return false;
				}
			}
			else if (*iParam0 == 31)
			{
				if (is_entity_in_angled_area(player_ped_id(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, true, 0))
				{
					if (func_159(2))
					{
						if (func_157(1))
						{
							func_156(1, *iParam0);
							func_288("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return true;
						}
					}
				}
			}
			else if (*iParam0 == 39)
			{
				if (is_entity_in_angled_area(player_ped_id(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, true, 0))
				{
					if (!is_entity_in_angled_area(player_ped_id(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, true, 0))
					{
						if (!is_entity_in_angled_area(player_ped_id(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, true, 0))
						{
							if (func_159(2))
							{
								if (func_157(*iParam0.f_27))
								{
									func_156(*iParam0.f_27, *iParam0);
									func_288("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return true;
								}
							}
						}
					}
				}
			}
			if (is_entity_in_angled_area(player_ped_id(), *(iParam0.f_17[0 /*3*/]), *(iParam0.f_17[1 /*3*/]), *iParam0.f_24, 0, true, 0))
			{
				if (*iParam0 == 45)
				{
					if (is_entity_in_angled_area(player_ped_id(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, true, 0))
					{
						return false;
					}
				}
				if (func_159(2))
				{
					if (func_157(*iParam0.f_27))
					{
						func_156(*iParam0.f_27, *iParam0);
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

void func_154()
{
	func_27(&(Global_93091.f_2311), &Global_93091, 0, 1, 1, 0);
}

bool func_155(var uParam0)
{
	float fVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0) && *uParam0.f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (get_distance_between_coords(get_entity_coords(player_ped_id(), 1), get_entity_coords(*uParam0.f_28[0], 1), 1) < *uParam0.f_15 + fVar0)
		{
			return true;
		}
	}
	else if (get_distance_between_coords(get_entity_coords(player_ped_id(), 1), get_entity_coords(*uParam0.f_28[0], 1), 1) < *uParam0.f_15)
	{
		return true;
	}
	return false;
}

void func_156(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_113(iParam1))
		{
			return;
		}
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			func_288("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (is_ped_in_any_heli(player_ped_id()) || is_ped_in_any_plane(player_ped_id()))
			{
				func_288("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				set_vehicle_engine_on(get_vehicle_ped_is_in(player_ped_id(), 0), false, 1, 0);
			}
			func_130();
		}
	}
}

bool func_157(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(get_player_index()))
	{
		if (is_ped_on_foot(player_ped_id()))
		{
			return true;
		}
		else if (iParam0)
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				iVar0 = get_players_last_vehicle();
				if (func_158(iVar0))
				{
					if (is_ped_in_any_heli(player_ped_id()) || is_ped_in_any_plane(player_ped_id()))
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

bool func_158(int iParam0)
{
	if (func_182(iParam0))
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

bool func_159(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_89();
				if (!func_36(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_167()) || Global_100201) || Global_25122) || func_166()) || func_165(8, -1)) || func_77()) || func_164()) || func_163()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_167()) || Global_25122) || func_166()) || func_165(8, -1)) || func_163()) || func_77()) || func_164()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_167()) || Global_100201) || Global_25122) || func_166()) || func_165(8, -1)) || func_163()) || func_77()) || func_164()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(player_ped_id(), false)) || func_167()) || Global_100201) || Global_25122) || func_166()) || func_165(8, -1)) || func_77()) || func_164()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_167() || get_player_wanted_level(player_id()) > 0) || func_165(8, -1)) || func_162()) || func_161()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_165(8, -1) || func_77()) || func_164()) || func_161()) || func_160())
						{
							return false;
						}
						if ((is_player_switch_in_progress() && get_player_switch_type() != 3) && get_player_switch_state() < 8)
						{
							return false;
						}
						break;
					
					case 6:
						if (does_entity_exist(player_ped_id()))
						{
							if ((((((((((((((is_ped_in_combat(player_ped_id(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_167()) || Global_25122) || func_166()) || func_165(8, -1)) || func_164()) || func_163()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || func_167()) || func_164()) || Global_100201) || Global_25122) || func_166()) || Global_36839) || func_165(8, -1)) || func_163()) || func_161()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), 1)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_167()) || Global_100201) || Global_25122) || func_166()) || func_165(8, -1)) || func_163()) || func_161()) || func_77()) || func_164()) || func_162())
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

var func_160()
{
	return Global_91317.f_1;
}

int func_161()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_162()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_163()
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

int func_164()
{
	return Global_91330.f_297 > 0;
}

int func_165(int iParam0, int iParam1)
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

var func_166()
{
	return Global_1315913;
}

int func_167()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_168(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return true;
			break;
	}
	return false;
}

void func_169(var uParam0, vector3 vParam1, char* sParam2, char* sParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (get_game_timer() - iLocal_271 > 5000)
			{
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (func_178(player_ped_id(), vParam1, 1) <= 20f)
			{
				if (func_170(&uLocal_106, sParam4, sParam5, 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_129())
			{
				iLocal_271 = get_game_timer();
				*uParam0 = 0;
			}
			else if (func_178(player_ped_id(), vParam1, 1) >= 25f)
			{
				func_127();
				*uParam0 = 0;
			}
			break;
	}
}

int func_170(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_177(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_171(sParam2, iParam3, 0);
}

bool func_171(char* sParam0, int iParam1, int iParam2)
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
					func_128();
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
		if (func_165(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_176();
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
				func_175();
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
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return false;
				}
				if (func_174())
				{
					return false;
				}
				if (is_ped_sprinting(player_ped_id()))
				{
					return false;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(player_ped_id()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(player_ped_id()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_124())
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
			func_173();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_172();
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
		func_128();
	}
	return false;
}

void func_172()
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

void func_173()
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

bool func_174()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(player_ped_id(), &iVar1, 1);
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
		if (get_ped_config_flag(player_ped_id(), 78, 1))
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

void func_175()
{
	if (func_55(14))
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
		Global_14413 = func_89();
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

void func_176()
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

void func_177(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

var func_178(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	
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

void func_179(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 32768;
	if (!func_182(*iParam0.f_28[iParam10]))
	{
		return;
	}
	if (iParam9)
	{
		iVar1 |= 512;
	}
	uParam1.f_7 = get_random_int_in_range(false, uParam1.f_6);
	open_sequence_task(&iVar0);
	task_play_anim(false, *iParam0.f_48, uParam1[uParam1.f_7], 4f, -4f, -1, 0 | iVar1, 0, 0, 0, 0);
	task_play_anim(false, *iParam0.f_48, *iParam0.f_48.f_1, 8f, -8f, -1, 1 | iVar1, 0, 0, 0, 0);
	close_sequence_task(iVar0);
	task_perform_sequence(*iParam0.f_28[iParam10], iVar0);
	clear_sequence_task(&iVar0);
}

bool func_180(int iParam0, vector3 vParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	var uVar0;
	
	if ((((func_182(player_ped_id()) && func_182(*iParam0.f_28[0])) && !func_129()) && get_game_timer() - *iParam0.f_60 > iParam8) && func_178(player_ped_id(), vParam1, 1) < fParam9)
	{
		uVar0 = 16;
		func_233(&uVar0, iParam6, *iParam0.f_28[0], sParam7, 0, 1);
		func_181(&uVar0, sParam4, sParam5, 7, 0, 0);
		*iParam0.f_60 = get_game_timer();
		return true;
	}
	return false;
}

void func_181(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_177(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	set_bit(&Global_14578, false);
	Global_15715 = iParam3;
	StringCopy(&Global_15702, sParam2, 24);
}

bool func_182(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_183(int iParam0, char* sParam1, vector3 vParam2)
{
	if (is_player_playing(player_id()))
	{
		if (!is_string_null_or_empty(sParam1))
		{
			if (Global_35711 == 17)
			{
				if (*iParam0 != -1)
				{
					func_188(iParam0);
				}
			}
			else if (func_187())
			{
				if (*iParam0 != -1)
				{
					func_188(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_178(player_ped_id(), vParam2, 1) <= 100f)
				{
					func_186(iParam0, 1);
				}
			}
			else
			{
				switch (func_185(*iParam0))
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
						func_184(*iParam0, 1);
						break;
					
					case 2:
						stop_cutscene(0);
						remove_cutscene();
						_0xF8155A7F03DDFC8E(0);
						func_184(*iParam0, 0);
						break;
				}
				if (func_178(player_ped_id(), vParam2, 1) > 120f)
				{
					func_188(iParam0);
				}
			}
		}
	}
}

void func_184(int iParam0, int iParam1)
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

int func_185(int iParam0)
{
	if (Global_69485 == iParam0)
	{
		if (Global_69486 == -1)
		{
			if (Global_69484 < get_frame_count())
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

void func_186(int iParam0, int iParam1)
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

var func_187()
{
	return Global_88920;
}

void func_188(int iParam0)
{
	stop_cutscene(0);
	remove_cutscene();
	func_189(iParam0);
}

void func_189(int iParam0)
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
		func_184(*iParam0, 0);
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
	Global_69484 = get_frame_count();
	*iParam0 = -1;
}

void func_190(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_146();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_100241[iParam0 /*10*/].f_1 = 1;
}

bool func_191(int iParam0, int iParam1)
{
	struct<27> Var0;
	
	if (Global_69489)
	{
		func_288("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return false;
	}
	func_94(*iParam0, &Var0);
	if ((func_228(*iParam0) || func_226(*iParam0)) || Global_69734 == 1)
	{
		return true;
	}
	if (!is_world_point_within_brain_activation_range())
	{
		func_288("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return false;
	}
	if (func_222(*iParam0))
	{
		if (*iParam0 == 19)
		{
			func_221(*iParam0.f_28[0]);
		}
		func_288("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return false;
	}
	if (*iParam0.f_25 == 1)
	{
		if (!func_201(iParam0, 1, 0))
		{
			return false;
		}
	}
	else if (*iParam0.f_16 == 0)
	{
		if (!func_201(iParam0, 0, 0))
		{
			return false;
		}
	}
	if (((((*iParam0 == 16 || *iParam0 == 9) || *iParam0 == 18) || *iParam0 == 22) || *iParam0 == 32) || *iParam0 == 51)
	{
		if (!func_199(iParam0, 1, 1))
		{
			if (*iParam0 == 16)
			{
				func_198(iParam0);
			}
			else
			{
				func_196(iParam0);
			}
			return false;
		}
	}
	else if (*iParam0 == 24)
	{
		if (!func_199(iParam0, 0, 1))
		{
			func_196(iParam0);
			return false;
		}
	}
	else if (*iParam0 == 6)
	{
		if (!func_199(iParam0, 0, 1))
		{
			return false;
		}
	}
	else if (*iParam0.f_26 == 1)
	{
		if (!func_199(iParam0, 1, 0))
		{
			func_196(iParam0);
			return false;
		}
	}
	else if (*iParam0.f_16 == 2 || *iParam0.f_16 == 1)
	{
		if (!func_199(iParam0, 0, 0))
		{
			func_196(iParam0);
			return false;
		}
	}
	if (*iParam0.f_16 == 2 || *iParam0.f_16 == 1)
	{
		if (func_182(*iParam0.f_35[0]))
		{
			if (!is_entity_at_coord(*iParam0.f_35[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return false;
			}
		}
	}
	if (*iParam0 == 10)
	{
		if (is_explosion_in_sphere(-1, *(iParam0.f_17[0 /*3*/]), 8f))
		{
			func_288("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return false;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!is_bit_set(Var0.f_26, func_89()))
		{
			func_288("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return false;
		}
	}
	if (func_195(iParam0.f_48) && iParam1)
	{
		func_192(*iParam0.f_28[0], iParam0.f_48, *iParam0);
	}
	return true;
}

void func_192(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_182(iParam0))
	{
		switch (*uParam1.f_3)
		{
			case 1:
				if (func_195(uParam1))
				{
					if (has_anim_dict_loaded(*uParam1))
					{
						clear_ped_tasks_immediately(iParam0);
						if (iParam2 != 21)
						{
							if (func_66(*uParam1.f_5, 0f, 0f, 0f, 0))
							{
								task_play_anim(iParam0, *uParam1, *uParam1.f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								open_sequence_task(&iVar0);
								if (func_194(uParam1))
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
				if (!func_194(uParam1) || !is_entity_playing_anim(iParam0, *uParam1, *uParam1.f_2, 3))
				{
					if (func_193(iParam2) && !is_ped_facing_ped(iParam0, player_ped_id(), 25f))
					{
						task_turn_ped_to_face_entity(iParam0, player_ped_id(), 0);
						*uParam1.f_3 = 5;
					}
					else if ((func_194(uParam1) && *uParam1.f_4 == 0) && get_distance_between_coords(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam0, 1), 1) < 20f)
					{
						*uParam1.f_3 = 3;
					}
				}
				break;
			
			case 3:
				open_sequence_task(&iVar1);
				if (func_66(*uParam1.f_5, 0f, 0f, 0f, 0))
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
				if (func_193(iParam2))
				{
					*uParam1.f_3 = 2;
				}
				else
				{
					*uParam1.f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_193(iParam2) || is_ped_facing_ped(iParam0, player_ped_id(), 10f))
				{
					if (func_66(*uParam1.f_5, 0f, 0f, 0f, 0))
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

bool func_193(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return true;
	}
	return false;
}

bool func_194(var uParam0)
{
	if (is_string_null_or_empty(*uParam0.f_2))
	{
		return false;
	}
	return true;
}

bool func_195(var uParam0)
{
	if (is_string_null_or_empty(*uParam0) || is_string_null_or_empty(*uParam0.f_1))
	{
		return false;
	}
	return true;
}

void func_196(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 52)
	{
		func_197(uParam0.f_41[1]);
		func_197(uParam0.f_41[2]);
	}
	if (func_182(player_ped_id()))
	{
		iVar0 = 0;
		while (iVar0 <= *uParam0.f_28 - 1)
		{
			if (func_110(*uParam0.f_28[iVar0]))
			{
				if (!is_ped_in_any_vehicle(*uParam0.f_28[iVar0], 0))
				{
					set_entity_collision(*uParam0.f_28[iVar0], true, 0);
					freeze_entity_position(*uParam0.f_28[0], false);
				}
				set_ped_keep_task(*uParam0.f_28[iVar0], true);
				if (*uParam0 == 34)
				{
					if (func_182(*uParam0.f_41[0]))
					{
						set_entity_collision(*uParam0.f_41[0], true, 0);
						freeze_entity_position(*uParam0.f_41[0], false);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_221(*uParam0.f_28[iVar0]);
						break;
					
					case 8:
						request_anim_dict("rcmcollect_paperleadinout@");
						while (!has_anim_dict_loaded("rcmcollect_paperleadinout@"))
						{
							wait(0);
						}
						open_sequence_task(&iVar1);
						task_play_anim(false, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						task_smart_flee_ped(false, player_ped_id(), 10000f, -1, 0, 0);
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
						task_smart_flee_ped(false, player_ped_id(), 10000f, -1, 0, 0);
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
						task_smart_flee_ped(false, player_ped_id(), 10000f, -1, 0, 0);
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
						task_smart_flee_ped(false, player_ped_id(), 10000f, -1, 0, 0);
						close_sequence_task(iVar1);
						task_perform_sequence(*uParam0.f_28[iVar0], iVar1);
						clear_sequence_task(&iVar1);
						break;
					
					default:
						clear_ped_secondary_task(*uParam0.f_28[iVar0]);
						task_smart_flee_ped(*uParam0.f_28[iVar0], player_ped_id(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_197(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, 1, true);
		}
		delete_object(iParam0);
	}
}

void func_198(var uParam0)
{
	int iVar0;
	
	if (func_182(player_ped_id()))
	{
		iVar0 = 0;
		while (iVar0 <= *uParam0.f_28 - 1)
		{
			if (func_110(*uParam0.f_28[iVar0]))
			{
				set_ped_combat_attributes(*uParam0.f_28[iVar0], 1, false);
				set_blocking_of_non_temporary_events(*uParam0.f_28[iVar0], false);
				set_ped_keep_task(*uParam0.f_28[iVar0], true);
				task_combat_ped(*uParam0.f_28[iVar0], player_ped_id(), 0, 16);
				set_ped_as_no_longer_needed(uParam0.f_28[iVar0]);
			}
			iVar0++;
		}
	}
}

bool func_199(var uParam0, int iParam1, int iParam2)
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
	if (func_110(player_ped_id()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (does_entity_exist(*uParam0.f_35[iVar0]))
			{
				if (is_entity_dead(*uParam0.f_35[iVar0], 0))
				{
					func_288("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return false;
				}
				if (!is_vehicle_driveable(*uParam0.f_35[iVar0], 0))
				{
					func_288("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return false;
				}
				if (has_entity_been_damaged_by_entity(*uParam0.f_35[iVar0], player_ped_id(), 0))
				{
					func_288("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return false;
				}
				if (get_entity_health(*uParam0.f_35[iVar0]) < 850)
				{
					func_288("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return false;
				}
				if (iParam2)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						if (is_entity_touching_entity(*uParam0.f_35[iVar0], player_ped_id()) && get_entity_speed(player_ped_id()) > 5f)
						{
							func_288("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return false;
						}
						iVar2 = get_players_last_vehicle();
						if (func_158(iVar2))
						{
							if (get_entity_model(iVar2) == joaat("towtruck") || get_entity_model(iVar2) == joaat("towtruck2"))
							{
								if (func_158(*uParam0.f_35[iVar0]))
								{
									if (is_vehicle_attached_to_tow_truck(iVar2, *uParam0.f_35[iVar0]))
									{
										func_288("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return false;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = get_players_last_vehicle();
						if (func_158(iVar3))
						{
							if (is_entity_touching_entity(*uParam0.f_35[iVar0], iVar3) && get_entity_speed(iVar3) > 6f)
							{
								func_288("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return false;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_200(player_ped_id(), *uParam0.f_35[iVar0]))
							{
								func_288("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
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

bool func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
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

bool func_201(var uParam0, int iParam1, int iParam2)
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
	if (func_110(player_ped_id()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (does_entity_exist(*uParam0.f_28[iVar0]))
			{
				if (!is_ped_injured(*uParam0.f_28[iVar0]))
				{
					if (is_ped_sitting_in_any_vehicle(player_ped_id()))
					{
						if (is_entity_touching_entity(player_ped_id(), *uParam0.f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_196(uParam0);
							}
							else
							{
								func_198(uParam0);
							}
							if (func_129())
							{
								func_127();
							}
							func_288("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return false;
						}
					}
					if ((has_entity_been_damaged_by_any_ped(*uParam0.f_28[iVar0]) || has_entity_been_damaged_by_any_vehicle(*uParam0.f_28[iVar0])) || has_entity_been_damaged_by_any_object(*uParam0.f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_196(uParam0);
						}
						else
						{
							func_198(uParam0);
						}
						func_288("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return false;
					}
					if (is_ped_ragdoll(*uParam0.f_28[iVar0]))
					{
						if (is_entity_at_entity(*uParam0.f_28[iVar0], player_ped_id(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_196(uParam0);
							}
							else
							{
								func_198(uParam0);
							}
							func_288("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return false;
						}
					}
					if (func_220(*uParam0))
					{
						if (!func_138(*uParam0))
						{
							if (func_215(*uParam0.f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_196(uParam0);
								}
								else
								{
									func_198(uParam0);
								}
								func_288("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return false;
							}
						}
						if (is_explosion_in_sphere(-1, get_entity_coords(*uParam0.f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_196(uParam0);
							}
							else
							{
								func_198(uParam0);
							}
							func_288("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
						if (func_203(*uParam0.f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_196(uParam0);
							}
							else
							{
								func_198(uParam0);
							}
							func_288("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return false;
						}
					}
					if (!func_202(*uParam0))
					{
						if (is_explosion_in_sphere(-1, get_entity_coords(*uParam0.f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_196(uParam0);
							}
							else
							{
								func_198(uParam0);
							}
							func_288("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
						if (get_player_wanted_level(player_id()) > 0)
						{
							if (iParam2 == 0)
							{
								func_196(uParam0);
							}
							else
							{
								func_198(uParam0);
							}
							func_288("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return false;
						}
					}
				}
				else
				{
					func_288("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_182(*uParam0.f_41[0]))
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

bool func_202(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return true;
	}
	return false;
}

bool func_203(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_182(player_ped_id()) && func_182(iParam0))
	{
		if (func_214(iParam0) || is_player_targetting_entity(player_id(), iParam0))
		{
			if (is_ped_armed(player_ped_id(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (is_entity_at_entity(player_ped_id(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_204(iParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_204(int iParam0, float fParam1)
{
	return func_205(iParam0, player_ped_id(), fParam1, 1, 250, 7);
}

int func_205(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar4;
	
	iVar4 = func_213(iParam0, iParam1);
	if (!func_182(iParam0) || !func_182(iParam1))
	{
		if (iVar4 != -1)
		{
			func_212(&(Local_37[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_209(iParam0, iParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_208();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = {get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f)};
	uVar0 = func_206(&(Local_37[iVar4 /*4*/]), vVar1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || get_game_timer() - Local_37[iVar4 /*4*/].f_3 < iParam4);
}

bool func_206(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = false;
	if (!func_182(iParam4))
	{
		*uParam0 = 0;
		return false;
	}
	if (*uParam0 == 0)
	{
		vVar1 = {func_207(iParam4, iParam7)};
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
		func_182(iVar7);
		if (get_ped_index_from_entity_index(iVar7) == iParam4)
		{
			if (iLocal_78)
			{
				draw_debug_line_with_two_colours(vParam1, get_entity_coords(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = get_game_timer();
			return true;
		}
		return false;
	}
	if (is_entity_a_vehicle(iVar7))
	{
		func_182(iVar7);
		if (is_ped_in_any_vehicle(iParam4, 0))
		{
			if (get_vehicle_index_from_entity_index(iVar7) == get_vehicle_ped_is_in(iParam4, 0))
			{
				if (iLocal_78)
				{
					draw_debug_line_with_two_colours(vParam1, get_entity_coords(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = get_game_timer();
				return true;
			}
		}
		return false;
	}
	return false;
}

Vector3 func_207(int iParam0, int iParam1)
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

int func_208()
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

bool func_209(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = {func_211(get_entity_coords(iParam1, 1) - get_entity_coords(iParam0, 1))};
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
		vVar3 = {func_211(get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) - get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_210(vVar3, vVar0);
	if (fVar6 <= cos(fParam2 / 2f))
	{
		return false;
	}
	return true;
}

float func_210(vector3 vParam0, vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

Vector3 func_211(vector3 vParam0)
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

void func_212(var uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
}

int func_213(int iParam0, int iParam1)
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

bool func_214(int iParam0)
{
	if (is_player_free_aiming_at_entity(player_id(), iParam0) && is_ped_armed(player_ped_id(), 6))
	{
		return true;
	}
	return false;
}

bool func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_182(player_ped_id()) && func_182(iParam0))
	{
		get_current_ped_weapon(player_ped_id(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!iParam2)
		{
			if (func_219(iParam0, iParam1, fVar0, fVar1))
			{
				return true;
			}
			if (func_216(iParam0, fVar1, iParam3, iParam4))
			{
				return true;
			}
		}
		else
		{
			if (is_ped_current_weapon_silenced(player_ped_id()))
			{
				if (is_ped_shooting(player_ped_id()))
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
				if (func_219(iParam0, iParam1, fVar0, fVar1))
				{
					return true;
				}
			}
			if (func_216(iParam0, fVar1, iParam3, iParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_216(int iParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	
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
				if (func_217(iParam0, fParam1))
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
			if (func_217(iParam0, fParam1))
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

bool func_217(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_218(iParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_218(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = {func_211(vParam1 - get_entity_coords(iParam0, 1))};
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
		vVar3 = {func_211(get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) - get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_210(vVar3, vVar0);
	if (fVar6 <= cos(fParam4 / 2f))
	{
		return false;
	}
	return true;
}

bool func_219(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam1)
	{
		if (is_ped_shooting(player_ped_id()))
		{
			if (is_entity_at_entity(player_ped_id(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
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

bool func_220(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return false;
	}
	return true;
}

void func_221(int iParam0)
{
	int iVar0;
	
	if (func_182(player_ped_id()) && func_182(iParam0))
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
		task_smart_flee_ped(false, player_ped_id(), 10000f, -1, 0, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(iParam0, iVar0);
		clear_sequence_task(&iVar0);
	}
}

bool func_222(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_146();
	}
	if (iParam0 == -1)
	{
		return true;
	}
	if (func_228(iParam0))
	{
		return false;
	}
	if (!func_143(4))
	{
		if (func_226(iParam0))
		{
		}
		else
		{
			return true;
		}
	}
	if (func_225() && !func_224())
	{
		return true;
	}
	if (!func_223(iParam0))
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (get_player_wanted_level(player_id()) != 0)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(Global_101154.f_17264[iParam0 /*6*/], 2))
	{
		return true;
	}
	return false;
}

bool func_223(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_224()
{
	if (is_pc_version())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return true;
		}
	}
	return false;
}

int func_225()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_226(int iParam0)
{
	if ((func_227() && Global_91278.f_11 == 6) && iParam0 == func_147(&(Global_91278.f_3), 0))
	{
		return true;
	}
	return false;
}

bool func_227()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

bool func_228(int iParam0)
{
	if (func_92(0))
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

void func_229()
{
	vector3 vVar0;
	float fVar3;
	
	vVar0 = {190.2424f, -956.479f, 29.08f};
	fVar3 = 12f;
	if (func_182(player_ped_id()))
	{
		if (func_230(player_ped_id(), vVar0, fVar3))
		{
			func_133();
		}
	}
}

int func_230(int iParam0, vector3 vParam1, float fParam2)
{
	return vdist2(get_entity_coords(iParam0, 1), vParam1) <= fParam4 * fParam4;
}

void func_231(int iParam0)
{
	if (func_182(*iParam0.f_28[0]))
	{
		set_ped_reset_flag(*iParam0.f_28[0], 64, true);
		set_ped_reset_flag(*iParam0.f_28[0], 249, true);
		if (is_explosion_in_sphere(-1, get_entity_coords(*iParam0.f_28[0], 1), 5.1f))
		{
			func_232(iParam0);
			if (func_182(*iParam0.f_28[0]))
			{
				apply_damage_to_ped(*iParam0.f_28[0], 1000, 1);
			}
		}
	}
}

void func_232(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 2 || *uParam0 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (func_182(*uParam0.f_41[iVar0]))
			{
				freeze_entity_position(*uParam0.f_41[iVar0], false);
			}
			iVar0++;
		}
		if (func_182(*uParam0.f_28[0]))
		{
			freeze_entity_position(*uParam0.f_28[0], false);
			set_ped_to_ragdoll(*uParam0.f_28[0], 100, 500, 0, 1, 1, 0);
			task_smart_flee_ped(*uParam0.f_28[0], player_ped_id(), 10000f, -1, 0, 0);
		}
		func_197(uParam0.f_41[2]);
	}
}

void func_233(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!is_ped_injured(iParam2))
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
		if (!is_ped_injured(iParam2))
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

int func_234()
{
	return add_scenario_blocking_area(-564f, -1758.1f, 16.5f, -419.31f, -1649f, 23f, 0, 1, 1, 1);
}

bool func_235(int iParam0)
{
	switch (*iParam0)
	{
		case 2:
			if (!func_256(iParam0))
			{
				return false;
			}
			break;
		
		case 3:
			if (!func_253(iParam0))
			{
				return false;
			}
			break;
		
		case 4:
			if (!func_247(iParam0))
			{
				return false;
			}
			break;
		
		case 5:
			if (!func_244(iParam0))
			{
				return false;
			}
			break;
		
		case 6:
			if (!func_239(iParam0))
			{
				return false;
			}
			break;
		
		case 7:
			if (!func_238(iParam0))
			{
				return false;
			}
			break;
	}
	if (*iParam0 == 2)
	{
		func_237(&Local_97);
		func_236(&Local_97, "democ_only_works");
		func_236(&Local_97, "gift_from_god");
		func_236(&Local_97, "rigged_vote");
		func_236(&Local_97, "suck_my");
		func_236(&Local_97, "tyranny");
	}
	func_288("Created initial scene");
	return true;
}

void func_236(var uParam0, char* sParam1)
{
	if (*uParam0.f_6 >= *uParam0)
	{
		return;
	}
	*uParam0[*uParam0.f_6] = sParam1;
	*uParam0.f_6++;
}

void func_237(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_6 = 0;
	*uParam0.f_7 = -1;
}

bool func_238(var uParam0)
{
	*uParam0.f_16 = 3;
	*(uParam0.f_17[0 /*3*/]) = {237.65f, -385.41f, 44.4f};
	*uParam0.f_27 = 1;
	return true;
}

bool func_239(var uParam0)
{
	int[] iVar0 = new int[3];
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	Vector3 fVar16;
	Vector3 fVar17;
	int iVar18;
	int iVar19;
	
	vVar4 = {-468.9f, -1713.06f, 18.21f};
	vVar7 = {-426.56f, -1717.89f, 18.2f};
	vVar10 = {-0.1f, -0.85f, 0.23f};
	vVar13 = {8f, 0.5f, 0f};
	fVar16 = -76.2f;
	fVar17 = 43.5f;
	iVar0[0] = joaat("emperor2");
	iVar0[1] = joaat("prop_weed_tub_01");
	iVar0[2] = joaat("towtruck");
	switch (iLocal_91)
	{
		case 0:
			*uParam0.f_16 = 5;
			*(uParam0.f_17[0 /*3*/]) = {-480.9929f, -1712.65f, 17.4524f};
			*(uParam0.f_17[1 /*3*/]) = {-443.6129f, -1705.886f, 27.62214f};
			*uParam0.f_24 = 31f;
			*uParam0.f_27 = 1;
			*uParam0.f_26 = 1;
			iVar18 = 0;
			while (iVar18 <= iVar0 - 1)
			{
				request_model(iVar0[iVar18]);
				iVar18++;
			}
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_243(&iVar0))
			{
				return false;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			iVar19 = true;
			if (!does_entity_exist(*uParam0.f_35[0]))
			{
				func_241(uParam0.f_35[0], iVar0[0], vVar4, fVar16);
				if (does_entity_exist(*uParam0.f_35[0]))
				{
					set_vehicle_alarm(*uParam0.f_35[0], 0);
					set_vehicle_model_is_suppressed(iVar0[0], true);
					set_vehicle_name_debug(*uParam0.f_35[0], "WEED STASH VEHICLE");
					_0x51BB2D88D31A914B(*uParam0.f_35[0], false);
					_0x192547247864DFDD(*uParam0.f_35[0], false);
					set_vehicle_colour_combination(*uParam0.f_35[0], true);
					set_vehicle_undriveable(*uParam0.f_35[0], true);
				}
				else
				{
					iVar19 = false;
				}
			}
			if (!does_entity_exist(*uParam0.f_41[0]))
			{
				func_240(uParam0.f_41[0], iVar0[1], vVar4 + vVar10, 0f);
				if (does_entity_exist(*uParam0.f_41[0]) && does_entity_exist(*uParam0.f_35[0]))
				{
					attach_entity_to_entity(*uParam0.f_41[0], *uParam0.f_35[0], 0, vVar10, vVar13, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					iVar19 = false;
				}
			}
			if (!does_entity_exist(*uParam0.f_35[1]))
			{
				func_241(uParam0.f_35[1], iVar0[2], vVar7, fVar17);
				set_vehicle_colours(*uParam0.f_35[1], 39, 43);
			}
			if (iVar19)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			iVar18 = 0;
			while (iVar18 <= iVar0 - 1)
			{
				set_model_as_no_longer_needed(iVar0[iVar18]);
				iVar18++;
			}
			return true;
			break;
	}
	return false;
}

void func_240(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3)
{
	func_197(iParam0);
	*iParam0 = create_object(iParam1, vParam2, 1, true, false);
	set_entity_heading(*iParam0, fParam5);
}

void func_241(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3)
{
	func_242(iParam0);
	*iParam0 = create_vehicle(iParam1, vParam2, fParam5, 1, true);
	if (does_entity_exist(*iParam0))
	{
		set_vehicle_on_ground_properly(*iParam0);
		set_entity_health(*iParam0, 1000);
	}
}

void func_242(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, 0);
		}
		if (func_158(*iParam0))
		{
			if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
			{
				if (func_182(player_ped_id()))
				{
					if (is_ped_in_vehicle(player_ped_id(), *iParam0, 0))
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
			if (func_182(player_ped_id()))
			{
				if (is_ped_in_vehicle(player_ped_id(), *iParam0, 0))
				{
					set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			delete_vehicle(iParam0);
		}
	}
}

bool func_243(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0 - 1)
	{
		if (!has_model_loaded(*iParam0[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_244(var uParam0)
{
	int[] iVar0 = new int[4];
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	Vector3 fVar14;
	Vector3 fVar15;
	int iVar16;
	int iVar17;
	
	vVar5 = {1199.8f, -1259.22f, 34.23f};
	vVar8 = {0f, -1f, 0.64f};
	vVar11 = {1195.3f, -1312.74f, 34.75f};
	fVar14 = 174.7f;
	fVar15 = 282.4f;
	iVar0[0] = joaat("dloader");
	iVar0[1] = joaat("prop_weed_tub_01b");
	iVar0[2] = joaat("police4");
	iVar0[3] = joaat("a_m_y_business_01");
	switch (iLocal_91)
	{
		case 0:
			*uParam0.f_16 = 5;
			*(uParam0.f_17[0 /*3*/]) = {1198.367f, -1326.095f, 33.9683f};
			*(uParam0.f_17[1 /*3*/]) = {1202.237f, -1235.374f, 43.97641f};
			*uParam0.f_24 = 31f;
			*uParam0.f_27 = 1;
			*uParam0.f_26 = 1;
			iVar16 = 0;
			while (iVar16 <= iVar0 - 1)
			{
				request_model(iVar0[iVar16]);
				iVar16++;
			}
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_243(&iVar0))
			{
				return false;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			iVar17 = true;
			func_241(uParam0.f_35[0], iVar0[0], vVar5, fVar14);
			if (does_entity_exist(*uParam0.f_35[0]))
			{
				set_vehicle_colour_combination(*uParam0.f_35[0], true);
				set_vehicle_alarm(*uParam0.f_35[0], 0);
				set_vehicle_model_is_suppressed(iVar0[0], true);
				set_vehicle_name_debug(*uParam0.f_35[0], "WEED STASH VEHICLE");
				_0x51BB2D88D31A914B(*uParam0.f_35[0], false);
				_0x192547247864DFDD(*uParam0.f_35[0], false);
				set_vehicle_extra(*uParam0.f_35[0], 1, true);
				set_vehicle_extra(*uParam0.f_35[0], 2, true);
				set_vehicle_extra(*uParam0.f_35[0], 3, true);
			}
			else
			{
				iVar17 = false;
			}
			if (!does_entity_exist(*uParam0.f_41[0]))
			{
				func_240(uParam0.f_41[0], iVar0[1], vVar5 + vVar8, 0f);
				if (does_entity_exist(*uParam0.f_41[0]) && does_entity_exist(*uParam0.f_35[0]))
				{
					attach_entity_to_entity(*uParam0.f_41[0], *uParam0.f_35[0], 0, vVar8, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
				}
				else
				{
					iVar17 = false;
				}
			}
			if (!does_entity_exist(*uParam0.f_35[1]))
			{
				func_241(uParam0.f_35[1], iVar0[2], vVar11, fVar15);
			}
			if (!does_entity_exist(*uParam0.f_28[0]))
			{
				func_245(uParam0.f_28[0], iVar0[3], vVar11, fVar15, 6);
			}
			if (!does_entity_exist(*uParam0.f_28[1]))
			{
				func_245(uParam0.f_28[1], iVar0[3], vVar11, fVar15, 6);
			}
			if (iVar17)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			if (func_182(*uParam0.f_35[1]))
			{
				if (func_182(*uParam0.f_28[0]))
				{
					set_ped_as_cop(*uParam0.f_28[0], 1);
					set_ped_into_vehicle(*uParam0.f_28[0], *uParam0.f_35[1], -1);
					give_delayed_weapon_to_ped(*uParam0.f_28[0], joaat("weapon_pistol"), 100, 1);
				}
				if (func_182(*uParam0.f_28[1]))
				{
					set_ped_as_cop(*uParam0.f_28[1], 1);
					set_ped_into_vehicle(*uParam0.f_28[1], *uParam0.f_35[1], false);
					give_delayed_weapon_to_ped(*uParam0.f_28[1], joaat("weapon_pistol"), 100, 1);
				}
			}
			iVar16 = 0;
			while (iVar16 <= iVar0 - 1)
			{
				set_model_as_no_longer_needed(iVar0[iVar16]);
				iVar16++;
			}
			return true;
			break;
	}
	return false;
}

void func_245(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4)
{
	func_246(iParam0);
	*iParam0 = create_ped(iParam6, iParam1, vParam2, fParam5, 0, false);
}

void func_246(int iParam0)
{
	if (does_entity_exist(*iParam0))
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

bool func_247(var uParam0)
{
	int[] iVar0 = new int[2];
	vector3 vVar3;
	Vector3 fVar6;
	int iVar7;
	int iVar8;
	
	vVar3 = {417.78f, -765.71f, 29.39f};
	fVar6 = 87.3f;
	iVar0[0] = uLocal_92;
	iVar0[1] = joaat("p_cs_clipboard");
	switch (iLocal_91)
	{
		case 0:
			*uParam0.f_16 = 5;
			*uParam0.f_27 = 0;
			*(uParam0.f_17[0 /*3*/]) = {415.4587f, -773.3615f, 27.8549f};
			*(uParam0.f_17[1 /*3*/]) = {415.5205f, -758.5715f, 31.34455f};
			*uParam0.f_24 = 14.5f;
			StringCopy(uParam0.f_9, "BAR_5_RCM_P2", 24);
			*uParam0.f_25 = 1;
			iVar7 = 0;
			while (iVar7 <= iVar0 - 1)
			{
				request_model(iVar0[iVar7]);
				iVar7++;
			}
			func_252(uParam0.f_48, "rcm_barry3", "bar_3_rcm_barry_standing_on_street_base", "bar_3_rcm_barry_standing_on_street_fidget");
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_243(&iVar0) || !func_251(uParam0.f_48))
			{
				return false;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			iVar8 = true;
			if (!does_entity_exist(*uParam0.f_28[0]))
			{
				if (func_248(uParam0.f_28[0], 49, vVar3, fVar6, "RC LAUNCHER: BARRY 3", 1))
				{
					set_ped_prop_index(*uParam0.f_28[0], true, 0, 0, false);
				}
				else
				{
					iVar8 = false;
				}
			}
			if (!does_entity_exist(*uParam0.f_41[0]))
			{
				func_240(uParam0.f_41[0], iVar0[1], vVar3 + Vector(0f, 0f, 5f), -115.18f);
				if (func_182(*uParam0.f_41[0]) && func_182(*uParam0.f_28[0]))
				{
					attach_entity_to_entity(*uParam0.f_41[0], *uParam0.f_28[0], get_ped_bone_index(*uParam0.f_28[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					iVar8 = false;
				}
			}
			if (iVar8)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			iVar7 = 0;
			while (iVar7 <= iVar0 - 1)
			{
				set_model_as_no_longer_needed(iVar0[iVar7]);
				iVar7++;
			}
			return true;
			break;
	}
	return false;
}

bool func_248(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, char* sParam4, int iParam5)
{
	if (func_249(iParam0, iParam1, vParam2, fParam5, 1))
	{
		if (does_entity_exist(*iParam0))
		{
			if (!is_entity_dead(*iParam0, 0))
			{
				set_blocking_of_non_temporary_events(*iParam0, true);
				set_ped_money(*iParam0, false);
				if (iParam7 == 1)
				{
					set_ped_can_be_targetted(*iParam0, false);
				}
			}
			set_ped_name_debug(*iParam0, sParam6);
		}
		return true;
	}
	return false;
}

bool func_249(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4)
{
	int iVar0;
	
	if (!func_36(iParam1))
	{
		iVar0 = func_291(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			*iParam0 = create_ped(26, iVar0, vParam2, fParam5, 0, false);
			set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (get_ped_drawable_variation(*iParam0, 3) == 0)
				{
					set_ped_component_variation(*iParam0, 5, 2, false, 0);
				}
			}
			func_250(*iParam0, iParam1);
			if (iParam6)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

bool func_250(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return false;
	}
	Global_87445[iVar0 - 3] = uParam0;
	return true;
}

bool func_251(var uParam0)
{
	if (func_195(uParam0))
	{
		request_anim_dict(*uParam0);
		if (has_anim_dict_loaded(*uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_252(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	*uParam0 = sParam1;
	*uParam0.f_1 = sParam2;
	*uParam0.f_2 = sParam3;
	request_anim_dict(*uParam0);
	*uParam0.f_5 = {0f, 0f, 0f};
	*uParam0.f_8 = {0f, 0f, 0f};
	*uParam0.f_3 = 1;
	*uParam0.f_4 = 0;
}

bool func_253(var uParam0)
{
	int[] iVar0 = new int[5];
	vector3 vVar6;
	Vector3 fVar9;
	int iVar10;
	int iVar11;
	
	vVar6 = {190.2424f, -956.479f, 29.08f};
	fVar9 = 69.171f;
	iVar0[0] = uLocal_92;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("prop_protest_sign_01");
	switch (iLocal_91)
	{
		case 0:
			*uParam0.f_16 = 5;
			StringCopy(uParam0.f_9, "BAR_3_RCM", 24);
			*uParam0.f_25 = 1;
			*uParam0.f_27 = 0;
			*(uParam0.f_17[0 /*3*/]) = {190.0315f, -956.3355f, 29.09192f};
			*(uParam0.f_17[1 /*3*/]) = {178.0458f, -950.6594f, 31.09358f};
			*uParam0.f_24 = 23f;
			iVar10 = 0;
			while (iVar10 <= iVar0 - 1)
			{
				request_model(iVar0[iVar10]);
				iVar10++;
			}
			func_252(uParam0.f_48, "rcm_barry2", "lead_in_loop", "lead_in_loop");
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_243(&iVar0) || !func_251(uParam0.f_48))
			{
				return false;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			iVar11 = true;
			if (!does_entity_exist(*uParam0.f_28[0]))
			{
				if (func_248(uParam0.f_28[0], 49, vVar6, fVar9, "RC LAUNCHER: BARRY 2", 1))
				{
					set_ped_prop_index(*uParam0.f_28[0], true, 0, 0, false);
				}
				else
				{
					iVar11 = false;
				}
			}
			if (!does_entity_exist(*uParam0.f_41[0]))
			{
				clear_area_of_objects(189.5964f, -956.0344f, 29.09179f, 2f, 0);
				func_240(uParam0.f_41[0], iVar0[1], 189.5964f, -956.0344f, 29.09179f, func_255(-2.01f));
				if (func_182(*uParam0.f_41[0]))
				{
					freeze_entity_position(*uParam0.f_41[0], true);
					func_240(uParam0.f_41[2], iVar0[3], 189.7901f, -956.1675f, 29.8229f, func_255(-2.01f));
					if (func_182(*uParam0.f_41[2]))
					{
						freeze_entity_position(*uParam0.f_41[2], true);
					}
				}
				else
				{
					iVar11 = false;
				}
			}
			if (!does_entity_exist(*uParam0.f_41[1]))
			{
				func_240(uParam0.f_41[1], iVar0[2], 190.417f, -956.511f, 29.09179f, -99.157f);
				if (func_182(*uParam0.f_41[1]))
				{
					freeze_entity_position(*uParam0.f_41[1], true);
					set_entity_collision(*uParam0.f_41[1], false, 0);
				}
				else
				{
					iVar11 = false;
				}
			}
			if (iVar11)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			if (func_182(*uParam0.f_28[0]))
			{
				set_blocking_of_non_temporary_events(*uParam0.f_28[0], true);
				set_ped_can_be_targetted(*uParam0.f_28[0], false);
				set_ped_config_flag(*uParam0.f_28[0], 208, true);
				set_ped_relationship_group_hash(*uParam0.f_28[0], 1862763509);
				set_entity_coords(*uParam0.f_28[0], vVar6, 1, false, 0, 1);
				set_entity_heading(*uParam0.f_28[0], fVar9);
				freeze_entity_position(*uParam0.f_28[0], true);
				task_play_anim(*uParam0.f_28[0], *uParam0.f_48, *uParam0.f_48.f_1, 8f, -8f, -1, 9, 0, 0, 0, 0);
				task_look_at_entity(*uParam0.f_28[0], player_ped_id(), -1, 0, 2);
			}
			if (func_182(*uParam0.f_41[0]))
			{
				freeze_entity_position(*uParam0.f_41[0], true);
			}
			if (func_182(*uParam0.f_41[1]))
			{
				freeze_entity_position(*uParam0.f_41[1], true);
				set_entity_collision(*uParam0.f_41[1], true, 0);
			}
			func_254(uParam0.f_41[3], iVar0[4]);
			iVar10 = 0;
			while (iVar10 <= iVar0 - 1)
			{
				set_model_as_no_longer_needed(iVar0[iVar10]);
				iVar10++;
			}
			return true;
			break;
	}
	return false;
}

void func_254(int iParam0, int iParam1)
{
	vector3 vVar0;
	Vector3 fVar3;
	
	vVar0 = {192.4462f, -953.5946f, 29.0919f};
	fVar3 = 23.45f;
	func_240(iParam0, iParam1, vVar0, fVar3);
}

float func_255(float fParam0)
{
	return fParam0 * 57.29578f;
}

bool func_256(var uParam0)
{
	int[] iVar0 = new int[7];
	vector3 vVar8;
	Vector3 fVar11;
	int iVar12;
	int iVar13;
	
	vVar8 = {190.2424f, -956.379f, 28.63f};
	fVar11 = func_255(1.12f);
	iVar0[0] = uLocal_92;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("p_cs_lighter_01");
	iVar0[5] = joaat("p_cs_joint_01");
	iVar0[6] = joaat("prop_protest_sign_01");
	switch (iLocal_91)
	{
		case 0:
			*uParam0.f_16 = 5;
			StringCopy(uParam0.f_9, "BAR_1_RCM_P2", 24);
			*uParam0.f_25 = 1;
			*uParam0.f_27 = 0;
			*(uParam0.f_17[0 /*3*/]) = {190.0315f, -956.3355f, 29.09192f};
			*(uParam0.f_17[1 /*3*/]) = {178.0458f, -950.6594f, 31.09358f};
			*uParam0.f_24 = 23f;
			iVar12 = 0;
			while (iVar12 <= iVar0 - 1)
			{
				request_model(iVar0[iVar12]);
				iVar12++;
			}
			func_252(uParam0.f_48, "RCMBarryLeadInOut", "idle", "fidget");
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_243(&iVar0) || !func_251(uParam0.f_48))
			{
				return false;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			iVar13 = true;
			if (!does_entity_exist(*uParam0.f_28[0]))
			{
				if (func_248(uParam0.f_28[0], 49, vVar8, fVar11, "RC LAUNCHER: BARRY 1", 1))
				{
					set_ped_prop_index(*uParam0.f_28[0], true, 0, 0, false);
				}
				else
				{
					iVar13 = false;
				}
			}
			if (!does_entity_exist(*uParam0.f_41[0]))
			{
				clear_area_of_objects(189.5964f, -956.0344f, 29.09179f, 5f, 0);
				func_240(uParam0.f_41[0], iVar0[1], 189.5964f, -956.0344f, 29.09179f, func_255(-2.01f));
				if (func_182(*uParam0.f_41[0]))
				{
					freeze_entity_position(*uParam0.f_41[0], true);
					func_240(uParam0.f_41[2], iVar0[3], 189.7901f, -956.1675f, 29.8229f, func_255(-2.01f));
					if (func_182(*uParam0.f_41[2]))
					{
						freeze_entity_position(*uParam0.f_41[2], true);
					}
				}
				else
				{
					iVar13 = false;
				}
			}
			if (!does_entity_exist(*uParam0.f_41[1]))
			{
				func_240(uParam0.f_41[1], iVar0[2], 190.2574f, -956.3513f, 29.09179f, func_255(-1.68f));
				if (func_182(*uParam0.f_41[1]))
				{
					freeze_entity_position(*uParam0.f_41[1], true);
					set_entity_collision(*uParam0.f_41[1], false, 0);
				}
				else
				{
					iVar13 = false;
				}
			}
			if (iVar13)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			if (func_182(*uParam0.f_28[0]))
			{
				set_blocking_of_non_temporary_events(*uParam0.f_28[0], true);
				set_ped_can_be_targetted(*uParam0.f_28[0], false);
				set_ped_config_flag(*uParam0.f_28[0], 208, true);
				set_ped_relationship_group_hash(*uParam0.f_28[0], 1862763509);
				set_entity_coords(*uParam0.f_28[0], vVar8, 1, false, 0, 1);
				set_entity_heading(*uParam0.f_28[0], fVar11);
				freeze_entity_position(*uParam0.f_28[0], true);
				task_play_anim(*uParam0.f_28[0], *uParam0.f_48, *uParam0.f_48.f_1, 8f, -8f, -1, 9, 0, 0, 0, 0);
				task_look_at_entity(*uParam0.f_28[0], player_ped_id(), -1, 0, 2);
			}
			if (func_182(*uParam0.f_41[0]))
			{
				freeze_entity_position(*uParam0.f_41[0], true);
			}
			if (func_182(*uParam0.f_41[1]))
			{
				freeze_entity_position(*uParam0.f_41[1], true);
				set_entity_collision(*uParam0.f_41[1], true, 0);
			}
			func_240(uParam0.f_41[4], iVar0[5], 189.895f, -955.945f, 29.818f, 0f);
			if (func_182(*uParam0.f_41[4]))
			{
				set_entity_rotation(*uParam0.f_41[4], -90f, 0f, -30.8f, 2, 1);
				freeze_entity_position(*uParam0.f_41[4], true);
			}
			func_240(uParam0.f_41[3], iVar0[4], 189.783f, -956.015f, 29.79f, 0f);
			if (func_182(*uParam0.f_41[3]))
			{
				set_entity_rotation(*uParam0.f_41[3], -90f, 0f, 75f, 2, 1);
				freeze_entity_position(*uParam0.f_41[3], true);
			}
			func_254(uParam0.f_41[5], iVar0[6]);
			iVar12 = 0;
			while (iVar12 <= iVar0 - 1)
			{
				set_model_as_no_longer_needed(iVar0[iVar12]);
				iVar12++;
			}
			return true;
			break;
	}
	return false;
}

bool func_257(int iParam0)
{
	struct<27> Var0;
	int iVar32;
	
	func_94(iParam0, &Var0);
	iVar32 = func_89();
	if (iVar32 == 145)
	{
		return true;
	}
	else if ((iVar32 != 1 && iVar32 != 0) && iVar32 != 2)
	{
		return true;
	}
	if (!is_bit_set(Var0.f_26, iVar32))
	{
		return true;
	}
	return false;
}

bool func_258(int iParam0)
{
	char* sVar0;
	
	if (Global_69489)
	{
		func_288("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return false;
	}
	if (!Global_101154.f_7775 && !func_92(1))
	{
		func_288("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return false;
	}
	if (!func_259(iParam0))
	{
		Global_100241[iParam0 /*10*/].f_1 = 1;
		func_288("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return false;
	}
	if (Global_91278.f_11 == 6)
	{
		if (Global_91278 < 9)
		{
			func_94(iParam0, &sVar0);
			if (are_strings_equal(&(Global_91278.f_3), sVar0))
			{
				func_288("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return false;
			}
		}
	}
	if (_get_number_of_instances_of_streamed_script(joaat("candidate_controller")) == 0)
	{
		Global_100241[iParam0 /*10*/].f_1 = 1;
		func_288("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return false;
	}
	return true;
}

bool func_259(int iParam0)
{
	var uVar0;
	
	func_94(iParam0, &uVar0);
	if (!func_143(4))
	{
		if (func_226(iParam0))
		{
		}
		else
		{
			return false;
		}
	}
	if (func_225() && !func_224())
	{
		return false;
	}
	if (func_265(iParam0))
	{
		return false;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_146();
	}
	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_228(iParam0))
	{
		if (!func_264(iParam0))
		{
			return false;
		}
		if (!func_263(iParam0))
		{
			return false;
		}
		if (func_262(iParam0))
		{
			return false;
		}
	}
	if (iParam0 == 58)
	{
		if (func_260(5))
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

bool func_260(int iParam0)
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
			if (func_260(iVar0))
			{
				return true;
			}
			iVar0++;
		}
	}
	else if (!is_ped_injured(player_ped_id()))
	{
		func_261(iParam0, &sVar1);
		iVar9 = get_interior_at_coords_with_type(Global_86649[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_91330.f_294 == iVar9)
		{
			return true;
		}
	}
	return false;
}

int func_261(int iParam0, char* sParam1)
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

int func_262(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_17264[iParam0 /*6*/], 3);
}

int func_263(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_17264[iParam0 /*6*/], 2);
}

int func_264(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_17264[iParam0 /*6*/], false);
}

bool func_265(int iParam0)
{
	if (func_223(iParam0))
	{
		return false;
	}
	else if (!is_ped_injured(player_ped_id()))
	{
		if (get_player_wanted_level(player_id()) != 0)
		{
			return true;
		}
	}
	return false;
}

void func_266()
{
	func_288("Running end routines.");
	Global_100872--;
}

bool func_267(int iParam0, vector3 vParam1, float fParam2)
{
	int[] iVar0 = new int[4];
	int iVar5;
	
	if (func_89() == 0)
	{
		if (func_268(2, vParam1, fParam4, iParam0))
		{
			return true;
		}
	}
	else if (func_89() == 2)
	{
		if (func_268(3, vParam1, fParam4, iParam0))
		{
			return true;
		}
	}
	iVar0[0] = 4;
	iVar0[1] = 5;
	iVar0[2] = 6;
	iVar0[3] = 7;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		if (func_268(iVar0[iVar5], vParam1, fParam4, iParam0))
		{
			iVar5 = iVar0;
			return true;
		}
		iVar5++;
	}
	return false;
}

bool func_268(int iParam0, vector3 vParam1, float fParam2, var uParam3)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_94(iParam0, &Var1);
	if (func_269(Var1.f_6, vParam1, fParam4, 0))
	{
		if (is_bit_set(Global_101154.f_17264[iParam0 /*6*/], false))
		{
			if (!is_bit_set(Global_101154.f_17264[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_228(iParam0))
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

bool func_269(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
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

void func_270(int iParam0, int iParam1)
{
	char* sVar0;
	
	if (iParam1)
	{
		func_288("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_232(iParam0);
		func_277(iParam0, 0, 0, 0);
	}
	if (does_blip_exist(iLocal_96))
	{
		remove_blip(&iLocal_96);
	}
	if (iLocal_93 != -1)
	{
		func_288("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_189(&iLocal_93);
	}
	if (*iParam0 == 6)
	{
		remove_scenario_blocking_area(iLocal_95, 0);
	}
	func_276(iParam0.f_48);
	switch (*iParam0)
	{
		case 4:
			sVar0 = "BARRY3_AMB";
			break;
	}
	func_271(sVar0);
	if (iParam1)
	{
		func_190(*iParam0);
	}
	func_266();
	func_288("SCRIPT TERMINATED");
	terminate_this_thread();
}

void func_271(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (func_274(sParam0))
		{
			func_272();
		}
	}
}

void func_272()
{
	Global_14578 = 0;
	func_273();
}

void func_273()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

bool func_274(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = {func_275()};
	if (are_strings_equal(&Var0, sParam0))
	{
		return true;
	}
	return false;
}

struct<6> func_275()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

bool func_276(var uParam0)
{
	if (func_195(uParam0))
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

void func_277(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_284(uParam0, iParam1);
	func_281(uParam0, iParam2);
	func_278(uParam0, iParam3);
}

void func_278(var uParam0, int iParam1)
{
	func_279(uParam0.f_41, iParam1);
}

void func_279(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (iParam1)
		{
			func_197(uParam0[iVar0]);
		}
		else
		{
			func_280(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_280(int iParam0, int iParam1)
{
	if (does_entity_exist(*iParam0))
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

void func_281(var uParam0, int iParam1)
{
	func_282(uParam0.f_35, iParam1);
}

void func_282(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (iParam1)
		{
			func_242(uParam0[iVar0]);
		}
		else
		{
			func_283(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_283(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		is_entity_dead(*iParam0, 0);
		if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

void func_284(var uParam0, int iParam1)
{
	func_285(uParam0.f_28, iParam1);
}

void func_285(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (iParam1 == 1)
		{
			func_246(uParam0[iVar0]);
		}
		else
		{
			func_286(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_286(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_ped_injured(*iParam0))
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

void func_287(var uParam0)
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

void func_288(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
	}
}

void func_289(var uParam0)
{
	*uParam0 = -1;
	StringCopy(uParam0.f_1, "", 32);
	*uParam0.f_15 = 12f;
	*uParam0.f_16 = 6;
	*uParam0.f_25 = 0;
	*uParam0.f_26 = 0;
	*uParam0.f_27 = 0;
}

void func_290()
{
	func_288("Running start routines.");
	Global_100872++;
}

int func_291(int iParam0)
{
	if (!func_36(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

