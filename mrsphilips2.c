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
	vector3 vLocal_22 = 0;
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
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	vector3 vLocal_58 = 0;
	vector3 vLocal_61 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<61> Local_66 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	vector3 vLocal_133 = 0;
	vector3 vLocal_136 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 16;
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
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	int iLocal_308 = 0;
	struct<61> Local_309 = 0;
#endregion

void main()
{
	vector3 vVar0;
	Vector3 fVar3;
	
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
	vLocal_58 = {0f, 0f, 0f};
	vLocal_61 = {0f, 0f, 0f};
	iLocal_64 = -1;
	vLocal_133 = {1990.67f, 3810.16f, 31.24f};
	vLocal_136 = {1973.84f, 3814.89f, 32.43f};
	Local_66 = {Local_309};
	func_705(&Local_66);
	func_704();
	set_mission_flag(1);
	if (has_force_cleanup_occurred(19))
	{
		func_703("Force cleanup [TERMINATING]");
		func_686(1);
		func_671();
	}
	if (!func_670())
	{
		if (!is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			func_703("Player not in a vehicle [TERMINATING]");
			func_686(1);
			func_671();
		}
		else
		{
			iLocal_130 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (func_669(player_ped_id(), 68.16914f, -1558.958f, 29.46904f, 1) < 10f)
			{
				Global_91278.f_12[0] = 0;
			}
			else if (func_669(player_ped_id(), 589.4399f, 2736.708f, 42.03316f, 1) < 10f)
			{
				Global_91278.f_12[0] = 1;
			}
			else if (func_669(player_ped_id(), -488.774f, -344.5721f, 34.36356f, 1) < 10f)
			{
				Global_91278.f_12[0] = 2;
			}
			else if (func_669(player_ped_id(), 288.8808f, -585.4728f, 43.15428f, 1) < 10f)
			{
				Global_91278.f_12[0] = 3;
			}
			else if (func_669(player_ped_id(), 304.8294f, -1383.674f, 31.67744f, 1) < 10f)
			{
				Global_91278.f_12[0] = 4;
			}
			else
			{
				Global_91278.f_12[0] = 5;
			}
		}
	}
	else
	{
		if (Global_91278.f_12[0] == 0)
		{
			vVar0 = {68.16914f, -1558.958f, 29.46904f};
			fVar3 = 49.90575f;
			func_666(51, 0);
		}
		else if (Global_91278.f_12[0] == 1)
		{
			vVar0 = {589.4399f, 2736.708f, 42.03316f};
			fVar3 = -175.7105f;
			func_666(52, 0);
		}
		else if (Global_91278.f_12[0] == 2)
		{
			vVar0 = {-488.774f, -344.5721f, 34.36356f};
			fVar3 = 82.4042f;
			func_666(53, 0);
		}
		else if (Global_91278.f_12[0] == 3)
		{
			vVar0 = {288.8808f, -585.4728f, 43.15428f};
			fVar3 = -20.80707f;
			func_666(54, 0);
		}
		else if (Global_91278.f_12[0] == 4)
		{
			vVar0 = {304.8294f, -1383.674f, 31.67744f};
			fVar3 = -41.11603f;
			func_666(55, 0);
		}
		else
		{
			vVar0 = {1126.194f, -1481.486f, 34.7016f};
			fVar3 = -91.43369f;
			func_666(56, 0);
		}
		func_665(vVar0, fVar3, 1, 0);
		func_663(1, 1);
		request_model(joaat("rumpo2"));
		while (!has_model_loaded(joaat("rumpo2")))
		{
			wait(0);
		}
		clear_area(vVar0, 10f, 1, 0, 0, false);
		iLocal_130 = create_vehicle(joaat("rumpo2"), vVar0, fVar3, 1, true);
		set_vehicle_on_ground_properly(iLocal_130);
		func_661(iLocal_130, -1, 1);
		func_660(0);
		iLocal_139 = 0;
		iLocal_140 = 0;
		iLocal_141 = 0;
		wait(250);
		func_659(1, 1, 1);
	}
	while (true)
	{
		wait(0);
		_0x208784099002BC30("SF_DG", 0);
		func_646(Local_66.f_9, 0, 0, 0, 0, 0);
		_0xAF66DCEE6609B148();
		switch (iLocal_127)
		{
			case 0:
				func_642();
				break;
			
			case 1:
				func_633();
				break;
			
			case 2:
				func_6();
				break;
			
			case 3:
				func_1();
				break;
		}
	}
}

void func_1()
{
	switch (iLocal_128)
	{
		case 0:
			clear_prints();
			if (func_5(iLocal_130))
			{
				func_686(1);
			}
			else
			{
				func_3("MRSP2_F_01", 1);
			}
			iLocal_128 = 1;
			break;
		
		case 1:
			if (func_2())
			{
				func_671();
			}
			break;
	}
}

bool func_2()
{
	if (Global_3)
	{
		return true;
	}
	if (Global_91278 == 7 || Global_91278 == 8)
	{
		return true;
	}
	return false;
}

void func_3(char* sParam0, int iParam1)
{
	func_4(sParam0);
	func_686(iParam1);
}

void func_4(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (get_length_of_literal_string(sParam0) <= 16)
		{
			StringCopy(&Global_69721, sParam0, 16);
			StringCopy(&Global_69725, "", 16);
			if (_is_recording())
			{
				_stop_recording_and_save_clip();
			}
		}
	}
}

bool func_5(int iParam0)
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

void func_6()
{
	switch (iLocal_128)
	{
		case 0:
			func_632("TMOM_2_RCM", 0);
			iLocal_129 = 0;
			iLocal_128 = 1;
			break;
		
		case 1:
			switch (iLocal_129)
			{
				case 0:
					request_anim_dict("rcmtmom_2leadinout");
					if (func_624(1, 1093140480, 0) && has_anim_dict_loaded("rcmtmom_2leadinout"))
					{
						if (!_does_door_exist(1736361794))
						{
							add_door_to_system(1736361794, joaat("v_ilev_trevtraildr"), 1972.77f, 3815.37f, 33.66f, 1, 1, 0);
						}
						start_cutscene(2048);
						_0x48621C9FCA3EBD28(1);
						func_623(500, 0);
						iLocal_129++;
					}
					break;
				
				case 1:
					if (is_cutscene_playing())
					{
						func_620(vLocal_136, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						iLocal_129++;
					}
					break;
				
				case 2:
					if (is_cutscene_playing())
					{
						if (can_set_exit_state_for_camera(0))
						{
							_0x81CBAE94390F9F89();
							iLocal_308 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
							set_cam_params(iLocal_308, 1973.856f, 3818.222f, 34.3958f, -89.4995f, 0f, 65.3191f, 50f, false, 1, 1, 2);
							set_cam_params(iLocal_308, 1973.856f, 3818.222f, 34.3958f, -89.4995f, 0f, 65.3191f, 50f, false, 1, 1, 2);
							render_script_cams(true, false, 3000, 1, 0, 0);
						}
						if (can_set_exit_state_for_registered_entity("Trevor", false))
						{
							iLocal_142 = create_synchronized_scene(1973.909f, 3817.762f, 33.438f, 0f, 0f, -59.4f, 2);
							set_synchronized_scene_looped(iLocal_142, false);
							task_synchronized_scene(player_ped_id(), iLocal_142, "rcmtmom_2leadinout", "tmom_2_leadout_loop", 1000f, -1000f, 5, 0, 1000f, 0);
							_0x2208438012482A1A(player_ped_id(), 0, 0);
							func_619(&uLocal_143, 0, player_ped_id(), "TREVOR", 0, 1);
						}
					}
					else
					{
						func_617(&uLocal_143, "TMOMAUD", "TMOM_2_RCMLO", 3, 1, 0);
						func_7(1);
					}
					break;
			}
			break;
	}
}

void func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		func_239(221, 1);
		func_228(1, 0, 0, 0);
	}
	else
	{
		func_228(1, 1, 1, 1);
	}
	func_33(111, 1);
	func_8(&(Global_101154.f_1826.f_539), 2, 40);
	func_671();
}

bool func_8(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	var uVar99;
	var uVar102;
	var uVar103;
	var uVar106;
	
	if (!is_bit_set(Global_101154.f_7775.f_99.f_219[0], 9))
	{
		iVar0 = Global_101154.f_17223[iParam1];
		if (iVar0 == 11)
		{
			return false;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return false;
		}
	}
	Global_101154.f_17223[iParam1] = iParam2;
	*uParam0.f_1524[iParam1] = func_22();
	if (!func_21(iParam2, uParam0.f_1528[iParam1 /*3*/], uParam0.f_1538[iParam1]))
	{
		return false;
	}
	if (!func_20(*(uParam0.f_1528[iParam1 /*3*/]), 0f, 0f, 0f, 0))
	{
		if (!func_20(Global_89782[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_9(iParam1, iParam2, &Var1, &uVar99, &uVar102, &uVar103, &uVar106))
			{
				Global_90747[iParam1 /*98*/] = {Var1};
			}
		}
	}
	*uParam0.f_1542[iParam1] = 0;
	*(uParam0.f_1546[iParam1 /*3*/]) = {0f, 0f, 0f};
	*uParam0.f_1556[iParam1] = 0;
	return true;
}

int func_9(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	*uParam2.f_3 = 1000;
	*uParam2.f_1 = 0;
	*uParam2.f_84 = 255;
	*uParam2.f_85 = 255;
	*uParam2.f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = {Global_90747[iParam0 /*98*/]};
			if (Global_91042[iParam0] != 2)
			{
				if (is_point_in_angled_area(Global_91050[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, true))
				{
					if (Global_91042[iParam0] == 1)
					{
						*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
						*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
						if (vmag2(*uParam3) > 5f * 5f)
						{
							*uParam3 = {0f, 0f, 0f};
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
				*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
				if (vmag2(*uParam3) < 0.5f * 0.5f)
				{
					*uParam3 = {*uParam3 * Vector(1.5f, 1.5f, 1.5f)};
				}
			}
			else
			{
				*uParam3 = {0f, 0f, 0f};
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = {Global_90747[iParam0 /*98*/]};
			if (Global_91042[iParam0] != 2)
			{
				*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
				*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
				if (vmag2(*uParam3) < 0.5f * 0.5f)
				{
					*uParam3 = {*uParam3 * Vector(1.5f, 1.5f, 1.5f)};
				}
			}
			else
			{
				*uParam3 = {0f, 0f, 0f};
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = {Global_90747[iParam0 /*98*/]};
			if (Global_91042[iParam0] != 2)
			{
				*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
				*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
				if (vmag2(*uParam3) < 0.5f * 0.5f)
				{
					*uParam3 = {*uParam3 * Vector(1.5f, 1.5f, 1.5f)};
				}
			}
			else
			{
				*uParam3 = {0f, 0f, 0f};
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {37.43f, -23.81f, 0f};
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f)};
			*uParam4 = 1.27f - 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_9(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_9(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 5f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_11(iParam0, uParam2, 2);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("frogger");
			*uParam2.f_5 = 34;
			*uParam2.f_6 = 34;
			*uParam2.f_7 = 0;
			*uParam2.f_8 = 0;
			*uParam2.f_9 = 0;
			*uParam2.f_11[0] = 1;
			*uParam2.f_11[1] = 1;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 1;
			*uParam2.f_11[4] = 1;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam5 = {0f, 50f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f)};
			*uParam4 = 246.1684f - 90f;
			return 1;
			break;
		
		case 56:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = {Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f)};
			*uParam4 = 141.28f - 90.0339f;
			return 1;
			break;
		
		case 12:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("taxi");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam5 = {0f, 5f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 15f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 15f, 0f};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_9(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_11(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {21.6401f, 38.5601f, 1.9708f};
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = {0f, 50f, 0f};
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_11(iParam0, uParam2, 1);
			*uParam2.f_91 = 2;
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_11(iParam0, uParam2, 2);
			*uParam2.f_91 = 2;
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {-2.72f, 0.45f, 1f};
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = {Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f)};
			*uParam4 = 0.72f - 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = {Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f)};
			*uParam4 = 2.23f - 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = {Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f)};
			*uParam4 = -1f - 97.2736f;
			return 1;
			break;
		
		case 40:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {16.5182f, -8.5576f, -2.3291f};
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("polmav");
			*uParam2.f_11[0] = 1;
			*uParam2.f_11[1] = 1;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 1;
			*uParam2.f_11[4] = 1;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {16.5182f, -8.5576f, -2.3291f};
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {2.5f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {2.5f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f)};
			*uParam4 = 246.1684f - 90f;
			return 1;
			break;
		
		case 43:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f)};
			*uParam4 = 247.4806f - 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = {Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f)};
			*uParam4 = 253.776f - 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = {Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f)};
			*uParam4 = 2.62f - 299.0519f;
			return 1;
			break;
		
		case 47:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("cavalcade");
			*uParam2.f_5 = 0;
			*uParam2.f_6 = 0;
			*uParam2.f_7 = 0;
			*uParam2.f_8 = 0;
			*uParam2.f_9 = 0;
			StringCopy(uParam2.f_27, "22LJK483", 16);
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam5 = {0f, 10f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {-1.5f, 35f, 3f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {3.8721f, -5.9568f, 0f};
			*uParam4 = 164.2466f - 180f;
			return 1;
			break;
		
		case 50:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 10f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = {Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f)};
			*uParam4 = 310.4708f - 220.9554f;
			return 1;
			break;
		
		case 52:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {-2.9117f, -15.0499f, -0.3468f};
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = {Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f)};
			*uParam4 = 64.1848f - 180f;
			return 1;
			break;
		
		case 65:
		case 54:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("frogger2");
			*uParam2.f_5 = 40;
			*uParam2.f_6 = 0;
			*uParam2.f_7 = 0;
			*uParam2.f_8 = 0;
			*uParam2.f_9 = 0;
			*uParam2.f_11[0] = 1;
			*uParam2.f_11[1] = 1;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 1;
			*uParam2.f_11[4] = 1;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam2.f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = {5.5414f, -6.6035f, 1.0473f};
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = {5.7209f, -12.3958f, 1.0746f};
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
			*uParam4 = get_random_float_in_range(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_9(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("scorcher");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam5 = {1f, 12.5f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_9(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {5f, 20f, 0f};
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_9(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 30f, 0f};
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0.1f;
			*uParam5 = {0.1f, 0.1f, 0.1f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {-1.9002f, 1.205f, -0.3537f};
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_11(iParam0, uParam2, 1);
			*uParam5 = {0f, 0.1f, 0f};
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_9(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_9(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0.1f;
			*uParam5 = {0.1f, 0.1f, 0.1f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam5 = {0f, 0f, 0f};
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_9(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_9(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_9(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {3.2267f, 1.0966f, -0.354f};
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {-13.7322f, 1.8783f, 1.0593f};
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("tropic");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam2.f_11[0] = 0;
			*uParam2.f_11[1] = 0;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 0;
			*uParam2.f_11[4] = 0;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 0f, 0f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {15.4538f, -8.711f, 5.79f};
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_9(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-8.1f, -9.01f, 0.4439f};
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {18.8468f, 40.7721f, 0f};
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f)};
			*uParam4 = 177.259f - 180f - 69f;
			return 1;
			break;
		
		case 116:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {1.7826f, 12.2098f, -0.6964f};
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {11.8705f, -1.4684f, -1.6487f};
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {-13.1578f, 16.3962f, 0.6396f};
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {-21.0518f, 0.5037f, 0.4091f};
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {10.8971f, 2.0809f, -0.7983f};
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {79.9901f, -52.83f, -0.3533f};
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
			*uParam4 = get_random_float_in_range(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_9(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_9(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_9(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_9(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {2.4845f, 2.3286f, -0.383f};
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_9(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 15f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_9(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 40f, 0f};
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_11(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_9(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_9(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_9(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_9(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_9(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 15f, 0f};
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_9(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_9(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_9(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-13.2213f, 16.331f, 0f};
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_9(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {10.3876f, -10.3585f, -1.2183f};
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {1.0793f, 15.631f, 1.1744f};
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_9(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0.1f;
			*uParam5 = {0.1f, 0.1f, 0.1f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_9(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_9(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_11(iParam0, uParam2, 1);
			*uParam5 = {0f, 0.1f, 0f};
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_9(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_9(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_10(iParam0, uParam2, 2);
			*uParam2.f_91 = 2;
			*uParam3 = {-2.19f, -1.23f, 0f};
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam2.f_2 = 0f;
			*uParam3 = {-1.3547f, 2.1615f, -0.3723f};
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_9(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-4.2075f, 1.0943f, 0f};
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam2.f_2 = 0f;
			*uParam3 = {2.291f, 1.0879f, 0.0635f};
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("taxi");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {-0.9714f, 1.6112f, -0.2773f};
			*uParam4 = -7.0583f;
			*uParam5 = {Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f)};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("taxi");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f)};
			*uParam4 = 89.0026f - -1.5f;
			*uParam5 = {Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f)};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f)};
			*uParam4 = 357.1407f - 84.96f;
			return 1;
			break;
		
		case 216:
			if (func_9(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-2.1752f, -2.3781f, 0f};
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_9(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-3.9761f, 0.2542f, 0f};
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f)};
			*uParam4 = 162.098f - 109.0206f;
			return 1;
			break;
		
		case 192:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f)};
			*uParam4 = 302.182f - 105.981f;
			return 1;
			break;
		
		case 193:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f)};
			*uParam4 = 302.182f - 172.9187f;
			return 1;
			break;
		
		case 194:
			if (func_9(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {12.74f, 3.26f, 0f};
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_9(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-1.34f, 7.684f, 0f};
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.4055f, -1607.568f, 44.4802f) - Vector(28.2858f - 0.5f + 1.5f, -1607.286f, 2.8895f)};
			*uParam4 = 318.2674f - 310.879f - 180f;
			return 1;
			break;
		
		case 201:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f)};
			*uParam4 = 322.6286f - 130.879f;
			return 1;
			break;
		
		case 202:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {91.3579f, 18.1788f, -0.1911f};
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {12.5073f, -3.4625f, -0.3702f};
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_9(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {21.87f, -10.5f, 0f};
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_9(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f)};
			*uParam4 = 270.1767f - 160f - 180f;
			return 1;
			break;
		
		case 227:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {-19.8544f, -10.4863f, -0.0334f};
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {21.5897f, -6.8544f, 0.6015f};
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {-7.6041f, 0.1369f, 0.5812f};
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {-1.6f, 7.6802f, 0.6947f};
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {22.322f, -6.2034f, 0f};
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {-1.2901f, -5.5798f, -0.0357f};
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_9(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-4.0739f, 7.7692f, -0.2984f};
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_9(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-5.778f, -4.2397f, 0.9091f};
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_9(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {0.6968f, 1.1033f, 0.912f};
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 8f, 0.6f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_9(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_9(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_9(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam2.f_97 = 0;
				*uParam2 = joaat("faggio2");
				*uParam2.f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_10(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 8f, 0.6f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_9(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_9(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				*uParam2.f_97 = 0;
				*uParam2 = joaat("tropic");
				*uParam2.f_11[0] = 0;
				*uParam2.f_11[1] = 0;
				*uParam2.f_11[2] = 1;
				*uParam2.f_11[3] = 0;
				*uParam2.f_11[4] = 0;
				*uParam2.f_11[5] = 1;
				*uParam2.f_11[6] = 1;
				*uParam2.f_11[7] = 1;
				*uParam2.f_11[8] = 1;
			}
			else
			{
				*uParam2.f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = {Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f)};
			*uParam3.f_2 += 0.5f;
			*uParam4 = 340.0835f - 4.44f;
			*uParam3 = {Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f)};
			*uParam4 = 23.6441f + 90f;
			*uParam3 = {-4.0164f, 19.9594f, 0f};
			*uParam4 = 113.6465f;
			*uParam3 = {*uParam3 * Vector(1.1f, 1.1f, 1.1f)};
			return 1;
			break;
		
		case 247:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = {9.8707f, 13.0084f, 0f};
			*uParam4 = -114f - 43f + 133f;
			return 1;
			break;
		
		case 288:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = {-7.7078f, 23.9099f, 1.7307f};
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {-4.5662f, -3.2485f, 0.9455f - 1.7f};
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f)};
			*uParam4 = 315.9865f - 122.5269f;
			return 1;
			break;
		
		case 310:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {10.5999f, 3.3997f, 1.0212f};
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = {-13.2279f, -7.5348f, 0f};
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = {11.9596f, 0.345f, -1.0016f};
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = {3.424f, 7.6462f, 0.8227f};
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f)};
			*uParam4 = 14.0848f - 120f;
			return 1;
			break;
		
		case 257:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f)};
			*uParam4 = 144.9416f - 171.253f;
			return 1;
			break;
		
		case 258:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f)};
			*uParam4 = 130.9896f - 10.247f;
			return 1;
			break;
		
		case 314:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = {0f, 150f, 20f};
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(32.5629f, -387.5143f, -147.166f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 341.4322f - 133f;
			return 1;
			break;
		
		case 111:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(24.4283f, -689.1462f, -1306.782f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 214.6826f - 33f;
			return 1;
			break;
		
		case 153:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.3324f, 254.0631f, -708.9244f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 115.2022f - -176.25f;
			return 1;
			break;
		
		case 154:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.3324f, 254.0631f, -708.9244f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 115.2022f - -147.192f;
			return 1;
			break;
		
		case 165:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(35.0054f, -441.1681f, -1100.878f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 297.5568f - -144.622f;
			return 1;
			break;
		
		case 159:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(36.3852f, -199.5354f, -825.3141f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 29.4869f - -62.5f;
			return 1;
			break;
		
		case 160:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(36.2086f, -144.1027f, -730.8218f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 28.532f - 119f;
			return 1;
			break;
		
		case 167:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(31.7307f, -523.2257f, -1144.174f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 299.2956f - -22.32f;
			return 1;
			break;
		
		case 152:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(60.9436f, 314.6989f, -1421.8f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 335.4134f - 72f;
			return 1;
			break;
		
		case 157:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.469f, 255.3143f, -706.187f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 117.3069f - 37.27f;
			return 1;
			break;
		
		case 225:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.7165f, -1677.734f, 185.4888f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 54.2538f - -83.8f;
			return 1;
			break;
		
		case 218:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.3218f, -1405.159f, -17.556f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 91.3098f - -70.4124f;
			return 1;
			break;
		
		case 219:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(30.2611f, -1492.151f, -219.3172f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 139.2572f - -12f;
			return 1;
			break;
		
		case 220:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(25.3018f, -1811.693f, -22.6138f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 141.0423f - -117.356f;
			return 1;
			break;
		
		case 206:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(208.5337f, 773.6719f, 164.1308f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 136.3104f - -36f;
			return 1;
			break;
		
		case 207:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(108.9995f, 396.924f, -263.3745f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 284.4611f - -95.588f;
			return 1;
			break;
		
		case 274:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(139.5782f, 2030.446f, -1883.836f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 340.5746f - 9f;
			return 1;
			break;
		
		case 312:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(10.0296f, 6560.557f, -200.684f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 134.5505f - 110.5931f;
			return 1;
			break;
		
		case 271:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(6.4647f, -1083.751f, -1278.023f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 115.8919f - 26.3597f;
			return 1;
			break;
		
		case 248:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(102.4417f, 164.5124f, 325.8113f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 68.4108f - 10.77f;
			return 1;
			break;
		
		case 242:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(56.616f, -122.9896f, -1622.22f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 210.8653f - 13.7207f;
			return 1;
			break;
		
		case 254:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(53.0019f, -213.7796f, 172.442f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 250.3032f - -40f;
			return 1;
			break;
		
		case 287:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(17.3426f, -836.0328f, -887.9977f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 270.8607f - -81f;
			return 1;
			break;
		
		case 286:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(4.8359f, -1182.704f, -1264.218f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 298.4328f - -150f;
			return 1;
			break;
		
		case 239:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(104.8218f, 289.0073f, -80.4564f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 247.6446f - -122f;
			return 1;
			break;
		
		case 243:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.2762f, -1477.282f, 434.9171f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 228.6353f - 18f;
			return 1;
			break;
		
		case 244:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.2762f, -1477.282f, 434.9171f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 228.6353f - -51f;
			return 1;
			break;
		
		case 249:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(103.1881f, 177.7729f, 288.977f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 68.9831f - 138f - 180f;
			return 1;
			break;
		
		case 273:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(32.7794f, -432.4635f, -161.4589f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 340.0368f - -153f;
			return 1;
			break;
		
		case 92:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(202.1143f, 828.3607f, -806.8813f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 101.1612f - -54.347f;
			return 1;
			break;
		
		case 103:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(12.0174f, -1108.081f, -1724.72f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 319.8931f - 143.4931f;
			return 1;
			break;
		
		case 109:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(10.2248f, -628.4899f, -1859.505f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 229.0784f - 99f;
			return 1;
			break;
		
		case 81:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(53.1469f, 90.4242f, -1393.442f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 123.1782f - -45f;
			return 1;
			break;
		
		case 95:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(101.921f, 186.1865f, 370.5876f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 159.7861f - 70f;
			return 1;
			break;
		
		case 97:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(45.9871f, -188.5636f, -1391.156f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 36.5172f - -45f;
			return 1;
			break;
		
		case 134:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(46.0567f, 3076.742f, 2001.918f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 328.101f - -33.128f;
			return 1;
			break;
		
		case 88:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(60.9442f, 314.7191f, -1421.821f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 336.5938f - -132f;
			return 1;
			break;
		
		case 306:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(37.4888f, 5643.726f, -569.3535f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 296.1685f - get_heading_from_vector_2d(7.4998f, -7.4995f);
			return 1;
			break;
		
		case 307:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(47.4526f, 4717.728f, -1555.593f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 236.223f - get_heading_from_vector_2d(-10.6345f, -0.7246f);
			return 1;
			break;
		
		case 308:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(22.7549f, 4629.148f, -1553.861f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 332.7842f - get_heading_from_vector_2d(3.4271f, 13.6787f);
			return 1;
			break;
		
		case 278:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(35.9161f, -1009.745f, 631.8275f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 98.8128f - -33.77f;
			return 1;
			break;
		
		case 279:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(234.6825f, 900.8749f, -111.9033f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 6.1087f - 155.68f;
			return 1;
			break;
		
		case 240:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(33.5351f, 3636.151f, 1546.323f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 298.4009f - -4.124f;
			return 1;
			break;
		
		case 241:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(30.512f, 6439.667f, -179.4242f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 225.5593f - 108f;
			return 1;
			break;
		
		case 264:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.2977f, -1390.545f, 486.7419f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 178.298f - -90f;
			return 1;
			break;
		
		case 266:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(10.5662f, 143.2342f, -3052.895f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 85.3429f - 68.8227f;
			return 1;
			break;
		
		case 267:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(39.9155f, 4934.08f, 2202.375f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 314.2654f - 56.2037f;
			return 1;
			break;
		
		case 269:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.149f, -782.0952f, 401.2502f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 179.9905f - -106.6605f;
			return 1;
			break;
		
		case 246:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(3.3919f, -1534.507f, -1195.256f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 305.8221f - -165f;
			return 1;
			break;
		
		case 263:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(12.8792f, -1241.213f, -573.3765f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 316.9941f - -171f;
			return 1;
			break;
		
		case 259:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(4.0002f, -1298.539f, -724.429f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 230.5715f - -32.488f;
			return 1;
			break;
		
		case 260:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(61.203f, 250.8387f, -1309.114f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 10.7756f - -29.093f;
			return 1;
			break;
		
		case 261:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.764f, 60.3233f, 917.6678f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 148.021f - 229.6085f;
			return 1;
			break;
		
		case 270:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {Vector(350f, 8588f, 2919f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = get_random_float_in_range(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_11(iParam0, uParam2, 0);
			*uParam3 = {-48.5171f, 28.4211f, 3.0057f};
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_10(int iParam0, var uParam1, int iParam2)
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

bool func_11(int iParam0, var uParam1, int iParam2)
{
	if (Global_90747[iParam0 /*98*/] == 0)
	{
		func_10(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("blimp"))
	{
		func_10(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (func_19(iParam0))
	{
		func_10(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_boat(Global_90747[iParam0 /*98*/]))
	{
		func_10(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_plane(Global_90747[iParam0 /*98*/]))
	{
		func_10(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_heli(Global_90747[iParam0 /*98*/]))
	{
		func_10(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_train(Global_90747[iParam0 /*98*/]))
	{
		func_10(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (iParam2 == 1)
	{
		if (!is_this_model_a_car(Global_90747[iParam0 /*98*/]))
		{
			func_10(iParam0, uParam1, iParam2);
			*uParam1.f_91 = iParam2;
			return true;
		}
	}
	else if (iParam2 == 2)
	{
		if (!is_this_model_a_bike(Global_90747[iParam0 /*98*/]))
		{
			func_10(iParam0, uParam1, iParam2);
			*uParam1.f_91 = iParam2;
			return true;
		}
	}
	if (!func_12(Global_90747[iParam0 /*98*/], 0))
	{
		func_10(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (iParam2 != 0)
	{
		func_10(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		if (Global_90747[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = {Global_90747[iParam0 /*98*/]};
			*uParam1.f_91 = 0;
			return false;
		}
	}
	else
	{
		func_10(iParam0, uParam1, 1);
		*uParam1.f_91 = 1;
		if (Global_90747[iParam0 /*98*/] == *uParam1)
		{
			func_10(iParam0, uParam1, 1);
			*uParam1.f_91 = 1;
			return true;
		}
		func_10(iParam0, uParam1, 2);
		*uParam1.f_91 = 2;
		if (Global_90747[iParam0 /*98*/] == *uParam1)
		{
			func_10(iParam0, uParam1, 2);
			*uParam1.f_91 = 2;
			return true;
		}
		*uParam1 = {Global_90747[iParam0 /*98*/]};
		*uParam1.f_91 = 0;
		return false;
	}
	func_10(iParam0, uParam1, iParam2);
	*uParam1.f_91 = iParam2;
	return true;
}

bool func_12(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!is_model_a_vehicle(iParam0))
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !network_is_game_in_progress())) || (iParam0 == joaat("buffalo3") && !network_is_game_in_progress())) || (iParam0 == joaat("gauntlet2") && !network_is_game_in_progress())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !network_is_game_in_progress())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_18())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < get_num_dlc_vehicles())
		{
			if (get_dlc_vehicle_data(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_is_dlc_data_empty(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_17() && !func_16()) && !func_15()) && !func_14()) && !func_18())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_15())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_13(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = _get_posix_time();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_14()
{
	return false;
}

bool func_15()
{
	return true;
}

bool func_16()
{
	return true;
}

bool func_17()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_18()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				set_bit(&iVar0, 2);
				set_bit(&iVar0, 4);
				set_bit(&iVar0, 6);
				set_bit(&Global_25, 2);
				set_bit(&Global_25, 4);
				set_bit(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					set_bit(&iVar0, false);
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

bool func_19(int iParam0)
{
	if (Global_90747[iParam0 /*98*/] == joaat("blimp") || Global_90747[iParam0 /*98*/] == joaat("blimp2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("submersible") || Global_90747[iParam0 /*98*/] == joaat("submersible2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("freight"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("packer"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("asea2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("burrito2") || Global_90747[iParam0 /*98*/] == joaat("fbi2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("entityxf") && !Global_101154.f_7775.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("cheetah") && !Global_101154.f_7775.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("policeb") && !Global_101154.f_7775.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("ztype") && !Global_101154.f_7775.f_330[9 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("polmav") && !Global_101154.f_7775.f_330[9 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("jb700") && !Global_101154.f_7775.f_330[10 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("monroe") && !Global_101154.f_7775.f_330[11 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == 1938952078)
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("handler"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("monroe"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("phantom"))
	{
		return true;
	}
	if (((Global_90747[iParam0 /*98*/] == joaat("gauntlet") && !Global_101154.f_7775.f_330[80 /*6*/]) && !Global_101154.f_7775.f_330[81 /*6*/]) && !Global_101154.f_7775.f_330[82 /*6*/])
	{
		return true;
	}
	return false;
}

int func_20(vector3 vParam0, vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_21(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = {115.1569f, -1286.684f, 28.2613f};
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_21(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_21(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = {1432.34f, -1887.383f, 70.5768f};
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = {1666.204f, 1967.25f, 143.3213f};
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = {-1440.22f, -127.02f, 50f};
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = {135.055f, -1759.64f, 27.8957f};
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = {687.6992f, -1744.03f, 28.3624f};
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = {56.5117f, -744.6122f, 43.1356f};
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = {506.485f, -1884.967f, 24.764f};
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = {1555.958f, 953.6136f, 77.2063f};
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = {220.72f, -64.4177f, 68.2922f};
			*fParam2 = 250.4535f - 360f;
			return 1;
			break;
		
		case 74:
			*uParam1 = {2048.07f, 3840.84f, 34.2238f};
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = {-464.22f, -1592.98f, 38.73f};
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = {-9f, 508.1f, 173.6278f};
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = {72.2278f, -1464.68f, 28.2915f};
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = {763f, -906f, 24.2312f};
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = {257.9167f, -1120.786f, 28.3684f};
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = {422.5858f, -978.6332f, 69.7073f};
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = {294.8521f, 882.9366f, 197.8527f};
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = {1495.595f, -1848.821f, 70.2075f};
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = {2897.554f, 4032.241f, 50.1419f};
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = {1397f, 3725.8f, 33.0673f};
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = {709.0244f, -2916.479f, 5.0589f};
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = {643.5248f, -2917.325f, 5.1337f};
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = {595.2742f, -2819.183f, 5.0559f};
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = {314.4171f, 965.207f, 208.4024f};
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = {3321.537f, 4975.455f, 25.9097f};
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
			*fParam2 = 42f + 180f;
			return 1;
			break;
		
		case 50:
			*uParam1 = {-731.3261f, 106.68f, 54.7169f};
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = {736.9869f, -2050.678f, 28.2718f};
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = {262.5499f, -2540.15f, 4.8433f};
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = {118.0988f, -1264.916f, 32.3637f};
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = {37.5988f, -1351.52f, 28.2954f};
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = {-558.2693f, 261.1167f, 82.07f};
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = {-196.9999f, 507.9999f, 132.477f};
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = {1312.01f, -1645.87f, 51.2f};
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = {2091.258f, 4714.852f, 40.1936f};
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = {1762.59f, 3247.212f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = {1764.013f, 3252.902f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_22()
{
	var uVar0;
	
	func_32(&uVar0, get_clock_seconds());
	func_31(&uVar0, get_clock_minutes());
	func_30(&uVar0, get_clock_hours());
	func_25(&uVar0, get_clock_day_of_month());
	func_24(&uVar0, get_clock_month());
	func_23(&uVar0, get_clock_year());
	return uVar0;
}

void func_23(var uParam0, int iParam1)
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

void func_24(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_25(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(*uParam0);
	iVar1 = func_27(*uParam0);
	if (iParam1 < 1 || iParam1 > func_26(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_26(int iParam0, int iParam1)
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

var func_27(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_28(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_29(int iParam0)
{
	return (iParam0 && 15);
}

void func_30(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_31(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_32(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_226();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_100241[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_100241[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_100241[iVar0 /*10*/].f_6)
	{
		return;
	}
	func_200(iVar0, 0);
	set_bit(&Global_69737, true);
	if (Global_100241[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		func_199(&(Global_100241[iVar0 /*10*/].f_9));
	}
	if (iParam1)
	{
		if (is_player_playing(player_id()))
		{
			set_player_wanted_level(player_id(), false, 0);
			set_player_wanted_level_now(player_id(), 0);
			start_firing_amnesty(5000);
		}
	}
	func_187(iVar0, 1, 0, 0);
	func_186(0, 0);
	MemCopy(&sVar1, {func_184(iVar0)}, 4);
	func_181(&sVar1, func_182());
	func_61();
	if (is_bit_set(Global_101154.f_8706.f_25, 3))
	{
		func_60();
	}
	func_42();
	if (iParam0 == 210 || iParam0 == 211)
	{
		func_36(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		func_36(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		func_36(iParam0, 0, 0);
	}
	func_34();
}

bool func_34()
{
	if (func_35(0))
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

int func_35(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_36(int iParam0, int iParam1, int iParam2)
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
		func_40(891 + iParam0, 1, -1, 1);
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
		func_37();
	}
}

void func_37()
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
		func_39(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_38() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_34();
				}
			}
		}
	}
}

var func_38()
{
	return Global_25120;
}

int func_39(int iParam0, int iParam1)
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

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_41();
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

var func_41()
{
	return Global_1312747;
}

void func_42()
{
	func_59();
	func_51();
	func_47();
	func_46();
	func_45();
	func_44();
	Global_91315 = 0;
	Global_85786 = -1;
	clear_bit(&(Global_91278.f_20), 17);
	Global_91313 = 0;
	_disable_automatic_respawn(0);
	ignore_next_restart(0);
	set_fade_in_after_death_arrest(1);
	set_fade_out_after_arrest(1);
	set_fade_out_after_death(1);
	func_43(0);
}

void func_43(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&(Global_91278.f_20), 13);
	}
	else
	{
		clear_bit(&(Global_91278.f_20), 13);
	}
}

void func_44()
{
	Global_69729 = {0f, 0f, 0f};
	Global_69732 = 0f;
	Global_91278.f_21 = 145;
}

void func_45()
{
	StringCopy(&Global_69721, "", 16);
	StringCopy(&Global_69725, "", 16);
}

void func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_91278.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_47()
{
	Global_91278 = 13;
	Global_91278.f_1 = -1;
	Global_91278.f_2 = 0;
	Global_91278.f_30 = 0f;
	clear_bit(&(Global_91278.f_20), 25);
	Global_91312 = 0;
	func_50(0);
	func_49();
	func_48();
	Global_91278.f_18 = -1;
	Global_91278.f_19 = -1;
}

void func_48()
{
	clear_bit(&(Global_91278.f_20), 22);
	clear_bit(&(Global_91278.f_20), 8);
}

void func_49()
{
	if (Global_91278.f_16 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&(Global_91278.f_16));
		Global_91278.f_16 = 0;
	}
	if (Global_91278.f_17 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&(Global_91278.f_17));
		Global_91278.f_17 = 0;
	}
}

void func_50(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36260 = 1;
	}
	else
	{
		Global_36260 = 0;
	}
}

void func_51()
{
	func_52(&Global_95496);
}

void func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_58(uParam0.f_1);
	*uParam0.f_6 = -1;
	*uParam0.f_7 = -1;
	*uParam0.f_8 = 0f;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		*uParam0.f_9[iVar1] = -1;
		*uParam0.f_13[iVar1] = 0;
		*uParam0.f_17[iVar1] = 0;
		*uParam0.f_21[iVar1] = 0;
		func_57(uParam0.f_25[0 /*295*/][iVar1 /*98*/]);
		func_57(uParam0.f_25[1 /*295*/][iVar1 /*98*/]);
		iVar0 = 0;
		while (iVar0 < 12)
		{
			*(uParam0.f_616[iVar1 /*65*/])[iVar0] = -1;
			*(uParam0.f_616[iVar1 /*65*/].f_13)[iVar0] = -1;
			*(uParam0.f_616[iVar1 /*65*/].f_26)[iVar0] = -1;
			iVar0++;
		}
		*(uParam0.f_616[iVar1 /*65*/]).f_59 = 0;
		*(uParam0.f_616[iVar1 /*65*/]).f_60 = -99;
		*(uParam0.f_616[iVar1 /*65*/]).f_61 = 2;
		*(uParam0.f_616[iVar1 /*65*/]).f_62 = 0;
		*(uParam0.f_616[iVar1 /*65*/]).f_63 = -99;
		*(uParam0.f_616[iVar1 /*65*/]).f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			*(uParam0.f_616[iVar1 /*65*/].f_39)[iVar0] = -1;
			*(uParam0.f_616[iVar1 /*65*/].f_49)[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			*(uParam0.f_812[iVar1 /*284*/][iVar0 /*3*/]).f_1 = 0;
			*(uParam0.f_812[iVar1 /*284*/][iVar0 /*3*/]).f_2 = 0;
			*(uParam0.f_812[iVar1 /*284*/])[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			*(uParam0.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]).f_1 = 0;
			*(uParam0.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]).f_2 = 0;
			*(uParam0.f_812[iVar1 /*284*/].f_133)[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			*(uParam0.f_1665[iVar1 /*32*/])[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			*(uParam0.f_1665[iVar1 /*32*/].f_5)[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			*(uParam0.f_1665[iVar1 /*32*/].f_16)[iVar0] = 0;
			iVar0++;
		}
		*uParam0.f_1762[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			*(uParam0.f_2259[iVar1 /*15*/])[iVar0] = 0;
			*(uParam0.f_2259[iVar1 /*15*/].f_5)[iVar0] = 0;
			*(uParam0.f_2259[iVar1 /*15*/].f_10)[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			*(uParam0.f_1766[iVar1 /*164*/])[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_4)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_8)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_12)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_16)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_20)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_24)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_28)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_32)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_36)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_40)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_44)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_48)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_52)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_56)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_60)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_64)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_68)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_72)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_76)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_80)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_84)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_88)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_92)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_96)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_100)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_104)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_108)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_112)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_116)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_120)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_124)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_128)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_132)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_136)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_140)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_144)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_148)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_152)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_156)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_160)[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_56(uParam0.f_2305);
	func_54(uParam0.f_2311);
	func_53(uParam0.f_2401);
}

void func_53(var uParam0)
{
	*uParam0 = -1;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
}

void func_54(var uParam0)
{
	func_55(uParam0.f_12);
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = {0f, 0f, 0f};
	*uParam0.f_6 = 0f;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
}

void func_55(var uParam0)
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

void func_56(var uParam0)
{
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = 0f;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = -1;
}

void func_57(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0f;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		*uParam0.f_11[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_24 = 0;
	*uParam0.f_25 = 0;
	StringCopy(uParam0.f_27, "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		*uParam0.f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		*uParam0.f_81[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_84 = 0;
	*uParam0.f_85 = 0;
	*uParam0.f_86 = 0;
	*uParam0.f_87 = 0;
	*uParam0.f_88 = 0;
	*uParam0.f_89 = 0;
	*uParam0.f_90 = 0;
	*uParam0.f_91 = 0;
	*uParam0.f_93 = 0;
	*uParam0.f_94 = 0;
	*uParam0.f_95 = 0;
	*uParam0.f_92 = 0;
}

void func_58(var uParam0)
{
	*uParam0 = -15;
}

void func_59()
{
	StringCopy(&Global_93083, "", 32);
	func_52(&Global_93091);
}

void func_60()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	set_bit(&Global_2283, 25);
	set_bit(&Global_2284, 11);
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_88980[iVar0];
		if (does_entity_exist(iVar1) && !is_ped_injured(iVar1))
		{
			iVar3 = func_178(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_177(iVar1, 14, iVar2))
				{
					func_62(iVar1, 14, iVar2);
				}
				if (Global_101154.f_1826.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_101154.f_1826.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_62(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (is_ped_injured(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	Global_69311[1 /*14*/] = {func_112(iVar0, iParam1, iParam2)};
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return 0;
	}
	if (!func_177(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = {func_108(iVar0, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_62(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = {func_105(iVar0, iParam2)};
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_62(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		clear_ped_prop(iParam0, Global_69311[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = {func_108(iVar0, 0)};
		Global_69311[1 /*14*/] = {func_112(iVar0, iParam1, uVar30[iParam1])};
		if (get_number_of_ped_drawable_variations(iParam0, func_104(iParam1)) > 0 && get_number_of_ped_texture_variations(iParam0, func_104(iParam1), Global_69311[1 /*14*/].f_3) > 0)
		{
			set_ped_component_variation(iParam0, func_104(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, 0);
		}
	}
	if (func_103(iParam0, iVar0, &iVar46, 0))
	{
		func_65(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_63(iParam0, iVar0, &iVar46))
	{
		func_65(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

bool func_63(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_64(iParam1);
	if (Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 != -99)
	{
		if (!func_177(iParam0, Global_101154.f_1826.f_539[uVar0 /*65*/].f_64, Global_101154.f_1826.f_539[uVar0 /*65*/].f_63))
		{
			*iParam2 = Global_101154.f_1826.f_539[uVar0 /*65*/].f_62;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 = -99;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

bool func_65(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (is_ped_injured(iParam0) || iParam2 == -99)
	{
		return false;
	}
	Global_69310++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = get_entity_model(iParam0);
	if (iParam5 == 0)
	{
		Global_69311[1 /*14*/] = {func_112(iVar10, iParam1, iParam2)};
		if (!func_102(iParam3))
		{
			Global_69310--;
			return false;
		}
		func_95(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_93(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_93(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_88(iParam0, 1);
			if (!func_87(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = func_88(iParam0, 0);
			if (!func_86(iVar10, 14, iVar8) && !func_82(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_88(iParam0, 2);
			}
		}
		clear_all_ped_props(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = {Global_69354};
		}
		else
		{
			uVar11 = {func_108(iVar10, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_69311[1 /*14*/] = {func_112(iVar10, iVar0, uVar11[iVar0])};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, false))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = {Global_69370};
						}
						else
						{
							uVar27 = {func_105(iVar10, uVar11[iVar0])};
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_69311[1 /*14*/] = {func_112(iVar10, 14, uVar27[iVar1])};
							func_81(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
							func_95(14);
							if (Global_69310 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_73(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_65(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_72(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							set_ped_component_variation(iParam0, func_104(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_104(iVar0)));
						}
						else
						{
							set_ped_component_variation(iParam0, func_104(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
						}
						func_95(iVar0);
						if (Global_69310 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_73(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_65(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69311[1 /*14*/] = {func_112(iVar10, iVar0, func_71(iParam0, iVar0, -1))};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_103(iParam0, iVar10, &iVar4, 1))
							{
								func_65(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = {func_108(iVar10, 0)};
						func_65(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = {func_112(iVar10, 8, iVar5)};
			if (iVar5 != -99)
			{
				if (func_69(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_65(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_112(iVar10, 9, iVar6)};
			if (iVar6 != -99)
			{
				if (func_69(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_65(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_112(iVar10, 14, iVar7)};
			if (iVar7 != -99)
			{
				if (func_69(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_65(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_112(iVar10, 14, iVar8)};
			if (iVar8 != -99)
			{
				if (func_69(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_65(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_112(iVar10, 14, iVar9)};
			if (iVar9 != -99)
			{
				if (func_69(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_65(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = {func_105(iVar10, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69311[1 /*14*/] = {func_112(iVar10, 14, uVar67[iVar1])};
			func_81(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			func_95(14);
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_73(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_65(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_81(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
		func_95(iParam1);
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_73(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_65(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			set_ped_component_variation(iParam0, func_104(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_104(iParam1)));
		}
		else
		{
			set_ped_component_variation(iParam0, func_104(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
		}
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_73(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_65(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_66(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69310 == 1)
	{
		if (func_103(iParam0, iVar10, &iVar4, 0))
		{
			func_65(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_63(iParam0, iVar10, &iVar4))
		{
			func_65(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_69310--;
	return true;
}

void func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_68(iParam0, 12, iVar0))
	{
		if (func_67(iParam0, iParam1, iParam2))
		{
			uVar1 = func_64(iParam0);
			if (iParam1 == 3)
			{
				Global_101154.f_1826.f_539.f_196[uVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_101154.f_1826.f_539.f_200[uVar1] = iParam2;
			}
		}
	}
}

bool func_67(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return true;
			}
		}
	}
	return false;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	Global_69311[1 /*14*/] = {func_112(iParam0, iParam1, iParam2)};
	return is_bit_set(Global_69311[1 /*14*/].f_6, 2);
}

bool func_69(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if (*uParam4[iParam2] == iParam3)
	{
		return true;
	}
	if ((*uParam4[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return true;
	}
	if (iParam2 == 13 || (iParam2 == 14 && *uParam4[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return true;
		}
	}
	if (iParam3 == -99 || *uParam5.f_1 == -1)
	{
		return true;
	}
	if (iParam2 == 14)
	{
		uVar0 = {func_105(iParam0, *uParam4[13])};
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return true;
			}
			iVar10++;
		}
	}
	if (func_70(iParam0, iParam2, iParam3))
	{
		return true;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_87(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_86(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 0)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_82(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_87(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_86(iParam0, iParam2, iParam3))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return true;
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
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 26)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return false;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return false;
					}
				}
			}
			return true;
		}
		else if (func_82(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return false;
			}
			return true;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return true;
			}
		}
		if (func_87(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_86(iParam0, iParam2, iParam3))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 15)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_82(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

bool func_70(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return true;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_177(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_177(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_88(iParam0, iParam2);
			}
		}
		else
		{
			return func_93(iParam0, iParam1);
		}
	}
	return -99;
}

bool func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		uVar0 = func_64(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_61 = iParam1;
		return true;
	}
	return false;
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_93(iParam0, 1);
				iVar0 = func_80(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_93(iParam0, 2);
				iVar0 = func_80(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_72(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_79(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_78(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_77(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_77(iParam0, 3, 135, 150))
									{
										iVar0 = func_76(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case 79:
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_77(iParam0, 3, 209, 222))
									{
										iVar0 = func_76(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_77(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_76(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_76(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_76(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_76(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_77(iParam0, 3, 176, 191) && !func_77(iParam0, 3, 227, 242))
									{
										iVar0 = func_76(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_93(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_93(iParam0, 11);
								iVar5 = func_75(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_93(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_74(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_93(iParam0, 8);
								iVar8 = func_93(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_75(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_75(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_93(iParam0, 11);
								iVar0 = func_75(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

bool func_74(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = iParam1 - 27;
								*uParam4 = 59 + iVar0;
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = iParam1 - 27;
								*uParam4 = 43 + iVar0;
							}
						}
						return false;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return false;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = iParam1 - 43;
							*uParam4 = 27 + iVar0;
						}
						return false;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = iParam1 - 43;
								*uParam4 = 59 + iVar0;
							}
						}
						return false;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = iParam1 - 59;
							*uParam4 = 27 + iVar0;
						}
						return false;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = iParam1 - 59;
								*uParam4 = 43 + iVar0;
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = iParam1 - 59;
							*uParam4 = 27 + iVar0;
						}
						return false;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return false;
				}
			}
			break;
	}
	return true;
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = iParam2 - 9;
				iParam2 = 25 + iVar0;
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = iParam2 - 25;
				iParam2 = 9 + iVar0;
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_76(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_76(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = iParam2 - 1;
			iParam2 = 5 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = iParam2 - 5;
			iParam2 = 1 + iVar0;
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = iParam2 - 9;
			iParam2 = 25 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = iParam2 - 25;
			iParam2 = 9 + iVar0;
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= iParam3 - 1)
	{
		iVar1 = iVar0;
		if (func_68(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

bool func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_93(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return true;
	}
	return false;
}

bool func_78(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return true;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return true;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return true;
			}
			break;
	}
	return false;
}

bool func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		uVar0 = func_64(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_64 = iParam1;
		return true;
	}
	return false;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		clear_ped_prop(iParam0, iParam1);
	}
	else
	{
		set_ped_prop_index(iParam0, iParam1, iParam2, iParam3, network_is_game_in_progress());
	}
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						return (_0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 14, 3), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 14, 3), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 1, 3), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 1, 3), -1842686353, false));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						return (_0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 14, 4), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 14, 4), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 1, 4), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 1, 4), -1842686353, false));
					}
					break;
			}
			break;
	}
	return false;
}

int func_83(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_85(iParam0);
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = _get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			get_shop_ped_query_prop(iVar17, &Var0);
			if (!_is_dlc_data_empty(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_84(iParam0, func_104(iParam2));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69432.f_26[iParam2] && iParam1 == Global_69432[iParam2]) && Global_69432.f_13[iParam2] != 0)
		{
			return Global_69432.f_13[iParam2];
		}
		iVar41 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_104(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			get_shop_ped_query_component(iVar38, &Var21);
			if (!_is_dlc_data_empty(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_69432.f_13[iParam2] = Var21.f_1;
					Global_69432[iParam2] = iParam1;
					Global_69432.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

bool func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar0 = func_83(iParam0, iParam2, 1, 3);
					if (_0x341DE7ED1D2A1BFD(iVar0, -1757550583, false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar1 = func_83(iParam0, iParam2, 1, 4);
					if (_0x341DE7ED1D2A1BFD(iVar1, -1757550583, false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return true;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return true;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return true;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					return _0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 14, 3), 97230661, true);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					return _0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 14, 4), 97230661, true);
				}
			}
			break;
	}
	return false;
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_92(iParam1);
	}
	iVar1 = get_ped_prop_texture_index(iParam0, iParam1);
	return func_89(iParam0, iVar0, iVar1, iParam1);
}

int func_89(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_92(iParam3);
	}
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_91(get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_91(get_entity_model(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = get_number_of_ped_prop_drawable_variations(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= iVar2 - 1)
	{
		iVar6 = get_number_of_ped_prop_texture_variations(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 += iVar6;
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= iVar6 - 1)
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 += func_90(iParam0, iParam3);
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_92(iParam3);
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_91(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = _get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			get_shop_ped_query_prop(iVar17, &Var0);
			if (!_is_dlc_data_empty(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return func_85(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_104(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			get_shop_ped_query_component(iVar37, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return func_84(iParam0, func_104(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_92(int iParam0)
{
	switch (iParam0)
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
	}
	return 0;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = func_104(iParam1);
	iVar1 = get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = get_ped_texture_variation(iParam0, iVar0);
	return func_94(iParam0, iVar1, iVar2, iParam1);
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_104(iParam3);
	iVar1 = get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= iVar1 - 1)
	{
		iVar5 = get_number_of_ped_texture_variations(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 += iVar5;
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= iVar5 - 1)
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_95(int iParam0)
{
	if (is_bit_set(Global_69311[1 /*14*/].f_6, true) && !is_bit_set(Global_69311[1 /*14*/].f_6, 6))
	{
		func_101(iParam0, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 2, Global_69311[1 /*14*/].f_1, 1, 0);
	}
	if (is_bit_set(Global_69311[1 /*14*/].f_6, true) && is_bit_set(Global_69311[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_96(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_96(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_96(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_96(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_100(iParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_99(uVar2, iVar0, 0);
		set_bit(&iVar3, iVar1);
		func_97(uVar2, iVar3, iVar0, 1);
	}
}

void func_97(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_98(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_98(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_99(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_98(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_100(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
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

int func_101(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_102(int iParam0)
{
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!is_bit_set(Global_69311[1 /*14*/].f_6, true))
		{
			return false;
		}
		if (!is_bit_set(Global_69311[1 /*14*/].f_6, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_103(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = func_64(iParam1);
	if (Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 != -99)
	{
		if (!func_177(iParam0, Global_101154.f_1826.f_539[uVar0 /*65*/].f_61, Global_101154.f_1826.f_539[uVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_101154.f_1826.f_539[uVar0 /*65*/].f_59;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 = -99;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

int func_104(int iParam0)
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

struct<10> func_105(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_107(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_107(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_107(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_107(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_107(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_107(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_107(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_107(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_107(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_107(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_107(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_106(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_107(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_107(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_107(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_107(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_107(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_107(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_107(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_107(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_107(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_107(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_106(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_107(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_107(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_107(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_107(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_107(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_107(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_107(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_107(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_107(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_107(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_106(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_107(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_107(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_107(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_107(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_107(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_107(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_107(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_107(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_107(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_107(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_107(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_107(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_107(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_107(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_107(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_107(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_107(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_107(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_107(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_107(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_107(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_107(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_107(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_107(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_107(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_107(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_106(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_107(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_107(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_107(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_107(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_107(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_107(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_107(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_107(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_107(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_107(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_107(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_107(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_107(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_107(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_107(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_107(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_107(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_107(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_107(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_107(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_107(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_107(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_107(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_107(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_107(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_106(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		*iParam0[0] = 0;
		*iParam0[1] = 1;
		*iParam0[2] = 2;
		*iParam0[3] = 3;
		*iParam0[4] = 4;
		*iParam0[5] = 5;
		*iParam0[6] = 6;
		*iParam0[7] = 7;
		*iParam0[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		get_shop_ped_outfit(iParam2, &Var1);
		if (!_is_dlc_data_empty(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						*iParam0[vVar16.z] = func_91(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1)
					{
						*iParam0[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	*iParam0[0] = iParam1;
	*iParam0[1] = iParam2;
	*iParam0[2] = iParam3;
	*iParam0[3] = iParam4;
	*iParam0[4] = iParam5;
	*iParam0[5] = iParam6;
	*iParam0[6] = iParam7;
	*iParam0[7] = iParam8;
	*iParam0[8] = iParam9;
}

struct<16> func_108(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_101154.f_7775.f_99.f_58[120])
					{
						func_111(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_111(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_111(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_111(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_111(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_111(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_111(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[0], Global_101154.f_1826.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_111(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_111(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_111(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_111(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_111(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_111(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_111(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_111(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_111(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_111(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_111(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_111(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_111(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_111(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_111(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_111(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_111(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_111(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_111(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_111(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_111(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_111(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_111(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_111(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_111(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_111(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_111(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_111(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_111(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_111(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_111(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_111(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_111(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_111(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_111(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_111(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_111(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_111(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_111(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_111(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_111(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_111(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_111(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_111(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_111(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_111(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_111(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_109(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_111(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_111(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_111(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[1], Global_101154.f_1826.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_111(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_111(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_111(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_111(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_111(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_111(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_111(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_111(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_111(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_111(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_111(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_111(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_111(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_111(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_111(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_111(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_111(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_111(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_111(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_111(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_111(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_111(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_111(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_111(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_111(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_111(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_111(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_111(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_111(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_111(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_111(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_111(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_111(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_111(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_111(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_111(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_111(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_111(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_111(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_111(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_111(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_111(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_111(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_111(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_109(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_111(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_111(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_111(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_111(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_111(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[2], Global_101154.f_1826.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_111(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_111(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_111(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_111(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_111(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_111(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_111(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_111(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_111(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_111(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_111(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_111(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_111(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_111(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_111(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_111(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_111(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_111(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_111(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_111(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_111(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_111(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_111(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_111(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_111(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_111(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_111(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_111(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_111(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_111(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_111(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_111(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_111(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_111(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_111(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_111(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_111(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_111(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_111(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_111(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_111(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_111(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_111(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_109(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_111(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_111(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_111(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_111(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_111(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_111(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_111(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_111(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_111(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_111(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_111(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_111(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_111(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_111(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_111(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_111(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_111(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_111(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_111(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_111(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_111(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_111(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_111(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_111(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_111(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_111(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_109(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_111(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_111(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_111(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_111(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_111(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_111(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_111(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_111(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_111(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_111(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_111(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_111(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_111(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_111(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_111(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_111(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_111(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_111(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_111(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_111(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_111(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_111(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_111(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_111(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_111(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_111(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_111(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_111(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_109(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_109(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	int iVar19;
	
	*iParam0[0] = 0;
	*iParam0[2] = -99;
	*iParam0[3] = 0;
	*iParam0[4] = 0;
	*iParam0[6] = 0;
	*iParam0[5] = 0;
	*iParam0[8] = 0;
	*iParam0[9] = 0;
	*iParam0[10] = 0;
	*iParam0[1] = 0;
	*iParam0[7] = 0;
	*iParam0[11] = 0;
	*iParam0[13] = -99;
	*iParam0[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		*iParam0[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		*iParam0[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		*iParam0[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	_0xF3FBE2D50A6A8C28(iVar0, 0);
	get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!_is_dlc_data_empty(Var1))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (_get_prop_from_outfit(Var1.f_1, iVar19, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						*iParam0[func_110(vVar16.z)] = vVar16.x;
					}
					else
					{
						*iParam0[func_110(vVar16.z)] = func_91(iParam1, vVar16.x, func_110(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					*iParam0[func_110(vVar16.z)] = vVar16.y;
				}
			}
			iVar19++;
		}
		if (Var1.f_3 == 0)
		{
			*iParam0[13] = -99;
		}
		else
		{
			*iParam0[13] = Var1.f_1;
		}
	}
}

int func_110(int iParam0)
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

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	*iParam0[0] = iParam1;
	*iParam0[2] = iParam2;
	*iParam0[3] = iParam3;
	*iParam0[4] = iParam4;
	*iParam0[6] = iParam5;
	*iParam0[5] = iParam6;
	*iParam0[8] = iParam7;
	*iParam0[9] = iParam8;
	*iParam0[10] = iParam9;
	*iParam0[1] = iParam10;
	*iParam0[7] = iParam11;
	*iParam0[11] = iParam12;
	*iParam0[13] = iParam13;
	*iParam0[14] = -99;
}

struct<14> func_112(int iParam0, int iParam1, int iParam2)
{
	func_176();
	if (iParam0 == joaat("player_zero"))
	{
		func_158(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_139(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_113(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_138(iParam1);
			break;
		
		case 2:
			func_137(iParam1);
			break;
		
		case 3:
			func_134(iParam1);
			break;
		
		case 4:
			func_133(iParam1);
			break;
		
		case 6:
			func_132(iParam1);
			break;
		
		case 5:
			func_131(iParam1);
			break;
		
		case 8:
			func_130(iParam1);
			break;
		
		case 9:
			func_129(iParam1);
			break;
		
		case 10:
			func_128(iParam1);
			break;
		
		case 1:
			func_127(iParam1);
			break;
		
		case 7:
			func_126(iParam1);
			break;
		
		case 11:
			func_125(iParam1);
			break;
		
		case 12:
			func_124(iParam1);
			break;
		
		case 13:
			func_123(iParam1);
			break;
		
		case 14:
			func_114(iParam1);
			break;
	}
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
			func_122(iVar10, iParam0, 155);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_115(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	*uParam0.f_6 = 0;
	*uParam0 = iParam9;
	*uParam0.f_1 = iParam2 % 32;
	*uParam0.f_2 = iParam2 / 32;
	*uParam0.f_3 = iParam4;
	*uParam0.f_4 = iParam5;
	*uParam0.f_7 = iParam6;
	StringCopy(uParam0.f_8, sParam3, 16);
	*uParam0.f_13 = iParam8;
	*uParam0.f_12 = func_121(iParam8);
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
		if (func_120(14))
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
			if (!func_119(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_119(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_119(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_119(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_119(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_119(Global_2621444, 2, 1, 1, -1))
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
			if (func_120(14))
			{
				return;
			}
			iVar0 = func_99(func_118(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, true);
			}
			iVar0 = func_99(func_117(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, 2);
			}
			if (func_116(iParam1, *uParam0.f_2, &uVar1))
			{
				iVar0 = func_99(uVar1, Global_69309, 0);
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

int func_116(int iParam0, int iParam1, var uParam2)
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

int func_117(int iParam0, int iParam1)
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

int func_118(int iParam0, int iParam1)
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

int func_119(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_100(uParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_99(uVar2, iVar0, 0);
		return is_bit_set(iVar3, iVar1);
	}
	return false;
}

int func_120(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_121(int iParam0)
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

void func_122(int iParam0, int iParam1, int iParam2)
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
					func_115(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_115(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_115(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, false), iVar37, 2, Var20.f_1 != 0);
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
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_104(iParam0));
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
					func_115(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
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
			func_122(iVar10, iParam0, 9);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 48);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_125(int iParam0)
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
			func_122(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 6);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 33);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 17);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_130(int iParam0)
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
			func_122(iVar10, iParam0, 18);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 84);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 104);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_134(int iParam0)
{
	if (iParam0 < 136)
	{
		func_136(iParam0);
	}
	else
	{
		func_135(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_122(3, iParam0, 242);
	}
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 9);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_139(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_157(iParam1);
			break;
		
		case 2:
			func_156(iParam1);
			break;
		
		case 3:
			func_152(iParam1);
			break;
		
		case 4:
			func_151(iParam1);
			break;
		
		case 6:
			func_150(iParam1);
			break;
		
		case 5:
			func_149(iParam1);
			break;
		
		case 8:
			func_148(iParam1);
			break;
		
		case 9:
			func_147(iParam1);
			break;
		
		case 10:
			func_146(iParam1);
			break;
		
		case 1:
			func_145(iParam1);
			break;
		
		case 7:
			func_144(iParam1);
			break;
		
		case 11:
			func_143(iParam1);
			break;
		
		case 12:
			func_142(iParam1);
			break;
		
		case 13:
			func_141(iParam1);
			break;
		
		case 14:
			func_140(iParam1);
			break;
	}
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
			func_122(iVar10, iParam0, 175);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 9);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 47);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_143(int iParam0)
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
			func_122(iVar10, iParam0, 63);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 5);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 53);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 12);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 77);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_149(int iParam0)
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
			func_122(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 134);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 117);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_152(int iParam0)
{
	if (iParam0 < 107)
	{
		func_155(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_154(iParam0);
	}
	else
	{
		func_153(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_122(3, iParam0, 318);
	}
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 21);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 10);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_158(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_175(iParam1);
			break;
		
		case 2:
			func_174(iParam1);
			break;
		
		case 3:
			func_171(iParam1);
			break;
		
		case 4:
			func_170(iParam1);
			break;
		
		case 6:
			func_169(iParam1);
			break;
		
		case 5:
			func_168(iParam1);
			break;
		
		case 8:
			func_167(iParam1);
			break;
		
		case 9:
			func_166(iParam1);
			break;
		
		case 10:
			func_165(iParam1);
			break;
		
		case 1:
			func_164(iParam1);
			break;
		
		case 7:
			func_163(iParam1);
			break;
		
		case 11:
			func_162(iParam1);
			break;
		
		case 12:
			func_161(iParam1);
			break;
		
		case 13:
			func_160(iParam1);
			break;
		
		case 14:
			func_159(iParam1);
			break;
	}
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
			func_122(iVar10, iParam0, 113);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 10);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 53);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_162(int iParam0)
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
			func_122(iVar10, iParam0, 45);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 5);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 48);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_122(iVar10, iParam0, 20);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_167(int iParam0)
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
			func_122(iVar10, iParam0, 24);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_168(int iParam0)
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
			func_122(iVar10, iParam0, 14);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_169(int iParam0)
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
			func_122(iVar10, iParam0, 99);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_170(int iParam0)
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
			func_122(iVar10, iParam0, 113);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_171(int iParam0)
{
	if (iParam0 < 60)
	{
		func_173(iParam0);
	}
	else
	{
		func_172(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_122(3, iParam0, 181);
	}
}

void func_172(int iParam0)
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_173(int iParam0)
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_174(int iParam0)
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
			func_122(iVar10, iParam0, 6);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_175(int iParam0)
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
			func_122(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_176()
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

bool func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	Global_69311[1 /*14*/] = {func_112(iVar0, iParam1, iParam2)};
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam1 == 12)
	{
		uVar5 = {func_108(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_177(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = {func_105(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_177(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69311[2 /*14*/] = {func_112(iVar0, 14, iVar4)};
									if (Global_69311[2 /*14*/].f_12 == iVar3)
									{
										if (func_177(iParam0, 14, iVar4))
										{
											if (!func_69(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69311[2 /*14*/])))
											{
												return false;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_93(iParam0, iVar2);
						Global_69311[2 /*14*/] = {func_112(iVar0, iVar2, iVar1)};
						if (!func_69(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69311[2 /*14*/])))
						{
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13)
	{
		uVar32 = {func_105(iVar0, iParam2)};
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_177(iParam0, 14, uVar32[iVar31]))
			{
				return false;
			}
			iVar31++;
		}
		return true;
	}
	else if (iParam1 == 14)
	{
		if (get_ped_prop_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_3 && (get_ped_prop_texture_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_4 || Global_69311[1 /*14*/].f_3 == -1))
		{
			return true;
		}
	}
	else if (Global_69311[1 /*14*/].f_3 == get_ped_drawable_variation(iParam0, func_104(iParam1)) && Global_69311[1 /*14*/].f_4 == get_ped_texture_variation(iParam0, func_104(iParam1)))
	{
		return true;
	}
	return false;
}

int func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_179(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_179(int iParam0)
{
	if (func_180(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_180(int iParam0)
{
	return iParam0 < 3;
}

void func_181(char* sParam0, int iParam1)
{
	stat_set_gxt_label(joaat("sp_last_mission_name"), sParam0, 1);
	if (is_bit_set(iParam1, false))
	{
		stat_set_gxt_label(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (is_bit_set(iParam1, true))
	{
		stat_set_gxt_label(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (is_bit_set(iParam1, 2))
	{
		stat_set_gxt_label(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

int func_182()
{
	func_183();
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

void func_183()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_179(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_178(player_ped_id());
			if (func_180(iVar0) && (!func_120(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_180(Global_101154.f_1826.f_539.f_3549))
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

struct<2> func_184(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_185(iParam0)};
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

struct<2> func_185(int iParam0)
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

void func_186(int iParam0, int iParam1)
{
	Global_69757 = iParam1;
	if (Global_55743)
	{
		return;
	}
	if (Global_55770)
	{
		Global_55770 = 0;
		return;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_55743)
		{
		}
		Global_55769 = iParam0;
		Global_55743 = 1;
		Global_55754 = 1;
	}
}

void func_187(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!is_ped_injured(player_ped_id()))
	{
		set_ped_config_flag(player_ped_id(), 32, true);
		set_ped_config_flag(player_ped_id(), 250, true);
	}
	set_player_control(player_id(), true, 0);
	set_wanted_level_multiplier(1f);
	set_max_wanted_level(5);
	set_all_random_peds_flee(player_id(), 0);
	set_player_weapon_damage_modifier(player_id(), 1f);
	set_player_weapon_defense_modifier(player_id(), 1f);
	display_hud(true);
	display_radar(true);
	set_widescreen_borders(false, 0);
	set_time_scale(1f);
	func_198();
	func_197(1, 1);
	func_196();
	func_194();
	func_193(30000);
	if (iParam1 == 1)
	{
		func_188(iParam0, iParam2, iParam3);
	}
	set_mission_name(0, 0);
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	char* sVar32;
	
	if (iParam0 != -1)
	{
		func_190(iParam0, &Var0);
		MemCopy(&sVar32, {func_185(iParam0)}, 4);
		playstats_mission_checkpoint(&sVar32, 0, Global_91315, 0);
		func_189(&sVar32, Var0.f_3, Global_91315, iParam1, iParam2);
	}
}

void func_189(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_190(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_191(uParam1, "Abigail1", func_184(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 1:
			func_191(uParam1, "Abigail2", func_184(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 2:
			func_191(uParam1, "Barry1", func_184(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 3:
			func_191(uParam1, "Barry2", func_184(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_192(iParam0), 1, 1);
			break;
		
		case 4:
			func_191(uParam1, "Barry3", func_184(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 5:
			func_191(uParam1, "Barry3A", func_184(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 6:
			func_191(uParam1, "Barry3C", func_184(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 7:
			func_191(uParam1, "Barry4", func_184(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_192(iParam0), 0, 0);
			break;
		
		case 8:
			func_191(uParam1, "Dreyfuss1", func_184(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 9:
			func_191(uParam1, "Epsilon1", func_184(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 10:
			func_191(uParam1, "Epsilon2", func_184(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 11:
			func_191(uParam1, "Epsilon3", func_184(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 12:
			func_191(uParam1, "Epsilon4", func_184(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 13:
			func_191(uParam1, "Epsilon5", func_184(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 14:
			func_191(uParam1, "Epsilon6", func_184(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 15:
			func_191(uParam1, "Epsilon7", func_184(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 16:
			func_191(uParam1, "Epsilon8", func_184(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 17:
			func_191(uParam1, "Extreme1", func_184(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 18:
			func_191(uParam1, "Extreme2", func_184(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 19:
			func_191(uParam1, "Extreme3", func_184(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 20:
			func_191(uParam1, "Extreme4", func_184(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 21:
			func_191(uParam1, "Fanatic1", func_184(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_192(iParam0), 1, 0);
			break;
		
		case 22:
			func_191(uParam1, "Fanatic2", func_184(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_192(iParam0), 1, 0);
			break;
		
		case 23:
			func_191(uParam1, "Fanatic3", func_184(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_192(iParam0), 0, 1);
			break;
		
		case 24:
			func_191(uParam1, "Hao1", func_184(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_192(iParam0), 0, 1);
			break;
		
		case 25:
			func_191(uParam1, "Hunting1", func_184(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 26:
			func_191(uParam1, "Hunting2", func_184(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 27:
			func_191(uParam1, "Josh1", func_184(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 28:
			func_191(uParam1, "Josh2", func_184(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_192(iParam0), 1, 1);
			break;
		
		case 29:
			func_191(uParam1, "Josh3", func_184(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_192(iParam0), 1, 1);
			break;
		
		case 30:
			func_191(uParam1, "Josh4", func_184(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 31:
			func_191(uParam1, "Maude1", func_184(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 32:
			func_191(uParam1, "Minute1", func_184(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 33:
			func_191(uParam1, "Minute2", func_184(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 34:
			func_191(uParam1, "Minute3", func_184(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 35:
			func_191(uParam1, "MrsPhilips1", func_184(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 36:
			func_191(uParam1, "MrsPhilips2", func_184(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 37:
			func_191(uParam1, "Nigel1", func_184(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 38:
			func_191(uParam1, "Nigel1A", func_184(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_192(iParam0), 1, 1);
			break;
		
		case 39:
			func_191(uParam1, "Nigel1B", func_184(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_192(iParam0), 1, 1);
			break;
		
		case 40:
			func_191(uParam1, "Nigel1C", func_184(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_192(iParam0), 1, 1);
			break;
		
		case 41:
			func_191(uParam1, "Nigel1D", func_184(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_192(iParam0), 1, 1);
			break;
		
		case 42:
			func_191(uParam1, "Nigel2", func_184(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_192(iParam0), 1, 1);
			break;
		
		case 43:
			func_191(uParam1, "Nigel3", func_184(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_192(iParam0), 1, 1);
			break;
		
		case 44:
			func_191(uParam1, "Omega1", func_184(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 45:
			func_191(uParam1, "Omega2", func_184(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 46:
			func_191(uParam1, "Paparazzo1", func_184(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 47:
			func_191(uParam1, "Paparazzo2", func_184(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 48:
			func_191(uParam1, "Paparazzo3", func_184(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 49:
			func_191(uParam1, "Paparazzo3A", func_184(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 50:
			func_191(uParam1, "Paparazzo3B", func_184(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 51:
			func_191(uParam1, "Paparazzo4", func_184(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 52:
			func_191(uParam1, "Rampage1", func_184(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 54:
			func_191(uParam1, "Rampage3", func_184(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 55:
			func_191(uParam1, "Rampage4", func_184(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 56:
			func_191(uParam1, "Rampage5", func_184(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_192(iParam0), 0, 0);
			break;
		
		case 53:
			func_191(uParam1, "Rampage2", func_184(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_192(iParam0), 1, 0);
			break;
		
		case 57:
			func_191(uParam1, "TheLastOne", func_184(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 58:
			func_191(uParam1, "Tonya1", func_184(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 59:
			func_191(uParam1, "Tonya2", func_184(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 60:
			func_191(uParam1, "Tonya3", func_184(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 61:
			func_191(uParam1, "Tonya4", func_184(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		case 62:
			func_191(uParam1, "Tonya5", func_184(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_192(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_191(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

bool func_192(int iParam0)
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

void func_193(int iParam0)
{
	Global_36262 = get_game_timer() + iParam0;
}

void func_194()
{
	if (Global_88923)
	{
		func_183();
		_0xBF59707B3E5ED531(func_195(Global_101154.f_1826.f_539.f_3549));
	}
	else
	{
		_0xBF59707B3E5ED531("");
	}
}

char* func_195(int iParam0)
{
	iParam0 = iParam0;
	return "";
}

void func_196()
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

void func_197(int iParam0, int iParam1)
{
	Global_88918 = iParam0;
	Global_88919 = iParam1;
}

void func_198()
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

void func_199(var uParam0)
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

void func_200(int iParam0, int iParam1)
{
	struct<26> Var0;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<6> Var35;
	int iVar67;
	int iVar68;
	struct<6> Var69;
	int iVar101;
	int iVar102;
	
	func_190(iParam0, &Var0);
	if (!are_strings_equal(&(Var0.f_16), ""))
	{
		while (!func_225(&(Var0.f_16)))
		{
			wait(0);
		}
	}
	if (Var0.f_22 != 0)
	{
		func_224(Var0.f_22, 0);
	}
	func_215(iParam0, Global_69758);
	if (!iParam1)
	{
		iVar32 = func_214(iParam0);
		if (iVar32 != 0)
		{
			if (!get_number_of_passenger_voice_variations(iVar32))
			{
				unlock_mission_news_story(iVar32);
			}
		}
	}
	if (Var0.f_24 != -1)
	{
		iVar33 = true;
		if (Var0.f_5 != 4)
		{
			iVar34 = 0;
			while (iVar34 < 63)
			{
				iVar67 = iVar34;
				if (iVar67 != iParam0)
				{
					func_190(iVar67, &Var35);
					if (Var35.f_5 == Var0.f_5)
					{
						if (!is_bit_set(Global_101154.f_17264[iVar67 /*6*/], 3))
						{
							iVar33 = false;
						}
						if (!is_bit_set(Global_101154.f_17264[iVar67 /*6*/], false))
						{
							func_205(iVar67);
						}
					}
				}
				iVar34++;
			}
		}
		if (iVar33)
		{
			func_205(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4)
	{
		iVar68 = 0;
		while (iVar68 < 63)
		{
			iVar101 = iVar68;
			if (iVar101 != iParam0)
			{
				func_190(iVar101, &Var69);
				if (Var69.f_5 == Var0.f_25)
				{
					func_205(iVar101);
				}
			}
			iVar68++;
		}
	}
	if (!is_bit_set(Global_101154.f_17264[iParam0 /*6*/], 3))
	{
		set_bit(&(Global_101154.f_17264[iParam0 /*6*/]), 3);
		Global_100241[iParam0 /*10*/].f_5 = 1;
		func_202(iParam0);
		iVar102 = func_201(iParam0);
		if (iVar102 != 322)
		{
			func_36(iVar102, 0, 0);
		}
	}
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109;
			break;
		
		case 1:
			return 322;
			break;
		
		case 2:
			return 69;
			break;
		
		case 3:
			return 70;
			break;
		
		case 4:
			return 322;
			break;
		
		case 5:
			return 71;
			break;
		
		case 6:
			return 71;
			break;
		
		case 7:
			return 72;
			break;
		
		case 8:
			return 68;
			break;
		
		case 9:
			return 73;
			break;
		
		case 10:
			return 74;
			break;
		
		case 11:
			return 75;
			break;
		
		case 12:
			return 76;
			break;
		
		case 13:
			return 77;
			break;
		
		case 14:
			return 78;
			break;
		
		case 15:
			return 79;
			break;
		
		case 16:
			return 80;
			break;
		
		case 17:
			return 81;
			break;
		
		case 18:
			return 82;
			break;
		
		case 19:
			return 83;
			break;
		
		case 20:
			return 84;
			break;
		
		case 21:
			return 85;
			break;
		
		case 22:
			return 86;
			break;
		
		case 23:
			return 87;
			break;
		
		case 24:
			return 106;
			break;
		
		case 25:
			return 178;
			break;
		
		case 26:
			return 179;
			break;
		
		case 27:
			return 88;
			break;
		
		case 28:
			return 89;
			break;
		
		case 29:
			return 90;
			break;
		
		case 30:
			return 91;
			break;
		
		case 31:
			return 107;
			break;
		
		case 32:
			return 92;
			break;
		
		case 33:
			return 93;
			break;
		
		case 34:
			return 94;
			break;
		
		case 35:
			return 110;
			break;
		
		case 36:
			return 111;
			break;
		
		case 37:
			return 95;
			break;
		
		case 38:
			return 96;
			break;
		
		case 39:
			return 97;
			break;
		
		case 40:
			return 98;
			break;
		
		case 41:
			return 99;
			break;
		
		case 42:
			return 100;
			break;
		
		case 43:
			return 101;
			break;
		
		case 44:
			return 66;
			break;
		
		case 45:
			return 67;
			break;
		
		case 46:
			return 102;
			break;
		
		case 47:
			return 103;
			break;
		
		case 48:
			return 322;
			break;
		
		case 49:
			return 104;
			break;
		
		case 50:
			return 104;
			break;
		
		case 51:
			return 105;
			break;
		
		case 52:
			return 194;
			break;
		
		case 53:
			return 195;
			break;
		
		case 54:
			return 196;
			break;
		
		case 55:
			return 197;
			break;
		
		case 56:
			return 198;
			break;
		
		case 57:
			return 108;
			break;
		
		case 58:
			return 208;
			break;
		
		case 59:
			return 209;
			break;
		
		case 60:
			return 210;
			break;
		
		case 61:
			return 211;
			break;
		
		case 62:
			return 212;
			break;
	}
	return 322;
}

void func_202(int iParam0)
{
	func_204(iParam0, 1);
	Global_101154.f_17264[iParam0 /*6*/].f_3 = func_203();
	Global_101154.f_17264.f_380++;
}

int func_203()
{
	return Global_101154.f_8706.f_21 + Global_101154.f_17264.f_380;
}

void func_204(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 55;
	if (iParam1)
	{
		iVar1 = uParam0;
		if (iVar1 == 46)
		{
			iVar0 = 35;
		}
		else if (iVar1 == 49)
		{
			iVar0 = 36;
		}
		else if (iVar1 == 50)
		{
			iVar0 = 37;
		}
		else if (iVar1 == 8)
		{
			iVar0 = 38;
		}
		else if (iVar1 == 16)
		{
			iVar0 = 39;
		}
		else if (iVar1 == 38)
		{
			iVar0 = 40;
		}
		else if (iVar1 == 39)
		{
			iVar0 = 41;
		}
		else if (iVar1 == 40)
		{
			iVar0 = 42;
		}
		else if (iVar1 == 41)
		{
			iVar0 = 43;
		}
		else if (iVar1 == 42)
		{
			iVar0 = 44;
		}
		else if (iVar1 == 43)
		{
			iVar0 = 45;
		}
		else if (iVar1 == 20)
		{
			iVar0 = 46;
		}
	}
	else
	{
		iVar2 = uParam0;
		if (iVar2 == 53)
		{
			iVar0 = 0;
		}
		else if (iVar2 == 1)
		{
			iVar0 = 1;
		}
		else if (iVar2 == 2)
		{
			iVar0 = 2;
		}
		else if (iVar2 == 17)
		{
			iVar0 = 3;
		}
		else if (iVar2 == 19)
		{
			iVar0 = 4;
		}
		else if (iVar2 == 43)
		{
			iVar0 = 5;
		}
		else if (iVar2 == 44)
		{
			iVar0 = 6;
		}
		else if (iVar2 == 63)
		{
			iVar0 = 8;
		}
		else if (iVar2 == 12)
		{
			iVar0 = 9;
		}
		else if (iVar2 == 13)
		{
			iVar0 = 10;
		}
		else if (iVar2 == 64)
		{
			iVar0 = 11;
		}
		else if (iVar2 == 20)
		{
			iVar0 = 12;
		}
		else if (iVar2 == 30)
		{
			iVar0 = 13;
		}
		else if (iVar2 == 31)
		{
			iVar0 = 14;
		}
		else if (iVar2 == 41)
		{
			iVar0 = 15;
		}
		else if (iVar2 == 38)
		{
			iVar0 = 16;
		}
		else if (iVar2 == 9)
		{
			iVar0 = 18;
		}
		else if (iVar2 == 59)
		{
			iVar0 = 19;
		}
		else if (iVar2 == 45)
		{
			iVar0 = 20;
		}
		else if (iVar2 == 10)
		{
			iVar0 = 21;
		}
		else if (iVar2 == 14)
		{
			iVar0 = 22;
		}
		else if (iVar2 == 16)
		{
			iVar0 = 24;
		}
		else if (iVar2 == 39)
		{
			iVar0 = 25;
		}
		else if (iVar2 == 46)
		{
			iVar0 = 26;
		}
		else if (iVar2 == 60)
		{
			iVar0 = 27;
		}
		else if (iVar2 == 22)
		{
			iVar0 = 28;
		}
		else if (iVar2 == 48)
		{
			iVar0 = 30;
		}
		else if (iVar2 == 61)
		{
			iVar0 = 31;
		}
		else if (iVar2 == 49)
		{
			iVar0 = 32;
		}
		else if (iVar2 == 27)
		{
			iVar0 = 34;
		}
		else if (iVar2 == 3)
		{
			iVar0 = 47;
		}
		else if (iVar2 == 4)
		{
			iVar0 = 48;
		}
		else if (iVar2 == 5)
		{
			iVar0 = 49;
		}
		else if (iVar2 == 6)
		{
			iVar0 = 50;
		}
		else if (iVar2 == 7)
		{
			iVar0 = 51;
		}
		else if (iVar2 == 58)
		{
			iVar0 = 53;
		}
		else if (iVar2 == 90)
		{
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75)
		{
			iVar0 = 17;
		}
		else if (iVar2 == 93)
		{
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70)
		{
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85)
		{
			iVar0 = 33;
		}
	}
	if (iVar0 != 55)
	{
		Global_101154.f_25089.f_472 = iVar0;
	}
}

void func_205(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return;
	}
	func_206(iParam0);
	set_bit(&(Global_101154.f_17264[iParam0 /*6*/]), false);
}

void func_206(int iParam0)
{
	switch (iParam0)
	{
		case 30:
			func_207(22, 1, 0, 1, 0);
			break;
		
		case 15:
			func_666(37, 0);
			break;
		
		default:
			break;
	}
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_69489)
		{
			Global_2428492.f_74.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_101154.f_5951.f_227[iParam0] = iParam1;
		}
		Global_32679[iParam0] = iParam2;
		Global_32878[iParam0] = 1;
		func_210(iParam0, iParam3, iParam4, 0);
		func_208(iParam0, iParam1);
	}
}

void func_208(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_209(0, 0);
			}
			else
			{
				func_209(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_209(int iParam0, int iParam1)
{
	if (iParam1)
	{
		set_bit(&Global_99794, iParam0);
	}
	else
	{
		clear_bit(&Global_99794, iParam0);
	}
	Global_99793 = 1;
}

int func_210(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<5> Var3;
	var uVar98;
	int iVar99;
	int iVar100;
	
	iVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_213(&Var3, iParam0);
	if (func_211())
	{
		iVar1 = Global_101154.f_5951.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2428492.f_74.f_227[iParam0];
	}
	uVar2 = Global_33077[iParam0];
	if (is_ped_injured(player_ped_id()) && !iParam3)
	{
	}
	else
	{
		iVar99 = true;
		if (get_hash_key(get_this_script_name()) != get_hash_key("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32679[iParam0] && get_distance_between_coords(get_entity_coords(player_ped_id(), 0), Var3, 1) < 200f)
				{
					iVar99 = false;
				}
				if (!is_player_playing(player_id()) || is_ped_being_arrested(player_ped_id()))
				{
					if (!is_screen_faded_out())
					{
						iVar99 = false;
					}
				}
			}
		}
		if (is_new_load_scene_active() && (!is_player_switch_in_progress() || get_player_switch_state() != 5))
		{
			iVar99 = false;
		}
		if (iVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							remove_model_hide(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[uVar2] != 0)
						{
							create_model_hide(Var3, 10f, Var3.f_4[uVar2], 1);
						}
						Global_34273[iParam0] = 1;
					}
					iVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								request_ipl(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_34)))
							{
								request_ipl(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (is_ipl_active(&(Var3.f_34)))
							{
								remove_ipl(&(Var3.f_34));
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								request_ipl(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (is_ipl_active(&(Var3.f_34)))
							{
								remove_ipl(&(Var3.f_34));
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES"))
						{
							if (!is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								request_ipl(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34074[iParam0] = 1;
					Global_34273[iParam0] = 1;
					iVar0 = true;
					break;
				
				case 2:
					iVar100 = get_interior_at_coords_with_type(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (get_hash_key(&(Var3.f_50)) != get_hash_key(""))
						{
							if (_is_interior_prop_enabled(iVar100, &(Var3.f_50)))
							{
								_disable_interior_prop(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (!_is_interior_prop_enabled(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (!_is_interior_prop_enabled(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES"))
							{
								if (!_is_interior_prop_enabled(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (iParam1)
						{
							refresh_interior(iVar100);
						}
					}
					Global_34273[iParam0] = 1;
					Global_34074[iParam0] = 1;
					iVar0 = true;
					break;
				
				case 3:
					if (get_distance_between_coords(Var3, get_entity_coords(player_ped_id(), 0), 1) < 250f)
					{
						uVar98 = _0xB48FCED898292E52(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (_0x52AF537A0C5B8AAD(uVar98))
						{
							if (iVar1 == 0)
							{
								_0x5C29F698D404C5E1(uVar98, 3);
								Global_34273[iParam0] = 1;
								iVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((_0x899BA936634A322E(uVar98) != 6 && _0x899BA936634A322E(uVar98) != 7) && _0x899BA936634A322E(uVar98) != 8)
								{
									_0x5C29F698D404C5E1(uVar98, 10);
									Global_34273[iParam0] = 1;
									iVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								iVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						remove_model_swap(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						clear_bit(&(Global_32425[iParam0 / 32]), iParam0 % 32);
					}
					else if (iVar1 == 1)
					{
						create_model_swap(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						set_bit(&(Global_32425[iParam0 / 32]), iParam0 % 32);
					}
					iVar0 = true;
					break;
			}
			if (iVar0)
			{
				Global_32878[iParam0] = 0;
				Global_33077[iParam0] = iVar1;
				if (!func_211())
				{
					if (!Global_33674[iParam0])
					{
						Global_33674[iParam0] = 1;
						Global_33873++;
					}
				}
			}
		}
	}
	return iVar0;
}

bool func_211()
{
	if ((func_38() == -1 || func_38() == 999) && !func_212() == 0)
	{
		return true;
	}
	return false;
}

var func_212()
{
	return Global_25121;
}

bool func_213(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*uParam0.f_4[iVar0] = 0;
		StringCopy(uParam0.f_8[iVar0 /*8*/], "", 32);
		*uParam0.f_64[iVar0] = 0;
		*uParam0.f_75[iVar0] = 0;
		*uParam0.f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = 0;
	*uParam0.f_33 = 0;
	StringCopy(uParam0.f_34, "", 32);
	StringCopy(uParam0.f_42, "", 32);
	StringCopy(uParam0.f_50, "", 32);
	*uParam0.f_58 = {0f, 0f, 0f};
	*uParam0.f_61 = {0f, 0f, 0f};
	*uParam0.f_68 = {0f, 0f, 0f};
	*uParam0.f_71 = {0f, 0f, 0f};
	*uParam0.f_74 = 0f;
	*uParam0.f_79 = {0f, 0f, 0f};
	*uParam0.f_82 = {0f, 0f, 0f};
	*uParam0.f_85 = {0f, 0f, 0f};
	*uParam0.f_88 = {0f, 0f, 0f};
	switch (iParam1)
	{
		case 3:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "TRV1_Trail_start", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "TRV1_Trail_end", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-24.685f, 3032.92f, 40.331f};
			break;
		
		case 4:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CS3_05_water_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS3_05_water_grp2", 32);
			*uParam0 = {-24.685f, 3032.92f, 40.331f};
			break;
		
		case 0:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "gasstation_ipl_group1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "gasstation_ipl_group2", 32);
			*uParam0 = {-93.4f, 6410.9f, 36.8f};
			break;
		
		case 1:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DES_Smash2_startimap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DES_Smash2_endimap", 32);
			*uParam0 = {890.3647f, -2367.289f, 28.10582f};
			break;
		
		case 2:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-1020.5f, 663.41f, 154.75f};
			*uParam0.f_58 = {-1018.913f, 603.2904f, 105.6611f};
			*uParam0.f_61 = {-1038.913f, 639.2904f, 135.6611f};
			*uParam0.f_64[0] = 1;
			*uParam0.f_64[1] = 0;
			break;
		
		case 5:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "bnkheist_apt_norm", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			break;
		
		case 6:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "crashed_cargoplane", 32);
			break;
		
		case 7:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_jb700_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 8:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_entityXF_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 9:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_cheetah_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 10:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_ztype_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 11:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "cargoship", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "sunkcargoship", 32);
			*uParam0.f_68 = {-162.8918f, -2365.769f, 0f};
			*uParam0.f_71 = {190.75f, 31.25f, 21f};
			*uParam0.f_74 = 0f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			break;
		
		case 13:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ship_occ_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ship_occ_grp2", 32);
			break;
		
		case 14:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "smboat", 32);
			break;
		
		case 15:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "gasparticle_grp2", 32);
			*uParam0 = {-95.2f, 6411.3f, 31.5f};
			break;
		
		case 16:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 17:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 18:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 19:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 20:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "jetstealtunnel", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {801.7f, -1810.8f, 23.3f};
			break;
		
		case 21:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {787.3967f, -1808.858f, 29.8532f};
			*uParam0.f_58 = {814f, -1750f, 20f};
			*uParam0.f_61 = {790f, -1899f, 35f};
			*uParam0.f_64[0] = 1;
			*uParam0.f_64[1] = 0;
			*uParam0.f_64[2] = 0;
			break;
		
		case 22:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "triathlon2_VBprops", 32);
			break;
		
		case 26:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_REQUEST", 32);
			*uParam0 = {163.4f, -745.7f, 251f};
			break;
		
		case 27:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "FBI_colPLUG", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {74.29f, -736.05f, 46.76f};
			break;
		
		case 28:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FBI_repair", 32);
			*uParam0 = {74.29f, -736.05f, 46.76f};
			break;
		
		case 29:
			*uParam0.f_3 = 4;
			*uParam0.f_4[0] = joaat("dt1_05_build1_h");
			*uParam0.f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 30:
			*uParam0.f_3 = 4;
			*uParam0.f_4[0] = -112041596;
			*uParam0.f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 31:
			*uParam0.f_3 = 4;
			*uParam0.f_4[0] = -186270611;
			*uParam0.f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = {178.534f, -668.835f, 37.2113f};
			break;
		
		case 32:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "FIB_heist_lights", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 33:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FIB_heist_dmg", 32);
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 34:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_rubble", 32);
			*uParam0 = {74.29f, -736.05f, 46.76f};
			break;
		
		case 35:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "FIBlobbyfake", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FIBlobby", 32);
			*uParam0 = {105.4557f, -745.4835f, 44.7548f};
			break;
		
		case 36:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
			*uParam0 = {169f, -670.3f, 41.9f};
			break;
		
		case 37:
			*uParam0.f_3 = 1;
			*uParam0 = {50.2f, 3743.9f, 40.9f};
			*uParam0.f_79 = {16.9757f, 3614.307f, 30.0677f};
			*uParam0.f_82 = {145.2451f, 3748.912f, 49.6958f};
			*uParam0.f_85 = {16.9757f, 3614.307f, 30.0677f};
			*uParam0.f_88 = {145.2451f, 3748.912f, 49.6958f};
			*uParam0.f_91[0] = 0;
			*uParam0.f_91[1] = 1;
			break;
		
		case 38:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkA_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkA_grp2", 32);
			*uParam0 = {50.2f, 3743.9f, 40.9f};
			break;
		
		case 39:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerA_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {50.2f, 3743.9f, 40.9f};
			break;
		
		case 40:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkB_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkB_grp2", 32);
			*uParam0 = {106.7f, 3732.1f, 40.8f};
			break;
		
		case 41:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerB_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {106.7f, 3732.1f, 40.8f};
			break;
		
		case 42:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkC_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkC_grp2", 32);
			*uParam0 = {72.7f, 3695.4f, 42f};
			break;
		
		case 43:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerC_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {72.7f, 3695.4f, 42f};
			break;
		
		case 44:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkD_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkD_grp2", 32);
			*uParam0 = {43.8f, 3699.7f, 41.3f};
			break;
		
		case 45:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerD_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {43.8f, 3699.7f, 41.3f};
			break;
		
		case 46:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkE_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkE_grp2", 32);
			*uParam0 = {28.5f, 3668f, 40.4f};
			break;
		
		case 47:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerE_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {28.5f, 3668f, 40.4f};
			break;
		
		case 48:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_34, "des_methtrailer", 32);
			StringCopy(uParam0.f_8[0 /*8*/], "methtrailer_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "methtrailer_grp2", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "methtrailer_grp3", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {29.4838f, 3735.593f, 38.688f};
			*uParam0.f_68 = {31.134f, 3738.783f, 39.062f};
			*uParam0.f_71 = {13.6f, 20f, 8.9f};
			*uParam0.f_74 = 48f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 1;
			break;
		
		case 49:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_meth_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {29.4838f, 3735.593f, 38.688f};
			break;
		
		case 50:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "des_farmhs_startimap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "des_farmhs_endimap", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2450.595f, 4959.929f, 44.2575f};
			*uParam0.f_79 = {2383.756f, 4929.988f, 39.52461f};
			*uParam0.f_82 = {2505.756f, 5023.988f, 67.52461f};
			break;
		
		case 55:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "des_farmhs_start_occl", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "des_farmhs_end_occl", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0 = {2450.595f, 4959.929f, 44.2575f};
			break;
		
		case 51:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "farm", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "farm", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "farm_burnt", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2444.8f, 4976.4f, 50.5f};
			break;
		
		case 52:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "farm_props", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "farm_burnt_props", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 53:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "des_farmhouse", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "des_farmhouse", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 54:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "farmint_cap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "farmint", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0 = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 56:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "tankerexp_grp0", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "tankerexp_grp3", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 57:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "tankerexp_grp1", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 58:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "tankerexp_grp2", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 59:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DES_tankerexp", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 60:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "dockcrane1", 32);
			*uParam0 = {889.3f, -2910.9f, 40f};
			break;
		
		case 61:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CanyonRvrShallow", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CanyonRvrDeep", 32);
			*uParam0 = {-1600.619f, 4443.457f, 0.725f};
			break;
		
		case 62:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Garage_door_locked", 32);
			*uParam0 = {966.1f, -114.8f, 75.2f};
			break;
		
		case 63:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ch1_02_closed", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ch1_02_open", 32);
			*uParam0 = {-3086.428f, 339.2523f, 6.3717f};
			break;
		
		case 64:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ferris_finale_Anim", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-1675.178f, -1143.605f, 12.0175f};
			break;
		
		case 65:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "railing_start", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "railing_end", 32);
			*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
			break;
		
		case 66:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "canyonriver01", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "canyonriver01_traincrash", 32);
			*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
			break;
		
		case 67:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_05_WOFFM", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "DT1_05_WOFFM", 32);
			*uParam0 = {131.29f, -631.22f, 261.85f};
			break;
		
		case 68:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "coronertrash", 32);
			*uParam0 = {233.9f, -1355f, 30.3f};
			break;
		
		case 69:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "Coroner_Int_off", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Coroner_Int_on", 32);
			*uParam0 = {234.4f, -1355.6f, 40.5f};
			break;
		
		case 70:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "id2_14_pre_no_int", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 71:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "id2_14_during1", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "id2_14_during2", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 72:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "id2_14_on_fire", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "id2_14_post_no_int", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 73:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "id2_14_during_door", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 74:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "burnt_switch_off", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 75:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "RC12B_Default", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "RC12B_Destroyed", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "RC12B_Fixed", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 76:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 105:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
			*uParam0 = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 106:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = {1861.28f, 2402.11f, 58.53f};
			break;
		
		case 107:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FruitBB", 32);
			*uParam0 = {-1327.46f, -274.82f, 54.25f};
			break;
		
		case 108:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = {2697.32f, 3162.18f, 58.1f};
			break;
		
		case 109:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = {2119.12f, 3058.21f, 53.25f};
			break;
		
		case 110:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
			*uParam0 = {-804.25f, -2276.88f, 23.59f};
			break;
		
		case 111:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "HW1_02_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "HW1_02_NewBill", 32);
			*uParam0 = {296.5f, 173.3f, 100.4f};
			break;
		
		case 112:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
			*uParam0 = {296.5f, 173.3f, 100.4f};
			break;
		
		case 77:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {480.9554f, -1321.21f, 28.2037f};
			*uParam0.f_85 = {508.3f, -1299.3f, 39.4f};
			*uParam0.f_88 = {459.9f, -1363.2f, 21.4f};
			*uParam0.f_91[0] = 0;
			*uParam0.f_91[1] = 1;
			*uParam0.f_91[2] = 0;
			break;
		
		case 78:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "TrevorsTrailer", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
			*uParam0 = {1973f, 3815f, 34f};
			*uParam0.f_33 = 0;
			break;
		
		case 79:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "scafstartimap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "scafendimap", 32);
			*uParam0 = {-1088.6f, -1650.6f, 6.4f};
			break;
		
		case 80:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "chop_props", 32);
			*uParam0 = {-13.83f, -1455.45f, 31.81f};
			break;
		
		case 113:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "AP1_04_TriAf01", 32);
			*uParam0 = {-1277.629f, -2030.913f, 1.2823f};
			break;
		
		case 114:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS2_06_TriAf02", 32);
			*uParam0 = {2384.969f, 4277.583f, 30.379f};
			break;
		
		case 115:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS4_04_TriAf03", 32);
			*uParam0 = {1577.881f, 3836.107f, 30.7717f};
			break;
		
		case 87:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-180.5771f, -1016.928f, 28.2893f};
			break;
		
		case 88:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "jewel2fake", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "post_hiest_unload", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "bh1_16_refurb", 32);
			*uParam0 = {-630.4205f, -236.7843f, 37.057f};
			*uParam0.f_79 = {-623.6868f - 11f, -231.935f - 11f, 40.30703f - 3.25f};
			*uParam0.f_82 = {-623.6868f + 11f, -231.935f + 11f, 40.30703f + 3.25f};
			break;
		
		case 89:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "bh1_16_doors_shut", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "refit_unload", 32);
			*uParam0 = {-583.1606f, -282.3967f, 35.394f};
			break;
		
		case 90:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "v_tunnel_hole", 32);
			*uParam0 = {-14.651f, -604.3639f, 25.1823f};
			break;
		
		case 91:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "cs5_4_trains", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {2773.61f, 2835.327f, 35.1903f};
			break;
		
		case 94:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "airfield", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {1743.682f, 3286.251f, 40.0875f};
			break;
		
		case 95:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {1222.9f, 1877.9f, 79.9f};
			*uParam0.f_58 = {1206.8f, 1803f, 43.9f};
			*uParam0.f_61 = {1329f, 2060.4f, 143.9f};
			*uParam0.f_64[0] = 0;
			*uParam0.f_64[1] = 1;
			*uParam0.f_64[2] = 0;
			break;
		
		case 104:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SC1_01_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SC1_01_NewBill", 32);
			*uParam0 = {-351f, -1324f, 44.02f};
			break;
		
		case 103:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_17_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_17_NewBill", 32);
			*uParam0 = {391.81f, -962.71f, 41.97f};
			break;
		
		case 102:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SC1_14_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SC1_14_NewBill", 32);
			*uParam0 = {424.2f, -1944.31f, 33.09f};
			break;
		
		case 92:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ld_rail_01_track", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {2626.374f, 2949.869f, 39.1409f};
			break;
		
		case 93:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ld_rail_02_track", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {2626.374f, 2949.869f, 39.1409f};
			break;
		
		case 118:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_M_items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_M_moved", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
			break;
		
		case 116:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_D_items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_D_Moved", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
			break;
		
		case 117:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_S_items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 119:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_L_Items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_L_Moved", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 120:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 122:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_FameShame", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
			break;
		
		case 121:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 123:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Michael_premier", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 124:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 170:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "burgershot_yoga", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 171:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_Scuba", 32);
			StringCopy(uParam0.f_42, "V_Michael_Garage", 32);
			*uParam0 = {-810.5301f, 187.7868f, 71.4786f};
			break;
		
		case 125:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
			break;
		
		case 164:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Jewel_Gasmasks", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 165:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 166:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 167:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_35_KitBag", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 168:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_35_Body_Armour", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 169:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_35_Fireman", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 126:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
			StringCopy(uParam0.f_42, "V_Trailer", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 127:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
			StringCopy(uParam0.f_42, "V_TrailerTRASH", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 128:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
			StringCopy(uParam0.f_42, "V_TrailerTidy", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 129:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
			StringCopy(uParam0.f_42, "V_Trailer", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 130:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
			StringCopy(uParam0.f_42, "V_TrailerTRASH", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 131:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
			StringCopy(uParam0.f_42, "V_TrailerTidy", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 132:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
			StringCopy(uParam0.f_42, "V_Trailer", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 133:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
			StringCopy(uParam0.f_42, "V_TrailerTRASH", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 134:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
			StringCopy(uParam0.f_42, "V_TrailerTidy", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 179:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "shutter_open", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "shutter_closed", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-30.8793f, -1088.336f, 25.4221f};
			*uParam0.f_68 = {-29.3f, -1086.35f, 25.57f};
			*uParam0.f_71 = {5.5f, 3f, 2f};
			*uParam0.f_74 = -10f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			break;
		
		case 174:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "csr_beforeMission", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "csr_afterMissionA", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "csr_afterMissionB", 32);
			StringCopy(uParam0.f_50, "csr_inMission", 32);
			*uParam0.f_33 = 0;
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 175:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-49.21f, -1090.28f, 25.42f};
			*uParam0.f_68 = {-49.21f, -1090.28f, 25.42f};
			*uParam0.f_71 = {2.5f, 3f, 3f};
			*uParam0.f_74 = 0f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 0;
			break;
		
		case 176:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-49.28f, -1092.66f, 25.42f};
			*uParam0.f_68 = {-49.28f, -1092.66f, 25.42f};
			*uParam0.f_71 = {3f, 1f, 3f};
			*uParam0.f_74 = 0f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 0;
			break;
		
		case 177:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-53.07f, -1096.73f, 25.5f};
			*uParam0.f_68 = {-53.07f, -1096.73f, 25.5f};
			*uParam0.f_71 = {1f, 3f, 2f};
			*uParam0.f_74 = -45f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 0;
			break;
		
		case 178:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "carshowroom_broken", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "carshowroom_boarded", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 173:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "shr_int", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "fakeint", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 180:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_03_Shutter", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "", 32);
			*uParam0 = {23.9346f, -669.7552f, 30.8853f};
			break;
		
		case 181:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "Hospitaldoorsanim", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
			StringCopy(uParam0.f_42, "v_hospital", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {300.9423f, -586.1784f, 42.2919f};
			break;
		
		case 135:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "swap_clean_apt", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_mess_A", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 136:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_mess_B", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 137:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_mess_C", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 138:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_sextoys_a", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 139:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_wade_shit", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 140:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_wade_sofa_A", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 141:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "layer_debra_pic", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 142:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_torture", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 143:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "swap_sofa_A", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_sofa_B", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 144:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_whiskey", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 145:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "swap_mrJam_A", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_mrJam_B", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 146:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_mrJam_C", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 147:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "vb_30_emissive", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "vb_30_murder", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
			break;
		
		case 148:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "vb_30_crimetape", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
			break;
		
		case 149:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "sheriff_cap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {1856.029f, 3682.998f, 33.2675f};
			break;
		
		case 150:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-440.5073f, 6018.766f, 30.49f};
			break;
		
		case 151:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ufo", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {487.31f, 5588.386f, 793.0532f};
			break;
		
		case 152:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ufo_eye", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {487.31f, 5588.386f, 793.0532f};
			break;
		
		case 153:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_57_FranklinStuff", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
			StringCopy(uParam0.f_42, "v_franklins", 32);
			*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 154:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_57_GangBandana", 32);
			StringCopy(uParam0.f_42, "v_franklins", 32);
			*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 155:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_57_Safari", 32);
			StringCopy(uParam0.f_42, "v_franklins", 32);
			*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 172:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
			StringCopy(uParam0.f_42, "v_strip3", 32);
			*uParam0 = {96.4811f, -1291.294f, 28.2688f};
			break;
		
		case 182:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {139.5795f, -3092.962f, 8.64631f};
			*uParam0.f_79 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_82 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_85 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_88 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_91[0] = 0;
			*uParam0.f_91[1] = 1;
			*uParam0.f_91[2] = 1;
			break;
		
		case 183:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {203.7784f, -3131.767f, 7.041344f};
			*uParam0.f_79 = {Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f)};
			*uParam0.f_82 = {Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f)};
			break;
		
		case 184:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {144.7706f, -2982.659f, 7.952507f};
			*uParam0.f_79 = {Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f)};
			*uParam0.f_82 = {Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f)};
			break;
		
		case 185:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-1154.965f, -1520.983f, 9.132731f};
			*uParam0.f_79 = {-1154.965f, -1520.983f, 9.132731f};
			*uParam0.f_82 = {-1158.965f, -1524.983f, 11.63273f};
			break;
		
		case 187:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-1052.204f, 371.9537f, 67.914f};
			*uParam0.f_79 = {-1052.204f, 371.9537f, 67.914f};
			*uParam0.f_82 = {-1048.064f, 368.0221f, 70.9128f};
			break;
		
		case 186:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {1954.984f, 3792.991f, 30.3086f};
			*uParam0.f_79 = {1954.984f, 3792.991f, 30.3086f};
			*uParam0.f_82 = {1983.45f, 3830.78f, 36.2726f};
			break;
		
		case 188:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-1122.202f, 48.5724f, 51.4652f};
			*uParam0.f_79 = {-1122.202f, 48.5724f, 51.4652f};
			*uParam0.f_82 = {-1076.233f, 92.1041f, 60.0617f};
			break;
		
		case 81:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "KorizTempWalls", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-2199.138f, 223.4648f, 181.1118f};
			break;
		
		case 82:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "mic3_chopper_debris", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-2242.785f, 263.4779f, 173.6154f};
			break;
		
		case 83:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "chemgrill_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {3832.9f, 3665.5f, -23.4f};
			break;
		
		case 84:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Plane_crash_trench", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {2814.7f, 4758.5f, 47.9f};
			break;
		
		case 85:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "golfflags", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-1096.505f, 4.5754f, 49.8103f};
			break;
		
		case 86:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "yogagame", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-781.6566f, 186.8937f, 71.8352f};
			break;
		
		case 189:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "Carwash_with_spinners", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Carwash_without_spinners", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {55.7f, -1391.3f, 30.5f};
			break;
		
		case 190:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "KT_CarWash", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {700.091f, -933.641f, 20.308f};
			break;
		
		case 191:
			*uParam0.f_3 = 1;
			*uParam0 = {-1096.381f, -836.17f, 36.6755f};
			*uParam0.f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
			*uParam0.f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
			*uParam0.f_91[0] = 1;
			*uParam0.f_91[1] = 0;
			break;
		
		case 192:
			*uParam0.f_3 = 1;
			*uParam0 = {449.6558f, -980.1375f, 42.6918f};
			*uParam0.f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
			*uParam0.f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
			*uParam0.f_91[0] = 1;
			*uParam0.f_91[1] = 0;
			break;
		
		case 193:
			*uParam0.f_3 = 1;
			*uParam0 = {363.0175f, -1598.079f, 35.9502f};
			*uParam0.f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
			*uParam0.f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
			*uParam0.f_91[0] = 1;
			*uParam0.f_91[1] = 0;
			break;
		
		case 194:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS3_07_MPGates", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0 = {-1601.424f, 2808.213f, 16.2598f};
			break;
		
		case 97:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {23.7318f, -647.2123f, 37.9549f};
			break;
		
		case 98:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FINBANK", 32);
			*uParam0 = {12.9689f, -648.4698f, 9.7693f};
			break;
		
		case 99:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "PAPER1_RCM", 32);
			*uParam0 = {-1459.127f, 486.1281f, 115.2016f};
			break;
		
		case 100:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SP1_10_fake_interior", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SP1_10_real_interior", 32);
			*uParam0 = {-248.4916f, -2010.509f, 34.5743f};
			break;
		
		case 101:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "facelobbyfake", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "facelobby", 32);
			*uParam0 = {-1081.347f, -263.1502f, 38.7152f};
			break;
		
		case 195:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "atriumglstatic", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "atriumglmission", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "atriumglcut", 32);
			*uParam0 = {136.1795f, -750.701f, 262.0516f};
			break;
		
		case 197:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "racetrack01", 32);
			*uParam0 = {2096f, 3168.7f, 42.9f};
			break;
	}
	switch (iParam1)
	{
		case 156:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "showhome_only", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 157:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "franklin_unpacking", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 158:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "franklin_settled", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 163:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "progress_tshirt", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 159:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bong_and_wine", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 161:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "progress_flyer", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 162:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "progress_tux", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 160:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "locked", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "unlocked", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 96:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "chophillskennel", 32);
			*uParam0 = {19.0568f, 536.4818f, 169.6277f};
			break;
	}
	return true;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 46:
			return 42;
			break;
		
		case 47:
			return 43;
			break;
		
		case 49:
			return 44;
			break;
		
		case 50:
			return 45;
			break;
		
		case 8:
			if (is_bit_set(Global_101154.f_17264.f_382, false))
			{
				return 46;
			}
			break;
		
		case 16:
			return 47;
			break;
		
		case 38:
			return 48;
			break;
		
		case 39:
			return 49;
			break;
		
		case 40:
			return 50;
			break;
		
		case 41:
			return 51;
			break;
		
		case 42:
			return 52;
			break;
		
		case 43:
			if (Global_101154.f_7775.f_99.f_58[101])
			{
				return 53;
			}
			else
			{
				return 54;
			}
			break;
		
		case 20:
			return 55;
			break;
	}
	return 0;
}

void func_215(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 46:
			func_216(4, iParam1);
			break;
		
		case 16:
			func_216(6, iParam1);
			break;
		
		case 37:
			func_216(17, iParam1);
			break;
		
		case 31:
			func_216(16, iParam1);
			break;
	}
}

void func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_223(iParam0))
		{
			set_bit(&(Global_101154.f_30959), iVar0);
			if (!iParam1)
			{
				func_221(func_222(iParam0));
				if (!func_220(68))
				{
					func_217("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

void func_217(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_218(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_218(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_219();
	}
}

void func_219()
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

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return is_bit_set(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return false;
}

void func_221(char* sParam0)
{
	_set_notification_text_entry("");
	_0xC6F580E4C94926AC("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

char* func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_STOMIC";
			break;
		
		case 1:
			return "CM_STOFRA";
			break;
		
		case 2:
			return "CM_STOTRE";
			break;
		
		case 3:
			return "CM_STOAMA";
			break;
		
		case 4:
			return "CM_STOBEV";
			break;
		
		case 5:
			return "CM_STOBRA";
			break;
		
		case 6:
			return "CM_STOCHR";
			break;
		
		case 7:
			return "CM_STODAV";
			break;
		
		case 8:
			return "CM_STODEV";
			break;
		
		case 9:
			return "CM_STODRF";
			break;
		
		case 10:
			return "CM_STOFAB";
			break;
		
		case 11:
			return "CM_STOFLO";
			break;
		
		case 12:
			return "CM_STOJIM";
			break;
		
		case 13:
			return "CM_STOLAM";
			break;
		
		case 14:
			return "CM_STOLAZ";
			break;
		
		case 15:
			return "CM_STOLES";
			break;
		
		case 16:
			return "CM_STOMAU";
			break;
		
		case 17:
			return "CM_STOTHO";
			break;
		
		case 18:
			return "CM_STONER";
			break;
		
		case 19:
			return "CM_STOPAT";
			break;
		
		case 20:
			return "CM_STOSIM";
			break;
		
		case 21:
			return "CM_STOSOL";
			break;
		
		case 22:
			return "CM_STOSTE";
			break;
		
		case 23:
			return "CM_STOSTR";
			break;
		
		case 24:
			return "CM_STOTAN";
			break;
		
		case 25:
			return "CM_STOTAO";
			break;
		
		case 26:
			return "CM_STOTRA";
			break;
		
		case 27:
			return "CM_STOWAD";
			break;
	}
	return "ERROR!";
}

int func_223(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 28)
	{
		return is_bit_set(Global_101154.f_30959, iParam0);
	}
	return false;
}

void func_224(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101154.f_7303[iParam0] = 1;
	Global_101154.f_7303.f_236[iParam0] = get_game_timer() + iParam1;
}

bool func_225(char* sParam0)
{
	int iVar0;
	
	iVar0 = 1424;
	if (!does_script_exist(sParam0))
	{
		return true;
	}
	if (are_strings_equal(sParam0, "controller_Races"))
	{
		if (_get_number_of_instances_of_streamed_script(joaat("controller_races")) > 0)
		{
			return true;
		}
		iVar0 = 128;
	}
	request_script(sParam0);
	if (has_script_loaded(sParam0))
	{
		start_new_script(sParam0, iVar0);
		set_script_as_no_longer_needed(sParam0);
		return true;
	}
	return false;
}

int func_226()
{
	return func_227(get_this_script_name(), 0);
}

int func_227(char* sParam0, int iParam1)
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
		func_190(iVar0, &sVar1);
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

void func_228(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_index();
	set_everyone_ignore_player(iVar0, 0);
	set_player_control(iVar0, iParam3, 0);
	func_230(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		display_radar(true);
		display_hud(true);
	}
	clear_help(1);
	if (iParam0 == 1)
	{
		set_widescreen_borders(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_36 != 0 && iLocal_36 != joaat("object")) && iLocal_36 != joaat("gadget_parachute"))
		{
			if (func_5(player_ped_id()))
			{
				if (has_ped_got_weapon(player_ped_id(), iLocal_36, 0))
				{
					set_current_ped_weapon(player_ped_id(), iLocal_36, false);
				}
			}
		}
	}
	if (func_229(player_ped_id()))
	{
		set_ped_stealth_movement(player_ped_id(), 0, 0);
	}
}

bool func_229(int iParam0)
{
	if (func_5(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_230(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_238(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_237())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_236(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_238(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_236(0, iParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_234(player_id())) && !func_232(player_id(), 0)) && !func_231())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_234(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_231()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_232(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_233(-1, 0) == 8;
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

int func_233(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
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

bool func_234(int iParam0)
{
	if (func_232(iParam0, 0))
	{
		return true;
	}
	if (func_235())
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

int func_235()
{
	return is_bit_set(Global_2359301, 3);
}

int func_236(int iParam0, int iParam1, var uParam2, int iParam3)
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

bool func_237()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_238(int iParam0)
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

void func_239(int iParam0, int iParam1)
{
	struct<97> Var0;
	int iVar109;
	int iVar110;
	
	Var0.f_1 = -1;
	Var0.f_17 = 4;
	Var0.f_17.f_8 = 4;
	Var0.f_17.f_13 = 4;
	Var0.f_17.f_18 = 4;
	Var0.f_17.f_24 = 4;
	Var0.f_17.f_29 = 4;
	Var0.f_17.f_34 = 4;
	Var0.f_62 = 8;
	Var0.f_96.f_7 = 21;
	Var0.f_96.f_8 = 6;
	Var0.f_17.f_5 = 0;
	Var0.f_17.f_6 = 0;
	Var0 = 0;
	Var0.f_2 = iParam0;
	Var0.f_62.f_15 = 0;
	func_616(Var0.f_2, &(Var0.f_3));
	if (is_screen_faded_out())
	{
		if (func_615(iParam1, 64))
		{
			func_614(Global_89782[iParam0 /*3*/], -1082130432, 350, 1114636288, 0);
			if (!func_613(Var0.f_3))
			{
				iVar109 = func_612(Var0.f_3);
				while (!func_608(iVar109, 1))
				{
					wait(0);
				}
			}
		}
	}
	iVar110 = 1;
	while (is_player_playing(player_id()) && iVar110)
	{
		if (!func_240(&Var0, iParam1))
		{
		}
		else
		{
			iVar110 = 0;
		}
		wait(0);
	}
}

int func_240(var uParam0, var uParam1)
{
	return func_241(uParam0, 526778/*func_607*/, 526607/*func_606*/, uParam1);
}

bool func_241(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<97> Var1;
	vector3 vVar121;
	int iVar124;
	vector3 vVar125;
	var uVar128;
	vector3 vVar129;
	vector3 vVar132;
	Vector3 fVar135;
	char* sVar136;
	char* sVar152;
	char* sVar168;
	var uVar172;
	var uVar173;
	var uVar174;
	var uVar175;
	var uVar176;
	var uVar177;
	char* sVar178;
	char* sVar184;
	int iVar192;
	float fVar193;
	float fVar194;
	var uVar195;
	struct<65> Var196;
	int iVar261;
	int iVar262;
	int iVar263;
	int iVar264;
	int iVar265;
	Vector3 fVar266;
	Vector3 fVar267;
	int iVar268;
	int iVar269;
	struct<6> Var270;
	int iVar276;
	struct<16> Var277;
	char* sVar293;
	char* sVar309;
	int iVar325;
	int iVar326;
	int iVar327;
	int iVar328;
	char* sVar329;
	int iVar337;
	int iVar338;
	int iVar339;
	int iVar340;
	
	if (!*uParam0.f_62.f_19)
	{
		disable_control_action(0, 75, 1);
	}
	iVar0 = get_game_timer();
	if (iVar0 >= Global_36262 - 1000)
	{
		func_193(2666);
	}
	Var1.f_1 = -1;
	Var1.f_17 = 4;
	Var1.f_17.f_8 = 4;
	Var1.f_17.f_13 = 4;
	Var1.f_17.f_18 = 4;
	Var1.f_17.f_24 = 4;
	Var1.f_17.f_29 = 4;
	Var1.f_17.f_34 = 4;
	Var1.f_62 = 8;
	Var1.f_96.f_7 = 21;
	Var1.f_96.f_8 = 6;
	vVar121 = {5f, 5f, 4f};
	if (*uParam0 == 0)
	{
		iVar124 = func_604(uParam0.f_1, 0, 17, 1, 0);
		if (iVar124 == 1)
		{
			stat_increment(joaat("sp_ambient_switch_count"), 1f);
			*uParam0 = 1;
		}
		if (!*uParam0 == 1)
		{
			if (!Global_69751 == -1)
			{
				if (are_strings_equal(&(Global_82399[Global_69751 /*34*/]), get_this_script_name()))
				{
					*uParam0 = 1;
				}
			}
			else if (func_226() == 36)
			{
				*uParam0 = 1;
			}
		}
	}
	if (*uParam0 == 1)
	{
		*uParam0.f_96.f_2 = 0;
		*uParam0.f_96.f_3 = 0;
		func_603();
		*uParam0.f_61 = func_612(*uParam0.f_3);
		if (func_597(*uParam0.f_2, uParam0.f_4, uParam0.f_7, uParam0.f_8))
		{
			func_592(1);
			if (func_589(uParam0, &vVar125, &uVar128))
			{
				*uParam0.f_4 = {vVar125};
				*uParam0.f_7 = uVar128;
				Global_101154.f_1826.f_539.f_1528[*uParam0.f_3 /*3*/] = {vVar125};
				Global_101154.f_1826.f_539.f_1538[*uParam0.f_3] = uVar128;
				if (Global_91042[*uParam0.f_3] == 2)
				{
					Global_91050[*uParam0.f_3 /*3*/] = {vVar125};
					Global_91060[*uParam0.f_3] = uVar128;
				}
			}
			Global_89453 = *uParam0.f_2;
			if (!is_string_null_or_empty(uParam0.f_8))
			{
				*uParam0.f_16 = get_interior_at_coords_with_type(*uParam0.f_4, uParam0.f_8);
			}
			else if (!_are_coords_colliding_with_exterior(*uParam0.f_4))
			{
				*uParam0.f_16 = get_interior_at_coords(*uParam0.f_4);
			}
			else
			{
				*uParam0.f_16 = 0;
			}
			if (*uParam0.f_16 != 0)
			{
				if (!is_interior_ready(*uParam0.f_16))
				{
					_0x2CA429C029CCF247(*uParam0.f_16);
				}
			}
			if ((*uParam0.f_2 == 222 || *uParam0.f_2 == 223) || *uParam0.f_2 == 224)
			{
				func_582(21, 0);
			}
			func_581(*uParam0.f_2);
			if (func_580(*uParam0.f_2, &vVar129, &vVar132, &fVar135))
			{
				if ((func_579(*uParam0.f_2, &sVar136, &sVar152) || func_578(*uParam0.f_2, &sVar168, &uVar172, &uVar173, &uVar174, &uVar175, &uVar176, &uVar177)) || func_577(*uParam0.f_2, &sVar178))
				{
					*uParam0.f_62.f_10 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
					set_cam_coord(*uParam0.f_62.f_10, vVar129);
					set_cam_rot(*uParam0.f_62.f_10, vVar132, 2);
					set_cam_fov(*uParam0.f_62.f_10, fVar135);
					set_ped_non_creation_area(vVar129 - vVar121, vVar129 + vVar121);
					*uParam0.f_108 = add_scenario_blocking_area(vVar129 - vVar121, vVar129 + vVar121, 0, 1, 1, 1);
					clear_area(vVar129, vmag(vVar121), 1, 0, 0, false);
				}
			}
			func_576();
			if (func_575(*uParam0.f_2, &sVar184))
			{
				func_576();
			}
			Global_90746 = *uParam0.f_2;
			iVar192 = func_574();
			if (iVar192 != 145)
			{
				if (!is_entity_dead(Global_91046[iVar192], 0))
				{
					fVar193 = get_vehicle_engine_health(Global_91046[iVar192]);
					fVar194 = get_vehicle_petrol_tank_health(Global_91046[iVar192]);
					if (fVar193 < -1000f * 0.75f)
					{
						set_vehicle_engine_health(Global_91046[iVar192], -1000f * 0.25f);
					}
					if (fVar194 < -1000f * 0.75f)
					{
						set_vehicle_petrol_tank_health(Global_91046[iVar192], -1000f * 0.25f);
					}
				}
				func_567(player_ped_id(), &(Global_90747[iVar192 /*98*/]), &(Global_91050[iVar192 /*3*/]), &(Global_91060[iVar192]), &(Global_91042[iVar192]), &(Global_2563620[iVar192]));
				func_566(player_ped_id(), 0);
				func_559(player_ped_id());
			}
			else if (!is_entity_dead(player_ped_id(), 0))
			{
				set_entity_coords(player_ped_id(), vVar129, 0, false, 0, 1);
				freeze_entity_position(player_ped_id(), true);
			}
			func_556(*uParam0.f_3, *uParam0.f_2);
			iLocal_65 = 0;
			Global_25167 = get_game_timer();
			set_air_drag_multiplier_for_players_vehicle(player_id(), 10f);
			request_model(func_179(*uParam0.f_3));
			*uParam0 = 3;
		}
		else
		{
			return true;
		}
	}
	if (*uParam0 == 2)
	{
		*uParam0 = 3;
		iLocal_65++;
		request_model(func_179(*uParam0.f_3));
		if (*uParam0.f_16 != 0)
		{
			if (!is_interior_ready(*uParam0.f_16))
			{
				_0x2CA429C029CCF247(*uParam0.f_16);
				*uParam0 = 2;
				if (iLocal_65 > 150)
				{
					iLocal_65 = 0;
					if (!is_string_null_or_empty(uParam0.f_8))
					{
						*uParam0.f_16 = get_interior_at_coords_with_type(*uParam0.f_4, uParam0.f_8);
					}
					else
					{
						*uParam0.f_16 = get_interior_at_coords(*uParam0.f_4);
					}
					*uParam0 = 3;
				}
			}
		}
	}
	if (*uParam0 == 3)
	{
		if (*uParam0.f_2 == 1)
		{
			uVar195 = func_555(*uParam0.f_61);
			if (!is_entity_dead(*uParam0.f_17[uVar195], 0))
			{
				if (does_entity_belong_to_this_script(*uParam0.f_17[uVar195], 1))
				{
					set_ped_as_no_longer_needed(uParam0.f_17[uVar195]);
				}
			}
			*uParam0.f_17[*uParam0.f_61] = 0;
			*uParam0.f_2 = 1;
		}
		if (func_550(uParam0, 0))
		{
			Var196 = {Global_101154.f_1826.f_539[*uParam0.f_61 /*65*/]};
			iVar261 = false;
			if ((*uParam0.f_2 == 5 || *uParam0.f_2 == 6) || *uParam0.f_2 == 7)
			{
				iVar261 = true;
			}
			if (func_395(uParam0.f_17[*uParam0.f_61], *uParam0.f_3, *uParam0.f_4, *uParam0.f_7, 1, 0, iVar261))
			{
				if ((*uParam0.f_2 == 5 || *uParam0.f_2 == 6) || *uParam0.f_2 == 7)
				{
					if ((does_entity_exist(*uParam0.f_62.f_13) && does_entity_exist(*uParam0.f_62.f_12)) && get_ideal_player_switch_type(get_entity_coords(*uParam0.f_62.f_13, 0), get_entity_coords(*uParam0.f_62.f_12, 0)) != 3)
					{
						Global_101154.f_1826.f_539[*uParam0.f_61 /*65*/] = {Var196};
					}
				}
				func_394(*uParam0.f_17[*uParam0.f_61]);
				if ((*uParam0.f_2 == 5 || *uParam0.f_2 == 6) || *uParam0.f_2 == 7)
				{
				}
				else
				{
					set_entity_visible(*uParam0.f_17[*uParam0.f_61], false, 0);
				}
				freeze_entity_position(*uParam0.f_17[*uParam0.f_61], true);
				func_393(uParam0);
				*uParam0.f_17.f_39 = 1;
				*uParam0.f_17.f_7 = *uParam0.f_61;
				*uParam0.f_62.f_12 = *uParam0.f_17[*uParam0.f_61];
				Global_91067 = -1;
				func_390(*uParam0.f_2);
				if ((does_entity_exist(*uParam0.f_62.f_13) && does_entity_exist(*uParam0.f_62.f_12)) && get_ideal_player_switch_type(get_entity_coords(*uParam0.f_62.f_13, 0), get_entity_coords(*uParam0.f_62.f_12, 0)) == 3)
				{
					if (!_0x66680A92700F43DF(*uParam0.f_17[*uParam0.f_61]))
					{
						iVar262 = get_game_timer();
						while (iVar262 + 500 < get_game_timer() && iVar262 > 0)
						{
							if (_0x66680A92700F43DF(*uParam0.f_17[*uParam0.f_61]))
							{
								iVar262 = -1;
							}
							wait(0);
						}
						if (!iVar262 == -1)
						{
						}
					}
				}
				_0x3910051CCECDB00C(*uParam0.f_62.f_12, true);
				set_entity_load_collision_flag(*uParam0.f_62.f_12, true);
				set_ped_get_out_upside_down_vehicle(*uParam0.f_62.f_12, 0);
				_0x5AAB586FFEC0FD96(*uParam0.f_17[*uParam0.f_61]);
				Stack.Push(uParam0);
				Call_Loc(iParam1);
				*uParam0 = {StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal};
				*uParam0 = 4;
			}
		}
		else
		{
			*uParam0.f_17.f_39 = 1;
			*uParam0.f_17.f_7 = *uParam0.f_61;
			*uParam0.f_62.f_12 = *uParam0.f_17[*uParam0.f_61];
			if (*uParam0.f_62.f_12 != player_ped_id())
			{
				set_entity_as_mission_entity(*uParam0.f_62.f_12, true, 1);
			}
			_0x3910051CCECDB00C(*uParam0.f_62.f_12, true);
			set_entity_load_collision_flag(*uParam0.f_62.f_12, true);
			set_ped_get_out_upside_down_vehicle(*uParam0.f_62.f_12, 0);
			clear_area_of_projectiles(*uParam0.f_4, 10f, 0);
			if (!func_389(*uParam0.f_4, get_entity_coords(*uParam0.f_62.f_12, 1), 5f, 0) && !func_389(*uParam0.f_4, 0f, 0f, 0f, 5f, 0))
			{
				if ((*uParam0.f_2 == 5 || *uParam0.f_2 == 6) || *uParam0.f_2 == 7)
				{
				}
			}
			Global_91067 = -1;
			func_390(*uParam0.f_2);
			_0x5AAB586FFEC0FD96(*uParam0.f_17[*uParam0.f_61]);
			Stack.Push(uParam0);
			Call_Loc(iParam1);
			*uParam0 = {StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal};
			*uParam0 = 4;
		}
	}
	if (*uParam0 == 4)
	{
		iVar263 = false;
		iVar264 = false;
		iVar265 = 0;
		fVar266 = 0f;
		fVar267 = 0f;
		iVar268 = false;
		iVar269 = false;
		func_387(uParam0, &iVar263, &iVar264, &iVar265, &fVar266, &fVar267, &iVar268, &iVar269, &uParam3);
		if (is_string_null_or_empty(uParam0.f_8))
		{
			if (func_577(*uParam0.f_2, &Var270))
			{
				MemCopy(uParam0.f_8, {Var270}, 8);
			}
		}
		if (*uParam0.f_2 == 231)
		{
			if (!iVar268)
			{
				iVar268 = true;
			}
		}
		iVar276 = false;
		if (!does_cam_exist(*uParam0.f_62.f_10))
		{
			if (func_386(uParam0.f_62, iVar265, uParam3, fVar266, fVar267, iVar268, iVar269, uParam0.f_8, 0, 0))
			{
				iVar276 = true;
			}
		}
		else
		{
			MemCopy(&Var277, {*uParam0.f_8}, 16);
			if (!is_string_null_or_empty(&Var277))
			{
				func_579(*uParam0.f_2, &sVar293, &sVar309);
				if (!is_string_null_or_empty(&sVar309))
				{
					StringConCat(&Var277, &sVar309, 64);
				}
			}
			if (func_369(uParam0.f_62, *uParam0.f_62.f_10, iVar265, uParam3, fVar266, fVar267, iVar268, iVar269, &Var277, 2))
			{
				iVar276 = true;
			}
		}
		if (iVar276)
		{
			iVar326 = 3;
			iVar327 = 8;
			if (Global_3)
			{
				iVar326 = 7;
				iVar327 = 7;
			}
			if (get_player_switch_type() != 3)
			{
				iVar325 = get_player_switch_state();
				if ((iVar325 == 8 || iVar325 == 11) || ((get_player_switch_type() == 2 && iVar325 == 3) && !((*uParam0.f_2 == 5 || *uParam0.f_2 == 6) || *uParam0.f_2 == 7)))
				{
					if (_0x78C0D93253149435() == 0)
					{
						if (Global_91066 > 0)
						{
							if (Global_91067 < 0)
							{
								Global_91067 = get_game_timer();
							}
							else
							{
								iVar328 = 12500;
								if (iVar325 == 11)
								{
									iVar328 = round(to_float(iVar328) * 1.75f);
								}
								if (func_575(*uParam0.f_2, &sVar329))
								{
									iVar328 = round(to_float(iVar328) * 1.75f);
								}
								if (get_game_timer() > Global_91067 + iVar328)
								{
									func_367();
									_0x74DE2E8739086740();
									Global_91067 = -1;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar325 = iVar326;
				iVar327 = iVar326;
			}
			func_342(uParam0);
			if (!is_screen_faded_in() && !is_screen_fading_in())
			{
				if (iVar325 != 1)
				{
					do_screen_fade_in(800);
				}
			}
			if (func_615(uParam3, 512))
			{
				if (iVar325 == 1)
				{
					Stack.Push(uParam0);
					Stack.Push(&Var1);
					Stack.Push(uParam3);
					Call_Loc(iParam2);
				}
			}
			if (iVar325 >= iVar326)
			{
				Stack.Push(uParam0);
				Stack.Push(&Var1);
				Stack.Push(uParam3);
				Call_Loc(iParam2);
				if (StackVal)
				{
					if (!*uParam0.f_62.f_19)
					{
						if (*uParam0.f_62.f_18 && iVar325 >= iVar327)
						{
							iVar337 = false;
							if (func_288(uParam0.f_17, iVar263, iVar264, 0))
							{
								iVar337 = true;
							}
							if (iVar337)
							{
								if (does_entity_exist(*uParam0.f_62.f_13))
								{
									set_entity_load_collision_flag(*uParam0.f_62.f_13, true);
								}
								func_287(uParam0.f_17);
								func_342(uParam0);
								func_275();
								set_air_drag_multiplier_for_players_vehicle(player_id(), 1f);
								Global_89089 = {*uParam0.f_17};
								*uParam0.f_62.f_19 = 1;
							}
						}
					}
				}
			}
			if (iVar325 >= 3)
			{
				set_playerpad_shakes_when_controller_disabled(0);
			}
			if (Global_88922)
			{
				if (*uParam0.f_62.f_19)
				{
					if (func_273(uParam0))
					{
						Global_88922 = 0;
					}
				}
			}
		}
		else
		{
			*uParam0 = 5;
		}
	}
	if (*uParam0 == 5)
	{
		if (does_cam_exist(*uParam0.f_62.f_10))
		{
			if (is_cam_active(*uParam0.f_62.f_10))
			{
				if (is_cam_interpolating(*uParam0.f_62.f_10))
				{
				}
				else
				{
					set_cam_active(*uParam0.f_62.f_10, false);
					destroy_cam(*uParam0.f_62.f_10, 0);
				}
			}
			else
			{
				set_cam_active(*uParam0.f_62.f_10, false);
				destroy_cam(*uParam0.f_62.f_10, 0);
			}
			remove_scenario_blocking_area(*uParam0.f_108, 0);
			clear_ped_non_creation_area();
		}
		else
		{
			if (does_cam_exist(*uParam0.f_62.f_9))
			{
				destroy_cam(*uParam0.f_62.f_9, 0);
			}
			if (*uParam0.f_62.f_24 > 0)
			{
				iVar338 = 0;
				while (iVar338 <= *uParam0.f_62.f_24 - 1)
				{
					if (does_cam_exist(*uParam0.f_62[iVar338]))
					{
						destroy_cam(*uParam0.f_62[iVar338], 0);
					}
					iVar338++;
				}
			}
			if (((*uParam0.f_2 != 8 && *uParam0.f_2 != 9) && *uParam0.f_2 != 10) && *uParam0.f_2 != 55)
			{
				func_592(*uParam0.f_62.f_21);
			}
			*uParam0.f_62.f_15 = 0;
			*uParam0.f_62.f_16 = 0;
			*uParam0.f_62.f_17 = 0;
			*uParam0.f_62.f_18 = 0;
			*uParam0.f_62.f_19 = 0;
			*uParam0.f_62.f_20 = 0;
			*uParam0.f_62.f_24 = 0;
			if (!Global_36805)
			{
				stop_gameplay_cam_shaking(true);
				_0x487A82C650EB7799(0f);
				_0x0225778816FDC28C(0f);
			}
			render_script_cams(false, true, 1000, 1, 0, 0);
			if (!is_ped_injured(player_ped_id()))
			{
				set_player_control(player_id(), true, 0);
				set_player_invincible(player_id(), 0);
				set_entity_visible(player_ped_id(), true, 0);
				freeze_entity_position(player_ped_id(), false);
				set_ped_can_be_targetted(player_ped_id(), true);
				set_air_drag_multiplier_for_players_vehicle(player_id(), 1f);
				if (!is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					set_entity_collision(player_ped_id(), true, 0);
				}
			}
			func_272(0);
			if (!is_ped_injured(*uParam0.f_62.f_13))
			{
				set_entity_load_collision_flag(*uParam0.f_62.f_13, false);
				_0x3910051CCECDB00C(*uParam0.f_62.f_13, true);
				set_ped_get_out_upside_down_vehicle(*uParam0.f_62.f_12, 1);
			}
			if (!is_ped_injured(*uParam0.f_62.f_12))
			{
				set_entity_invincible(*uParam0.f_62.f_12, false);
				set_ped_get_out_upside_down_vehicle(*uParam0.f_62.f_12, 1);
				if (*uParam0.f_62.f_12 != player_ped_id())
				{
					set_entity_load_collision_flag(*uParam0.f_62.f_12, false);
				}
			}
			*uParam0 = 6;
		}
	}
	if (*uParam0 == 6)
	{
		if (*uParam0.f_16 != 0)
		{
			unpin_interior(*uParam0.f_16);
		}
		clear_focus();
		set_model_as_no_longer_needed(func_179(*uParam0.f_3));
		iVar339 = func_574();
		if (iVar339 != 145)
		{
			if (!is_entity_dead(Global_91046[iVar339], 0))
			{
				if (does_entity_belong_to_this_script(Global_91046[iVar339], 1))
				{
					set_vehicle_as_no_longer_needed(&(Global_91046[iVar339]));
				}
			}
			iVar340 = Global_90747[iVar339 /*98*/];
			if (iVar340 != 0)
			{
				set_model_as_no_longer_needed(iVar340);
			}
		}
		func_271(*uParam0.f_3);
		if ((((((*uParam0.f_2 != 5 && *uParam0.f_2 != 6) && *uParam0.f_2 != 7) && *uParam0.f_2 != 2) && *uParam0.f_2 != 3) && *uParam0.f_2 != 4) && *uParam0.f_2 != 1)
		{
			Global_101154.f_17223[*uParam0.f_3] = *uParam0.f_2;
			func_269(*uParam0.f_3, *uParam0.f_2);
		}
		if (*uParam0.f_2 == 1)
		{
			func_268(&(Global_101154.f_1826.f_539), -1);
		}
		func_267(*uParam0.f_3);
		func_247(uParam0, &Var1);
		func_245(uParam0);
		func_242(*uParam0.f_2);
		func_58(&Global_1312464);
		func_58(&(Global_101154.f_1826.f_539.f_1524[*uParam0.f_3]));
		if (is_audio_scene_active("TOD_SHIFT_SCENE"))
		{
			stop_sound(*uParam0.f_96.f_10);
			release_named_script_audio_bank("TIME_LAPSE");
			stop_audio_scene("TOD_SHIFT_SCENE");
		}
		Global_101154.f_1826.f_539.f_1528[*uParam0.f_3 /*3*/] = {0f, 0f, 0f};
		Global_101154.f_1826.f_539.f_1538[*uParam0.f_3] = 0f;
		Global_101154.f_1826.f_539.f_1542[*uParam0.f_3] = 0;
		Global_101154.f_1826.f_539.f_1546[*uParam0.f_3 /*3*/] = {0f, 0f, 0f};
		Global_88922 = 0;
		Global_91067 = -1;
		func_199(uParam0.f_1);
		if (((*uParam0.f_2 != 8 && *uParam0.f_2 != 9) && *uParam0.f_2 != 10) && *uParam0.f_2 != 55)
		{
			func_592(0);
		}
		return true;
	}
	return false;
}

bool func_242(int iParam0)
{
	char* sVar0;
	char* sVar16;
	char* sVar32;
	char* sVar48;
	char* sVar64;
	var uVar80;
	var uVar81;
	
	if (func_579(iParam0, &sVar0, &sVar16))
	{
		if (func_243(iParam0, &sVar32, &sVar48, &sVar64, &uVar80, &uVar81))
		{
			remove_anim_dict(&sVar32);
			return true;
		}
	}
	return false;
}

bool func_243(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
{
	*uParam4 = 9;
	*uParam5 = 0;
	switch (iParam0)
	{
		case 11:
			StringCopy(sParam1, "SWITCH@FRANKLIN@STRIPCLUB", 64);
			StringCopy(sParam2, "002113_02_FRAS_15_STRIPCLUB_IDLE", 64);
			StringCopy(sParam3, "002113_02_FRAS_15_STRIPCLUB_EXIT", 64);
			return true;
			break;
		
		case 124:
			StringCopy(sParam1, "SWITCH@MICHAEL@WASH_FACE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 234:
			StringCopy(sParam1, "SWITCH@TREVOR@ON_TOILET", 64);
			StringCopy(sParam2, "trev_on_toilet_loop", 64);
			StringCopy(sParam3, "trev_on_toilet_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
			break;
		
		case 316:
			StringCopy(sParam1, "SWITCH@TREVOR@JERKING_OFF", 64);
			StringCopy(sParam2, "trev_jerking_off_loop", 64);
			StringCopy(sParam3, "trev_jerking_off_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
			break;
		
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return true;
			break;
		
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return true;
			break;
		
		case 79:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_3", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return true;
			break;
		
		case 80:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return true;
			break;
		
		case 82:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCREAMING", 64);
			StringCopy(sParam2, "001671_02_MICS2_1_WAKES_UP_SCREAMING_IDLE", 64);
			StringCopy(sParam3, "001671_02_MICS2_1_WAKES_UP_SCREAMING_EXIT", 64);
			return true;
			break;
		
		case 84:
			StringCopy(sParam1, "SAVECountryside@", 64);
			StringCopy(sParam2, "M_Sleep_Loop_countryside", 64);
			StringCopy(sParam3, "M_GetOut_countryside", 64);
			return true;
			break;
		
		case 83:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCARED", 64);
			StringCopy(sParam2, "001672_02_MICS2_1_WAKES_UP_SCARED_IDLE", 64);
			StringCopy(sParam3, "001672_02_MICS2_1_WAKES_UP_SCARED_EXIT", 64);
			return true;
			break;
		
		case 85:
			StringCopy(sParam1, "SWITCH@MICHAEL@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 291:
			StringCopy(sParam1, "SWITCH@TREVOR@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			return true;
			break;
		
		case 128:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return true;
			break;
		
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 87:
		case 88:
		case 184:
		case 185:
			StringCopy(sParam1, "SWITCH@MICHAEL@SUNLOUNGER", 64);
			StringCopy(sParam2, "SunLounger_Idle", 64);
			StringCopy(sParam3, "SunLounger_GetUp", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
			break;
		
		case 89:
		case 90:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_MICHAEL", 64);
			return true;
			break;
		
		case 127:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_PREMIER_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_PREMIER_MICHAEL", 64);
			return true;
			break;
		
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
		case 126:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
			break;
		
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 95:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXIT_RESTAURANT", 64);
			StringCopy(sParam2, "mic_exit_restaurant_loop", 64);
			StringCopy(sParam3, "mic_exit_restaurant_exit", 64);
			return true;
			break;
		
		case 134:
			StringCopy(sParam1, "SWITCH@MICHAEL@DRUNK_BAR", 64);
			StringCopy(sParam2, "Drunk_Idle_PED", 64);
			StringCopy(sParam3, "Drunk_Exit_PED", 64);
			return true;
			break;
		
		case 108:
		case 109:
			StringCopy(sParam1, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(sParam2, "parkbench_smoke_ranger_loop", 64);
			StringCopy(sParam3, "parkbench_smoke_ranger_exit", 64);
			return true;
			break;
		
		case 112:
		case 113:
		case 123:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_BONNET", 64);
			StringCopy(sParam2, "sitting_on_car_bonnet_loop", 64);
			StringCopy(sParam3, "sitting_on_car_bonnet_exit", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
			break;
		
		case 41:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_PREMIERE", 64);
			StringCopy(sParam2, "SITTING_ON_CAR_PREMIERE_LOOP_PLAYER", 64);
			StringCopy(sParam3, "SITTING_ON_CAR_PREMIERE_EXIT_PLAYER", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
			break;
		
		case 114:
			StringCopy(sParam1, "SWITCH@MICHAEL@PHARMACY", 64);
			StringCopy(sParam2, "mics1_ig_11_loop", 64);
			StringCopy(sParam3, "mics1_ig_11_exit", 64);
			return true;
			break;
		
		case 105:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_Aggitated", 64);
			*uParam5 |= 32;
			return true;
			break;
		
		case 106:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitWheel", 64);
			*uParam5 |= 32;
			return true;
			break;
		
		case 107:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitHorn", 64);
			*uParam5 |= 32;
			return true;
			break;
		
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_MIC", 64);
			return true;
			break;
		
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_MIC", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_MIC", 64);
			return true;
			break;
		
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_MIC", 64);
			return true;
			break;
		
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_MIC", 64);
			return true;
			break;
		
		case 103:
			StringCopy(sParam1, "SWITCH@MICHAEL@PIER", 64);
			StringCopy(sParam2, "pier_lean_smoke_idle", 64);
			StringCopy(sParam3, "pier_lean_smoke_outro", 64);
			*uParam5 |= 68;
			return true;
			break;
		
		case 121:
			StringCopy(sParam1, "SWITCH@MICHAEL@MARINA", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
			break;
		
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_michael", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_michael", 64);
			return true;
			break;
		
		case 125:
			StringCopy(sParam1, "SWITCH@MICHAEL@WALK_AND_TALK", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "Im_A_Married_Man_Michael", 64);
			return true;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "Cafe_Idle_PED", 64);
			StringCopy(sParam3, "Cafe_Exit_PED", 64);
			return true;
			break;
		
		case 110:
		case 111:
		case 131:
		case 132:
			StringCopy(sParam1, "SWITCH@MICHAEL@BENCH", 64);
			StringCopy(sParam2, "bench_on_phone_idle", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1026;
			return true;
			break;
		
		case 129:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_CLUBCHAIR", 64);
			StringCopy(sParam2, "Switch_ON_CLUBCHAIR_BASE", 64);
			StringCopy(sParam3, "Switch_ON_CLUBCHAIR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 130:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_5", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_1_MICHAEL", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_MICHAEL", 64);
			return true;
			break;
		
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_MICHAEL", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_MICHAEL", 64);
			return true;
			break;
		
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_MIC", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_MIC", 64);
			return true;
			break;
		
		case 153:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "001400_01_MICS3_5_BYE_TO_SOLOMAN_IDLE", 64);
			StringCopy(sParam3, "001400_01_MICS3_5_BYE_TO_SOLOMAN_EXIT", 64);
			return true;
			break;
		
		case 154:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_MIC", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_MIC", 64);
			return true;
			break;
		
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Michael", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Michael", 64);
			return true;
			break;
		
		case 157:
			StringCopy(sParam1, "SWITCH@MICHAEL@REJECTED_ENTRY", 64);
			StringCopy(sParam2, "001396_01_MICS3_6_REJECTED_ENTRY_IDLE_MIC", 64);
			StringCopy(sParam3, "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_MIC", 64);
			return true;
			break;
		
		case 159:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_BARBER", 64);
			StringCopy(sParam2, "001406_01_MICS3_7_EXITS_BARBER_IDLE", 64);
			StringCopy(sParam3, "001406_01_MICS3_7_EXITS_BARBER_EXIT", 64);
			return true;
			break;
		
		case 160:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_FANCYSHOP", 64);
			StringCopy(sParam2, "001405_01_MICS3_8_EXITS_FANCYSHOP_IDLE", 64);
			StringCopy(sParam3, "001405_01_MICS3_8_EXITS_FANCYSHOP_EXIT", 64);
			return true;
			break;
		
		case 161:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_MIC", 64);
			return true;
			break;
		
		case 164:
			StringCopy(sParam1, "SWITCH@MICHAEL@READS_SCRIPT", 64);
			StringCopy(sParam2, "001404_01_MICS3_16_READS_SCRIPT_IDLE", 64);
			StringCopy(sParam3, "001404_01_MICS3_16_READS_SCRIPT_EXIT", 64);
			return true;
			break;
		
		case 165:
			StringCopy(sParam1, "SWITCH@MICHAEL@BAR_EMPLOYEE_CONVO", 64);
			StringCopy(sParam2, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_IDLE_MIC", 64);
			StringCopy(sParam3, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_MIC", 64);
			return true;
			break;
		
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return true;
			break;
		
		case 166:
			StringCopy(sParam1, "SWITCH@MICHAEL@TALKS_TO_GUARD", 64);
			StringCopy(sParam2, "001393_02_MICS3_3_TALKS_TO_GUARD_IDLE_MIC", 64);
			StringCopy(sParam3, "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_MIC", 64);
			return true;
			break;
		
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_MIC", 64);
			return true;
			break;
		
		case 168:
			StringCopy(sParam1, "SWITCH@MICHAEL@TV_W_KIDS", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_TV_W_KIDS_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_TV_W_KIDS_EXIT_MIC", 64);
			return true;
			break;
		
		case 173:
			StringCopy(sParam1, "SWITCH@MICHAEL@BIKING_WITH_JIMMY", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return true;
			break;
		
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_MIC", 64);
			return true;
			break;
	}
	switch (iParam0)
	{
		case 186:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_APT", 64);
			StringCopy(sParam2, "001918_01_FRAS_V2_1_CLEANING_APT_IDLE", 64);
			StringCopy(sParam3, "001918_01_FRAS_V2_1_CLEANING_APT_EXIT", 64);
			return true;
			break;
		
		case 187:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_CELL", 64);
			StringCopy(sParam2, "001914_01_FRAS_V2_2_ON_CELL_IDLE", 64);
			StringCopy(sParam3, "001914_01_FRAS_V2_2_ON_CELL_EXIT", 64);
			return true;
			break;
		
		case 188:
			StringCopy(sParam1, "SWITCH@FRANKLIN@SNACKING", 64);
			StringCopy(sParam2, "001922_01_FRAS_V2_3_SNACKING_IDLE", 64);
			StringCopy(sParam3, "001922_01_FRAS_V2_3_SNACKING_EXIT", 64);
			return true;
			break;
		
		case 189:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_IDLE", 64);
			StringCopy(sParam3, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT", 64);
			return true;
			break;
		
		case 190:
			StringCopy(sParam1, "SWITCH@FRANKLIN@IRONING", 64);
			StringCopy(sParam2, "001947_01_GC_FRAS_V2_IG_6_BASE", 64);
			StringCopy(sParam3, "001947_01_GC_FRAS_V2_IG_6_EXIT", 64);
			return true;
			break;
		
		case 191:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WATCHING_TV", 64);
			StringCopy(sParam2, "001915_01_FRAS_V2_8_WATCHING_TV_IDLE", 64);
			StringCopy(sParam3, "001915_01_FRAS_V2_8_WATCHING_TV_EXIT", 64);
			return true;
			break;
		
		case 175:
		case 176:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Sleep_LOOP", 64);
			StringCopy(sParam3, "Sleep_GetUp_RubEyes", 64);
			return true;
			break;
		
		case 177:
			StringCopy(sParam1, "SWITCH@FRANKLIN@NAPPING", 64);
			StringCopy(sParam2, "002333_01_FRAS_V2_10_NAPPING_IDLE", 64);
			StringCopy(sParam3, "002333_01_FRAS_V2_10_NAPPING_EXIT", 64);
			return true;
			break;
		
		case 178:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GETTING_READY", 64);
			StringCopy(sParam2, "002334_02_FRAS_V2_11_GETTING_DRESSED_IDLE", 64);
			StringCopy(sParam3, "002334_02_FRAS_V2_11_GETTING_DRESSED_EXIT", 64);
			return true;
			break;
		
		case 179:
		case 180:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Bed_Reading_LOOP", 64);
			StringCopy(sParam3, "Bed_Reading_GetUp", 64);
			return true;
			break;
		
		case 181:
		case 182:
		case 183:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PRESS_UPS", 64);
			StringCopy(sParam2, "PressUps_LOOP", 64);
			StringCopy(sParam3, "PressUps_OUT", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_FRANKLIN", 64);
			return true;
			break;
		
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped", 64);
			return true;
			break;
		
		case 194:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return true;
			break;
		
		case 195:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return true;
			break;
		
		case 198:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return true;
			break;
		
		case 199:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE_B", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return true;
			break;
		
		case 200:
			StringCopy(sParam1, "SWITCH@FRANKLIN@THROW_CUP", 64);
			StringCopy(sParam2, "throw_cup_loop", 64);
			StringCopy(sParam3, "throw_cup_exit", 64);
			return true;
			break;
		
		case 201:
			StringCopy(sParam1, "SWITCH@FRANKLIN@HIT_CUP_HAND", 64);
			StringCopy(sParam2, "hit_cup_hand_loop", 64);
			StringCopy(sParam3, "hit_cup_hand_exit", 64);
			return true;
			break;
		
		case 202:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GYM", 64);
			StringCopy(sParam2, "001942_02_GC_FRAS_IG_5_BASE", 64);
			StringCopy(sParam3, "001942_02_GC_FRAS_IG_5_EXIT", 64);
			return true;
			break;
		
		case 203:
		case 206:
		case 207:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return true;
			break;
		
		case 204:
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return true;
			break;
		
		case 211:
		case 213:
		case 216:
		case 217:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ADMIRE_MOTORCYCLE", 64);
			StringCopy(sParam2, "BASE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return true;
			break;
		
		case 212:
		case 214:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_CAR", 64);
			StringCopy(sParam2, "001946_01_GC_FRAS_V2_IG_5_BASE", 64);
			StringCopy(sParam3, "001946_01_GC_FRAS_V2_IG_5_EXIT", 64);
			return true;
			break;
		
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Franklin", 64);
			StringCopy(sParam3, "Tanisha_Argue_Franklin", 64);
			return true;
			break;
		
		case 197:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WALK_AROUND_HOUSE", 64);
			StringCopy(sParam2, "IDLE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return true;
			break;
		
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_FRA", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_FRA", 64);
			return true;
			break;
		
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Franklin", 64);
			StringCopy(sParam3, "switch_P1_Franklin", 64);
			return true;
			break;
		
		case 222:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "CheckShoe", 64);
			return true;
			break;
		
		case 223:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeHands", 64);
			return true;
			break;
		
		case 224:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeRight", 64);
			return true;
			break;
		
		case 226:
		case 227:
		case 230:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_01", 64);
			return true;
			break;
		
		case 228:
		case 229:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_02", 64);
			return true;
			break;
		
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_franklin", 64);
			StringCopy(sParam3, "gang_taunt_exit_franklin", 64);
			return true;
			break;
		
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_frank", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_frank", 64);
			return true;
			break;
		
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_frank", 64);
			return true;
			break;
		
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_frank", 64);
			return true;
			break;
		
		case 232:
		case 233:
			StringCopy(sParam1, "missheist_agency2aig_9", 64);
			StringCopy(sParam2, "Franklin_call_Michael_IDLE_PLAYER", 64);
			StringCopy(sParam3, "Franklin_call_Michael_EXIT_PLAYER", 64);
			return true;
			break;
		
		case 235:
			StringCopy(sParam1, "SWITCH@TREVOR@MOCKS_LAPDANCE", 64);
			StringCopy(sParam2, "001443_01_TRVS_28_IDLE_TRV", 64);
			StringCopy(sParam3, "001443_01_TRVS_28_EXIT_TRV", 64);
			return true;
			break;
		
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
			break;
		
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
			break;
		
		case 238:
			StringCopy(sParam1, "SWITCH@TREVOR@STRIPCLUB", 64);
			StringCopy(sParam2, "trev_leave_stripclub_idle", 64);
			StringCopy(sParam3, "trev_leave_stripclub_outro", 64);
			return true;
			break;
		
		case 239:
			StringCopy(sParam1, "SWITCH@TREVOR@ESCORTED_OUT", 64);
			StringCopy(sParam2, "001215_02_TRVS_12_ESCORTED_OUT_IDLE_TRV", 64);
			StringCopy(sParam3, "001215_02_TRVS_12_ESCORTED_OUT_EXIT_TRV", 64);
			return true;
			break;
		
		case 273:
		case 274:
			StringCopy(sParam1, "SWITCH@TREVOR@PUKING_INTO_FOUNTAIN", 64);
			StringCopy(sParam2, "trev_fountain_puke_loop", 64);
			StringCopy(sParam3, "trev_fountain_puke_exit", 64);
			return true;
			break;
		
		case 245:
		case 40:
			StringCopy(sParam1, "SWITCH@TREVOR@TREV_SMOKING_METH", 64);
			StringCopy(sParam2, "TREV_SMOKING_METH_LOOP", 64);
			StringCopy(sParam3, "TREV_SMOKING_METH_EXIT", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
			break;
		
		case 315:
			StringCopy(sParam1, "SWITCH@TREVOR@HEAD_IN_SINK", 64);
			StringCopy(sParam2, "trev_sink_idle", 64);
			StringCopy(sParam3, "trev_sink_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return true;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			StringCopy(sParam1, "SWITCH@TREVOR@AT_THE_DOCKS", 64);
			StringCopy(sParam2, "001209_01_TRVS_3_AT_THE_DOCKS_IDLE", 64);
			StringCopy(sParam3, "001209_01_TRVS_3_AT_THE_DOCKS_EXIT", 64);
			return true;
			break;
		
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_TRV", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_TRV", 64);
			return true;
			break;
		
		case 243:
			StringCopy(sParam1, "SWITCH@TREVOR@GARBAGE_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
			break;
		
		case 244:
			StringCopy(sParam1, "SWITCH@TREVOR@THROW_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
			break;
		
		case 271:
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 279:
		case 240:
		case 241:
		case 242:
			StringCopy(sParam1, "SWITCH@TREVOR@SLOUCHED_GET_UP", 64);
			StringCopy(sParam2, "TREV_SLOUCHED_GET_UP_IDLE", 64);
			StringCopy(sParam3, "TREV_SLOUCHED_GET_UP_EXIT", 64);
			return true;
			break;
		
		case 280:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ISLAND", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
			break;
		
		case 246:
			StringCopy(sParam1, "SWITCH@TREVOR@PUSHES_BODYBUILDER", 64);
			StringCopy(sParam2, "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_TRV", 64);
			StringCopy(sParam3, "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_TRV", 64);
			return true;
			break;
		
		case 286:
			StringCopy(sParam1, "SWITCH@TREVOR@RUDE_AT_CAFE", 64);
			StringCopy(sParam2, "001218_03_TRVS_23_RUDE_AT_CAFE_IDLE_TRV", 64);
			StringCopy(sParam3, "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_TRV", 64);
			return true;
			break;
		
		case 247:
			StringCopy(sParam1, "SWITCH@TREVOR@ANNOYS_SUNBATHERS", 64);
			StringCopy(sParam2, "trev_annoys_sunbathers_loop_trevor", 64);
			StringCopy(sParam3, "trev_annoys_sunbathers_exit_trevor", 64);
			return true;
			break;
		
		case 263:
			StringCopy(sParam1, "SWITCH@TREVOR@SCARES_TRAMP", 64);
			StringCopy(sParam2, "TREV_SCARES_TRAMP_IDLE_TREVOR", 64);
			StringCopy(sParam3, "TREV_SCARES_TRAMP_EXIT_TREVOR", 64);
			return true;
			break;
		
		case 278:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ON_BRIDGE", 64);
			StringCopy(sParam2, "002055_01_TRVS_17_NAKED_ON_BRIDGE_IDLE", 64);
			StringCopy(sParam3, "002055_01_TRVS_17_NAKED_ON_BRIDGE_EXIT", 64);
			return true;
			break;
		
		case 264:
			StringCopy(sParam1, "SWITCH@TREVOR@DUMPSTER", 64);
			StringCopy(sParam2, "002002_01_TRVS_14_DUMPSTER_IDLE", 64);
			StringCopy(sParam3, "002002_01_TRVS_14_DUMPSTER_EXIT", 64);
			return true;
			break;
		
		case 255:
			StringCopy(sParam1, "SWITCH@TREVOR@FUNERAL_HOME", 64);
			StringCopy(sParam2, "trvs_ig_11_loop", 64);
			StringCopy(sParam3, "trvs_ig_11_exit", 64);
			return true;
			break;
		
		case 285:
			StringCopy(sParam1, "SWITCH@TREVOR@BRIDGE", 64);
			StringCopy(sParam2, "HOLD_LOOP_trevor", 64);
			StringCopy(sParam3, "THROW_EXIT_trevor", 64);
			return true;
			break;
		
		case 259:
			StringCopy(sParam1, "SWITCH@TREVOR@YELLS_AT_DOORMAN", 64);
			StringCopy(sParam2, "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_TRV", 64);
			StringCopy(sParam3, "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_TRV", 64);
			return true;
			break;
		
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_TREVOR", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_TREVOR", 64);
			return true;
			break;
		
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_TRV", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_TRV", 64);
			return true;
			break;
		
		case 254:
			StringCopy(sParam1, "SWITCH@TREVOR@LINGERIE_SHOP", 64);
			StringCopy(sParam2, "trev_exit_lingerie_shop_idle", 64);
			StringCopy(sParam3, "trev_exit_lingerie_shop_outro", 64);
			return true;
			break;
		
		case 287:
			StringCopy(sParam1, "SWITCH@TREVOR@RAND_TEMPLE", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "TAI_CHI_Trevor", 64);
			return true;
			break;
		
		case 288:
			StringCopy(sParam1, "SWITCH@TREVOR@UNDER_PIER", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return true;
			break;
		
		case 289:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
			break;
		
		case 290:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING_SC", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return true;
			break;
		
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_1_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_2_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Get_Along_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return true;
			break;
		
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_trev", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_trev", 64);
			return true;
			break;
		
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_trev", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_trev", 64);
			return true;
			break;
		
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Pineapple_EXIT_TREVOR", 64);
			return true;
			break;
		
		case 304:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return true;
			break;
		
		case 305:
			func_244(iParam0, sParam1, sParam2, sParam3);
			return true;
			break;
		
		case 310:
			StringCopy(sParam1, "SWITCH@TREVOR@DIGGING", 64);
			StringCopy(sParam2, "001433_01_TRVS_26_DIGGING_IDLE", 64);
			StringCopy(sParam3, "001433_01_TRVS_26_DIGGING_EXIT", 64);
			*uParam5 |= 32768;
			return true;
			break;
		
		case 311:
			StringCopy(sParam1, "SWITCH@TREVOR@FLUSHES_FOOT", 64);
			StringCopy(sParam2, "002057_03_TRVS_27_FLUSHES_FOOT_IDLE", 64);
			StringCopy(sParam3, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT", 64);
			*uParam5 |= 32768;
			return true;
			break;
		
		default:
			StringCopy(sParam1, "NULL", 64);
			StringCopy(sParam2, "NULL", 64);
			StringCopy(sParam3, "NULL", 64);
			return false;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return false;
}

void func_244(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	StringCopy(sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@IDLE_A", 64);
	StringCopy(sParam2, "IDLE_A", 64);
	StringCopy(sParam3, "IDLE_A", 64);
}

bool func_245(var uParam0)
{
	if (!is_player_playing(player_id()))
	{
		return false;
	}
	_0xBC9490CA15AEA8FB(player_id());
	switch (*uParam0.f_2)
	{
		case 5:
		case 6:
		case 7:
			func_246(player_ped_id());
			return true;
			break;
		
		case 275:
		case 276:
		case 277:
			set_player_wanted_level_no_drop(player_id(), 2, 0);
			set_player_wanted_level_now(player_id(), 0);
			return true;
			break;
		
		default:
			clear_player_wanted_level(player_id());
			set_player_wanted_level_now(player_id(), 0);
			return false;
			break;
	}
	return false;
}

void func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
	if (func_180(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			set_player_wanted_level(player_id(), Global_101154.f_1826.f_539.f_1556[iVar0], 0);
			set_player_wanted_level_now(player_id(), 0);
		}
	}
}

bool func_247(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar7;
	char* sVar11;
	char* sVar15;
	var uVar19;
	int iVar20;
	
	if (func_264(*uParam0, uParam1))
	{
		iVar0 = *uParam0.f_3;
		iVar1 = *uParam1.f_111;
		if (iVar1 < 144)
		{
			if (func_262(iVar0, iVar1))
			{
				iVar2 = 1;
				func_256(iVar0, iVar1, iVar2);
				return true;
			}
		}
		else if (func_248(*uParam0.f_2, &sVar3, &sVar7, &sVar11, &sVar15, &uVar19))
		{
			switch (get_hash_key(&sVar7))
			{
				case 838283101:
					iVar1 = 17;
					break;
				
				case -366822323:
					iVar1 = 19;
					break;
				
				default:
					return false;
					break;
			}
			if (func_262(iVar0, iVar1))
			{
				iVar20 = 0;
				func_256(iVar0, iVar1, iVar20);
				return true;
			}
		}
	}
	return false;
}

int func_248(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	StringCopy(sParam3, "PRSAUD", 16);
	StringCopy(sParam2, "", 16);
	*uParam5 = 0f;
	switch (iParam0)
	{
		case 11:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_D", 16);
			StringCopy(sParam2, "TANISHA", 16);
			return 1;
			break;
		
		case 8:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_A", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		
		case 9:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_B", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		
		case 10:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_C", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		
		case 13:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FAM3", 16);
			return 1;
			break;
		
		case 15:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FBI2", 16);
			return 1;
			break;
		
		case 12:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FAM1", 16);
			return 1;
			break;
		
		case 16:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI4_0", 16);
			return 1;
			break;
		
		case 17:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBI4_0", 16);
			return 1;
			break;
		
		case 18:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBI3", 16);
			return 1;
			break;
		
		case 19:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI4", 16);
			return 1;
			break;
		
		case 20:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI5", 16);
			return 1;
			break;
		
		case 22:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FAM4", 16);
			return 1;
			break;
		
		case 23:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGE1", 16);
			return 1;
			break;
		
		case 24:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGEp", 16);
			return 1;
			break;
		
		case 58:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FRA2", 16);
			return 1;
			break;
		
		case 59:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FRA2", 16);
			return 1;
			break;
		
		case 60:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBIend", 16);
			return 1;
			break;
		
		case 25:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_CARST1", 16);
			return 1;
			break;
		
		case 26:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CARST1", 16);
			return 1;
			break;
		
		case 27:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGE2", 16);
			return 1;
			break;
		
		case 28:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CARST2", 16);
			return 1;
			break;
		
		case 38:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_RUR2A", 16);
			return 1;
			break;
		
		case 41:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_RUR1", 16);
			return 1;
			break;
		
		case 47:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_EXILE2", 16);
			return 1;
			break;
		
		case 49:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI5b", 16);
			return 1;
			break;
		
		case 48:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_EXILE3", 16);
			return 1;
			break;
		
		case 124:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_MIC2", 16);
			return 1;
			break;
		
		case 51:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_MIC3b", 16);
			return 1;
			break;
		
		case 52:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_DOC2A", 16);
			return 1;
			break;
		
		case 66:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_DOC2A", 16);
			return 1;
			break;
		
		case 61:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_DOC2B", 16);
			return 1;
			break;
		
		case 62:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FIN1", 16);
			return 1;
			break;
		
		case 69:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2A", 16);
			return 1;
			break;
		
		case 64:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FIN2B", 16);
			return 1;
			break;
		
		case 65:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2B", 16);
			return 1;
			break;
		
		case 40:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_MRSP", 16);
			return 1;
			break;
		
		case 54:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN1", 16);
			return 1;
			break;
		
		case 55:
			StringCopy(sParam3, "MIFLAUD", 16);
			StringCopy(sParam4, "MIFL_CALL3", 16);
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam2, "LESTER", 16);
			return 1;
			break;
		
		case 56:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FIN2i", 16);
			return 1;
			break;
		
		case 57:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2i", 16);
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = {func_255("MICS1_IG_4", 3)};
			return 1;
			break;
		
		case 98:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_5", 16);
			return 1;
			break;
		
		case 110:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_9a", 16);
			return 1;
			break;
		
		case 111:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_9b", 16);
			return 1;
			break;
		
		case 103:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS_BEACH", 16);
			return 1;
			break;
		
		case 105:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_7", 16);
			return 1;
			break;
		
		case 106:
			return func_248(105, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 107:
			return func_248(105, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 108:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_8", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		
		case 109:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_8b", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		
		case 114:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_11", 16);
			*uParam5 = 0.15f;
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		
		case 121:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_16", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		
		case 122:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = {func_255("MICS1_IG_18", 3)};
			*uParam5 = 0f;
			if (are_strings_equal(sParam4, "MICS1_IG_18a"))
			{
				*uParam5 = 0.05f;
			}
			if (are_strings_equal(sParam4, "MICS1_IG_18b"))
			{
				*uParam5 = 0.05f;
			}
			if (are_strings_equal(sParam4, "MICS1_IG_18c"))
			{
				*uParam5 = 0.05f;
			}
			return 1;
			break;
		
		case 197:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam2, "LESTER", 16);
			StringCopy(sParam4, "FRAS2_IG_12", 16);
			return 1;
			break;
		
		case 95:
			if (!Global_3)
			{
				StringCopy(sParam1, "MICHAEL", 16);
				StringCopy(sParam4, "PSM_4REST", 16);
				*uParam5 = 0.2f;
				return 1;
			}
			break;
		
		case 96:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_4LUNCHb", 16);
			return 1;
			break;
		
		case 97:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_4LUNCHc", 16);
			*uParam5 = 0.45f;
			return 1;
			break;
		
		case 125:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_HOOKM", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 84:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS_DESERT", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		
		case 151:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_7LUNCHa", 16);
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		
		case 152:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = {func_255("MICS3_IG_9", 3)};
			return 1;
		
		case 153:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_5a", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		
		case 154:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_5b", 16);
			return 1;
			break;
		
		case 155:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_18", 16);
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		
		case 157:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_6", 16);
			return 1;
			break;
		
		case 158:
			StringCopy(sParam1, "MICHAEL", 16);
			*sParam4 = {func_255("PSM_7HOOKER", 3)};
			StringCopy(sParam2, "HOOKER", 16);
			return 1;
			break;
		
		case 161:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_13", 16);
			return 1;
			break;
		
		case 115:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM2_COFFEE", 16);
			return 1;
			break;
		
		case 116:
			return func_248(115, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 117:
			return func_248(115, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 162:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM7_COFFEE", 16);
			return 1;
			break;
		
		case 163:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_7SVHOUSE", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		
		case 166:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_3", 16);
			return 1;
			break;
		
		case 167:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = {func_255("PSM_7LOT_C", 3)};
			return 1;
			break;
		
		case 85:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_2", 16);
			return 1;
			break;
		
		case 168:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_15", 16);
			return 1;
			break;
		
		case 169:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = {func_255("MICS3_IG_11", 3)};
			*uParam5 = 0.2f;
			return 1;
		
		case 170:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = {func_255("MICS3_IG_17", 3)};
			return 1;
		
		case 171:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			StringCopy(sParam4, "PSM_7SHOPb", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 172:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = {func_255("MICS3_IG_21", 3)};
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 175:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1", 16);
			return 1;
			break;
		
		case 176:
			return func_248(175, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 181:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1c", 16);
			return 1;
			break;
		
		case 182:
			return func_248(181, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 183:
			return func_248(181, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 179:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1b", 16);
			return 1;
			break;
		
		case 180:
			return func_248(179, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 220:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam2, "LAMAR", 16);
			StringCopy(sParam4, "FRAS_IG_6_P5", 16);
			return 1;
			break;
		
		case 193:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_2", 16);
			return 1;
			break;
		
		case 194:
			return func_248(193, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 195:
			return func_248(193, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 211:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_BIKEa", 16);
			return 1;
			break;
		
		case 213:
			return func_248(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 216:
			return func_248(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 217:
			return func_248(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 198:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_3", 16);
			return 1;
			break;
		
		case 199:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSM_TRASH", 16);
			return 1;
			break;
		
		case 221:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_8", 16);
			*uParam5 = 0.35f;
			return 1;
			break;
		
		case 208:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_TRAFF", 16);
			return 1;
			break;
		
		case 209:
			return func_248(208, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 210:
			return func_248(208, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 203:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_9", 16);
			return 1;
			break;
		
		case 204:
			return func_248(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 206:
			return func_248(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 207:
			return func_248(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 205:
			return func_248(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 226:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_BAR", 16);
			return 1;
			break;
		
		case 227:
			return func_248(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 228:
			return func_248(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 229:
			return func_248(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 230:
			return func_248(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 235:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_28b", 16);
			return 1;
			break;
		
		case 239:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12a", 16);
			return 1;
			break;
		
		case 240:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12b", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 241:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12c", 16);
			return 1;
			break;
		
		case 242:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12d", 16);
			return 1;
			break;
		
		case 246:
			StringCopy(sParam1, "TREVOR", 16);
			*sParam4 = {func_255("TRVS_IG_5", 3)};
			return 1;
			break;
		
		case 247:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_6", 16);
			*uParam5 = 0.45f;
			return 1;
			break;
		
		case 285:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_29", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 278:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_BRDGEWKa", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 279:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_BRDGEWKb", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 280:
			StringCopy(sParam1, "TREVOR", 16);
			if (!Global_3)
			{
				StringCopy(sParam4, "PST_BRDGEWKc", 16);
			}
			else
			{
				StringCopy(sParam4, "PST_MAGDEMO", 16);
			}
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 272:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WSTRIP", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 265:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHb", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 266:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHc", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 267:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHd", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 268:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHe", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 269:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHf", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 270:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHg", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 255:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_11", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 282:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRb", 16);
			return 1;
			break;
		
		case 248:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_7", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 249:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_8", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 281:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRa", 16);
			return 1;
			break;
		
		case 283:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRc", 16);
			return 1;
			break;
		
		case 284:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRd", 16);
			return 1;
			break;
		
		case 275:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLa", 16);
			return 1;
			break;
		
		case 276:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLb", 16);
			return 1;
			break;
		
		case 277:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLc", 16);
			return 1;
			break;
		
		case 273:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_PARK", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		
		case 274:
			return func_248(273, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 254:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_9", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 256:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARa", 16);
			return 1;
			break;
		
		case 257:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARb", 16);
			return 1;
			break;
		
		case 258:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARc", 16);
			return 1;
			break;
		
		case 259:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_21", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 260:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIYAUGHb", 16);
			return 1;
			break;
		
		case 261:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIYAUGHc", 16);
			return 1;
			break;
		
		case 286:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_23", 16);
			return 1;
			break;
		
		case 288:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_22", 16);
			*uParam5 = 0.3f;
			return 1;
			break;
		
		case 262:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_19", 16);
			return 1;
			break;
		
		case 263:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_20", 16);
			return 1;
			break;
		
		case 289:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_18", 16);
			*uParam5 = 0.214f;
			return 1;
			break;
		
		case 290:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_HSTRIP", 16);
			return 1;
			break;
		
		case 292:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30a", 16);
			return 1;
			break;
		
		case 293:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30b", 16);
			return 1;
			break;
		
		case 294:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30c", 16);
			return 1;
			break;
		
		case 295:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30d", 16);
			return 1;
			break;
		
		case 299:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34a", 16);
			return 1;
			break;
		
		case 300:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34b", 16);
			return 1;
			break;
		
		case 301:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34c", 16);
			return 1;
			break;
		
		case 302:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34d", 16);
			return 1;
			break;
		
		case 303:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34e", 16);
			return 1;
			break;
		
		case 296:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_31", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		
		case 297:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_32", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		
		case 298:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_33", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		
		case 305:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_METH", 16);
			return 1;
			break;
		
		case 306:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_HUNT", 16);
			return 1;
			break;
		
		case 307:
			return func_248(306, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 308:
			return func_248(306, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 309:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_ARMS", 16);
			return 1;
			break;
		
		case 312:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_PIER", 16);
			return 1;
			break;
		
		case 314:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FLY", 16);
			return 1;
			break;
		
		case 82:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_1", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 83:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_1", 16);
			return 1;
			break;
		
		case 187:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_2", 16);
			return 1;
			break;
		
		case 287:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_24", 16);
			return 1;
			break;
		
		case 316:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_2c", 16);
			return 1;
			break;
		
		case 311:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_27", 16);
			return 1;
			break;
		
		case 215:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_7", 16);
			StringCopy(sParam2, "PRLADY", 16);
			return 1;
			break;
		
		case 188:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_CRISP", 16);
			*uParam5 = 0.75f;
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 99:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = {func_255("PSM_SHOPb_", 3)};
			return 1;
			break;
		
		case 100:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = {func_255("PSM_SHOPc_", 3)};
			return 1;
			break;
		
		case 101:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = {func_255("PSM_SHOPd_", 3)};
			return 1;
			break;
		
		case 102:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = {func_255("PSM_SHOPe_", 3)};
			return 1;
			break;
		
		case 131:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "MIC_IG_4", 16);
			*sParam4 = {func_255(sParam4, 3)};
			return 1;
			break;
		
		case 132:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "MIC_IG_4", 16);
			*sParam4 = {func_255(sParam4, 3)};
			return 1;
			break;
		
		case 129:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, func_250(108, &uVar0, &uVar1, &uVar2), 16);
			return 1;
			break;
		
		case 233:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam3, "FB3aAUD", 16);
			StringCopy(sParam4, "F3A_INTRO", 16);
			return 1;
			break;
			break;
		
		case 150:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, func_249(10), 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "RONEX_IG_5", 16);
			*sParam4 = {func_255(sParam4, 2)};
			return 1;
			break;
			break;
		
		case 234:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "TRV_IG_4", 16);
			return 1;
			break;
			break;
	}
	StringCopy(sParam1, "null", 16);
	StringCopy(sParam3, "null", 16);
	StringCopy(sParam4, "null", 16);
	*uParam5 = -1f;
	return 0;
}

char* func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "JIMMY";
			break;
		
		case 1:
			return "TRACEY";
			break;
		
		case 2:
			return "AMANDA";
			break;
		
		case 3:
			return "MAID";
			break;
		
		case 4:
			return "GARDENER";
			break;
		
		case 5:
			return "DENISE";
			break;
		
		case 6:
			return "LAMAR";
			break;
		
		case 7:
			return "STRETCH";
			break;
		
		case 10:
			return "NERVOUSRON";
			break;
		
		case 8:
			return "MICHAEL";
			break;
		
		case 9:
			return "TREVOR";
			break;
		
		case 11:
			return "PATRICIA";
			break;
		
		case 12:
			return "TREVORMOM";
			break;
		
		case 13:
			return "FLOYD";
			break;
		
		case 14:
			return "WADE";
			break;
	}
	return "NULL";
}

char* func_250(int iParam0, var uParam1, var uParam2, var uParam3)
{
	func_253(uParam2, 85);
	switch (iParam0)
	{
		case 0:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 1:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "MIC4_IG_1";
			break;
		
		case 2:
			func_253(uParam2, 32);
			func_251(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_0";
			break;
		
		case 3:
			func_253(uParam2, 32);
			func_251(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_1";
			break;
		
		case 4:
			func_253(uParam2, 32);
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_9_2";
			break;
		
		case 19:
			*uParam1 = 0;
			*uParam3 = 1;
			return "";
			break;
		
		case 18:
			*uParam1 = 12;
			*uParam3 = 1;
			return "FMM_0_0";
			break;
		
		case 5:
			func_253(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_2a";
			break;
		
		case 6:
			func_253(uParam2, 2);
			*uParam1 = 22;
			*uParam3 = 1;
			return "FMM_0_2";
			break;
		
		case 7:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 8:
			func_253(uParam2, 2);
			func_251(uParam2, 16);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 9:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_3";
			break;
		
		case 10:
			func_251(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM_0_6";
			break;
		
		case 11:
			func_251(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "JIM_IG_5";
			break;
		
		case 12:
			func_253(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 13:
			func_253(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 14:
			func_253(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 15:
			func_253(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 16:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_1";
			break;
		
		case 17:
			func_253(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_4";
			break;
		
		case 20:
			*uParam1 = 9;
			*uParam3 = 1;
			return "FAMR_IG_2a";
			break;
		
		case 21:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 22:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 23:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 24:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_5";
			break;
		
		case 25:
			func_253(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_6";
			break;
		
		case 26:
			func_253(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_3";
			break;
		
		case 32:
			if (!Global_3)
			{
				func_253(uParam2, 2);
				func_251(uParam2, 64);
				*uParam1 = 3;
				*uParam3 = 1;
				return "TRA_IG_5";
			}
			else
			{
				func_253(uParam2, 2);
				func_251(uParam2, 64);
				*uParam1 = 5;
				*uParam3 = 1;
				return "TRA_IG_MD";
			}
			break;
		
		case 27:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 41:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_3";
			break;
		
		case 33:
			func_251(uParam2, 16);
			func_253(uParam2, 8);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 38:
			func_253(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_7";
			break;
		
		case 29:
			func_251(uParam2, 64);
			func_253(uParam2, 8);
			func_253(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_6";
			break;
		
		case 30:
			return func_250(29, uParam1, uParam2, uParam3);
			break;
		
		case 31:
			func_253(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_8";
			break;
		
		case 34:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_9";
			break;
		
		case 35:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_15";
			break;
		
		case 37:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 39:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_11";
			break;
		
		case 40:
			*uParam1 = 15;
			*uParam3 = 1;
			return "";
			break;
		
		case 36:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_1";
			break;
		
		case 28:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_6";
			break;
		
		case 42:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 43:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 44:
			*uParam1 = 15;
			*uParam3 = 1;
			return "FMM7_1_0";
			break;
		
		case 45:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_1_1";
			break;
		
		case 46:
			func_253(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 47:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 48:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_10";
			break;
		
		case 68:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_10";
			break;
		
		case 49:
			return func_250(140, uParam1, uParam2, uParam3);
			break;
		
		case 50:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_4";
			break;
		
		case 69:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_4";
			break;
		
		case 51:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 52:
			func_251(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 67:
			func_251(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 53:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_8";
			break;
		
		case 54:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_5";
			break;
		
		case 70:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_5";
			break;
		
		case 55:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		
		case 71:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_1";
			break;
		
		case 56:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 57:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 58:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 59:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_11";
			break;
		
		case 72:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_11";
			break;
		
		case 60:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 61:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 62:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 63:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_6";
			break;
		
		case 64:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		
		case 65:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 66:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 73:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 74:
			func_251(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 75:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_1";
			break;
		
		case 76:
			return func_250(75, uParam1, uParam2, uParam3);
			break;
		
		case 77:
			return func_250(75, uParam1, uParam2, uParam3);
			break;
		
		case 78:
			return func_250(75, uParam1, uParam2, uParam3);
			break;
		
		case 79:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 80:
			*uParam1 = 5;
			*uParam3 = 1;
			return "MA_IG_1b";
			break;
		
		case 81:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_2";
			break;
		
		case 82:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 83:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 84:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_3_0";
			break;
		
		case 85:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_surface";
			break;
		
		case 86:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_window";
			break;
		
		case 87:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_0";
			break;
		
		case 88:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 89:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_4";
			break;
		
		case 90:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_3";
			break;
		
		case 91:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_5";
			break;
		
		case 92:
			*uParam1 = 4;
			*uParam3 = 1;
			return "GAR_IG_6";
			break;
		
		case 93:
			func_253(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_7";
			break;
		
		case 94:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_1";
			break;
		
		case 95:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_2";
			break;
		
		case 96:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_3";
			break;
		
		case 97:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_4";
			break;
		
		case 98:
			func_251(uParam2, 64);
			func_253(uParam2, 130);
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_RETURN";
			break;
		
		case 99:
			*uParam1 = 5;
			*uParam3 = 2;
			return "";
			break;
		
		case 100:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_1";
			break;
		
		case 101:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_2";
			break;
		
		case 102:
			func_251(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_3";
			break;
		
		case 103:
			return func_250(102, uParam1, uParam2, uParam3);
			break;
		
		case 104:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_4";
			break;
		
		case 105:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_5";
			break;
		
		case 106:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_6";
			break;
		
		case 107:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_1";
			break;
		
		case 108:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_2";
			break;
		
		case 109:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_3";
			break;
		
		case 110:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 111:
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 116:
			func_251(uParam2, 64);
			func_253(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_1";
			break;
		
		case 117:
			func_251(uParam2, 64);
			func_253(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_2";
			break;
		
		case 112:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_3";
			break;
		
		case 113:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_4";
			break;
			func_251(uParam2, 64);
			func_251(uParam2, 16);
			func_253(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 114:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_6";
			break;
		
		case 115:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_7";
			break;
		
		case 118:
			*uParam1 = 5;
			*uParam3 = 1;
			return "RONEX_IG_1";
			break;
		
		case 119:
			*uParam1 = 5;
			*uParam3 = 5;
			return "";
			break;
		
		case 120:
			*uParam1 = 5;
			*uParam3 = 7;
			return "";
			break;
		
		case 121:
			*uParam1 = 5;
			*uParam3 = 5;
			return "RONEX_IG_4";
			break;
		
		case 122:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_1";
			break;
		
		case 123:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_2";
			break;
		
		case 124:
			func_253(uParam2, 32);
			func_251(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_3";
			break;
		
		case 125:
			*uParam1 = 5;
			*uParam3 = 4;
			func_251(uParam2, 64);
			return "";
			break;
		
		case 126:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_1";
			break;
		
		case 127:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		
		case 128:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		
		case 129:
			*uParam1 = 0;
			*uParam3 = 4;
			return "";
			break;
		
		case 130:
			*uParam1 = 12;
			*uParam3 = 4;
			return "FL_IG_3a";
			break;
		
		case 131:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 132:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 133:
			return func_250(132, uParam1, uParam2, uParam3);
			break;
		
		case 134:
			return func_250(132, uParam1, uParam2, uParam3);
			break;
		
		case 135:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_5";
			break;
		
		case 136:
			*uParam1 = 9;
			*uParam3 = 4;
			return "FL_IG_7";
			break;
		
		case 137:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 138:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 141:
			*uParam1 = 5;
			*uParam3 = 0;
			return "";
			break;
	}
	*uParam1 = -1;
	*uParam3 = 0;
	return "NULL";
}

void func_251(var uParam0, int iParam1)
{
	func_252(uParam0, iParam1);
}

void func_252(var uParam0, var uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

void func_253(var uParam0, int iParam1)
{
	func_254(uParam0, iParam1);
}

void func_254(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

struct<4> func_255(char* sParam0, int iParam1)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, sParam0, 16);
	switch (get_random_int_in_range(false, iParam1))
	{
		case 0:
			StringConCat(&cVar0, "a", 16);
			break;
		
		case 1:
			StringConCat(&cVar0, "b", 16);
			break;
		
		case 2:
			StringConCat(&cVar0, "c", 16);
			break;
		
		default:
			StringConCat(&cVar0, "X", 16);
			break;
	}
	return cVar0;
}

void func_256(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_261(iParam0);
	iVar1 = func_261(iParam1);
	iVar2 = func_260(iVar0, iVar1);
	if (iVar2 != 10)
	{
		func_257(&(Global_101154.f_16793.f_175[iVar2 /*19*/].f_5));
		Global_101154.f_16793.f_175[iVar2 /*19*/].f_8 = iParam2;
	}
}

void func_257(int iParam0)
{
	func_258(iParam0, 0f);
}

void func_258(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_259(is_bit_set(*iParam0, 4)) - fParam1;
	set_bit(iParam0, true);
	clear_bit(iParam0, 2);
	*iParam0.f_2 = 0f;
}

float func_259(int iParam0)
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

int func_260(int iParam0, int iParam1)
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

int func_261(int iParam0)
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

bool func_262(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return false;
	}
	iVar0 = func_261(iParam0);
	iVar1 = func_261(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		iVar2 = func_260(iVar0, iVar1);
		if (iVar2 != 10)
		{
			if (func_263(iVar2) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_263(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_87467[iParam0 /*2*/];
	}
	return -1;
}

bool func_264(struct<109> Param0, var uParam1)
{
	*uParam109.f_119 = 0;
	switch (Param0.f_2)
	{
		case 0:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1435919172;
			*uParam109.f_110 = 1435919172;
			func_266(uParam109);
			*uParam109.f_118 = 0;
			return false;
			break;
		
		case 1:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = 0;
			return true;
			break;
		
		case 2:
			*uParam109 = {Global_89454[0 /*109*/]};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = Global_91042[0];
			return true;
			break;
		
		case 3:
			*uParam109 = {Global_89454[1 /*109*/]};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = Global_91042[1];
			return true;
			break;
		
		case 4:
			*uParam109 = {Global_89454[2 /*109*/]};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = Global_91042[2];
			return true;
			break;
		
		case 5:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = Global_91042[Param0.f_3];
			return true;
			break;
		
		case 6:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = Global_91042[Param0.f_3];
			return true;
			break;
		
		case 7:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = Global_91042[Param0.f_3];
			return true;
			break;
		
		case 8:
		case 9:
		case 10:
			*uParam109 = {Param0};
			*uParam109.f_109 = 936589729;
			*uParam109.f_110 = 936589729;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 11:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 14:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 13:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 15:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 54:
			*uParam109 = {Param0};
			*uParam109.f_109 = 2106541073;
			*uParam109.f_110 = 2106541073;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 55:
			*uParam109 = {Param0};
			*uParam109.f_109 = 936589729;
			*uParam109.f_110 = 936589729;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 56:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 57:
			*uParam109 = {Param0};
			*uParam109.f_109 = 2106541073;
			*uParam109.f_110 = 2106541073;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 12:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = 451360105;
			func_265(uParam109, 144, -982327190, -982327190, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 16:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 17:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 18:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 19:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 20:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 22:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 74:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 67:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 58:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 59:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 60:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 25:
			*uParam109 = {Param0};
			*uParam109.f_109 = 2106541073;
			*uParam109.f_110 = 2106541073;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 26:
			*uParam109 = {Param0};
			*uParam109.f_109 = 2106541073;
			*uParam109.f_110 = 2106541073;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 27:
			*uParam109 = {Param0};
			*uParam109.f_109 = 2106541073;
			*uParam109.f_110 = 2106541073;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 28:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 38:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 40:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1959848946;
			*uParam109.f_110 = -1959848946;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 47:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 49:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 48:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -1794415470;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 50:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 51:
			*uParam109 = {Param0};
			*uParam109.f_109 = 2106541073;
			*uParam109.f_110 = 2106541073;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 52:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 66:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 61:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 62:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 63:
			*uParam109 = {Param0};
			*uParam109.f_109 = 2106541073;
			*uParam109.f_110 = 2106541073;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 69:
			*uParam109 = {Param0};
			*uParam109.f_109 = 2106541073;
			*uParam109.f_110 = 2106541073;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 64:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 65:
			*uParam109 = {Param0};
			*uParam109.f_109 = 2106541073;
			*uParam109.f_110 = 2106541073;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 234:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 316:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 315:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 75:
			*uParam109 = {Param0};
			*uParam109.f_109 = -235832601;
			*uParam109.f_110 = -235832601;
			func_265(uParam109, 30, -982327190, -982327190, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 76:
			*uParam109 = {Param0};
			*uParam109.f_109 = -235832601;
			*uParam109.f_110 = -235832601;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 77:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 17, 1785177548, 1785177548, -0.7035f, -0.0282f, 0f, 0f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 78:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 79:
		case 80:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 17, -2017877118, -2017877118, Vector(2.6407f, 8.164f, -14.1564f) + Vector(-1f, 0.03f, -2.16f), -66f + -56f);
			if (Param0.f_2 == 80)
			{
				func_266(uParam109);
			}
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 124:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 82:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 84:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 83:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 85:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 291:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 86:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 87:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 88:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 89:
		case 90:
		case 127:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			if (Param0.f_2 == 92)
			{
				*uParam109.f_118 = 1;
			}
			if (Param0.f_2 == 104)
			{
				*uParam109.f_118 = 0;
			}
			if (Param0.f_2 == 81)
			{
				func_266(uParam109);
				*uParam109.f_118 = 1;
			}
			return true;
			break;
		
		case 94:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			if (Param0.f_2 == 94)
			{
				func_265(uParam109, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			}
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 95:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 96:
			*uParam109 = {Param0};
			*uParam109.f_109 = 2106541073;
			*uParam109.f_110 = 2106541073;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 134:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 108:
		case 109:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 41:
		case 112:
		case 113:
		case 123:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 150:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 20, 1785177548, 1785177548, 0.98f, 0.8017f, -0.42f, -180f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 118:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 119:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 120:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 114:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 105:
		case 106:
		case 107:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -2017877118;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 98:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 99:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_265(uParam109, 15, -982327190, 451360105, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 100:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_265(uParam109, 15, -982327190, 451360105, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 101:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_265(uParam109, 14, -982327190, 451360105, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 102:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_265(uParam109, 14, -982327190, 451360105, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 103:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 121:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 122:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 17, 1785177548, 1785177548, -2.04f, -0.15f, 0f, 14.4f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 125:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 110:
		case 111:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 131:
		case 132:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 126:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 128:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 129:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 130:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 133:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 151:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 152:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 17, 1785177548, 1785177548, 1.1779f, 2.4276f, 0f, 162.1022f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 153:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 154:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 155:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 17, 1785177548, 1785177548, get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f, get_random_float_in_range(-180f, 180f));
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 156:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 14, 1785177548, 1785177548, 0.3427f, 1.1592f, 1.0351f, 139.912f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 157:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 158:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, 1785177548, 1785177548, get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f, get_random_float_in_range(-180f, 180f));
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 159:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 160:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 161:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 163:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 164:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 165:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 166:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 167:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 14, -982327190, 1785177548, -0.8472f, 0.155f, 0f, 152.556f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 168:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 169:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 14, 1785177548, 1785177548, -0.3577f, -0.8968f, -0.0003f, 0f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 170:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 171:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 14, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 172:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 15, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 173:
			*uParam109 = {Param0};
			*uParam109.f_109 = -235832601;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 174:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = 0;
			return true;
			break;
	}
	switch (Param0.f_2)
	{
		case 175:
		case 176:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 177:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 178:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 179:
		case 180:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 181:
		case 182:
		case 183:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 192:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, 1785177548, 1785177548, 1f, 1f, 0f, 0f);
			*uParam109.f_118 = 1;
			if (Global_3)
			{
				*uParam109.f_118 = 1;
			}
			return true;
			break;
		
		case 193:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, -982327190, 1785177548, 4.2943f, -6.7858f, 0f, -133.5332f);
			*uParam109.f_118 = 1;
			if (Global_3)
			{
				*uParam109.f_118 = 1;
			}
			return true;
			break;
		
		case 194:
			*uParam109 = {Param0};
			*uParam109.f_109 = -2017877118;
			*uParam109.f_110 = -2017877118;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			if (Global_3)
			{
				*uParam109.f_118 = 1;
			}
			return true;
			break;
		
		case 195:
			*uParam109 = {Param0};
			*uParam109.f_109 = -2017877118;
			*uParam109.f_110 = -2017877118;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			if (Global_3)
			{
				*uParam109.f_118 = 1;
			}
			return true;
			break;
		
		case 198:
		case 199:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 200:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 201:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 202:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 184:
		case 185:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 186:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 187:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 188:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 189:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 190:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 191:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 196:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 43, 1785177548, 1785177548, get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f, get_random_float_in_range(-180f, 180f));
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 197:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 203:
		case 206:
		case 207:
		case 204:
		case 205:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			if (Param0.f_2 != 205)
			{
				*uParam109.f_112 = {3.4381f, -0.8269f, 0f};
				*uParam109.f_115 = -87.6612f;
			}
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 23:
		case 208:
		case 209:
		case 210:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 24:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 211:
		case 213:
		case 216:
		case 217:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 212:
		case 214:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
			break;
		
		case 215:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 221:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, 1785177548, 1785177548, -0.7949f, -0.508f, 0f, 0f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 222:
		case 223:
		case 224:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 218:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 219:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 220:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 19, 1785177548, 1785177548, 0.5504f, -0.2322f, 0f, -9.9741f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 225:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 19, 1785177548, 1785177548, 1.23f, 0.6f, -1f, 34.56f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 231:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = 0;
			return true;
			break;
		
		case 232:
		case 233:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 235:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 236:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 237:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 238:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 239:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 240:
		case 241:
		case 242:
			*uParam109 = {Param0};
			*uParam109.f_109 = -2017877118;
			*uParam109.f_110 = -2017877118;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 273:
		case 274:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 245:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 243:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 244:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 271:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 280:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			return true;
			break;
		
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
			*uParam109 = {Param0};
			*uParam109.f_109 = -2017877118;
			*uParam109.f_110 = -2017877118;
			*uParam109.f_118 = 1;
			func_266(uParam109);
			if (Param0.f_2 == 265)
			{
				*uParam109.f_118 = 1;
			}
			if (Param0.f_2 == 268)
			{
				*uParam109.f_118 = 0;
			}
			if (Param0.f_2 == 267)
			{
				func_265(uParam109, 144, -982327190, 2106541073, -2.4166f, -0.15f, 0f, -148.7555f);
			}
			if (Param0.f_2 == 266)
			{
				func_265(uParam109, 144, 2106541073, 2106541073, -5.7915f, -11.0439f, 0.67f, -72.589f);
			}
			return true;
			break;
		
		case 246:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 247:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 263:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 278:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 279:
			*uParam109 = {Param0};
			*uParam109.f_109 = -2017877118;
			*uParam109.f_110 = -2017877118;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 264:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 255:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 248:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, 1785177548, 1785177548, get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f, get_random_float_in_range(-180f, 180f));
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 249:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, 1785177548, 1785177548, get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f, get_random_float_in_range(-180f, 180f));
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 281:
		case 282:
		case 283:
		case 284:
			*uParam109 = {Param0};
			*uParam109.f_109 = -235832601;
			*uParam109.f_110 = -235832601;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 275:
		case 276:
		case 277:
			*uParam109 = {Param0};
			*uParam109.f_109 = -235832601;
			*uParam109.f_110 = -235832601;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
		
		case 254:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 285:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 256:
		case 257:
		case 258:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 259:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 260:
		case 261:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 286:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 287:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 288:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 262:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 289:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 144, -2017877118, -2017877118, -3.264f, -14.7895f, 14.1815f, -0.6311f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 290:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 292:
		case 295:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 293:
		case 294:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 299:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 296:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 32, 1785177548, 1785177548, 1.41f, 1.35f, 0f, 168f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 297:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 32, 1785177548, 1785177548, 1.7491f, 0.6423f, 0f, 166.479f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 298:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_265(uParam109, 32, 1785177548, 1785177548, 0.72f, -0.69f, 0f, 172.44f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 304:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 305:
			*uParam109 = {Param0};
			*uParam109.f_109 = -2017877118;
			*uParam109.f_110 = -2017877118;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 306:
		case 307:
		case 308:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 309:
			*uParam109 = {Param0};
			*uParam109.f_109 = -982327190;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 310:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 311:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1785177548;
			*uParam109.f_110 = 1785177548;
			func_266(uParam109);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 312:
			*uParam109 = {Param0};
			*uParam109.f_109 = 1630799643;
			*uParam109.f_110 = 1630799643;
			func_265(uParam109, 144, 474215631, -1519143300, -9.5443f, -3.191f, -0.3f, 180f);
			*uParam109.f_118 = 1;
			return true;
			break;
		
		case 313:
			*uParam109 = {Param0};
			*uParam109.f_109 = 2106541073;
			*uParam109.f_110 = -982327190;
			func_266(uParam109);
			*uParam109.f_118 = 0;
			return true;
			break;
		
		case 314:
			*uParam109 = {Param0};
			*uParam109.f_109 = -1817882002;
			*uParam109.f_110 = -1817882002;
			func_266(uParam109);
			*uParam109.f_118 = 2;
			return true;
			break;
	}
	*uParam109 = {Param0};
	*uParam109.f_109 = 1435919172;
	*uParam109.f_110 = 1435919172;
	func_266(uParam109);
	*uParam109.f_118 = 0;
	return false;
}

void func_265(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, Vector3 fParam5)
{
	*uParam0.f_111 = iParam1;
	*uParam0.f_116 = iParam2;
	*uParam0.f_117 = iParam3;
	*uParam0.f_112 = {vParam4};
	*uParam0.f_115 = fParam7;
}

void func_266(var uParam0)
{
	func_265(uParam0, 145, 1435919172, 1435919172, 0f, 0f, 0f, 0f);
}

bool func_267(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((Global_101154.f_17223[iParam0] == 11 || Global_101154.f_17223[iParam0] == 8) || Global_101154.f_17223[iParam0] == 9) || Global_101154.f_17223[iParam0] == 10) || Global_101154.f_17223[iParam0] == 13) || Global_101154.f_17223[iParam0] == 14) || Global_101154.f_17223[iParam0] == 15) || Global_101154.f_17223[iParam0] == 12) || Global_101154.f_17223[iParam0] == 16) || Global_101154.f_17223[iParam0] == 17) || Global_101154.f_17223[iParam0] == 21) || Global_101154.f_17223[iParam0] == 18) || Global_101154.f_17223[iParam0] == 19) || Global_101154.f_17223[iParam0] == 20) || Global_101154.f_17223[iParam0] == 22) || Global_101154.f_17223[iParam0] == 23) || Global_101154.f_17223[iParam0] == 24) || Global_101154.f_17223[iParam0] == 67) || Global_101154.f_17223[iParam0] == 25) || Global_101154.f_17223[iParam0] == 26) || Global_101154.f_17223[iParam0] == 27) || Global_101154.f_17223[iParam0] == 28) || Global_101154.f_17223[iParam0] == 29) || Global_101154.f_17223[iParam0] == 30) || Global_101154.f_17223[iParam0] == 31) || Global_101154.f_17223[iParam0] == 32) || Global_101154.f_17223[iParam0] == 33) || Global_101154.f_17223[iParam0] == 34) || Global_101154.f_17223[iParam0] == 35) || Global_101154.f_17223[iParam0] == 36) || Global_101154.f_17223[iParam0] == 37) || Global_101154.f_17223[iParam0] == 58) || Global_101154.f_17223[iParam0] == 59) || Global_101154.f_17223[iParam0] == 60) || Global_101154.f_17223[iParam0] == 38) || Global_101154.f_17223[iParam0] == 39) || Global_101154.f_17223[iParam0] == 40) || Global_101154.f_17223[iParam0] == 41) || Global_101154.f_17223[iParam0] == 42) || Global_101154.f_17223[iParam0] == 43) || Global_101154.f_17223[iParam0] == 44) || Global_101154.f_17223[iParam0] == 45) || Global_101154.f_17223[iParam0] == 46) || Global_101154.f_17223[iParam0] == 47) || Global_101154.f_17223[iParam0] == 49) || Global_101154.f_17223[iParam0] == 48) || Global_101154.f_17223[iParam0] == 50) || Global_101154.f_17223[iParam0] == 51) || Global_101154.f_17223[iParam0] == 52) || Global_101154.f_17223[iParam0] == 66) || Global_101154.f_17223[iParam0] == 53) || Global_101154.f_17223[iParam0] == 54) || Global_101154.f_17223[iParam0] == 55) || Global_101154.f_17223[iParam0] == 56) || Global_101154.f_17223[iParam0] == 57) || Global_101154.f_17223[iParam0] == 61) || Global_101154.f_17223[iParam0] == 62) || Global_101154.f_17223[iParam0] == 63) || Global_101154.f_17223[iParam0] == 68) || Global_101154.f_17223[iParam0] == 69) || Global_101154.f_17223[iParam0] == 64) || Global_101154.f_17223[iParam0] == 65) || Global_101154.f_17223[iParam0] == 70) || Global_101154.f_17223[iParam0] == 71) || Global_101154.f_17223[iParam0] == 72) || Global_101154.f_17223[iParam0] == 73) || Global_101154.f_17223[iParam0] == 74)
	{
		if (iParam0 == 0 && Global_101154.f_17223[0] == 36)
		{
			if (Global_101154.f_17223[1] == 37)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_101154.f_17223[1] == 37)
		{
			if (Global_101154.f_17223[0] == 36)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[0]));
				Global_101154.f_17223[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_101154.f_17223[0] == 58)
		{
			if (Global_101154.f_17223[2] == 59)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_101154.f_17223[2] == 59)
		{
			if (Global_101154.f_17223[0] == 58)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[0]));
				Global_101154.f_17223[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_101154.f_17223[0] == 46)
		{
			if (Global_101154.f_17223[1] == 47)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_101154.f_17223[1] == 47)
		{
			if (Global_101154.f_17223[0] == 46)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[0]));
				Global_101154.f_17223[0] = 318;
			}
		}
		if (iParam0 == 1 && Global_101154.f_17223[1] == 25)
		{
			if (Global_101154.f_17223[2] == 26)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_101154.f_17223[2] == 26)
		{
			if (Global_101154.f_17223[1] == 25)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		if (iParam0 == 1 && (((Global_101154.f_17223[1] == 42 || Global_101154.f_17223[1] == 43) || Global_101154.f_17223[1] == 44) || Global_101154.f_17223[1] == 45))
		{
			if (((Global_101154.f_17223[2] == 42 || Global_101154.f_17223[2] == 43) || Global_101154.f_17223[2] == 44) || Global_101154.f_17223[2] == 45)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		else if (iParam0 == 2 && (((Global_101154.f_17223[2] == 42 || Global_101154.f_17223[2] == 43) || Global_101154.f_17223[2] == 44) || Global_101154.f_17223[2] == 45))
		{
			if (((Global_101154.f_17223[1] == 42 || Global_101154.f_17223[1] == 43) || Global_101154.f_17223[1] == 44) || Global_101154.f_17223[1] == 45)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		if (iParam0 == 1 && Global_101154.f_17223[1] == 16)
		{
			if (Global_101154.f_17223[0] == 17)
			{
				Global_101154.f_17223[0] = 318;
			}
		}
		else if (iParam0 == 0 && Global_101154.f_17223[0] == 17)
		{
			if (Global_101154.f_17223[1] == 16)
			{
				Global_101154.f_17223[1] = 318;
			}
		}
		if (iParam0 == 2 && Global_101154.f_17223[2] == 30)
		{
			if (Global_101154.f_17223[1] == 19)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_101154.f_17223[1] == 19)
		{
			if (Global_101154.f_17223[2] == 30)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		if (iParam0 == 0 && Global_101154.f_17223[0] == 21)
		{
			if (Global_101154.f_17223[1] == 20)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_101154.f_17223[1] == 20)
		{
			if (Global_101154.f_17223[0] == 21)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[0]));
				Global_101154.f_17223[0] = 318;
			}
		}
		if (iParam0 == 1 && Global_101154.f_17223[1] == 38)
		{
			if (Global_101154.f_17223[2] == 39)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_101154.f_17223[2] == 39)
		{
			if (Global_101154.f_17223[1] == 38)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		if (iParam0 == 1 && Global_101154.f_17223[1] == 29)
		{
			if (Global_101154.f_17223[2] == 15)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_101154.f_17223[2] == 15)
		{
			if (Global_101154.f_17223[1] == 29)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		if (iParam0 == 1 && Global_101154.f_17223[1] == 56)
		{
			if (Global_101154.f_17223[2] == 57)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_101154.f_17223[2] == 57)
		{
			if (Global_101154.f_17223[1] == 56)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		if (iParam0 == 0 && Global_101154.f_17223[0] == 68)
		{
			if (Global_101154.f_17223[2] == 69)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_101154.f_17223[2] == 69)
		{
			if (Global_101154.f_17223[0] == 68)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[0]));
				Global_101154.f_17223[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_101154.f_17223[0] == 64)
		{
			if (Global_101154.f_17223[2] == 65)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_101154.f_17223[2] == 65)
		{
			if (Global_101154.f_17223[0] == 64)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[0]));
				Global_101154.f_17223[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_101154.f_17223[0] == 72)
		{
			if (Global_101154.f_17223[1] == 73)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_101154.f_17223[1] == 73)
		{
			if (Global_101154.f_17223[0] == 72)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[0]));
				Global_101154.f_17223[0] = 318;
			}
		}
		if (iParam0 == 2 && Global_101154.f_17223[2] == 51)
		{
			if (Global_101154.f_17223[1] == 50)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_101154.f_17223[1] == 50)
		{
			if (Global_101154.f_17223[2] == 51)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		if (iParam0 == 0 && Global_101154.f_17223[0] == 52)
		{
			if (Global_101154.f_17223[1] == 66)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_101154.f_17223[1] == 66)
		{
			if (Global_101154.f_17223[0] == 52)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[0]));
				Global_101154.f_17223[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_101154.f_17223[0] == 61)
		{
			if (Global_101154.f_17223[1] == 31)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_101154.f_17223[1] == 31)
		{
			if (Global_101154.f_17223[0] == 61)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[0]));
				Global_101154.f_17223[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_101154.f_17223[0] == 62)
		{
			if (Global_101154.f_17223[1] == 53)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
			if (Global_101154.f_17223[2] == 54)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		else if (iParam0 == 1 && Global_101154.f_17223[1] == 53)
		{
			if (Global_101154.f_17223[0] == 62)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[0]));
				Global_101154.f_17223[0] = 318;
			}
			if (Global_101154.f_17223[2] == 54)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[2]));
				Global_101154.f_17223[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_101154.f_17223[2] == 54)
		{
			if (Global_101154.f_17223[0] == 62)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[0]));
				Global_101154.f_17223[0] = 318;
			}
			if (Global_101154.f_17223[1] == 53)
			{
				func_58(&(Global_101154.f_1826.f_539.f_1524[1]));
				Global_101154.f_17223[1] = 318;
			}
		}
		Global_90734 = -1;
		Global_101154.f_17223[iParam0] = 318;
		return true;
	}
	Global_90734 = -1;
	return false;
}

void func_268(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_101154.f_17223[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !is_bit_set(Global_101154.f_7775.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_21(Global_101154.f_17223[iVar0], &vVar2, &fVar5))
			{
				Global_101154.f_17223[iVar0] = 318;
				func_58(uParam0.f_1524[iVar0]);
				*(uParam0.f_1528[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1538[iVar0] = 0f;
				*uParam0.f_1542[iVar0] = 0;
				*(uParam0.f_1546[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1556[iVar0] = 0;
				Global_89001[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_9 = 0f;
				Global_89001[iVar0 /*29*/].f_12 = 0f;
				Global_89001[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_10 = 0f;
				Global_89001[iVar0 /*29*/].f_13 = 0f;
				Global_89001[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_11 = 0f;
				Global_89001[iVar0 /*29*/].f_14 = 0f;
				Global_89001[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_26 = 0f;
				Global_89001[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_27 = 0f;
				Global_89001[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

bool func_269(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	while (iVar0 > 0)
	{
		Global_101154.f_17223.f_4[uParam0 /*6*/][iVar0] = Global_101154.f_17223.f_4[uParam0 /*6*/][iVar0 - 1];
		iVar0--;
	}
	Global_101154.f_17223.f_4[uParam0 /*6*/][0] = iParam1;
	if (func_270(iParam1, &iVar1))
	{
		set_bit(&(Global_101154.f_17223.f_23), iVar1);
	}
	return true;
}

bool func_270(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 114:
			*uParam1 = 1;
			return true;
			break;
		
		case 108:
			*uParam1 = 2;
			return true;
			break;
		
		case 109:
			*uParam1 = 3;
			return true;
			break;
		
		case 110:
			*uParam1 = 4;
			return true;
			break;
		
		case 218:
			*uParam1 = 5;
			return true;
			break;
		
		case 221:
			*uParam1 = 6;
			return true;
			break;
		
		case 187:
			*uParam1 = 7;
			return true;
			break;
		
		case 196:
			*uParam1 = 8;
			return true;
			break;
		
		case 197:
			*uParam1 = 9;
			return true;
			break;
		
		case 246:
			*uParam1 = 10;
			return true;
			break;
		
		case 283:
			*uParam1 = 11;
			return true;
			break;
		
		case 124:
			*uParam1 = 12;
			return true;
			break;
		
		case 8:
			*uParam1 = 13;
			return true;
			break;
		
		case 9:
			*uParam1 = 13;
			return true;
			break;
		
		case 10:
			*uParam1 = 13;
			return true;
			break;
	}
	*uParam1 = -1;
	return false;
}

bool func_271(var uParam0)
{
	if (Global_101154.f_17223[uParam0] == 32)
	{
		func_8(&(Global_101154.f_1826.f_539), 0, 34);
		return true;
	}
	if (Global_101154.f_17223[uParam0] == 74)
	{
		func_8(&(Global_101154.f_1826.f_539), 0, 72);
		func_8(&(Global_101154.f_1826.f_539), 1, 73);
		return true;
	}
	return false;
}

void func_272(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2445441 = 0;
	}
	Global_1312466.f_18 = iParam0;
}

bool func_273(var uParam0)
{
	float fVar0;
	char* sVar1;
	char* sVar17;
	
	if (!func_274())
	{
	}
	else
	{
		return true;
	}
	fVar0 = -1f;
	if (get_player_switch_type() != 3)
	{
		fVar0 = to_float(get_player_switch_state()) / to_float(9);
	}
	if (func_579(*uParam0.f_2, &sVar1, &sVar17))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (fVar0 >= 0.95f)
	{
		return true;
	}
	return false;
}

bool func_274()
{
	if (!is_player_switch_in_progress() || get_player_switch_type() == 3)
	{
		return false;
	}
	if (get_player_switch_state() > 8)
	{
		if (get_player_switch_state() != 11)
		{
			return false;
		}
		if (get_player_switch_state() == 11)
		{
			if (set_player_inverted_up() > 0)
			{
				if (_0x5B48A06DD0E792A5() > 100)
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool func_275()
{
	func_278(player_ped_id());
	func_276(1);
	return true;
}

void func_276(int iParam0)
{
	_0x487A82C650EB7799(0f);
	_0x0225778816FDC28C(0f);
	set_gameplay_cam_shake_amplitude(0f);
	stop_gameplay_cam_shaking(true);
	set_cinematic_cam_shake_amplitude(0f);
	stop_cinematic_cam_shaking(1);
	_0x12561FCBB62D5B9C(0);
	if (is_audio_scene_active("SAFEHOUSE_STONED_MICHAEL"))
	{
		stop_audio_scene("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!is_string_null_or_empty(&Global_36817))
	{
		if (is_audio_scene_active(&Global_36817))
		{
			stop_audio_scene(&Global_36817);
		}
	}
	if (does_cam_exist(Global_36806))
	{
		if (is_cam_shaking(Global_36806))
		{
			set_cam_shake_amplitude(Global_36806, 0f);
			stop_cam_shaking(Global_36806, 1);
		}
	}
	if (_0xC912AF078AF19212())
	{
		_0x1C9D7949FA533490(0);
	}
	if (iParam0)
	{
		if (get_timecycle_modifier_index() != -1 || _0x459FD2C8D0AB78BC() != -1)
		{
			clear_timecycle_modifier();
		}
		else if (is_player_switch_in_progress())
		{
			clear_timecycle_modifier();
		}
	}
	Global_36812 = 0f;
	StringCopy(&Global_36813, "", 16);
	StringCopy(&Global_36817, "", 64);
	StringCopy(&Global_36833, "", 16);
	func_277();
}

void func_277()
{
	Global_36805 = 0;
	Global_36806 = 0;
	Global_36807 = 0;
	Global_36808 = 30000;
	Global_36809 = 0f;
	Global_36811 = 0f;
	Global_36810 = 0f;
	Global_36812 = 0f;
	StringCopy(&Global_36813, "", 16);
}

void func_278(int iParam0)
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
	iVar0 = func_286(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		func_281(1, iVar1, 1);
		return;
	}
	iVar2 = func_280(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_279(iVar2);
}

void func_279(int iParam0)
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

int func_280(int iParam0)
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

void func_281(int iParam0, int iParam1, int iParam2)
{
	func_282(iParam0, iParam1, iParam2, 0, 0);
}

void func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_284(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_283();
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

int func_283()
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

bool func_284(int iParam0, int iParam1, int iParam2)
{
	if (func_285(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_285(int iParam0, int iParam1, int iParam2)
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

int func_286(int iParam0)
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

void func_287(var uParam0)
{
	if (!is_ped_injured(*uParam0[*uParam0.f_5]))
	{
		set_ped_can_be_targetted(*uParam0[*uParam0.f_5], false);
		set_ped_relationship_group_hash(*uParam0[*uParam0.f_5], 1862763509);
	}
}

bool func_288(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	char[64] cVar6;
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!*uParam0.f_39)
	{
		if (*uParam0.f_7 == 4)
		{
			return true;
		}
	}
	if ((!is_ped_injured(*uParam0[*uParam0.f_7]) && !is_ped_injured(player_ped_id())) && *uParam0[*uParam0.f_7] != player_ped_id())
	{
		if (!iParam2)
		{
			if ((is_ped_ragdoll(player_ped_id()) && !is_entity_on_fire(player_ped_id())) && !is_ped_getting_into_a_vehicle(player_ped_id()))
			{
				clear_ped_tasks_immediately(player_ped_id());
			}
			else
			{
				clear_ped_tasks(player_ped_id());
			}
			if ((is_ped_ragdoll(*uParam0[*uParam0.f_7]) && !is_entity_on_fire(*uParam0[*uParam0.f_7])) && !is_ped_getting_into_a_vehicle(*uParam0[*uParam0.f_7]))
			{
				clear_ped_tasks_immediately(*uParam0[*uParam0.f_7]);
			}
			else
			{
				clear_ped_tasks(*uParam0[*uParam0.f_7]);
			}
		}
		iVar0 = player_ped_id();
		iVar1 = func_574();
		if (!*uParam0.f_23)
		{
			func_330(iVar0, 0);
		}
		func_328(iVar1, &iVar0);
		set_ped_config_flag(iVar0, 32, true);
		set_ped_config_flag(iVar0, 250, true);
		iVar2 = func_555(*uParam0.f_7);
		func_330(*uParam0[*uParam0.f_7], 0);
		fVar3 = to_float(get_entity_health(*uParam0[*uParam0.f_7])) - 100f / to_float(get_ped_max_health(*uParam0[*uParam0.f_7])) - 100f * 100f;
		switch (func_178(player_ped_id()))
		{
			case 0:
				if (_get_screen_effect_is_active("BulletTime"))
				{
					_stop_screen_effect("BulletTime");
				}
				if (_get_screen_effect_is_active("BulletTimeOut"))
				{
					_stop_screen_effect("BulletTimeOut");
				}
				break;
			
			case 1:
				if (_get_screen_effect_is_active("DrivingFocus"))
				{
					_stop_screen_effect("DrivingFocus");
				}
				if (_get_screen_effect_is_active("DrivingFocusOut"))
				{
					_stop_screen_effect("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (_get_screen_effect_is_active("REDMIST"))
				{
					_stop_screen_effect("REDMIST");
				}
				if (_get_screen_effect_is_active("REDMISTOut"))
				{
					_stop_screen_effect("REDMISTOut");
				}
				break;
		}
		if (func_180(func_574()))
		{
			if (is_special_ability_active(player_id()))
			{
				special_ability_deactivate_fast(player_id());
			}
		}
		change_player_ped(player_id(), *uParam0[*uParam0.f_7], iParam2, 0);
		hide_hud_component_this_frame(3);
		hide_hud_component_this_frame(13);
		if (iParam3 & 1 != 0)
		{
			set_ped_config_flag(player_ped_id(), 210, false);
		}
		if (func_325(0) || func_325(3))
		{
			if (Global_17118.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (is_bit_set(Global_82363[iVar4 /*5*/].f_1, 2))
					{
						uVar5 = Global_82363[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_82399[Global_69758.f_109[uVar5 /*4*/] /*34*/]), 64);
						stat_increment(get_hash_key(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17118.f_13 = 0;
		*uParam0.f_5 = func_612(iVar1);
		if (*uParam0.f_5 == 4)
		{
			*uParam0.f_5 = 3;
		}
		*uParam0[*uParam0.f_5] = iVar0;
		*uParam0[*uParam0.f_7] = 0;
		*uParam0.f_6 = func_612(iVar2);
		*uParam0.f_7 = 4;
		iVar22 = player_ped_id();
		set_entity_visible(player_ped_id(), true, 0);
		func_324(iVar22);
		_0xE861D0B05C7662B8(iVar22, 0, 0);
		if (fVar3 < 25f && !is_ped_swimming_under_water(player_ped_id()))
		{
			set_entity_health(player_ped_id(), round(25f / 100f * to_float(get_ped_max_health(player_ped_id())) - 100f + 100f));
		}
		if (iParam1)
		{
			if (does_entity_exist(iVar0))
			{
				set_entity_visible(iVar0, true, 0);
				func_324(iVar0);
				_0xE861D0B05C7662B8(iVar0, 0, 0);
				set_ped_stealth_movement(iVar0, 0, 0);
			}
		}
		else if (does_entity_exist(iVar0))
		{
			sVar24 = get_entity_script(iVar0, &uVar23);
			if (!is_string_null(sVar24))
			{
				if (!are_strings_equal(sVar24, get_this_script_name()))
				{
					set_entity_as_mission_entity(iVar0, false, 1);
				}
				delete_ped(&iVar0);
			}
		}
		Global_88893 = 1;
		func_322(player_ped_id());
		func_321();
		func_320(iVar2);
		func_311();
		func_308(iVar2);
		func_294(func_306(get_entity_coords(player_ped_id(), 1), 145, 0));
		reset_player_stamina(player_id());
		set_entity_only_damaged_by_player(player_ped_id(), false);
		set_ped_can_be_dragged_out(player_ped_id(), 1);
		if (is_player_playing(player_id()))
		{
			set_auto_give_parachute_when_enter_plane(player_id(), func_293(67));
		}
		if (is_player_playing(player_id()))
		{
			_0xD2B315B6689D537D(player_id(), func_293(68));
		}
		func_290(iVar2, &iVar22);
		if (((func_120(0) || func_120(3)) || func_120(2)) || func_120(4))
		{
			set_ped_config_flag(iVar22, 32, false);
			set_ped_config_flag(iVar22, 250, false);
		}
		else
		{
			set_ped_config_flag(iVar22, 32, true);
			set_ped_config_flag(iVar22, 250, true);
		}
		if (!func_289())
		{
			func_194();
		}
		Global_88530 = 0;
		return true;
	}
	else
	{
		if (is_ped_injured(player_ped_id()))
		{
		}
		if (is_ped_injured(*uParam0[*uParam0.f_7]))
		{
		}
		if (player_ped_id() == *uParam0[*uParam0.f_7])
		{
		}
	}
	return false;
}

var func_289()
{
	return Global_17116;
}

void func_290(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_291(4, *iParam1);
			func_291(7, *iParam1);
			func_291(8, *iParam1);
			func_291(11, *iParam1);
			break;
		
		case 1:
			if (Global_101154.f_7775.f_330[2 /*6*/])
			{
				func_291(4, *iParam1);
			}
			func_291(7, *iParam1);
			func_291(8, *iParam1);
			func_291(11, *iParam1);
			if (Global_101154.f_7775.f_99.f_58[126])
			{
				func_291(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_101154.f_7775.f_330[20 /*6*/])
			{
				func_291(4, *iParam1);
			}
			func_291(7, *iParam1);
			func_291(8, *iParam1);
			func_291(11, *iParam1);
			break;
	}
}

void func_291(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (func_292(iParam0, iParam1))
	{
		return;
	}
	if (Global_34834[iParam0 /*31*/].f_24 < 5)
	{
		Global_34834[iParam0 /*31*/].f_25[Global_34834[iParam0 /*31*/].f_24] = iParam1;
		Global_34834[iParam0 /*31*/].f_24++;
	}
	else
	{
		iVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_34834[iParam0 /*31*/].f_25[iVar0];
			if (!does_entity_exist(iVar1) || is_ped_injured(iVar1))
			{
				Global_34834[iParam0 /*31*/].f_25[iVar0] = iParam1;
				iVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!iVar2)
		{
		}
	}
}

bool func_292(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_34834[uParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_34834[uParam0 /*31*/].f_25[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_293(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

void func_294(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			set_bit(&(Global_31499[38 / 32]), 38 % 32);
			func_295(38, 0);
			set_bit(&(Global_31499[41 / 32]), 41 % 32);
			func_295(41, 0);
			set_bit(&(Global_31499[43 / 32]), 43 % 32);
			func_295(43, 0);
			set_bit(&(Global_31499[42 / 32]), 42 % 32);
			func_295(42, 0);
			set_bit(&(Global_31499[44 / 32]), 44 % 32);
			func_295(44, 0);
			break;
		
		case 1:
			set_bit(&(Global_31499[51 / 32]), 51 % 32);
			func_295(51, 0);
			break;
		
		case 2:
			set_bit(&(Global_31499[51 / 32]), 51 % 32);
			func_295(51, 0);
			break;
		
		case 3:
			set_bit(&(Global_31499[53 / 32]), 53 % 32);
			func_295(53, 0);
			break;
		
		case 4:
			set_bit(&(Global_31499[81 / 32]), 81 % 32);
			func_295(81, 0);
			set_bit(&(Global_31499[82 / 32]), 82 % 32);
			func_295(82, 0);
			break;
		
		case 5:
			set_bit(&(Global_31499[47 / 32]), 47 % 32);
			func_295(47, 0);
			set_bit(&(Global_31499[50 / 32]), 50 % 32);
			func_295(50, 0);
			break;
		
		case 6:
			set_bit(&(Global_31499[50 / 32]), 50 % 32);
			func_295(50, 0);
			break;
	}
}

void func_295(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_69489)
		{
			iVar0 = Global_2428492.f_74[iParam0];
		}
		else
		{
			iVar0 = Global_101154.f_5951[iParam0];
		}
		if (iVar0 != iParam1 || is_bit_set(Global_31499[iParam0 / 32], iParam0 % 32))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				set_bit(&(Global_31508[iParam0 / 32]), iParam0 % 32);
				Global_31971[iParam0] = iParam1;
			}
			else if (Global_69489)
			{
				Global_2428492.f_74[iParam0] = iParam1;
			}
			else
			{
				Global_101154.f_5951[iParam0] = iParam1;
			}
			set_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
			func_297(iParam0);
			if (is_bit_set(Global_31499[iParam0 / 32], iParam0 % 32))
			{
				func_296(iParam0);
			}
		}
	}
}

void func_296(int iParam0)
{
	if (!is_bit_set(Global_32442.f_228[iParam0 / 32], iParam0 % 23))
	{
		set_bit(&(Global_32442.f_228[iParam0 / 32]), iParam0 % 23);
		Global_32442[Global_32442.f_227] = iParam0;
		Global_32442.f_227++;
	}
}

void func_297(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	int iVar8;
	int iVar9;
	Vector3 fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (!func_211())
	{
		return;
	}
	if (is_ped_injured(player_ped_id()))
	{
		return;
	}
	Var0 = {func_305(iParam0)};
	if (is_bit_set(Var0.f_4, 2))
	{
		func_302(iParam0, &Var0);
	}
	if (!_does_door_exist(Var0.f_5))
	{
		if (is_cutscene_playing())
		{
			return;
		}
	}
	iVar7 = false;
	iVar8 = false;
	fVar10 = get_distance_between_coords(Var0, get_entity_coords(player_ped_id(), 1), 1);
	if ((is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32) && Global_31971[iParam0] == 2) && fVar10 > 210f)
	{
		clear_bit(&(Global_31508[iParam0 / 32]), iParam0 % 32);
		Global_31517[iParam0] = 0;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("startup_positioning")) == 0)
	{
		if (is_bit_set(Global_31744[iParam0 / 32], iParam0 % 32))
		{
			if (fVar10 < 25f)
			{
				if (Global_91330.f_294 == 0)
				{
					if (!is_entity_dead(player_ped_id(), 0))
					{
						Global_91330.f_294 = get_interior_from_entity(player_ped_id());
					}
				}
				iVar11 = Global_91330.f_294;
				iVar12 = get_interior_at_coords(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					set_bit(&(Global_31508[iParam0 / 32]), iParam0 % 32);
					Global_31971[iParam0] = 3;
					set_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
				}
			}
			clear_bit(&(Global_31744[iParam0 / 32]), iParam0 % 32);
		}
	}
	if (is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32))
	{
		iVar9 = Global_31971[iParam0];
	}
	else if (is_bit_set(Var0.f_4, false))
	{
		if (Global_101154.f_7775)
		{
			iVar9 = func_299(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_120(14))
		{
			iVar9 = 0;
		}
	}
	else if (is_bit_set(Var0.f_4, true) && _get_number_of_instances_of_streamed_script(joaat("ambient_solomon")) == 0)
	{
		if (func_298())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_101154.f_5951[iParam0];
	}
	if (Global_32198[iParam0] != iVar9)
	{
		iVar7 = true;
	}
	if (is_bit_set(Global_31499[iParam0 / 32], iParam0 % 32))
	{
		if (!is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32) || (Global_31517[iParam0] == 0 && Global_31971[iParam0] != 2))
		{
			iVar7 = true;
		}
	}
	if (iVar7)
	{
		if (!Global_31498)
		{
		}
		else
		{
			if (!_does_door_exist(Var0.f_5))
			{
				add_door_to_system(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (is_bit_set(Var0.f_4, 3))
					{
						iVar13 = true;
					}
					else if (fVar10 > 3f || absf(_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f)
					{
						iVar14 = get_interior_from_entity(player_ped_id());
						iVar15 = get_interior_at_coords(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							iVar13 = true;
						}
					}
					if (iVar13)
					{
						if (Var0.f_6 != 0f)
						{
							_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
						}
						_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
						iVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, 0, 0, 1);
					iVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				}
		}
		if (iVar8)
		{
			clear_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
			Global_32198[iParam0] = iVar9;
		}
	}
	if (is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32) && Global_31971[iParam0] != 2)
	{
		set_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
		func_296(iParam0);
		if (Global_31517[iParam0] < 2)
		{
			Global_31517[iParam0]++;
		}
	}
}

bool func_298()
{
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		return false;
	}
	switch (func_574())
	{
		case 0:
			if (Global_101154.f_7775.f_99.f_58[65])
			{
				return true;
			}
			break;
		
		case 1:
			if (Global_101154.f_7775.f_99.f_58[66])
			{
				return true;
			}
			break;
		
		case 2:
			if (Global_101154.f_7775.f_99.f_58[65])
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_299(int iParam0)
{
	int iVar0;
	
	iVar0 = func_574();
	if (func_300(iParam0))
	{
		return true;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (is_bit_set(Global_101154.f_5919[5], false) || is_bit_set(Global_101154.f_5919[6], false))
			{
				return false;
			}
		}
		if (func_180(iVar0))
		{
			if (is_bit_set(Global_86638[5], iVar0))
			{
				return false;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (is_bit_set(Global_101154.f_5919[0], false))
				{
					return false;
				}
			}
			if (func_180(iVar0))
			{
				if (is_bit_set(Global_86638[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return false;
					}
					else
					{
						return true;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (is_bit_set(Global_101154.f_5919[5], false))
				{
					return false;
				}
			}
			if (func_180(iVar0))
			{
				if (is_bit_set(Global_86638[5], iVar0))
				{
					return false;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (is_bit_set(Global_101154.f_5919[6], false))
				{
					return false;
				}
			}
			if (func_180(iVar0))
			{
				if (is_bit_set(Global_86638[6], iVar0))
				{
					return false;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (is_bit_set(Global_101154.f_5919[2], false))
				{
					return false;
				}
				if (func_180(iVar0))
				{
					if (is_bit_set(Global_86638[2], iVar0))
					{
						return false;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (is_bit_set(Global_101154.f_5919[1], false))
				{
					return false;
				}
				if (func_180(iVar0))
				{
					if (is_bit_set(Global_86638[1], iVar0))
					{
						return false;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (is_bit_set(Global_101154.f_5919[3], false))
				{
					return false;
				}
			}
			if (func_180(iVar0))
			{
				if (is_bit_set(Global_86638[3], iVar0))
				{
					return false;
				}
			}
			break;
		
		default:
			return false;
			break;
	}
	return true;
}

bool func_300(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 1))
			{
				iVar0 = get_entity_model(func_301(get_vehicle_ped_is_in(player_ped_id(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return true;
						break;
					}
				}
			}
	}
	return false;
}

int func_301(int iParam0)
{
	return iParam0;
}

void func_302(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!is_bit_set(*uParam1.f_4, 2))
	{
		return;
	}
	iVar0 = func_22();
	iVar1 = func_304(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_303(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_303(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_303(iParam0))
			{
				if ((_get_number_of_instances_of_streamed_script(joaat("jewelry_heist")) == 0 && _get_number_of_instances_of_streamed_script(joaat("jewelry_setup1")) == 0) && !Global_101154.f_7775.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_101154.f_5951[iParam0] = 0;
							_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_101154.f_7775.f_99.f_58[4])
				{
					Global_101154.f_5951[iParam0] = 0;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (Global_101154.f_7775.f_99.f_58[4])
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			else if (_get_number_of_instances_of_streamed_script(joaat("jewelry_heist")) == 0 && _get_number_of_instances_of_streamed_script(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 18f)
					{
						Global_101154.f_5951[iParam0] = 1;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 18f)
					{
						Global_101154.f_5951[iParam0] = 1;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_303(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 40f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 40f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_303(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_303(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(joaat("assassin_valet")) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (_get_number_of_instances_of_streamed_script(joaat("assassin_valet")) > 0)
			{
				Global_101154.f_5951[iParam0] = 0;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (_get_number_of_instances_of_streamed_script(Global_82399[70 /*34*/].f_6) == 0)
			{
				if (!func_303(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (_get_number_of_instances_of_streamed_script(joaat("omega2")) == 0)
			{
				if (!func_303(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_303(iParam0) && _get_number_of_instances_of_streamed_script(Global_82399[26 /*34*/].f_6) == 0)
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_303(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[43 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_303(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_303(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[93 /*34*/].f_6) > 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_303(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_303(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[8 /*34*/].f_6) == 0 && _get_number_of_instances_of_streamed_script(Global_82399[10 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_303(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[47 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (_get_number_of_instances_of_streamed_script(Global_82399[70 /*34*/].f_6) == 0)
			{
				if (!func_303(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (_get_number_of_instances_of_streamed_script(Global_82399[48 /*34*/].f_6) == 0)
			{
				if (!func_303(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (_get_number_of_instances_of_streamed_script(Global_82399[39 /*34*/].f_6) == 0)
			{
				if (!func_303(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_303(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_303(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_303(iParam0))
			{
				Global_101154.f_5951[iParam0] = 0;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
	}
}

int func_303(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = {func_305(iParam0)};
	iVar7 = _0x160AA1B32F6139B8(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_304(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

struct<7> func_305(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {133f, -1711f, 29f};
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-1287.857f, -1115.742f, 7.1401f};
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {1932.952f, 3725.154f, 32.9944f};
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {1207.873f, -470.063f, 66.358f};
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-29.8692f, -148.1571f, 57.2265f};
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-280.7851f, 6232.782f, 31.8455f};
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = {-824f, -187f, 38f};
			Var0 = {-823.2001f, -187.0831f, 37.819f};
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = {-823f, -188f, 38f};
			Var0 = {-822.4442f, -188.3924f, 37.819f};
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {82.3186f, -1392.752f, 29.5261f};
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {82.3186f, -1390.476f, 29.5261f};
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {1686.983f, 4821.741f, 42.2131f};
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {1687.282f, 4819.484f, 42.2131f};
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {418.637f, -806.457f, 29.6396f};
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {418.637f, -808.733f, 29.6396f};
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-1096.661f, 2705.446f, 19.2578f};
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-1094.965f, 2706.964f, 19.2578f};
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {1196.825f, 2703.221f, 38.3726f};
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {1199.101f, 2703.221f, 38.3726f};
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-818.7642f, -1079.544f, 11.4781f};
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-816.7932f, -1078.406f, 11.4781f};
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-0.0564f, 6517.461f, 32.0278f};
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-1.7253f, 6515.914f, 32.0278f};
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {-1201.435f, -776.8566f, 17.9918f};
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {617.2458f, 2751.022f, 42.7578f};
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {127.8201f, -211.8274f, 55.2275f};
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {-3167.75f, 1055.536f, 21.5329f};
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-716.6754f, -155.42f, 37.6749f};
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-715.6154f, -157.2561f, 37.6749f};
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-157.0924f, -306.4413f, 39.994f};
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-156.4022f, -304.4366f, 39.994f};
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-1454.782f, -231.7927f, 50.0565f};
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-1456.201f, -233.3682f, 50.0565f};
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {321.81f, 178.36f, 103.68f};
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = {1859.89f, 3749.79f, 33.18f};
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = {-289.1752f, 6199.112f, 31.637f};
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {-1155.454f, -1424.008f, 5.0461f};
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {1321.286f, -1650.597f, 52.3663f};
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {-3167.789f, 1074.767f, 20.9209f};
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = {-817f, 179f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = {-816f, 178f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = {-815f, 186f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = {-797f, 177f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = {-795f, 178f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = {-793f, 181f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = {-794f, 183f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = {-849f, 179f, 70f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = {-802.7333f, 167.5041f, 77.5824f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = {-14f, -1441f, 31f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = {-15f, -1427f, 31f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = {-25.28f, -1431.06f, 30.84f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = {7.52f, 539.53f, 176.18f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = {1973f, 3815f, 34f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = {1972.787f, 3824.554f, 32.5831f};
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = {-1150f, -1521f, 11f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = {-1145.9f, -1991.14f, 14.18f};
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = {723.12f, -1088.83f, 23.28f};
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = {-356.09f, -134.77f, 40.01f};
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {108.8502f, 6617.876f, 32.673f};
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {114.3206f, 6623.226f, 32.7161f};
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {1182.305f, 2645.242f, 38.807f};
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {1174.654f, 2645.242f, 38.6826f};
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = {-205.7007f, -1310.692f, 30.2957f};
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = {-107.5401f, -9.0258f, 70.6696f};
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = {717f, -975f, 25f};
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = {719f, -975f, 25f};
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = {709.9813f, -963.5311f, 30.5453f};
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = {709.9894f, -960.6675f, 30.5453f};
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = {707.8046f, -962.4564f, 30.5453f};
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = {1393f, 3599f, 35f};
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = {1395f, 3600f, 35f};
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = {1387f, 3614f, 39f};
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1083.547f, -1975.435f, 31.6222f};
			Var0.f_5 = 792295685;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1065.237f, -2006.079f, 32.2329f};
			Var0.f_5 = 563273144;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1085.307f, -2018.561f, 41.6289f};
			Var0.f_5 = -726993043;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = {-111f, 6464f, 32f};
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = {-110f, 6462f, 32f};
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = {1274f, -1721f, 55f};
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = {1271.89f, -1707.57f, 53.79f};
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = {1270.77f, -1708.1f, 53.75f};
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = {-127.5f, -1456.18f, 37.94f};
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = {483.56f, -1316.08f, 32.18f};
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = {483f, -1312f, 29f};
			Var0.f_5 = -106474626;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = {128f, -1299f, 29f};
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = {96f, -1285f, 29f};
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = {549f, -1773f, 34f};
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = {974f, -1839f, 36f};
			Var0.f_5 = 1267246609;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = {977f, -105f, 75f};
			Var0.f_5 = -1900237971;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1391f, 1163f, 114f};
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1391f, 1161f, 114f};
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = {1396f, 1143f, 115f};
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = {1396f, 1141f, 115f};
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1409f, 1146f, 114f};
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1409f, 1148f, 114f};
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1408f, 1159f, 114f};
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1408f, 1161f, 114f};
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = {-1067f, -1666f, 5f};
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = {-1065f, -1669f, 5f};
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = {-1104.66f, -1638.48f, 4.68f};
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = {-31.72f, -1101.85f, 26.57f};
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = {134.4f, -2204.1f, 7.52f};
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = {3628f, 3747f, 28f};
			Var0.f_5 = 1773088812;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = {3621f, 3752f, 28f};
			Var0.f_5 = -1332101528;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = {-608.73f, -1610.32f, 27.16f};
			Var0.f_5 = -1811763714;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = {-611.32f, -1610.09f, 27.16f};
			Var0.f_5 = 1608500665;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = {-592.94f, -1631.58f, 27.16f};
			Var0.f_5 = -1456048340;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = {-592.71f, -1628.99f, 27.16f};
			Var0.f_5 = 943854909;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = {1991f, 3053f, 47f};
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = {1988.353f, 3054.411f, 47.3204f};
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = {-700.17f, 47.31f, 44.3f};
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = {-697.94f, 48.35f, 44.3f};
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = {241.3574f, 361.0488f, 105.8963f};
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = {-689.11f, 506.97f, 110.64f};
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = {-1055.96f, -236.43f, 44.17f};
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = {29f, 3661f, 41f};
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = {32f, 3667f, 41f};
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = {87f, -1959f, 21f};
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = {0f, -1823f, 30f};
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = {23.34f, -1897.6f, 23.05f};
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = {524.2f, 3081.14f, 41.16f};
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = {-1910.58f, -576.01f, 19.25f};
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = {-720.39f, 256.86f, 80.29f};
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = {-718.42f, 257.79f, 80.29f};
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = {106.38f, -742.7f, 46.18f};
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = {105.76f, -746.65f, 46.18f};
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = {-2343.53f, 3265.37f, 32.96f};
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = {-2342.23f, 3267.62f, 32.96f};
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = {-1041.933f, -2748.167f, 22.0308f};
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = {-1044.841f, -2746.489f, 22.0308f};
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = {-1045.12f, -232.004f, 39.4379f};
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = {-1046.516f, -229.3581f, 39.4379f};
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = {-1083.62f, -260.4167f, 38.1867f};
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = {-1080.974f, -259.0204f, 38.1867f};
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = {-1042.57f, -240.6f, 38.11f};
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = {1385.258f, -2079.949f, 52.7638f};
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {1656.57f, 4849.66f, 42.35f};
			Var0.f_5 = 243782214;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {1656.25f, 4852.24f, 42.35f};
			Var0.f_5 = 714115627;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = {-1051.402f, -474.6847f, 36.6199f};
			Var0.f_5 = 1668106976;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = {-1049.285f, -476.6376f, 36.7584f};
			Var0.f_5 = 1382347031;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = {-1210.957f, -580.8765f, 27.2373f};
			Var0.f_5 = -966790948;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = {-1212.445f, -578.4401f, 27.2373f};
			Var0.f_5 = -2068750132;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = {-565.1712f, 276.6259f, 83.2863f};
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = {-561.2863f, 293.5043f, 87.7771f};
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = {-631.96f, -236.33f, 38.21f};
			Var0.f_5 = 1874948872;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = {-630.43f, -238.44f, 38.21f};
			Var0.f_5 = -1965020851;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = {231.62f, 216.23f, 106.4f};
			Var0.f_5 = 1951546856;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = {232.72f, 213.88f, 106.4f};
			Var0.f_5 = -431382051;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = {258.32f, 203.84f, 106.43f};
			Var0.f_5 = -293975210;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = {260.76f, 202.95f, 106.43f};
			Var0.f_5 = -785215289;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = {256.31f, 220.66f, 106.43f};
			Var0.f_5 = -366143778;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = {266.36f, 217.57f, 110.43f};
			Var0.f_5 = 440819155;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = {-442.66f, 6015.222f, 31.8663f};
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = {-444.4985f, 6017.06f, 31.8663f};
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = {1855.685f, 3683.93f, 34.5928f};
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1223.35f, -172.41f, 39.98f};
			Var0.f_5 = -320891223;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1220.93f, -173.68f, 39.98f};
			Var0.f_5 = 1511747875;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1211.99f, -190.57f, 39.98f};
			Var0.f_5 = -1517722103;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1213.26f, -192.98f, 39.98f};
			Var0.f_5 = -1093199712;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1217.77f, -201.54f, 39.98f};
			Var0.f_5 = 1902048492;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1219.04f, -203.95f, 39.98f};
			Var0.f_5 = -444768985;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = {2514.32f, -317.34f, 93.32f};
			Var0.f_5 = 404057594;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = {2512.42f, -319.26f, 93.32f};
			Var0.f_5 = -1417472813;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = {2333.23f, 2574.97f, 47.03f};
			Var0.f_5 = -1376084479;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = {2329.65f, 2576.64f, 47.03f};
			Var0.f_5 = 457472151;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {16.1279f, -1114.605f, 29.9469f};
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {18.572f, -1115.495f, 29.9469f};
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {1698.176f, 3751.506f, 34.8553f};
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {1699.937f, 3753.42f, 34.8553f};
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {244.7274f, -44.0791f, 70.91f};
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {243.8379f, -46.5232f, 70.91f};
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {845.3624f, -1024.539f, 28.3448f};
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {842.7684f, -1024.539f, 23.3448f};
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-326.1122f, 6075.27f, 31.6047f};
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-324.273f, 6077.109f, 31.6047f};
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-665.2424f, -944.3256f, 21.9792f};
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-662.6414f, -944.3256f, 21.9792f};
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-1313.826f, -389.1259f, 36.8457f};
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-1314.465f, -391.6472f, 36.8457f};
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-1114.009f, 2689.77f, 18.7041f};
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-1112.071f, 2691.505f, 18.7041f};
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-3164.845f, 1081.392f, 20.9887f};
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-3163.812f, 1083.778f, 20.9887f};
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {2570.905f, 303.3556f, 108.8848f};
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {2568.304f, 303.3556f, 108.8848f};
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {813.1779f, -2148.27f, 29.7689f};
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {810.5769f, -2148.27f, 29.7689f};
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = {6.8179f, -1098.209f, 29.9469f};
			Var0.f_5 = 1487704245;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = {827.5342f, -2160.493f, 29.7688f};
			Var0.f_5 = 1529812051;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = {-1107.01f, 289.38f, 64.76f};
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = {-1101.62f, 290.36f, 64.76f};
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = {-1138.64f, 300.82f, 67.18f};
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = {-1137.05f, 295.59f, 67.18f};
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = {-2053.16f, 3239.49f, 30.5f};
			Var0.f_5 = -621770121;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = {-2054.39f, 3237.23f, 30.5f};
			Var0.f_5 = 1018580481;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = {-108.91f, 6469.11f, 31.91f};
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = {-182.91f, 6168.37f, 32.14f};
			Var0.f_5 = -1331552374;
			set_bit(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = {-59.89f, -1092.95f, 26.88f};
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = {-60.55f, -1094.75f, 26.89f};
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = {-39.13f, -1108.22f, 26.72f};
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = {-37.33f, -1108.87f, 26.72f};
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1943.73f, 3803.63f, 32.31f};
			Var0.f_5 = -2018911784;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {316.39f, -276.49f, 54.52f};
			Var0.f_5 = -93934272;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {313.96f, -275.6f, 54.52f};
			Var0.f_5 = 667682830;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {-2965.71f, 484.22f, 16.05f};
			Var0.f_5 = 1876735830;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {-2965.82f, 481.63f, 16.05f};
			Var0.f_5 = -2112857171;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = {962.1f, -2183.83f, 31.06f};
			Var0.f_5 = 2046930518;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = {961.79f, -2187.08f, 31.06f};
			Var0.f_5 = 1208502884;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = {2508.43f, -336.63f, 115.76f};
			Var0.f_5 = 1986432421;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2255.19f, 322.26f, 184.93f};
			Var0.f_5 = -722798986;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2254.06f, 319.7f, 184.93f};
			Var0.f_5 = 204301578;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2301.13f, 336.91f, 184.93f};
			Var0.f_5 = -320140460;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2298.57f, 338.05f, 184.93f};
			Var0.f_5 = 65222916;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2222.32f, 305.86f, 184.93f};
			Var0.f_5 = -920027322;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2221.19f, 303.3f, 184.93f};
			Var0.f_5 = -58432001;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2280.6f, 265.43f, 184.93f};
			Var0.f_5 = -2007378629;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2278.04f, 266.57f, 184.93f};
			Var0.f_5 = 418772613;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = {778.31f, -1867.49f, 30.66f};
			Var0.f_5 = 1679064921;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = {-721.35f, 91.01f, 56.68f};
			Var0.f_5 = 412198396;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = {-728.84f, 88.64f, 56.68f};
			Var0.f_5 = -1053755588;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = {-2287.62f, 363.9f, 174.93f};
			Var0.f_5 = -53446139;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = {-2289.78f, 362.91f, 174.93f};
			Var0.f_5 = 1333960556;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = {-2289.86f, 362.88f, 174.93f};
			Var0.f_5 = -41786493;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = {-2292.01f, 361.89f, 174.93f};
			Var0.f_5 = 1750120734;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = {1803.94f, 3929.01f, 33.72f};
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {-348.81f, -47.26f, 49.39f};
			Var0.f_5 = -2116116146;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {-351.26f, -46.41f, 49.39f};
			Var0.f_5 = -74083138;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = {962.9084f, -2105.814f, 34.6432f};
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_306(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= 10 - 1)
	{
		if (Global_86649[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86649[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_307(iVar0) || iParam4 == 0)
				{
					fVar1 = get_distance_between_coords(vParam0, Global_86649[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_307(int iParam0)
{
	return is_bit_set(Global_101154.f_5919[iParam0], false);
}

void func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_309(iParam0, iVar0);
		iVar0++;
	}
}

void func_309(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_310(iParam0, iParam1, &iVar2, &iVar3);
	if (network_is_game_in_progress())
	{
		iVar0 = func_99(iVar3, -1, 0);
	}
	else
	{
		stat_get_int(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = 0.8f + 0.4f * to_float(iVar0) / 100f;
			set_player_melee_weapon_damage_modifier(player_id(), fVar1);
			break;
		
		case 7:
			if (_get_number_of_instances_of_streamed_script(joaat("armenian3")) != 0 || _get_number_of_instances_of_streamed_script(joaat("trevor3")) != 0)
			{
				Global_88894 = 1;
			}
			else
			{
				fVar1 = 1f - to_float(iVar0) / 100f;
				set_player_noise_multiplier(player_id(), fVar1);
				set_player_sneaking_noise_multiplier(player_id(), fVar1);
				set_player_stealth_perception_modifier(player_id(), fVar1);
			}
			break;
	}
}

void func_310(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_311()
{
	struct<50> Var0;
	
	if ((is_ped_injured(player_ped_id()) || !func_180(func_574())) || !func_317())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_313(player_ped_id(), &Var0, 1);
	func_312(1306, Var0[0], -1, 1);
	func_312(1307, Var0[1], -1, 1);
	func_312(1308, Var0[2], -1, 1);
	func_312(1309, Var0[3], -1, 1);
	func_312(1310, Var0[4], -1, 1);
	func_312(1311, Var0[5], -1, 1);
	func_312(1312, Var0[6], -1, 1);
	func_312(1313, Var0[7], -1, 1);
	func_312(1314, Var0[8], -1, 1);
	func_312(1315, Var0[9], -1, 1);
	func_312(1316, Var0[10], -1, 1);
	func_312(1317, Var0[11], -1, 1);
	func_312(1318, Var0.f_13[0], -1, 1);
	func_312(1319, Var0.f_13[1], -1, 1);
	func_312(1320, Var0.f_13[2], -1, 1);
	func_312(1321, Var0.f_13[3], -1, 1);
	func_312(1322, Var0.f_13[4], -1, 1);
	func_312(1323, Var0.f_13[5], -1, 1);
	func_312(1324, Var0.f_13[6], -1, 1);
	func_312(1325, Var0.f_13[7], -1, 1);
	func_312(1326, Var0.f_13[8], -1, 1);
	func_312(1327, Var0.f_13[9], -1, 1);
	func_312(1328, Var0.f_13[10], -1, 1);
	func_312(1329, Var0.f_13[11], -1, 1);
	func_312(1330, Var0.f_26[0], -1, 1);
	func_312(1331, Var0.f_26[1], -1, 1);
	func_312(1332, Var0.f_26[2], -1, 1);
	func_312(1333, Var0.f_26[3], -1, 1);
	func_312(1334, Var0.f_26[4], -1, 1);
	func_312(1335, Var0.f_26[5], -1, 1);
	func_312(1336, Var0.f_26[6], -1, 1);
	func_312(1337, Var0.f_26[7], -1, 1);
	func_312(1338, Var0.f_26[8], -1, 1);
	func_312(1339, Var0.f_26[9], -1, 1);
	func_312(1340, Var0.f_26[10], -1, 1);
	func_312(1341, Var0.f_26[11], -1, 1);
	func_312(1342, Var0.f_39[0], -1, 1);
	func_312(1343, Var0.f_39[1], -1, 1);
	func_312(1344, Var0.f_39[2], -1, 1);
	func_312(1345, Var0.f_39[3], -1, 1);
	func_312(1346, Var0.f_39[4], -1, 1);
	func_312(1347, Var0.f_39[5], -1, 1);
	func_312(1348, Var0.f_39[6], -1, 1);
	func_312(1349, Var0.f_39[7], -1, 1);
	func_312(1350, Var0.f_39[8], -1, 1);
	func_312(1351, Var0.f_49[0], -1, 1);
	func_312(1352, Var0.f_49[1], -1, 1);
	func_312(1353, Var0.f_49[2], -1, 1);
	func_312(1354, Var0.f_49[3], -1, 1);
	func_312(1355, Var0.f_49[4], -1, 1);
	func_312(1356, Var0.f_49[5], -1, 1);
	func_312(1357, Var0.f_49[6], -1, 1);
	func_312(1358, Var0.f_49[7], -1, 1);
	func_312(1359, Var0.f_49[8], -1, 1);
	func_312(1360, func_574(), -1, 1);
	stat_set_bool(joaat("clo_stored_initial"), true, 1);
	Global_101154.f_1826.f_539.f_3543 = 1;
}

var func_312(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_41();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = false;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam2);
		iVar1 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam2);
		iVar1 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
		iVar1 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
		iVar1 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam2);
		iVar1 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
		iVar1 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	uVar2 = stat_set_masked_int(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_313(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_178(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_316(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_315(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_180(iVar0))
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
			if (func_314(161, -1))
			{
				*uParam1.f_59 = func_99(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_99(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_99(746, Global_69309, 0);
			*uParam1.f_61 = func_99(747, Global_69309, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_314(161, -1))
			{
				*uParam1.f_59 = func_99(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_99(745, Global_69309, 0);
			}
		}
	}
}

int func_314(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_98(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_315(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
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

void func_316(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
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

bool func_317()
{
	if (func_319() && func_318(0))
	{
		return true;
	}
	return false;
}

var func_318(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_319()
{
	return func_318(func_41() + 1);
}

void func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			set_relationship_between_groups(255, 1166638144, 1862763509);
			set_relationship_between_groups(2, 1862763509, -1865950624);
			set_relationship_between_groups(255, -1865950624, 1862763509);
			set_relationship_between_groups(1, Global_86614, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86614);
			set_relationship_between_groups(1, Global_86615, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86615);
			set_relationship_between_groups(1, Global_86616, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86616);
			break;
		
		case 1:
			set_relationship_between_groups(1, 1166638144, 1862763509);
			set_relationship_between_groups(2, 1862763509, -1865950624);
			set_relationship_between_groups(255, -1865950624, 1862763509);
			set_relationship_between_groups(1, Global_86614, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86614);
			set_relationship_between_groups(1, Global_86615, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86615);
			set_relationship_between_groups(1, Global_86616, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86616);
			break;
		
		case 2:
			set_relationship_between_groups(255, 1166638144, 1862763509);
			set_relationship_between_groups(5, 1862763509, -1865950624);
			set_relationship_between_groups(5, -1865950624, 1862763509);
			set_relationship_between_groups(1, Global_86614, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86614);
			set_relationship_between_groups(1, Global_86615, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86615);
			set_relationship_between_groups(1, Global_86616, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86616);
			break;
		
		default:
			break;
	}
}

void func_321()
{
	int iVar0;
	int iVar1;
	
	func_183();
	iVar0 = get_main_player_blip_id();
	if (does_blip_exist(iVar0))
	{
		iVar1 = Global_101154.f_1826.f_539.f_3549;
		if (func_120(14))
		{
			iVar1 = func_178(player_ped_id());
		}
		if (iVar1 == 0)
		{
			set_blip_name_from_text_file(iVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			set_blip_name_from_text_file(iVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			set_blip_name_from_text_file(iVar0, "BLIP_TREV");
		}
		else
		{
			set_blip_name_from_text_file(iVar0, "BLIP_PLAYER");
		}
	}
}

void func_322(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_323(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = get_ped_weapontype_in_slot(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (get_ammo_in_ped_weapon(iParam0, iVar3) == -1)
				{
					if (get_max_ammo(iParam0, iVar3, &uVar1))
					{
						set_ped_infinite_ammo(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = get_num_dlc_weapons();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (get_dlc_weapon_data(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (get_ammo_in_ped_weapon(iParam0, iVar3) == -1)
			{
				if (get_max_ammo(iParam0, iVar3, &uVar1))
				{
					set_ped_infinite_ammo(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_323(int iParam0)
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

void func_324(int iParam0)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
	if (func_180(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id() && get_ped_max_health(iParam0) == 200)
		{
			set_ped_max_health(iParam0, round(IntToFloat(get_ped_max_health(iParam0)) * Global_262145.f_105));
		}
		if (Global_101154.f_1826.f_539.f_290[iVar0] <= 0f)
		{
			Global_101154.f_1826.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_101154.f_1826.f_539.f_290[iVar0] <= 10f)
		{
			Global_101154.f_1826.f_539.f_290[iVar0] = 10f;
		}
		set_entity_health(iParam0, round(Global_101154.f_1826.f_539.f_290[iVar0] / 100f * to_float(get_ped_max_health(iParam0)) - 100f + 100f));
	}
}

bool func_325(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_326(iParam0))
	{
		return false;
	}
	return true;
}

int func_326(int iParam0)
{
	return func_327(iParam0, Global_35711);
}

bool func_327(int iParam0, int iParam1)
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

void func_328(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_329(4, *iParam1, 0);
			func_329(7, *iParam1, 0);
			func_329(8, *iParam1, 0);
			func_329(11, *iParam1, 0);
			break;
		
		case 1:
			func_329(4, *iParam1, 0);
			func_329(7, *iParam1, 0);
			func_329(8, *iParam1, 0);
			func_329(11, *iParam1, 0);
			if (Global_101154.f_7775.f_99.f_58[126])
			{
				func_329(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_329(4, *iParam1, 0);
			func_329(7, *iParam1, 0);
			func_329(8, *iParam1, 0);
			func_329(11, *iParam1, 0);
			break;
	}
}

void func_329(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!iParam2)
	{
		if (!does_entity_exist(iParam1))
		{
			return;
		}
	}
	if (Global_34834[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	iVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_34834[iParam0 /*31*/].f_24)
	{
		if (iVar1)
		{
			Global_34834[iParam0 /*31*/].f_25[iVar0 - 1] = Global_34834[iParam0 /*31*/].f_25[iVar0];
			Global_34834[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_34834[iParam0 /*31*/].f_25[iVar0])
		{
			Global_34834[iParam0 /*31*/].f_25[iVar0] = 0;
			iVar1 = true;
		}
		iVar0++;
	}
	if (iVar1)
	{
		Global_34834[iParam0 /*31*/].f_24--;
	}
}

void func_330(int iParam0, int iParam1)
{
	func_341(iParam0);
	func_336(iParam0, iParam1);
	func_335(iParam0);
	func_334(iParam0);
	func_333(iParam0);
	func_332(iParam0);
	func_331(iParam0);
}

void func_331(int iParam0)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
	if (func_180(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			Global_101154.f_1826.f_539.f_1556[iVar0] = get_player_wanted_level(player_id());
		}
	}
}

void func_332(int iParam0)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
	if (func_180(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_1546[iVar0 /*3*/] = {get_entity_velocity(iParam0)};
	}
}

void func_333(int iParam0)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
	if (func_180(iVar0) && !is_ped_injured(iParam0))
	{
		if (is_player_switch_in_progress() && get_player_switch_type() != 3)
		{
			if (get_player_switch_state() == 8)
			{
				return;
			}
		}
		Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] = {get_entity_coords(iParam0, 1)};
		Global_101154.f_1826.f_539.f_1538[iVar0] = get_entity_heading(iParam0);
		Global_101154.f_1826.f_539.f_1542[iVar0] = get_room_key_from_entity(iParam0);
		if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] >= 8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] = 7500f;
		}
		else if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] <= -8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] = -7500f;
		}
		if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_334(int iParam0)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
	if (func_180(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_335(int iParam0)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
	if (func_180(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_290[iVar0] = to_float(get_entity_health(iParam0)) - 100f / to_float(get_ped_max_health(iParam0)) - 100f * 100f;
	}
}

void func_336(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_178(iParam0);
	if (func_180(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			func_337(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
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

void func_337(int iParam0, var uParam1)
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
			iVar3 = func_323(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_323(iVar0));
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
					iVar2 = func_339(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							set_bit(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_339(vVar4.x, iVar1);
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
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_338(Var9.f_1)) && iVar70 < 50)
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

bool func_338(int iParam0)
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

int func_339(int iParam0, int iParam1)
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
				iVar1 = func_340(iParam0, &uVar2);
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

int func_340(int iParam0, var uParam1)
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

void func_341(int iParam0)
{
	int iVar0;
	
	iVar0 = func_178(iParam0);
	if (func_180(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_1524[iVar0] = func_22();
	}
}

int func_342(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar9;
	
	iVar0 = *uParam0.f_2;
	*uParam0.f_96.f_4 = *uParam0.f_62.f_9;
	switch (iVar0)
	{
		case 234:
			if (Global_3)
			{
				if (func_366(uParam0, &fVar1))
				{
					return func_350(19, 0, "EXTRASUNNY", "Cirrus", uParam0.f_96, fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 192:
			if (Global_3)
			{
				if (func_366(uParam0, &fVar1))
				{
					return func_350(9, 0, "Overcast", "RAIN", uParam0.f_96, fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 75:
			if (Global_3)
			{
				if (func_366(uParam0, &fVar1))
				{
					return func_350(19, 45, "SMOG", "Wispy", uParam0.f_96, fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 95:
			if (Global_3)
			{
				if (func_366(uParam0, &fVar1))
				{
					return func_350(22, 0, "SMOG", "", uParam0.f_96, fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 280:
			if (Global_3)
			{
				if (func_366(uParam0, &fVar1))
				{
					return func_350(18, 0, "SMOG", "", uParam0.f_96, fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 76:
			if (Global_3)
			{
				if (func_366(uParam0, &fVar1))
				{
					return func_350(22, 0, "SMOG", "", uParam0.f_96, fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 174:
			if (func_366(uParam0, &fVar1))
			{
				func_349(20, &uVar3, &iVar2);
				return func_350(iVar2, 0, "", "", uParam0.f_96, fVar1, 0, 1, 5f);
			}
			break;
		
		case 231:
			if (func_366(uParam0, &fVar1))
			{
				func_349(15, &uVar5, &iVar4);
				return func_350(iVar4, 0, "", "", uParam0.f_96, fVar1, 0, 1, 5f);
			}
			break;
	}
	if (func_346(Global_1312464))
	{
		iVar6 = func_304(Global_1312464);
		iVar7 = func_345(Global_1312464);
		sVar8 = "";
		sVar9 = "";
		if (!func_344())
		{
			sVar8 = "SMOG";
		}
		if (func_343(&fVar1, 5f))
		{
			return func_350(iVar6, iVar7, sVar8, sVar9, uParam0.f_96, fVar1, 0, 1, 5f);
		}
	}
	else if (!func_344())
	{
	}
	return 0;
}

bool func_343(float fParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_game_timer();
	if (iLocal_64 == -1)
	{
		iLocal_64 = iVar0;
	}
	iVar1 = iVar0 - iLocal_64;
	*fParam0 = to_float(iVar1) / fParam1 * 1000f;
	if (*fParam0 < 0f)
	{
		*fParam0 = 0f;
	}
	if (*fParam0 > 1f)
	{
		*fParam0 = 1f;
	}
	return true;
}

bool func_344()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	_get_weather_type_transition(&iVar0, &iVar1, &uVar2);
	switch (iVar0)
	{
		case -273223690:
		case 603685163:
		case -1530260698:
		case 669657108:
			return false;
			break;
	}
	switch (iVar1)
	{
		case -273223690:
		case 603685163:
		case -1530260698:
		case 669657108:
			return false;
			break;
	}
	return true;
}

int func_345(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

bool func_346(int iParam0)
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
	iVar0 = func_348(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_345(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_304(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_27(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_29(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_347(iParam0);
	if (iVar5 < 1 || iVar5 > func_26(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_347(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_348(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

void func_349(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_82399[iParam0 /*34*/].f_14;
			*uParam2 = Global_82399[iParam0 /*34*/].f_13;
			break;
	}
}

bool func_350(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, int iParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (*uParam4.f_3)
	{
		case 0:
			*uParam4 = func_22();
			iVar5 = func_22();
			func_30(&iVar5, iParam0);
			func_31(&iVar5, iParam1);
			func_32(&iVar5, 0);
			if (func_365(*uParam4, iVar5))
			{
				func_363(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_361(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			*uParam4.f_11 = iVar1 + iVar2 * 60 + iVar3 + iParam6 * 3600;
			func_356(to_float(*uParam4.f_11) / 3600f);
			if (iParam7)
			{
				_0x5F0F3F56635809EF(0.6f);
				_set_far_shadows_suppressed(0);
				_0x0AE73D8DF3A762B2(0);
			}
			func_355();
			*uParam4.f_10 = get_sound_id();
			play_sound_frontend(*uParam4.f_10, "TIME_LAPSE_MASTER", 0, 1);
			start_audio_scene("TOD_SHIFT_SCENE");
			func_354();
			*uParam4.f_3++;
			break;
		
		case 1:
		case 2:
			if ((does_cam_exist(*uParam4.f_4) && is_cam_interpolating(*uParam4.f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (does_cam_exist(*uParam4.f_4) && is_cam_interpolating(*uParam4.f_4))
				{
					fVar0 = get_cam_spline_phase(*uParam4.f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (*uParam4.f_3 == 1)
					{
						if (get_hash_key(sParam2) != 0)
						{
							_set_weather_type_over_time(sParam2, fParam8);
						}
						if (get_hash_key(sParam3) != 0)
						{
							_clear_cloud_hat();
							_set_cloud_hat_transition(sParam3, 0);
						}
						*uParam4.f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_363(&iVar5, *uParam4.f_11, 0, 0, 0, 0, 0);
				set_clock_time(func_304(iVar5), func_345(iVar5), func_348(iVar5));
				if (iParam7)
				{
					_0x03FC694AE06C5A20();
				}
				stop_sound(*uParam4.f_10);
				release_named_script_audio_bank("TIME_LAPSE");
				if (iParam7)
				{
					_0x0AE73D8DF3A762B2(1);
					_set_far_shadows_suppressed(1);
				}
				return true;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_353(fVar11 - fVar9 / fVar10 - fVar9, 0f, 1f);
			iVar4 = round(IntToFloat(*uParam4.f_11) * fVar12);
			iVar5 = *uParam4;
			func_363(&iVar5, iVar4, 0, 0, 0, 0, 0);
			set_clock_time(func_304(iVar5), func_345(iVar5), func_348(iVar5));
			if (func_347(iVar5) != get_clock_day_of_month())
			{
				set_clock_date(func_347(iVar5), func_29(iVar5), func_27(iVar5));
			}
			func_351();
			_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return false;
}

void func_351()
{
	_0xEB2D525B57F42B40();
	func_352();
}

void func_352()
{
	Global_17118.f_134 = 1;
}

float func_353(float fParam0, float fParam1, float fParam2)
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

void func_354()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		_remove_notification(Global_101154.f_12831[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

bool func_355()
{
	int iVar0;
	
	if (!is_entity_dead(player_ped_id(), 0))
	{
		return false;
	}
	if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
	{
		return false;
	}
	iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
	if (!is_entity_dead(iVar0, 0))
	{
		return false;
	}
	set_veh_radio_station(iVar0, "OFF");
	return true;
}

void func_356(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_360(&(Global_101154.f_16793.f_175[iVar0 /*19*/].f_5)))
		{
			func_357(&(Global_101154.f_16793.f_175[iVar0 /*19*/].f_5), fParam0 * 60f);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_360(&(Global_101154.f_16793.f_362[iVar1 /*3*/])))
		{
			func_357(&(Global_101154.f_16793.f_362[iVar1 /*3*/]), fParam0 * 60f);
		}
		iVar1++;
	}
	skip_radio_forward();
}

void func_357(int iParam0, float fParam1)
{
	if (func_360(iParam0))
	{
		func_258(iParam0, func_358(iParam0) + fParam1);
	}
}

float func_358(var uParam0)
{
	if (func_360(uParam0))
	{
		if (func_359(uParam0))
		{
			return *uParam0.f_2;
		}
		else
		{
			return func_259(is_bit_set(*uParam0, 4)) - *uParam0.f_1;
		}
	}
	return *uParam0.f_1;
}

int func_359(var uParam0)
{
	return is_bit_set(*uParam0, 2);
}

int func_360(var uParam0)
{
	return is_bit_set(*uParam0, true);
}

void func_361(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_365(iParam0, iParam1))
	{
		iVar0 = func_29(iParam1);
		iVar1 = func_27(iParam0);
		iVar2 = func_27(iParam0) - func_27(iParam1);
		iVar3 = func_29(iParam0) - func_29(iParam1);
		iVar4 = func_347(iParam0) - func_347(iParam1);
		iVar5 = func_304(iParam0) - func_304(iParam1);
		iVar6 = func_345(iParam0) - func_345(iParam1);
		iVar7 = func_348(iParam0) - func_348(iParam1);
	}
	else
	{
		iVar0 = func_29(iParam0);
		iVar1 = func_27(iParam1);
		iVar2 = func_27(iParam1) - func_27(iParam0);
		iVar3 = func_29(iParam1) - func_29(iParam0);
		iVar4 = func_347(iParam1) - func_347(iParam0);
		iVar5 = func_304(iParam1) - func_304(iParam0);
		iVar6 = func_345(iParam1) - func_345(iParam0);
		iVar7 = func_348(iParam1) - func_348(iParam0);
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
		iVar4 += func_26(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_362(to_float(iVar0 + 1), 0f, 12f));
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

float func_362(Vector3 fParam0, float fParam1, float fParam2)
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

void func_363(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_27(*iParam0);
	iVar1 = func_29(*iParam0);
	iVar2 = func_347(*iParam0);
	iVar3 = func_304(*iParam0);
	iVar4 = func_345(*iParam0);
	iVar5 = func_348(*iParam0);
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
	iVar6 = func_26(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_26(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_364(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_364(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, iParam1);
	func_31(uParam0, iParam2);
	func_30(uParam0, iParam3);
	func_24(uParam0, iParam5);
	func_25(uParam0, iParam4);
	func_23(uParam0, iParam6);
}

bool func_365(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_346(iParam1) || !func_346(iParam0))
	{
		return true;
	}
	iVar0 = func_27(iParam0);
	iVar1 = func_27(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_29(iParam0);
	iVar1 = func_29(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_347(iParam0);
	iVar1 = func_347(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_304(iParam0);
	iVar1 = func_304(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_345(iParam0);
	iVar1 = func_345(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_348(iParam0);
	iVar1 = func_348(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

bool func_366(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	Vector3 fVar9;
	Vector3 fVar10;
	
	vVar0 = {vLocal_58};
	vVar3 = {vLocal_61};
	if (!is_entity_dead(*uParam0.f_62.f_13, 0))
	{
		vLocal_58 = {get_entity_coords(*uParam0.f_62.f_13, 1)};
		vVar0 = {vLocal_58};
	}
	if (!is_entity_dead(*uParam0.f_62.f_12, 0))
	{
		vLocal_61 = {get_entity_coords(*uParam0.f_62.f_12, 1)};
		vVar3 = {vLocal_61};
	}
	vVar6 = {_get_gameplay_cam_coords()};
	fVar9 = get_distance_between_coords(vVar0, vVar3, 0);
	fVar10 = get_distance_between_coords(vVar0, vVar6, 0);
	*fParam1 = fVar10 / fVar9;
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	if (*fParam1 > 1f)
	{
		*fParam1 = 1f;
	}
	return true;
}

void func_367()
{
	func_368(Global_91066 - 1);
}

void func_368(int iParam0)
{
	Global_91066 = iParam0;
}

int func_369(var uParam0, int iParam1, int iParam2, var uParam3, Vector3 fParam4, Vector3 fParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	return func_370(uParam0, iParam1, iParam2, uParam3, fParam4, fParam5, iParam6, iParam7, sParam8, iParam9, 0, 0, 0);
	return 1;
}

bool func_370(var uParam0, int iParam1, int iParam2, var uParam3, Vector3 fParam4, Vector3 fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = uParam3;
	if (!*uParam0.f_16)
	{
		if (_0x71E7B2E657449AAD())
		{
			if (!iParam10)
			{
				*uParam0.f_13 = player_ped_id();
			}
			if ((!is_ped_injured(*uParam0.f_13) || iParam10) && !is_ped_injured(*uParam0.f_12))
			{
				*uParam0.f_27 = 0;
				Global_88530 = 1;
				if (!iParam10)
				{
					if (is_ped_sitting_in_any_vehicle(*uParam0.f_13))
					{
						iVar1 = get_vehicle_ped_is_in(*uParam0.f_13, 0);
						func_385(iVar1, 0);
					}
					set_player_control(player_id(), false, 0);
					set_entity_invincible(*uParam0.f_13, true);
					set_entity_invincible(*uParam0.f_12, true);
				}
				*uParam0.f_21 = func_384();
				func_592(1);
				if (iParam6)
				{
					iVar0 |= 4;
				}
				if (iParam7)
				{
					iVar0 |= 8;
				}
				if (does_cam_exist(iParam1) || !is_string_null_or_empty(sParam8))
				{
					iVar0 |= 2;
				}
				if (func_383())
				{
					iVar0 |= 1;
				}
				if (!is_player_switch_in_progress())
				{
					start_player_switch(*uParam0.f_13, *uParam0.f_12, iVar0, iParam2);
					if (iParam11)
					{
						_0x5F2013F8BC24EE69(iParam12);
					}
					switch (func_178(*uParam0.f_13))
					{
						case 0:
							_0xD2209BE128B5418C("SwitchHUDMichaelOut");
							break;
						
						case 1:
							_0xD2209BE128B5418C("SwitchHUDMichaelOut");
							break;
						
						case 2:
							_0xD2209BE128B5418C("SwitchHUDTrevorOut");
							break;
					}
					_0xD2209BE128B5418C("SwitchHUDOut");
				}
				else if (_0x933BBEEB8C61B5F4())
				{
					_0xD8295AF639FD9CB8(*uParam0.f_12);
					func_272(0);
				}
				else
				{
					return false;
				}
				if (does_cam_exist(iParam1))
				{
					if (get_ideal_player_switch_type(get_entity_coords(*uParam0.f_13, 1), get_entity_coords(*uParam0.f_12, 1)) != 3)
					{
						_0xC208B673CE446B61(get_cam_coord(iParam1), get_cam_rot(iParam1, iParam9), get_cam_fov(iParam1), get_cam_far_clip(iParam1), iParam9);
					}
				}
				if (!is_string_null_or_empty(sParam8))
				{
					_0x0FDE9DBFC0A6BC65(sParam8);
				}
				if (!Global_17118.f_111)
				{
					play_sound(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
					if (get_ideal_player_switch_type(get_entity_coords(*uParam0.f_13, 1), get_entity_coords(*uParam0.f_12, 1)) == 3)
					{
						play_sound(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
					if (Global_17118.f_109 == -1)
					{
						Global_17118.f_109 = get_sound_id();
					}
					Global_17118.f_110 = get_hash_key(get_this_script_name());
					play_sound(Global_17118.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
					start_audio_scene("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (is_audio_scene_active("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_17118.f_109 != -1 && Global_17118.f_110 == get_hash_key(get_this_script_name()))
				{
					stop_sound(Global_17118.f_109);
					release_sound_id(Global_17118.f_109);
					Global_17118.f_109 = -1;
					Global_17118.f_110 = 0;
				}
				*uParam0.f_25 = get_game_timer();
				*uParam0.f_16 = 1;
				func_382(1);
				key_hud_colour(1, *uParam0.f_13);
				if (get_follow_ped_cam_view_mode() == 3)
				{
					set_follow_ped_cam_view_mode(1);
				}
				if (get_follow_vehicle_cam_view_mode() == 3)
				{
					set_follow_vehicle_cam_view_mode(1);
				}
				if (!iParam10)
				{
					if (get_entity_model(*uParam0.f_12) == func_179(0))
					{
						_0xBF59707B3E5ED531(func_195(0));
					}
					else if (get_entity_model(*uParam0.f_12) == func_179(2))
					{
						_0xBF59707B3E5ED531(func_195(2));
					}
					else if (get_entity_model(*uParam0.f_12) == func_179(1))
					{
						_0xBF59707B3E5ED531(func_195(1));
					}
					else
					{
						_0xBF59707B3E5ED531("");
					}
					_0xBDEB86F4D5809204(0f);
				}
			}
			else
			{
				*uParam0.f_17 = 1;
			}
		}
		else
		{
			*uParam0.f_17 = 1;
		}
	}
	if (*uParam0.f_16)
	{
		if (is_player_switch_in_progress())
		{
			if (!Global_17118.f_111)
			{
			}
			if (func_615(uParam3, 512))
			{
				if (!_0xDFA80CB25D0A19B3())
				{
				}
				else if (Global_91066 == 0)
				{
					_0xAD5FDF34B81BFE79();
				}
			}
			if (get_player_switch_type() == 3)
			{
				if (get_player_short_switch_state() >= 1)
				{
					if (!*uParam0.f_18)
					{
						func_354();
						*uParam0.f_18 = 1;
					}
					if (!*uParam0.f_22)
					{
						func_373(0, 1);
						*uParam0.f_22 = 1;
					}
				}
			}
			else
			{
				if (get_player_switch_state() >= 8)
				{
					if (!*uParam0.f_18)
					{
						func_354();
						*uParam0.f_18 = 1;
					}
				}
				if (!*uParam0.f_18)
				{
					if (destroy_player_in_pause_menu() && get_player_switch_state() == 3)
					{
						vVar2 = {get_entity_coords(player_ped_id(), 1)};
						vVar5 = {_get_gameplay_cam_coords()};
						fVar8 = 20f;
						fVar9 = vdist2(vVar2, vVar5);
						if (fVar9 < fVar8 * fVar8)
						{
							func_354();
							*uParam0.f_18 = 1;
						}
					}
				}
				if (!*uParam0.f_22)
				{
					if (get_player_switch_state() > 2)
					{
						func_373(0, 1);
						*uParam0.f_22 = 1;
					}
				}
				if (!*uParam0.f_23)
				{
					if (get_player_switch_state() >= 3)
					{
						_0xB11D94BC55F41932("CSM_ST_BOX3x3");
						*uParam0.f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!*uParam0.f_18)
			{
				*uParam0.f_18 = 1;
				func_354();
			}
			if (!*uParam0.f_22)
			{
				func_373(0, 1);
				*uParam0.f_22 = 1;
			}
			*uParam0.f_17 = 1;
		}
	}
	if (*uParam0.f_17)
	{
		iVar10 = func_371();
		if (((iVar10 != 8 && iVar10 != 9) && iVar10 != 10) && iVar10 != 55)
		{
			func_592(*uParam0.f_21);
		}
		if (*uParam0.f_23)
		{
			_0x27CB772218215325();
			*uParam0.f_23 = 0;
		}
		*uParam0.f_16 = 0;
		*uParam0.f_17 = 0;
		*uParam0.f_18 = 0;
		*uParam0.f_19 = 0;
		*uParam0.f_20 = 0;
		*uParam0.f_24 = 0;
		*uParam0.f_27 = 0;
		if (Global_17118.f_109 != -1 && Global_17118.f_110 == get_hash_key(get_this_script_name()))
		{
			stop_sound(Global_17118.f_109);
			release_sound_id(Global_17118.f_109);
			Global_17118.f_109 = -1;
			Global_17118.f_110 = 0;
		}
		if (is_audio_scene_active("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			stop_audio_scene("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_17118.f_107 != -1 && Global_17118.f_108 == get_hash_key(get_this_script_name()))
		{
			stop_sound(Global_17118.f_107);
			release_sound_id(Global_17118.f_107);
			Global_17118.f_107 = -1;
			Global_17118.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			set_gameplay_cam_relative_heading(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			set_gameplay_cam_relative_pitch(fParam4, 1f);
		}
		if (!Global_36805)
		{
			stop_gameplay_cam_shaking(true);
			_0x487A82C650EB7799(0f);
			_0x0225778816FDC28C(0f);
		}
		if (!iParam10)
		{
			if (!is_ped_injured(*uParam0.f_13))
			{
				set_entity_visible(*uParam0.f_13, true, 0);
				set_ped_can_be_targetted(*uParam0.f_13, true);
				if (!is_ped_in_any_vehicle(*uParam0.f_13, 0))
				{
					set_entity_collision(*uParam0.f_13, true, 0);
				}
				if (is_ped_sitting_in_any_vehicle(*uParam0.f_13))
				{
					iVar11 = get_vehicle_ped_is_in(*uParam0.f_13, 0);
					func_385(iVar11, 1);
				}
			}
		}
		func_272(0);
		if (!iParam10)
		{
			if (!is_ped_injured(*uParam0.f_13) || iParam10)
			{
				set_entity_invincible(*uParam0.f_13, false);
			}
			if (!is_ped_injured(*uParam0.f_12))
			{
				set_entity_invincible(*uParam0.f_12, false);
			}
			set_player_control(player_id(), true, 0);
			_0xBBF327DED94E4DEB(func_195(func_574()));
		}
		func_382(0);
		key_hud_colour(0, false);
		return false;
	}
	hide_hud_and_radar_this_frame();
	return true;
}

int func_371()
{
	if (is_player_switch_in_progress())
	{
		return Global_89453;
	}
	if (func_372())
	{
		return Global_89453;
	}
	return 318;
}

bool func_372()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

void func_373(int iParam0, int iParam1)
{
	if (iParam1)
	{
		func_380(iParam0);
	}
	func_378(0);
	func_374(65);
}

void func_374(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar0 = func_377();
	if (Global_1315913)
	{
		sVar1 = func_376(iParam0);
		iVar2 = get_hash_key(sVar1);
		func_375(&Global_2445458, 1, 0);
		unk_0xC3BFED92026A2AAD(iVar2, 1, iVar0, iParam0, 0);
	}
	Global_1315846 = iParam0;
}

void func_375(var uParam0, int iParam1, int iParam2)
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

char* func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 28:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 29:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 30:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 31:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 33:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 34:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 35:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 37:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 38:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 39:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 45:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 46:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 47:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 48:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 50:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 51:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 44:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 53:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 52:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 54:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 55:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 57:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 61:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 62:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 63:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 64:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 65:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 66:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		default:
	}
	return "";
}

var func_377()
{
	return Global_1315846;
}

void func_378(int iParam0)
{
	var uVar0;
	
	uVar0 = func_379();
	Global_1315845 = iParam0;
}

var func_379()
{
	return Global_1315845;
}

void func_380(int iParam0)
{
	int iVar0;
	
	func_381(&Global_17038);
	_0x22A249A53034450A(0);
	iVar0 = 1;
	if (iParam0)
	{
		if (iVar0 == 1)
		{
			stop_player_switch();
			func_272(0);
			if (does_entity_exist(Global_1318697))
			{
				if (does_entity_belong_to_this_script(Global_1318697, 0))
				{
					if (!is_entity_a_mission_entity(Global_1318697))
					{
						set_entity_as_mission_entity(Global_1318697, false, 0);
					}
					delete_ped(&Global_1318697);
				}
			}
		}
	}
}

void func_381(var uParam0)
{
	*uParam0.f_15 = 0;
	*uParam0.f_16 = 0;
	*uParam0.f_17 = 0;
	*uParam0.f_18 = 0;
	*uParam0.f_19 = 0;
	*uParam0.f_20 = 0;
	if (does_cam_exist(*uParam0.f_9))
	{
		if (is_cam_active(*uParam0.f_9))
		{
			func_382(0);
		}
		destroy_cam(*uParam0.f_9, 0);
	}
	if (!Global_36805)
	{
		stop_gameplay_cam_shaking(true);
		_0x487A82C650EB7799(0f);
		_0x0225778816FDC28C(0f);
	}
	Global_2404956.f_556 = 0f;
	render_script_cams(false, false, false, 1, 0, 0);
}

void func_382(int iParam0)
{
	Global_17116 = iParam0;
}

var func_383()
{
	return Global_1315913;
}

bool func_384()
{
	if (Global_14413.f_1 == 1)
	{
		return true;
	}
	return false;
}

void func_385(int iParam0, int iParam1)
{
	if (is_entity_a_mission_entity(iParam0))
	{
		_0xC50CE861B55EAB8B(iParam0, iParam1);
	}
	else
	{
		set_entity_as_mission_entity(iParam0, true, 0);
		_0xC50CE861B55EAB8B(iParam0, iParam1);
		set_vehicle_as_no_longer_needed(&iParam0);
	}
}

int func_386(var uParam0, int iParam1, var uParam2, Vector3 fParam3, Vector3 fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
{
	return func_370(uParam0, 0, iParam1, uParam2, fParam3, fParam4, iParam5, iParam6, sParam7, 2, 0, iParam8, iParam9);
	return 1;
}

void func_387(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7, var uParam8)
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	
	*iParam1 = 1;
	*iParam2 = 0;
	*iParam3 = 0;
	if (*uParam0.f_17.f_5 < 3 && *uParam0.f_17.f_6 < 3)
	{
		if (*uParam0.f_17.f_5 != *uParam0.f_17.f_6)
		{
			uVar0 = func_555(*uParam0.f_17.f_5);
			uVar1 = func_555(*uParam0.f_17.f_6);
			vVar2 = {Global_101154.f_1826.f_539.f_1528[uVar0 /*3*/]};
			vVar5 = {Global_101154.f_1826.f_539.f_1528[uVar1 /*3*/]};
			if (vdist2(vVar2, vVar5) < 150f * 150f)
			{
				*iParam2 = 1;
			}
		}
	}
	if (func_574() == 145)
	{
		*iParam1 = 0;
	}
	if (Global_3)
	{
		*iParam1 = 0;
	}
	if (func_615(*uParam8, 64))
	{
		if (!func_615(*uParam8, 512))
		{
			func_253(uParam8, 512);
		}
		*iParam3 = 2;
		*iParam1 = 0;
	}
	if (((*uParam0.f_2 == 174 || *uParam0.f_2 == 232) || *uParam0.f_2 == 233) || *uParam0.f_2 == 231)
	{
		if (*iParam3 == 0)
		{
			*iParam3 = 1;
		}
		*iParam1 = 0;
	}
	if (Global_89000)
	{
		*iParam1 = 0;
	}
	if (!((*uParam0.f_2 == 5 || *uParam0.f_2 == 6) || *uParam0.f_2 == 7))
	{
		if (*iParam3 == 0)
		{
			*iParam3 = 1;
		}
	}
	else if (*iParam3 == 0)
	{
		iVar8 = *uParam0.f_62.f_13;
		if (!does_entity_exist(iVar8))
		{
			iVar8 = player_ped_id();
		}
		if (get_ideal_player_switch_type(get_entity_coords(iVar8, 0), get_entity_coords(*uParam0.f_62.f_12, 0)) == 3)
		{
			if (*iParam3 == 0)
			{
				if (!is_entity_dead(*uParam0.f_62.f_12, 0))
				{
					if (!_0x66680A92700F43DF(*uParam0.f_62.f_12))
					{
						*iParam3 = 2;
					}
				}
			}
			if (*iParam3 == 0)
			{
				iVar9 = 0;
				iVar10 = 0;
				iVar11 = get_interior_from_entity(iVar8);
				if (is_valid_interior(iVar11))
				{
					iVar9 = get_interior_group_id(iVar11);
				}
				if (is_valid_interior(*uParam0.f_16))
				{
					iVar10 = get_interior_group_id(*uParam0.f_16);
				}
				if (iVar9 != iVar10)
				{
					*iParam3 = 2;
				}
				else
				{
					if (iVar9 != 0)
					{
					}
					if (iVar10 != 0)
					{
					}
				}
			}
		}
	}
	if (!func_388(*uParam0.f_2, fParam4, &uVar12, fParam5))
	{
	}
	*iParam6 = 0;
	*iParam7 = 0;
	if (Global_91066 > 0)
	{
		*iParam7 = 1;
	}
}

int func_388(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = 1f;
	if (get_follow_ped_cam_view_mode() == 4)
	{
		switch (iParam0)
		{
			case 211:
			case 213:
				*uParam3 = -0.0922f;
				*uParam1 = -32.8439f;
				return 1;
				break;
			
			case 291:
				*uParam3 = -0.092f;
				*uParam1 = -3.5553f;
				return 1;
				break;
			
			case 299:
				*uParam3 = -0.0916f;
				*uParam1 = -1.4212f;
				return 1;
				break;
			
			case 293:
			case 294:
				*uParam3 = -0.0944f;
				*uParam1 = -4.2087f;
				return 1;
				break;
			
			case 292:
			case 295:
				*uParam3 = -0.092f;
				*uParam1 = -2.1053f;
				return 1;
				break;
			
			case 312:
				*uParam3 = 0f;
				*uParam1 = -7.6775f;
				return 1;
				break;
		}
		*uParam3 = 0f;
		*uParam1 = 0f;
		return 1;
	}
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
			*uParam1 = 999f;
			*uParam3 = 999f;
			return 0;
			break;
		
		case 134:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 105:
			*uParam3 = -325.239f;
			*uParam1 = -9.9f;
			return 1;
			break;
		
		case 280:
			if (!Global_3)
			{
				*uParam3 = -60f;
				*uParam1 = 0f;
				return 1;
			}
			break;
		
		case 224:
			return func_388(222, uParam1, uParam2, uParam3);
			break;
		
		case 193:
			*uParam3 = -9f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 236:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 289:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 290:
			return func_388(289, uParam1, uParam2, uParam3);
			break;
		
		case 278:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 271:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 245:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 40:
			return func_388(245, uParam1, uParam2, uParam3);
			break;
		
		case 192:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 89:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 90:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 127:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
	}
	*uParam1 = 999f;
	*uParam3 = 999f;
	return 0;
}

bool func_389(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
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

bool func_390(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 231:
			iVar0 = joaat("a_m_m_hillbilly_02");
			iVar1 = func_392();
			iVar2 = joaat("baller");
			iVar3 = joaat("dubsta");
			request_model(iVar2);
			request_model(iVar3);
			request_model(iVar0);
			request_model(iVar1);
			request_model(joaat("radi"));
			request_model(joaat("sabregt"));
			request_vehicle_recording(3, "lkexcile2");
			request_vehicle_recording(4, "lkexcile2");
			request_vehicle_recording(5, "lkexile2");
			request_vehicle_recording(true, "lkexcile2_chase");
			request_vehicle_recording(2, "lkexcile2_chase");
			request_vehicle_recording(3, "lkexcile2_chase");
			request_vehicle_recording(4, "lkexcile2_chase");
			request_vehicle_recording(5, "lkexcile2_chase");
			request_vehicle_recording(6, "lkexcile2_chase");
			request_vehicle_recording(7, "lkexcile2_chase");
			request_vehicle_recording(8, "lkexcile2_chase");
			request_vehicle_recording(9, "lkexcile2_chase");
			request_vehicle_recording(10, "lkexcile2_chase");
			request_vehicle_recording(11, "lkexcile2_chase");
			request_vehicle_recording(12, "lkexcile2_chase");
			request_vehicle_recording(13, "lkexcile2_chase");
			request_vehicle_recording(14, "lkexcile2_chase");
			request_vehicle_recording(15, "lkexcile2_chase");
			request_vehicle_recording(16, "lkexcile2_chase");
			request_vehicle_recording(17, "lkexcile2_chase");
			request_vehicle_recording(18, "lkexcile2_chase");
			request_vehicle_recording(19, "lkexcile2_chase");
			request_vehicle_recording(100, "lkexcile2_chase");
			request_anim_dict("missexile2");
			request_anim_dict("missexile2switch");
			request_anim_dict("missswitch");
			request_anim_dict("shake_cam_all@");
			func_391(15);
			return true;
			break;
	}
	return false;
}

void func_391(int iParam0)
{
	if (Global_88535 == -1)
	{
		Global_88535 = iParam0;
	}
}

int func_392()
{
	return joaat("a_c_chop");
}

bool func_393(var uParam0)
{
	char* sVar0;
	
	if (*uParam0.f_16 != 0)
	{
		switch (*uParam0.f_2)
		{
			case 187:
			case default:
		}
		sVar0 = "";
		return false;
		force_room_for_entity(*uParam0.f_17[*uParam0.f_61], *uParam0.f_16, get_hash_key(sVar0));
		return true;
	}
	return false;
}

void func_394(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = get_entity_model(iParam0);
	uVar2 = func_64(iVar1);
	iVar0 = false;
	while (iVar0 <= 11)
	{
		if (Global_101154.f_1826.f_539[uVar2 /*65*/].f_13[iVar0] != -1 && Global_101154.f_1826.f_539[uVar2 /*65*/][iVar0] != -1)
		{
			_0x39D55A620FCB6A3A(iParam0, iVar0, Global_101154.f_1826.f_539[uVar2 /*65*/].f_13[iVar0], Global_101154.f_1826.f_539[uVar2 /*65*/][iVar0]);
		}
		iVar0++;
	}
}

bool func_395(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (func_180(iParam1))
	{
		iVar0 = func_179(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			*iParam0 = create_ped(26, iVar0, vParam2, fParam5, 0, false);
			func_549(*iParam0, iParam1, iParam7);
			_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_542(*iParam0);
			func_537(*iParam0, 1, 0);
			func_536(*iParam0);
			func_533(*iParam0);
			func_397(*iParam0, iParam8);
			func_396(*iParam0);
			if (iParam6)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

void func_396(int iParam0)
{
	int iVar0;
	
	if (is_ped_injured(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88980[iVar0]) && Global_88980[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!does_entity_exist(Global_88980[iVar0]))
		{
			Global_88980[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

bool func_397(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_178(iParam0);
	if (func_532(iVar0))
	{
		func_531(iVar0, 0);
		func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_401(iParam0, 1);
		return true;
	}
	if (!iParam1)
	{
		if (func_399(iParam0))
		{
			func_531(iVar0, 0);
			func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_401(iParam0, 1);
			return true;
		}
	}
	iVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_101154.f_7775.f_99.f_58[120] && !Global_101154.f_7775.f_99.f_58[122])
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_101154.f_7775.f_99.f_58[121] = 1;
				return true;
			}
			if (Global_101154.f_7775.f_99.f_58[123])
			{
				Global_101154.f_7775.f_99.f_58[123] = 0;
				if (!is_ped_injured(iParam0))
				{
					if (func_177(iParam0, 3, 169))
					{
						func_65(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return true;
					}
				}
			}
			if (func_177(iParam0, 12, 6))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_177(iParam0, 12, 17))
			{
				if (!func_398(get_entity_model(iParam0), 12, 17))
				{
					func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_177(iParam0, 12, 20))
			{
				if (!func_398(get_entity_model(iParam0), 12, 20))
				{
					func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_177(iParam0, 12, 21))
			{
				if (!func_398(get_entity_model(iParam0), 12, 21))
				{
					func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_177(iParam0, 12, 22))
			{
				if (!func_398(get_entity_model(iParam0), 12, 22))
				{
					func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_177(iParam0, 12, 11))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_177(iParam0, 12, 10))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_177(iParam0, 12, 50))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_177(iParam0, 14, 59))
			{
				func_65(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_177(iParam0, 8, 22))
			{
				func_65(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_177(iParam0, 12, 14))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
		
		case 1:
			if (func_177(iParam0, 12, 13))
			{
				if (!func_398(get_entity_model(iParam0), 12, 13))
				{
					func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_177(iParam0, 12, 14))
			{
				if (!func_398(get_entity_model(iParam0), 12, 14))
				{
					func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_177(iParam0, 12, 15))
			{
				if (!func_398(get_entity_model(iParam0), 12, 15))
				{
					func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_177(iParam0, 12, 4))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_177(iParam0, 12, 3))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_177(iParam0, 14, 82))
			{
				func_65(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_177(iParam0, 8, 76))
			{
				func_65(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_177(iParam0, 12, 1))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
		
		case 2:
			if (func_177(iParam0, 12, 12))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_177(iParam0, 12, 15))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (!iParam1)
			{
				if (func_177(iParam0, 3, 71))
				{
					func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_177(iParam0, 12, 17))
			{
				if (!func_398(get_entity_model(iParam0), 12, 17))
				{
					func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_177(iParam0, 12, 18))
			{
				if (!func_398(get_entity_model(iParam0), 12, 18))
				{
					func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_177(iParam0, 12, 19))
			{
				if (!func_398(get_entity_model(iParam0), 12, 19))
				{
					func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_177(iParam0, 12, 7))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_177(iParam0, 12, 6))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_177(iParam0, 14, 88))
			{
				func_65(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_177(iParam0, 8, 17))
			{
				func_65(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_177(iParam0, 12, 11))
			{
				func_65(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
	}
	return false;
}

int func_398(int iParam0, int iParam1, int iParam2)
{
	Global_69311[1 /*14*/] = {func_112(iParam0, iParam1, iParam2)};
	return is_bit_set(Global_69311[1 /*14*/].f_6, true);
}

int func_399(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_entity_model(iParam0);
	iVar0 = func_93(iParam0, 4);
	return func_400(iVar1, 4, iVar0);
}

bool func_400(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return true;
			}
		}
	}
	return false;
}

void func_401(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_178(iParam0);
		if (func_180(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_71(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_530(iVar0);
					func_403(iParam0, &(Global_101154.f_1826.f_539[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_313(iParam0, &Var2, 1);
			Global_91068[iVar0 /*65*/] = {Var2};
			if (iParam0 == player_ped_id())
			{
				func_311();
			}
			if (get_hash_key(get_this_script_name()) != get_hash_key("clothes_shop_sp") || (_get_number_of_instances_of_streamed_script(joaat("lester1")) == 0 && _get_number_of_instances_of_streamed_script(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_120(0) && !func_120(1)) && !func_120(2)) && !func_120(3)) && !func_120(4)) && !func_120(9)) && !func_120(10)))
				{
					Global_101154.f_1826.f_539[iVar0 /*65*/] = {Var2};
					Global_101154.f_1826.f_539.f_1619[iVar0] = func_402(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_101154.f_1826.f_539.f_204[iVar67 /*4*/][iVar0] = func_93(iParam0, func_110(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_101154.f_1826.f_539.f_204[iVar67 /*4*/][iVar0] = func_93(iParam0, func_110(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_101154.f_7775.f_99.f_58[121])
						{
							Global_101154.f_7775.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_402(int iParam0)
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
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = get_number_of_ped_drawable_variations(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 += get_number_of_ped_texture_variations(iParam0, iVar4, iVar2);
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = get_number_of_ped_prop_drawable_variations(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 += get_number_of_ped_prop_texture_variations(iParam0, iVar8, iVar6);
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_403(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_178(iParam0);
		iVar1 = get_entity_model(iParam0);
		iVar3 = false;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !iParam2))
			{
				set_ped_component_variation(iParam0, iVar3, *uParam1.f_13[iVar3], *uParam1[iVar3], *uParam1.f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = false;
		while (iVar3 < 9)
		{
			if (*uParam1.f_39[iVar3] != -1 && *uParam1.f_39[iVar3] != 255)
			{
				set_ped_prop_index(iParam0, iVar3, *uParam1.f_39[iVar3], *uParam1.f_49[iVar3], false);
			}
			else
			{
				clear_ped_prop(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_180(iVar0))
		{
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_59 = *uParam1.f_59;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_60 = *uParam1.f_60;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_61 = *uParam1.f_61;
			if (func_103(iParam0, iVar1, &iVar2, 0))
			{
				func_65(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_62 = *uParam1.f_62;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_63 = *uParam1.f_63;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_64 = *uParam1.f_64;
			if (func_63(iParam0, iVar1, &iVar2))
			{
				func_65(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (network_is_game_in_progress() && get_entity_model(iParam0) == get_entity_model(player_ped_id()))
		{
			func_97(746, *uParam1.f_60, Global_69309, 1);
			func_97(747, *uParam1.f_61, Global_69309, 1);
			iVar4 = func_94(iParam0, *uParam1.f_13[2], *uParam1[2], 2);
			func_406(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_69309, 0);
			if (!iParam2)
			{
				iVar5 = func_94(iParam0, *uParam1.f_13[1], *uParam1[1], 1);
				func_406(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_69309, 0);
			}
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			func_97(745, *uParam1.f_59, Global_69309, 1);
			func_97(2043, *uParam1.f_59, Global_69309, 1);
			func_404(161, 1, -1, 1);
		}
	}
}

void func_404(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_405())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_98(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

bool func_405()
{
	return true;
	return false;
}

bool func_406(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	float fVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	var uVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	var uVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	
	if (!network_is_game_in_progress())
	{
		if ((Global_1315845 != 4 && Global_1315845 != 5) && Global_1315845 != 7)
		{
			return false;
		}
	}
	if (is_ped_injured(iParam0) || iParam2 == -99)
	{
		return false;
	}
	if (iParam0 == player_ped_id() && Global_2418472[player_id() /*313*/].f_220 == 2)
	{
		return false;
	}
	Global_69310++;
	iVar5 = get_entity_model(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_69311[1 /*14*/] = {func_497(iVar5, iParam1, iParam2)};
		if (!func_102(iParam3))
		{
			Global_69310--;
			return false;
		}
		func_495(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		clear_all_ped_props(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = {Global_69354};
		}
		else
		{
			uVar15 = {func_108(iVar5, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_69311[1 /*14*/] = {func_497(iVar5, 10, 0)};
					if (iParam4 == -1)
					{
						set_ped_component_variation(iParam0, func_104(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_104(iVar0)));
					}
					else
					{
						set_ped_component_variation(iParam0, func_104(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
					}
					if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
					{
						func_495(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_69311[1 /*14*/] = {func_497(iVar5, iVar0, uVar15[iVar0])};
					if (is_bit_set(Global_69311[1 /*14*/].f_6, false) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = {Global_69370};
							}
							else
							{
								uVar31 = {func_105(iVar5, uVar15[iVar0])};
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_69311[1 /*14*/] = {func_497(iVar5, 14, uVar31[iVar1])};
								func_81(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
								if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
								{
									func_495(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									set_ped_component_variation(iParam0, func_104(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_104(iVar0)));
								}
								else
								{
									set_ped_component_variation(iParam0, func_104(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_406(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
							if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
							{
								func_495(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69311[1 /*14*/] = {func_497(iVar5, iVar0, func_494(iParam0, iVar0, -1))};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 3))
				{
					uVar41 = {func_108(iVar5, 0)};
					func_406(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = func_493();
			if (iVar57 != -1)
			{
				func_491(iVar57, 0, Global_69309);
			}
			func_489(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = {func_105(iVar5, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69311[1 /*14*/] = {func_497(iVar5, 14, uVar58[iVar1])};
			func_81(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
			{
				func_495(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_69310 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_487(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_406(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = get_hash_name_for_component(iParam0, true, get_ped_drawable_variation(iParam0, true), get_ped_texture_variation(iParam0, true));
		if (_0x341DE7ED1D2A1BFD(iVar68, 838607662, false))
		{
			iVar69 = func_93(iParam0, 1);
			iVar3 = func_487(iParam0, iVar5, 1, iVar69, 14, Global_69311[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = func_486(iVar5, 1, -1);
			}
		}
		func_81(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
		if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
		{
			func_495(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_487(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_406(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = -1;
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 6) && _0x341DE7ED1D2A1BFD(Global_2621444, -1996375172, 11))
				{
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 0);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 1);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 2);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 3);
				}
				iVar71 = func_93(iParam0, 11);
				iVar72 = func_93(iParam0, 8);
				iVar73 = func_93(iParam0, 4);
				iVar8 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
				if (_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar70 = func_83(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar70 = func_83(iVar5, iParam2, 11, 4);
					}
					if (((_0x341DE7ED1D2A1BFD(iVar70, 320460654, false) || _0x341DE7ED1D2A1BFD(iVar70, -2017999390, false)) || _0x341DE7ED1D2A1BFD(iVar70, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar70, -826135203, false))
					{
					}
					else
					{
						iVar9 = func_93(iParam0, 8);
					}
				}
				iVar74 = get_hash_name_for_component(iParam0, 3, get_ped_drawable_variation(iParam0, 3), false);
				if (_0x341DE7ED1D2A1BFD(iVar74, -356646862, false))
				{
					iVar75 = func_485(iVar5, iVar72, iVar71, iVar73);
					if (iVar75 == -99)
					{
						iVar75 = func_487(iParam0, iVar5, 11, iVar71, 3, 0);
					}
					switch (iVar74)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar75 = 11;
							iVar70 = func_83(iVar5, iParam2, 11, 4);
							if (!_0x341DE7ED1D2A1BFD(iVar70, -530089825, false))
							{
								iVar75 = -99;
							}
							break;
					}
					if (iVar75 != -99)
					{
						iVar76 = iVar75;
						iVar77 = 0;
						while (iVar77 < 15)
						{
							if (func_484(iVar5, iVar76, iVar77) == iVar74)
							{
								iVar11 = iVar77;
								iVar12 = get_ped_texture_variation(iParam0, 3);
							}
							iVar77++;
						}
					}
				}
				iVar70 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && _0x341DE7ED1D2A1BFD(func_83(iVar5, iParam2, 11, 4), -1200513218, false))
				{
					iVar71 = func_93(iParam0, 11);
					if (iVar71 >= 256)
					{
						iVar70 = func_83(iVar5, iVar71, 11, 4);
					}
					if (iVar71 >= 256 && _0x341DE7ED1D2A1BFD(iVar70, 1965569012, false))
					{
						iVar78 = func_482(iVar5, iVar71, iParam2, get_ped_texture_variation(iParam0, 11));
						if (iVar78 != -99)
						{
							func_406(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_69311[1 /*14*/] = {func_497(iVar5, iParam1, iParam2)};
						}
					}
				}
				else if (func_481(iVar5, iParam2))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar71 >= 237)
						{
							iVar70 = func_83(iVar5, iVar71, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar71 >= 256)
						{
							iVar70 = func_83(iVar5, iVar71, 11, 4);
						}
					}
					if (!func_481(iVar5, iVar71))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && (_0x341DE7ED1D2A1BFD(iVar70, -1200513218, false) || _0x341DE7ED1D2A1BFD(iVar70, 1965569012, false)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && ((((((_0x341DE7ED1D2A1BFD(iVar70, 684992453, false) || _0x341DE7ED1D2A1BFD(iVar70, 916636514, false)) || _0x341DE7ED1D2A1BFD(iVar70, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar70, -820724897, false)) || _0x341DE7ED1D2A1BFD(iVar70, 153792394, false)) || _0x341DE7ED1D2A1BFD(iVar70, -872449705, false)) || _0x341DE7ED1D2A1BFD(iVar70, 700658917, false)))
						{
						}
						else
						{
							iVar79 = func_482(iVar5, iVar71, iParam2, get_ped_texture_variation(iParam0, 11));
							if (iVar79 != -99)
							{
								func_406(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69311[1 /*14*/] = {func_497(iVar5, iParam1, iParam2)};
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar80 = func_486(iVar5, 11, -1);
									Global_69311[1 /*14*/] = {func_497(iVar5, 11, iVar80)};
									iVar79 = func_482(iVar5, iVar80, iParam2, Global_69311[1 /*14*/].f_4);
									if (iVar79 == -99)
									{
										iVar79 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar79 = 48;
								}
								func_406(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69311[1 /*14*/] = {func_497(iVar5, iParam1, iParam2)};
							}
						}
					}
					else
					{
						Global_69311[1 /*14*/] = {func_497(iVar5, 11, iVar71)};
						iVar81 = Global_69311[1 /*14*/].f_3;
						Global_69311[1 /*14*/] = {func_497(iVar5, 11, iParam2)};
						iVar82 = Global_69311[1 /*14*/].f_3;
						if (iVar81 != iVar82)
						{
							Global_69311[1 /*14*/] = {func_497(iVar5, 8, iVar72)};
							iVar83 = Global_69311[1 /*14*/].f_4;
							iVar84 = func_480(iVar5, iVar72, iVar83);
							if (iVar84 == -99)
							{
								iVar85 = iVar72;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || func_479(func_83(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar84 = func_486(iVar5, 11, -1);
										Global_69311[1 /*14*/] = {func_497(iVar5, 11, iVar84)};
										iVar85 = func_482(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && iVar72 == 32)
								{
									if (!_0x341DE7ED1D2A1BFD(func_83(iVar5, iParam2, 11, 4), -491588875, false))
									{
										iVar84 = func_486(iVar5, 11, -1);
										Global_69311[1 /*14*/] = {func_497(iVar5, 11, iVar84)};
										iVar85 = func_482(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar85 = func_482(iVar5, iVar84, iParam2, iVar83);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (_0x341DE7ED1D2A1BFD(func_83(iVar5, iParam2, 11, 3), -1719338724, false))
									{
										if (!func_478(iVar5, func_93(iParam0, 4), iVar84))
										{
											iVar85 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (_0x341DE7ED1D2A1BFD(func_83(iVar5, iParam2, 11, 4), -1719338724, false))
									{
										if (!func_478(iVar5, func_93(iParam0, 4), iVar84))
										{
											iVar85 = 48;
										}
									}
								}
							}
							if (iVar85 != -99)
							{
								func_406(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar84 = func_486(iVar5, 11, -1);
								Global_69311[1 /*14*/] = {func_497(iVar5, 11, iVar84)};
								iVar85 = func_482(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
								if (iVar85 == -99)
								{
									iVar85 = 240;
								}
								func_406(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_406(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_69311[1 /*14*/] = {func_497(iVar5, iParam1, iParam2)};
						}
					}
				}
				else
				{
					func_476(iVar5, iParam2);
					set_ped_component_variation(iParam0, 10, false, false, get_ped_palette_variation(iParam0, 10));
				}
			}
			func_489(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_485(iVar5, func_494(iParam0, 8, -1), iParam2, func_494(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_99(2143, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_99(2150, iParam10, 0);
				}
				_set_ped_hair_color(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_447(iParam0, iParam2, iParam10, iParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_489(iParam0, iParam1, iParam2, iParam6, 0);
			iVar86 = func_93(iParam0, 11);
			if (func_481(iVar5, iVar86))
			{
				iVar87 = func_480(iVar5, iParam2, Global_69311[1 /*14*/].f_4);
				func_476(iVar5, iVar87);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_485(iVar5, iParam2, func_93(iParam0, 11), func_93(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar88 = func_93(iParam0, 7);
				if (!func_444(iVar5, iVar88, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					set_ped_component_variation(iParam0, func_104(7), false, false, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && _0x341DE7ED1D2A1BFD(Global_2621444, -921710083, false)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && _0x341DE7ED1D2A1BFD(Global_2621444, -921710083, false)))
			{
				iVar89 = func_99(2090, iParam10, 0);
				iVar90 = func_99(2091, iParam10, 0);
				iVar91 = func_99(2092, iParam10, 0);
				fVar92 = func_443(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					set_ped_head_blend_data(iParam0, 0, 0, 0, iVar89, iVar90, iVar91, 0f, fVar92, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					set_ped_head_blend_data(iParam0, 21, 0, 0, iVar89, iVar90, iVar91, 0f, fVar92, 0f, 0);
				}
				iVar93 = 0;
				while (iVar93 < 20)
				{
					_set_ped_face_feature(iParam0, iVar93, 0f);
					iVar93++;
				}
			}
			else
			{
				func_427(iParam0, Global_69309);
			}
			iVar94 = get_hash_name_for_component(iParam0, true, get_ped_drawable_variation(iParam0, true), get_ped_texture_variation(iParam0, true));
			iVar95 = get_hash_name_for_component(iParam0, true, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			if (_0x341DE7ED1D2A1BFD(iVar94, 838607662, false))
			{
				if (!_0x341DE7ED1D2A1BFD(iVar95, 838607662, false))
				{
					iVar96 = func_93(iParam0, 1);
					iVar97 = false;
					while (iVar97 < 9)
					{
						iVar3 = func_487(iParam0, iVar5, iParam1, iVar96, 14, iVar97);
						iVar98 = func_88(iParam0, iVar97);
						if (iVar3 == iVar98)
						{
							clear_ped_prop(iParam0, iVar97);
						}
						iVar97++;
					}
				}
			}
		}
		else if (iParam1 == 4)
		{
			iVar99 = func_93(iParam0, 11);
			iVar100 = func_93(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (_0x341DE7ED1D2A1BFD(func_83(iVar5, iVar99, 11, 3), -1719338724, false))
				{
					if (!func_478(iVar5, iParam2, func_480(iVar5, iVar100, 0)))
					{
						func_406(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69311[1 /*14*/] = {func_497(iVar5, iParam1, iParam2)};
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (_0x341DE7ED1D2A1BFD(func_83(iVar5, iVar99, 11, 4), -1719338724, false))
				{
					if (!func_478(iVar5, iParam2, func_480(iVar5, iVar100, 0)))
					{
						func_406(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69311[1 /*14*/] = {func_497(iVar5, iParam1, iParam2)};
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_485(iVar5, func_93(iParam0, 8), func_93(iParam0, 11), iParam2);
			}
			iVar101 = get_hash_name_for_component(iParam0, 3, get_ped_drawable_variation(iParam0, 3), false);
			if (_0x341DE7ED1D2A1BFD(iVar101, -356646862, false))
			{
				iVar102 = func_485(iVar5, iVar100, iVar99, iParam2);
				if (iVar102 == -99)
				{
					iVar102 = func_487(iParam0, iVar5, 11, iVar99, 3, 0);
				}
				switch (iVar101)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar102 = 11;
						iVar103 = func_83(iVar5, iParam2, 11, 4);
						if (!_0x341DE7ED1D2A1BFD(iVar103, -530089825, false))
						{
							iVar102 = -99;
						}
						break;
				}
				if (iVar102 != -99)
				{
					iVar104 = iVar102;
					iVar105 = 0;
					while (iVar105 < 15)
					{
						if (func_484(iVar5, iVar104, iVar105) == iVar101)
						{
							iVar11 = iVar105;
							iVar12 = get_ped_texture_variation(iParam0, 3);
						}
						iVar105++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			set_ped_component_variation(iParam0, func_104(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_104(iParam1)));
		}
		else
		{
			set_ped_component_variation(iParam0, func_104(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_487(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_406(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_485(iVar5, iVar3, func_93(iParam0, 11), func_93(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (func_426(iParam0))
				{
					iVar106 = func_425(iVar5, iParam1, iParam2);
					if (iVar106 > 0)
					{
						iVar106 += get_ped_texture_variation(iParam0, 9);
						if (!func_424(iParam0, 9, iVar106))
						{
							func_406(iParam0, 9, iVar106, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_406(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
					if (_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
					{
						func_406(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar107 = func_99(2032, -1, 0);
				if (get_ped_drawable_variation(iParam0, 5) != 0)
				{
					set_ped_component_variation(iParam0, 5, func_421(iParam0, iVar107), func_420(iParam0, iVar107), func_419(iParam0, iVar107));
				}
				if (iParam0 == player_ped_id())
				{
					set_player_parachute_variation_override(player_id(), 5, func_421(player_ped_id(), iVar107), func_420(player_ped_id(), iVar107), 0);
					set_player_parachute_pack_tint_index(player_id(), func_419(player_ped_id(), iVar107));
					func_416(player_id(), iVar107);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (_0x341DE7ED1D2A1BFD(Global_2621444, -319568873, false))
					{
						func_406(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar108 = func_494(iParam0, 4, -1);
					iVar109 = iParam2;
				}
				else
				{
					iVar108 = iParam2;
					iVar109 = func_494(iParam0, 11, -1);
				}
				if (func_415(iVar5, 11, iVar109))
				{
					if (!func_414(iVar5, 4, iVar108))
					{
						if (func_413(iVar5, 4, iVar108, &uVar110))
						{
							func_406(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (func_414(iVar5, 4, iVar108))
				{
					if (func_412(iVar5, 4, iVar108, &uVar110))
					{
						func_406(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 4)
			{
				iVar111 = get_ped_drawable_variation(iParam0, 6);
				iVar112 = get_ped_texture_variation(iParam0, 6);
				iVar113 = get_hash_name_for_component(iParam0, 6, iVar111, iVar112);
				if (func_411(iVar5, iVar113))
				{
					if (_0x341DE7ED1D2A1BFD(iVar113, 1812005517, false) != func_410(iVar5, iParam2))
					{
						iVar114 = _0xC17AD0E5752BECDA(iVar113);
						iVar115 = 0;
						while (iVar115 < iVar114)
						{
							get_variant_component(iVar113, iVar115, &iVar116, &uVar117, &iVar118);
							if (iVar118 == 6)
							{
								if (iVar116 != 0 && iVar116 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										func_406(iParam0, 6, func_91(iVar5, iVar116, 6, 3), 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										func_406(iParam0, 6, func_91(iVar5, iVar116, 6, 4), 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
									}
								}
							}
							iVar115++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_408(iParam0);
				iVar119 = get_ped_drawable_variation(iParam0, true);
				iVar120 = get_ped_texture_variation(iParam0, true);
				iVar121 = get_hash_name_for_component(iParam0, true, iVar119, iVar120);
				if (_0x341DE7ED1D2A1BFD(iVar121, 838607662, false))
				{
					iVar3 = func_487(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_406(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_487(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_406(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_407(iParam0, &uVar4))
		{
			func_406(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_406(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_406(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_406(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar122 = func_484(iVar5, get_ped_drawable_variation(iParam0, 3), iVar11);
		if (iVar122 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_91(iVar5, iVar122, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_91(iVar5, iVar122, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 += iVar12;
				func_406(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_69310--;
	return true;
}

bool func_407(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_494(player_ped_id(), 2, -1);
	if (func_99(746, Global_69309, 0) != -99 && func_317())
	{
		if (func_379() == 4)
		{
			return true;
		}
		if (func_99(746, Global_69309, 0) == 0 && func_99(747, Global_69309, 0) == 0)
		{
			if (func_314(161, Global_69309))
			{
				if (func_99(2043, Global_69309, 0) == 0)
				{
					return false;
				}
			}
			else if (func_99(745, Global_69309, 0) == 0)
			{
				return false;
			}
		}
		iVar0 = func_99(746, Global_69309, 0);
		iVar1 = func_99(747, Global_69309, 0);
		if (!func_424(iParam0, iVar1, iVar0))
		{
			if (func_314(161, Global_69309))
			{
				*uParam1 = func_99(2043, Global_69309, 0);
			}
			else
			{
				*uParam1 = func_99(745, Global_69309, 0);
			}
			func_97(746, -99, Global_69309, 1);
			func_97(747, 2, Global_69309, 1);
			return true;
		}
	}
	return false;
}

void func_408(int iParam0)
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
	
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_ped_drawable_variation(iParam0, 11);
	iVar2 = get_ped_texture_variation(iParam0, 11);
	iVar3 = get_ped_drawable_variation(iParam0, true);
	iVar4 = get_ped_texture_variation(iParam0, true);
	iVar5 = get_ped_drawable_variation(iParam0, 8);
	iVar6 = get_ped_texture_variation(iParam0, 8);
	iVar7 = get_hash_name_for_component(iParam0, 11, iVar1, iVar2);
	iVar8 = get_hash_name_for_component(iParam0, true, iVar3, iVar4);
	iVar9 = get_hash_name_for_component(iParam0, 8, iVar5, iVar6);
	if (_0x341DE7ED1D2A1BFD(iVar7, -317649054, false))
	{
		if (_0x341DE7ED1D2A1BFD(iVar8, 72391838, false))
		{
			if (!_0x341DE7ED1D2A1BFD(iVar7, -1889900289, false))
			{
				iVar1--;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar7, -1889900289, false))
		{
			iVar1++;
		}
		set_ped_component_variation(iParam0, 11, iVar1, iVar2, get_ped_palette_variation(iParam0, 11));
	}
	iVar10 = false;
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		if (!_0x341DE7ED1D2A1BFD(iVar7, 572416369, false))
		{
			iVar10 = true;
		}
		switch (iVar8)
		{
			case -486726551:
			case 219052171:
			case -1032068249:
			case -728660078:
			case -850691818:
			case -544072285:
			case -1811183977:
			case -1111303675:
			case 116190296:
			case -1282673470:
			case -936108522:
			case -671236695:
			case 1520550639:
			case 1816684092:
			case 2102823000:
			case -1866059977:
			case 1250403007:
			case 476038764:
			case 1863871456:
			case 351755390:
			case 1058844872:
			case 1549134650:
			case 1317097361:
			case -829567064:
			case -130604290:
			case -380009149:
			case 596212130:
			case 2140942786:
			case 1901696317:
			case -1797925843:
			case 790890703:
			case 1633873228:
			case 1272234544:
			case -672409000:
			case -1976713507:
			case -1902280196:
			case -115943475:
			case 1684425644:
			case 1983115079:
				iVar10 = true;
				break;
		}
	}
	else
	{
		if (!_0x341DE7ED1D2A1BFD(iVar7, -196114988, false))
		{
			iVar10 = true;
		}
		switch (iVar8)
		{
			case -1615510302:
			case 1527692182:
			case -2083484391:
			case -1372200477:
			case 761684042:
			case 534496565:
			case 303671729:
			case 39193130:
			case -162598372:
			case -393062749:
			case 2063387500:
			case 1633785910:
			case -874910415:
			case -1240415841:
			case 4970004:
			case -1695478944:
			case -450420789:
			case 257455149:
			case 1098963073:
			case -204554982:
			case 1027252245:
			case 1482249810:
			case 1657236270:
			case 633729300:
			case 461560974:
			case 39856713:
			case -130673163:
			case 1595499458:
			case 1424510816:
			case -1686217589:
			case 415037286:
			case 1095714954:
			case -1384675744:
			case -603364477:
			case 423419373:
			case -945505606:
			case -188672778:
			case 578089053:
			case 1418122368:
			case 39432231:
			case 998548092:
			case -539458143:
			case 1285512993:
			case 1384673675:
			case 207316274:
			case 924498608:
			case 1626705513:
			case -1951407139:
			case 1109577920:
			case 1943254053:
			case -706250677:
			case -933962458:
			case 2065187502:
			case 2143125494:
			case -728857530:
			case 113895612:
			case -106672527:
			case -1674341487:
			case -1426640612:
			case -1616110970:
			case -825558845:
			case -1062773636:
			case 1680712586:
			case 731446975:
			case -1441694810:
			case 1076144086:
			case 1291534723:
			case 1653763249:
			case -402884741:
			case 1982600156:
			case -1955185040:
			case -1722820061:
			case 519431533:
			case 1338441322:
			case -97470603:
			case -1293080337:
			case -1531999116:
			case 762322431:
			case 1318477899:
			case 199940853:
			case 1034403438:
			case 1715572641:
			case -2013146335:
			case 1085654154:
			case 962496867:
			case 1611716295:
			case 637461160:
			case -1137111266:
			case 316882033:
			case 590699797:
			case -385914710:
			case -1897876374:
			case -861786128:
			case -633615581:
			case -1298728310:
			case 2019526172:
			case -156630377:
			case 99852586:
			case 1543589216:
			case 1783097837:
			case -1876706754:
			case -1647782520:
			case -1394117691:
			case 977702533:
			case -670092377:
			case -908093624:
			case 1219695857:
			case 1919117393:
			case -534990310:
			case 445654672:
			case 329262298:
			case 22970455:
			case -476401343:
			case -706275878:
			case 1876083388:
			case -1114385357:
			case -840010097:
			case -2048003518:
			case 286623891:
			case 1792195596:
			case 1992938490:
			case -1364343871:
			case 721974080:
			case -45508669:
			case 1998385862:
			case 1222776401:
				iVar10 = true;
				break;
			}
	}
	if (iVar10)
	{
		if (_0x341DE7ED1D2A1BFD(iVar9, -1889900289, false) || _0x341DE7ED1D2A1BFD(iVar9, 1569775397, false))
		{
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				iVar5 = 15;
				iVar6 = false;
			}
			else
			{
				iVar5 = 14;
				iVar6 = false;
			}
		}
	}
	else if (_0x341DE7ED1D2A1BFD(iVar8, -1409448021, false))
	{
		if (_0x341DE7ED1D2A1BFD(iVar9, 1569775397, false))
		{
			iVar5++;
		}
		else
		{
			iVar5 = func_409(iParam0, 1);
			iVar6 = iVar2;
		}
	}
	else if (_0x341DE7ED1D2A1BFD(iVar9, -1889900289, false))
	{
		iVar5--;
	}
	else
	{
		iVar5 = func_409(iParam0, 0);
		iVar6 = iVar2;
	}
	set_ped_component_variation(iParam0, 8, iVar5, iVar6, get_ped_palette_variation(iParam0, 8));
}

var func_409(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar17;
	
	iVar17 = get_entity_model(iParam0) == joaat("mp_m_freemode_01");
	Var0.f_3 = -1;
	if (iVar17)
	{
		if (iParam1)
		{
			get_shop_ped_component(-367850957, &Var0);
		}
		else
		{
			get_shop_ped_component(1241116144, &Var0);
		}
	}
	else if (iParam1)
	{
		get_shop_ped_component(555191698, &Var0);
	}
	else
	{
		get_shop_ped_component(-972757995, &Var0);
	}
	return Var0.f_3;
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_83(iParam0, iParam1, 4, 3);
				iVar1 = func_479(iVar0);
			}
			iVar2 = 1;
			if (((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || _0x341DE7ED1D2A1BFD(iVar0, 320460654, false))
			{
				iVar2 = 0;
			}
			switch (iVar0)
			{
				case -439764935:
				case 1858824227:
				case -44268217:
				case 301706885:
				case 1283072893:
				case -1590178565:
				case 1995307108:
				case 1029014836:
				case -365568266:
				case -138446327:
				case -2034722819:
				case -1219513062:
				case 153704652:
				case 356276239:
				case 586511233:
				case 1558996842:
				case 1183988406:
				case 1000678684:
				case 761792674:
				case -145679239:
				case 686423978:
				case -763407658:
				case 74266289:
				case 987390769:
				case 1591372991:
				case 1834027448:
				case 913054691:
				case 1142372153:
				case -1698011990:
				case -1443101939:
				case 2133699953:
				case -1924511318:
				case -475531676:
				case -237137197:
				case 754461254:
				case -1155840382:
				case 629180074:
				case 859251223:
				case 1610316715:
				case 901392169:
				case -92983136:
				case 1346362420:
				case 485782942:
				case 312004063:
				case 6695290:
				case 1724446270:
				case -448105673:
				case -611098679:
				case -1111088081:
				case -1406369540:
				case -1912159043:
				case 2076516410:
				case 1919618438:
				case 45227112:
				case -2129094253:
				case -421370587:
				case -675363106:
					iVar2 = 0;
					break;
			}
			return iVar2;
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_83(iParam0, iParam1, 4, 4);
				iVar1 = func_479(iVar0);
			}
			if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || _0x341DE7ED1D2A1BFD(iVar0, 1863955539, false)) || _0x341DE7ED1D2A1BFD(iVar0, 2106216756, false)) || _0x341DE7ED1D2A1BFD(iVar0, -761463976, false)) || _0x341DE7ED1D2A1BFD(iVar0, 684992453, false)) || _0x341DE7ED1D2A1BFD(iVar0, 916636514, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar0, 264959411, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1127835965, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1119232689, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1207283343, false)) || _0x341DE7ED1D2A1BFD(iVar0, -849839091, false)) || _0x341DE7ED1D2A1BFD(iVar0, -2088146832, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1446333198, false)) || _0x341DE7ED1D2A1BFD(iVar0, -430330349, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1103045158, false)) || _0x341DE7ED1D2A1BFD(iVar0, 1055526375, false)) || _0x341DE7ED1D2A1BFD(iVar0, -2020757158, false))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_411(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (_0x341DE7ED1D2A1BFD(iParam1, -364248070, false))
			{
				return true;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (_0x341DE7ED1D2A1BFD(iParam1, -364248070, false))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_412(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_83(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = _0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!_0x341DE7ED1D2A1BFD(iVar3, -1100807313, false))
										{
											*uParam3 = func_91(iParam0, iVar3, iParam1, 4);
											return true;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return false;
}

bool func_413(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_83(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = _0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (_0x341DE7ED1D2A1BFD(iVar3, -1100807313, false))
										{
											*uParam3 = func_91(iParam0, iVar3, iParam1, 4);
											return true;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return false;
}

bool func_414(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (_0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 4, 4), -1100807313, false))
						{
							return true;
						}
					}
					break;
			}
			break;
	}
	return false;
}

int func_415(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						return _0x341DE7ED1D2A1BFD(func_83(iParam0, iParam2, 11, 4), -530089825, false);
					}
					break;
			}
			break;
	}
	return false;
}

void func_416(int iParam0, int iParam1)
{
	if (func_418())
	{
		if (iParam1 > 46)
		{
			set_player_parachute_pack_model_override(iParam0, 1766664132);
		}
		else if (iParam1 > 26)
		{
			set_player_parachute_pack_model_override(iParam0, 1277738372);
		}
		else if (iParam1 > 0)
		{
			set_player_parachute_pack_model_override(iParam0, 1269440357);
		}
		else
		{
			clear_player_parachute_pack_model_override(iParam0);
		}
	}
	else if (func_417())
	{
		if (iParam1 > 0)
		{
			set_player_parachute_pack_model_override(iParam0, 1479397204);
		}
		else
		{
			clear_player_parachute_pack_model_override(iParam0);
		}
	}
}

int func_417()
{
	return is_dlc_present(1428761799);
}

int func_418()
{
	return is_dlc_present(-1005876368);
}

bool func_419(int iParam0, int iParam1)
{
	return false;
}

int func_420(int iParam0, int iParam1)
{
	if (iParam1 > 51)
	{
		return iParam1 - 52;
	}
	if (iParam1 > 46)
	{
		return iParam1 - 47;
	}
	if (iParam1 > 26)
	{
		return iParam1 - 27;
	}
	if (iParam1 > 0)
	{
		return iParam1 - 1;
	}
	return iParam1;
}

int func_421(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = get_ped_drawable_variation(iParam0, 11);
	if (get_ped_drawable_variation(iParam0, 9) != 0)
	{
		iVar1 = true;
	}
	iVar2 = get_entity_model(iParam0);
	iVar3 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
	if (_0x341DE7ED1D2A1BFD(iVar3, 240476421, 8))
	{
		if (iParam1 > 51)
		{
			return 51;
		}
		else if (iParam1 > 46)
		{
			return 51;
		}
		else if (iParam1 > 26)
		{
			return 50;
		}
		else if (iParam1 > 0)
		{
			return 49;
		}
		else
		{
			return 48;
		}
	}
	iVar4 = 0;
	if (iParam1 > 51 && iParam1 <= 61)
	{
		return iParam1;
	}
	else if (iParam1 > 46)
	{
		iVar4 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar4 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar4 = 9;
	}
	else
	{
		iVar4 = 0;
	}
	if (iVar0 > 15)
	{
		iVar5 = get_hash_name_for_component(iParam0, 11, iVar0, get_ped_texture_variation(iParam0, 11));
		if (_0x341DE7ED1D2A1BFD(iVar5, 655081063, false))
		{
			if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -530089825, false))
		{
			if (iVar1)
			{
				return 6 + iVar4;
			}
			else
			{
				return 6 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -713698407, false))
		{
			if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1882920022, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -317649054, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1536649085, false))
		{
			iVar6 = func_423(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return 2 + iVar4;
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_479(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return 7 + iVar4;
						break;
					
					default:
						iVar0 = func_479(iVar5);
						break;
					}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 248194463, false))
		{
			if (_0x341DE7ED1D2A1BFD(iVar5, -1347486026, false))
			{
				return 3 + iVar4;
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 396458410, false))
		{
			iVar7 = func_422(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_479(iVar5);
					break;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -779835469, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1119232689, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2102859770, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1784133476, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1607949555, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1976716889, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2099109084, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1488441032, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1719167561, false) || _0x341DE7ED1D2A1BFD(iVar5, 1431529976, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1274099003, false) || _0x341DE7ED1D2A1BFD(iVar5, 1723403459, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 912543594, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
		}
		else if ((_0x341DE7ED1D2A1BFD(iVar5, -1086258388, false) || _0x341DE7ED1D2A1BFD(iVar5, 103539798, false)) || _0x341DE7ED1D2A1BFD(iVar5, -994703884, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 6 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2044466679, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (iVar1)
}