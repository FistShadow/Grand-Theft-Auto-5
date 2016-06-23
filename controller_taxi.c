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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = 0;
	float fLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0;
	float fLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0;
	float fLocal_44 = 0;
	float fLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 6;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	vector3 vLocal_83 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	char[24] cLocal_99 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	float fLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 16;
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
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
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
#endregion

void main()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<6> Var6;
	struct<6> Var12;
	
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
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_37 = -0.0375f;
	fLocal_38 = 0.17f;
	iLocal_40 = 3;
	fLocal_43 = 80f;
	fLocal_44 = 140f;
	fLocal_45 = 180f;
	iLocal_51 = 1;
	iLocal_52 = 65;
	iLocal_53 = 49;
	iLocal_54 = 64;
	iLocal_77 = _0x4A9923385BDB9DAD();
	iLocal_78 = _get_blip_info_id_iterator();
	vLocal_83 = {500f, 500f, 500f};
	iLocal_108 = -1;
	fLocal_111 = 0f;
	iLocal_117 = 1;
	iVar0 = false;
	iVar1 = 0;
	func_84(&(Global_101154.f_17787), 4);
	func_84(&(Global_101154.f_17787), 256);
	if (has_force_cleanup_occurred(82))
	{
		func_83();
	}
	func_82(16);
	while (true)
	{
		iVar0 = !func_81(0, 12);
		iVar2 = 0;
		if (iVar0 && iVar1 != 1)
		{
			iVar1 = 1;
		}
		if (iVar1 == 2)
		{
			if (func_80(9))
			{
				func_79(&iLocal_118);
				iVar1 = 1;
			}
		}
		switch (iVar1)
		{
			case 0:
				if (does_entity_exist(player_ped_id()))
				{
					iVar3 = func_78(player_ped_id());
					if ((iVar3 == 0 || iVar3 == 2) || iVar3 == 1)
					{
						func_77();
						if (!func_76(Global_101154.f_17787, 64))
						{
							func_74(&(Global_101154.f_17787), 64);
						}
						func_73(&uLocal_124);
						iVar1 = 1;
						func_71(&iLocal_118);
					}
				}
				iVar2 = 100;
				break;
			
			case 1:
				if (func_70(1))
				{
					iLocal_109 = get_game_timer();
				}
				if (!func_69() && !Global_88539)
				{
					if (iVar1 != 2)
					{
						if ((!is_minigame_in_progress() && !iVar0) && !func_68(5))
						{
							func_65();
							if (func_64())
							{
								if (!iLocal_113)
								{
									if (func_62() == 2)
									{
										if (!func_76(Global_101154.f_17787, 1))
										{
											switch (func_61("TC_H_TOODAMAGED"))
											{
												case 2:
													func_59("TC_H_TOODAMAGED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													func_74(&(Global_101154.f_17787), 1);
													break;
												}
										}
									}
									else
									{
										func_84(&(Global_101154.f_17787), 1);
									}
									iLocal_113 = 1;
								}
								if (get_player_wanted_level(player_id()) != 0)
								{
									iLocal_106 = 0;
								}
								else if (iLocal_114)
								{
									if (!func_76(Global_101154.f_17787, 16384))
									{
										switch (func_61("TC_ANOTHERJOB"))
										{
											case 2:
												func_59("TC_ANOTHERJOB", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_74(&(Global_101154.f_17787), 16384);
												break;
											}
									}
								}
								else if (!func_76(Global_101154.f_17787, 16))
								{
									if (!iLocal_116)
									{
										switch (func_61("TC_HOWTOSTART"))
										{
											case 2:
												func_59("TC_HOWTOSTART", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												iLocal_110 = get_game_timer();
												iLocal_116 = 1;
												if (func_58("TC_HOWTOSTART"))
												{
													Global_101154.f_17787.f_22[15]++;
												}
												if (Global_101154.f_17787.f_22[15] >= 5)
												{
													func_74(&(Global_101154.f_17787), 16);
												}
												break;
											}
										}
								}
								if (does_blip_exist(iLocal_105))
								{
									remove_blip(&iLocal_105);
								}
								switch (iLocal_106)
								{
									case 0:
										if (func_62() == 0)
										{
											if (!func_57(&iLocal_118))
											{
												func_56(&iLocal_118);
											}
											if (func_57(&iLocal_121))
											{
												func_79(&iLocal_121);
											}
											if (func_53(&iLocal_118) > 20f)
											{
												if (!is_help_message_being_displayed() && func_52())
												{
													iLocal_107 = 9;
													StringCopy(&cLocal_99, "Taxi_Procedural", 24);
													func_51(&uLocal_124, 8, 0, "TaxiDispatch", 0, 1);
													func_50(&uLocal_124, "OJTXAUD", "OJTX_PRO_OFF", 2, 0, 0, 0);
													func_71(&iLocal_118);
													iLocal_106 = 1;
												}
												else if (!func_52())
												{
													if (get_game_timer() % 1000 < 50)
													{
													}
												}
											}
										}
										break;
									
									case 1:
										if (!func_57(&iLocal_118))
										{
											func_56(&iLocal_118);
										}
										if (func_53(&iLocal_118) >= 6f)
										{
											switch (func_61("TC_JOBOFFERED"))
											{
												case 2:
													func_59("TC_JOBOFFERED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													iLocal_112 = 1;
													func_71(&iLocal_118);
													iLocal_106 = 2;
													break;
											}
											if (get_game_timer() % 1000 < 50)
											{
											}
										}
										break;
									
									case 2:
										if (!func_57(&iLocal_118))
										{
											func_56(&iLocal_118);
										}
										if (func_53(&iLocal_118) > 15f)
										{
											if (!func_76(Global_101154.f_17787, 32))
											{
												func_49("TC_MISSEDJOB", -1);
												func_74(&(Global_101154.f_17787), 32);
											}
											fLocal_111 = get_random_float_in_range(10f, 40f) + func_53(&iLocal_118);
											iLocal_106 = 3;
										}
										else if (iLocal_112)
										{
											if (func_53(&iLocal_118) > 6f)
											{
												iLocal_112 = 0;
												clear_help(1);
											}
										}
										break;
									
									case 3:
										if (!func_57(&iLocal_118))
										{
											func_56(&iLocal_118);
										}
										if (func_53(&iLocal_118) > fLocal_111)
										{
											func_79(&iLocal_118);
											iLocal_106 = 0;
										}
										break;
								}
								if (((is_control_pressed(0, 86) && !is_entity_upsidedown(player_ped_id())) && !Global_25271) && get_game_timer() - iLocal_109 > 3000)
								{
									iVar4 = func_62();
									if (iVar4 == 0)
									{
										if (iLocal_106 == 0 || iLocal_106 == 3)
										{
											func_73(&uLocal_124);
											iLocal_107 = 9;
											func_33(iLocal_107, &cLocal_99, &uLocal_124, 0);
											iLocal_115 = 1;
											iVar1 = 4;
										}
										else
										{
											clear_prints();
											clear_help(1);
											if (!func_76(Global_101154.f_17787, 128))
											{
												func_74(&(Global_101154.f_17787), 128);
											}
											iVar1 = 4;
										}
										request_script(&cLocal_99);
										func_79(&iLocal_118);
										iVar2 = 0;
									}
									else if (iVar4 == 2)
									{
										if (!is_help_message_being_displayed())
										{
											func_49("TXC_HEALTH_GONE", -1);
										}
									}
									else if (iVar4 == 3)
									{
										if (!is_help_message_being_displayed())
										{
											if (!func_58("TXC_WANTED_WARN"))
											{
												if (!func_76(Global_101154.f_17787, 32768))
												{
													func_49("TXC_WANTED_WARN", -1);
													func_74(&(Global_101154.f_17787), 32768);
												}
											}
										}
									}
								}
							}
							else
							{
								if (!func_57(&iLocal_121))
								{
									func_56(&iLocal_121);
								}
								else
								{
									if (func_53(&iLocal_121) < 10f)
									{
										if (get_game_timer() % 1000 < 50)
										{
										}
									}
									if (func_53(&iLocal_121) > 10f && iLocal_106 != 0)
									{
										iLocal_106 = 0;
									}
								}
								if (func_32("TC_HOWTOSTART"))
								{
									func_28("TC_HOWTOSTART", 1);
								}
								if (func_32("TC_JOBOFFERED"))
								{
									func_28("TC_JOBOFFERED", 1);
								}
								if (func_32("TC_H_TOODAMAGED"))
								{
									func_28("TC_H_TOODAMAGED", 1);
								}
								if (func_32("TC_ANOTHERJOB"))
								{
									func_28("TC_ANOTHERJOB", 1);
								}
								if ((get_game_timer() - iLocal_110 > 60000 && !func_58("TC_HOWTOSTART")) && iLocal_116)
								{
									iLocal_116 = 0;
								}
								if (iLocal_114)
								{
									iLocal_114 = false;
								}
								iLocal_113 = 0;
								func_79(&iLocal_118);
							}
						}
					}
				}
				else if (get_player_wanted_level(player_id()) != 0)
				{
					iLocal_106 = 0;
				}
				break;
			
			case 4:
				if (!is_ped_injured(player_ped_id()))
				{
					set_horn_enabled(get_vehicle_ped_is_in(player_ped_id(), 0), 1);
				}
				if (has_script_loaded(&cLocal_99))
				{
					iVar5 = func_24(&iLocal_108, 2, 9, 0, 0);
					if (iVar5 == 1)
					{
						Global_100209 = 1;
						if (iLocal_115)
						{
							iVar1 = 5;
						}
						else
						{
							iVar1 = 7;
						}
						iVar2 = 0;
					}
					else if (iVar5 == 0)
					{
						iLocal_106 = 0;
						iVar1 = 11;
					}
					else
					{
						func_23("PROCESS_TAXI_DBG_SKIP = Scene is loading.", &iLocal_117, 1000);
					}
				}
				break;
			
			case 5:
				StringCopy(&Var6, "OJTX_PLRDE1", 24);
				func_22(&Var6, 1);
				func_50(&uLocal_124, "OJTXAUD", &Var6, 8, 0, 0, 0);
				iVar1 = 6;
				break;
			
			case 6:
				if (!func_21())
				{
					func_50(&uLocal_124, "OJTXAUD", "OJTX_DIS_JOB", 8, 0, 0, 0);
					iVar1 = 7;
				}
				break;
			
			case 7:
				if (!func_21())
				{
					StringCopy(&Var12, "OJTX_ACCEPT", 24);
					func_22(&Var12, 1);
					func_73(&uLocal_124);
					func_50(&uLocal_124, "OJTXAUD", &Var12, 8, 0, 0, 0);
					iVar1 = 8;
				}
				break;
			
			case 8:
				if (func_64())
				{
					if (!func_21())
					{
						iLocal_114 = false;
						if (func_32("TC_HOWTOSTART"))
						{
							func_28("TC_HOWTOSTART", 1);
						}
						iLocal_98 = start_new_script(&cLocal_99, 18000);
						set_script_as_no_longer_needed(&cLocal_99);
						if (!func_76(Global_101154.f_17787, 4))
						{
							func_74(&(Global_101154.f_17787), 4);
							set_vehicle_model_is_suppressed(func_20(), true);
						}
						func_74(&(Global_101154.f_17787), 256);
						StringCopy(&cLocal_99, "", 24);
						iLocal_115 = 0;
						iVar1 = 10;
						iLocal_106 = 0;
					}
				}
				else
				{
					if (func_21())
					{
						func_18();
					}
					iLocal_114 = false;
					iLocal_115 = 0;
					set_script_as_no_longer_needed(&cLocal_99);
					func_74(&(Global_101154.f_17787), 256);
					StringCopy(&cLocal_99, "", 24);
					iLocal_106 = 0;
					iVar1 = 10;
				}
				break;
			
			case 10:
				if (!is_thread_active(iLocal_98))
				{
					func_84(&(Global_101154.f_17787), 2048);
					if (func_76(Global_101154.f_17787, 4))
					{
						func_84(&(Global_101154.f_17787), 4);
						set_vehicle_model_is_suppressed(func_20(), false);
					}
					Global_100209 = 0;
					iLocal_107 = -1;
					iVar1 = 11;
					iVar2 = 0;
				}
				else if (func_76(Global_101154.f_17787, 1024))
				{
					func_84(&(Global_101154.f_17787), 1024);
					func_11(func_17(iLocal_107), 0, 0);
					iLocal_114 = true;
					func_9(iLocal_107, iLocal_114);
					func_8(1, 0);
					func_5();
				}
				break;
			
			case 11:
				if (func_76(Global_101154.f_17787, 256))
				{
					func_84(&(Global_101154.f_17787), 256);
					func_4(&iLocal_108);
				}
				iLocal_108 = -1;
				if (!func_3())
				{
					func_8(0, 0);
					func_2();
					StringCopy(&cLocal_99, "", 24);
					if (iLocal_98 != 0)
					{
						if (is_thread_active(iLocal_98))
						{
							terminate_thread(iLocal_98);
							iLocal_98 = 0;
						}
					}
					func_79(&iLocal_118);
					func_1(0);
					iLocal_106 = 0;
					iVar1 = 1;
					iVar2 = 0;
				}
				break;
			
			case 12:
				func_83();
				break;
			
			default:
				func_83();
				break;
		}
		wait(iVar2);
	}
}

void func_1(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

void func_2()
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

var func_3()
{
	return Global_91317.f_1;
}

void func_4(int iParam0)
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

void func_5()
{
	func_6();
}

bool func_6()
{
	if (func_7(0))
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

int func_7(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_8(int iParam0, int iParam1)
{
	Global_91317.f_7 = iParam0;
	Global_91317.f_8 = iParam1;
}

void func_9(int iParam0, int iParam1)
{
	func_10();
	if (iParam1)
	{
		Global_101154.f_17787.f_1[iParam0 /*2*/] = 1;
		Global_101154.f_17787.f_1[iParam0 /*2*/].f_1 = 0;
	}
	else
	{
		Global_101154.f_17787.f_1[iParam0 /*2*/] = 0;
		Global_101154.f_17787.f_1[iParam0 /*2*/].f_1 = 1;
	}
}

void func_10()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_101154.f_17787.f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
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
		func_15(891 + iParam0, 1, -1, 1);
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
		func_12();
	}
}

void func_12()
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
			if (!is_bit_set(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_100877, 0);
					set_bit(&(Global_101154.f_8884.f_3856), 14);
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
	stat_set_int(joaat("num_missions_completed"), Global_100890, 1);
	stat_set_int(joaat("num_missions_available"), Global_100873, 1);
	stat_set_int(joaat("num_minigames_completed"), Global_100891, 1);
	stat_set_int(joaat("num_minigames_available"), Global_100874, 1);
	stat_set_int(joaat("num_oddjobs_completed"), Global_100892, 1);
	stat_set_int(joaat("num_oddjobs_available"), Global_100875, 1);
	stat_set_int(joaat("num_rndpeople_completed"), Global_100893, 1);
	stat_set_int(joaat("num_rndpeople_available"), Global_100876, 1);
	stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stat_set_int(joaat("num_rndevents_available"), Global_100880, 1);
	stat_set_int(joaat("num_misc_completed"), Global_100896 + Global_100895, 1);
	stat_set_int(joaat("num_misc_available"), Global_100879 + Global_100878, 1);
	Global_100897 = Global_100890 * 100 / Global_100873;
	Global_100899 = Global_100892 + Global_100891 * 100 / Global_100875 + Global_100874;
	Global_100898 = Global_100893 + iVar9 * 100 / Global_100876 + Global_100880;
	Global_100900 = Global_100895 + Global_100896 * 100 / Global_100878 + Global_100879;
	stat_set_float(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	stat_set_int(joaat("percent_story_missions"), Global_100897, 1);
	stat_set_int(joaat("percent_ambient_missions"), Global_100898, 1);
	stat_set_int(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_14(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_13() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_6();
				}
			}
		}
	}
}

var func_13()
{
	return Global_25120;
}

int func_14(int iParam0, int iParam1)
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

int func_15(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_16();
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

var func_16()
{
	return Global_1312747;
}

int func_17(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

void func_18()
{
	Global_14578 = 0;
	func_19();
}

void func_19()
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

int func_20()
{
	return joaat("taxi");
}

bool func_21()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_22(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_78(player_ped_id());
	if (iVar0 == 0)
	{
		if (iParam1)
		{
			StringConCat(sParam0, "M", 24);
		}
		else
		{
			StringConCat(sParam0, "_2", 24);
		}
	}
	else if (iVar0 == 2)
	{
		if (iParam1)
		{
			StringConCat(sParam0, "T", 24);
		}
		else
		{
			StringConCat(sParam0, "_3", 24);
		}
	}
	else if (iVar0 == 1)
	{
		if (iParam1)
		{
			StringConCat(sParam0, "F", 24);
		}
		else
		{
			StringConCat(sParam0, "_4", 24);
		}
	}
}

void func_23(char* sParam0, int iParam1, int iParam2)
{
	if (get_game_timer() < *iParam1 + iParam2)
	{
		return;
	}
	*iParam1 = get_game_timer();
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (!func_26(iParam2))
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
			func_25(iParam0, iParam4);
		}
	}
	return 2;
}

void func_25(var uParam0, int iParam1)
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

int func_26(int iParam0)
{
	return func_27(iParam0, Global_35711);
}

bool func_27(int iParam0, int iParam1)
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

void func_28(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_99796 && iParam1)
	{
		if (func_58(sParam0) && !is_help_message_fading_out())
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
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30(Global_101154.f_24935.f_145 - 1);
			Global_101154.f_24935.f_145--;
			func_29();
			return;
		}
		iVar0++;
	}
}

void func_29()
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

void func_30(int iParam0)
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

void func_31(int iParam0, var uParam1)
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

bool func_32(char* sParam0)
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

void func_33(int iParam0, char* sParam1, var uParam2, int iParam3)
{
	struct<6> Var0;
	struct<6> Var6;
	
	if (iParam0 == 0)
	{
		StringCopy(sParam1, "Taxi_NeedExcitement", 24);
	}
	else if (iParam0 == 1)
	{
		StringCopy(sParam1, "Taxi_TakeItEasy", 24);
	}
	else if (iParam0 == 2)
	{
		StringCopy(sParam1, "Taxi_Deadline", 24);
	}
	else if (iParam0 == 3)
	{
		StringCopy(sParam1, "Taxi_GotYourBack", 24);
	}
	else if (iParam0 == 4)
	{
		StringCopy(sParam1, "Taxi_TakeToBest", 24);
	}
	else if (iParam0 == 5)
	{
		StringCopy(sParam1, "Taxi_CutYouIn", 24);
	}
	else if (iParam0 == 6)
	{
		StringCopy(sParam1, "Taxi_GotYouNow", 24);
	}
	else if (iParam0 == 7)
	{
		StringCopy(sParam1, "Taxi_ClownCar", 24);
	}
	else if (iParam0 == 8)
	{
		StringCopy(sParam1, "Taxi_FollowCar", 24);
	}
	else if (iParam0 == 9)
	{
		StringCopy(sParam1, "Taxi_Procedural", 24);
	}
	if (iParam3)
	{
		StringCopy(&Var0, func_48(iParam0), 24);
		Var6 = {Var0};
		StringConCat(&Var6, "_1", 24);
		func_73(uParam2);
		func_34(uParam2, "OJTXAUD", &Var0, &Var6, 8, 0, 0);
	}
}

int func_34(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_35(sParam2, iParam4, 0);
}

bool func_35(char* sParam0, int iParam1, int iParam2)
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
					func_19();
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
		if (func_46(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_45();
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
				func_40();
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
				if (func_39())
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
			if (func_38())
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
			func_37();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_36();
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
		func_19();
	}
	return false;
}

void func_36()
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

void func_37()
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

bool func_38()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_39()
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

void func_40()
{
	if (func_68(14))
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
		Global_14413 = func_41();
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

var func_41()
{
	func_42();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_42()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_44(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_78(player_ped_id());
			if (func_43(iVar0) && (!func_68(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_43(Global_101154.f_1826.f_539.f_3549))
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

int func_43(int iParam0)
{
	return iParam0 < 3;
}

int func_44(int iParam0)
{
	if (func_43(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_45()
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

int func_46(int iParam0, int iParam1)
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

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_48(int iParam0)
{
	if (iParam0 == 0)
	{
		return "OJTX_EXC_OFF";
	}
	else if (iParam0 == 1)
	{
		return "OJTX_TIE_OFF";
	}
	else if (iParam0 == 2)
	{
		return "OJTX_DL_OFF";
	}
	else if (iParam0 == 3)
	{
		return "OJTX_GB_OFF";
	}
	else if (iParam0 == 4)
	{
		return "OJTX_TB_OFF";
	}
	else if (iParam0 == 5)
	{
		return "OJTX_CI_OFF";
	}
	else if (iParam0 == 6)
	{
		return "OJTX_GN_OFF";
	}
	else if (iParam0 == 7)
	{
		return "OJTX_CC_OFF";
	}
	else if (iParam0 == 8)
	{
		return "OJTX_FC_OFF";
	}
	else if (iParam0 == 9)
	{
		return "OJTX_PRO_OFF";
	}
	return "";
}

void func_49(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_50(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_35(sParam2, iParam3, 0);
}

void func_51(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_52()
{
	int iVar0;
	
	iVar0 = get_game_timer();
	if (Global_15712 == 0)
	{
		if (iVar0 - Global_16734 > 3000)
		{
			if (is_scripted_conversation_ongoing() == 0)
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

float func_53(int iParam0)
{
	if (func_57(iParam0))
	{
		if (func_55(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_54(is_bit_set(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_54(int iParam0)
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

int func_55(int iParam0)
{
	return is_bit_set(*iParam0, 2);
}

void func_56(int iParam0)
{
	if (!func_57(iParam0))
	{
		func_71(iParam0);
	}
}

int func_57(int iParam0)
{
	return is_bit_set(*iParam0, true);
}

int func_58(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_60(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_60(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

int func_61(char* sParam0)
{
	if (are_strings_equal(sParam0, &Global_99799))
	{
		return 1;
	}
	if (func_32(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_64())
	{
		return 1;
	}
	else
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		iVar1 = round(get_vehicle_engine_health(iVar0));
		iVar2 = get_entity_health(iVar0);
		if (iVar1 < 100 || iVar2 < 100)
		{
			return 2;
		}
		if (!func_63(iVar0))
		{
			return 2;
		}
		if (get_player_wanted_level(player_id()) > 0)
		{
			return 3;
		}
	}
	return 0;
}

bool func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!is_vehicle_tyre_burst(iParam0, false, 0))
	{
		iVar0++;
	}
	if (!is_vehicle_tyre_burst(iParam0, true, 0))
	{
		iVar0++;
	}
	if (!is_vehicle_tyre_burst(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!is_vehicle_tyre_burst(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return false;
	}
	if (is_this_model_a_car(get_entity_model(iParam0)))
	{
		iVar1 = 0;
		if (!is_vehicle_door_damaged(iParam0, false))
		{
			iVar1++;
		}
		if (!is_vehicle_door_damaged(iParam0, true))
		{
			iVar1++;
		}
		if (!is_vehicle_door_damaged(iParam0, 2))
		{
			iVar1++;
		}
		if (!is_vehicle_door_damaged(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return false;
		}
	}
	return true;
}

bool func_64()
{
	int iVar0;
	
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1) == player_ped_id())
				{
					if (is_vehicle_model(iVar0, func_20()))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_65()
{
	if (!func_76(Global_101154.f_17787, 8192))
	{
		if (func_64())
		{
			func_74(&(Global_101154.f_17787), 8192);
			func_67();
		}
	}
	else if (!func_64())
	{
		func_84(&(Global_101154.f_17787), 8192);
		func_66();
	}
}

void func_66()
{
	int iVar0;
	
	iVar0 = get_players_last_vehicle();
	if (is_vehicle_driveable(iVar0, 0))
	{
		play_sound_from_entity(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_67()
{
	int iVar0;
	
	iVar0 = get_players_last_vehicle();
	if (is_vehicle_driveable(iVar0, 0))
	{
		play_sound_from_entity(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_68(int iParam0)
{
	return Global_35711 == iParam0;
}

bool func_69()
{
	if (Global_35711 == 15)
	{
		return false;
	}
	return true;
}

bool func_70(int iParam0)
{
	if (Global_17118.f_130)
	{
		return false;
	}
	if (is_control_just_released(0, 19) || (!iParam0 && is_disabled_control_just_released(0, 19)))
	{
		return true;
	}
	if (is_pc_version())
	{
		if (is_control_just_released(0, 166))
		{
			if ((!is_control_pressed(0, 167) && !is_control_pressed(0, 168)) && !is_control_pressed(0, 169))
			{
				return true;
			}
		}
		else if (is_control_just_released(0, 167))
		{
			if ((!is_control_pressed(0, 166) && !is_control_pressed(0, 168)) && !is_control_pressed(0, 169))
			{
				return true;
			}
		}
		else if (is_control_just_released(0, 168))
		{
			if ((!is_control_pressed(0, 166) && !is_control_pressed(0, 167)) && !is_control_pressed(0, 169))
			{
				return true;
			}
		}
		else if (is_control_just_released(0, 169))
		{
			if ((!is_control_pressed(0, 166) && !is_control_pressed(0, 167)) && !is_control_pressed(0, 168))
			{
				return true;
			}
		}
		if (!iParam0)
		{
			if (is_disabled_control_just_released(0, 166))
			{
				if ((!is_disabled_control_pressed(0, 167) && !is_disabled_control_pressed(0, 168)) && !is_disabled_control_pressed(0, 169))
				{
					return true;
				}
			}
			else if (is_disabled_control_just_released(0, 167))
			{
				if ((!is_disabled_control_pressed(0, 166) && !is_disabled_control_pressed(0, 168)) && !is_disabled_control_pressed(0, 169))
				{
					return true;
				}
			}
			else if (is_disabled_control_just_released(0, 168))
			{
				if ((!is_disabled_control_pressed(0, 166) && !is_disabled_control_pressed(0, 167)) && !is_disabled_control_pressed(0, 169))
				{
					return true;
				}
			}
			else if (is_disabled_control_just_released(0, 169))
			{
				if ((!is_disabled_control_pressed(0, 166) && !is_disabled_control_pressed(0, 167)) && !is_disabled_control_pressed(0, 168))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_71(int iParam0)
{
	func_72(iParam0, 0f);
}

void func_72(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_54(is_bit_set(*iParam0, 4)) - fParam1;
	set_bit(iParam0, true);
	clear_bit(iParam0, 2);
	*iParam0.f_2 = 0f;
}

void func_73(var uParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = func_78(player_ped_id());
	if (iVar0 == 0)
	{
		func_51(uParam0, 0, player_ped_id(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_51(uParam0, 0, player_ped_id(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_51(uParam0, 0, player_ped_id(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_51(uParam0, 0, player_ped_id(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_51(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_74(var uParam0, int iParam1)
{
	func_75(uParam0, iParam1);
}

void func_75(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_76(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_77()
{
	int iVar0;
	
	if (func_76(Global_101154.f_17787, 2048))
	{
		iVar0 = 0;
		while (iVar0 <= 10 - 1)
		{
			Global_101154.f_17787.f_1[0 /*2*/] = 0;
			Global_101154.f_17787.f_1[0 /*2*/].f_1 = 0;
			iVar0++;
		}
	}
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_44(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_79(int iParam0)
{
	*iParam0.f_1 = 0f;
	*iParam0.f_2 = 0f;
	*iParam0 = 0;
}

bool func_80(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_26(iParam0))
	{
		return false;
	}
	return true;
}

int func_81(int iParam0, int iParam1)
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

bool func_82(int iParam0)
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
	set_bit(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
	return true;
}

void func_83()
{
	if (func_76(Global_101154.f_17787, 4))
	{
		func_84(&(Global_101154.f_17787), 4);
		set_vehicle_model_is_suppressed(func_20(), false);
	}
	if (func_76(Global_101154.f_17787, 256))
	{
		func_84(&(Global_101154.f_17787), 256);
		func_4(&iLocal_108);
	}
	if (iLocal_98 != 0)
	{
		if (is_thread_active(iLocal_98))
		{
			terminate_thread(iLocal_98);
			iLocal_98 = 0;
		}
	}
	if (get_length_of_literal_string(&cLocal_99) != 0)
	{
		set_script_as_no_longer_needed(&cLocal_99);
	}
	if (does_blip_exist(iLocal_105))
	{
		remove_blip(&iLocal_105);
	}
	terminate_this_thread();
}

void func_84(var uParam0, int iParam1)
{
	func_85(uParam0, iParam1);
}

void func_85(var uParam0, var uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

