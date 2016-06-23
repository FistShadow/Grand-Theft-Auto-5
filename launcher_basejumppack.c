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
	Vector3 vLocal_45 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	int iLocal_52 = 0;
	char[64] cLocal_53 = 0;
	struct<16> Local_69 = 0;
	int iLocal_85 = 0;
	auto uLocal_86 = 0;
	Vector3 vLocal_87 = 0;
	Vector3 vLocal_90 = 0;
	float fLocal_93 = 0;
	auto uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = 0;
	float fLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	auto uLocal_108 = 0;
	auto uLocal_109 = 0;
	float fLocal_110 = 0;
	Vector3 vLocal_111 = 0;
	Vector3 vLocal_114 = 0;
	Vector3 fLocal_117 = 0;
	auto uLocal_118 = 1;
	auto uLocal_119 = 0;
	auto uLocal_120 = 1;
	auto uLocal_121 = 0;
	int iLocal_122 = 0;
	Vector3 vLocal_123 = 0;
	auto uLocal_126 = 0;
	auto uLocal_127 = 16;
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
	auto uLocal_286 = 0;
	auto uLocal_287 = 0;
	auto uLocal_288 = 0;
	auto uLocal_289 = 0;
	auto uLocal_290 = 0;
	auto uLocal_291 = 0;
	auto uLocal_292 = 0;
	int iLocal_293 = 0;
	auto uLocal_294 = 0;
	auto uLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	auto uLocal_299 = 0;
	auto uLocal_300 = 0;
	auto uLocal_301 = 0;
	auto uLocal_302 = 0;
	struct<2> Local_303 = 0;
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
	auto uLocal_320 = 5;
	auto uLocal_321 = 0;
	auto uLocal_322 = 0;
	auto uLocal_323 = 0;
	auto uLocal_324 = 0;
	auto uLocal_325 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
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
	vLocal_45 = {500f, 500f, 500f};
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	vLocal_90 = {Local_303.f_1[0 /*3*/]};
	vLocal_90 = {vLocal_90};
	uLocal_86 = uLocal_86;
	Local_69 = {Local_69};
	iVar0 = false;
	if (has_force_cleanup_occurred(114))
	{
		func_138(1);
	}
	iLocal_85 = get_player_ped(player_id());
	iLocal_95 = 0;
	func_136(&Global_99807, 0);
	func_130();
	_0x6F2135B6129620C1(1);
	if (func_129(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_31486)
	{
		wait(0);
	}
	if (!func_129(uLocal_94, 8))
	{
		if (!func_127(iLocal_100))
		{
			if (func_126(0, iLocal_99))
			{
				func_138(0);
			}
			else
			{
				func_138(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_126(0, iLocal_99))
		{
			func_138(1);
		}
	}
	if (func_129(uLocal_94, 8388608))
	{
		func_138(1);
	}
	if (func_129(uLocal_94, 524288) && (func_125() && !func_124()))
	{
		func_138(1);
	}
	if (_get_number_of_instances_of_streamed_script(_get_this_script_hash()) > 1 && !func_129(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_123(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_122(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_138(1);
		}
		iLocal_85 = get_player_ped(player_id());
		if (func_129(uLocal_94, 1048576))
		{
			if (is_entity_dead(iLocal_85, 0))
			{
				func_138(1);
			}
		}
		if (does_entity_exist(iLocal_85) && !is_entity_dead(iLocal_85, 0))
		{
			vLocal_87 = {get_entity_coords(iLocal_85, 1)};
			fLocal_93 = vdist2(vLocal_87, Local_303.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = {vLocal_87};
			vLocal_114 = {Local_303.f_1[0 /*3*/]};
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = vdist2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_127(iLocal_100) || (func_129(uLocal_94, 16) && !func_129(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_118();
						func_122(1);
					}
					else
					{
						if (fLocal_110 > fLocal_102 * fLocal_102)
						{
							if (iLocal_105 != 263)
							{
								func_123(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_122(10);
						}
						if (vLocal_87.z - Local_303.f_1[0 /*3*/].f_2 > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_116())
					{
						iLocal_103 = iLocal_103;
						func_122(3);
					}
					else
					{
						func_118();
					}
					break;
				
				case 3:
					if (network_is_in_session())
					{
						func_138(1);
						return;
					}
					if (!func_127(iLocal_100))
					{
						if (!func_129(uLocal_94, 8))
						{
							iVar1 = true;
							if (are_strings_equal(&(Global_91278.f_3), &Local_69))
							{
								Local_69 = {cLocal_53};
								iVar1 = false;
							}
							if (iVar1)
							{
								func_138(0);
								break;
							}
						}
					}
					if (!func_129(uLocal_94, 4))
					{
						func_113();
						func_112(&uLocal_94, 4);
					}
					if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91312)
					{
						if (iLocal_105 != 263)
						{
							if (func_111(6) && !func_110(iLocal_105))
							{
							}
							else
							{
								func_123(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_122(10);
					}
					else
					{
						Local_69 = {cLocal_53};
						iVar2 = !func_129(uLocal_94, 64);
						func_136(&uLocal_94, 128);
						if (!func_109(3) && !Global_91312)
						{
							if (func_129(uLocal_94, 2097152))
							{
								if ((!func_129(uLocal_94, 1) || !does_entity_exist(func_108())) && !Global_91312)
								{
									func_122(10);
									break;
								}
							}
						}
						if (func_129(uLocal_94, 524288) && (func_125() && !func_124()))
						{
							func_138(1);
						}
						if (func_107())
						{
							func_138(1);
						}
						if ((!func_99(6) || Global_100201) || func_98())
						{
							iVar2 = false;
						}
						if (func_129(uLocal_94, 1))
						{
							if (!func_97())
							{
								func_95(&uLocal_94, 128);
								iVar2 = false;
							}
						}
						if (func_94(1))
						{
							iVar2 = false;
						}
						if (Global_69489)
						{
							iVar2 = false;
						}
						if (func_93())
						{
							iVar2 = false;
						}
						if (is_player_switch_in_progress())
						{
							iVar2 = false;
						}
						if (func_92() || func_91(8, -1))
						{
							iVar2 = false;
						}
						if (!can_player_start_mission(player_id()))
						{
							iVar2 = false;
						}
						if (!is_player_script_control_on(player_id()))
						{
							iVar2 = false;
						}
						if (func_90(0) || func_89())
						{
							iVar2 = false;
						}
						if (iVar2)
						{
							if (!is_entity_at_coord(iLocal_85, Local_303.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, false, true, iLocal_103))
							{
								iVar2 = false;
							}
							if (!is_player_control_on(player_id()))
							{
								iVar2 = false;
							}
							if (iVar2)
							{
								set_input_exclusive(0, 51);
								if (func_88(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_87(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_95(&uLocal_94, 2048);
									}
									else if (!func_129(uLocal_94, 2048) || !is_help_message_being_displayed())
									{
										func_86(&iLocal_96);
										func_136(&uLocal_94, 2048);
									}
									if (func_84(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_86(&iLocal_96);
										func_136(&uLocal_94, 2048);
										request_script(&Local_69);
										set_player_control(player_id(), false, 56);
										func_122(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_86(&iLocal_96);
									func_136(&uLocal_94, 2048);
									request_script(&Local_69);
									set_player_control(player_id(), false, 56);
									func_122(5);
								}
							}
						}
						if (!iVar2)
						{
							if (iLocal_96 != -1)
							{
								func_86(&iLocal_96);
								func_136(&uLocal_94, 2048);
								clear_help(0);
							}
						}
					}
					func_81();
					break;
				
				case 5:
					set_input_exclusive(0, 51);
					if (has_script_loaded(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_86(&iLocal_96);
						}
						iVar3 = 2;
						iVar0 = false;
						if (func_129(uLocal_94, 1))
						{
							if (func_111(6) || func_111(7))
							{
								iVar3 = 1;
								iVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_78(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (is_player_playing(player_id()))
							{
								clear_player_wanted_level(player_id());
							}
							func_77();
							if (Global_36839)
							{
								func_68(player_ped_id());
							}
							set_player_control(player_id(), true, 56);
							iLocal_52 = func_24();
							func_95(&uLocal_94, 2);
							func_122(6);
							func_20(&iLocal_107);
							if (iLocal_99 != -1)
							{
								func_19(iLocal_99);
								func_16(func_18(iLocal_99), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_15();
						}
						else if (iVar3 == 0)
						{
							func_122(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_129(Global_99807, 262144))
					{
						func_136(&Global_99807, 262144);
						func_14();
					}
					if (func_129(uLocal_94, 2097152))
					{
						if (!func_109(3) && !is_thread_active(iLocal_52))
						{
							func_122(10);
						}
					}
					if (!is_thread_active(iLocal_52))
					{
						playstats_oddjob_done(round(func_10(&iLocal_107) * 1000f), iLocal_99, 0);
						func_9(&iLocal_107);
						func_136(&uLocal_94, 256);
						func_8();
						if (iVar0)
						{
							func_136(&uLocal_94, 2);
						}
						else if (func_129(uLocal_94, 2))
						{
							if (func_129(Global_99807, 0))
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_136(&uLocal_94, 2);
							}
							else
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_136(&uLocal_94, 2);
							}
						}
						func_122(0);
						if (iLocal_99 != -1)
						{
							if (func_129(Global_99807, 0))
							{
								playstats_mission_checkpoint(func_18(iLocal_99), 0, Global_91315, 0);
								func_6(func_18(iLocal_99), 0, Global_91315, 1, 0);
							}
							else
							{
								playstats_mission_checkpoint(func_18(iLocal_99), 0, Global_91315, 0);
								func_6(func_18(iLocal_99), 0, Global_91315, 0, 0);
							}
						}
						func_5();
						func_136(&Global_99807, 0);
						if (func_129(uLocal_94, 16777216))
						{
							func_138(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_101154.f_7775)
							{
								if (!func_126(0, iLocal_99))
								{
									func_138(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_122(0);
					break;
				
				case 10:
					func_138(1);
					break;
				
				case 9:
					if (fLocal_110 > fLocal_102 * fLocal_102)
					{
						if (iLocal_105 != 263)
						{
							func_123(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_122(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_123(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_86(&iLocal_96);
					}
					if (!is_string_null_or_empty(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							clear_help(1);
						}
					}
					func_122(4);
					break;
				
				case 4:
					if (iLocal_104 % 150 == 0)
					{
						if (!is_ped_injured(player_ped_id()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_127(iLocal_100) && func_126(0, iLocal_99))
									{
										func_130();
										if (iLocal_105 != 263)
										{
											func_123(iLocal_105, 1, 0);
										}
										func_122(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > fLocal_102 * fLocal_102)
								{
									if (iLocal_105 != 263)
									{
										func_123(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_122(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > 80f + 5f * 80f + 5f)
								{
									func_130();
									if (iLocal_105 != 263)
									{
										func_123(iLocal_105, 1, 0);
									}
									func_122(0);
								}
							}
						}
						else
						{
							func_123(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		wait(0);
	}
}

int func_1(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_2()
{
	func_3(&uLocal_118);
	func_3(&uLocal_120);
	remove_anim_dict("pickup_object");
	remove_anim_dict("oddjobs@basejump@ig_15");
}

void func_3(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] != 0)
		{
			set_model_as_no_longer_needed(*uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (is_string_null_or_empty(&Global_88681))
	{
		return;
	}
	if (compare_strings(sParam0, &Global_88681, 0, -1) != 0)
	{
		return;
	}
	playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_85788);
	StringCopy(&Global_88681, "", 64);
}

void func_7(int iParam0)
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

void func_8()
{
	char[24] cVar0;
	
	if (is_xbox360_version() || is_durango_version())
	{
		network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (is_ps3_version() || is_orbis_version())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

void func_9(int iParam0)
{
	*iParam0.f_1 = 0f;
	*iParam0.f_2 = 0f;
	*iParam0 = 0;
}

float func_10(int iParam0)
{
	if (func_13(iParam0))
	{
		if (func_12(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_11(is_bit_set(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_11(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(get_game_timer()) / 1000f;
	}
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time();
		return to_float(iVar0) / 1000f;
	}
	return to_float(get_game_timer()) / 1000f;
}

int func_12(auto uParam0)
{
	return is_bit_set(*uParam0, 2);
}

int func_13(auto uParam0)
{
	return is_bit_set(*uParam0, true);
}

bool func_14()
{
	return true;
}

void func_15()
{
}

void func_16(char* sParam0, int iParam1, int iParam2)
{
	if (!is_string_null_or_empty(&Global_88681))
	{
		playstats_mission_over(&Global_88681, 0, 0, 0, 1, 0);
		StringCopy(&Global_88681, "", 64);
	}
	StringCopy(&Global_88681, sParam0, 64);
	playstats_mission_started(sParam0, iParam1, iParam2, func_17(0));
}

int func_17(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

char* func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_19(int iParam0)
{
	auto uVar0;
	char[24] cVar1;
	
	if (is_xbox360_version() || is_durango_version())
	{
		uVar0 = iParam0;
		network_set_rich_presence(8, &uVar0, 1, 1);
	}
	else if (is_ps3_version() || is_orbis_version())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

void func_20(int iParam0)
{
	if (!func_13(iParam0))
	{
		func_23(iParam0);
	}
	else
	{
		func_21(iParam0);
	}
}

void func_21(int iParam0)
{
	func_22(iParam0, 0f);
}

void func_22(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_11(is_bit_set(*iParam0, 4)) - fParam1;
	set_bit(iParam0, true);
	clear_bit(iParam0, 2);
	*iParam0.f_2 = 0f;
}

void func_23(int iParam0)
{
	if (!func_13(iParam0))
	{
		func_21(iParam0);
	}
}

int func_24()
{
	int iVar0;
	
	Global_101154.f_17657 = iLocal_122;
	switch (iLocal_122)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		
		default:
			break;
	}
	if (!is_entity_dead(player_ped_id(), 0))
	{
		set_ped_reset_flag(player_ped_id(), 177, true);
	}
	iVar0 = start_new_script_with_args(&cLocal_53, &vLocal_123, 170, iLocal_97);
	set_script_as_no_longer_needed(&cLocal_53);
	return iVar0;
}

void func_25(int iParam0)
{
	int iVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	float fVar15;
	int iVar16;
	
	vVar12 = {func_67(iLocal_122)};
	vVar12 = {func_66(cos(vVar12.z), sin(vVar12.z), tan(vVar12.x))};
	new_load_scene_start(func_65(iLocal_122), vVar12, 5000f, 0);
	set_player_control(player_id(), false, 256);
	display_hud(false);
	display_radar(false);
	func_63(1);
	if (!is_entity_dead(player_ped_id(), 0))
	{
		set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
		set_ped_reset_flag(player_ped_id(), 177, true);
		if (get_entity_speed(player_ped_id()) > 0.3f)
		{
			task_stand_still(player_ped_id(), -1);
			while (!is_entity_dead(player_ped_id(), 0) && get_entity_speed(player_ped_id()) > 0.3f)
			{
				wait(0);
				if (!is_entity_dead(player_ped_id(), 0))
				{
					set_ped_reset_flag(player_ped_id(), 177, true);
				}
			}
		}
		if (does_entity_exist(iLocal_297))
		{
			vVar6 = {get_entity_coords(player_ped_id(), 1) - get_entity_coords(iLocal_297, 0)};
			vVar6.z = 0f;
			fVar15 = vmag(vVar6);
			open_sequence_task(&iVar3);
			if (fVar15 > 0.8f)
			{
				vVar6 = {vVar6 * Vector(0.78f / fVar15, 0.78f / fVar15, 0.78f / fVar15)};
				vVar9 = {get_entity_coords(iLocal_297, 0) + vVar6};
				if (iLocal_122 == 12)
				{
					task_follow_nav_mesh_to_coord(false, vVar9, 1f, 20000, 0.25f, 0, func_62(vVar9, get_entity_coords(iLocal_297, 0)));
				}
				else
				{
					task_go_straight_to_coord(false, vVar9, 1f, -1, func_62(vVar9, get_entity_coords(iLocal_297, 0)), 0.5f);
				}
			}
			else if (fVar15 > 0.15f)
			{
				task_achieve_heading(false, func_62(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_297, 0)), 0);
			}
			task_play_anim(false, "pickup_object", "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
			close_sequence_task(iVar3);
			if (!is_entity_dead(player_ped_id(), 0))
			{
				clear_ped_tasks(player_ped_id());
				set_ped_reset_flag(player_ped_id(), 177, true);
				task_perform_sequence(player_ped_id(), iVar3);
			}
			clear_sequence_task(&iVar3);
			func_63(1);
		}
	}
	func_23(&iLocal_293);
	while ((func_10(&iLocal_293) < 6f && !is_entity_dead(player_ped_id(), 0)) && !is_entity_playing_anim(player_ped_id(), "pickup_object", "pickup_low", 3))
	{
		set_ped_reset_flag(player_ped_id(), 177, true);
		wait(0);
	}
	if (!is_entity_dead(player_ped_id(), 0) && is_entity_playing_anim(player_ped_id(), "pickup_object", "pickup_low", 3))
	{
		set_entity_anim_speed(player_ped_id(), "pickup_object", "pickup_low", 0.8f);
		iVar16 = true;
	}
	while ((func_10(&iLocal_293) < 6f && !is_entity_dead(player_ped_id(), 0)) && get_entity_anim_current_time(player_ped_id(), "pickup_object", "pickup_low") < 0.22f)
	{
		set_ped_reset_flag(player_ped_id(), 177, true);
		if (!iVar16 && is_entity_playing_anim(player_ped_id(), "pickup_object", "pickup_low", 3))
		{
			set_entity_anim_speed(player_ped_id(), "pickup_object", "pickup_low", 0.8f);
			iVar16 = true;
		}
		wait(0);
	}
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if (!iVar16 && is_entity_playing_anim(player_ped_id(), "pickup_object", "pickup_low", 3))
		{
			set_entity_anim_speed(player_ped_id(), "pickup_object", "pickup_low", 0.7f);
			iVar16 = true;
		}
		set_ped_reset_flag(player_ped_id(), 177, true);
	}
	func_9(&iLocal_293);
	func_40();
	if (!is_ped_injured(player_ped_id()))
	{
		if (func_35() == 0)
		{
			set_ped_component_variation(player_ped_id(), 9, 5, false, 0);
		}
		else if (func_35() == 1)
		{
			set_ped_component_variation(player_ped_id(), 8, 1, false, 0);
		}
		else if (func_35() == 2)
		{
			set_ped_component_variation(player_ped_id(), 8, 3, false, 0);
		}
	}
	if (iParam0)
	{
		if (!func_33(func_34(iLocal_122)) && !is_entity_dead(player_ped_id(), 0))
		{
			clear_ped_tasks(player_ped_id());
			task_follow_nav_mesh_to_coord(player_ped_id(), func_34(iLocal_122), 1f, -1, 0.25f, 0, 1193033728);
		}
		if (does_entity_exist(iLocal_297))
		{
			delete_object(&iLocal_297);
		}
		iVar4 = create_camera_with_params(26379945, func_32(iLocal_122), func_31(iLocal_122), func_30(iLocal_122), 1, 2);
		iVar5 = create_camera_with_params(26379945, func_29(iLocal_122), func_28(iLocal_122), func_27(iLocal_122), 0, 2);
		render_script_cams(true, false, 3000, 1, 0, 0);
		_0xF4C8CF9E353AFECA("HAND_SHAKE", 0.2f);
		func_23(&iVar0);
		while (func_10(&iVar0) < 1.5f)
		{
			wait(0);
		}
		set_cam_active_with_interp(iVar5, iVar4, func_26(iLocal_122), 1, 1);
		func_21(&iVar0);
		while (func_10(&iVar0) < to_float(func_26(iLocal_122)) / 1000f + 0.3f)
		{
			if (!is_entity_dead(player_ped_id(), 0))
			{
				set_ped_reset_flag(player_ped_id(), 177, true);
			}
			wait(0);
		}
	}
	else
	{
		vLocal_123.z = iLocal_297;
	}
	if (!is_entity_dead(player_ped_id(), 0))
	{
		set_ped_reset_flag(player_ped_id(), 177, true);
	}
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_27(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_33(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

auto func_35()
{
	func_36();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_36()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_39(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_38(player_ped_id());
			if (func_37(iVar0) && (!func_111(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_37(Global_101154.f_1826.f_539.f_3549))
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

int func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()
{
	Vector3 vVar0;
	auto uVar3;
	Vector3 vVar4;
	int iVar7;
	int iVar8;
	
	if (is_ped_injured(player_ped_id()))
	{
		return;
	}
	set_player_control(player_id(), false, 0);
	if (does_entity_exist(iLocal_297))
	{
		delete_object(&iLocal_297);
	}
	func_48(0, 0, 1);
	iLocal_297 = create_object_no_offset(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
	set_entity_rotation(iLocal_297, func_46(iLocal_122), 2, 1);
	func_41(&vVar0, &uVar3);
	vVar4 = {0f, 0f, uVar3};
	iVar7 = create_synchronized_scene(vVar0, vVar4, 2);
	play_synchronized_entity_anim(iLocal_297, iVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1000f);
	if (!is_entity_dead(player_ped_id(), 0))
	{
		clear_ped_tasks(player_ped_id());
		task_synchronized_scene(player_ped_id(), iVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1000f, 0);
	}
	play_sound_frontend(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	iVar8 = create_cam("DEFAULT_ANIMATED_CAMERA", false);
	play_synchronized_cam_anim(iVar8, iVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	set_cam_active(iVar8, true);
	render_script_cams(true, false, 3000, 1, 0, 0);
	while (get_synchronized_scene_phase(iVar7) < 0.6f)
	{
		wait(0);
	}
	set_player_control(player_id(), true, 0);
}

void func_41(auto uParam0, auto uParam1)
{
	*uParam0 = {func_45(iLocal_122)};
	switch (iLocal_122)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_44(func_62(get_entity_coords(player_ped_id(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_44(func_62(get_entity_coords(player_ped_id(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_44(func_62(get_entity_coords(player_ped_id(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_44(func_62(get_entity_coords(player_ped_id(), 1), *uParam0), -180f, 180f);
			break;
	}
}

float func_42(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_43(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_44(float fParam0, float fParam1, float fParam2)
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

Vector3 func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_46(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	set_player_control(get_player_index(), false, iParam0);
	if (!is_ped_injured(player_ped_id()))
	{
		stop_fire_in_range(get_entity_coords(player_ped_id(), 1), 15f);
	}
	_0xC61B86C9F61EB404(iParam1);
	func_60(0);
	func_50(1, 1, iParam2, 0);
	display_radar(false);
	display_hud(false);
	func_49(23, 1);
}

void func_49(int iParam0, int iParam1)
{
	if (iParam1)
	{
		set_bit(&Global_25364, iParam0);
	}
	else
	{
		clear_bit(&Global_25364, iParam0);
	}
}

void func_50(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_59(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_58())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_57(1, iParam3, uParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_59(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_57(0, iParam3, uParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_55(player_id())) && !func_52(player_id(), 0)) && !func_51())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_55(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_51()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_53(-1, 0) == 8;
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

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

auto func_54()
{
	return Global_1312747;
}

bool func_55(int iParam0)
{
	if (func_52(iParam0, 0))
	{
		return true;
	}
	if (func_56())
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

int func_56()
{
	return is_bit_set(Global_2359301, 3);
}

int func_57(int iParam0, int iParam1, auto uParam2, int iParam3)
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

bool func_58()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_59(int iParam0)
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

void func_60(int iParam0)
{
	if (Global_14571)
	{
		func_61(0, 0);
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
	if (!func_58())
	{
		Global_14413.f_1 = 3;
	}
}

void func_61(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_90(0))
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

float func_62(struct<2> Param0, Vector3 fParam1, struct<2> Param2, Vector3 fParam3)
{
	return get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

void func_63(int iParam0)
{
	if (iParam0)
	{
		func_64();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			set_bit(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_90(0))
		{
			func_60(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_64()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

Vector3 func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_66(Vector3 vParam0)
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

Vector3 func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_68(int iParam0)
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
	iVar0 = func_76(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		func_71(1, iVar1, 1);
		return;
	}
	iVar2 = func_70(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_69(iVar2);
}

void func_69(int iParam0)
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

int func_70(int iParam0)
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

void func_71(int iParam0, int iParam1, int iParam2)
{
	func_72(iParam0, iParam1, iParam2, 0, 0);
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_74(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_73();
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

int func_73()
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

bool func_74(int iParam0, int iParam1, int iParam2)
{
	if (func_75(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_75(int iParam0, int iParam1, int iParam2)
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

int func_76(int iParam0)
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

void func_77()
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

int func_78(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_80(0))
		{
			return 0;
		}
		Global_35675++;
		*iParam0 = Global_35675;
		set_player_invincible(get_player_index(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *iParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_127(iParam2))
		{
			return 0;
		}
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*iParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
		if (iParam4 != 0)
		{
			func_79(iParam0, iParam4);
		}
	}
	return 2;
}

void func_79(auto uParam0, int iParam1)
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

bool func_80(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_127(iParam0))
	{
		return false;
	}
	return true;
}

void func_81()
{
	switch (iLocal_122)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_82();
			break;
		
		default:
			break;
	}
}

void func_82()
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = get_players_last_vehicle();
	if (does_entity_exist(iVar0))
	{
		vLocal_123.y = iVar0;
	}
	if (does_entity_exist(iLocal_297))
	{
		vVar1 = {get_entity_coords(iLocal_297, 1)};
		if (vdist2(vVar1, vLocal_90) > 25f)
		{
			func_83(0);
		}
	}
}

void func_83(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

bool func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_85(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!is_player_playing(get_player_index()))
	{
		return false;
	}
	if (func_90(0))
	{
		return false;
	}
	if (is_cutscene_playing())
	{
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/] == 1 && Global_36411[iVar0 /*32*/].f_4 == 1)
		{
			if (iParam1)
			{
				if (Global_36411[iVar0 /*32*/].f_29)
				{
					return false;
				}
			}
			Global_36411[iVar0 /*32*/].f_5 = 1;
			Global_36411[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			if (Global_36411[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36411[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return false;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_86(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_85(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_87(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_instances_of_streamed_script(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*iParam0 == -1)
		{
			func_86(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/] = 1;
			Global_36411[iVar0 /*32*/].f_1 = Global_36612;
			Global_36612++;
			Global_36411[iVar0 /*32*/].f_4 = 0;
			Global_36411[iVar0 /*32*/].f_29 = 0;
			Global_36411[iVar0 /*32*/].f_5 = 0;
			Global_36411[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36411[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36411[iVar0 /*32*/].f_6 = iParam3;
			Global_36411[iVar0 /*32*/].f_31 = get_id_of_this_thread();
			Global_36411[iVar0 /*32*/].f_7 = 0;
			Global_36411[iVar0 /*32*/].f_3 = iParam5;
			if (!is_string_null_or_empty(sParam4))
			{
				Global_36411[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36411[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36411[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36411[iVar0 /*32*/].f_12 = 0;
				Global_36411[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36411[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_88(auto uParam0)
{
	return true;
}

auto func_89()
{
	return Global_68058;
}

bool func_90(int iParam0)
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

int func_91(int iParam0, int iParam1)
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

int func_92()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

bool func_93()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

int func_94(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

void func_95(auto uParam0, int iParam1)
{
	func_96(uParam0, iParam1);
}

void func_96(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_97()
{
	return true;
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	if (is_ped_injured(player_ped_id()))
	{
		return false;
	}
	get_current_ped_weapon(player_ped_id(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		iVar1 = false;
	}
	else
	{
		iVar1 = true;
	}
	if (iVar1)
	{
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		return ((((iVar1 && is_control_pressed(0, 69)) || (iVar1 && is_control_pressed(0, 70))) || (iVar1 && is_control_pressed(0, 68))) || is_player_targetting_anything(player_id()));
	}
	return (((((iVar1 && is_control_pressed(0, 24)) || (iVar1 && is_control_pressed(0, 25))) || (iVar1 && is_control_pressed(0, 47))) || _0xDCCA191DF9980FD7(player_ped_id())) || is_player_targetting_anything(player_id()));
}

bool func_99(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_106()) || Global_100201) || Global_25122) || func_105()) || func_91(8, -1)) || func_104()) || func_103()) || func_102()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_106()) || Global_25122) || func_105()) || func_91(8, -1)) || func_102()) || func_104()) || func_103()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_106()) || Global_100201) || Global_25122) || func_105()) || func_91(8, -1)) || func_102()) || func_104()) || func_103()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(player_ped_id(), false)) || func_106()) || Global_100201) || Global_25122) || func_105()) || func_91(8, -1)) || func_104()) || func_103()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_106() || get_player_wanted_level(player_id()) > 0) || func_91(8, -1)) || func_93()) || func_101()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_91(8, -1) || func_104()) || func_103()) || func_101()) || func_100())
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
							if ((((((((((((((is_ped_in_combat(player_ped_id(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_106()) || Global_25122) || func_105()) || func_91(8, -1)) || func_103()) || func_102()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || func_106()) || func_103()) || Global_100201) || Global_25122) || func_105()) || Global_36839) || func_91(8, -1)) || func_102()) || func_101()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), 1)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_106()) || Global_100201) || Global_25122) || func_105()) || func_91(8, -1)) || func_102()) || func_101()) || func_104()) || func_103()) || func_93())
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

auto func_100()
{
	return Global_91317.f_1;
}

int func_101()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_102()
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

int func_103()
{
	return Global_91330.f_297 > 0;
}

int func_104()
{
	return Global_91330.f_296 > 0;
}

auto func_105()
{
	return Global_1315913;
}

int func_106()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_107()
{
	if (_get_number_of_instances_of_streamed_script(joaat("stripperhome")) > 0)
	{
		return true;
	}
	return false;
}

auto func_108()
{
	return Global_87443;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_111(6) || func_111(7))
			{
				return 1;
			}
			else
			{
				return func_109(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_127(5))
			{
				if (func_99(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return does_blip_exist(Global_25433[iVar0 /*23*/].f_19);
}

int func_111(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_112(auto uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_113()
{
	Vector3 vVar0;
	
	if (iLocal_296)
	{
		switch (iLocal_122)
		{
			case 4:
			case 5:
			case 8:
				iLocal_297 = create_object_no_offset(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
				set_entity_rotation(iLocal_297, func_46(iLocal_122), 2, 1);
				freeze_entity_position(iLocal_297, true);
				break;
			
			case 6:
			case 12:
				iLocal_297 = create_object_no_offset(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
				set_entity_rotation(iLocal_297, func_46(iLocal_122), 2, 1);
				place_object_on_ground_properly(iLocal_297);
				vVar0 = {func_115(iLocal_122)};
				if (!func_33(vVar0))
				{
					iLocal_298 = create_vehicle(joaat("bati"), vVar0, func_114(iLocal_122), 1, true);
					iLocal_298 = iLocal_298;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_114(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_115(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_116()
{
	switch (iLocal_122)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((has_anim_dict_loaded("pickup_object") && has_anim_dict_loaded("oddjobs@basejump@ig_15")) && func_117(&uLocal_118)) && func_117(&uLocal_120));
			break;
		
		case 12:
			return ((has_anim_dict_loaded("pickup_object") && has_anim_dict_loaded("oddjobs@basejump@ig_15")) && func_117(&uLocal_118));
			break;
		
		default:
			break;
	}
	return (func_117(&uLocal_118) && func_117(&uLocal_120));
}

bool func_117(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] != 0)
		{
			if (!has_model_loaded(*uParam0[iVar0]))
			{
				if (!has_model_loaded(*uParam0[iVar0]))
				{
				}
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_118()
{
	switch (iLocal_122)
	{
		case 5:
		case 8:
			func_120(&uLocal_118, joaat("p_parachute_s"));
			request_anim_dict("pickup_object");
			request_anim_dict("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_120(&uLocal_118, joaat("p_parachute_s"));
			func_120(&uLocal_120, joaat("bati"));
			request_anim_dict("pickup_object");
			request_anim_dict("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_120(&uLocal_118, joaat("p_parachute_s"));
			request_anim_dict("pickup_object");
			request_anim_dict("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_119(&uLocal_118);
	func_119(&uLocal_120);
}

void func_119(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] != 0)
		{
			request_model(*uParam0[iVar0]);
		}
		iVar0++;
	}
}

bool func_120(auto uParam0, int iParam1)
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
	iVar1 = func_121(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return false;
	}
	*uParam0[iVar1] = iParam1;
	return true;
}

int func_121(auto uParam0)
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

void func_122(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_123(int iParam0, int iParam1, int iParam2)
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

bool func_124()
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

int func_125()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

int func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	iVar0 = is_bit_set(Global_101154.f_7775.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

int func_127(int iParam0)
{
	return func_128(iParam0, Global_35711);
}

bool func_128(int iParam0, int iParam1)
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

int func_129(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_130()
{
	if (is_entity_dead(player_ped_id(), 0))
	{
		func_95(&uLocal_94, 8388608);
		return;
	}
	StringCopy(&cLocal_53, "bj", 64);
	iLocal_122 = func_134(vLocal_90, 0);
	switch (iLocal_122)
	{
		case 4:
			iLocal_105 = 129;
			break;
		
		case 5:
			iLocal_105 = 130;
			break;
		
		case 6:
			iLocal_105 = 131;
			break;
		
		case 8:
			iLocal_105 = 133;
			break;
		
		case 12:
			iLocal_105 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_105 == 129)
	{
		if (func_133(19))
		{
			func_132(iLocal_105);
		}
	}
	func_95(&uLocal_94, 4194304);
	iLocal_99 = false;
	fLocal_102 = to_float(func_131(iLocal_105)) + 5f;
	fLocal_117 = 1.1f;
	sLocal_101 = "PLAY_BASEJUMP_G";
	if (iLocal_105 != 263)
	{
		if (!func_126(0, iLocal_99))
		{
			iLocal_296 = false;
			func_132(iLocal_105);
		}
		else
		{
			iLocal_296 = true;
		}
	}
	else
	{
		iLocal_296 = false;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("bj")) > 0)
	{
		func_95(&uLocal_94, 8);
	}
	else
	{
		func_136(&uLocal_94, 8);
	}
	if (func_111(12))
	{
		func_95(&uLocal_94, 8);
	}
	iLocal_97 = 18000;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

void func_132(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_123(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_86(&iLocal_96);
		iLocal_95 = 9;
	}
}

auto func_133(int iParam0)
{
	return Global_100241[iParam0 /*10*/].f_1;
}

int func_134(Vector3 vParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_135(iVar3))
		{
			fVar1 = vdist2(vParam0, func_45(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

bool func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return true;
			break;
	}
	return false;
}

void func_136(auto uParam0, int iParam1)
{
	func_137(uParam0, iParam1);
}

void func_137(auto uParam0, auto uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

void func_138(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_105 != 263)
		{
			func_123(iLocal_105, 0, 0);
		}
	}
	func_86(&iLocal_96);
	if (func_129(uLocal_94, 2))
	{
		func_5();
		func_136(&uLocal_94, 2);
		func_7(&iLocal_98);
	}
	iLocal_98 = -1;
	func_139();
	terminate_this_thread();
}

void func_139()
{
	func_136(&uLocal_94, 4);
	func_140();
	if (is_thread_active(iLocal_52))
	{
		force_cleanup_for_thread_with_this_id(iLocal_52, 3);
	}
	if (!is_string_null(&Local_69))
	{
		if (get_length_of_literal_string(&Local_69) != 0)
		{
			set_script_as_no_longer_needed(&Local_69);
		}
	}
}

void func_140()
{
}

