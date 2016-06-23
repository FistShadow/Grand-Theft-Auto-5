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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	char[64] cLocal_53 = 0;
	struct<16> Local_69 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	vector3 vLocal_87 = 0;
	vector3 vLocal_90 = 0;
	float fLocal_93 = 0;
	var uLocal_94 = 0;
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
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0;
	vector3 vLocal_111 = 0;
	vector3 vLocal_114 = 0;
	Vector3 fLocal_117 = 0;
	int iLocal_118 = 0;
	Vector3 fLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<2> Local_125 = 0;
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
	var uLocal_142 = 5;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	fLocal_119 = 0f;
	vLocal_90 = {Local_125.f_1[0 /*3*/]};
	vLocal_90 = {vLocal_90};
	iLocal_86 = iLocal_86;
	Local_69 = {Local_69};
	iVar0 = false;
	if (has_force_cleanup_occurred(82))
	{
		func_110(1);
	}
	iLocal_85 = get_player_ped(player_id());
	iLocal_95 = 0;
	func_108(&Global_99807, 0);
	func_107();
	if (func_106(uLocal_94, 1))
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
	if (!func_106(uLocal_94, 8))
	{
		if (!func_104(iLocal_100))
		{
			if (func_103(0, iLocal_99))
			{
				func_110(0);
			}
			else
			{
				func_110(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_103(0, iLocal_99))
		{
			func_110(1);
		}
	}
	if (func_106(uLocal_94, 8388608))
	{
		func_110(1);
	}
	if (func_106(uLocal_94, 524288) && (func_102() && !func_101()))
	{
		func_110(1);
	}
	if (_get_number_of_instances_of_streamed_script(_get_this_script_hash()) > 1 && !func_106(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_100(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_99(10);
	}
	if (!does_entity_exist(iLocal_86))
	{
		if (func_98() && !Global_100201)
		{
			func_97(1);
		}
		else if (Global_100201)
		{
		}
	}
	while (true)
	{
		if ((!func_96() && !func_95()) && !func_94())
		{
			func_110(1);
		}
		iLocal_85 = get_player_ped(player_id());
		if (func_106(uLocal_94, 1048576))
		{
			if (is_entity_dead(iLocal_85, 0))
			{
				func_110(1);
			}
		}
		if (does_entity_exist(iLocal_85) && !is_entity_dead(iLocal_85, 0))
		{
			vLocal_87 = {get_entity_coords(iLocal_85, 1)};
			fLocal_93 = vdist2(vLocal_87, Local_125.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = {vLocal_87};
			vLocal_114 = {Local_125.f_1[0 /*3*/]};
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = vdist2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_104(iLocal_100) || (func_106(uLocal_94, 16) && !func_106(uLocal_94, 524288)))
					{
						request_model(iLocal_118);
						iLocal_98 = -1;
						func_93();
						func_99(1);
					}
					else
					{
						if (fLocal_110 > fLocal_102 * fLocal_102)
						{
							if (iLocal_105 != 263)
							{
								func_100(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_99(10);
						}
						if (vLocal_87.z - Local_125.f_1[0 /*3*/].f_2 > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_92() && has_model_loaded(iLocal_118))
					{
						iLocal_103 = iLocal_103;
						func_99(3);
					}
					else
					{
						func_93();
					}
					break;
				
				case 3:
					if (network_is_in_session())
					{
						func_110(1);
						return;
					}
					if (!func_104(iLocal_100))
					{
						if (!func_106(uLocal_94, 8))
						{
							iVar1 = true;
							if (are_strings_equal(&(Global_91278.f_3), &Local_69))
							{
								Local_69 = {cLocal_53};
								iVar1 = false;
							}
							if (iVar1)
							{
								func_110(0);
								break;
							}
						}
					}
					if (!does_entity_exist(iLocal_86) && (((fLocal_93 > 10f * 10f && !is_sphere_visible(Local_125.f_1[0 /*3*/], 5f)) || fLocal_93 > 80f * 80f) || (!does_entity_exist(iLocal_86) && is_screen_faded_out())))
					{
						clear_area_of_vehicles(Local_125.f_1[0 /*3*/], 8f, 0, 0, 0, 0, false);
						iLocal_86 = create_vehicle(iLocal_118, Local_125.f_1[0 /*3*/], fLocal_119, 1, true);
						func_91();
						set_vehicle_has_strong_axles(iLocal_86, true);
						iVar2 = false;
						if (func_90() && !iVar2)
						{
							set_vehicle_doors_locked(iLocal_86, 2);
							func_88(&uLocal_94, 32);
						}
					}
					else if (func_106(uLocal_94, 32))
					{
						if (!func_90())
						{
							if (!is_entity_dead(iLocal_86, 0))
							{
								set_vehicle_doors_locked(iLocal_86, 1);
							}
							func_108(&uLocal_94, 32);
						}
					}
					if (!func_106(uLocal_94, 4))
					{
						func_87();
						func_86(&uLocal_94, 4);
					}
					if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91312)
					{
						if (iLocal_105 != 263)
						{
							if (func_85(6) && !func_84(iLocal_105))
							{
							}
							else
							{
								func_100(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_99(10);
					}
					else
					{
						Local_69 = {cLocal_53};
						iVar3 = !func_106(uLocal_94, 64);
						func_108(&uLocal_94, 128);
						if (!func_83(3) && !Global_91312)
						{
							if (func_106(uLocal_94, 2097152))
							{
								if ((!func_106(uLocal_94, 1) || !does_entity_exist(func_82())) && !Global_91312)
								{
									func_99(10);
									break;
								}
							}
						}
						if (func_106(uLocal_94, 524288) && (func_102() && !func_101()))
						{
							func_110(1);
						}
						if (func_81())
						{
							func_110(1);
						}
						if ((!func_73(6) || Global_100201) || func_72())
						{
							iVar3 = false;
						}
						if (func_106(uLocal_94, 1))
						{
							if (!func_71())
							{
								func_88(&uLocal_94, 128);
								iVar3 = false;
							}
						}
						if (func_70(1))
						{
							iVar3 = false;
						}
						if (Global_69489)
						{
							iVar3 = false;
						}
						if (func_69())
						{
							iVar3 = false;
						}
						if (is_player_switch_in_progress())
						{
							iVar3 = false;
						}
						if (func_68() || func_67(8, -1))
						{
							iVar3 = false;
						}
						if (!can_player_start_mission(player_id()))
						{
							iVar3 = false;
						}
						if (!is_player_script_control_on(player_id()))
						{
							iVar3 = false;
						}
						if (func_66(0) || func_65())
						{
							iVar3 = false;
						}
						if (iVar3)
						{
							if (does_entity_exist(iLocal_86))
							{
								if (!is_entity_at_coord(iLocal_86, vLocal_90, fLocal_117, fLocal_117, fLocal_117, false, true, 0))
								{
									func_99(7);
								}
							}
							if (is_entity_dead(iLocal_86, 0))
							{
								func_88(&uLocal_94, 128);
								iVar3 = false;
							}
							else if (!is_ped_getting_into_a_vehicle(player_ped_id()))
							{
								func_88(&uLocal_94, 128);
								iVar3 = false;
							}
							else
							{
								iVar4 = set_exclusive_phone_relationships(player_ped_id());
								if (iVar3)
								{
									if (iLocal_86 == iVar4)
									{
										if (!is_entity_at_coord(iLocal_85, Local_125.f_1[0 /*3*/], 4f, 4f, 2f, false, true, 0))
										{
											func_88(&uLocal_94, 128);
											iVar3 = false;
										}
									}
									else
									{
										func_88(&uLocal_94, 128);
										iVar3 = false;
									}
								}
							}
							if (!is_player_control_on(player_id()))
							{
								iVar3 = false;
							}
							if (iVar3)
							{
								set_input_exclusive(0, 51);
								if (func_64(iLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_63(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_88(&uLocal_94, 2048);
									}
									else if (!func_106(uLocal_94, 2048) || !is_help_message_being_displayed())
									{
										func_62(&iLocal_96);
										func_108(&uLocal_94, 2048);
									}
									if (func_60(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_62(&iLocal_96);
										func_108(&uLocal_94, 2048);
										request_script(&Local_69);
										set_player_control(player_id(), false, 56);
										func_99(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_62(&iLocal_96);
									func_108(&uLocal_94, 2048);
									request_script(&Local_69);
									set_player_control(player_id(), false, 56);
									func_99(5);
								}
							}
						}
						if (!iVar3)
						{
							if (iLocal_96 != -1)
							{
								func_62(&iLocal_96);
								func_108(&uLocal_94, 2048);
								clear_help(0);
							}
						}
					}
					func_54();
					break;
				
				case 5:
					set_input_exclusive(0, 51);
					if (has_script_loaded(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_62(&iLocal_96);
						}
						iVar5 = 2;
						iVar0 = false;
						if (func_106(uLocal_94, 1))
						{
							if (func_85(6) || func_85(7))
							{
								iVar5 = 1;
								iVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_51(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!is_entity_dead(iLocal_86, 0))
							{
								set_vehicle_as_no_longer_needed(&iLocal_86);
							}
							if (is_player_playing(player_id()))
							{
								clear_player_wanted_level(player_id());
							}
							func_50();
							if (Global_36839)
							{
								func_41(player_ped_id());
							}
							set_player_control(player_id(), true, 56);
							iLocal_52 = func_25();
							func_88(&uLocal_94, 2);
							func_99(6);
							func_21(&iLocal_107);
							if (iLocal_99 != -1)
							{
								func_20(iLocal_99);
								func_17(func_19(iLocal_99), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_16();
						}
						else if (iVar5 == 0)
						{
							func_99(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (!func_106(uLocal_94, 256))
					{
						if (is_screen_fading_out() || is_screen_faded_in())
						{
							set_input_exclusive(0, 51);
						}
						else if (is_screen_faded_out())
						{
							func_88(&uLocal_94, 256);
						}
					}
					if (func_106(Global_99807, 262144))
					{
						func_108(&Global_99807, 262144);
						func_15();
					}
					if (func_106(uLocal_94, 2097152))
					{
						if (!func_83(3) && !is_thread_active(iLocal_52))
						{
							func_99(10);
						}
					}
					if (!is_thread_active(iLocal_52))
					{
						playstats_oddjob_done(round(func_11(&iLocal_107) * 1000f), iLocal_99, 0);
						func_10(&iLocal_107);
						func_108(&uLocal_94, 256);
						func_9();
						if (does_entity_exist(iLocal_86))
						{
							if (!is_entity_dead(iLocal_86, 0))
							{
								set_vehicle_as_no_longer_needed(&iLocal_86);
								iLocal_86 = false;
							}
						}
						if (iVar0)
						{
							func_108(&uLocal_94, 2);
						}
						else if (func_106(uLocal_94, 2))
						{
							if (func_106(Global_99807, 0))
							{
								func_8(&iLocal_98);
								iLocal_98 = -1;
								func_108(&uLocal_94, 2);
							}
							else
							{
								func_8(&iLocal_98);
								iLocal_98 = -1;
								func_108(&uLocal_94, 2);
							}
						}
						func_99(0);
						if (iLocal_99 != -1)
						{
							if (func_106(Global_99807, 0))
							{
								playstats_mission_checkpoint(func_19(iLocal_99), 0, Global_91315, 0);
								func_7(func_19(iLocal_99), 0, Global_91315, 1, 0);
							}
							else
							{
								playstats_mission_checkpoint(func_19(iLocal_99), 0, Global_91315, 0);
								func_7(func_19(iLocal_99), 0, Global_91315, 0, 0);
							}
						}
						func_4();
						func_108(&Global_99807, 0);
						if (func_106(uLocal_94, 16777216))
						{
							func_110(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_101154.f_7775)
							{
								if (!func_103(0, iLocal_99))
								{
									func_110(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_99(0);
					break;
				
				case 10:
					func_110(1);
					break;
				
				case 9:
					if (fLocal_110 > fLocal_102 * fLocal_102)
					{
						if (iLocal_105 != 263)
						{
							func_100(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_99(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_100(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_62(&iLocal_96);
					}
					if (!is_string_null_or_empty(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							clear_help(1);
						}
					}
					func_99(4);
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
									if (func_104(iLocal_100) && func_103(0, iLocal_99))
									{
										func_107();
										if (iLocal_105 != 263)
										{
											func_100(iLocal_105, 1, 0);
										}
										func_99(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > fLocal_102 * fLocal_102)
								{
									if (iLocal_105 != 263)
									{
										func_100(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_99(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > 80f + 5f * 80f + 5f)
								{
									func_107();
									if (iLocal_105 != 263)
									{
										func_100(iLocal_105, 1, 0);
									}
									func_99(0);
								}
							}
						}
						else
						{
							func_100(iLocal_105, 1, 0);
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
}

void func_3()
{
}

void func_4()
{
	int iVar0;
	int iVar1;
	
	iVar0 = create_camera_with_params(26379945, 1697.183f, 3279.226f, 41.7283f, 1.5897f, 0f, 146.8519f, 50f, 1, 2);
	iVar1 = create_camera_with_params(26379945, 1697.755f, 3280.423f, 41.7708f, -9.1434f, 0f, 168.0244f, 50f, 0, 2);
	set_cam_active_with_interp(iVar1, iVar0, 3650, 1, 1);
	set_cinematic_mode_active(0);
	render_script_cams(true, false, 3000, 1, 0, 0);
	if (does_entity_exist(player_ped_id()) && !is_entity_dead(player_ped_id(), 0))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 1) || is_ped_getting_into_a_vehicle(player_ped_id()))
		{
			iLocal_86 = get_vehicle_ped_is_using(player_ped_id());
			set_vehicle_doors_locked(iLocal_86, 1);
			set_vehicle_radio_enabled(iLocal_86, 1);
			task_leave_any_vehicle(player_ped_id(), 0, 0);
		}
	}
	set_entity_as_mission_entity(iLocal_86, true, 1);
	func_5(&iLocal_120);
	if (does_entity_exist(iLocal_120))
	{
		set_vehicle_as_no_longer_needed(&iLocal_120);
	}
	while (is_cam_interpolating(iVar0) || is_cam_interpolating(iVar1))
	{
		hide_hud_and_radar_this_frame();
		wait(0);
	}
	_0xC819F3CBB62BF692(0, 0f, 3, 0);
	if (does_cam_exist(iVar0))
	{
		destroy_cam(iVar0, 0);
	}
	if (does_cam_exist(iVar1))
	{
		destroy_cam(iVar1, 0);
	}
}

void func_5(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (does_entity_exist(iVar0))
	{
		if (!func_6(iVar0))
		{
			set_entity_collision(iVar0, true, 0);
			set_entity_visible(iVar0, true, 0);
			freeze_entity_position(iVar0, false);
		}
	}
}

bool func_6(int iParam0)
{
	if (does_entity_exist(iParam0))
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

void func_7(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_8(int iParam0)
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

void func_9()
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

void func_10(int iParam0)
{
	*iParam0.f_1 = 0f;
	*iParam0.f_2 = 0f;
	*iParam0 = 0;
}

float func_11(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_13(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_12(is_bit_set(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_12(int iParam0)
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

int func_13(var uParam0)
{
	return is_bit_set(*uParam0, 2);
}

int func_14(var uParam0)
{
	return is_bit_set(*uParam0, true);
}

bool func_15()
{
	return true;
}

void func_16()
{
}

void func_17(char* sParam0, int iParam1, int iParam2)
{
	if (!is_string_null_or_empty(&Global_88681))
	{
		playstats_mission_over(&Global_88681, 0, 0, 0, 1, 0);
		StringCopy(&Global_88681, "", 64);
	}
	StringCopy(&Global_88681, sParam0, 64);
	playstats_mission_started(sParam0, iParam1, iParam2, func_18(0));
}

int func_18(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

char* func_19(int iParam0)
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

void func_20(int iParam0)
{
	var uVar0;
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

void func_21(int iParam0)
{
	if (!func_14(iParam0))
	{
		func_24(iParam0);
	}
	else
	{
		func_22(iParam0);
	}
}

void func_22(int iParam0)
{
	func_23(iParam0, 0f);
}

void func_23(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_12(is_bit_set(*iParam0, 4)) - fParam1;
	set_bit(iParam0, true);
	clear_bit(iParam0, 2);
	*iParam0.f_2 = 0f;
}

void func_24(int iParam0)
{
	if (!func_14(iParam0))
	{
		func_22(iParam0);
	}
}

int func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_1(sLocal_101))
	{
		clear_help(1);
	}
	if (is_ipl_active("airfield"))
	{
		remove_ipl("airfield");
	}
	iVar0 = get_players_last_vehicle();
	if (((((does_entity_exist(iVar0) && iVar0 != iLocal_86) && !is_entity_dead(iVar0, 0)) && get_entity_model(iVar0) != joaat("stunt")) && is_vehicle_seat_free(iVar0, -1)) && get_entity_model(iVar0) != joaat("cargobob"))
	{
		iVar1 = get_closest_vehicle(1694.736f, 3276.483f, 41.2979f, 5f, joaat("stunt"), 16384);
		if (does_entity_exist(iVar1))
		{
			set_entity_as_mission_entity(iVar1, true, 0);
		}
		func_27(1689.662f, 3274.546f, 40.00918f, 1696.669f, 3271.265f, 42.80674f, 7.25f, 1673.428f, 3267.02f, 40.0898f, 108.5236f, 1, 1, 1, 0, 0);
		if (does_entity_exist(iVar1))
		{
			set_vehicle_as_no_longer_needed(&iVar1);
		}
		if (func_26(&iLocal_120))
		{
		}
	}
	if (does_entity_exist(player_ped_id()) && !is_entity_dead(player_ped_id(), 0))
	{
		iVar0 = get_vehicle_ped_is_using(player_ped_id());
	}
	if (does_entity_exist(iVar0))
	{
		set_vehicle_doors_locked(iVar0, 1);
	}
	iVar2 = start_new_script(&cLocal_53, iLocal_97);
	set_script_as_no_longer_needed(&cLocal_53);
	return iVar2;
}

bool func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = get_players_last_vehicle();
	if (does_entity_exist(iVar0))
	{
		if (!func_6(iVar0))
		{
			if (!is_ped_injured(player_ped_id()) && is_entity_at_entity(iVar0, player_ped_id(), vLocal_45, 0, 1, 0))
			{
				_0xACFB2463CC22BED2(iVar0);
				set_entity_collision(iVar0, false, 0);
				set_entity_visible(iVar0, false, 0);
				freeze_entity_position(iVar0, true);
				set_entity_as_mission_entity(iVar0, true, 1);
				*iParam0 = iVar0;
				return true;
			}
		}
	}
	return false;
}

void func_27(vector3 vParam0, vector3 vParam1, Vector3 fParam2, vector3 vParam3, Vector3 fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_28(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, iParam11, iParam12, iParam13, iParam14, iParam15);
}

void func_28(vector3 vParam0, vector3 vParam1, Vector3 fParam2, vector3 vParam3, Vector3 fParam4, vector3 vParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (iParam15)
	{
		iParam15 = false;
	}
	iVar2 = true;
	iVar3 = 0;
	iVar0 = get_players_last_vehicle();
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_a_mission_entity(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, 0);
			iVar3 = 1;
		}
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (iParam18)
			{
				func_40(iVar0);
			}
			if (is_entity_in_angled_area(iVar0, vParam0, vParam3, fParam6, 0, true, 0))
			{
				iVar1 = true;
			}
			else
			{
				vVar10 = {get_entity_coords(iVar0, 1)};
				if ((vVar10.z > vParam0.z && vVar10.z < vParam3.z) || (vVar10.z > vParam3.z && vVar10.z < vParam0.z))
				{
					if (func_37(iVar0, vParam0, vParam3, fParam6))
					{
						iVar1 = true;
					}
				}
			}
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (is_vehicle_model(iVar0, joaat("taxi")))
				{
					if (get_ped_in_vehicle_seat(iVar0, -1) != player_ped_id() && get_ped_in_vehicle_seat(iVar0, -1) != 0)
					{
						if (get_distance_between_coords(vParam0 + vParam3 / Vector(2f, 2f, 2f), get_entity_coords(iVar0, 1), 1) < 20f)
						{
							iVar1 = true;
							iVar2 = false;
						}
					}
				}
			}
			if (iParam16)
			{
				if (func_30(iVar0, func_32(), 1))
				{
					iVar1 = false;
				}
			}
			if (iVar1)
			{
				if (!func_29(vParam11))
				{
					if (is_vehicle_driveable(iVar0, 0))
					{
						iVar13 = get_entity_model(iVar0);
						_0xDF7E3EEB29642C38(iVar0, &vVar4, &vVar7);
						if (is_this_model_a_heli(iVar13))
						{
							vParam11.x += 3f;
							vParam11.y += 3f;
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							vParam11 = {vParam11 * Vector(1.1f, 1.1f, 1.1f)};
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							vParam11 = {vParam11 * Vector(1.2f, 1.2f, 1.2f)};
						}
						if (vVar7.x - vVar4.x > vParam11.x)
						{
							iVar2 = false;
						}
						else if (vVar7.y - vVar4.y > vParam11.y)
						{
							iVar2 = false;
						}
						else if (vVar7.z - vVar4.z > vParam11.z)
						{
							iVar2 = false;
						}
					}
				}
				if (is_vehicle_driveable(iVar0, 0))
				{
					if (iVar2)
					{
						clear_area_of_vehicles(vParam7, 5f, 0, 0, 0, 0, false);
						set_entity_heading(iVar0, fParam10);
						set_entity_coords(iVar0, vParam7, 1, false, 0, 1);
						set_vehicle_on_ground_properly(iVar0);
						if (iParam17)
						{
							set_vehicle_engine_on(iVar0, false, 1, 0);
							set_vehicle_doors_shut(iVar0, 1);
						}
					}
					else
					{
						if (!is_entity_a_mission_entity(iVar0) || !does_entity_belong_to_this_script(iVar0, 1))
						{
							set_entity_as_mission_entity(iVar0, true, 1);
						}
						if (is_ped_in_vehicle(player_ped_id(), iVar0, 0))
						{
							set_entity_coords(player_ped_id(), get_entity_coords(iVar0, 1), 1, false, 0, 1);
						}
						delete_vehicle(&iVar0);
					}
				}
			}
			if (iParam14)
			{
				clear_angled_area_of_vehicles(vParam0, vParam3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (does_entity_exist(iVar0))
				{
					if (is_entity_a_mission_entity(iVar0))
					{
						set_vehicle_as_no_longer_needed(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!is_entity_a_mission_entity(iVar0))
			{
				set_entity_as_mission_entity(iVar0, true, 0);
			}
			iVar14 = get_ped_in_vehicle_seat(iVar0, -1);
			if (does_entity_exist(iVar14) && !is_ped_injured(iVar14))
			{
				set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
			}
			iVar15 = _get_vehicle_model_max_number_of_passengers(get_entity_model(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = get_ped_in_vehicle_seat(iVar0, false);
				if (does_entity_exist(iVar14) && !is_ped_injured(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = get_ped_in_vehicle_seat(iVar0, true);
				if (does_entity_exist(iVar14) && !is_ped_injured(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
				iVar14 = get_ped_in_vehicle_seat(iVar0, 2);
				if (does_entity_exist(iVar14) && !is_ped_injured(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
			}
			delete_vehicle(&iVar0);
		}
	}
}

bool func_29(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	var uVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_31(iParam1, iVar0, &sVar1, &uVar9))
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

bool func_31(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_32()
{
	func_33();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_33()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_36(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_35(player_ped_id());
			if (func_34(iVar0) && (!func_85(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_34(Global_101154.f_1826.f_539.f_3549))
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

int func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_37(int iParam0, vector3 vParam1, vector3 vParam2, Vector3 fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3[] vVar18 = new vector3[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		vParam1.z = vParam4.z;
		vVar0 = {func_39(vParam1 - vParam4)};
		vVar3 = {vVar0};
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = {vParam1 - vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar9 = {vParam1 + vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar12 = {vParam4 - vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar15 = {vParam4 + vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		get_model_dimensions(get_entity_model(iParam0), &Var31, &Var34);
		vVar18[0 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var31, Var31.f_1, 0f)};
		vVar18[1 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var31, Var34.f_1, 0f)};
		vVar18[2 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var34, Var31.f_1, 0f)};
		vVar18[3 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var34, Var34.f_1, 0f)};
		if (((((((((((((((func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) || func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15)) || func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15)) || func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12)) || func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9)) || func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15)) || func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15)) || func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12)) || func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9)) || func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15)) || func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15)) || func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12)) || func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9)) || func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15)) || func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15)) || func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12))
		{
			return true;
		}
	}
	return false;
}

bool func_38(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = fVar2 - fVar0;
	fVar9 = fVar3 - fVar1;
	fVar10 = fVar6 - fVar4;
	fVar11 = fVar7 - fVar5;
	fVar12 = -fVar9 * fVar0 - fVar4 + fVar8 * fVar1 - fVar5 / -fVar10 * fVar9 + fVar8 * fVar11;
	fVar13 = fVar10 * fVar1 - fVar5 - fVar11 * fVar0 - fVar4 / -fVar10 * fVar9 + fVar8 * fVar11;
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return true;
	}
	return false;
}

Vector3 func_39(vector3 vParam0)
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

void func_40(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (get_vehicle_engine_health(iParam0) <= 200f)
			{
				set_vehicle_engine_health(iParam0, 500f);
			}
			if (get_vehicle_petrol_tank_health(iParam0) <= 700f)
			{
				set_vehicle_engine_health(iParam0, 900f);
			}
			if (get_entity_health(iParam0) < 200)
			{
				set_vehicle_engine_health(iParam0, 500f);
			}
		}
	}
}

void func_41(int iParam0)
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
	iVar0 = func_49(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		func_44(1, iVar1, 1);
		return;
	}
	iVar2 = func_43(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_42(iVar2);
}

void func_42(int iParam0)
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

int func_43(int iParam0)
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

void func_44(int iParam0, int iParam1, int iParam2)
{
	func_45(iParam0, iParam1, iParam2, 0, 0);
}

void func_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_47(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_46();
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

int func_46()
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

bool func_47(int iParam0, int iParam1, int iParam2)
{
	if (func_48(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_48(int iParam0, int iParam1, int iParam2)
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

int func_49(int iParam0)
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

void func_50()
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

int func_51(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_53(0))
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
		if (!func_104(iParam2))
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
			func_52(iParam0, iParam4);
		}
	}
	return 2;
}

void func_52(var uParam0, int iParam1)
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

bool func_53(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_104(iParam0))
	{
		return false;
	}
	return true;
}

void func_54()
{
	if (((!does_entity_exist(iLocal_86) || is_entity_dead(iLocal_86, 0)) || !is_vehicle_driveable(iLocal_86, 1)) || is_player_wanted_level_greater(player_id(), 0))
	{
		if (does_entity_exist(iLocal_86) && is_vehicle_driveable(iLocal_86, 0))
		{
			set_vehicle_doors_locked(iLocal_86, 2);
		}
		func_97(0);
		if (func_1(sLocal_101))
		{
			clear_help(1);
		}
		return;
	}
	if (fLocal_93 < fLocal_117 * fLocal_117)
	{
		set_vehicle_doors_locked(iLocal_86, 1);
		func_59(sLocal_101);
		func_55();
	}
	else if (func_1(sLocal_101))
	{
		clear_help(1);
	}
}

void func_55()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_66(0))
		{
			func_56(0);
		}
		set_bit(&Global_2284, 2);
	}
}

void func_56(int iParam0)
{
	if (Global_14571)
	{
		func_58(0, 0);
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
	if (!func_57())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_57()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_58(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_66(0))
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

void func_59(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

bool func_60(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_61(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!is_player_playing(get_player_index()))
	{
		return false;
	}
	if (func_66(0))
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

int func_61(int iParam0)
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

void func_62(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_61(*iParam0);
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

void func_63(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_instances_of_streamed_script(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*iParam0 == -1)
		{
			func_62(iParam0);
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

bool func_64(int iParam0)
{
	return false;
	return true;
}

var func_65()
{
	return Global_68058;
}

bool func_66(int iParam0)
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

int func_67(int iParam0, int iParam1)
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

int func_68()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

bool func_69()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

int func_70(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_71()
{
	return true;
}

int func_72()
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

bool func_73(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_32();
				if (!func_34(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_80()) || Global_100201) || Global_25122) || func_79()) || func_67(8, -1)) || func_78()) || func_77()) || func_76()) || func_69()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_80()) || Global_25122) || func_79()) || func_67(8, -1)) || func_76()) || func_78()) || func_77()) || func_69()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), false)) || func_80()) || Global_100201) || Global_25122) || func_79()) || func_67(8, -1)) || func_76()) || func_78()) || func_77()) || func_69()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(player_ped_id(), false)) || func_80()) || Global_100201) || Global_25122) || func_79()) || func_67(8, -1)) || func_78()) || func_77()) || func_69()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_80() || get_player_wanted_level(player_id()) > 0) || func_67(8, -1)) || func_69()) || func_75()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_67(8, -1) || func_78()) || func_77()) || func_75()) || func_74())
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
							if ((((((((((((((is_ped_in_combat(player_ped_id(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_80()) || Global_25122) || func_79()) || func_67(8, -1)) || func_77()) || func_76()) || func_69()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || func_80()) || func_77()) || Global_100201) || Global_25122) || func_79()) || Global_36839) || func_67(8, -1)) || func_76()) || func_75()) || func_69()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), 1)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_80()) || Global_100201) || Global_25122) || func_79()) || func_67(8, -1)) || func_76()) || func_75()) || func_78()) || func_77()) || func_69())
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

var func_74()
{
	return Global_91317.f_1;
}

int func_75()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_76()
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

int func_77()
{
	return Global_91330.f_297 > 0;
}

int func_78()
{
	return Global_91330.f_296 > 0;
}

var func_79()
{
	return Global_1315913;
}

int func_80()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_81()
{
	if (_get_number_of_instances_of_streamed_script(joaat("stripperhome")) > 0)
	{
		return true;
	}
	return false;
}

var func_82()
{
	return Global_87443;
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_85(6) || func_85(7))
			{
				return 1;
			}
			else
			{
				return func_83(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_104(5))
			{
				if (func_73(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return does_blip_exist(Global_25433[iVar0 /*23*/].f_19);
}

int func_85(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_87()
{
}

void func_88(var uParam0, int iParam1)
{
	func_89(uParam0, iParam1);
}

void func_89(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_90()
{
	if (Global_35711 == 15)
	{
		return false;
	}
	return true;
}

void func_91()
{
	iLocal_48++;
}

bool func_92()
{
	return true;
}

void func_93()
{
}

bool func_94()
{
	return false;
}

bool func_95()
{
	return true;
}

bool func_96()
{
	return true;
}

void func_97(int iParam0)
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

bool func_98()
{
	vector3 vVar0;
	float fVar3;
	
	if (is_ped_injured(player_ped_id()))
	{
		return false;
	}
	vVar0 = {get_entity_coords(player_ped_id(), 1)};
	fVar3 = vdist2(vVar0, vLocal_90);
	if (fVar3 < 10f * 10f)
	{
		return true;
	}
	else if (fVar3 < 80f * 80f)
	{
		if (is_sphere_visible(vLocal_90, 5f))
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

void func_99(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_100(int iParam0, int iParam1, int iParam2)
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

bool func_101()
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

int func_102()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

int func_103(int iParam0, int iParam1)
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

int func_104(int iParam0)
{
	return func_105(iParam0, Global_35711);
}

bool func_105(int iParam0, int iParam1)
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

int func_106(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_107()
{
	StringCopy(&cLocal_53, "stunt_plane_races", 64);
	iLocal_118 = joaat("stunt");
	fLocal_119 = 154.8464f;
	fLocal_102 = 209f;
	iLocal_105 = 95;
	clear_area_of_vehicles(vLocal_114, 10f, 0, 0, 0, 0, false);
	iLocal_99 = 10;
	sLocal_101 = "PLAY_STUNT";
	fLocal_117 = 6f;
	iLocal_97 = 18000;
}

void func_108(var uParam0, int iParam1)
{
	func_109(uParam0, iParam1);
}

void func_109(var uParam0, var uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

void func_110(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_105 != 263)
		{
			func_100(iLocal_105, 0, 0);
		}
	}
	func_62(&iLocal_96);
	if (func_106(uLocal_94, 2))
	{
		func_4();
		func_108(&uLocal_94, 2);
		func_8(&iLocal_98);
	}
	iLocal_98 = -1;
	func_111();
	terminate_this_thread();
}

void func_111()
{
	if (does_entity_exist(iLocal_86))
	{
		if (!is_entity_dead(iLocal_86, 0))
		{
			set_entity_as_mission_entity(iLocal_86, true, 1);
			set_vehicle_as_no_longer_needed(&iLocal_86);
			delete_vehicle(&iLocal_86);
		}
	}
	func_108(&uLocal_94, 4);
	func_112();
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

void func_112()
{
}

