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
	auto uLocal_37 = 10;
	auto uLocal_38 = 0;
	auto uLocal_39 = 0;
	auto uLocal_40 = 0;
	auto uLocal_41 = 0;
	auto uLocal_42 = 0;
	auto uLocal_43 = 0;
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
	auto uLocal_57 = 0;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 0;
	auto uLocal_67 = 0;
	auto uLocal_68 = 0;
	auto uLocal_69 = 0;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int[] iLocal_83 = new int[21];
	auto uLocal_105 = 20;
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
	int iLocal_226 = 0;
	auto uLocal_227 = 0;
	auto uLocal_228 = 0;
	int iLocal_229 = 0;
	auto uLocal_230 = 0;
	auto uLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	Vector3 vLocal_239 = 0;
	Vector3 vLocal_242 = 0;
	Vector3 vLocal_245 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	vLocal_239 = {0f, 0f, 0f};
	vLocal_242 = {vLocal_239};
	vLocal_245 = {vLocal_239};
	iLocal_250 = 3;
	iLocal_255 = 24818;
	iLocal_258 = 24816;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(178))
	{
		terminate_this_thread();
	}
	func_77();
	while (true)
	{
		wait(0);
		if (!func_76())
		{
			terminate_this_thread();
		}
		if (func_75(0))
		{
			terminate_this_thread();
		}
		if (func_74(14))
		{
			terminate_this_thread();
		}
		if ((!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, false) && func_69() == 1) && !func_68())
		{
			func_1();
		}
		else
		{
			terminate_this_thread();
		}
	}
}

void func_1()
{
	switch (iLocal_248)
	{
		case 0:
			func_44();
			func_40();
			func_32();
			func_30();
			func_21();
			if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, true) && !iLocal_235)
			{
				iLocal_248++;
			}
			break;
		
		case 1:
			if (func_17(&iLocal_229) > 5f)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 3))
				{
					func_14(28, iLocal_83[20], 1);
					func_7(28);
					GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 3);
					func_5(63, 1);
					iLocal_248++;
				}
			}
			break;
		
		case 2:
			if (func_3(63))
			{
				iLocal_248++;
			}
			break;
		
		case 3:
			GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), false);
			func_2();
			break;
	}
}

bool func_2()
{
	if (func_75(0))
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

int func_3(int iParam0)
{
	return func_4(iParam0, 0);
}

int func_4(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_18807[iParam0], iParam1);
}

void func_5(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_4(iParam0, 0))
		{
			func_6(iParam0, 1, 0);
			func_6(iParam0, 2, 0);
			func_6(iParam0, 3, 0);
			func_6(iParam0, 4, 0);
			func_6(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_6(iParam0, 0, 0);
	}
}

void func_6(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	auto uVar7;
	char* sVar8;
	
	iVar0 = func_13(iParam0);
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
		MemCopy(&Var3, {func_12(Global_36852[uVar7 /*12*/].f_1)}, 4);
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
		func_8(1, Global_36852[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36852[iVar1 /*12*/].f_3)
		{
			case 0:
				func_8(0, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_8(1, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_8(2, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_8(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	int iVar1;
	char[64] cVar2;
	
	if (is_cutscene_playing())
	{
		return;
	}
	iVar0 = func_69();
	iVar1 = false;
	StringCopy(&cVar2, func_11(iParam1, &iVar1), 64);
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
			func_9(_set_notification_message(&cVar2, &cVar2, 0, 2, _get_label_text(func_10(iParam1)), 0));
		}
		else
		{
			func_9(_set_notification_message("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, _get_label_text(func_10(iParam1)), 0));
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

void func_9(int iParam0)
{
	Global_36847[Global_36851] = iParam0;
	Global_16770 = 1;
	Global_16769 = iParam0;
	Global_36851++;
	if (Global_36851 == 3)
	{
		Global_36851 = 0;
	}
}

char* func_10(int iParam0)
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

char* func_11(int iParam0, int iParam1)
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

struct<16> func_12(int iParam0)
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

int func_13(int iParam0)
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

bool func_14(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_16(iParam0, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 4)
	{
		return false;
	}
	Global_46152[iVar0 /*203*/].f_2 = iParam0;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/] = uParam1;
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
			if (Global_46152[iVar0 /*203*/].f_4[iVar1] == Global_36852[uParam1 /*12*/].f_3)
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
			Global_46152[iVar0 /*203*/].f_4[Global_46152[iVar0 /*203*/].f_3] = Global_36852[uParam1 /*12*/].f_3;
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
			if (Global_46152[iVar0 /*203*/].f_4[iVar1] == Global_36852[uParam1 /*12*/].f_2)
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
			Global_46152[iVar0 /*203*/].f_4[Global_46152[iVar0 /*203*/].f_3] = Global_36852[uParam1 /*12*/].f_2;
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
			func_15(Global_46152[iVar0 /*203*/].f_4[iVar1], Global_46152[iVar0 /*203*/].f_1, 1, iParam2, 0);
		}
		iVar1++;
	}
	return true;
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		Var3 = {func_12(Global_36852[uVar20 /*12*/].f_1)};
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
			Var3 = {func_12(Global_36852[uVar26 /*12*/].f_1)};
		}
	}
	if (!iParam4)
	{
		if (!Global_45790[iParam0 /*120*/].f_69[iVar0] && !iParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_8(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_8(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_8(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_8(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_16(int iParam0, int iParam1)
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
	
	iVar0 = func_13(iParam0);
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

float func_17(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_19(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_18(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return 0f;
}

float func_18(int iParam0)
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

int func_19(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

int func_20(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, true);
}

void func_21()
{
	switch (iLocal_81)
	{
		case 0:
			if (iLocal_235)
			{
				if (!func_29())
				{
					iLocal_232 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
					while (!has_scaleform_movie_loaded(iLocal_232))
					{
						wait(0);
					}
					_push_scaleform_movie_function(iLocal_232, "SHOW_BRIDGES_KNIVES_PROGRESS");
					func_28("PW_TITLE");
					_push_scaleform_movie_function_parameter_int(20);
					func_28("PW_PASS");
					func_28("PW_CHALLENGE");
					_push_scaleform_movie_function_parameter_int(func_26());
					_pop_scaleform_movie_function_void();
					iLocal_249 = func_26();
					Global_25352 = iLocal_249;
					settimerb(0);
					play_sound_frontend(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
				}
				iLocal_81 = 1;
			}
			break;
		
		case 1:
			if ((((((timerb() > 7500 || is_screen_faded_out()) || !is_player_playing(player_id())) || func_29()) || !is_player_control_on(player_id())) || func_25()) || func_24())
			{
				_push_scaleform_movie_function(iLocal_232, "SHARD_ANIM_OUT");
				_push_scaleform_movie_function_parameter_int(true);
				_push_scaleform_movie_function_parameter_float(0.33f);
				_pop_scaleform_movie_function_void();
				settimerb(0);
				iLocal_81 = 2;
			}
			else
			{
				func_23();
				if (Global_25352 > iLocal_249)
				{
					iLocal_81 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((timerb() > 500 || is_screen_faded_out()) || !is_player_playing(player_id())) || func_29()) || !is_player_control_on(player_id())) || func_25()) || func_24())
			{
				iLocal_81 = 3;
			}
			else
			{
				func_23();
				if (Global_25352 > iLocal_249)
				{
					iLocal_81 = 3;
				}
			}
			break;
		
		case 3:
			func_22();
			iLocal_235 = false;
			iLocal_81 = 0;
			break;
	}
}

void func_22()
{
	if (has_scaleform_movie_loaded(iLocal_232))
	{
		set_scaleform_movie_as_no_longer_needed(&iLocal_232);
	}
}

void func_23()
{
	if (!func_29())
	{
		if (has_scaleform_movie_loaded(iLocal_232))
		{
			draw_scaleform_movie(iLocal_232, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_24()
{
	if (Global_35711 == 9 || Global_35711 == 10)
	{
		return Global_99806;
	}
	Global_99806 = 0;
	return 0;
}

bool func_25()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

int func_26()
{
	int iVar0;
	
	iVar0 = func_27();
	if (iVar0 == 20)
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), true);
	}
	return iVar0;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		if (iVar1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 > 20)
	{
		iVar0 = 20;
	}
	return iVar0;
}

void func_28(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

bool func_29()
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

void func_30()
{
	if (func_31() && !iLocal_237)
	{
		iLocal_237 = 1;
		iLocal_79 = 7;
	}
	if (!func_31() && iLocal_237)
	{
		iLocal_237 = 0;
	}
}

bool func_31()
{
	if (Global_14398)
	{
		return true;
	}
	return false;
}

void func_32()
{
	if (func_17(&iLocal_226) > 3f)
	{
		func_37(0);
		func_36(&iLocal_226, 0f);
		func_35(&iLocal_226);
	}
	if ((func_17(&iLocal_226) <= 3f && func_34(0)) && func_33(PLAYER::PLAYER_PED_ID()))
	{
		if ((is_control_just_pressed(0, 177) || (is_control_just_pressed(0, 24) && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))) || (func_31() && !iLocal_237))
		{
			func_36(&iLocal_226, 0f);
			func_35(&iLocal_226);
		}
	}
}

bool func_33(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_34(int iParam0)
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

void func_35(int iParam0)
{
	if (func_20(iParam0))
	{
		if (!func_19(iParam0))
		{
			*iParam0.f_2 = func_18(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
			GAMEPLAY::SET_BIT(iParam0, 2);
		}
	}
}

void func_36(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_18(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(iParam0, true);
	GAMEPLAY::CLEAR_BIT(iParam0, 2);
	*iParam0.f_2 = 0f;
}

void func_37(int iParam0)
{
	if (Global_14571)
	{
		func_39(0, 0);
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
	if (!func_38())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_38()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_39(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_34(0))
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

void func_40()
{
	if (iLocal_238)
	{
		if ((func_17(&iLocal_229) > 5f && func_43() >= 1) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, true))
		{
			switch (iLocal_251)
			{
				case 0:
					func_14(28, iLocal_83[20 - func_43()], 1);
					iLocal_252 = 0;
					iLocal_251++;
					break;
				
				case 1:
					if (iLocal_252 < 10)
					{
						func_41(28, func_42(iLocal_252));
						iLocal_252++;
					}
					else
					{
						iLocal_251++;
					}
					break;
				
				case 2:
					func_7(28);
					iLocal_251++;
					break;
				
				case 3:
					func_36(&iLocal_229, 0f);
					func_35(&iLocal_229);
					iLocal_238 = 0;
					iLocal_251 = 0;
					func_2();
					break;
				}
			}
	}
}

void func_41(int iParam0, char* sParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = func_13(iParam0);
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

char* func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 4) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 29))
			{
				return "PW_STRING_1_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 4) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 29))
			{
				return "PW_STRING_1_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 4) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 29))
			{
				return "PW_STRING_1_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 4) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 29))
			{
				return "PW_STRING_1_4";
			}
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 5) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 6))
			{
				return "PW_STRING_2_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 5) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 6))
			{
				return "PW_STRING_2_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 5) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 6))
			{
				return "PW_STRING_2_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 5) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 6))
			{
				return "PW_STRING_2_4";
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 7) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 8))
			{
				return "PW_STRING_3_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 7) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 8))
			{
				return "PW_STRING_3_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 7) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 8))
			{
				return "PW_STRING_3_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 7) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 8))
			{
				return "PW_STRING_3_4";
			}
			break;
		
		case 3:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 9) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 10))
			{
				return "PW_STRING_4_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 9) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 10))
			{
				return "PW_STRING_4_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 9) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 10))
			{
				return "PW_STRING_4_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 9) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 10))
			{
				return "PW_STRING_4_4";
			}
			break;
		
		case 4:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 11) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 14))
			{
				return "PW_STRING_5_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 11) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 14))
			{
				return "PW_STRING_5_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 11) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 14))
			{
				return "PW_STRING_5_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 11) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 14))
			{
				return "PW_STRING_5_4";
			}
			break;
		
		case 5:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 16) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 18))
			{
				return "PW_STRING_6_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 16) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 18))
			{
				return "PW_STRING_6_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 16) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 18))
			{
				return "PW_STRING_6_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 16) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 18))
			{
				return "PW_STRING_6_4";
			}
			break;
		
		case 6:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 19) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 21))
			{
				return "PW_STRING_7_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 19) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 21))
			{
				return "PW_STRING_7_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 19) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 21))
			{
				return "PW_STRING_7_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 19) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 21))
			{
				return "PW_STRING_7_4";
			}
			break;
		
		case 7:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 22) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 23))
			{
				return "PW_STRING_8_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 22) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 23))
			{
				return "PW_STRING_8_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 22) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 23))
			{
				return "PW_STRING_8_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 22) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 23))
			{
				return "PW_STRING_8_4";
			}
			break;
		
		case 8:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 24) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 25))
			{
				return "PW_STRING_9_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 24) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 25))
			{
				return "PW_STRING_9_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 24) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 25))
			{
				return "PW_STRING_9_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 24) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 25))
			{
				return "PW_STRING_9_4";
			}
			break;
		
		case 9:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 26) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 31))
			{
				return "PW_STRING_10_1";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 26) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 31))
			{
				return "PW_STRING_10_2";
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 26) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 31))
			{
				return "PW_STRING_10_3";
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 26) && GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 31))
			{
				return "PW_STRING_10_4";
			}
			break;
	}
	return "PW_STRING_NONE";
}

int func_43()
{
	return 20 - func_27();
}

void func_44()
{
	switch (iLocal_79)
	{
		case 0:
			if (func_67())
			{
				if ((!func_66() && Global_2562121 == 0) && Global_2562122 == 0)
				{
					iLocal_79 = 1;
				}
			}
			break;
		
		case 1:
			iLocal_233 = func_61(&iLocal_234, 60f, iLocal_253, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_254, iLocal_255);
			if (iLocal_233 == 0)
			{
				iLocal_233 = func_61(&iLocal_234, 60f, iLocal_256, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_257, iLocal_258);
				if (iLocal_233 == 0)
				{
					iLocal_79 = 7;
				}
				else
				{
					iLocal_79 = 4;
				}
			}
			else
			{
				iLocal_79 = 4;
			}
			break;
		
		case 4:
			if (!func_60(iLocal_234))
			{
				func_59(1);
				iLocal_79 = 5;
			}
			else
			{
				if (!iLocal_236)
				{
				}
				else
				{
					iLocal_236 = 0;
				}
				iLocal_79 = 7;
			}
			break;
		
		case 5:
			switch (iLocal_80)
			{
				case 0:
					func_58("PW_HELP_1", -1);
					if (func_57())
					{
						if (func_34(0))
						{
							func_56(99);
							if (func_55("PW_HELP_1"))
							{
								clear_this_print("PW_HELP_1");
							}
							iLocal_80 = 1;
						}
					}
					if (is_control_just_pressed(0, 176) || is_control_just_pressed(0, 178))
					{
						func_59(0);
						func_54(99);
						if (func_55("PW_HELP_1"))
						{
							clear_this_print("PW_HELP_1");
						}
						iLocal_79 = 7;
					}
					break;
				
				case 1:
					func_58("PW_HELP_2", -1);
					if (func_53(99))
					{
						iLocal_80 = 0;
						func_59(0);
						func_54(99);
						if (func_55("PW_HELP_2"))
						{
							clear_this_print("PW_HELP_2");
						}
						iLocal_79 = 6;
					}
					if (is_control_just_pressed(0, 177))
					{
						iLocal_80 = 0;
						func_59(0);
						func_54(99);
						if (func_55("PW_HELP_2"))
						{
							clear_this_print("PW_HELP_2");
						}
						iLocal_79 = 7;
					}
					break;
			}
			break;
		
		case 6:
			func_52(iLocal_234);
			func_49(iLocal_82);
			STATS::STAT_SET_INT(joaat("num_hidden_packages_7"), func_27(), 1);
			iLocal_235 = true;
			func_46(&iLocal_226);
			func_46(&iLocal_229);
			iLocal_238 = 1;
			iLocal_79 = 7;
			break;
		
		case 7:
			func_45();
			iLocal_79 = 8;
			break;
		
		case 8:
			if (!func_67())
			{
				iLocal_79 = 0;
			}
			break;
	}
}

void func_45()
{
	iLocal_80 = 0;
	iLocal_82 = 0;
	iLocal_233 = 0;
	iLocal_234 = 0;
	iLocal_236 = 0;
	vLocal_242 = {vLocal_239};
	vLocal_245 = {vLocal_239};
	func_59(0);
	func_54(99);
	if (func_55("PW_HELP_1"))
	{
		clear_this_print("PW_HELP_1");
	}
	if (func_55("PW_HELP_2"))
	{
		clear_this_print("PW_HELP_2");
	}
}

void func_46(int iParam0)
{
	if (!func_20(iParam0))
	{
		func_48(iParam0);
	}
	else
	{
		func_47(iParam0);
	}
}

void func_47(int iParam0)
{
	func_36(iParam0, 0f);
}

void func_48(int iParam0)
{
	if (!func_20(iParam0))
	{
		func_47(iParam0);
	}
}

void func_49(int iParam0)
{
	auto uVar0;
	
	uVar0 = func_51(92);
	Global_2411218[uVar0 /*83*/] = 92;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_1), func_50(iParam0), 64);
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

char* func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		
		case 1:
			return "AF_BOAR";
		
		case 2:
			return "AF_BORDERCOLLIE";
		
		case 3:
			return "AF_CAT";
		
		case 4:
			return "AF_CHICKENHAWK";
		
		case 5:
			return "AF_CORMORANT";
		
		case 6:
			return "AF_COW";
		
		case 7:
			return "AF_COYOTE";
		
		case 8:
			return "AF_CROW";
		
		case 9:
			return "AF_DEER";
		
		case 10:
			return "AF_HEN";
		
		case 11:
			return "AF_HUSKY";
		
		case 12:
			return "AF_MOUNT_LION";
		
		case 13:
			return "AF_PIG";
		
		case 14:
			return "AF_RABBIT";
		
		case 15:
			return "AF_POODLE";
		
		case 16:
			return "AF_PUG";
		
		case 17:
			return "AF_RETRIEVER";
		
		case 18:
			return "AF_ROTTWEILER";
		
		case 19:
			return "AF_SEAGULL";
		
		case 20:
			return "AF_WESTIE";
		
		default:
	}
	return "";
}

int func_51(int iParam0)
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

void func_52(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 4))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 4);
				iLocal_82 = 1;
			}
			break;
		
		case 1462895032:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 5))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 5);
				iLocal_82 = 3;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 6))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 6);
				iLocal_82 = 4;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 7))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 7);
				iLocal_82 = 5;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 8))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 8);
				iLocal_82 = 6;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 9))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 9);
				iLocal_82 = 7;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 10))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 10);
				iLocal_82 = 8;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 11))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 11);
				iLocal_82 = 9;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 14))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 14);
				iLocal_82 = 10;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 16))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 16);
				iLocal_82 = 11;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 18))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 18);
				iLocal_82 = 12;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 19))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 19);
				iLocal_82 = 13;
			}
			break;
		
		case 1125994524:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 21))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 21);
				iLocal_82 = 15;
			}
			break;
		
		case 1832265812:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 22))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 22);
				iLocal_82 = 16;
			}
			break;
		
		case -541762431:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 23))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 23);
				iLocal_82 = 14;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 24))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 24);
				iLocal_82 = 17;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 25))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 25);
				iLocal_82 = 18;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 26))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 26);
				iLocal_82 = 19;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 29))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 29);
				iLocal_82 = 2;
			}
			break;
		
		case -1384627013:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 31))
			{
				GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 31);
				iLocal_82 = 20;
			}
			break;
		
		default:
			break;
	}
}

bool func_53(int iParam0)
{
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_101154.f_32575[iParam0 /*29*/].f_18 == 1)
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

bool func_54(int iParam0)
{
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		Global_101154.f_32575[iParam0 /*29*/].f_18 = 0;
		return true;
	}
	return false;
}

int func_55(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_56(int iParam0)
{
	Global_14568 = iParam0;
}

bool func_57()
{
	if (_get_number_of_instances_of_streamed_script(joaat("appcontacts")) > 0)
	{
		return true;
	}
	return false;
}

void func_58(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_59(int iParam0)
{
	if (iParam0)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 28);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 28);
	}
}

bool func_60(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 4))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case 1462895032:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 5))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 6))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 7))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 8))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 9))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 10))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 11))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 14))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 16))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 18))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 19))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case 1125994524:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 21))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case 1832265812:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 22))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case -541762431:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 23))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 24))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 25))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 26))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 29))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case -1384627013:
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 31))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		default:
			iLocal_236 = 1;
			break;
	}
	return true;
}

int func_61(int iParam0, float fParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	float fVar1;
	
	iVar0 = _0x89215EC747DF244A(fParam1, iParam2, fParam3, fParam4, fParam5, fParam6, fParam7, iParam8, iParam9);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (iVar0 != 0 && func_33(iVar0))
	{
		if (get_ped_type(iVar0) == 28)
		{
			if (!ENTITY::IS_ENTITY_OCCLUDED(iVar0))
			{
				*iParam0 = ENTITY::GET_ENTITY_MODEL(iVar0);
				if (func_65(iVar0, 31086))
				{
					fVar1 = func_64(PLAYER::PLAYER_PED_ID(), iVar0, 1);
					if (has_entity_clear_los_to_entity_in_front(PLAYER::PLAYER_PED_ID(), iVar0))
					{
					}
					if (func_63(*iParam0))
					{
						if (fVar1 <= IntToFloat(func_62(*iParam0)))
						{
						}
						else
						{
							iVar0 = false;
						}
					}
					else if (fVar1 <= IntToFloat(func_62(*iParam0)))
					{
					}
					else
					{
						iVar0 = false;
					}
				}
				else
				{
					iVar0 = false;
				}
			}
			else
			{
				iVar0 = false;
			}
		}
		else
		{
			iVar0 = false;
		}
	}
	else
	{
		iVar0 = false;
	}
	return iVar0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			iVar0 = 30;
			break;
		
		case 1462895032:
			iVar0 = 30;
			break;
		
		case joaat("a_c_chickenhawk"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cormorant"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cow"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_coyote"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_crow"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_deer"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_hen"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_husky"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_mtlion"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pig"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pigeon"):
			iVar0 = 40;
			break;
		
		case 1125994524:
			iVar0 = 30;
			break;
		
		case 1832265812:
			iVar0 = 30;
			break;
		
		case -541762431:
			iVar0 = 30;
			break;
		
		case joaat("a_c_retriever"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_seagull"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_shepherd"):
			iVar0 = 30;
			break;
		
		case -1384627013:
			iVar0 = 30;
			break;
		
		default:
			iVar0 = 30;
			break;
	}
	return iVar0;
}

bool func_63(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

auto func_64(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	else
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 1)};
	}
	else
	{
		vVar3 = {ENTITY::GET_ENTITY_COORDS(iParam1, 0)};
	}
	return get_distance_between_coords(vVar0, vVar3, iParam2);
}

bool func_65(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	vLocal_245 = {get_world_position_of_entity_bone(iParam0, get_ped_bone_index(iParam0, iParam1))};
	if (iLocal_234 == -541762431 || iLocal_234 == joaat("a_c_rat"))
	{
		vLocal_242 = {get_world_position_of_entity_bone(iParam0, get_ped_bone_index(iParam0, 24816))};
	}
	else
	{
		vLocal_242 = {get_world_position_of_entity_bone(iParam0, get_ped_bone_index(iParam0, 24818))};
	}
	_world3d_to_screen2d(vLocal_242, &fVar0, &fVar1);
	_world3d_to_screen2d(vLocal_245, &fVar2, &fVar3);
	if ((((fVar0 >= 0.05f && fVar0 <= 0.95f) && (fVar2 >= 0.05f && fVar2 <= 0.95f)) && (fVar1 >= 0.05f && fVar1 <= 0.95f)) && (fVar3 >= 0.05f && fVar3 <= 0.95f))
	{
		return true;
	}
	return false;
}

bool func_66()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2285, 3))
	{
		return true;
	}
	return false;
}

bool func_67()
{
	if (Global_16748)
	{
		return true;
	}
	return false;
}

bool func_68()
{
	if (_get_number_of_instances_of_streamed_script(joaat("paparazzo3a")) > 0)
	{
		return true;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("paparazzo3b")) > 0)
	{
		return true;
	}
	return false;
}

auto func_69()
{
	func_70();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_70()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_73(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_72(PLAYER::PLAYER_PED_ID());
			if (func_71(iVar0) && (!func_74(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_71(Global_101154.f_1826.f_539.f_3549))
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

int func_71(int iParam0)
{
	return iParam0 < 3;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_73(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_73(int iParam0)
{
	if (func_71(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_74(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_75(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

bool func_76()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					GAMEPLAY::SET_BIT(&iVar0, false);
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

void func_77()
{
	if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8739.f_99, 2))
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_8739.f_99), 2);
	}
	iLocal_248 = 0;
	iLocal_237 = func_31();
	iLocal_83[0] = 249;
	iLocal_83[1] = 250;
	iLocal_83[2] = 251;
	iLocal_83[3] = 252;
	iLocal_83[4] = 253;
	iLocal_83[5] = 254;
	iLocal_83[6] = 255;
	iLocal_83[7] = 256;
	iLocal_83[8] = 257;
	iLocal_83[9] = 258;
	iLocal_83[10] = 259;
	iLocal_83[11] = 260;
	iLocal_83[12] = 261;
	iLocal_83[13] = 262;
	iLocal_83[14] = 263;
	iLocal_83[15] = 264;
	iLocal_83[16] = 265;
	iLocal_83[17] = 266;
	iLocal_83[18] = 267;
	iLocal_83[19] = 268;
	iLocal_83[20] = 269;
}

