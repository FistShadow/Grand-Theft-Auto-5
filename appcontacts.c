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
	int iLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	auto uLocal_33 = 0;
	auto uLocal_34 = 0;
	int iLocal_35 = 0;
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
	auto uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	Vector3 fLocal_92 = 0;
	Vector3 fLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	auto uLocal_99 = 0;
	int iLocal_100 = 0;
	auto uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	auto uLocal_105 = 0;
	int iLocal_106 = 0;
	char*[] sLocal_107 = new char*[1];
	char[16] cLocal_109 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	float fLocal_122 = 0;
	float fLocal_123 = 0;
	float fLocal_124 = 0;
	float fLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	char[16] cLocal_134 = 0;
	auto uLocal_138 = 16;
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
	auto uLocal_302 = 0;
	auto uLocal_303 = 0;
	auto uLocal_304 = 0;
	auto uLocal_305 = 0;
	int iLocal_306 = 0;
	struct<4> Local_307 = 0;
	struct<6> Local_311 = 0;
	var[] uLocal_317 = new var[7];
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	struct<3000> Local_331 = 32;
	Vector3 vLocal_3331 = 0;
	char[64] cLocal_3334 = 0;
	int iLocal_3350 = 0;
	int iLocal_3351 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	iLocal_96 = 9999;
	iLocal_97 = 9999;
	fLocal_122 = 0.82f;
	fLocal_123 = 0.42f;
	fLocal_124 = 0f;
	fLocal_125 = 0f;
	network_set_script_is_safe_for_network_game();
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
	clear_bit(&Global_2284, 18);
	clear_bit(&Global_2284, 20);
	uLocal_303 = Global_101154.f_32575[12 /*29*/].f_1;
	uLocal_304 = Global_101154.f_32575[2 /*29*/].f_1;
	uLocal_305 = Global_101154.f_32575[0 /*29*/].f_1;
	iLocal_104 = get_sound_id();
	if (Global_69489)
	{
		func_265();
	}
	else
	{
		func_255();
	}
	if (!Global_14413.f_1 == 10)
	{
		if (Global_14413.f_1 > 3)
		{
			if (Global_14413.f_1 != 9)
			{
				Global_14413.f_1 = 7;
			}
		}
	}
	iLocal_131 = GAMEPLAY::GET_GAME_TIMER();
	Global_101154.f_32575[74 /*29*/].f_1 = 180;
	Global_101154.f_32575[75 /*29*/].f_1 = 190;
	while (true)
	{
		wait(0);
		if (is_bit_set(Global_2284, 18))
		{
			func_254();
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 8;
			}
			clear_bit(&Global_2284, 18);
			func_253();
		}
		if ((iLocal_116 == 1 && Global_14413.f_1 == 10) && Local_331.f_2999 == 1)
		{
			func_170();
		}
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (is_bit_set(Global_2283, 16))
					{
						func_169();
					}
					else
					{
						func_166();
						if (is_bit_set(Global_2284, false))
						{
							iLocal_132 = GAMEPLAY::GET_GAME_TIMER();
							if (iLocal_132 - iLocal_131 > 1000)
							{
								if (iLocal_133)
								{
									func_165();
								}
								else
								{
									func_147();
								}
							}
							if (iLocal_133)
							{
								func_146();
							}
						}
						else
						{
							func_147();
						}
					}
					if (!is_bit_set(Global_2283, 9))
					{
						if (func_145(2, Global_14385, 0))
						{
							if (is_bit_set(Global_2284, false))
							{
							}
							else if (Global_14356 == 0)
							{
								if (!is_bit_set(Global_2284, 19))
								{
									func_143();
									func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									iLocal_106 = 0;
									StringCopy(&cLocal_109, "", 16);
									func_141();
									Global_14393 = 0;
									iLocal_116 = 0;
									func_142(Global_14394, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									func_140(Global_14394, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
									if (Global_14401)
									{
										func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
										func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
										GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
										func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
										func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
									}
									if (Global_14413.f_1 > 3)
									{
										Global_14413.f_1 = 8;
									}
								}
							}
						}
					}
					break;
				
				case 8:
					if (iLocal_116 == 1)
					{
						func_166();
						func_170();
					}
					else if (iLocal_114 == 0)
					{
						func_129();
						func_122();
					}
					else
					{
						if (timera() > 1500)
						{
							iLocal_329 = 0;
							while (iLocal_329 < 4)
							{
								if (are_strings_equal(&(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_2121[iLocal_329 /*16*/])))
								{
									if (!are_strings_equal(&(Global_2121[iLocal_329 /*16*/].f_8), "CELL_SFUN_NULL"))
									{
										iLocal_326 = true;
										iLocal_328 = iLocal_329;
									}
									else
									{
										iLocal_326 = false;
									}
								}
								iLocal_329++;
							}
							if (iLocal_115 == 0)
							{
								_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
								uLocal_99 = _pop_scaleform_movie_function();
								while (!_0x768FF8961BA904D6(uLocal_99))
								{
									wait(0);
								}
								iLocal_100 = _0x2DE7EFA66B906036(uLocal_99);
								func_120();
							}
						}
						func_166();
						if (iLocal_327 == 1)
						{
							if (!Global_101154.f_16793.f_396)
							{
								if (!func_116(Global_14413, Global_1598))
								{
									Global_101154.f_16793.f_396 = 1;
								}
							}
						}
						if (func_116(Global_14413, Global_1598))
						{
							if (!Global_101154.f_16793.f_397)
							{
								if (iLocal_326 == 1)
								{
									if (func_115(Global_87458))
									{
										switch (func_113("AM_H_BBUDDY"))
										{
											case 2:
												func_111("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_101154.f_16793.f_397 = 1;
												break;
										}
										if (func_113("AM_H_BBUDDY1") == 0)
										{
											func_106("AM_H_BBUDDY1", 1);
										}
									}
									else
									{
										switch (func_113("AM_H_BBUDDY1"))
										{
											case 2:
												func_111("AM_H_BBUDDY1", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_101154.f_16793.f_397 = 1;
												break;
										}
										if (func_113("AM_H_BBUDDY") == 0)
										{
											func_106("AM_H_BBUDDY", 1);
										}
									}
								}
							}
						}
						if (iLocal_115)
						{
							func_105();
						}
						else
						{
							func_76();
						}
					}
					if (func_145(2, Global_14381, 0))
					{
						func_75();
						Global_14391 = 1;
						if (Global_69489)
						{
							func_265();
						}
						else
						{
							func_255();
						}
						wait(0);
						if (Global_14413.f_1 > 3)
						{
							Global_14413.f_1 = 7;
						}
						StringCopy(&cLocal_109, "", 16);
						if (iLocal_114 == 1)
						{
							iLocal_114 = 0;
						}
						if (iLocal_115 == 1)
						{
							iLocal_115 = 0;
						}
						iLocal_116 = 0;
					}
					break;
				
				case 10:
					if (iLocal_127 == 4)
					{
					}
					func_3();
					break;
				
				case 6:
					func_253();
					break;
				
				default:
					break;
			}
			if (!Global_14413.f_1 == 8)
			{
				if (Global_2891 - Global_2890 > Global_2892)
				{
					if (is_player_playing(player_id()))
					{
						if (is_player_control_on(player_id()))
						{
							if (func_145(2, Global_14381, 0))
							{
								if (is_bit_set(Global_2284, false))
								{
									func_75();
								}
								else
								{
									func_75();
									if (!Global_14413.f_1 == 10)
									{
										func_253();
									}
									else if (Global_1598 == 132)
									{
										if (Global_2465472.f_1 || is_bit_set(Global_2284, 20))
										{
											Global_14413.f_1 = 7;
											func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (is_bit_set(Global_2284, false))
											{
												func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											stop_sound(iLocal_104);
											iLocal_127 = 0;
										}
									}
									else
									{
										func_254();
										Global_14413.f_1 = 7;
										func_2();
										func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (is_bit_set(Global_2284, false))
										{
											func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										stop_sound(iLocal_104);
										iLocal_127 = 0;
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
			Global_14415 = 6;
			func_253();
		}
		if (func_1())
		{
			func_253();
		}
	}
}

bool func_1()
{
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 3) || Global_14413.f_1 == 0) || Global_14357 == 1)
	{
		Global_14400 = 1;
		return true;
	}
	return false;
}

void func_2()
{
	if (!Global_14413.f_1 == 10 && !Global_14413.f_1 == 9)
	{
		if (is_bit_set(Global_2283, 9))
		{
			wait(750);
		}
		if (Global_14413.f_1 > 6)
		{
			func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (is_bit_set(Global_2284, false))
			{
				func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2286 = 99;
			if (is_bit_set(Global_2283, 9))
			{
				if (Global_14401)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_2283, 17);
			}
			else if (is_bit_set(Global_2284, false))
			{
				if (Global_14401)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				if (iLocal_94 > 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14356 == 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_94 > 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_3()
{
	int iVar0;
	struct<6> Var1;
	int iVar7;
	
	switch (iLocal_127)
	{
		case 0:
			if (Global_1598 == 81)
			{
				if (Global_1572930 == 0)
				{
					Global_1572930 = 1;
				}
				if (does_text_block_exist("LOWCAAU"))
				{
					_request_additional_text_2("LOWCAAU", 14);
					while (!has_additional_text_loaded(14))
					{
						wait(0);
					}
				}
				StringCopy(&cLocal_134, "LOWCA_CALL10_1", 16);
			}
			else
			{
				if (does_text_block_exist(&Global_16735))
				{
					request_additional_text(&Global_16735, true);
					while (!has_additional_text_loaded(true))
					{
						wait(0);
					}
				}
				cLocal_134 = {Global_117[Global_1598 /*10*/]};
				StringConCat(&cLocal_134, "_1", 16);
			}
			if (does_text_label_exist(&cLocal_134) || iLocal_306 == 1)
			{
				iLocal_128 = Global_16732;
				if (func_74(129))
				{
					iLocal_128 = Global_88039;
				}
			}
			else
			{
				iLocal_128 = Global_16731;
			}
			if ((iLocal_306 == 1 && are_strings_equal(&Local_307, "CELLPHONE_CHEAT")) && Global_69489 == 0)
			{
				if ((are_strings_equal(&Local_311, "CHEAT_SEAPLANE") || are_strings_equal(&Local_311, "CHEAT_DUELC")) || are_strings_equal(&Local_311, "CHEAT_BUBBLE"))
				{
					iLocal_120 = true;
				}
				if (iLocal_120)
				{
					if (func_73())
					{
						iLocal_121 = 0;
					}
					else
					{
						iLocal_121 = 1;
					}
				}
				if (iLocal_121 == 0)
				{
					iLocal_129 = GAMEPLAY::GET_GAME_TIMER();
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(3);
					_begin_text_component("STRING");
					_0x761B77454205A61D(&cLocal_109, -1);
					_end_text_component();
					func_72("CELL_300");
					if (are_strings_equal(&Local_311, "CHEAT_MONOC"))
					{
						func_72("CELL_MONOSIGNAL");
					}
					else if (are_strings_equal(&Local_311, "CHEAT_DIRECTOR"))
					{
						func_72("CELL_DRCT");
					}
					else
					{
						func_72("CELL_CHEAT");
					}
					func_72("CELL_195");
					_pop_scaleform_movie_function_void();
					func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_127 = 1;
				}
				else
				{
					iLocal_127 = 2;
					iLocal_129 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_127 = 2;
				iLocal_129 = GAMEPLAY::GET_GAME_TIMER();
			}
			break;
		
		case 1:
			iLocal_130 = GAMEPLAY::GET_GAME_TIMER();
			if (iLocal_130 - iLocal_129 > 1500)
			{
				iLocal_127 = 3;
			}
			break;
		
		case 2:
			iLocal_130 = GAMEPLAY::GET_GAME_TIMER();
			if (iLocal_128 != Global_16731)
			{
				if (has_sound_finished(iLocal_104))
				{
					if (Global_2465472.f_37 == 0)
					{
						if (Global_14356)
						{
							play_sound_frontend(iLocal_104, "Dial_and_Remote_Ring", &Global_14402, 1);
						}
						else if (iLocal_130 - iLocal_129 > 1700)
						{
							play_sound_frontend(iLocal_104, "Remote_Ring", &Global_14402, 1);
						}
					}
				}
			}
			else if ((func_74(130) || func_74(132)) || func_74(128))
			{
				if (has_sound_finished(iLocal_104))
				{
					if (Global_2465472.f_37 == 0)
					{
						if (Global_14356)
						{
							play_sound_frontend(iLocal_104, "Dial_and_Remote_Ring", &Global_14402, 1);
						}
						else if (iLocal_130 - iLocal_129 > 1700)
						{
							play_sound_frontend(iLocal_104, "Remote_Ring", &Global_14402, 1);
						}
					}
				}
			}
			if (iLocal_130 - iLocal_129 > iLocal_128)
			{
				if (iLocal_128 == Global_16731)
				{
					iLocal_117 = false;
					if ((Global_1598 == 130 || Global_1598 == 132) || Global_1598 == 128)
					{
						if (!is_bit_set(Global_2284, 20))
						{
							iLocal_117 = true;
							if (iLocal_130 - iLocal_129 > iLocal_128 + 10000)
							{
								if (Global_14413.f_1 == 10)
								{
									if (Global_1598 == 130)
									{
										Global_14413.f_1 = 3;
									}
								}
							}
						}
					}
					if (!iLocal_117)
					{
						iLocal_127 = 4;
						stop_sound(iLocal_104);
						iLocal_118 = 0;
						settimerb(0);
						if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
						{
							if (Global_1598 == 132)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(4);
								_push_scaleform_movie_function_parameter_int(false);
								_push_scaleform_movie_function_parameter_int(2);
								_begin_text_component("CELL_CONDFON");
								add_text_component_substring_player_name(&Global_15727);
								_end_text_component();
								func_72("CELL_300");
								func_72("CELL_220");
								func_72("CELL_219");
								_pop_scaleform_movie_function_void();
							}
							else
							{
								func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(5), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(5), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_220", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
						}
						func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					iLocal_127 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_306 == 1)
			{
				if (are_strings_equal(&Local_307, "CELLPHONE_CHEAT") && Global_69489 == 0)
				{
					if (are_strings_equal(&Local_311, "CHEAT_MONOC"))
					{
						if (Global_3087 == 0)
						{
							Global_3087 = 1;
							Global_101154.f_12741[0 /*20*/].f_6 = 5;
							Global_101154.f_12741[2 /*20*/].f_6 = 5;
							Global_101154.f_12741[1 /*20*/].f_6 = 5;
							if (is_player_playing(player_id()))
							{
								if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
								{
									if (!is_explosion_in_sphere(4, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 40f))
									{
										add_explosion(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1f);
									}
								}
							}
						}
						else
						{
							Global_3087 = 0;
						}
					}
					if (are_strings_equal(&Local_311, "CHEAT_SUPJUM"))
					{
						func_71(0, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_HEALA"))
					{
						func_71(6, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_SLIDEYC"))
					{
						func_71(1, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_FASTR"))
					{
						func_71(2, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_WANTDN"))
					{
						func_71(9, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_WANTUP"))
					{
						func_71(8, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_WEATHER"))
					{
						func_71(5, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_FASTS"))
					{
						func_71(3, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_POWER"))
					{
						func_71(7, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_CHUTE"))
					{
						func_71(10, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_BANG"))
					{
						func_71(11, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_FLAMB"))
					{
						func_71(12, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_EXPMEL"))
					{
						func_71(13, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_ZEROG"))
					{
						func_71(14, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_INVINC"))
					{
						func_71(15, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_SLOWMO"))
					{
						func_71(16, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_SKYFA"))
					{
						func_71(17, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_DRUNK"))
					{
						func_71(18, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_DEADEYE"))
					{
						func_71(19, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_WEAPONS"))
					{
						func_71(4, 0);
					}
					if (are_strings_equal(&Local_311, "CHEAT_BUZZARD"))
					{
						func_71(20, joaat("buzzard"));
					}
					if (are_strings_equal(&Local_311, "CHEAT_COMET2"))
					{
						func_71(20, joaat("comet2"));
					}
					if (are_strings_equal(&Local_311, "CHEAT_BMX"))
					{
						func_71(20, joaat("bmx"));
					}
					if (are_strings_equal(&Local_311, "CHEAT_CADDY"))
					{
						func_71(20, joaat("caddy"));
					}
					if (are_strings_equal(&Local_311, "CHEAT_DUSTER"))
					{
						func_71(20, joaat("duster"));
					}
					if (are_strings_equal(&Local_311, "CHEAT_PCJ"))
					{
						func_71(20, joaat("pcj"));
					}
					if (are_strings_equal(&Local_311, "CHEAT_RAPIDGT"))
					{
						func_71(20, joaat("rapidgt"));
					}
					if (are_strings_equal(&Local_311, "CHEAT_STRETCH"))
					{
						func_71(20, joaat("stretch"));
					}
					if (are_strings_equal(&Local_311, "CHEAT_STUNT"))
					{
						func_71(20, joaat("stunt"));
					}
					if (are_strings_equal(&Local_311, "CHEAT_TRASH"))
					{
						func_71(20, joaat("trash"));
					}
					if (are_strings_equal(&Local_311, "CHEAT_SANCHEZ"))
					{
						func_71(20, joaat("sanchez"));
					}
					if (func_73())
					{
						if (are_strings_equal(&Local_311, "CHEAT_SEAPLANE"))
						{
							func_71(20, joaat("dodo"));
						}
						if (are_strings_equal(&Local_311, "CHEAT_DUELC"))
						{
							func_71(20, joaat("dukes2"));
						}
						if (are_strings_equal(&Local_311, "CHEAT_BUBBLE"))
						{
							func_71(20, joaat("submersible2"));
						}
					}
					if (are_strings_equal(&Local_311, "CHEAT_DIRECTOR"))
					{
						iVar0 = func_36(0, 0, 119);
						if (iVar0 != 0)
						{
							func_34(iVar0);
						}
						else
						{
							func_33();
						}
					}
					func_30(0);
				}
				else if (are_strings_equal(&Local_307, "CELLPHONE_CHEAT"))
				{
					func_30(0);
				}
				else
				{
					func_29(&uLocal_138, 1, 0, &Local_311, 0, 1);
					Global_16733 = 0;
					func_28(&uLocal_138, Global_1598, &Global_16735, &Local_307, 2, 0, 0, 0, 0);
				}
			}
			else
			{
				switch (Global_1598)
				{
					case 81:
						StringCopy(&Var1, "BENNY", 24);
						break;
					
					case 0:
						StringCopy(&Var1, "MICHAEL", 24);
						break;
					
					case 2:
						StringCopy(&Var1, "TREVOR", 24);
						break;
					
					case 1:
						StringCopy(&Var1, "FRANKLIN", 24);
						break;
					
					case 12:
						StringCopy(&Var1, "LESTER", 24);
						break;
					
					case 13:
						StringCopy(&Var1, "LESTER", 24);
						break;
					
					case 15:
						StringCopy(&Var1, "TRACEY", 24);
						break;
					
					case 19:
						StringCopy(&Var1, "LAMAR", 24);
						break;
					
					case 17:
						StringCopy(&Var1, "AMANDA", 24);
						break;
					
					case 45:
						StringCopy(&Var1, "MALEEXECASSIST", 24);
						break;
					
					case 29:
						StringCopy(&Var1, "FEMEXECASSIST", 24);
						break;
					
					case 35:
						StringCopy(&Var1, "CHENGSR", 24);
						break;
					
					case 14:
						StringCopy(&Var1, "JIMMY", 24);
						break;
					
					case 103:
						StringCopy(&Var1, "TONYA", 24);
						break;
					
					case 50:
						StringCopy(&Var1, "BEVERLY", 24);
						break;
					
					case 64:
						StringCopy(&Var1, "NIGEL", 24);
						break;
					
					case 34:
						StringCopy(&Var1, "OSCAR", 24);
						break;
					
					case 49:
						StringCopy(&Var1, "BARRY", 24);
						break;
					
					case 33:
						StringCopy(&Var1, "GAYMILITARY", 24);
						break;
					
					case 20:
						StringCopy(&Var1, "NervousRon", 24);
						break;
					
					case 24:
						StringCopy(&Var1, "Wade", 24);
						break;
					
					case 69:
						StringCopy(&Var1, "OMEGA", 24);
						break;
					
					case 60:
						StringCopy(&Var1, "MARNIE", 24);
						break;
					
					case 37:
						StringCopy(&Var1, "STRETCH", 24);
						break;
					
					case 23:
						StringCopy(&Var1, "STEVE", 24);
						break;
					
					case 51:
						StringCopy(&Var1, "CRIS", 24);
						break;
					
					case 30:
						StringCopy(&Var1, "Dave", 24);
						break;
					
					case 58:
						StringCopy(&Var1, "JOSH", 24);
						break;
					
					case 36:
						StringCopy(&Var1, "FRIEDLANDER", 24);
						break;
					
					case 62:
						StringCopy(&Var1, "MAUDE", 24);
						break;
					
					case 55:
						StringCopy(&Var1, "JIMMYBOSTON", 24);
						break;
					
					case 56:
						StringCopy(&Var1, "JOE", 24);
						break;
					
					case 26:
						StringCopy(&Var1, "SOLOMON", 24);
						break;
					
					case 54:
						StringCopy(&Var1, "CLETUS", 24);
						break;
					
					case 43:
						StringCopy(&Var1, "TANISHA", 24);
						break;
					
					case 16:
						StringCopy(&Var1, "ABIGAIL", 24);
						break;
					
					case 44:
						StringCopy(&Var1, "DENISE", 24);
						break;
					
					case 84:
						StringCopy(&Var1, "BRUCIE", 24);
						break;
					
					case 70:
						StringCopy(&Var1, "BikerBoss", 24);
						break;
					
					case 72:
						StringCopy(&Var1, "MexicanBoss", 24);
						break;
					
					case 89:
						StringCopy(&Var1, "MECHANIC", 24);
						break;
					
					case 91:
						StringCopy(&Var1, "MorsMutual", 24);
						break;
					
					case 85:
						StringCopy(&Var1, "FM_MERRYWEATHER", 24);
						break;
					
					case 41:
						StringCopy(&Var1, "PEGASUS", 24);
						break;
					
					case 18:
						StringCopy(&Var1, "SIMEON", 24);
						break;
					
					case 31:
						StringCopy(&Var1, "MARTIN", 24);
						break;
					
					case 52:
						StringCopy(&Var1, "DOM", 24);
						break;
					
					case 86:
						StringCopy(&Var1, "GERALD", 24);
						break;
					
					default:
						StringCopy(&Var1, "MICHAEL", 24);
						break;
				}
				func_29(&uLocal_138, 1, 0, &Var1, 0, 1);
				Global_16733 = 0;
				switch (Global_1598)
				{
					case 81:
						func_9(&uLocal_138, 81, "LOWCAAU", "LOWCA_CALL10", 2, 0, 0, 0, 0);
						break;
					
					case 13:
						func_9(&uLocal_138, 12, &Global_16735, "LES_APH2", 2, 0, 0, 0, 0);
						break;
					
					case 36:
						iVar7 = get_clock_hours();
						if (iVar7 > 17 || iVar7 < 9)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "SHR_APH3", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 8 && iVar7 < 13)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "SHR_APH1", 2, 0, 0, 0, 0);
						}
						if (iVar7 > 12 && iVar7 < 18)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "SHR_APH2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 17:
						if (func_8(21) && !func_8(22))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "AMA_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, &(Global_117[Global_1598 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 20:
						if (Global_69489)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_RBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, &(Global_117[Global_1598 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 44:
						if (func_7(126))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "DEN_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, &(Global_117[Global_1598 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 15:
						if (!func_8(19))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "TRA_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "TRA_APH2", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "TRA_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "TRA_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 19:
						if (!func_8(19))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "LAM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "LAM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "LAM_APH3", 2, 0, 0, 0, 0);
						}
						break;
					
					case 14:
						if (!func_8(19))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "JIM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(21))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "JIM_APH3", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "JIM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "JIM_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 49:
						if (func_6(7))
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "BAR_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "BAR_APH1", 2, 0, 0, 0, 0);
						}
						break;
					
					case 85:
						iLocal_330 = get_random_int_in_range(0, 100);
						if (iLocal_330 <= 50)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_MWBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_MWBusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 41:
						iLocal_330 = get_random_int_in_range(0, 100);
						if (iLocal_330 <= 50)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_PGbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_PGbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 91:
						iLocal_330 = get_random_int_in_range(0, 100);
						if (iLocal_330 <= 50)
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_INSbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_INSbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 86:
						func_9(&uLocal_138, Global_1598, &Global_16735, "ANS_GBusy", 2, 0, 0, 0, 0);
						break;
					
					default:
						func_9(&uLocal_138, Global_1598, &Global_16735, &(Global_117[Global_1598 /*10*/]), 2, 0, 0, 0, 0);
				}
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 31);
			}
			break;
		
		case 4:
			if (has_sound_finished(iLocal_104))
			{
				play_sound_frontend(iLocal_104, "Remote_Engaged", &Global_14402, 1);
			}
			if (timerb() > 1500)
			{
				if (iLocal_118 == 0)
				{
					if (Global_14413 == 2)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							func_4(PLAYER::PLAYER_PED_ID(), "PHONE_CALL_NOT_CONNECTED", 24);
							iLocal_118 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_4(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_5(iParam2), 1);
}

int func_5(int iParam0)
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

int func_6(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_17264[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_9(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (Global_69489 || func_27())
	{
		if (Global_1598 == 81)
		{
			if (Global_1572930 == 0)
			{
				Global_1572930 = 1;
			}
			func_10(uParam0, iParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
		}
		else if (Global_1572930 == 1)
		{
			func_28(uParam0, iParam1, &Global_16735, sParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
		}
		else
		{
			func_10(uParam0, iParam1, &Global_16735, sParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
		}
	}
	else
	{
		func_10(uParam0, iParam1, &Global_16735, sParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	}
}

int func_10(auto uParam0, auto uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_26(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
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
	return func_11(sParam3, iParam4, iParam8);
}

bool func_11(char* sParam0, int iParam1, int iParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_23();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_12();
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
		func_25();
	}
	return false;
}

void func_12()
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

void func_13()
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

bool func_14()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_15()
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

void func_16()
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
		Global_14413 = func_17();
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

auto func_17()
{
	func_18();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_18()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_21(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_20(PLAYER::PLAYER_PED_ID());
			if (func_19(iVar0) && (!func_22(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_19(Global_101154.f_1826.f_539.f_3549))
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

int func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_22(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_23()
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

int func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(auto uParam0, auto uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = uParam1;
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

auto func_27()
{
	return Global_1315888;
}

int func_28(auto uParam0, auto uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_26(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
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
	Global_2621441 = 1;
	return func_11(sParam3, iParam4, iParam8);
}

void func_29(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_30(int iParam0)
{
	if (Global_14571)
	{
		func_31(0, 0);
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
		clear_bit(&Global_2283, 30);
	}
	if (!func_14())
	{
		Global_14413.f_1 = 3;
	}
}

void func_31(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_32(0))
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

bool func_32(int iParam0)
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

void func_33()
{
	float fVar0;
	
	set_game_paused(true);
	set_input_exclusive(2, 201);
	set_input_exclusive(2, 202);
	fVar0 = 0f;
	while ((!is_control_just_pressed(2, 201) && !is_control_just_pressed(2, 202)) || fVar0 < 1f)
	{
		_set_warning_message_2("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1);
		wait(0);
		fVar0 += get_frame_time();
	}
	set_game_paused(false);
	if (is_control_just_pressed(2, 201))
	{
		do_screen_fade_out(0);
		Global_100101 = 1;
	}
}

void func_34(int iParam0)
{
	float fVar0;
	int iVar1;
	
	set_game_paused(true);
	set_input_exclusive(2, 201);
	fVar0 = 0f;
	while (!is_control_just_pressed(2, 201) || fVar0 < 1f)
	{
		iVar1 = func_35(iParam0, 119);
		set_warning_message("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", iVar1, 1);
		wait(0);
		fVar0 += get_frame_time();
	}
	set_game_paused(false);
}

char* func_35(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iParam2 = iParam2;
	if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 13;
	}
	if (iParam1)
	{
		if (_get_number_of_instances_of_streamed_script(_get_this_script_hash()) > 1)
		{
			return 2;
		}
	}
	if (func_70() && !func_22(14))
	{
		return 3;
	}
	if (func_69())
	{
		return 3;
	}
	if (func_68())
	{
		return 8;
	}
	if (iParam1)
	{
		if (func_67())
		{
			return 8;
		}
	}
	if (Global_88531)
	{
		return 3;
	}
	if (Global_25373)
	{
		return 8;
	}
	if (Global_25268)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (_get_number_of_instances_of_streamed_script(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (_get_number_of_instances_of_streamed_script(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("creator")) > 0)
	{
		return 3;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_66(iParam1))
	{
		return 3;
	}
	if (is_ped_falling(PLAYER::PLAYER_PED_ID()) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID()))
	{
		return 12;
	}
	if (func_65(Global_100179, 256))
	{
		return 3;
	}
	if (((func_64() || func_63()) || func_55()) || func_54())
	{
		return 5;
	}
	if (func_54())
	{
		return 5;
	}
	if (func_53())
	{
		return 5;
	}
	if (func_52())
	{
		return 5;
	}
	if (func_63())
	{
		return 5;
	}
	if (func_51() && !Global_100105)
	{
		return 8;
	}
	if (func_55())
	{
		return 5;
	}
	if (is_player_switch_in_progress() || func_50())
	{
		return 4;
	}
	if (func_49())
	{
		return 4;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_40(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()) || get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) != -1)
			{
				return 11;
			}
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || Global_100201)
			{
				return 10;
			}
		}
	}
	if (Global_25371)
	{
		return 8;
	}
	if (Global_69487)
	{
		return 4;
	}
	if (is_player_playing(player_id()))
	{
		if (get_player_wanted_level(player_id()) > 0 || is_player_being_arrested(player_id(), 1))
		{
			return 6;
		}
		if (is_player_climbing(player_id()))
		{
			return 8;
		}
		if (is_ped_getting_up(PLAYER::PLAYER_PED_ID()))
		{
			return 8;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 7;
	}
	if (func_39())
	{
		return 8;
	}
	if (Global_25122)
	{
		return 3;
	}
	if (is_gameplay_hint_active())
	{
		return 4;
	}
	if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, true, 0))
	{
		return 9;
	}
	if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	if (iParam1)
	{
		if (!func_37(0))
		{
			return 8;
		}
	}
	if (is_ped_on_vehicle(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	return 0;
}

bool func_37(int iParam0)
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if ((((((((((!is_player_control_on(player_id()) || !is_player_ready_for_cutscene(player_id())) || is_ped_shooting(PLAYER::PLAYER_PED_ID())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID())) || is_ped_being_jacked(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_getting_up(PLAYER::PLAYER_PED_ID())) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1))
	{
		return false;
	}
	if ((((((func_49() || Global_17118.f_4) || func_38()) || is_memory_card_in_use()) || is_auto_save_in_progress()) || func_50()) || func_69())
	{
		return false;
	}
	if (!iParam0)
	{
		if (get_mission_flag())
		{
			return false;
		}
	}
	return true;
}

int func_38()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

auto func_39()
{
	return Global_52930;
}

int func_40(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	
	if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 5;
	}
	vVar0 = {func_48(player_id())};
	if (Global_100241[10 /*10*/].f_1)
	{
		if (vdist2(vVar0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_8(2) && !func_8(17))
	{
		if (vdist2(vVar0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (is_point_in_angled_area(vVar0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, true))
			{
				return 9;
			}
		}
	}
	if (vdist2(vVar0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (is_point_in_angled_area(vVar0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (is_point_in_angled_area(vVar0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (is_point_in_angled_area(vVar0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (is_point_in_angled_area(vVar0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 128.83f, -1297.98f, 29.3f) < 2f || vdist2(vVar0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (vdist2(vVar0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_47(26))
	{
		return 9;
	}
	if (!iLocal_27)
	{
		func_41(iParam0);
	}
	iVar3 = get_interior_from_entity(PLAYER::PLAYER_PED_ID());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_100117 || iVar3 == Global_100118) || iVar3 == Global_100119)
	{
		return 9;
	}
	else if (iVar3 == Global_100108)
	{
		return 9;
	}
	else if (iVar3 == Global_100109)
	{
		return 9;
	}
	else if (iVar3 == Global_100112)
	{
		return 9;
	}
	else if (iVar3 == Global_100111)
	{
		return 9;
	}
	else if (iVar3 == Global_100113)
	{
		return 9;
	}
	else if (iVar3 == Global_100114)
	{
		return 9;
	}
	else if (iVar3 == Global_100115)
	{
		return 9;
	}
	else if (iVar3 == Global_100116)
	{
		return 9;
	}
	else if (iVar3 == Global_100120)
	{
		return 9;
	}
	else if (iVar3 == Global_100121)
	{
		return 9;
	}
	else if (iVar3 == Global_100122)
	{
		return 9;
	}
	else if (iVar3 == Global_100123)
	{
		return 9;
	}
	else if (iVar3 == Global_100124)
	{
		return 9;
	}
	else if ((iVar3 == Global_100125 || iVar3 == Global_100126) && func_8(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= 19 - 1)
	{
		if (iVar3 == Global_100127[iVar4])
		{
			return 9;
		}
		iVar4++;
	}
	return 0;
}

void func_41(auto uParam0)
{
	int iVar0;
	
	uParam0 = uParam0;
	func_44(24, &Global_100108);
	func_44(47, &Global_100109);
	func_44(10, &Global_100117);
	func_44(9, &Global_100118);
	func_44(8, &Global_100119);
	func_44(21, &Global_100120);
	func_44(11, &Global_100121);
	func_44(18, &Global_100125);
	func_44(19, &Global_100126);
	Global_100112 = get_interior_at_coords_with_type(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_100111 = get_interior_at_coords_with_type(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_100113 = get_interior_at_coords_with_type(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_100114 = get_interior_at_coords_with_type(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_100115 = get_interior_at_coords_with_type(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_100116 = get_interior_at_coords_with_type(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_100122 = get_interior_at_coords_with_type(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_100123 = get_interior_at_coords_with_type(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_100124 = get_interior_at_coords_with_type(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= 19 - 1)
	{
		Global_100127[iVar0] = get_interior_at_coords(func_42(iVar0));
		iVar0++;
	}
	iLocal_27 = 1;
}

Vector3 func_42(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_43(int iParam0)
{
	if (iParam0 >= 19)
	{
		return false;
	}
	else if (iParam0 <= -1)
	{
		return false;
	}
	return true;
}

auto func_44(int iParam0, auto uParam1)
{
	struct<5> Var0;
	
	Var0 = {func_45(iParam0)};
	*uParam1 = get_interior_at_coords_with_type(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_45(int iParam0)
{
	struct<5> Var0;
	Vector3 vVar5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = {-447.4833f, 280.3197f, 77.5215f};
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = {-1906.786f, -573.7576f, 19.0773f};
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = {1399.973f, 1148.756f, 113.3336f};
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = {-598.6379f, -1608.399f, 26.0108f};
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = {-556.5089f, 286.3181f, 81.1763f};
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = {-111.7116f, -11.912f, 69.5196f};
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = {1274.934f, -1714.726f, 53.7715f};
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = {147.433f, -2201.37f, 3.688f};
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = {320.9934f, 265.2515f, 82.1221f};
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = {-1425.564f, -244.3f, 15.8053f};
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = {377.153f, -717.567f, 10.0536f};
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = {245.1564f, 370.211f, 104.7382f};
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = {173.1176f, -1003.279f, -99.9999f};
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = {199.9715f, -999.6678f, -100f};
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = {228.6058f, -992.0537f, -99.9999f};
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = {1854.254f, 3686.739f, 33.2671f};
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = {-444.8907f, 6013.587f, 30.7164f};
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = {3522.845f, 3707.965f, 19.9918f};
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = {717.2994f, -974.4271f, 23.9142f};
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = {717.299f, -974.4271f, 23.9142f};
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = {2449.785f, 4983.825f, 45.8106f};
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = {1087.195f, -1988.445f, 28.649f};
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = {982.233f, -2160.382f, 28.4761f};
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = {479.0568f, -1316.825f, 28.2038f};
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = {-1005.663f, -478.3461f, 49.0265f};
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar5 = {func_46(1)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar5 = {func_46(2)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar5 = {func_46(3)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar5 = {func_46(4)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar5 = {func_46(5)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar5 = {func_46(6)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar5 = {func_46(7)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = {Global_1049163[34 /*1924*/].f_146.f_1517 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar5 = {func_46(35)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar5 = {func_46(36)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar5 = {func_46(37)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar5 = {func_46(38)};
			Var0 = {-20.1f, -580.8f, 91.3f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar5 = {func_46(39)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar5 = {func_46(40)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar5 = {func_46(41)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar5 = {func_46(42)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar5 = {func_46(43)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = {-470.3754f, -698.5207f, 51.5276f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = {-460.6133f, -691.5562f, 69.9067f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = {300.633f, -997.4288f, -99.9727f};
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = {-171.3969f, 494.2671f, 134.4935f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = {339.4982f, 434.0887f, 146.2206f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = {-761.3884f, 615.7333f, 140.9805f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = {-678.1752f, 591.0076f, 142.2196f};
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = {120.0541f, 553.793f, 181.0943f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = {-571.4039f, 655.2008f, 142.6293f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = {-742.2565f, 587.6547f, 143.0577f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = {-857.2222f, 685.051f, 149.6502f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = {-1287.65f, 443.2707f, 94.6919f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = {374.2012f, 416.9688f, 142.5991f};
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = {-16.29585f, -684.0385f, 33.50832f};
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = {341.1f, -1000f, -99.2f};
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = {199.9716f, -1018.954f, -100f};
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = {-1388.001f, -618.4197f, 30.8196f};
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar5 = {func_46(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar5 = {func_46(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar5 = {func_46(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar5 = {func_46(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar5 = {func_46(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar5 = {func_46(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar5 = {func_46(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar5 = {func_46(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar5 = {func_46(87)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar5 = {func_46(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar5 = {func_46(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar5 = {func_46(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar5 = {func_46(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar5 = {func_46(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar5 = {func_46(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar5 = {func_46(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar5 = {func_46(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar5 = {func_46(88)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar5 = {func_46(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar5 = {func_46(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar5 = {func_46(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar5 = {func_46(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar5 = {func_46(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar5 = {func_46(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar5 = {func_46(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar5 = {func_46(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar5 = {func_46(89)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar5 = {func_46(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar5 = {func_46(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar5 = {func_46(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar5 = {func_46(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar5 = {func_46(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar5 = {func_46(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar5 = {func_46(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar5 = {func_46(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar5 = {func_46(90)};
			Var0 = {vVar5 + Vector(1f, 0f, 0f)};
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_46(int iParam0)
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

bool func_47(int iParam0)
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

Vector3 func_48(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

auto func_49()
{
	return Global_1315913;
}

bool func_50()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

int func_51()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

int func_52()
{
	return is_bit_set(Global_69737, 9);
}

int func_53()
{
	return is_bit_set(Global_69737, 8);
}

bool func_54()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((((((((((((is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_intro", 3) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_base", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_enterchair", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_exitchair", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_a", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_b", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_c", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_d", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_intro", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_base", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return true;
		}
	}
	return false;
}

bool func_55()
{
	int iVar0;
	
	if (func_64())
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			if (func_56(iVar0))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_56(int iParam0)
{
	return func_57(iParam0, 20, 1);
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_62() == 0)
		{
			return is_bit_set(func_58(func_61(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_58(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_59(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_59(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_60();
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

auto func_60()
{
	return Global_1312747;
}

int func_61(int iParam0)
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

auto func_62()
{
	return Global_25120;
}

int func_63()
{
	return Global_91330.f_297 > 0;
}

int func_64()
{
	return Global_91330.f_296 > 0;
}

int func_65(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_66(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

auto func_67()
{
	return Global_91317.f_1;
}

auto func_68()
{
	return Global_69756;
}

bool func_69()
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

bool func_70()
{
	if (Global_35711 == 15)
	{
		return false;
	}
	return true;
}

void func_71(int iParam0, int iParam1)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25367, iParam0);
	Global_25368 = iParam1;
}

void func_72(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

bool func_73()
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

bool func_74(int iParam0)
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

void func_75()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_14402, 1);
	}
}

void func_76()
{
	if (Global_14391 == 0)
	{
		if (func_145(2, Global_14382, 0))
		{
			clear_bit(&Global_2284, false);
			iLocal_115 = 0;
			func_143();
			Global_14391 = 1;
			_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_99 = _pop_scaleform_movie_function();
			while (!_0x768FF8961BA904D6(uLocal_99))
			{
				wait(0);
			}
			iLocal_103 = _0x2DE7EFA66B906036(uLocal_99);
			if (func_100(Global_1598))
			{
				if (iLocal_103 == 0)
				{
					if (iLocal_326)
					{
						Global_16826 = 0;
						Global_16825 = 0;
						Global_16827 = 1;
						func_86();
					}
					else
					{
						Global_16826 = 0;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
				}
				if (iLocal_103 == 1)
				{
					if (iLocal_326)
					{
						Global_16826 = 0;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
					else if (func_78(Global_1598, Global_14413))
					{
						func_77();
						iLocal_115 = 1;
					}
					else
					{
						Global_16826 = 1;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
				}
				if (iLocal_103 == 2)
				{
					if (func_78(Global_1598, Global_14413))
					{
						func_77();
						iLocal_115 = 1;
					}
					else
					{
						Global_16826 = 1;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
				}
			}
			else
			{
				if (iLocal_103 == 0)
				{
					if (iLocal_326)
					{
						Global_16826 = 0;
						Global_16825 = 0;
						Global_16827 = 1;
						func_86();
					}
					else if (func_78(Global_1598, Global_14413))
					{
						func_77();
						iLocal_115 = 1;
					}
					else
					{
						Global_16826 = 1;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
				}
				if (iLocal_103 == 1)
				{
					if (func_78(Global_1598, Global_14413))
					{
						func_77();
						iLocal_115 = 1;
					}
					else
					{
						Global_16826 = 1;
						Global_16825 = 0;
						Global_16827 = 0;
						func_86();
					}
				}
			}
		}
	}
}

void func_77()
{
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (Global_14401)
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	clear_bit(&Global_2283, 17);
	func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, "CELL_270", 0, 0, 0, 0);
	func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(true), to_float(false), -1f, -1f, "CELL_271", 0, 0, 0, 0);
	func_142(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_140(Global_14394, "SET_HEADER", "CELL_269", 0, 0, 0, 0);
}

bool func_78(int iParam0, int iParam1)
{
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return false;
	}
	if (!func_22(6) && !func_22(7))
	{
		if (func_79(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_79(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return false;
	}
	if (!func_83(6))
	{
		iVar0 = func_82(iParam0);
		iVar1 = func_82(iParam1);
		if (iVar0 != 7 && iVar1 != 7)
		{
			iVar2 = func_81(iVar0, iVar1);
			if (iVar2 != 10)
			{
				iVar3 = func_80(iVar2);
				if (iVar3 == 3 || iVar3 == 4)
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_80(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_87467[iParam0 /*2*/];
	}
	return -1;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_82(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 147)
	{
		return Global_101154.f_32575[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 147)
	{
		return 6;
	}
	if (iParam0 == 148)
	{
		return 6;
	}
	return 6;
}

bool func_83(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_84(iParam0))
	{
		return false;
	}
	return true;
}

int func_84(int iParam0)
{
	return func_85(iParam0, Global_35711);
}

bool func_85(int iParam0, int iParam1)
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

void func_86()
{
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 10;
		func_99();
		if (is_player_playing(player_id()))
		{
			if (!is_entity_in_water(PLAYER::PLAYER_PED_ID()))
			{
				if (is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!func_98())
					{
						func_97();
					}
				}
				else if (func_96() == 0)
				{
					func_97();
				}
			}
		}
		if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_95();
			func_142(Global_14394, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
	{
		func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_211", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
	}
	func_91();
	if (Global_69489)
	{
		func_87(1908, 1, -1);
	}
}

void func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_58(iParam0, func_59(iParam2), 0);
	iVar0 += iParam1;
	if (!func_90(iParam0))
	{
		func_89(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_88(iParam0, iVar0, iParam2, 1);
	}
}

void func_88(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_59(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_59(uParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_59(uParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_59(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_59(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_59(uParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_59(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_59(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_59(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_59(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_59(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_59(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_59(uParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_59(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_59(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_59(uParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_59(uParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_59(uParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_59(uParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_59(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_59(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_59(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_59(uParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_59(uParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_59(uParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_59(uParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_59(uParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_59(uParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_59(uParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_59(uParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_59(uParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_59(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_89(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_59(uParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

bool func_90(int iParam0)
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

void func_91()
{
	struct<6> Var0;
	
	if (Global_14396 == 1)
	{
		return;
	}
	if (Global_14413.f_1 < 4)
	{
		return;
	}
	while (!has_scaleform_movie_loaded(Global_14394))
	{
		wait(0);
	}
	switch (Global_14413.f_1)
	{
		case 6:
			func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_94(Global_2888);
			if (Global_2888 == 1)
			{
				func_142(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_142(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_2283, 17);
			}
			else if (Global_69489)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
			if (is_bit_set(Global_2283, 20))
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_93();
				func_142(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_72("CELL_300");
					func_72("CELL_217");
					func_72("CELL_217");
					_pop_scaleform_movie_function_void();
				}
				else if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_217", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
				func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_142(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_72("CELL_300");
					func_72("CELL_219");
					func_72("CELL_219");
					_pop_scaleform_movie_function_void();
				}
				else
				{
					if (Global_15970)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
					{
						func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &Var0, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_92();
			break;
		
		default:
			break;
	}
}

void func_92()
{
	if (has_scaleform_movie_loaded(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (is_bit_set(Global_2283, 20))
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
		}
		else
		{
			func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_2283, 17);
			if (is_bit_set(Global_2283, 20))
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_93()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14413 == 0)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 1)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 2)
		{
			switch (Global_101154.f_12741[Global_14413 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 3)
		{
			switch (Global_2563609)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_94(int iParam0)
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
		if (func_22(14))
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
								func_72(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_139(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_139(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_139(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_139(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_139(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_72(&(Global_2290[iVar1 /*15*/]));
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
								func_72(&(Global_2290[iVar1 /*15*/]));
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
								func_72(&(Global_2290[iVar1 /*15*/]));
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
								func_72(&(Global_2290[iVar1 /*15*/]));
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
								func_72(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_139(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_139(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_95()
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
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 11);
}

bool func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (Global_14356 == 0)
			{
				if (Global_1598 != 128)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15712 != 2)
						{
						}
					}
				}
			}
		}
		if (func_22(14))
		{
			return false;
		}
		if (is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
		{
			return false;
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!_0x4F32C0D5A90A9B40())
			{
				if (is_entity_in_water(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return false;
				}
			}
		}
		if (((is_ped_swimming(PLAYER::PLAYER_PED_ID()) || is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID())) || is_player_climbing(player_id())) || is_ped_hanging_on_to_vehicle(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
		if (Global_100202)
		{
			return false;
		}
	}
	if (Global_69489)
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || _0x4F32C0D5A90A9B40()))
	{
		iVar2 = 1;
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar3 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iVar3)) || is_this_model_a_bicycle(ENTITY::GET_ENTITY_MODEL(iVar3))) || is_this_model_a_quadbike(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2563611 || iVar2 == 1)
	{
		if (_get_number_of_instances_of_streamed_script(joaat("apptrackify")) > 0 || Global_101154.f_12741.f_89)
		{
			if (_get_number_of_instances_of_streamed_script(joaat("michael2")) > 0)
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
			return true;
		}
	}
	return false;
}

void func_97()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_98() && is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = get_ped_prop_index(PLAYER::PLAYER_PED_ID(), false);
			if (Global_69489)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || is_ped_wearing_helmet(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (is_ped_wearing_helmet(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_14356)
			{
				if (Global_1598 != 128)
				{
					if (iVar0 == 0)
					{
						if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_69489)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 11);
								task_use_mobile_phone(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

bool func_98()
{
	int iVar0;
	int iVar1;
	
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		return true;
	}
	return false;
}

void func_99()
{
	struct<2> Var0;
	
	get_mobile_phone_position(&Var0);
	if (Global_14366[Global_14358 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_14353 = 1;
	}
}

bool func_100(int iParam0)
{
	int iVar0;
	
	if (func_101(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_650)
	{
		if (Global_101154.f_6378.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (Global_101154.f_6378[iVar0 /*15*/].f_6 == iParam0)
		{
			if (is_bit_set(Global_101154.f_6378[iVar0 /*15*/].f_1, 7))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = Global_82363[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_69758.f_109[Global_82363[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_102(Global_82399[iVar2 /*34*/].f_12, iParam0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_102(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 19:
			return func_104(iParam0, 8);
			break;
		
		case 14:
			return func_104(iParam0, 16);
			break;
		
		case 17:
			return func_104(iParam0, 32);
			break;
	}
	return func_103(iParam0, iParam1);
}

int func_103(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return is_bit_set(iParam0, iParam1);
		
		default:
	}
	return false;
}

int func_104(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_105()
{
	if (Global_14391 == 0)
	{
		if (func_145(2, Global_14382, 0))
		{
			clear_bit(&Global_2284, false);
			func_143();
			Global_14391 = 1;
			_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_99 = _pop_scaleform_movie_function();
			while (!_0x768FF8961BA904D6(uLocal_99))
			{
				wait(0);
			}
			iLocal_103 = _0x2DE7EFA66B906036(uLocal_99);
			if (iLocal_103 == 0)
			{
				Global_16821[Global_14413] = 1;
				iLocal_114 = 0;
				Global_16826 = 0;
				Global_16825 = 1;
				Global_16827 = 0;
				func_86();
			}
			else
			{
				iLocal_115 = 0;
				func_120();
			}
		}
	}
}

void func_106(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_99796 && iParam1)
	{
		if (func_110(sParam0) && !is_help_message_fading_out())
		{
			clear_help(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(sParam0, &(Global_101154.f_24935[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= Global_101154.f_24935.f_145 - 2)
			{
				func_109(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_108(Global_101154.f_24935.f_145 - 1);
			Global_101154.f_24935.f_145--;
			func_107();
			return;
		}
		iVar0++;
	}
}

void func_107()
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

void func_108(int iParam0)
{
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/].f_4), "", 16);
	Global_101154.f_24935[iParam0 /*16*/].f_8 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = -1;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = 0;
}

void func_109(int iParam0, auto uParam1)
{
	Global_101154.f_24935[iParam0 /*16*/] = {Global_101154.f_24935[uParam1 /*16*/]};
	Global_101154.f_24935[iParam0 /*16*/].f_4 = {Global_101154.f_24935[uParam1 /*16*/].f_4};
	Global_101154.f_24935[iParam0 /*16*/].f_8 = Global_101154.f_24935[uParam1 /*16*/].f_8;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = Global_101154.f_24935[uParam1 /*16*/].f_10;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = Global_101154.f_24935[uParam1 /*16*/].f_9;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = Global_101154.f_24935[uParam1 /*16*/].f_11;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = Global_101154.f_24935[uParam1 /*16*/].f_12;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = Global_101154.f_24935[uParam1 /*16*/].f_13;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = Global_101154.f_24935[uParam1 /*16*/].f_14;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = Global_101154.f_24935[uParam1 /*16*/].f_15;
}

int func_110(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_111(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_112(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_112(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_107();
	}
}

int func_113(char* sParam0)
{
	if (are_strings_equal(sParam0, &Global_99799))
	{
		return 1;
	}
	if (func_114(sParam0))
	{
		return 0;
	}
	return 2;
}

bool func_114(char* sParam0)
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

bool func_115(int iParam0)
{
	return false;
	if (((iParam0 == 92 || iParam0 == 68) || iParam0 == 79) || iParam0 == 34)
	{
		return false;
	}
	return true;
}

bool func_116(int iParam0, int iParam1)
{
	int iVar0;
	
	return false;
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return false;
	}
	if ((Global_87458 != -1 && is_bit_set(Global_82399[Global_87458 /*34*/].f_15, 15)) && is_bit_set(Global_87459, iParam1))
	{
		if (Global_87457 != 5 || func_119() == Global_87458)
		{
			if (!func_118(12))
			{
				if (func_117(iParam0, iParam1, &iVar0) && func_80(iVar0) == 0)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_117(int iParam0, int iParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_82(iParam0);
	iVar1 = func_82(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		*uParam2 = func_81(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return true;
		}
	}
	*uParam2 = 10;
	return false;
}

int func_118(int iParam0)
{
	return is_bit_set(Global_87466, iParam0);
}

auto func_119()
{
	return Global_69751;
}

void func_120()
{
	settimera(0);
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 8;
	}
	if (Global_14401)
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	clear_bit(&Global_2283, 17);
	iLocal_114 = 1;
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_100(Global_1598))
	{
		if (iLocal_326)
		{
			func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, &(Global_2121[iLocal_328 /*16*/].f_8), 0, 0, 0, 0);
			func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(true), to_float(false), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (iLocal_327)
			{
				if (func_121(Global_1598, Global_14413))
				{
					func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(false), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_78(Global_1598, Global_14413))
				{
					func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(false), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (iLocal_327)
			{
				if (func_121(Global_1598, Global_14413))
				{
					func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(true), to_float(false), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_78(Global_1598, Global_14413))
				{
					func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(true), to_float(false), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
	}
	else if (iLocal_326)
	{
		func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, &(Global_2121[iLocal_328 /*16*/].f_8), 0, 0, 0, 0);
		if (iLocal_327)
		{
			if (func_121(Global_1598, Global_14413))
			{
				func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(true), to_float(false), -1f, -1f, "CELL_209", 0, 0, 0, 0);
			}
			if (func_78(Global_1598, Global_14413))
			{
				func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(true), to_float(false), -1f, -1f, "CELL_222", 0, 0, 0, 0);
			}
		}
	}
	else if (iLocal_327)
	{
		if (func_121(Global_1598, Global_14413))
		{
			func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, "CELL_209", 0, 0, 0, 0);
		}
		if (func_78(Global_1598, Global_14413))
		{
			func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, "CELL_222", 0, 0, 0, 0);
		}
	}
	func_142(Global_14394, "DISPLAY_VIEW", 18f, to_float(iLocal_100), -1082130432, -1082130432, -1082130432);
	func_140(Global_14394, "SET_HEADER", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0, 0, 0, 0);
}

bool func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return false;
	}
	if ((iParam0 == 1 && iParam1 == 0) || (iParam0 == 0 && iParam1 == 1))
	{
		if (func_8(90) && !func_8(20))
		{
			return false;
		}
	}
	if (!func_83(6))
	{
		if (func_117(iParam0, iParam1, &iVar0) && func_80(iVar0) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_122()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		disable_control_action(0, 22, 1);
	}
	if (func_145(2, Global_14382, 0))
	{
		func_143();
		Global_14391 = 1;
		_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
		uLocal_99 = _pop_scaleform_movie_function();
		while (!_0x768FF8961BA904D6(uLocal_99))
		{
			wait(0);
		}
		iVar0 = _0x2DE7EFA66B906036(uLocal_99);
		uLocal_105 = Global_3074[iVar0];
		sLocal_107[0] = _get_label_text(&(Global_2991[uLocal_105 /*5*/]));
		if (are_strings_equal(sLocal_107[0], "*"))
		{
			cLocal_109 = {Global_3057[Global_14413 /*4*/]};
			iLocal_106 = get_length_of_literal_string(&cLocal_109);
		}
		else if (get_length_of_literal_string(&cLocal_109) < 14)
		{
			StringConCat(&cLocal_109, sLocal_107[0], 16);
			iLocal_106++;
		}
		_push_scaleform_movie_function(Global_14394, "SET_HEADER");
		_begin_text_component("STRING");
		_0x761B77454205A61D(&cLocal_109, -1);
		_end_text_component();
		_pop_scaleform_movie_function_void();
	}
	if (func_145(2, 178, 0))
	{
		func_75();
		Global_14391 = 1;
		if (get_length_of_literal_string(&cLocal_109) > 0)
		{
			StringCopy(&cLocal_109, _get_text_substring(&cLocal_109, 0, iLocal_106 - 1), 16);
			iLocal_106--;
		}
		_push_scaleform_movie_function(Global_14394, "SET_HEADER");
		_begin_text_component("STRING");
		_0x761B77454205A61D(&cLocal_109, -1);
		_end_text_component();
		_pop_scaleform_movie_function_void();
	}
	if (func_145(2, Global_14385, 0))
	{
		if (!func_128())
		{
			func_143();
			Global_3057[Global_14413 /*4*/] = {cLocal_109};
			Global_1598 = 144;
			iLocal_306 = 0;
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 10;
				func_99();
				if (is_player_playing(player_id()))
				{
					if (!is_entity_in_water(PLAYER::PLAYER_PED_ID()))
					{
						if (is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!func_98())
							{
								func_97();
							}
						}
						else if (func_96() == 0)
						{
							func_97();
						}
					}
				}
			}
			iVar1 = 0;
			iLocal_119 = 0;
			while (iVar1 < 147)
			{
				if (iVar1 != 146)
				{
					sVar2 = _get_label_text(&(Global_117[iVar1 /*10*/].f_4));
					if (are_strings_equal(sVar2, &cLocal_109))
					{
						if ((Global_101154.f_32575[iVar1 /*29*/].f_12[Global_14413] == 1 || Global_101154.f_32575[iVar1 /*29*/].f_12[Global_14413] == 2) || are_strings_equal(sVar2, _get_label_text(&(Global_117[130 /*10*/].f_4))))
						{
							Global_1598 = iVar1;
						}
						else
						{
							iLocal_119 = 1;
						}
					}
				}
				iVar1++;
			}
			if ((Global_1598 == 144 && iLocal_306 == 0) && iLocal_119 == 0)
			{
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(4);
				_push_scaleform_movie_function_parameter_int(false);
				_push_scaleform_movie_function_parameter_int(3);
				_begin_text_component("STRING");
				_0x761B77454205A61D(&cLocal_109, -1);
				_end_text_component();
				func_72("CELL_300");
				func_72("CELL_211");
				func_72("CELL_195");
				_pop_scaleform_movie_function_void();
				func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_306 = 0;
				iVar3 = 0;
				while (iVar3 < 37)
				{
					sVar4 = _get_label_text(&(Global_1602[iVar3 /*14*/]));
					if (are_strings_equal(sVar4, &cLocal_109))
					{
						iLocal_306 = 1;
						Local_307 = {Global_1602[iVar3 /*14*/].f_4};
						Local_311 = {Global_1602[iVar3 /*14*/].f_8};
					}
					iVar3++;
				}
				if (iLocal_306 == 0)
				{
					iLocal_113 = get_length_of_literal_string(&cLocal_109);
					if (iLocal_113 > 6)
					{
						StringCopy(&(uLocal_317[0]), _get_text_substring(&cLocal_109, 0, 1), 4);
						StringCopy(&(uLocal_317[1]), _get_text_substring(&cLocal_109, 1, 2), 4);
						StringCopy(&(uLocal_317[2]), _get_text_substring(&cLocal_109, 2, 3), 4);
						StringCopy(&(uLocal_317[3]), _get_text_substring(&cLocal_109, 3, 4), 4);
						StringCopy(&(uLocal_317[4]), _get_text_substring(&cLocal_109, 4, 5), 4);
						StringCopy(&(uLocal_317[5]), _get_text_substring(&cLocal_109, 5, 6), 4);
						if (((are_strings_equal(&(uLocal_317[0]), "1") && are_strings_equal(&(uLocal_317[1]), "9")) && are_strings_equal(&(uLocal_317[2]), "9")) && are_strings_equal(&(uLocal_317[3]), "9"))
						{
							iVar5 = func_127(&(uLocal_317[4]));
							iVar6 = func_127(&(uLocal_317[5]));
							func_126(iVar5, iVar6);
							iLocal_306 = 1;
						}
						if (iLocal_306 == 0)
						{
							if (iLocal_113 == 10 || iLocal_113 == 7)
							{
								if (iLocal_113 == 10)
								{
									StringCopy(&(uLocal_317[0]), _get_text_substring(&cLocal_109, 3, 4), 4);
									StringCopy(&(uLocal_317[1]), _get_text_substring(&cLocal_109, 4, 5), 4);
									StringCopy(&(uLocal_317[2]), _get_text_substring(&cLocal_109, 5, 6), 4);
									StringCopy(&(uLocal_317[3]), _get_text_substring(&cLocal_109, 6, 7), 4);
									StringCopy(&(uLocal_317[4]), _get_text_substring(&cLocal_109, 7, 8), 4);
									StringCopy(&(uLocal_317[5]), _get_text_substring(&cLocal_109, 8, 9), 4);
									StringCopy(&(uLocal_317[6]), _get_text_substring(&cLocal_109, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_317[0]), _get_text_substring(&cLocal_109, 0, 1), 4);
									StringCopy(&(uLocal_317[1]), _get_text_substring(&cLocal_109, 1, 2), 4);
									StringCopy(&(uLocal_317[2]), _get_text_substring(&cLocal_109, 2, 3), 4);
									StringCopy(&(uLocal_317[3]), _get_text_substring(&cLocal_109, 3, 4), 4);
									StringCopy(&(uLocal_317[4]), _get_text_substring(&cLocal_109, 4, 5), 4);
									StringCopy(&(uLocal_317[5]), _get_text_substring(&cLocal_109, 5, 6), 4);
									StringCopy(&(uLocal_317[6]), _get_text_substring(&cLocal_109, 6, 7), 4);
								}
								if ((((are_strings_equal(&(uLocal_317[0]), "5") && are_strings_equal(&(uLocal_317[1]), "5")) && are_strings_equal(&(uLocal_317[2]), "5")) && are_strings_equal(&(uLocal_317[3]), "0")) && are_strings_equal(&(uLocal_317[4]), "1"))
								{
									iVar7 = func_127(&(uLocal_317[5]));
									iVar8 = func_127(&(uLocal_317[6]));
									func_126(iVar7, iVar8);
									iLocal_306 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (Global_101154.f_32575[Global_1598 /*29*/].f_12[Global_14413] == 2 || Global_1598 == 130)
				{
					Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] = 1;
					if (Global_1598 == 130)
					{
						if (!Global_101154.f_32575[130 /*29*/].f_12[0] == 1)
						{
							func_124(130, 4, 1);
							func_124(130, 3, 0);
						}
						if (Global_69489)
						{
							if (!func_123(130, 3))
							{
								func_124(130, 3, 1);
							}
						}
					}
				}
				if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_211", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
			}
			func_91();
		}
	}
}

bool func_123(int iParam0, int iParam1)
{
	if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return true;
	}
	return false;
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_16();
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
						func_125();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_125();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_125();
			}
		}
	}
}

void func_125()
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
	clear_bit(&Global_2283, false);
}

void func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0 + iParam1;
	iVar0 = 20 - iVar0;
	iVar0 += 5;
	switch (iVar0)
	{
		case 7:
			StringCopy(&Local_307, "ANS_RAN1", 16);
			StringCopy(&Local_311, "ANS_M_USA1", 24);
			break;
		
		case 8:
			StringCopy(&Local_307, "ANS_RAN2", 16);
			StringCopy(&Local_311, "ANS_F_USA1", 24);
			break;
		
		case 9:
			StringCopy(&Local_307, "ANS_RAN3", 16);
			StringCopy(&Local_311, "ANS_M_ENG1", 24);
			break;
		
		case 10:
			StringCopy(&Local_307, "ANS_RAN4", 16);
			StringCopy(&Local_311, "ANS_M_USA2", 24);
			break;
		
		case 11:
			StringCopy(&Local_307, "ANS_RAN5", 16);
			StringCopy(&Local_311, "ANS_M_ASIAN", 24);
			break;
		
		case 12:
			StringCopy(&Local_307, "ANS_RAN6", 16);
			StringCopy(&Local_311, "ANS_F_USA2", 24);
			break;
		
		case 13:
			StringCopy(&Local_307, "ANS_RAN7", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 14:
			StringCopy(&Local_307, "ANS_RAN8", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 15:
			StringCopy(&Local_307, "ANS_RAN9", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 16:
			StringCopy(&Local_307, "ANS_RAN10", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 17:
			StringCopy(&Local_307, "ANS_RAN1", 16);
			StringCopy(&Local_311, "ANS_M_USA1", 24);
			break;
		
		case 18:
			StringCopy(&Local_307, "ANS_RAN2", 16);
			StringCopy(&Local_311, "ANS_F_USA1", 24);
			break;
		
		case 19:
			StringCopy(&Local_307, "ANS_RAN3", 16);
			StringCopy(&Local_311, "ANS_M_ENG1", 24);
			break;
		
		case 20:
			StringCopy(&Local_307, "ANS_RAN4", 16);
			StringCopy(&Local_311, "ANS_M_USA2", 24);
			break;
		
		case 21:
			StringCopy(&Local_307, "ANS_RAN5", 16);
			StringCopy(&Local_311, "ANS_M_ASIAN", 24);
			break;
		
		case 22:
			StringCopy(&Local_307, "ANS_RAN6", 16);
			StringCopy(&Local_311, "ANS_F_USA2", 24);
			break;
		
		case 23:
			StringCopy(&Local_307, "ANS_RAN7", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 24:
			StringCopy(&Local_307, "ANS_RAN8", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		case 25:
			StringCopy(&Local_307, "ANS_RAN9", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
		
		default:
			StringCopy(&Local_307, "ANS_RAN8", 16);
			StringCopy(&Local_311, "ANSWER_FX", 24);
			break;
	}
}

int func_127(char* sParam0)
{
	if (are_strings_equal(sParam0, "0"))
	{
		return 0;
	}
	if (are_strings_equal(sParam0, "1"))
	{
		return 1;
	}
	if (are_strings_equal(sParam0, "2"))
	{
		return 2;
	}
	if (are_strings_equal(sParam0, "3"))
	{
		return 3;
	}
	if (are_strings_equal(sParam0, "4"))
	{
		return 4;
	}
	if (are_strings_equal(sParam0, "5"))
	{
		return 5;
	}
	if (are_strings_equal(sParam0, "6"))
	{
		return 6;
	}
	if (are_strings_equal(sParam0, "7"))
	{
		return 7;
	}
	if (are_strings_equal(sParam0, "8"))
	{
		return 8;
	}
	if (are_strings_equal(sParam0, "9"))
	{
		return 9;
	}
	if (are_strings_equal(sParam0, "A"))
	{
		return 10;
	}
	if (are_strings_equal(sParam0, "B"))
	{
		return 11;
	}
	if (are_strings_equal(sParam0, "C"))
	{
		return 12;
	}
	if (are_strings_equal(sParam0, "D"))
	{
		return 13;
	}
	if (are_strings_equal(sParam0, "E"))
	{
		return 14;
	}
	if (are_strings_equal(sParam0, "F"))
	{
		return 15;
	}
	if (are_strings_equal(sParam0, "G"))
	{
		return 16;
	}
	if (are_strings_equal(sParam0, "H"))
	{
		return 17;
	}
	if (are_strings_equal(sParam0, "I"))
	{
		return 18;
	}
	if (are_strings_equal(sParam0, "J"))
	{
		return 19;
	}
	if (are_strings_equal(sParam0, "K"))
	{
		return 20;
	}
	if (are_strings_equal(sParam0, "L"))
	{
		return 21;
	}
	if (are_strings_equal(sParam0, "M"))
	{
		return 22;
	}
	if (are_strings_equal(sParam0, "N"))
	{
		return 23;
	}
	if (are_strings_equal(sParam0, "O"))
	{
		return 24;
	}
	if (are_strings_equal(sParam0, "P"))
	{
		return 25;
	}
	if (are_strings_equal(sParam0, "Q"))
	{
		return 26;
	}
	if (are_strings_equal(sParam0, "R"))
	{
		return 27;
	}
	if (are_strings_equal(sParam0, "S"))
	{
		return 28;
	}
	if (are_strings_equal(sParam0, "T"))
	{
		return 29;
	}
	if (are_strings_equal(sParam0, "U"))
	{
		return 30;
	}
	if (are_strings_equal(sParam0, "V"))
	{
		return 31;
	}
	if (are_strings_equal(sParam0, "W"))
	{
		return 32;
	}
	if (are_strings_equal(sParam0, "X"))
	{
		return 33;
	}
	if (are_strings_equal(sParam0, "Y"))
	{
		return 34;
	}
	if (are_strings_equal(sParam0, "Z"))
	{
		return 35;
	}
	if (are_strings_equal(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

bool func_128()
{
	if (Global_69489)
	{
		return false;
	}
	if (is_player_playing(player_id()))
	{
		if (is_player_climbing(player_id()))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_129()
{
	if (Global_14392)
	{
		if (timera() > 50)
		{
			Global_14392 = 0;
		}
	}
	if (_is_input_disabled(2))
	{
		if (is_control_just_pressed(2, 180))
		{
			switch (Global_14393)
			{
				case 0:
					func_137();
					Global_14393 = 1;
					break;
				
				case 1:
					func_137();
					Global_14393 = 2;
					break;
				
				case 2:
					func_137();
					func_135();
					Global_14393 = 3;
					break;
				
				case 3:
					func_137();
					Global_14393 = 4;
					break;
				
				case 4:
					func_137();
					Global_14393 = 5;
					break;
				
				case 5:
					func_137();
					func_135();
					Global_14393 = 6;
					break;
				
				case 6:
					func_137();
					Global_14393 = 7;
					break;
				
				case 7:
					func_137();
					Global_14393 = 8;
					break;
				
				case 8:
					func_137();
					func_135();
					Global_14393 = 9;
					break;
				
				case 9:
					func_137();
					Global_14393 = 10;
					break;
				
				case 10:
					func_137();
					Global_14393 = 11;
					break;
				
				case 11:
					func_137();
					func_135();
					Global_14393 = 0;
					break;
				}
		}
		if (is_control_just_pressed(2, 181))
		{
			switch (Global_14393)
			{
				case 0:
					func_133();
					func_130();
					Global_14393 = 11;
					break;
				
				case 1:
					func_133();
					Global_14393 = 0;
					break;
				
				case 2:
					func_133();
					Global_14393 = 1;
					break;
				
				case 3:
					func_133();
					func_130();
					Global_14393 = 2;
					break;
				
				case 4:
					func_133();
					Global_14393 = 3;
					break;
				
				case 5:
					func_133();
					Global_14393 = 4;
					break;
				
				case 6:
					func_133();
					func_130();
					Global_14393 = 5;
					break;
				
				case 7:
					func_133();
					Global_14393 = 6;
					break;
				
				case 8:
					func_133();
					Global_14393 = 7;
					break;
				
				case 9:
					func_133();
					func_130();
					Global_14393 = 8;
					break;
				
				case 10:
					func_133();
					Global_14393 = 9;
					break;
				
				case 11:
					func_133();
					Global_14393 = 10;
					break;
				}
			}
	}
	if (Global_14392 == 0)
	{
		if (func_145(2, Global_14388, 0))
		{
			func_137();
			Global_14392 = 1;
			settimera(0);
			switch (Global_14413.f_1)
			{
				case 6:
					if (Global_14393 < 34 - 1)
					{
						Global_14393++;
					}
					break;
				
				case 5:
					if (Global_14393 < 3)
					{
						Global_14393++;
					}
					break;
				}
		}
		if (func_145(2, Global_14387, 0))
		{
			func_133();
			Global_14392 = 1;
			settimera(0);
			if (Global_14393 > 0)
			{
				Global_14393--;
			}
		}
		if (func_145(2, Global_14389, 0))
		{
			func_130();
			Global_14392 = 1;
			settimera(0);
			if (Global_14393 > 3)
			{
				Global_14393 -= 4;
			}
		}
		if (func_145(2, Global_14390, 0))
		{
			func_135();
			Global_14392 = 1;
			settimera(0);
			if (Global_14393 < 8)
			{
				Global_14393 += 4;
			}
		}
	}
}

void func_130()
{
	func_142(Global_14394, "SET_INPUT_EVENT", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_131();
}

void func_131()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			_move_finger(1);
		}
		else
		{
			_move_finger(2);
		}
	}
}

bool func_132()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2563611 || iVar2)
	{
		return true;
	}
	return true;
}

void func_133()
{
	func_142(Global_14394, "SET_INPUT_EVENT", to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_134();
}

void func_134()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			_move_finger(3);
		}
		else
		{
			_move_finger(4);
		}
	}
}

void func_135()
{
	func_142(Global_14394, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_136();
}

void func_136()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			_move_finger(2);
		}
		else
		{
			_move_finger(1);
		}
	}
}

void func_137()
{
	func_142(Global_14394, "SET_INPUT_EVENT", to_float(2), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
	func_138();
}

void func_138()
{
	if (func_132())
	{
		if (Global_14576 == 0)
		{
			_move_finger(4);
		}
		else
		{
			_move_finger(3);
		}
	}
}

void func_139(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_72(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_72(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_72(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_72(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_72(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_140(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	func_72(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_72(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_72(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_72(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_72(sParam6);
	}
	_pop_scaleform_movie_function_void();
}

void func_141()
{
	int[] iVar0 = new int[12];
	int iVar13;
	int iVar14;
	
	StringCopy(&(Global_2991[0 /*5*/]), "CELL_900", 16);
	Global_2991[0 /*5*/].f_4 = 10;
	StringCopy(&(Global_2991[1 /*5*/]), "CELL_901", 16);
	Global_2991[1 /*5*/].f_4 = 0;
	StringCopy(&(Global_2991[2 /*5*/]), "CELL_902", 16);
	Global_2991[2 /*5*/].f_4 = 1;
	StringCopy(&(Global_2991[3 /*5*/]), "CELL_903", 16);
	Global_2991[3 /*5*/].f_4 = 2;
	StringCopy(&(Global_2991[4 /*5*/]), "CELL_904", 16);
	Global_2991[4 /*5*/].f_4 = 3;
	StringCopy(&(Global_2991[5 /*5*/]), "CELL_905", 16);
	Global_2991[5 /*5*/].f_4 = 4;
	StringCopy(&(Global_2991[6 /*5*/]), "CELL_906", 16);
	Global_2991[6 /*5*/].f_4 = 5;
	StringCopy(&(Global_2991[7 /*5*/]), "CELL_907", 16);
	Global_2991[7 /*5*/].f_4 = 6;
	StringCopy(&(Global_2991[8 /*5*/]), "CELL_908", 16);
	Global_2991[8 /*5*/].f_4 = 7;
	StringCopy(&(Global_2991[9 /*5*/]), "CELL_909", 16);
	Global_2991[9 /*5*/].f_4 = 8;
	StringCopy(&(Global_2991[10 /*5*/]), "CELL_910", 16);
	Global_2991[10 /*5*/].f_4 = 9;
	StringCopy(&(Global_2991[11 /*5*/]), "CELL_911", 16);
	Global_2991[11 /*5*/].f_4 = 11;
	iVar13 = false;
	while (iVar13 < 12)
	{
		iVar0[iVar13] = 0;
		iVar13++;
	}
	if (Global_3074[0] == 0)
	{
	}
	iVar13 = false;
	while (iVar13 < 12)
	{
		iVar14 = 0;
		while (iVar14 < 12)
		{
			if (iVar13 == Global_2991[iVar14 /*5*/].f_4)
			{
				if (iVar0[iVar13] == 0)
				{
					Global_3074[iVar13] = iVar14;
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(11);
					_push_scaleform_movie_function_parameter_int(iVar13);
					func_72(&(Global_2991[iVar14 /*5*/]));
					_pop_scaleform_movie_function_void();
					iVar0[iVar13] = 1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}

void func_142(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_143()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_144();
	}
}

void func_144()
{
	if (func_132())
	{
		_move_finger(5);
	}
}

bool func_145(int iParam0, int iParam1, int iParam2)
{
	if (is_control_just_pressed(iParam0, iParam1) || (iParam2 == 1 && is_disabled_control_just_pressed(iParam0, iParam1)))
	{
		if (is_pc_version())
		{
			if (update_onscreen_keyboard() == 0 || (_network_is_text_chat_active() && _is_input_disabled(2)))
			{
				return false;
			}
		}
		if (is_pause_menu_active() || is_warning_message_active())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_146()
{
	if (func_145(2, Global_14381, 0))
	{
		iLocal_133 = 0;
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, false);
		func_75();
		Global_14391 = 1;
		if (Global_69489)
		{
			func_265();
		}
		else
		{
			func_255();
		}
		wait(0);
		if (Global_14413.f_1 > 3)
		{
			Global_14413.f_1 = 7;
		}
		StringCopy(&cLocal_109, "", 16);
	}
}

void func_147()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14391 == 0)
	{
		if (func_145(2, Global_14382, 0))
		{
			if (!func_128())
			{
				Global_16826 = 0;
				Global_16825 = 0;
				Global_16827 = 0;
				iLocal_306 = 0;
				func_143();
				Global_14391 = 1;
				if (iLocal_94 > 0)
				{
					_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
					uLocal_99 = _pop_scaleform_movie_function();
					while (!_0x768FF8961BA904D6(uLocal_99))
					{
						wait(0);
					}
					iLocal_102 = _0x2DE7EFA66B906036(uLocal_99);
					iVar0 = false;
					if (network_is_signed_online())
					{
						if (Global_69489)
						{
							if (iLocal_102 < iLocal_97)
							{
								iVar0 = true;
							}
						}
						else if (iLocal_102 == iLocal_96 || iLocal_102 > iLocal_96)
						{
							iVar0 = true;
						}
					}
					if (is_bit_set(Global_2284, false))
					{
						iVar0 = false;
					}
					if (iVar0)
					{
						Local_331.f_2936 = iLocal_102 - iLocal_96;
						func_151();
					}
					else
					{
						if (iLocal_102 < 0)
						{
							iLocal_102 = 0;
						}
						Global_1598 = Global_14419[iLocal_102];
						if (Global_14568 != 145)
						{
							if (Global_1598 != Global_14568)
							{
								iLocal_90 = 1;
							}
							else
							{
								iLocal_90 = 0;
							}
						}
						else
						{
							iLocal_90 = 0;
						}
						if (iLocal_90 == 0)
						{
							if (is_bit_set(Global_2283, 9))
							{
								if (!is_bit_set(Global_2283, 29))
								{
									Global_101154.f_32575[Global_1598 /*29*/].f_18 = 1;
									if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
									{
										func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(true), -1f, -1f, "CELL_288", "CELL_300", &(Global_117[Global_1598 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_139(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(true), -1f, -1f, "CELL_288", &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
									}
									func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_142(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 29);
								}
							}
							else
							{
								iLocal_326 = false;
								iLocal_327 = false;
								if (Global_69489)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (are_strings_equal(&(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_2186[iVar1 /*24*/])))
										{
											if (!are_strings_equal(&(Global_2186[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
											{
												iLocal_326 = true;
												iLocal_328 = iVar1;
											}
										}
										iVar1++;
									}
								}
								else
								{
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (are_strings_equal(&(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_2121[iVar2 /*16*/])))
										{
											if (!are_strings_equal(&(Global_2121[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
											{
												iLocal_326 = true;
												iLocal_328 = iVar2;
												if (iLocal_328 == iLocal_328)
												{
												}
											}
										}
										iVar2++;
									}
								}
								if (func_149(Global_1598) && is_bit_set(Global_2284, false) == 0)
								{
									if (func_121(Global_1598, Global_14413) == 0 && func_78(Global_1598, Global_14413) == 0)
									{
										iLocal_327 = false;
									}
									else
									{
										iLocal_327 = true;
									}
								}
								if (is_bit_set(Global_2284, false))
								{
									func_148();
									iLocal_133 = 1;
								}
								else if (iLocal_327 == 0 && iLocal_326 == 0)
								{
									Global_16826 = 0;
									Global_16825 = 0;
									Global_16827 = 0;
									if (is_bit_set(Global_2284, 19) && Global_1598 == 129)
									{
									}
									else
									{
										func_86();
									}
								}
								else
								{
									func_120();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_148()
{
	iLocal_131 = GAMEPLAY::GET_GAME_TIMER();
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	wait(0);
	switch (Global_1598)
	{
		case 2:
			func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(false), 0f, -1f, -1f, "CELL_7001", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(false), 0f, -1f, -1f, "CELL_7002", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(false), 0f, -1f, -1f, "CELL_7003", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), "CELL_E_311", 0, 0);
			break;
	}
	if (Global_14401)
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	if (Global_14401)
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_140(Global_14394, "SET_HEADER", "CELL_249", 0, 0, 0, 0);
}

bool func_149(int iParam0)
{
	switch (Global_14413)
	{
		case 0:
			if (func_150(iParam0, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 1:
			if (func_150(iParam0, 1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 2:
			if (func_150(iParam0, 2))
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

bool func_150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return false;
	}
	iVar0 = func_82(iParam0);
	iVar1 = func_82(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		iVar2 = func_81(iVar0, iVar1);
		if (iVar2 != 10)
		{
			if (func_80(iVar2) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_151()
{
	char* sVar0;
	
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 8;
	}
	if (Global_14401)
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	clear_bit(&Global_2283, 17);
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(Global_14394, "SET_DATA_SLOT", to_float(18), to_float(false), to_float(false), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_155(&Local_331);
	if (Global_14413.f_1 > 3)
	{
		func_142(Global_14394, "DISPLAY_VIEW", 18f, to_float(iLocal_100), -1082130432, -1082130432, -1082130432);
		iLocal_100 = false;
		if (func_154(&Local_331))
		{
			sVar0 = get_player_name(Local_331[Local_331.f_2936]);
		}
		else
		{
			sVar0 = func_152(&(Local_331.f_34[func_153(Local_331.f_2936, &Local_331) /*29*/].f_13));
		}
		_push_scaleform_movie_function(Global_14394, "SET_HEADER");
		_begin_text_component("CELL_CONDFNH");
		add_text_component_substring_player_name(sVar0);
		_end_text_component();
		_pop_scaleform_movie_function_void();
		Local_331.f_2999 = 0;
		iLocal_116 = 1;
	}
}

auto func_152(auto uParam0)
{
	return uParam0;
}

int func_153(int iParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = iParam0 - *uParam1.f_33;
	if (iVar0 >= 100)
	{
		iVar0 = 99;
	}
	return iVar0;
}

bool func_154(auto uParam0)
{
	if (*uParam0.f_2936 < *uParam0.f_33)
	{
		return true;
	}
	return false;
}

void func_155(auto uParam0)
{
	int iVar0;
	struct<22> Var1;
	auto uVar36;
	char* sVar37;
	int iVar38;
	
	iVar0 = false;
	if (func_164(uParam0, &uVar36))
	{
		if (func_154(uParam0))
		{
			*uParam0.f_2963 = {func_163(*uParam0[*uParam0.f_2936])};
			sVar37 = get_player_name(*uParam0[*uParam0.f_2936]);
		}
		else
		{
			*uParam0.f_2963 = {*(uParam0.f_34[func_153(*uParam0.f_2936, uParam0) /*29*/])};
			sVar37 = func_152(uParam0.f_34[func_153(*uParam0.f_2936, uParam0) /*29*/].f_13);
		}
		StringCopy(uParam0.f_2983, sVar37, 64);
		iVar38 = false;
		if (network_has_headset())
		{
			if (!Global_1573858)
			{
				if (func_162(player_id()))
				{
					iVar38 = true;
				}
			}
		}
		if (func_154(uParam0))
		{
			if (((network_is_player_muted_by_me(*uParam0[*uParam0.f_2936]) || network_is_player_blocked_by_me(*uParam0[*uParam0.f_2936])) || network_am_i_blocked_by_player(*uParam0[*uParam0.f_2936])) || network_am_i_muted_by_player(*uParam0[*uParam0.f_2936]))
			{
				iVar38 = false;
			}
		}
		if (!network_have_online_privileges())
		{
			iVar38 = false;
		}
		if (_0x23F09EADC01449D6(0))
		{
			iVar38 = false;
		}
		if (network_is_gamer_muted_by_me(uParam0.f_2963) || network_is_gamer_blocked_by_me(uParam0.f_2963))
		{
			iVar38 = false;
		}
		if (network_am_i_muted_by_gamer(uParam0.f_2963) || network_am_i_blocked_by_gamer(uParam0.f_2963))
		{
			iVar38 = false;
		}
		if (_0x2FC5650B0271CB57())
		{
			if (is_durango_version())
			{
				if (_0xFD8B834A8BA05048())
				{
					iVar38 = false;
				}
			}
			else if (is_orbis_version())
			{
				iVar38 = false;
			}
		}
		if (iVar38)
		{
			if (Global_69489)
			{
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT_EMPTY");
				_push_scaleform_movie_function_parameter_int(iVar0);
				_pop_scaleform_movie_function_void();
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(18);
				_push_scaleform_movie_function_parameter_int(iVar0);
				_push_scaleform_movie_function_parameter_int(false);
				if (!Global_2465472.f_1 || Global_2465472.f_38)
				{
					_begin_text_component("CELL_MP_1000");
					_end_text_component();
				}
				else
				{
					_begin_text_component("CELL_MP_1000b");
					_end_text_component();
				}
				_pop_scaleform_movie_function_void();
				*uParam0.f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_35711 == 15)
			{
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT_EMPTY");
				_push_scaleform_movie_function_parameter_int(iVar0);
				_pop_scaleform_movie_function_void();
				_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(18);
				_push_scaleform_movie_function_parameter_int(iVar0);
				_push_scaleform_movie_function_parameter_int(false);
				if (!Global_2465472.f_1 || Global_2465472.f_38)
				{
					_begin_text_component("CELL_MP_1000");
					_end_text_component();
				}
				else
				{
					_begin_text_component("CELL_MP_1000b");
					_end_text_component();
				}
				_pop_scaleform_movie_function_void();
				*uParam0.f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		iVar38 = false;
		if (func_154(uParam0))
		{
			if (((func_162(player_id()) && func_162(*uParam0[*uParam0.f_2936])) && !network_is_player_blocked_by_me(*uParam0[*uParam0.f_2936])) && !network_am_i_blocked_by_player(*uParam0[*uParam0.f_2936]))
			{
				iVar38 = true;
			}
		}
		if (iVar38)
		{
			_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT_EMPTY");
			_push_scaleform_movie_function_parameter_int(iVar0);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(18);
			_push_scaleform_movie_function_parameter_int(iVar0);
			_push_scaleform_movie_function_parameter_int(false);
			_begin_text_component("CELL_MP_1009");
			_end_text_component();
			_pop_scaleform_movie_function_void();
			*uParam0.f_2937[iVar0] = 2;
			iVar0++;
		}
		iVar38 = false;
		if (func_154(uParam0))
		{
			if (network_get_friend_count() < network_get_max_friends())
			{
				if (!network_is_friend(uParam0.f_2963))
				{
					iVar38 = true;
				}
			}
		}
		if (iVar38)
		{
			_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(18);
			_push_scaleform_movie_function_parameter_int(iVar0);
			_push_scaleform_movie_function_parameter_int(false);
			_begin_text_component("PIM_DFRQ2");
			_end_text_component();
			_pop_scaleform_movie_function_void();
			*uParam0.f_2937[iVar0] = 3;
			iVar0++;
		}
		iVar38 = false;
		iVar38 = true;
		if (iVar38)
		{
			_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(18);
			_push_scaleform_movie_function_parameter_int(iVar0);
			_push_scaleform_movie_function_parameter_int(false);
			_begin_text_component("CELL_MP_1007");
			_end_text_component();
			_pop_scaleform_movie_function_void();
			*uParam0.f_2937[iVar0] = 4;
			iVar0++;
		}
		iVar38 = false;
		if (_network_player_is_in_clan())
		{
			if (network_clan_player_is_active(uParam0.f_2963))
			{
				network_clan_player_get_desc(&Var1, 35, uParam0.f_2963);
			}
		}
		if (Var1 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (_0x67A5589628E0CFF6() && !func_161(Var1))
				{
					iVar38 = true;
					*uParam0.f_2947 = {Var1.f_1};
				}
			}
		}
		if (iVar38)
		{
			_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(18);
			_push_scaleform_movie_function_parameter_int(iVar0);
			_push_scaleform_movie_function_parameter_int(false);
			_begin_text_component("CELL_MP_1003");
			_end_text_component();
			_pop_scaleform_movie_function_void();
			*uParam0.f_2937[iVar0] = 5;
			iVar0++;
		}
		clear_bit(&Global_2285, 6);
		iVar38 = false;
		if (func_154(uParam0))
		{
			if (func_160(player_id(), 1, 1))
			{
				if (_0x9DE986FC9A87C474(player_id(), *uParam0[*uParam0.f_2936]))
				{
					if (!func_159(*uParam0[*uParam0.f_2936], 0))
					{
						if (!is_bit_set(Global_2418472[*uParam0[*uParam0.f_2936] /*313*/].f_194, 2))
						{
							iVar38 = true;
							GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2285, 6);
						}
					}
				}
			}
			if (*uParam0[*uParam0.f_2936] != func_158() && func_160(*uParam0[*uParam0.f_2936], 0, 0))
			{
				if (func_156(*uParam0[*uParam0.f_2936], 146))
				{
					iVar38 = false;
				}
			}
		}
		if (Global_1573828 || Global_1573829)
		{
			iVar38 = false;
		}
		if (iVar38)
		{
			_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(18);
			_push_scaleform_movie_function_parameter_int(iVar0);
			_push_scaleform_movie_function_parameter_int(false);
			if (!is_bit_set(Global_2428492.f_686, *uParam0[*uParam0.f_2936]))
			{
				_begin_text_component("CELL_MP_1008");
			}
			else
			{
				_begin_text_component("CELL_MP_1008b");
			}
			_end_text_component();
			_pop_scaleform_movie_function_void();
			*uParam0.f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		_set_notification_text_entry("CELL_LEFT_SESS");
		_draw_notification(1, 1);
		func_30(0);
		return;
	}
}

int func_156(auto uParam0, int iParam1)
{
	if (Global_1610316[uParam0 /*174*/] == iParam1)
	{
		return func_157(uParam0);
	}
	return false;
}

int func_157(auto uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return is_bit_set(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

int func_158()
{
	return -1;
}

int func_159(auto uParam0, int iParam1)
{
	return is_bit_set(Global_2418472[uParam0 /*313*/].f_206, iParam1);
}

bool func_160(int iParam0, int iParam1, int iParam2)
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

bool func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (_network_player_is_in_clan() && _0x67A5589628E0CFF6())
	{
		iVar0 = _0x1F471B79ACC90BEF();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				network_clan_get_membership_desc(&Global_2459370, iVar1);
				if (iParam0 == Global_2459370)
				{
					return true;
				}
				iVar1++;
			}
		}
	}
	return false;
}

bool func_162(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (_0x66B59CFFD78467AF() == 0)
	{
		return false;
	}
	iVar0 = -1;
	if (iParam0 != player_id())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return false;
		}
	}
	if (is_ps3_version() || is_orbis_version())
	{
		if (_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	if (is_xbox360_version() || is_durango_version())
	{
		if (iParam0 == player_id())
		{
			if (_0x83F28CE49FBBFFBA(0, -3, 1) || _0xAEEF48CDF5B6CE7C(1, -1))
			{
				return true;
			}
		}
		else
		{
			Var1 = {func_163(iParam0)};
			if (_0xAEEF48CDF5B6CE7C(0, -1) || (_0xAEEF48CDF5B6CE7C(1, -1) && network_is_friend(&Var1)))
			{
				return true;
			}
		}
	}
	if (is_pc_version())
	{
		if (_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	return false;
}

struct<13> func_163(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_164(auto uParam0, int iParam1)
{
	auto uVar0;
	
	if (!network_is_signed_online())
	{
		*iParam1 = 2;
	}
	else if (*uParam0.f_2936 < *uParam0.f_33)
	{
		if (func_160(*uParam0[*uParam0.f_2936], 0, 1))
		{
			return true;
		}
		else
		{
			*iParam1 = 2;
		}
	}
	else
	{
		uVar0 = func_153(*uParam0.f_2936, uParam0);
		if (_0x87EB7A3FFCB314DB(uParam0.f_34[uVar0 /*29*/]))
		{
			return true;
		}
		else
		{
			*iParam1 = 0;
		}
	}
	return false;
}

void func_165()
{
	if (func_145(2, Global_14382, 0))
	{
		clear_bit(&Global_2284, false);
		iLocal_133 = 0;
		func_143();
		Global_14391 = 1;
		Global_16826 = 0;
		Global_16825 = 0;
		Global_16827 = 0;
		func_86();
	}
}

void func_166()
{
	if (iLocal_126)
	{
		if (timera() > 150)
		{
			iLocal_126 = 0;
		}
	}
	if (_is_input_disabled(2))
	{
		if (func_145(2, 181, 0))
		{
			if (iLocal_98 > 0)
			{
				iLocal_98--;
			}
			else
			{
				iLocal_98 = iLocal_94 - 1;
			}
			func_130();
			iLocal_126 = 1;
			settimera(0);
		}
		if (func_145(2, 180, 0))
		{
			iLocal_98++;
			if (iLocal_98 == iLocal_94)
			{
				iLocal_98 = 0;
			}
			func_135();
		}
	}
	if (iLocal_126 == 0)
	{
		if (func_145(2, Global_14389, 0))
		{
			if (iLocal_98 > 0)
			{
				iLocal_98--;
			}
			else
			{
				iLocal_98 = iLocal_94 - 1;
			}
			func_130();
			iLocal_126 = 1;
			settimera(0);
		}
		if (func_145(2, Global_14390, 0))
		{
			iLocal_98++;
			if (iLocal_98 == iLocal_94)
			{
				iLocal_98 = 0;
			}
			func_135();
			iLocal_126 = 1;
			settimera(0);
		}
		if (func_145(2, Global_14388, 0))
		{
			func_168();
			func_168();
			func_168();
			func_168();
			func_168();
			play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
			iLocal_126 = 1;
			settimera(0);
		}
		if (func_145(2, Global_14387, 0))
		{
			func_167();
			func_167();
			func_167();
			func_167();
			func_167();
			play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
			iLocal_126 = 1;
			settimera(0);
		}
	}
}

void func_167()
{
	if (iLocal_98 > 0)
	{
		iLocal_98--;
	}
	else
	{
		iLocal_98 = iLocal_94 - 1;
	}
	func_142(Global_14394, "SET_INPUT_EVENT", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_168()
{
	iLocal_98++;
	if (iLocal_98 == iLocal_94)
	{
		iLocal_98 = 0;
	}
	func_142(Global_14394, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_169()
{
	iLocal_98++;
	if (iLocal_98 == iLocal_94)
	{
		iLocal_98 = 0;
		clear_bit(&Global_2283, 16);
	}
	func_135();
	_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
	uLocal_99 = _pop_scaleform_movie_function();
	while (!_0x768FF8961BA904D6(uLocal_99))
	{
		wait(0);
	}
	iLocal_102 = _0x2DE7EFA66B906036(uLocal_99);
	if (iLocal_102 < 0)
	{
		iLocal_102 = 0;
	}
	if (Global_16743 == Global_14419[iLocal_102])
	{
		clear_bit(&Global_2283, 16);
	}
}

void func_170()
{
	auto uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<22> Var4;
	int iVar39;
	struct<13> Var40;
	char* sVar53;
	struct<13> Var54;
	
	if (is_bit_set(Global_2285, 6))
	{
		if (!network_is_gamer_in_my_session(&(Local_331.f_2963)))
		{
			clear_bit(&Global_2285, 6);
			StringCopy(&cLocal_109, "", 16);
			Global_14413.f_1 = 3;
		}
	}
	switch (Local_331.f_2999)
	{
		case 0:
			if (is_bit_set(iLocal_325, true))
			{
				if (!Global_91330.f_1352)
				{
					clear_bit(&iLocal_325, false);
					clear_bit(&iLocal_325, true);
				}
				return;
			}
			if (Local_331.f_2976)
			{
				if (Local_331.f_2981)
				{
					iVar39 = 2;
					_set_warning_message_2("HUD_CONNPROB", "HUD_DISCON", iVar39, 0, 0, -1, 0, 0, 1);
					if (Local_331.f_2982)
					{
						if (func_145(2, Global_14382, 0) || is_control_pressed(2, 201))
						{
							Global_14413.f_1 = 3;
						}
					}
					else if (func_145(2, Global_14382, 0) || is_control_pressed(2, 201))
					{
					}
					else
					{
						Local_331.f_2982 = 1;
					}
				}
				else
				{
					iLocal_100 = Local_331.f_2946;
					switch (Local_331.f_2937[Local_331.f_2946])
					{
						case 1:
							if (!Global_2465472.f_1)
							{
								if (!_0xEF0912DDF7C4CB4B() && !_0xB5D3453C98456528())
								{
									Local_331.f_2976 = 0;
									func_252();
									Local_331.f_2977 = 0;
									if (func_154(&Local_331))
									{
										sVar53 = get_player_name(Local_331[Local_331.f_2936]);
									}
									else
									{
										sVar53 = func_152(&(Local_331.f_34[func_153(Local_331.f_2936, &Local_331) /*29*/].f_13));
									}
									func_251(sVar53);
									Local_331.f_2999 = 1;
									func_250(&(Local_331.f_2979));
									func_249(0);
									if (Global_69489)
									{
										if (func_248(1) >= Global_262145.f_159)
										{
											Var40 = {func_163(player_id())};
											if (func_247())
											{
												func_238(1654961868, Global_262145.f_159, &uVar0, 1, 1, 0);
												Global_2558146[uVar0 /*73*/].f_8.f_3 = {Var40};
											}
											else
											{
												network_spent_call_player(Global_262145.f_159, &Var40, true, true);
											}
										}
										else
										{
											Var40 = {func_163(player_id())};
											if (func_247())
											{
											}
											else
											{
												network_spent_call_player(func_248(1), &Var40, true, true);
											}
										}
										func_87(1907, 1, -1);
									}
								}
								else if (_0xEF0912DDF7C4CB4B())
								{
								}
								else if (_0xB5D3453C98456528())
								{
									if (!Global_2465472.f_59)
									{
										Global_2465472 = 1;
										Global_2465472.f_2 = 1;
										Global_2465472.f_59 = 1;
									}
								}
							}
							else if (Global_2465472.f_38)
							{
							}
							else
							{
								func_237();
								play_sound_frontend(-1, "Hang_Up", &Global_14402, 1);
								if (Global_2465472.f_1)
								{
									func_235();
								}
								Global_14413.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_234(&(Global_2460486.f_286[Local_331[Local_331.f_2936] /*2*/])))
							{
								if (!func_233(&(Global_2460486.f_286[Local_331[Local_331.f_2936] /*2*/]), 30000, 0))
								{
									if (func_222(0, 0, 1, 1))
									{
										func_205("CELL_MP_1009H", get_player_name(Local_331[Local_331.f_2936]), func_206(Local_331[Local_331.f_2936], -2, 0, 0), -1);
									}
									Local_331.f_2976 = 0;
									return;
								}
							}
							if (((!func_162(player_id()) || !func_162(Local_331[Local_331.f_2936])) || network_is_player_blocked_by_me(Local_331[Local_331.f_2936])) || network_am_i_blocked_by_player(Local_331[Local_331.f_2936]))
							{
								if (func_222(1, 1, 1, 1))
								{
									if (!are_strings_equal(get_player_name(Local_331[Local_331.f_2936]), "**Invalid**"))
									{
										func_205("CELL_MP_1009M", get_player_name(Local_331[Local_331.f_2936]), func_206(Local_331[Local_331.f_2936], -2, 0, 0), -1);
									}
									else
									{
										func_204("CELL_MP_1009N", -1);
									}
								}
								Local_331.f_2976 = 0;
								return;
							}
							Local_331.f_2976 = 0;
							Local_331.f_2999 = 2;
							iLocal_3350 = 1;
							return;
							break;
						
						case 3:
							if (!network_is_adding_friend())
							{
								if (is_ps3_version() && !network_is_friend(&(Local_331.f_2963)))
								{
									if (network_add_friend(&(Local_331.f_2963), ""))
									{
										Local_331.f_2976 = 0;
										Global_14413.f_1 = 3;
									}
								}
								else
								{
									network_show_profile_ui(&(Local_331.f_2963));
									Local_331.f_2976 = 0;
									Global_14413.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (_network_player_is_in_clan())
							{
								if (network_clan_player_is_active(&(Local_331.f_2963)))
								{
									network_clan_player_get_desc(&Var4, 35, &(Local_331.f_2963));
								}
							}
							if (Var4 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_161(Var4))
									{
										if (network_clan_join(Var4))
										{
											Local_331.f_2976 = 0;
											_set_notification_text_entry("CREW_JOIN");
											add_text_component_substring_player_name(&(Var4.f_1));
											_draw_notification(1, 1);
											Global_14413.f_1 = 3;
										}
										else
										{
											Global_14413.f_1 = 3;
											Local_331.f_2976 = 0;
											Global_14413.f_1 = 3;
										}
										return;
									}
								}
							}
							Local_331.f_2976 = 0;
							break;
						
						case 4:
							Local_331.f_2976 = 0;
							func_151();
							network_show_profile_ui(&(Local_331.f_2963));
							break;
						
						case 7:
							if (is_bit_set(Global_2428492.f_686, Local_331[Local_331.f_2936]))
							{
								clear_bit(&(Global_2428492.f_686), Local_331[Local_331.f_2936]);
							}
							else
							{
								Global_2428492.f_686 = 0;
								GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2428492.f_686), Local_331[Local_331.f_2936]);
							}
							func_151();
							Local_331.f_2976 = 0;
							break;
						}
				}
			}
			else if (Global_14391 == 0)
			{
				if (func_145(2, Global_14382, 0))
				{
					Local_331.f_2982 = 0;
					Local_331.f_2981 = 0;
					clear_bit(&Global_2284, false);
					iLocal_115 = 0;
					func_143();
					Global_14391 = 1;
					_push_scaleform_movie_function(Global_14394, "GET_CURRENT_SELECTION");
					uLocal_99 = _pop_scaleform_movie_function();
					while (!_0x768FF8961BA904D6(uLocal_99))
					{
						wait(0);
					}
					Local_331.f_2946 = _0x2DE7EFA66B906036(uLocal_99);
					if (!func_164(&Local_331, &iVar3))
					{
						switch (iVar3)
						{
							case 0:
								func_203("PLAYER_N_ON", 7500, 1);
								break;
							
							case 1:
								func_203("PLAYERLEFT", 7500, 1);
								break;
							
							case 2:
								Global_2465472.f_59 = 0;
								Local_331.f_2981 = 1;
								Local_331.f_2976 = 1;
								return;
								break;
						}
						Global_14413.f_1 = 3;
						return;
					}
					Global_2465472.f_59 = 0;
					Local_331.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_164(&Local_331, &iVar3))
			{
				func_249(1);
				func_237();
				Local_331.f_2978 = 1;
				Local_331.f_2977 = 1;
				return;
			}
			else if (Local_331.f_2977)
			{
				if (!Local_331.f_2978)
				{
					if (!Global_2465472.f_1 || !_0x855BC38818F6F684())
					{
						func_249(1);
						func_237();
						Local_331.f_2978 = 1;
						Local_331.f_2977 = 1;
						return;
					}
					if (network_is_signed_online())
					{
						if (func_145(2, Global_14383, 0))
						{
							func_237();
							Local_331.f_2976 = 0;
							return;
						}
						if (func_202(Global_2465472.f_20))
						{
							if (network_is_friend(&(Global_2465472.f_20)))
							{
								if (!_0x87EB7A3FFCB314DB(&(Global_2465472.f_20)))
								{
									func_249(1);
									func_237();
									Local_331.f_2978 = 1;
									Local_331.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_249(1);
							func_237();
							Local_331.f_2978 = 1;
							Local_331.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_237();
						Local_331.f_2976 = 0;
						func_151();
						return;
					}
					if (!Global_2465472.f_37)
					{
						if (Global_2465472.f_33 == -1)
						{
							if (func_233(&(Local_331.f_2979), 40000, 1))
							{
								func_249(1);
								func_237();
								Local_331.f_2978 = 1;
								Local_331.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2465472.f_33)
							{
								case 1:
									func_201();
									func_200();
									if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									stop_sound(iLocal_104);
									return;
									break;
								
								case 2:
									func_249(1);
									func_237();
									Local_331.f_2978 = 1;
									return;
									break;
								
								default:
									func_249(1);
									func_237();
									Local_331.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_234(&(Local_331.f_2979)))
			{
				func_250(&(Local_331.f_2979));
				func_199(&(Local_331.f_2979), 1, 0);
			}
			else
			{
				if (func_233(&(Local_331.f_2979), 15000, 1))
				{
					func_237();
					func_75();
					func_254();
					Global_14413.f_1 = 3;
					return;
				}
				if (Global_2465472.f_1 || is_bit_set(Global_2284, 20))
				{
					if (func_145(2, Global_14383, 0))
					{
						func_237();
						Global_14413.f_1 = 3;
						return;
					}
				}
				if (Global_2465472.f_1)
				{
					if (func_198(&Local_331, &(Local_331.f_2983)))
					{
						func_197(&(Local_331.f_2979), 1, 0);
						Local_331.f_2978 = 0;
						Local_331.f_2977 = 1;
						if (Global_69489)
						{
							func_195(105, 1, -1, 1);
						}
					}
					else
					{
						func_249(1);
						func_237();
						Local_331.f_2978 = 1;
						Local_331.f_2977 = 1;
						return;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_3350 == 1)
			{
				if (func_189(&vLocal_3331, &(vLocal_3331.f_1), &(vLocal_3331.f_2), 0, 0, &cLocal_3334, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0))
				{
					StringCopy(&cLocal_3334, get_onscreen_keyboard_result(), 64);
					vLocal_3331.x = 0;
					vLocal_3331.z = 0;
					vLocal_3331.y = 0;
					iLocal_3350 = 0;
					iLocal_3351 = get_length_of_literal_string(&cLocal_3334);
					StringCopy(&cLocal_3334, _get_text_substring_safe(&cLocal_3334, 0, iLocal_3351, 63), 64);
					func_197(&(Global_2460486.f_286[Local_331[Local_331.f_2936] /*2*/]), 0, 0);
					if (is_string_null_or_empty(func_188(&cLocal_3334)))
					{
					}
					else
					{
						Var54 = {func_163(Local_331[Local_331.f_2936])};
						network_send_text_message(&cLocal_3334, &Var54);
						func_171("CP_TM_SENT", Local_331[Local_331.f_2936], 0, 0, 0, 1, 1, 0);
						func_87(1906, 1, -1);
					}
					Local_331.f_2999 = 0;
				}
				if (vLocal_3331.x == 2)
				{
					vLocal_3331.x = 0;
					vLocal_3331.z = 0;
					vLocal_3331.y = 0;
					iLocal_3350 = 0;
					Local_331.f_2999 = 0;
				}
			}
			break;
	}
}

int func_171(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = get_player_team(iParam1);
	if (_0x9DE986FC9A87C474(player_id(), iParam1) || iParam3)
	{
		if (!iParam2)
		{
			StringCopy(&Var2, get_player_name(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, get_player_name(iParam1), 64);
		}
		_set_notification_text_entry(sParam0);
		if ((iVar1 != -1 && network_is_activity_session()) && iVar1 < 4)
		{
			if (Global_1617379.f_66777[iVar1] != -1)
			{
				_0x39BBF623FC803EAC(func_181(iVar1, iParam1, 0));
			}
			else
			{
				_0x39BBF623FC803EAC(func_206(iParam1, -2, 1, 0));
			}
		}
		else
		{
			_0x39BBF623FC803EAC(func_206(iParam1, -2, 1, 0));
		}
		add_text_component_substring_player_name(func_179(&Var2));
		if (!iParam4)
		{
			iVar0 = _draw_notification(0, 1);
		}
		else
		{
			Global_2459440 = {func_163(iParam1)};
			if (network_clan_player_get_desc(&Global_2459370, 35, &Global_2459440))
			{
				iVar18 = 0;
				if (are_strings_equal(&(Global_2459370.f_22), "Leader") && Global_2459370.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2459370.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (iParam6)
				{
					if (iParam7)
					{
						Var2 = {func_178(&Var2)};
					}
					iVar0 = _0x137BC35589E34E1E(iVar19, _0x7543BB439F63792B(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar18, 0, Global_2459370, &Var2, Global_1317072, Global_1317073, Global_1317074);
				}
				else
				{
					iVar0 = _0x97C9E4E7024A8F2C(iVar19, _0x7543BB439F63792B(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar18, 0, Global_2459370, Global_1317072, Global_1317073, Global_1317074);
				}
			}
			else
			{
				iVar0 = _draw_notification(0, 1);
			}
		}
		func_172(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_172(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_177() || !network_is_activity_session()) || !func_175(player_id(), 0))
	{
		return;
	}
	iVar0 = func_173(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_174(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return Global_1724230 - 1;
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_175(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_176(-1, 0) == 8;
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

int func_176(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_60();
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

int func_177()
{
	return is_dlc_present(-1762644250);
}

struct<16> func_178(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>", 64);
	return cVar0;
}

auto func_179(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_180(&cVar0);
}

auto func_180(char[4] cParam0)
{
	return cParam0;
}

int func_181(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1617379.f_66777[iParam0] != -1 && Global_1617379.f_66777[iParam0] <= 4)
	{
		if (Global_1617379.f_66777[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617379.f_66777[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617379.f_66777[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617379.f_66777[iParam0] == 4)
		{
			if (is_bit_set(Global_1617379.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1617379.f_66777[iParam0];
		}
	}
	else
	{
		iVar0 = func_182(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

int func_182(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_187(iVar0, iParam2, 0) && !is_bit_set(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_186(1);
				}
				else
				{
					return func_186(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (is_bit_set(Global_1617379.f_4, 20))
			{
				return func_183(iVar0, iParam2, 1);
			}
			else
			{
				return func_183(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_186(1);
	}
	return func_186(0);
}

int func_183(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_185(iParam0, iParam1);
	if (func_184(Global_1617379.f_70365))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (iParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

bool func_184(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7339[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_185(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_187(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_186(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_187(int iParam0, int iParam1, int iParam2)
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

auto func_188(char[4] cParam0)
{
	return cParam0;
}

bool func_189(auto uParam0, auto uParam1, auto uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (is_screen_fading_out() || is_screen_faded_out())
	{
		return false;
	}
	switch (*uParam2)
	{
		case 0:
			if (iParam3)
			{
				if (iParam7 == 6)
				{
					iVar6 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar6 = 63;
				}
				else if (func_194())
				{
					iVar6 = 21;
				}
				else
				{
					iVar6 = 51;
				}
				if (*uParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_194())
						{
							sVar4 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_KEY_TIP7";
						iVar6 = 21;
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_KEY_TIP5";
						if (_get_number_of_instances_of_streamed_script(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_KEY_TIP6";
						if (_get_number_of_instances_of_streamed_script(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_KEY_TIP10";
					}
					else if (iParam7 == 8)
					{
						sVar4 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						sVar4 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						sVar4 = "FMMC_KEY_VSS";
					}
				}
				else if (func_194())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (is_xbox360_version() || is_durango_version())
				{
					sVar5 = sVar4;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						sVar4 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						sVar4 = "FMMC_SS_RL_57";
					}
				}
				if (is_pc_version())
				{
					iVar7 = 6;
				}
				else if (_get_ui_language_id() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (is_string_null_or_empty(sParam5))
				{
					display_onscreen_keyboard(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					display_onscreen_keyboard(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (is_pc_version())
				{
					iVar8 = 6;
				}
				else if (_get_ui_language_id() == 0)
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (iParam4)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (is_xbox360_version() || is_durango_version())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (_get_ui_language_id() == 10)
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 25;
					}
					if (func_177())
					{
						iVar9 = 64;
					}
					_0x3ED1438C1F5C6612(2);
					if (is_string_null_or_empty(&(Global_1617379.f_70372)))
					{
						display_onscreen_keyboard(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						display_onscreen_keyboard(iVar8, sVar4, sVar5, &(Global_1617379.f_70372), "", "", "", iVar9);
					}
				}
				else if (iParam13)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (is_xbox360_version())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					iVar9 = 63;
					_0x3ED1438C1F5C6612(2);
					if (is_string_null_or_empty(sParam5))
					{
						display_onscreen_keyboard(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						display_onscreen_keyboard(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam9)
				{
					if (_get_ui_language_id() == 0)
					{
						iVar9 = 200;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPT";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPTF";
						}
					}
					else
					{
						iVar9 = 100;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_ALTT";
						}
						else
						{
							sVar4 = "FMMC_KEY_ALTTF";
						}
					}
					if (is_xbox360_version() || is_durango_version())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar10 = 0;
					while (iVar10 <= 7)
					{
						if (is_string_null(&(Global_1617379.f_70523[iVar10 /*16*/])))
						{
							StringCopy(&(Global_1617379.f_70523[iVar10 /*16*/]), "", 64);
						}
						iVar10++;
					}
					_0xCA78CFA0366592FE(iVar8, sVar4, sVar5, &(Global_1617379.f_70523[0 /*16*/]), &(Global_1617379.f_70523[1 /*16*/]), &(Global_1617379.f_70523[2 /*16*/]), &(Global_1617379.f_70523[3 /*16*/]), &(Global_1617379.f_70523[4 /*16*/]), &(Global_1617379.f_70523[5 /*16*/]), &(Global_1617379.f_70523[6 /*16*/]), &(Global_1617379.f_70523[7 /*16*/]), iVar9);
				}
				else if (iParam6)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP4";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP4F";
					}
					if (is_xbox360_version() || is_durango_version())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					if (is_string_null_or_empty(&(Global_1617379.f_28799[iParam16 /*38*/].f_4[0 /*16*/])))
					{
						display_onscreen_keyboard(iVar8, sVar4, sVar5, "", "", "", "", 126);
					}
					else
					{
						iVar11 = 0;
						while (iVar11 <= 1)
						{
							if (is_string_null(&(Global_1617379.f_28799[iParam16 /*38*/].f_4[iVar11 /*16*/])))
							{
								StringCopy(&(Global_1617379.f_28799[iParam16 /*38*/].f_4[iVar11 /*16*/]), "", 64);
							}
							iVar11++;
						}
						display_onscreen_keyboard(iVar8, sVar4, sVar5, &(Global_1617379.f_28799[iParam16 /*38*/].f_4[0 /*16*/]), &(Global_1617379.f_28799[iParam16 /*38*/].f_4[1 /*16*/]), "", "", 126);
					}
				}
				else if (iParam8)
				{
					iVar9 = 61;
					if (iParam11)
					{
						if (func_194())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_SOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_SODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_SODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "CELL_EMAIL_SOD";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "CELL_EMAIL_SODE";
						}
						else
						{
							sVar4 = "CELL_EMAIL_SODF";
						}
						if (is_xbox360_version() || is_durango_version())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_194())
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS";
						}
						if (is_xbox360_version() || is_durango_version())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
						iVar9 = 21;
					}
					else
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8F";
						}
						if (is_xbox360_version())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (is_string_null_or_empty(sParam5))
					{
						display_onscreen_keyboard(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						display_onscreen_keyboard(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam12)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP9";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP9F";
					}
					if (is_xbox360_version())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					if (is_string_null_or_empty(sParam5))
					{
						display_onscreen_keyboard(iVar8, sVar4, sVar5, "", "", "", "", 16);
					}
					else
					{
						display_onscreen_keyboard(iVar8, sVar4, sVar5, sParam5, "", "", "", 16);
					}
				}
				else if (iParam14)
				{
					iVar9 = 16;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (is_xbox360_version())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					if (is_string_null_or_empty(sParam5))
					{
						display_onscreen_keyboard(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						display_onscreen_keyboard(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam15)
				{
					iVar9 = 61;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (is_string_null_or_empty(sParam5))
					{
						display_onscreen_keyboard(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						display_onscreen_keyboard(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam17)
				{
					if (is_durango_version())
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 20;
					}
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP14S";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP14ES";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP14OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP14FS";
					}
					if (is_xbox360_version())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (is_string_null_or_empty(sParam5))
					{
						display_onscreen_keyboard(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						display_onscreen_keyboard(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18)
				{
					if (is_xbox360_version() || is_durango_version())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam20)
					{
						sVar4 = "FMMC_KEY_TIP15B";
					}
					else if (iParam21)
					{
						sVar4 = "FMMC_KEY_TIP15U";
					}
					else if (iParam19)
					{
						sVar4 = "FMMC_KEY_TIP15N";
					}
					else if (iParam23)
					{
						sVar4 = "FMMC_KEY_TIP15I";
					}
					else if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP15";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP15F";
					}
					if (is_string_null_or_empty(sParam5))
					{
						display_onscreen_keyboard(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						display_onscreen_keyboard(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (_get_ui_language_id() == 0)
					{
						iVar9 = 501;
						if (iParam11)
						{
							if (func_194())
							{
								if (*uParam1 == 0)
								{
									sVar4 = "CELL_EMASH_BOD";
								}
								else if (*uParam1 == -1)
								{
									sVar4 = "CELL_EMASH_BODE";
								}
								else
								{
									sVar4 = "CELL_EMASH_BODF";
								}
							}
							else if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMAIL_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMAIL_BODE";
							}
							else
							{
								sVar4 = "CELL_EMAIL_BODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP3";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIP3E";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP3F";
						}
					}
					else
					{
						iVar9 = 251;
						if (func_194())
						{
							iVar9 = 150;
						}
						if (iParam11)
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_BODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_BODF";
							}
						}
						else if (func_194())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "FMMC_KEY_TIPSS";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								sVar4 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPS";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIPSE";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPSF";
						}
					}
					if (is_xbox360_version() || is_durango_version())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M20";
						if (iParam11)
						{
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					iVar12 = 0;
					while (iVar12 <= 7)
					{
						if (is_string_null(&(Global_1617379.f_70394[iVar12 /*16*/])))
						{
							StringCopy(&(Global_1617379.f_70394[iVar12 /*16*/]), "", 64);
						}
						iVar12++;
					}
					if (iParam11)
					{
						_0xCA78CFA0366592FE(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						_0xCA78CFA0366592FE(iVar8, sVar4, sVar5, &(Global_1617379.f_70394[0 /*16*/]), &(Global_1617379.f_70394[1 /*16*/]), &(Global_1617379.f_70394[2 /*16*/]), &(Global_1617379.f_70394[3 /*16*/]), &(Global_1617379.f_70394[4 /*16*/]), &(Global_1617379.f_70394[5 /*16*/]), &(Global_1617379.f_70394[6 /*16*/]), &(Global_1617379.f_70394[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1705885, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = update_onscreen_keyboard();
			switch (*uParam0)
			{
				case 0:
					return false;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*uParam1 = 0;
					return false;
				
				case 2:
					*uParam1 = 0;
					return false;
				
				case 1:
					if (iParam4 || iParam13)
					{
						if (is_string_null_or_empty(&Global_1705885))
						{
							StringCopy(&Global_1705885, get_onscreen_keyboard_result(), 64);
							if (is_string_null_or_empty(&Global_1705885))
							{
								*uParam1 = 0;
								return true;
							}
							iVar1 = get_length_of_literal_string(get_onscreen_keyboard_result());
							iVar3 = 0;
							while (iVar3 <= iVar1 - 1)
							{
								if (*uParam2 != 0)
								{
									if (!is_string_null_or_empty(&Global_1705885))
									{
										if (are_strings_equal(" ", _get_text_substring(&Global_1705885, 0, 1)))
										{
											iVar2 = get_length_of_literal_string(&Global_1705885);
											StringCopy(&Global_1705885, _get_text_substring(&Global_1705885, 1, iVar2), 64);
										}
									}
									else
									{
										*uParam1 = 0;
										return true;
									}
								}
								iVar3++;
							}
						}
					}
					if (_0x1753344C770358AE(*uParam1))
					{
						if (!_0x82E4A58BABC15AE7(*uParam1))
						{
							_0x10D373323E5B9C0D();
							iVar0 = _0x930DE22F07B1CCE3(*uParam1);
							switch (iVar0)
							{
								case 0:
									*uParam1 = 0;
									return true;
									break;
								
								case 1:
									*uParam2 = 0;
									*uParam0 = 0;
									return false;
									break;
								
								case -1:
									*uParam2 = 0;
									*uParam0 = 3;
									*uParam1 = 0;
									func_193(1);
									return false;
									break;
							}
						}
						else if (iParam11)
						{
							if (_get_number_of_instances_of_streamed_script(joaat("appinternet")) == 0)
							{
								_0x10D373323E5B9C0D();
								*uParam1 = 0;
								return true;
							}
						}
						break;
					}
					if (iParam4)
					{
						if (iParam22)
						{
							unk_0xEB2BF817463DFA28(&Global_1705885, uParam1);
						}
						else
						{
							_0x75632C5ECD7ED843(&Global_1705885, uParam1);
						}
					}
					else if (is_string_null_or_empty(get_onscreen_keyboard_result()))
					{
						*uParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						_0x10D373323E5B9C0D();
						return false;
					}
					else if (iParam22)
					{
						unk_0xEB2BF817463DFA28(get_onscreen_keyboard_result(), uParam1);
					}
					else
					{
						_0x75632C5ECD7ED843(get_onscreen_keyboard_result(), uParam1);
					}
					if (is_durango_version())
					{
						if ((!network_is_signed_online() || func_191() == 0) || func_190() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return false;
						}
					}
					if (iParam17)
					{
						_0xABA17D7CE615ADBF("ERROR_CHECKYACHTNAME");
						_0xBD12F8228410D9B4(1);
					}
					else
					{
						_0xABA17D7CE615ADBF("ERROR_CHECKPROFANITY");
						_0xBD12F8228410D9B4(1);
					}
					if (!_0x1753344C770358AE(*uParam1))
					{
						if (!is_string_null_or_empty(&Global_1705885))
						{
							*uParam1 = -1;
						}
						else
						{
							*uParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						_0x10D373323E5B9C0D();
						return false;
					}
				
				default:
			}
			break;
	}
	return false;
}

bool func_190()
{
	if (!func_191())
	{
		return true;
	}
	return false;
}

bool func_191()
{
	if (func_192())
	{
		return false;
	}
	if (network_is_cloud_available() == 0)
	{
		return false;
	}
	return true;
}

auto func_192()
{
	return Global_2443548;
}

void func_193(int iParam0)
{
	Global_2443548 = iParam0;
}

bool func_194()
{
	if (((_get_ui_language_id() == 7 || _get_ui_language_id() == 8) || _get_ui_language_id() == 9) || _get_ui_language_id() == 10)
	{
		return true;
	}
	return false;
}

void func_195(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_196())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_59(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

bool func_196()
{
	return true;
	return false;
}

void func_197(auto uParam0, int iParam1, int iParam2)
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

bool func_198(auto uParam0, char* sParam1)
{
	if (Global_2465472.f_1)
	{
		if (_0x855BC38818F6F684())
		{
			_0xABD5E88B8A2D3DB2(uParam0.f_2963);
			Global_2465472.f_20 = {*uParam0.f_2963};
			StringCopy(&(Global_2465472.f_4), sParam1, 64);
			return true;
		}
	}
	return false;
}

void func_199(auto uParam0, int iParam1, int iParam2)
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

void func_200()
{
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 9;
		Global_15725 = 1;
		if (Global_69489)
		{
			if (!is_pc_version())
			{
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2460486.f_1639), 15);
			}
		}
	}
}

void func_201()
{
	_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(4);
	_push_scaleform_movie_function_parameter_int(false);
	_push_scaleform_movie_function_parameter_int(2);
	_begin_text_component("CELL_CONDFON");
	add_text_component_substring_player_name(&Global_15727);
	_end_text_component();
	func_72("CELL_300");
	func_72("CELL_219");
	func_72("CELL_219");
	_pop_scaleform_movie_function_void();
	Global_2465472.f_37 = 1;
	clear_bit(&Global_2283, 27);
	func_91();
}

int func_202(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

void func_203(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

void func_204(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_205(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	_set_text_component_format(sParam0);
	if (!iParam2 == 0)
	{
		_0x39BBF623FC803EAC(iParam2);
	}
	add_text_component_substring_player_name(sParam1);
	_display_help_text_from_string_label(0, 0, true, iParam3);
}

int func_206(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_220(iParam0))
	{
		if (iParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_220(player_id()) || (func_219() && func_218()))
	{
		iVar0 = func_217();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_160(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_181(iParam1, iParam0, 0);
							}
							else
							{
								return func_208(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_208(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_181(iParam1, iParam0, 0);
				}
				else
				{
					return func_207(0, -1, 0);
				}
			}
			else
			{
				return func_207(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_181(iParam1, iParam0, 0);
		}
		else
		{
			return func_208(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_208(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_207(int iParam0, int iParam1, int iParam2)
{
	return func_182(player_id(), iParam0, iParam1, iParam2);
}

int func_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = get_player_team(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587523[player_id() /*444*/] == 148)
	{
		iVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587523[iVar2 /*444*/] == 148)
		{
			iVar1 = true;
		}
	}
	if (!iVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_216(iParam1, iParam0, iVar0, 0) && !is_bit_set(Global_1617379.f_15, 18)) || ((func_187(get_player_team(iParam1), get_player_team(iParam0), 0) && is_bit_set(Global_1617379.f_15, 23)) && !is_bit_set(Global_1617379.f_15, 18)))
			{
				return func_186(1);
			}
			else if (is_bit_set(Global_1617379.f_15, 26))
			{
				return func_215(1);
			}
			else
			{
				return func_182(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_186(1);
			}
			else
			{
				return func_182(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_211(iParam0);
	if (!iVar3 == -1)
	{
		return func_209(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_209(int iParam0)
{
	int iVar0;
	
	iVar0 = func_210(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 1;
}

auto func_210(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_211(int iParam0)
{
	if (!iParam0 == func_158())
	{
		if (func_213(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_212(iParam0)];
		}
	}
	return -1;
}

int func_212(int iParam0)
{
	if (iParam0 != func_158())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_158();
}

int func_213(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_214(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_158();
}

int func_214(int iParam0)
{
	if (iParam0 != func_158())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_158())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_215(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && get_player_team(iParam1) == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == get_player_team(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == iParam2;
	}
	return get_player_team(iParam0) == iParam2;
}

auto func_217()
{
	return Global_2359301.f_2;
}

int func_218()
{
	return is_bit_set(Global_2359301, 4);
}

int func_219()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_220(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return true;
	}
	if (func_221())
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

int func_221()
{
	return is_bit_set(Global_2359301, 3);
}

bool func_222(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 && is_help_message_being_displayed())
	{
		return false;
	}
	if (func_232())
	{
		return false;
	}
	if (!is_screen_faded_in())
	{
		return false;
	}
	if (func_51())
	{
		return false;
	}
	if (func_231())
	{
		return false;
	}
	if (iParam1)
	{
		if (func_228(player_id(), 1))
		{
			return false;
		}
	}
	if (iParam0)
	{
		if (func_227(player_id()))
		{
			return false;
		}
	}
	if (func_226())
	{
		return false;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (iParam3)
	{
		if (!is_player_control_on(player_id()))
		{
			return false;
		}
	}
	if (Global_1573684)
	{
		return false;
	}
	if (func_225())
	{
		return false;
	}
	if (func_224())
	{
		return false;
	}
	if (func_223())
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (Global_2467968)
	{
		return false;
	}
	return true;
}

int func_223()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

auto func_224()
{
	return Global_2434762.f_567;
}

auto func_225()
{
	return Global_2434762.f_717;
}

auto func_226()
{
	return Global_2428492.f_2462.f_585;
}

bool func_227(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_206 == 0)
	{
		return false;
	}
	return true;
}

bool func_228(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_229(iParam0))
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

int func_229(auto uParam0)
{
	return func_230(uParam0);
}

int func_230(auto uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

int func_231()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

bool func_232()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_233(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_199(uParam0, iParam2, 0);
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

auto func_234(auto uParam0)
{
	return *uParam0.f_1;
}

void func_235()
{
	Global_2465472.f_1 = 0;
	Global_2465472 = 0;
	Global_2465472.f_2 = 0;
	Global_2465472.f_33 = -1;
	Global_2465472.f_34 = -1;
	StringCopy(&(Global_2465472.f_4), "", 64);
	StringCopy(&(Global_2465472.f_39[0 /*16*/]), "", 64);
	Global_2465472.f_38 = 0;
	Global_2465472.f_56 = 0;
	Global_2465472.f_57 = 0;
	Global_2465472.f_58 = -2;
	Global_2465472.f_3 = 0;
	func_236(&(Global_2465472.f_20));
}

void func_236(auto uParam0)
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

void func_237()
{
	Global_2465472.f_2 = 1;
	Global_2465472.f_38 = 1;
	if (network_is_signed_online())
	{
		if (_0x855BC38818F6F684())
		{
			while (_0xEF0912DDF7C4CB4B())
			{
				wait(0);
			}
			network_session_voice_leave();
			Global_2465472 = 0;
			Global_2465472.f_2 = 0;
		}
		else if (func_202(Global_2465472.f_20))
		{
			if (network_is_friend(&(Global_2465472.f_20)))
			{
				if (!_0x87EB7A3FFCB314DB(&(Global_2465472.f_20)))
				{
					func_235();
				}
			}
		}
		else
		{
			func_235();
		}
	}
	else
	{
		func_235();
	}
	if (Global_2465472.f_37)
	{
		func_30(0);
	}
	Global_2465472.f_37 = 0;
	Global_2465472.f_3 = 0;
}

void func_238(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_247())
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
				func_239(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_239(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_239(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_247())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_60()) || _0x810E8431C0614BF9())
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
			*uParam0 = func_246(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_245(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_240(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_241(iParam0);
	}
}

void func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_247())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_244(iParam0))
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
		func_242(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_242(auto uParam0)
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
	func_243(uParam0.f_8.f_3);
	func_243(uParam0.f_8.f_16);
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

void func_243(auto uParam0)
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

int func_244(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_245(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_246(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_247())
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

bool func_247()
{
	if (is_pc_version())
	{
		return true;
	}
	return false;
}

int func_248(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		iVar0 = _0x76EF28DA05EA395A();
	}
	iVar0 += _0xA40F9C2623F6A8B5(-1);
	return iVar0;
}

void func_249(int iParam0)
{
	if (iParam0)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 20);
	}
	else
	{
		clear_bit(&Global_2284, 20);
	}
}

void func_250(auto uParam0)
{
	*uParam0.f_1 = 0;
}

void func_251(char* sParam0)
{
	Global_1598 = 132;
	StringCopy(&Global_15727, sParam0, 64);
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 10;
		func_97();
	}
	_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(4);
	_push_scaleform_movie_function_parameter_int(false);
	_push_scaleform_movie_function_parameter_int(2);
	_begin_text_component("CELL_CONDFON");
	add_text_component_substring_player_name(&Global_15727);
	_end_text_component();
	func_72("CELL_300");
	func_72("CELL_211");
	func_72("CELL_211");
	_pop_scaleform_movie_function_void();
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 20);
	func_91();
	clear_bit(&Global_2283, 20);
}

void func_252()
{
	network_session_voice_host();
	Global_2465472 = 1;
	Global_2465472.f_2 = 0;
	Global_2465472.f_33 = -1;
	Global_2465472.f_34 = -1;
	Global_2465472.f_38 = 0;
}

void func_253()
{
	stop_sound(iLocal_104);
	release_sound_id(iLocal_104);
	Local_331.f_2978 = 0;
	clear_bit(&Global_2283, 9);
	clear_bit(&Global_2283, 29);
	clear_bit(&Global_2284, 20);
	clear_bit(&Global_2284, false);
	clear_bit(&Global_2284, 18);
	Global_101154.f_32575[12 /*29*/].f_1 = uLocal_303;
	Global_101154.f_32575[2 /*29*/].f_1 = uLocal_304;
	Global_101154.f_32575[0 /*29*/].f_1 = uLocal_305;
	if (Local_331.f_2999 == 1)
	{
		if (network_is_signed_online())
		{
			if (Global_2465472.f_33 == -1)
			{
				func_237();
			}
		}
	}
	terminate_this_thread();
}

void func_254()
{
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (is_bit_set(Global_2283, 11))
			{
				if (!Global_14356)
				{
					task_use_mobile_phone(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_69489)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				clear_bit(&Global_2283, 11);
			}
		}
	}
}

void func_255()
{
	int[] iVar0 = new int[148];
	int iVar149;
	int iVar150;
	int iVar151;
	
	Global_101154.f_32575[74 /*29*/].f_1 = 180;
	Global_101154.f_32575[75 /*29*/].f_1 = 190;
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	wait(0);
	iLocal_94 = 0;
	iLocal_133 = 0;
	iLocal_116 = 0;
	func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(false), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iVar149 = false;
	while (iVar149 < 147)
	{
		iVar150 = 0;
		iVar151 = 147;
		Global_101154.f_32575[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (is_bit_set(Global_2284, false))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_101154.f_32575[12 /*29*/].f_1 = 3;
					Global_101154.f_32575[2 /*29*/].f_1 = 1;
					Global_101154.f_32575[0 /*29*/].f_1 = 2;
					iLocal_91 = true;
				}
				else
				{
					iLocal_91 = false;
				}
			}
			else if (Global_101154.f_32575[iVar150 /*29*/].f_12[Global_14413] == 1)
			{
				iLocal_91 = true;
			}
			else
			{
				iLocal_91 = false;
			}
			if (iLocal_91)
			{
				if (iVar150 != Global_14413)
				{
					if (iVar0[iVar150] == 0)
					{
						if (Global_101154.f_32575[iVar150 /*29*/].f_19[Global_14413] == 1 || func_79(iVar150, Global_14413))
						{
							fLocal_92 = to_float(Global_101154.f_32575[iVar150 /*29*/].f_1) / 100f;
						}
						else
						{
							fLocal_92 = to_float(Global_101154.f_32575[iVar150 /*29*/].f_1);
						}
						if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							fLocal_93 = to_float(Global_101154.f_32575[iVar151 /*29*/].f_1) / 100f;
						}
						else
						{
							fLocal_93 = to_float(Global_101154.f_32575[iVar151 /*29*/].f_1);
						}
						if (fLocal_92 < fLocal_93)
						{
							iVar151 = iVar150;
							if (is_bit_set(Global_2284, false))
							{
								if (iVar151 == 2)
								{
									func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_101154.f_32575[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar150++;
		}
		Global_14419[iVar149] = iVar151;
		iVar0[iVar151] = 1;
		if (!is_bit_set(Global_2284, false))
		{
			if (Global_101154.f_32575[iVar151 /*29*/].f_12[Global_14413] == 1)
			{
				if (iVar150 != Global_14413)
				{
					if (Global_101154.f_32575[iVar151 /*29*/].f_24[Global_14413] == 0)
					{
						if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 1f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 0f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
					{
						func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 1f, -1f, -1f, &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 0f, -1f, -1f, &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_101154.f_32575[iVar149 /*29*/].f_12[Global_14413] == 1)
		{
			if (iVar149 != Global_14413)
			{
				iLocal_94++;
			}
		}
		iVar149++;
	}
	if (!is_bit_set(Global_2284, false))
	{
		if (network_is_signed_online())
		{
			if (Global_14356 == 0)
			{
				func_257();
			}
		}
	}
	func_256();
}

void func_256()
{
	if (!Global_14413.f_1 == 10 && !Global_14413.f_1 == 9)
	{
		if (is_bit_set(Global_2283, 9))
		{
			wait(750);
		}
		if (Global_14413.f_1 > 6)
		{
			func_142(Global_14394, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (is_bit_set(Global_2284, false))
			{
				func_140(Global_14394, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_140(Global_14394, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2286 = 99;
			if (is_bit_set(Global_2283, 9))
			{
				if (Global_14401)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_2283, 17);
			}
			else if (is_bit_set(Global_2284, false))
			{
				if (Global_14401)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_139(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				if (iLocal_94 > 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14356 == 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_94 > 0)
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_139(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_139(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
				func_139(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	Global_101154.f_32575[12 /*29*/].f_1 = uLocal_303;
	Global_101154.f_32575[2 /*29*/].f_1 = uLocal_304;
	Global_101154.f_32575[0 /*29*/].f_1 = uLocal_305;
}

void func_257()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	Global_101154.f_32575[74 /*29*/].f_1 = 180;
	Global_101154.f_32575[75 /*29*/].f_1 = 190;
	iVar0 = false;
	iVar1 = 0;
	iVar2 = false;
	iLocal_95 = iLocal_94;
	iLocal_96 = iLocal_95;
	func_264(&Local_331);
	iVar16 = 0;
	if (Global_69489)
	{
		if (func_260() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = false;
	while (iVar2 < 32)
	{
		iVar0 = int_to_playerindex(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == player_id())
				{
					Local_331[iVar1] = iVar0;
					func_259(get_player_name(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_331.f_33 = iVar1;
	iVar2 = false;
	iVar1 = 0;
	if (func_162(player_id()))
	{
		iVar17 = network_get_friend_count();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = false;
		while (iVar2 <= iVar17 - 1)
		{
			if (network_is_friend_online(network_get_friend_name(iVar2)))
			{
				if (network_is_friend_in_same_title(network_get_friend_name(iVar2)))
				{
					Var3 = {func_258(iVar2)};
					if (!network_is_gamer_in_my_session(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_331.f_34[iVar1 /*29*/] = {Var3};
								if (is_durango_version())
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), _network_get_friend_name_from_index(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), network_get_friend_name(iVar2), 64);
								}
								func_259(&(Local_331.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_331.f_2935 = Local_331.f_33 + iVar1;
}

struct<13> func_258(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_friend(iParam0, &Var0, 13);
	return Var0;
}

void func_259(char* sParam0)
{
	_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_float(to_float(2));
	_push_scaleform_movie_function_parameter_float(to_float(iLocal_95));
	_push_scaleform_movie_function_parameter_float(0f);
	_begin_text_component("STRING");
	add_text_component_substring_player_name(sParam0);
	_end_text_component();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	_pop_scaleform_movie_function_void();
	iLocal_95++;
	iLocal_94++;
}

int func_260()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_263())
	{
		return 1;
	}
	if (func_262())
	{
		return 1;
	}
	return func_261(120, -1);
}

int func_261(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_59(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

auto func_262()
{
	return Global_1315901;
}

auto func_263()
{
	return Global_1315903;
}

void func_264(auto uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		*uParam0[iVar0] = func_158();
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		*(uParam0.f_34[iVar0 /*29*/]) = {Var1};
		iVar0++;
	}
	*uParam0.f_2936 = 0;
	*uParam0.f_33 = 0;
	*uParam0.f_2935 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		*uParam0.f_2937[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_2946 = 0;
	StringCopy(uParam0.f_2947, "", 64);
	*uParam0.f_2963 = {Var1};
	*uParam0.f_2976 = 0;
	*uParam0.f_2977 = 0;
	func_250(uParam0.f_2979);
	*uParam0.f_2999 = 0;
	StringCopy(uParam0.f_2983, "", 64);
}

void func_265()
{
	int[] iVar0 = new int[148];
	int iVar149;
	int iVar150;
	int iVar151;
	
	Global_101154.f_32575[74 /*29*/].f_1 = 180;
	Global_101154.f_32575[75 /*29*/].f_1 = 190;
	func_142(Global_14394, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	wait(0);
	func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(false), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_94 = 0;
	if (!is_bit_set(Global_2284, false))
	{
		if (network_is_signed_online())
		{
			if (Global_14356 == 0)
			{
				func_266();
			}
		}
	}
	iLocal_97 = iLocal_94;
	iLocal_133 = 0;
	iLocal_116 = 0;
	iVar149 = iLocal_94;
	while (iVar149 < 147)
	{
		iVar150 = 0;
		iVar151 = 147;
		Global_101154.f_32575[iVar151 /*29*/].f_1 = 5000;
		func_16();
		while (iVar150 < 147)
		{
			if (is_bit_set(Global_2284, false))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_101154.f_32575[12 /*29*/].f_1 = 3;
					Global_101154.f_32575[2 /*29*/].f_1 = 1;
					Global_101154.f_32575[0 /*29*/].f_1 = 2;
					iLocal_91 = true;
				}
				else
				{
					iLocal_91 = false;
				}
			}
			else if (Global_101154.f_32575[iVar150 /*29*/].f_12[Global_14413] == 1)
			{
				iLocal_91 = true;
			}
			else
			{
				iLocal_91 = false;
			}
			if (iLocal_91)
			{
				if (iVar150 != Global_14413)
				{
					if (iVar0[iVar150] == 0)
					{
						if (Global_101154.f_32575[iVar150 /*29*/].f_19[Global_14413] == 1 || func_79(iVar150, Global_14413))
						{
							fLocal_92 = to_float(Global_101154.f_32575[iVar150 /*29*/].f_1) / 100f;
						}
						else
						{
							fLocal_92 = to_float(Global_101154.f_32575[iVar150 /*29*/].f_1);
						}
						if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							fLocal_93 = to_float(Global_101154.f_32575[iVar151 /*29*/].f_1) / 100f;
						}
						else
						{
							fLocal_93 = to_float(Global_101154.f_32575[iVar151 /*29*/].f_1);
						}
						if (fLocal_92 < fLocal_93)
						{
							iVar151 = iVar150;
							if (is_bit_set(Global_2284, false))
							{
								if (iVar151 == 2)
								{
									func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_101154.f_32575[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar150++;
		}
		Global_14419[iVar149] = iVar151;
		iVar0[iVar151] = 1;
		if (!is_bit_set(Global_2284, false))
		{
			if (Global_101154.f_32575[iVar151 /*29*/].f_12[Global_14413] == 1)
			{
				if (iVar150 != Global_14413)
				{
					if (Global_101154.f_32575[iVar151 /*29*/].f_24[Global_14413] == 0)
					{
						if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
						{
							func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 1f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 0f, -1f, -1f, &(Global_117[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_101154.f_32575[iVar151 /*29*/].f_19[Global_14413] == 1 || func_79(iVar151, Global_14413))
					{
						func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 1f, -1f, -1f, &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_139(Global_14394, "SET_DATA_SLOT", to_float(2), to_float(iVar149), 0f, -1f, -1f, &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_3), &(Global_101154.f_32575[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_101154.f_32575[iVar149 /*29*/].f_12[Global_14413] == 1)
		{
			if (iVar149 != Global_14413)
			{
				iLocal_94++;
			}
		}
		iVar149++;
	}
	func_256();
}

void func_266()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	Global_101154.f_32575[74 /*29*/].f_1 = 180;
	Global_101154.f_32575[75 /*29*/].f_1 = 190;
	iVar0 = false;
	iVar1 = 0;
	iVar2 = false;
	iLocal_95 = iLocal_94;
	iLocal_96 = iLocal_95;
	func_264(&Local_331);
	iVar16 = 0;
	if (Global_69489)
	{
		if (func_260() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = false;
	while (iVar2 < 32)
	{
		iVar0 = int_to_playerindex(iVar2);
		if (func_160(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == player_id())
				{
					Local_331[iVar1] = iVar0;
					func_267(get_player_name(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_331.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = false;
	if (func_162(player_id()))
	{
		iVar17 = network_get_friend_count();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = false;
		while (iVar2 <= iVar17 - 1)
		{
			if (network_is_friend_online(network_get_friend_name(iVar2)))
			{
				if (network_is_friend_in_same_title(network_get_friend_name(iVar2)))
				{
					Var3 = {func_258(iVar2)};
					if (!network_is_gamer_in_my_session(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_331.f_34[iVar1 /*29*/] = {Var3};
								if (is_durango_version())
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), _network_get_friend_name_from_index(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_331.f_34[iVar1 /*29*/].f_13), network_get_friend_name(iVar2), 64);
								}
								func_267(&(Local_331.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_331.f_2935 = Local_331.f_33 + iVar1;
}

void func_267(char* sParam0)
{
	_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_float(to_float(2));
	_push_scaleform_movie_function_parameter_float(to_float(iLocal_95));
	_push_scaleform_movie_function_parameter_float(0f);
	_begin_text_component("STRING");
	add_text_component_substring_player_name(sParam0);
	_end_text_component();
	func_72("CELL_MP_999");
	func_72("CELL_MP_999");
	_pop_scaleform_movie_function_void();
	iLocal_95++;
	iLocal_94++;
}

