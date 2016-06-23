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
	char* sLocal_47 = 0;
	char* sLocal_48 = 0;
	char* sLocal_49 = 0;
	Vector3 vLocal_50 = 0;
	Vector3 vLocal_53 = 0;
	int iLocal_56 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	int iVar18;
	int iVar19;
	
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
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	vLocal_50 = {1694.74f, 3276.502f, 41.2796f};
	vLocal_53 = {8.79494f, 0.59893f, 154.8464f};
	network_set_script_is_safe_for_network_game();
	_0x808519373FD336A3(0);
	_0x4EBB7E87AA0DBED4(0);
	remove_ipl("prologue_DistantLights");
	remove_ipl("prologue_LODLights");
	iLocal_56 = 0;
	iVar0 = func_41();
	if (_0xA049A5BE0F04F2F8() || _0x3BBBD13E5041A79E())
	{
		iVar0 = false;
	}
	if (iVar0)
	{
		_0xB1577667C3708F9B();
	}
	_enable_mp_dlc_maps(0);
	func_40(joaat("mp_registration"), 1424);
	_set_streamed_script_as_no_longer_needed(joaat("mp_registration"));
	func_40(joaat("mp_fm_registration"), 1424);
	_set_streamed_script_as_no_longer_needed(joaat("mp_fm_registration"));
	func_40(joaat("tunables_registration"), 1424);
	_set_streamed_script_as_no_longer_needed(joaat("tunables_registration"));
	func_40(joaat("sc_lb_global_block"), 1424);
	_set_streamed_script_as_no_longer_needed(joaat("sc_lb_global_block"));
	func_40(joaat("mp_save_game_global_block"), 1424);
	_set_streamed_script_as_no_longer_needed(joaat("mp_save_game_global_block"));
	func_40(joaat("mp_prop_global_block"), 1424);
	_set_streamed_script_as_no_longer_needed(joaat("mp_prop_global_block"));
	func_40(joaat("mp_prop_special_global_block"), 1424);
	_set_streamed_script_as_no_longer_needed(joaat("mp_prop_special_global_block"));
	func_40(joaat("title_update_registration"), 1424);
	_set_streamed_script_as_no_longer_needed(joaat("title_update_registration"));
	Global_2563984 = 0;
	func_40(joaat("sp_dlc_registration"), 1424);
	_set_streamed_script_as_no_longer_needed(joaat("sp_dlc_registration"));
	func_40(joaat("sp_pilotschool_reg"), 1424);
	_set_streamed_script_as_no_longer_needed(joaat("sp_pilotschool_reg"));
	func_39();
	switch (iLocal_56)
	{
		case 0:
			func_40(joaat("standard_global_init"), 1424);
			_set_streamed_script_as_no_longer_needed(joaat("standard_global_init"));
			break;
	}
	wait(false);
	Global_69491 = 1;
	Global_2 = iVar0;
	set_gameplay_cam_relative_heading(0f);
	switch (iLocal_56)
	{
		case 0:
			Global_2621550 = 0;
			Global_2621549 = 0;
			func_40(joaat("standard_global_reg"), 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("standard_global_reg");
			while ((!is_bit_set(Global_2563984, false) || !is_bit_set(Global_2563984, true)) || !is_bit_set(Global_2563984, 2))
			{
				if (!is_bit_set(Global_2563984, false))
				{
				}
				if (!is_bit_set(Global_2563984, true))
				{
				}
				if (!is_bit_set(Global_2563984, 2))
				{
				}
				wait(false);
			}
			start_save_data(&Global_101154, 1, 1);
			register_float_to_save(&Global_101154, "fSaveVersion");
			stop_save_data();
			if (Global_1)
			{
				Global_0 = Global_101154;
			}
			Global_101154 = 1.7f;
			if (Global_1)
			{
				if (Global_0 != 1.7f)
				{
					func_28(Global_0);
				}
			}
			break;
	}
	start_save_data(&Global_2097152, 10376, 0);
	_start_save_array(&Global_2097152, 10376, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_22(&(Global_2097152[iVar1 /*10375*/]), iVar1);
		func_20(&(Global_2097152[iVar1 /*10375*/]), iVar1);
		func_18(&(Global_2097152[iVar1 /*10375*/]), iVar1);
		func_14(&(Global_2097152[iVar1 /*10375*/]), iVar1);
		func_12(&(Global_2097152[iVar1 /*10375*/]), iVar1);
		func_11(&(Global_2097152[iVar1 /*10375*/]), iVar1);
		func_10(&(Global_2097152[iVar1 /*10375*/]), iVar1);
		func_3(&(Global_2097152[iVar1 /*10375*/]), iVar1);
		iVar1++;
	}
	stop_save_struct();
	stop_save_data();
	iVar18 = 10376;
	iVar19 = _0xA09F896CE912481F(0);
	if (iVar18 != iVar19)
	{
	}
	if (!_0xEA14EEF5B7CD2C30() && !_0x1D4DC17C38FEAFF0())
	{
		_0xB606E6CC59664972(0);
	}
	_0x228E5C6AD4D74BFD(0);
	_0x4EBB7E87AA0DBED4(0);
	func_2();
	func_1();
	terminate_this_thread();
}

void func_1()
{
	Global_30[0] = get_interior_at_coords_with_type(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_30[1] = get_interior_at_coords_with_type(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_30[2] = get_interior_at_coords_with_type(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_30[3] = get_interior_at_coords_with_type(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_30[4] = get_interior_at_coords_with_type(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_30[5] = get_interior_at_coords_with_type(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_30[6] = get_interior_at_coords_with_type(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_30[7] = get_interior_at_coords_with_type(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_30[8] = get_interior_at_coords_with_type(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_30[9] = get_interior_at_coords_with_type(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_30[0] = get_interior_at_coords_with_type(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_30[11] = get_interior_at_coords_with_type(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_30[12] = get_interior_at_coords_with_type(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_30[13] = get_interior_at_coords_with_type(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_30[14] = get_interior_at_coords_with_type(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_30[15] = get_interior_at_coords_with_type(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_30[16] = get_interior_at_coords_with_type(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = get_interior_at_coords_with_type(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_30[18] = get_interior_at_coords_with_type(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_30[19] = get_interior_at_coords_with_type(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = get_interior_at_coords_with_type(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_30[21] = get_interior_at_coords_with_type(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_30[22] = get_interior_at_coords_with_type(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_30[23] = get_interior_at_coords_with_type(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = get_interior_at_coords_with_type(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_30[25] = get_interior_at_coords_with_type(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_30[26] = get_interior_at_coords_with_type(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_30[27] = get_interior_at_coords_with_type(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_30[28] = get_interior_at_coords_with_type(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_30[29] = get_interior_at_coords_with_type(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_30[30] = get_interior_at_coords_with_type(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_30[31] = get_interior_at_coords_with_type(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_30[32] = get_interior_at_coords_with_type(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_30[33] = get_interior_at_coords_with_type(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_30[34] = get_interior_at_coords_with_type(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_30[35] = get_interior_at_coords_with_type(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_30[36] = get_interior_at_coords_with_type(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_30[37] = get_interior_at_coords_with_type(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_30[38] = get_interior_at_coords_with_type(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_30[39] = get_interior_at_coords_with_type(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_30[40] = get_interior_at_coords_with_type(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_30[41] = get_interior_at_coords_with_type(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = get_interior_at_coords_with_type(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_30[43] = get_interior_at_coords_with_type(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_30[44] = get_interior_at_coords_with_type(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_30[45] = get_interior_at_coords_with_type(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_30[46] = get_interior_at_coords_with_type(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = get_interior_at_coords_with_type(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = get_interior_at_coords_with_type(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = get_interior_at_coords_with_type(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_30[50] = get_interior_at_coords_with_type(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_30[51] = get_interior_at_coords_with_type(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_30[52] = get_interior_at_coords_with_type(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_30[53] = get_interior_at_coords_with_type(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_30[54] = get_interior_at_coords_with_type(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_30[55] = get_interior_at_coords_with_type(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_30[56] = get_interior_at_coords_with_type(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_30[57] = get_interior_at_coords_with_type(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_30[58] = get_interior_at_coords_with_type(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_30[59] = get_interior_at_coords_with_type(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_30[60] = get_interior_at_coords_with_type(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()
{
	Global_138270 = 1;
	Global_138271 = 1;
}

void func_3(auto uParam0, int iParam1)
{
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

void func_4(auto uParam0, auto uParam1)
{
	char[32] cVar0;
	
	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, uParam1, 32);
	_start_save_array(uParam0.f_10348.f_19, 8, &cVar0);
	_start_save_struct(uParam0.f_10348.f_19[0 /*7*/], 7, "TEMPSTAT_DATE");
	register_int_to_save(uParam0.f_10348.f_19[0 /*7*/], "TEMPSTAT_DATE.year");
	register_int_to_save(uParam0.f_10348.f_19[0 /*7*/].f_1, "TEMPSTAT_DATE.month");
	register_int_to_save(uParam0.f_10348.f_19[0 /*7*/].f_2, "TEMPSTAT_DATE.day");
	register_int_to_save(uParam0.f_10348.f_19[0 /*7*/].f_3, "TEMPSTAT_DATE.hour");
	register_int_to_save(uParam0.f_10348.f_19[0 /*7*/].f_4, "TEMPSTAT_DATE.minute");
	register_int_to_save(uParam0.f_10348.f_19[0 /*7*/].f_5, "TEMPSTAT_DATE.seconds");
	register_int_to_save(uParam0.f_10348.f_19[0 /*7*/].f_6, "TEMPSTAT_DATE.Milliseconds");
	stop_save_struct();
	stop_save_array();
}

void func_5(auto uParam0, auto uParam1)
{
	char[32] cVar0;
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, uParam1, 32);
	_start_save_array(uParam0.f_10348.f_15, 4, &cVar0);
	_start_save_struct(uParam0.f_10348.f_15[0 /*3*/], 3, "TEMPSTAT_VEC");
	register_float_to_save(uParam0.f_10348.f_15[0 /*3*/], "TEMPSTAT_VEC.x");
	register_float_to_save(uParam0.f_10348.f_15[0 /*3*/].f_1, "TEMPSTAT_VEC.y");
	register_float_to_save(uParam0.f_10348.f_15[0 /*3*/].f_2, "TEMPSTAT_VEC.z");
	stop_save_struct();
	stop_save_array();
}

void func_6(auto uParam0, auto uParam1)
{
	char[32] cVar0;
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, uParam1, 32);
	_start_save_array(uParam0.f_10348.f_6, 9, &cVar0);
	_0x8269816F6CFD40F8(uParam0.f_10348.f_6[0 /*8*/], "TEMPSTAT_LABEL");
	stop_save_array();
}

void func_7(auto uParam0, auto uParam1)
{
	char[32] cVar0;
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, uParam1, 32);
	_start_save_array(uParam0.f_10348.f_4, 2, &cVar0);
	register_bool_to_save(uParam0.f_10348.f_4[0], "TEMPSTAT_BOOL");
	stop_save_array();
}

void func_8(auto uParam0, auto uParam1)
{
	char[32] cVar0;
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, uParam1, 32);
	_start_save_array(uParam0.f_10348.f_2, 2, &cVar0);
	register_float_to_save(uParam0.f_10348.f_2[0], "TEMPSTAT_FLOAT");
	stop_save_array();
}

void func_9(auto uParam0, auto uParam1)
{
	char[32] cVar0;
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, uParam1, 32);
	_start_save_array(uParam0.f_10348, 2, &cVar0);
	register_int_to_save(uParam0.f_10348[0], "TEMPSTAT_INT1");
	stop_save_array();
}

void func_10(auto uParam0, int iParam1)
{
	char[24] cVar0;
	int iVar6;
	char[16] cVar7;
	char[16] cVar11;
	char[16] cVar15;
	char[16] cVar19;
	char[16] cVar23;
	
	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	_start_save_struct(uParam0.f_10198, 150, &cVar0);
	register_int_to_save(uParam0.f_10198, "MPATM_CARET_");
	iVar6 = 0;
	StringCopy(&cVar7, "MPATMLOGVAL", 16);
	_start_save_array(uParam0.f_10198.f_1, 17, &cVar7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar11 = {cVar7};
		StringIntConCat(&cVar11, iVar6, 16);
		register_int_to_save(uParam0.f_10198.f_1[iVar6], &cVar11);
		iVar6++;
	}
	stop_save_array();
	StringCopy(&cVar7, "MPATMLOGSCRS", 16);
	_start_save_array(uParam0.f_10198.f_18, 97, &cVar7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar15 = {cVar7};
		StringIntConCat(&cVar15, iVar6, 16);
		_0x48F069265A0E4BEC(uParam0.f_10198.f_18[iVar6 /*6*/], &cVar15);
		iVar6++;
	}
	stop_save_array();
	StringCopy(&cVar7, "MPATMLOGACT", 16);
	_start_save_array(uParam0.f_10198.f_115, 17, &cVar7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar19 = {cVar7};
		StringIntConCat(&cVar19, iVar6, 16);
		register_enum_to_save(uParam0.f_10198.f_115[iVar6], &cVar19);
		iVar6++;
	}
	stop_save_array();
	StringCopy(&cVar7, "MPATMLOGDAT", 16);
	_start_save_array(uParam0.f_10198.f_132, 17, &cVar7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar23 = {cVar7};
		StringIntConCat(&cVar23, iVar6, 16);
		register_int_to_save(uParam0.f_10198.f_132[iVar6], &cVar23);
		iVar6++;
	}
	stop_save_array();
	register_bool_to_save(uParam0.f_10198.f_149, "mpAnyVecBought");
	stop_save_struct();
}

void func_11(auto uParam0, int iParam1)
{
	char[24] cVar0;
	char[32] cVar6;
	int iVar14;
	
	StringCopy(&cVar0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	_start_save_struct(uParam0.f_9957, 241, &cVar0);
	_0xA735353C77334EA0(uParam0.f_9957, "BOUNTY_GAMERH64_1");
	_0xA735353C77334EA0(uParam0.f_9957.f_1, "BOUNTY_GAMERH64_2");
	_0xA735353C77334EA0(uParam0.f_9957.f_2, "BOUNTY_GAMERH64_3");
	_0xA735353C77334EA0(uParam0.f_9957.f_3, "BOUNTY_GAMERH64_4");
	_0xA735353C77334EA0(uParam0.f_9957.f_4, "BOUNTY_GAMERH64_5");
	_0xA735353C77334EA0(uParam0.f_9957.f_5, "BOUNTY_GAMERH64_6");
	_0xA735353C77334EA0(uParam0.f_9957.f_6, "BOUNTY_GAMERH64_7");
	_0xA735353C77334EA0(uParam0.f_9957.f_7, "BOUNTY_GAMERH64_8");
	_0xA735353C77334EA0(uParam0.f_9957.f_8, "BOUNTY_GAMERH64_9");
	_0xA735353C77334EA0(uParam0.f_9957.f_9, "BOUNTY_GAMERH64_10");
	_0xA735353C77334EA0(uParam0.f_9957.f_10, "BOUNTY_GAMERH64_11");
	_0xA735353C77334EA0(uParam0.f_9957.f_11, "BOUNTY_GAMERH64_12");
	_0xA735353C77334EA0(uParam0.f_9957.f_12, "BOUNTY_GAMERH64_13");
	register_int_to_save(uParam0.f_9957.f_13, "BOUNTY_TIME");
	register_int_to_save(uParam0.f_9957.f_14, "BOUNTY_VALUE");
	StringConCat(&cVar0, "_GH", 24);
	_start_save_array(uParam0.f_9957.f_15, 209, &cVar0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_1", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/], &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_2", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_1, &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_3", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_2, &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_4", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_3, &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_5", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_4, &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_6", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_5, &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_7", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_6, &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_8", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_7, &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_9", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_8, &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_10", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_9, &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_11", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_10, &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_12", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_11, &cVar6);
		MemCopy(&cVar6, {cVar0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_13", 32);
		_0xA735353C77334EA0(uParam0.f_9957.f_15[iVar14 /*13*/].f_12, &cVar6);
		iVar14++;
	}
	stop_save_array();
	StringCopy(&cVar0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	StringConCat(&cVar0, "_TIM", 24);
	_start_save_array(uParam0.f_9957.f_224, 17, &cVar0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {cVar0}, 8);
		StringIntConCat(&cVar6, iVar14, 32);
		register_int_to_save(uParam0.f_9957.f_224[iVar14], &cVar6);
		iVar14++;
	}
	stop_save_array();
	stop_save_struct();
}

void func_12(auto uParam0, int iParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	func_13(uParam0.f_7704, &Var0);
}

void func_13(auto uParam0, char* sParam1)
{
	int iVar0;
	char[16] cVar1;
	int iVar5;
	char[64] cVar6;
	int iVar22;
	int iVar23;
	char[16] cVar24;
	char[16] cVar28;
	
	_start_save_struct(uParam0, 2253, sParam1);
	register_int_to_save(uParam0, "CASH_GIVEN_TOTAL");
	register_int_to_save(uParam0.f_1, "CASH_GIVEN_TIME");
	register_int_to_save(uParam0.f_2, "LAST_SAVED_CAR");
	register_int_to_save(uParam0.f_3, "CURRENT_PROP_VALUE");
	register_int_to_save(uParam0.f_11, "iNewVehPurchased");
	register_int_to_save(uParam0.f_4, "WHEELIE_TIMER");
	register_int_to_save(uParam0.f_5, "WHEELIE_UPDATES");
	register_int_to_save(uParam0.f_6, "WHEELIE_TIME");
	register_bool_to_save(uParam0.f_7, "GRAB_TIME");
	register_int_to_save(uParam0.f_8, "iLastSoldVehicleTime");
	register_int_to_save(uParam0.f_9, "ilasttimeplayed");
	register_int_to_save(uParam0.f_10, "iSaveCoupons");
	register_int_to_save(uParam0.f_12, "iLastBruciePillReminder");
	register_int_to_save(uParam0.f_13, "iLastSecVanReminder");
	register_int_to_save(uParam0.f_14, "iLastBountyReminder");
	register_int_to_save(uParam0.f_15, "iLastParaReminder");
	register_int_to_save(uParam0.f_16, "iLastCrateDropReminder");
	register_int_to_save(uParam0.f_17, "iLastGangAttackReminder");
	register_int_to_save(uParam0.f_18, "iLastImpExpReminder");
	register_int_to_save(uParam0.f_19, "iLastInsuranceReminder");
	register_int_to_save(uParam0.f_20, "iLastSurvivalReminder");
	register_int_to_save(uParam0.f_21, "iLastBikerBackupReminder");
	register_int_to_save(uParam0.f_22, "iLastVagosBackupReminder");
	register_int_to_save(uParam0.f_23, "iLastLesterVehReminder");
	register_int_to_save(uParam0.f_24, "iLastPersonalVehDeliveryReminder");
	register_int_to_save(uParam0.f_25, "iLastPegasusVehicleReminder");
	register_int_to_save(uParam0.f_26, "iLastMerryweatherReminder");
	register_int_to_save(uParam0.f_27, "iLastLesterHelpReminder");
	register_int_to_save(uParam0.f_28, "iLastLesterReqJobReminder");
	register_int_to_save(uParam0.f_29, "iLastGeraldReqJobReminder");
	register_int_to_save(uParam0.f_30, "iLastSimeonReqJobReminder");
	register_int_to_save(uParam0.f_31, "iLastMartinReqJobReminder");
	register_int_to_save(uParam0.f_32, "iLastRonReqJobReminder");
	register_int_to_save(uParam0.f_33, "iRecentlyPassedMissionBitset");
	register_int_to_save(uParam0.f_34, "iRecentlyPassedMissionTime");
	register_int_to_save(uParam0.f_35, "iLastImportExportDelTime");
	register_int_to_save(uParam0.f_36, "iLastImportExportListTime");
	register_int_to_save(uParam0.f_37, "iMyLastImportExportListDay");
	register_int_to_save(uParam0.f_38, "iVehicleWebsiteReminderTime");
	register_bool_to_save(uParam0.f_39, "bDefaultClothesSet");
	_start_save_array(uParam0.f_40, 5, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < *uParam0.f_40)
	{
		StringCopy(&cVar1, "CLOTHES", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		register_int_to_save(uParam0.f_40[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_45, 701, "CARMODS");
	iVar0 = 0;
	while (iVar0 < *uParam0.f_45)
	{
		StringCopy(&cVar1, "CARMODS", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		register_int_to_save(uParam0.f_45[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	register_int_to_save(uParam0.f_746, "iLastCrewCharWasIn");
	register_int_to_save(uParam0.f_747, "iStripperUnlockedBS");
	register_int_to_save(uParam0.f_748, "iGeneralBS");
	register_int_to_save(uParam0.f_749, "iCarsModifiedTimeStamp");
	_start_save_array(uParam0.f_750, 10, "GOLF_fLongestDriveHole");
	iVar5 = 0;
	while (iVar5 < *uParam0.f_750)
	{
		StringCopy(&cVar6, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		register_float_to_save(uParam0.f_750[iVar5], &cVar6);
		iVar5++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_760, 10, "GOLF_fLongestPuttHole");
	iVar5 = 0;
	while (iVar5 < *uParam0.f_760)
	{
		StringCopy(&cVar6, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		register_float_to_save(uParam0.f_760[iVar5], &cVar6);
		iVar5++;
	}
	stop_save_array();
	register_int_to_save(uParam0.f_770, "GOLF_iBestRound");
	register_float_to_save(uParam0.f_771, "GOLF_fLongestDrive");
	register_float_to_save(uParam0.f_772, "GOLF_fLongestPutt");
	register_int_to_save(uParam0.f_773, "iShareLJCashTotal");
	register_int_to_save(uParam0.f_774, "iShareLJCashTime");
	register_int_to_save(uParam0.f_775, "iReceiveLJCashTotal");
	register_int_to_save(uParam0.f_776, "iReceiveLJCashTime");
	register_int_to_save(uParam0.f_777, "LAST_ACC_PROP");
	register_int_to_save(uParam0.f_778, "MULTI1_PROP_VAL");
	_start_save_array(uParam0.f_779, 5, "PROP_ARY_VAL");
	iVar22 = 0;
	while (iVar22 < *uParam0.f_779)
	{
		StringCopy(&cVar1, "PROP_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_int_to_save(uParam0.f_779[iVar22], &cVar1);
		iVar22++;
	}
	stop_save_array();
	register_int_to_save(uParam0.f_784, "KR_PATCH_UPDATE");
	iVar22 = 0;
	_start_save_array(uParam0.f_1496, 526, "DLC_MODS");
	iVar22 = 0;
	while (iVar22 < *uParam0.f_1496)
	{
		StringCopy(&cVar1, "DLC_MODS_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_int_to_save(uParam0.f_1496[iVar22], &cVar1);
		iVar22++;
	}
	stop_save_array();
	iVar22 = 0;
	_start_save_array(uParam0.f_2022, 131, "DLC_SUPERMODS");
	iVar22 = 0;
	while (iVar22 < *uParam0.f_2022)
	{
		StringCopy(&cVar1, "DLC_SMODS_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_int_to_save(uParam0.f_2022[iVar22], &cVar1);
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_785, 144, "OUTFIT_CompDraw");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CompDraw", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		_start_save_array(uParam0.f_785[iVar22 /*13*/], 13, &cVar1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&cVar1, "CompDraw", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			register_int_to_save(uParam0.f_785[iVar22 /*13*/][iVar23], &cVar1);
			iVar23++;
		}
		stop_save_array();
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_929, 144, "OUTFIT_CompTex");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CompTex", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		_start_save_array(uParam0.f_929[iVar22 /*13*/], 13, &cVar1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&cVar1, "CompTex", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			register_int_to_save(uParam0.f_929[iVar22 /*13*/][iVar23], &cVar1);
			iVar23++;
		}
		stop_save_array();
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_1073, 111, "OUTFIT_PropID");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "PropID", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		_start_save_array(uParam0.f_1073[iVar22 /*10*/], 10, &cVar1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&cVar1, "PropID", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			register_int_to_save(uParam0.f_1073[iVar22 /*10*/][iVar23], &cVar1);
			iVar23++;
		}
		stop_save_array();
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_1184, 111, "OUTFIT_PropTex");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "PropTex", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		_start_save_array(uParam0.f_1184[iVar22 /*10*/], 10, &cVar1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&cVar1, "PropTex", 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar22, 16);
			StringConCat(&cVar1, "_", 16);
			StringIntConCat(&cVar1, iVar23, 16);
			register_int_to_save(uParam0.f_1184[iVar22 /*10*/][iVar23], &cVar1);
			iVar23++;
		}
		stop_save_array();
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_1295, 12, "OUTFIT_Stored");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "Stored", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_bool_to_save(uParam0.f_1295[iVar22], &cVar1);
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_1307, 12, "OUTFIT_CrewTatA");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalA", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_bool_to_save(uParam0.f_1307[iVar22], &cVar1);
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_1319, 12, "OUTFIT_CrewTatB");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalB", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_bool_to_save(uParam0.f_1319[iVar22], &cVar1);
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_1331, 12, "OUTFIT_CrewTatC");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalC", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_bool_to_save(uParam0.f_1331[iVar22], &cVar1);
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_1343, 12, "OUTFIT_CrewTatD");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "CrewDecalD", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_bool_to_save(uParam0.f_1343[iVar22], &cVar1);
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_1444, 12, "OUTFIT_Shirt");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "ShirtDecal", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_int_to_save(uParam0.f_1444[iVar22], &cVar1);
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_1355, 89, "OUTFIT_Name");
	iVar22 = 0;
	while (iVar22 < 11)
	{
		StringCopy(&cVar1, "Name", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		_0x8269816F6CFD40F8(uParam0.f_1355[iVar22 /*8*/], &cVar1);
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_1456, 40, "LAST_JobGamer");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar1, "LastJobG64_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_1", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/], &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_2", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_1, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_3", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_2, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_4", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_3, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_5", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_4, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_6", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_5, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_7", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_6, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_8", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_7, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_9", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_8, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_10", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_9, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_11", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_10, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_12", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_11, &cVar24);
		cVar24 = {cVar1};
		StringConCat(&cVar24, "_13", 16);
		_0xA735353C77334EA0(uParam0.f_1456[iVar22 /*13*/].f_12, &cVar24);
		iVar22++;
	}
	stop_save_array();
	register_bool_to_save(uParam0.f_2153, "DO_CompletedObjectives");
	register_bool_to_save(uParam0.f_2154, "DO_LoggedInToday");
	register_int_to_save(uParam0.f_2155, "DO_xValue");
	register_int_to_save(uParam0.f_2156, "DO_LastHistoryLength");
	register_int_to_save(uParam0.f_2157, "DO_LastResetTime");
	_start_save_array(uParam0.f_2158, 10, "DO_Objectives");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar1, "Objective", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_int_to_save(uParam0.f_2158[iVar22 /*3*/], &cVar1);
		StringCopy(&cVar1, "Completed", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_bool_to_save(uParam0.f_2158[iVar22 /*3*/].f_1, &cVar1);
		StringCopy(&cVar1, "Initial", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_int_to_save(uParam0.f_2158[iVar22 /*3*/].f_2, &cVar1);
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_2168, 25, "DO_History");
	iVar22 = 0;
	while (iVar22 < 24)
	{
		StringCopy(&cVar1, "History", 16);
		StringConCat(&cVar1, "_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		register_int_to_save(uParam0.f_2168[iVar22], &cVar1);
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_2193, 49, "LAST_JobGamer_TL");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar1, "LastJobTL_", 16);
		StringIntConCat(&cVar1, iVar22, 16);
		cVar28 = {cVar1};
		StringConCat(&cVar28, "_1", 16);
		_0xFAA457EF263E8763(uParam0.f_2193[iVar22 /*16*/], &cVar28);
		iVar22++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_2242, 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&cVar1, "BGSAVEINT", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		register_int_to_save(uParam0.f_2242[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	stop_save_array();
}

void func_14(auto uParam0, int iParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, "MP_SAVED_CARAPP", 24);
	StringIntConCat(&Var0, iParam1, 24);
	func_15(uParam0.f_5426, &Var0, iParam1);
}

void func_15(auto uParam0, char* sParam1, auto uParam2)
{
	char[64] cVar0;
	int iVar16;
	
	_start_save_struct(uParam0, 2278, sParam1);
	_start_save_array(uParam0, 2151, "CAR_APP_DATA");
	iVar16 = 0;
	while (iVar16 < 50)
	{
		StringCopy(&cVar0, "CARAPP_DATA_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		func_17(uParam0[iVar16 /*43*/], &cVar0);
		iVar16++;
	}
	stop_save_array();
	stop_save_struct();
	_start_save_array(uParam0.f_2192, 51, "CAR_HIDDEN");
	iVar16 = 0;
	while (iVar16 < 50)
	{
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		register_bool_to_save(uParam0.f_2192[iVar16], &cVar0);
		iVar16++;
	}
	stop_save_array();
	func_16(uParam0.f_2151, "CAR_APP_ORDER");
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, uParam2, 64);
	register_bool_to_save(uParam0.f_2243, &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, uParam2, 64);
	register_bool_to_save(uParam0.f_2245, &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, uParam2, 64);
	register_bool_to_save(uParam0.f_2244, &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, uParam2, 64);
	register_int_to_save(uParam0.f_2250, &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, uParam2, 64);
	_0x6F7794F28C6B2535(uParam0.f_2246, &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, uParam2, 64);
	register_int_to_save(uParam0.f_2251, &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, uParam2, 64);
	register_int_to_save(uParam0.f_2252, &cVar0);
	_start_save_array(uParam0.f_2253, 11, "SAVED_VEH_SLOT");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		register_int_to_save(uParam0.f_2253[iVar16], &cVar0);
		iVar16++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_2264, 11, "SAVED_VEH_PRIO");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		register_int_to_save(uParam0.f_2264[iVar16], &cVar0);
		iVar16++;
	}
	stop_save_array();
	register_int_to_save(uParam0.f_2275, "LAST_USED");
	register_int_to_save(uParam0.f_2276, "NEW_SAVED");
	register_bool_to_save(uParam0.f_2277, "SETUP_INIT");
}

void func_16(auto uParam0, char* sParam1)
{
	_start_save_struct(uParam0, 41, sParam1);
	register_enum_to_save(uParam0, "Model");
	register_int_to_save(uParam0.f_1, "iColourID1");
	register_int_to_save(uParam0.f_2, "iColourID2");
	register_int_to_save(uParam0.f_3, "iColour1Group");
	register_int_to_save(uParam0.f_4, "iColour2Group");
	register_int_to_save(uParam0.f_5, "iWindowTint");
	register_int_to_save(uParam0.f_6, "iTyreSmokeR");
	register_int_to_save(uParam0.f_7, "iTyreSmokeG");
	register_int_to_save(uParam0.f_8, "iTyreSmokeB");
	register_int_to_save(uParam0.f_9, "iEngine");
	register_int_to_save(uParam0.f_10, "iBrakes");
	register_int_to_save(uParam0.f_11, "iWheels");
	register_int_to_save(uParam0.f_12, "iWheelType");
	register_int_to_save(uParam0.f_13, "iExhaust");
	register_int_to_save(uParam0.f_14, "iSuspension");
	register_int_to_save(uParam0.f_15, "iArmour");
	register_int_to_save(uParam0.f_16, "iHorn");
	register_int_to_save(uParam0.f_17, "iLights");
	register_bool_to_save(uParam0.f_18, "bBulletProofTyres");
	register_int_to_save(uParam0.f_19, "iTurbo");
	register_int_to_save(uParam0.f_20, "iTyreSmoke");
	_0x6F7794F28C6B2535(uParam0.f_21, "tlPlateText");
	register_int_to_save(uParam0.f_25, "iPlateBack");
	register_int_to_save(uParam0.f_26, "UID");
	register_int_to_save(uParam0.f_27, "Cost");
	_0x6F7794F28C6B2535(uParam0.f_28, "tlPlateText_pending");
	register_int_to_save(uParam0.f_32, "iPlateBack_pending");
	register_bool_to_save(uParam0.f_33, "bProcessOrder");
	register_bool_to_save(uParam0.f_36, "bOrderPending");
	register_bool_to_save(uParam0.f_35, "bOrderReceivedOnBoot");
	register_bool_to_save(uParam0.f_34, "bOrderForPlayerVehicle");
	register_bool_to_save(uParam0.f_37, "bCheckPlateProfanity");
	register_bool_to_save(uParam0.f_40, "bOrderPaidFor");
	register_bool_to_save(uParam0.f_38, "bSCProfanityFailed");
	register_bool_to_save(uParam0.f_39, "bOrderFailedFunds");
	stop_save_struct();
}

void func_17(auto uParam0, char* sParam1)
{
	int iVar0;
	char[16] cVar1;
	
	_start_save_struct(uParam0, 43, sParam1);
	register_enum_to_save(uParam0, "Model");
	register_int_to_save(uParam0.f_1, "iColourID1");
	register_int_to_save(uParam0.f_2, "iColourID2");
	register_int_to_save(uParam0.f_3, "iWindowTint");
	register_int_to_save(uParam0.f_4, "iTyreSmokeR");
	register_int_to_save(uParam0.f_5, "iTyreSmokeG");
	register_int_to_save(uParam0.f_6, "iTyreSmokeB");
	register_int_to_save(uParam0.f_7, "iEngine");
	register_int_to_save(uParam0.f_8, "iBrakes");
	register_int_to_save(uParam0.f_9, "iWheels");
	register_int_to_save(uParam0.f_10, "iWheelType");
	register_int_to_save(uParam0.f_11, "iExhaust");
	register_int_to_save(uParam0.f_12, "iSuspension");
	register_int_to_save(uParam0.f_13, "iArmour");
	register_int_to_save(uParam0.f_14, "iHorn");
	register_int_to_save(uParam0.f_15, "iLights");
	register_bool_to_save(uParam0.f_16, "bBulletProofTyres");
	register_int_to_save(uParam0.f_17, "iTurbo");
	register_int_to_save(uParam0.f_18, "iTyreSmoke");
	_0x6F7794F28C6B2535(uParam0.f_19, "tlPlateText");
	register_int_to_save(uParam0.f_23, "iPlateBack");
	register_int_to_save(uParam0.f_24, "iModCountEngine");
	register_int_to_save(uParam0.f_25, "iModCountBrakes");
	register_int_to_save(uParam0.f_26, "iModCountExhaust");
	register_int_to_save(uParam0.f_27, "iModCountWheels");
	register_int_to_save(uParam0.f_28, "iModCountHorn");
	register_int_to_save(uParam0.f_29, "iModCountArmour");
	register_int_to_save(uParam0.f_30, "iModCountSuspension");
	register_float_to_save(uParam0.f_31, "fModPriceModifier");
	register_int_to_save(uParam0.f_32, "iModColoursThatCanBeSet");
	_start_save_array(uParam0.f_33, 6, "iHornHash");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "iHornHash", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		register_int_to_save(uParam0.f_33[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	register_enum_to_save(uParam0.f_39, "eModKitType");
	register_bool_to_save(uParam0.f_40, "bSendDataToCloud");
	register_bool_to_save(uParam0.f_41, "bDeleteData");
	register_bool_to_save(uParam0.f_42, "bUpdateMods");
	stop_save_struct();
}

void func_18(auto uParam0, int iParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	func_19(uParam0.f_5388, &Var0);
}

void func_19(auto uParam0, char* sParam1)
{
	int iVar0;
	char[16] cVar1;
	
	_start_save_struct(uParam0, 38, sParam1);
	register_bool_to_save(uParam0, "TV_ON");
	register_int_to_save(uParam0.f_1, "TV_CHANNEL_ID");
	_start_save_array(uParam0.f_2, 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		register_bool_to_save(uParam0.f_2[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_5, 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		register_int_to_save(uParam0.f_5[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	register_bool_to_save(uParam0.f_8, "GARAGE_TV_ON");
	register_int_to_save(uParam0.f_9, "GARAGE_TV_CHANNEL_ID");
	register_bool_to_save(uParam0.f_10, "GARAGE_RADIO_ON");
	register_int_to_save(uParam0.f_11, "GARAGE_RADIO_STATION_ID");
	register_int_to_save(uParam0.f_12, "NUMBERS_TIMES_SMOKED");
	register_int_to_save(uParam0.f_13, "NUMBER_TIMES_DRANK");
	register_int_to_save(uParam0.f_14, "NUMBER_TIMES_STRIPPERS");
	register_int_to_save(uParam0.f_15, "NUMBERS_TIMES_SMOKED_SECOND");
	register_int_to_save(uParam0.f_16, "NUMBER_TIMES_DRANK_SECOND");
	register_int_to_save(uParam0.f_17, "NUMBER_TIMES_STRIPPERS_SECOND");
	register_int_to_save(uParam0.f_18, "NUMBERS_TIMES_SMOKED3");
	register_int_to_save(uParam0.f_19, "NUMBER_TIMES_DRANK3");
	register_int_to_save(uParam0.f_20, "NUMBER_TIMES_STRIPPERS3");
	register_int_to_save(uParam0.f_21, "NUMBERS_TIMES_SMOKED4");
	register_int_to_save(uParam0.f_22, "NUMBER_TIMES_DRANK4");
	register_int_to_save(uParam0.f_23, "NUMBER_TIMES_STRIPPERS4");
	register_int_to_save(uParam0.f_24, "NUMBERS_TIMES_SMOKED5");
	register_int_to_save(uParam0.f_25, "NUMBER_TIMES_DRANK5");
	register_int_to_save(uParam0.f_26, "NUMBER_TIMES_STRIPPERS5");
	register_int_to_save(uParam0.f_27, "NUMBERS_TIMES_SMOKEDYacht");
	register_int_to_save(uParam0.f_28, "NUMBER_TIMES_DRANKYacht");
	register_int_to_save(uParam0.f_29, "NUMBER_TIMES_STRIPPERSYacht");
	register_enum_to_save(uParam0.f_30, "DATE_LAST_CLEANED_APARTMENT");
	register_enum_to_save(uParam0.f_31, "SHOWERS_TAKEN");
	_start_save_array(uParam0.f_32, 2, "PROP_DRINKS");
	StringCopy(&cVar1, "DRANK_", 16);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		register_int_to_save(uParam0.f_32[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_34, 2, "PROP_SMOKES");
	StringCopy(&cVar1, "SMOKED_", 16);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		register_int_to_save(uParam0.f_34[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_36, 2, "PROP_STRIPPERS");
	StringCopy(&cVar1, "STRIPPERS_", 16);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		register_int_to_save(uParam0.f_36[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	stop_save_array();
}

void func_20(auto uParam0, int iParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&Var0, iParam1, 24);
	func_21(uParam0.f_5383, &Var0);
}

void func_21(auto uParam0, char* sParam1)
{
	int iVar0;
	char[16] cVar1;
	
	_start_save_struct(uParam0, 5, sParam1);
	register_int_to_save(uParam0, "BAV_Timestamp");
	_start_save_array(uParam0.f_1, 4, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		register_int_to_save(uParam0.f_1[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	stop_save_array();
}

void func_22(auto uParam0, int iParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&Var0, iParam1, 24);
	func_23(uParam0, &Var0);
}

void func_23(auto uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	_start_save_array(uParam0, 5383, sParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		StringCopy(&Var1, "MP_VEHICLE", 32);
		StringIntConCat(&Var1, iVar0, 32);
		func_24(uParam0[iVar0 /*138*/], &Var1);
		iVar0++;
	}
	stop_save_array();
}

void func_24(auto uParam0, char* sParam1)
{
	_start_save_struct(uParam0, 138, sParam1);
	func_25(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	register_int_to_save(uParam0.f_99, "VEHICLE_BS");
	register_int_to_save(uParam0.f_101, "PAID_PREMIUM");
	_0xFAA457EF263E8763(uParam0.f_102, "PAID_PLAYER");
	_0xFAA457EF263E8763(uParam0.f_118, "RADIO_STATION");
	register_int_to_save(uParam0.f_100, "IMPOUND_TIME");
	register_int_to_save(uParam0.f_134, "COLOUR_GROUP1");
	register_int_to_save(uParam0.f_135, "COLOUR_GROUP2");
	register_int_to_save(uParam0.f_136, "PRICE_PAID");
	register_int_to_save(uParam0.f_137, "OBTAIN_TIME");
	stop_save_struct();
}

void func_25(auto uParam0, char* sParam1)
{
	func_27(uParam0, "VEHICLE_SETUP_STRUCT");
	_start_save_struct(uParam0, 99, sParam1);
	register_int_to_save(uParam0.f_78, "iSpawnVehicleHorn");
	register_float_to_save(uParam0.f_79, "fEnveffScale");
	register_int_to_save(uParam0.f_96, "iColour5");
	register_int_to_save(uParam0.f_97, "iLivery2");
	register_int_to_save(uParam0.f_98, "iColour6");
	func_26(uParam0.f_80, "GamerHandleOfCarOwner");
	register_int_to_save(uParam0.f_93, "OwnerStatus");
	register_int_to_save(uParam0.f_94, "iFlags");
	register_int_to_save(uParam0.f_95, "iPVSlot");
	stop_save_struct();
}

void func_26(auto uParam0, char* sParam1)
{
	_start_save_struct(uParam0, 13, sParam1);
	_0xA735353C77334EA0(uParam0, "Data64_1");
	_0xA735353C77334EA0(uParam0.f_1, "Data64_2");
	_0xA735353C77334EA0(uParam0.f_2, "Data64_3");
	_0xA735353C77334EA0(uParam0.f_3, "Data64_4");
	_0xA735353C77334EA0(uParam0.f_4, "Data64_5");
	_0xA735353C77334EA0(uParam0.f_5, "Data64_6");
	_0xA735353C77334EA0(uParam0.f_6, "Data64_7");
	_0xA735353C77334EA0(uParam0.f_7, "Data64_8");
	_0xA735353C77334EA0(uParam0.f_8, "Data64_9");
	_0xA735353C77334EA0(uParam0.f_9, "Data64_10");
	_0xA735353C77334EA0(uParam0.f_10, "Data64_11");
	_0xA735353C77334EA0(uParam0.f_11, "Data64_12");
	_0xA735353C77334EA0(uParam0.f_12, "Data64_13");
	stop_save_struct();
}

void func_27(auto uParam0, char* sParam1)
{
	int iVar0;
	char[16] cVar1;
	
	_start_save_struct(uParam0, 78, sParam1);
	register_int_to_save(uParam0, "iPlateIndex");
	_0x6F7794F28C6B2535(uParam0.f_1, "tlPlateText");
	register_int_to_save(uParam0.f_5, "iColour1");
	register_int_to_save(uParam0.f_6, "iColour2");
	register_int_to_save(uParam0.f_7, "iColourExtra1");
	register_int_to_save(uParam0.f_8, "iColourExtra2");
	register_int_to_save(uParam0.f_62, "iTyreR");
	register_int_to_save(uParam0.f_63, "iTyreG");
	register_int_to_save(uParam0.f_64, "iTyreB");
	register_int_to_save(uParam0.f_65, "iWindowTintColour");
	register_int_to_save(uParam0.f_67, "iLivery");
	register_int_to_save(uParam0.f_69, "iWheelType");
	register_enum_to_save(uParam0.f_68, "eRoofState");
	register_int_to_save(uParam0.f_77, "iFlags");
	register_int_to_save(uParam0.f_71, "iCustomR");
	register_int_to_save(uParam0.f_72, "iCustomG");
	register_int_to_save(uParam0.f_73, "iCustomB");
	register_int_to_save(uParam0.f_74, "iNeonR");
	register_int_to_save(uParam0.f_75, "iNeonG");
	register_int_to_save(uParam0.f_76, "iNeonB");
	register_enum_to_save(uParam0.f_66, "eModel");
	_start_save_array(uParam0.f_9, 50, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		register_int_to_save(uParam0.f_9[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	_start_save_array(uParam0.f_59, 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		register_int_to_save(uParam0.f_59[iVar0], &cVar1);
		iVar0++;
	}
	stop_save_array();
	register_enum_to_save(uParam0.f_70, "eLockState");
	stop_save_struct();
}

void func_28(float fParam0)
{
	func_37();
	if (fParam0 == 1f)
	{
		func_35();
	}
	if (fParam0 <= 1.1f)
	{
		func_34();
	}
	if (fParam0 < 1.5f)
	{
		func_32();
	}
	if (fParam0 <= 1.5f)
	{
		func_31();
	}
	if (fParam0 == 1.5f)
	{
		func_30();
	}
	if (fParam0 < 1.7f)
	{
		func_29();
	}
}

void func_29()
{
	Global_101154.f_30959.f_4 = 0;
}

void func_30()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	stat_get_int(joaat("content_hanger_veh"), &iVar0, -1);
	stat_get_int(joaat("content_marina_veh"), &iVar1, -1);
	stat_get_int(joaat("content_heli_veh"), &iVar2, -1);
	if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 >= 0)
	{
		Global_101154.f_668.f_775 -= iVar0;
	}
}

void func_31()
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	iVar0 = false;
	while (iVar0 < 3)
	{
		iVar1 = 171;
		while (iVar1 <= 198)
		{
			if (is_bit_set(Global_101154.f_29707[iVar1], iVar0))
			{
				clear_bit(&(Global_101154.f_29707[iVar1]), iVar0);
				uVar2 = iVar1 + 198 - 171 + 1;
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_29707[uVar2]), iVar0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_32()
{
	if ((((func_33(54) || func_33(55)) || func_33(56)) || func_33(57)) || func_33(58))
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8706.f_25), 6);
	}
}

int func_33(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_34()
{
}

void func_35()
{
	if (Global_101154.f_7775.f_99.f_205[7] != 0)
	{
		if (!Global_101154.f_7775.f_330[86 /*6*/])
		{
			Global_101154.f_7775.f_330[86 /*6*/] = 1;
		}
	}
	if (Global_101154.f_7775.f_99.f_205[8] != 0)
	{
		if (!Global_101154.f_7775.f_330[71 /*6*/])
		{
			Global_101154.f_7775.f_330[71 /*6*/] = 1;
		}
	}
	if (Global_101154.f_7775.f_99.f_205[9] != 0)
	{
		if (!Global_101154.f_7775.f_330[91 /*6*/])
		{
			Global_101154.f_7775.f_330[91 /*6*/] = 1;
		}
	}
	if (Global_101154.f_7775.f_99.f_205[10] != 0)
	{
		if (!Global_101154.f_7775.f_330[67 /*6*/])
		{
			Global_101154.f_7775.f_330[67 /*6*/] = 1;
		}
	}
	if (Global_101154.f_7775.f_99.f_205[11] != 0)
	{
		if (!Global_101154.f_7775.f_330[77 /*6*/])
		{
			Global_101154.f_7775.f_330[77 /*6*/] = 1;
		}
	}
	func_36(195, 198);
	func_36(195, 197);
	func_36(195, 196);
}

void func_36(int iParam0, int iParam1)
{
	struct<4> Var0;
	auto uVar4;
	auto uVar5;
	auto uVar6;
	auto uVar7;
	auto uVar8;
	auto uVar9;
	auto uVar10;
	auto uVar11;
	
	Var0 = {Global_101154.f_8884[iParam0 /*12*/]};
	uVar4 = Global_101154.f_8884[iParam0 /*12*/].f_4;
	uVar5 = Global_101154.f_8884[iParam0 /*12*/].f_5;
	uVar6 = Global_101154.f_8884[iParam0 /*12*/].f_6;
	uVar7 = Global_101154.f_8884[iParam0 /*12*/].f_7;
	uVar8 = Global_101154.f_8884[iParam0 /*12*/].f_8;
	uVar9 = Global_101154.f_8884[iParam0 /*12*/].f_9;
	uVar10 = Global_101154.f_8884[iParam0 /*12*/].f_10;
	uVar11 = Global_101154.f_8884[iParam0 /*12*/].f_11;
	Global_101154.f_8884[iParam0 /*12*/] = {Global_101154.f_8884[iParam1 /*12*/]};
	Global_101154.f_8884[iParam0 /*12*/].f_4 = Global_101154.f_8884[iParam1 /*12*/].f_4;
	Global_101154.f_8884[iParam0 /*12*/].f_5 = Global_101154.f_8884[iParam1 /*12*/].f_5;
	Global_101154.f_8884[iParam0 /*12*/].f_6 = Global_101154.f_8884[iParam1 /*12*/].f_6;
	Global_101154.f_8884[iParam0 /*12*/].f_7 = Global_101154.f_8884[iParam1 /*12*/].f_7;
	Global_101154.f_8884[iParam0 /*12*/].f_8 = Global_101154.f_8884[iParam1 /*12*/].f_8;
	Global_101154.f_8884[iParam0 /*12*/].f_9 = Global_101154.f_8884[iParam1 /*12*/].f_9;
	Global_101154.f_8884[iParam0 /*12*/].f_10 = Global_101154.f_8884[iParam1 /*12*/].f_10;
	Global_101154.f_8884[iParam0 /*12*/].f_11 = Global_101154.f_8884[iParam1 /*12*/].f_11;
	Global_101154.f_8884[iParam1 /*12*/] = {Var0};
	Global_101154.f_8884[iParam1 /*12*/].f_4 = uVar4;
	Global_101154.f_8884[iParam1 /*12*/].f_5 = uVar5;
	Global_101154.f_8884[iParam1 /*12*/].f_6 = uVar6;
	Global_101154.f_8884[iParam1 /*12*/].f_7 = uVar7;
	Global_101154.f_8884[iParam1 /*12*/].f_8 = uVar8;
	Global_101154.f_8884[iParam1 /*12*/].f_9 = uVar9;
	Global_101154.f_8884[iParam1 /*12*/].f_10 = uVar10;
	Global_101154.f_8884[iParam1 /*12*/].f_11 = uVar11;
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_38(Global_101154.f_29429[iVar0 /*4*/]))
		{
			if (Global_101154.f_29429[iVar0 /*4*/] != 145)
			{
				Global_101154.f_29429[iVar0 /*4*/] = 145;
			}
		}
		iVar0++;
	}
}

int func_38(int iParam0)
{
	return iParam0 < 3;
}

void func_39()
{
	_0x7E2BD3EF6C205F09("No_Filter", 1);
	_0x7E2BD3EF6C205F09("phone_cam1", 1);
	_0x7E2BD3EF6C205F09("phone_cam2", 1);
	_0x7E2BD3EF6C205F09("phone_cam3", 1);
	_0x7E2BD3EF6C205F09("phone_cam4", 1);
	_0x7E2BD3EF6C205F09("phone_cam5", 1);
	_0x7E2BD3EF6C205F09("phone_cam6", 1);
	_0x7E2BD3EF6C205F09("phone_cam7", 1);
	_0x7E2BD3EF6C205F09("phone_cam9", 1);
	_0x7E2BD3EF6C205F09("phone_cam12", 0);
}

void func_40(int iParam0, int iParam1)
{
	_request_streamed_script(iParam0);
	while (!_has_streamed_script_loaded(iParam0))
	{
		wait(false);
		_request_streamed_script(iParam0);
	}
	_start_new_streamed_script(iParam0, iParam1);
}

bool func_41()
{
	if (((_0xEF7D17BC6C85264C() || _return_zero()) || _0x88B588B41FF7868E()) || _0x67FC09BC554A75E5())
	{
		return true;
	}
	return false;
}

