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
	char*[] sLocal_19 = new char*[13];
	char*[] sLocal_33 = new char*[13];
	int iLocal_47 = 0;
	char*[] sLocal_48 = new char*[7];
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	Vector3 vLocal_67 = 0;
	Vector3 vLocal_70 = 0;
	float fLocal_73 = 0;
	float fLocal_74 = 0;
	float fLocal_75 = 0;
	float fLocal_76 = 0;
	float fLocal_77 = 0;
	Vector3 vLocal_78 = 0;
	Vector3 vLocal_81 = 0;
	Vector3 vLocal_84 = 0;
	Vector3 vLocal_87 = 0;
	Vector3 vLocal_90 = 0;
	Vector3 vLocal_93 = 0;
	float fLocal_96 = 0;
	float fLocal_97 = 0;
	float fLocal_98 = 0;
	float fLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	float fLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	char[16] cLocal_145 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0;
	float fLocal_158 = 0;
	float fLocal_159 = 0;
	float fLocal_160 = 0;
	float fLocal_161 = 0;
	float fLocal_162 = 0;
	float fLocal_163 = 0;
	float fLocal_164 = 0;
#endregion

void main()
{
	int iVar0;
	
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
	iLocal_59 = 1;
	iLocal_62 = true;
	iLocal_63 = true;
	fLocal_73 = 0f;
	fLocal_74 = 172f;
	fLocal_77 = 0.7f;
	iLocal_137 = 1200;
	iLocal_138 = 1200;
	iLocal_139 = 166;
	fLocal_157 = 0.5f;
	fLocal_158 = 0.85f;
	fLocal_159 = 0.5f;
	fLocal_160 = -0.25f;
	fLocal_161 = 0.25f;
	fLocal_162 = 0.3f;
	fLocal_163 = 0.3f;
	fLocal_164 = 0.075f;
	network_set_script_is_safe_for_network_game();
	if (_get_ui_language_id() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_135())
	{
		Global_2562121 = 99;
		Global_2562122 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_2562121 = 0;
		Global_2562122 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_33[0] = "No_Border";
	sLocal_33[1] = "frame1";
	sLocal_33[2] = "frame2";
	sLocal_33[3] = "frame3";
	sLocal_33[4] = "frame4";
	sLocal_33[5] = "frame5";
	sLocal_33[6] = "frame6";
	sLocal_33[7] = "frame7";
	sLocal_33[8] = "frame8";
	sLocal_33[9] = "frame9";
	sLocal_33[10] = "frame10";
	sLocal_33[11] = "frame11";
	sLocal_33[12] = "frame12";
	sLocal_48[0] = "No_Expression";
	sLocal_48[1] = "mood_Aiming_1";
	sLocal_48[2] = "mood_Happy_1";
	sLocal_48[3] = "mood_smug_1";
	sLocal_48[4] = "mood_Injured_1";
	sLocal_48[5] = "mood_sulk_1";
	sLocal_48[6] = "mood_Angry_1";
	func_134();
	if (func_133(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_132();
	iLocal_112 = get_sound_id();
	if (Global_14358 == 0)
	{
		fLocal_96 = 0.207f;
		fLocal_97 = 0.158f;
		fLocal_98 = 0.207f;
		fLocal_99 = 0.335f;
	}
	else
	{
		fLocal_96 = 0.24f;
		fLocal_97 = 0.258f;
		fLocal_98 = 0.24f;
		fLocal_99 = 0.435f;
	}
	Global_16745 = 0;
	Global_16746 = 0;
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_ped_on_mount(PLAYER::PLAYER_PED_ID()))
		{
			Global_16745 = 1;
		}
		if (_is_nightvision_inactive())
		{
			Global_16745 = 1;
		}
		if (is_vehicle_driveable(set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID()), 0))
		{
			Global_16745 = 1;
		}
		if (get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			Global_16745 = 1;
		}
		if (is_ped_in_any_train(PLAYER::PLAYER_PED_ID()))
		{
			Global_16745 = 1;
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_16745 = 1;
			}
			iLocal_149 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
			if ((ENTITY::GET_ENTITY_MODEL(iLocal_149) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_149) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_149) == joaat("submersible"))
			{
				Global_16745 = 1;
			}
			else if (get_ped_in_vehicle_seat(iLocal_149, -1) == PLAYER::PLAYER_PED_ID())
			{
				if (get_entity_upright_value(iLocal_149) > 0f)
				{
					if (!Global_69489)
					{
						if (!func_131())
						{
							task_vehicle_temp_action(PLAYER::PLAYER_PED_ID(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_69489)
	{
		if (is_player_playing(player_id()))
		{
			set_player_can_do_drive_by(player_id(), 0);
		}
	}
	GAMEPLAY::CLEAR_BIT(&Global_2283, 21);
	func_130(0);
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
	if (Global_14355 == 0)
	{
		func_129();
	}
	else
	{
		iLocal_140 = unk_0x67D02A194A2FC2BD("camera_gallery");
		iLocal_141 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		while (!has_scaleform_movie_loaded(iLocal_140) || !has_scaleform_movie_loaded(iLocal_141))
		{
			wait(0);
			_0xEB2D525B57F42B40();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
		}
		if (Global_69489)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_128())
			{
				case 0:
					iLocal_144 = 2;
					break;
				
				case 2:
					iLocal_144 = 2;
					break;
				
				case 3:
					iLocal_144 = 2;
					break;
				}
		}
		func_127(iLocal_140, "DISPLAY_VIEW", to_float(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_126(iLocal_140, "CLOSE_SHUTTER");
		_push_scaleform_movie_function(Global_14394, "DISPLAY_VIEW");
		_push_scaleform_movie_function_parameter_int(16);
		_pop_scaleform_movie_function_void();
	}
	vLocal_78 = {Global_14373};
	vLocal_81 = {Global_14366[Global_14358 /*3*/]};
	Global_16746 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		GAMEPLAY::CLEAR_BIT(&Global_2285, 3);
	}
	func_124();
	_set_2d_layer(4);
	if (_0x76BF03FADBF154F5())
	{
	}
	if (Global_1617379.f_84068)
	{
	}
	if (Global_1617379.f_84070 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		wait(0);
		_0xEB2D525B57F42B40();
		CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
		if (!Global_101154.f_12741.f_81)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 13))
			{
				if (!is_help_message_being_displayed())
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_2284, 28))
					{
						if (iLocal_128 && iLocal_131 == 0)
						{
							GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2563397, 13);
							Global_101154.f_12741.f_81 = 1;
							func_123("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!is_pause_menu_active())
		{
			if (Global_1617379.f_84067 == 0 && Global_1617379.f_84068 == 0)
			{
				set_hud_component_position(15, 0f, -0.0375f);
			}
			hide_hud_component_this_frame(7);
			func_122();
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				set_ped_reset_flag(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			CONTROLS::DISABLE_CONTROL_ACTION(0, 44, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 91, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 92, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
			if (iLocal_150 == 0)
			{
				set_input_exclusive(0, Global_14386);
			}
			set_input_exclusive(0, Global_14383);
			if (is_screen_faded_out() || is_screen_fading_out())
			{
				iLocal_130 = 1;
				Global_14413.f_1 = 3;
				set_game_paused(false);
			}
			if (is_stunt_jump_in_progress())
			{
				Global_14413.f_1 = 3;
				set_game_paused(false);
			}
			if (GAMEPLAY::IS_BIT_SET(Global_2284, 3))
			{
				Global_14413.f_1 = 3;
				set_game_paused(false);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_111())
				{
					Global_14413.f_1 = 3;
					set_game_paused(false);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (is_ped_in_cover(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_14413.f_1 = 3;
					set_game_paused(false);
				}
				if ((get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1) || is_player_climbing(player_id())) || is_player_free_aiming(player_id()))
				{
					if (func_110())
					{
					}
					else
					{
						Global_14413.f_1 = 3;
						set_game_paused(false);
					}
				}
				if (is_ped_ragdoll(PLAYER::PLAYER_PED_ID()) || is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_69489 == 1)
					{
						Global_14413.f_1 = 3;
					}
				}
				if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
				{
					if (get_entity_submerged_level(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						Global_14413.f_1 = 3;
					}
				}
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_109();
					iLocal_149 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					if (get_entity_upright_value(iLocal_149) < 0f)
					{
						func_107(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!_0x1F2300CB7FA7B7F6())
							{
								func_107(0);
							}
						}
						else if (!_0x1F2300CB7FA7B7F6())
						{
							iLocal_116 = 1;
							wait(0);
							_0xEB2D525B57F42B40();
						}
					}
				}
				else if (Global_69489 == 0)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_2283, 18))
					{
						func_106();
						if ((Global_14413 == 0 || Global_14413 == 1) || Global_14413 == 2)
						{
							if (!is_ped_running_mobile_phone_task(PLAYER::PLAYER_PED_ID()))
							{
								if (get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
								{
								}
								else
								{
									Global_14413.f_1 = 3;
									set_game_paused(false);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_105();
			}
			if (Global_14413.f_1 < 4)
			{
			}
			if (iLocal_153 == 0)
			{
				if (iLocal_103 == 0)
				{
					if (iLocal_104 == 0)
					{
						if (iLocal_111 == 0)
						{
							if (Global_14413.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_103();
									if (Global_16750 == 0 && Global_16747 == 6)
									{
										clear_floating_help(0, 1);
										_0x10D373323E5B9C0D();
										iLocal_150 = 0;
										func_102();
										if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
										{
											vLocal_67 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
										}
										func_101();
										iLocal_109++;
										if (func_135())
										{
											func_127(iLocal_140, "SET_REMAINING_PHOTOS", to_float(iLocal_109), to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_127(iLocal_140, "SET_REMAINING_PHOTOS", to_float(iLocal_109), to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_100();
									}
									if (Global_16747 == 0)
									{
										iLocal_150 = 0;
										_0x10D373323E5B9C0D();
										if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
										{
											vLocal_67 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
										}
										func_99();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_100();
										if (func_135())
										{
											if (Global_2562122 == 0)
											{
												if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
												{
													func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
										{
											func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_98();
										func_97(1);
									}
								}
								else if (Global_14413.f_1 != 9)
								{
									if (Global_16746 == 1)
									{
										if (Global_16745 == 0)
										{
											func_96();
										}
									}
									else if (Global_2891 - Global_2890 > Global_2892)
									{
										if (func_95(2, Global_14381, 0))
										{
											if (func_94() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												set_game_paused(false);
												stop_sound(iLocal_112);
												iLocal_143 = 0;
												if (Global_16745 == 0)
												{
													func_101();
													Global_16745 = 1;
													clear_floating_help(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_93(0, 0);
													func_97(0);
													iLocal_115 = 0;
													func_92();
													iLocal_142 = 0;
													func_90(0, 1);
													func_127(Global_14394, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (is_help_message_being_displayed())
										{
											func_89();
											iLocal_101 = 1;
										}
									}
									else if (!is_help_message_being_displayed())
									{
										func_89();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_2283, 28))
										{
											func_89();
											iLocal_102 = 1;
										}
									}
									else if (!GAMEPLAY::IS_BIT_SET(Global_2283, 28))
									{
										func_89();
										iLocal_102 = 0;
									}
									if (Global_16745 == 1)
									{
										func_82();
									}
									else if (Global_14413.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_78();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_99();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
												{
													if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
													{
														func_126(iLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
														while (GAMEPLAY::GET_GAME_TIMER() < iLocal_135 + iLocal_137 && Global_14413.f_1 > 3)
														{
															func_122();
															func_105();
															func_77();
															_0xEB2D525B57F42B40();
															wait(0);
														}
													}
												}
												if (func_135())
												{
													if (Global_2562122 == 0)
													{
														if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
														{
															func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
												{
													func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_105();
												func_122();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_100();
												iLocal_136 = 0;
												func_126(iLocal_140, "OPEN_SHUTTER");
											}
											func_98();
											func_97(1);
											func_76();
										}
									}
									if (iLocal_143 == 1)
									{
										func_73();
									}
									if (iLocal_129)
									{
										if (timerb() > 500)
										{
											iLocal_128 = 1;
											iLocal_129 = 0;
											GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 18);
											if (Global_16745 == 0)
											{
												func_90(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_16745 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_16748 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_77();
										}
									}
									else if (iLocal_124 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_14413.f_1 > 3)
					{
						if (Global_16746 == 1)
						{
							if (Global_16745 == 0)
							{
								func_96();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_155 == 1)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 2)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 6)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 3)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 7)
				{
					if (is_xbox360_version() || is_durango_version())
					{
						_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (is_ps3_version() || is_orbis_version())
					{
						_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", 0, -1, "", "", 1);
					}
				}
				if (iLocal_155 == 4)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 5)
				{
					iVar0 = _0x9614B71F8ADB982B();
					switch (iVar0)
					{
						case -1:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						case 0:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						case 1:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						case 2:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						default:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", 0, -1, "", "", 1);
							break;
						}
				}
				if (iLocal_155 == 0)
				{
				}
				if (iLocal_155 == 2 || iLocal_155 == 3)
				{
					if (is_control_just_pressed(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
					}
					if (is_control_just_pressed(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (is_control_just_released(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_154 = 0;
							_0x9E778248D6685FE0("Gallery");
							_0x75D3691713C3B05A();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (is_orbis_version())
					{
						if (is_control_just_pressed(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (is_control_just_pressed(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
						iLocal_111 = 0;
					}
					if (!is_orbis_version())
					{
						if (is_control_just_pressed(2, Global_14385))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							if (GAMEPLAY::IS_BIT_SET(Global_2284, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = GAMEPLAY::GET_GAME_TIMER();
							display_system_signin_ui(1);
						}
					}
				}
				else if (is_control_just_pressed(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_90(0, 1);
				}
			}
		}
		iLocal_108 = GAMEPLAY::GET_GAME_TIMER();
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			Global_16745 = 0;
			Global_16746 = 0;
			Global_16748 = 0;
			set_scaleform_movie_as_no_longer_needed(&iLocal_140);
			set_scaleform_movie_as_no_longer_needed(&iLocal_141);
			set_game_paused(false);
			if (Global_14573 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			}
			clear_floating_help(0, 1);
			set_player_can_do_drive_by(player_id(), 1);
			GAMEPLAY::CLEAR_BIT(&Global_2285, 3);
			GAMEPLAY::CLEAR_BIT(&Global_2563397, 3);
			reset_hud_component_values(15);
			Global_16749 = 1;
			stop_sound(iLocal_112);
			release_sound_id(iLocal_112);
			_0x10D373323E5B9C0D();
			func_92();
			_0xA2CCBE62CD4C91A4(0);
			unk_0x375A706A5C2FD084(0);
			_0x1B0B4AEED5B9B41C(1f);
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				set_facial_idle_anim_override(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
				clear_facial_idle_anim_override(PLAYER::PLAYER_PED_ID());
			}
			if (Global_2562122 > 0 && Global_2562122 < 13)
			{
				set_streamed_texture_dict_as_no_longer_needed(sLocal_33[Global_2562122]);
			}
			GAMEPLAY::CLEAR_BIT(&Global_2283, 18);
			func_90(0, 1);
			if (func_133(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			terminate_this_thread();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			_set_phone_lean(1);
		}
		else if (Global_14413.f_1 > 3)
		{
			_set_phone_lean(0);
		}
	}
}

bool func_2()
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

bool func_3()
{
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 3) || Global_14413.f_1 == 0) || Global_14357 == 1)
	{
		Global_14400 = 1;
		return true;
	}
	return false;
}

void func_4()
{
	iLocal_106 = _0xF5BED327CEA362B1(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = _0x473151EBC762C6DA();
			iLocal_110 = _0xDC54A7AF8B3A14EF();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (has_scaleform_movie_loaded(iLocal_140))
					{
						if (func_135())
						{
							if (Global_2562122 == 0)
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
								{
									func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_127(iLocal_140, "SET_REMAINING_PHOTOS", to_float(iLocal_109), to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
							{
								func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_127(iLocal_140, "SET_REMAINING_PHOTOS", to_float(iLocal_109), to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (has_scaleform_movie_loaded(iLocal_140))
				{
					func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_127(iLocal_140, "SET_REMAINING_PHOTOS", to_float(iLocal_109), to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			_0x10D373323E5B9C0D();
			break;
		
		case 1:
			if (!_0xD422FCC5F239A915())
			{
				_0xABA17D7CE615ADBF("CELL_SPINNER2");
				_0xBD12F8228410D9B4(1);
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Global_2284, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = false;
				iLocal_110 = false;
			}
			else
			{
				Global_14413.f_1 = 3;
				Global_16749 = 1;
			}
			_0x10D373323E5B9C0D();
			break;
	}
}

void func_5()
{
	if (func_95(2, Global_14382, 0))
	{
		func_1(0);
		if (GAMEPLAY::IS_BIT_SET(Global_2284, 28))
		{
			set_game_paused(false);
			settimerb(0);
			func_102();
			iLocal_127 = 0;
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_67 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
			}
			func_101();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2284, 14))
			{
				func_123("CELL_299", -1);
			}
			else
			{
				func_101();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_90(1, 1);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2283, 22))
	{
		func_1(0);
		while (timera() < 2000)
		{
			wait(0);
			func_122();
			_0xEB2D525B57F42B40();
			func_77();
			func_109();
			func_105();
		}
		set_game_paused(false);
		func_102();
		settimerb(0);
		iLocal_127 = 0;
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			vLocal_67 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
		}
		func_100();
		func_101();
	}
	if (func_95(2, Global_14386, 0))
	{
		func_1(0);
		if (func_94() || GAMEPLAY::IS_BIT_SET(Global_2284, 28))
		{
		}
		else
		{
			set_game_paused(false);
			settimerb(0);
			iLocal_136 = 1;
			func_102();
			iLocal_127 = 0;
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_67 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
			}
			func_101();
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2283, 28))
	{
		if (func_95(2, Global_14385, 0))
		{
			func_1(0);
			set_game_paused(false);
			_0x1072F115DAB0717E(0, 0);
			wait(0);
			_0xEB2D525B57F42B40();
			func_122();
			wait(0);
			_0xEB2D525B57F42B40();
			func_122();
			_0xD801CC02177FA3F1();
			_0x6A12D88881435DCA();
			Global_16749 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_90(0, 1);
			Global_16745 = 1;
			clear_floating_help(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_67 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 9);
			iLocal_142 = 0;
			func_127(Global_14394, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_14402, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		_move_finger(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_16750 = 1;
	clear_floating_help(0, 1);
}

bool func_9()
{
	if (iLocal_107 == iLocal_108)
	{
		if (iLocal_105)
		{
			iLocal_105 = 1;
		}
	}
	if (Global_14413.f_1 < 4)
	{
		return false;
	}
	if (iLocal_109 == iLocal_110 || iLocal_109 > iLocal_110)
	{
		iLocal_155 = 1;
		iLocal_152 = 2;
		return false;
	}
	return true;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (_is_input_disabled(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_131)
	{
		func_68();
		func_64();
		func_63();
		fLocal_73 = get_gameplay_cam_relative_pitch();
		fLocal_74 = get_gameplay_cam_relative_heading();
		if (iLocal_133 == 0)
		{
			if (is_control_pressed(2, iVar0) && !is_control_pressed(2, iVar1))
			{
				iLocal_133 = 1;
				func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 28))
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 177, true), "CELL_281");
					func_61(iLocal_141, "SET_DATA_SLOT", 1f, _get_control_action_name(2, 179, true), "CELL_287");
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 176, true), "CELL_280");
					func_61(iLocal_141, "SET_DATA_SLOT", 1f, _get_control_action_name(0, 177, true), "CELL_281");
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_60();
				_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
				_push_scaleform_movie_function_parameter_float(fLocal_77);
				_pop_scaleform_movie_function_void();
				func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!is_control_pressed(2, iVar0) || is_control_pressed(2, iVar1))
		{
			iLocal_133 = 0;
			func_100();
		}
		if (iLocal_134 == 0)
		{
			if (is_control_pressed(2, iVar1) && !is_control_pressed(2, iVar0))
			{
				iLocal_134 = 1;
				func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 28))
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 177, true), "CELL_281");
					func_61(iLocal_141, "SET_DATA_SLOT", 1f, _get_control_action_name(2, 179, true), "CELL_287");
				}
				else
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 176, true), "CELL_280");
					func_61(iLocal_141, "SET_DATA_SLOT", 1f, _get_control_action_name(0, 177, true), "CELL_281");
				}
				func_59();
				_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
				_push_scaleform_movie_function_parameter_float(fLocal_77);
				_pop_scaleform_movie_function_void();
				func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!is_control_pressed(2, iVar1) || is_control_pressed(2, iVar0))
		{
			iLocal_134 = 0;
			func_100();
		}
	}
	else
	{
		enable_control_action(0, 2, 1);
		enable_control_action(0, 1, 1);
	}
	if (_0x6CD79468A1E595C6(2))
	{
		func_100();
	}
	func_109();
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		set_ped_reset_flag(PLAYER::PLAYER_PED_ID(), 200, true);
	}
	if (is_control_just_pressed(2, 183) && iLocal_156 == 0)
	{
		play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
				{
					GAMEPLAY::CLEAR_BIT(&Global_2563397, 2);
					if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
					{
						func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2563397, 2);
					func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			_push_scaleform_movie_function(iLocal_140, "SET_FOCUS_LOCK");
			_push_scaleform_movie_function_parameter_bool(false);
			func_58("CELL_FOCUS");
			_push_scaleform_movie_function_parameter_bool(true);
			_pop_scaleform_movie_function_void();
		}
		if (!func_57(14))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2563397, 10))
			{
				if ((Global_69489 == 0 && _get_number_of_instances_of_streamed_script(joaat("pi_menu")) > 0) && func_56())
				{
					_push_scaleform_movie_function(iLocal_140, "SET_FOCUS_LOCK");
					_push_scaleform_movie_function_parameter_bool(true);
					_begin_text_component("CELL_ACTTL");
					add_text_component_substring_player_name(_get_label_text(&Global_2564111));
					_end_text_component();
					_push_scaleform_movie_function_parameter_bool(false);
					_pop_scaleform_movie_function_void();
					GAMEPLAY::CLEAR_BIT(&Global_2563397, 10);
				}
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_2563397, 10))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2563397, 10);
		}
		iLocal_66 = GAMEPLAY::GET_GAME_TIMER();
		if (iLocal_66 - iLocal_65 > 1500)
		{
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_70 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
				if (get_distance_between_coords(vLocal_70, vLocal_67, 1) > 5f)
				{
					Global_14413.f_1 = 3;
					set_game_paused(false);
				}
				iLocal_65 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!is_control_pressed(0, 182))
		{
			play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
			iLocal_132 = 0;
			_push_scaleform_movie_function(iLocal_140, "SET_FOCUS_LOCK");
			_push_scaleform_movie_function_parameter_bool(false);
			func_58("CELL_FOCUS");
			_push_scaleform_movie_function_parameter_bool(true);
			_pop_scaleform_movie_function_void();
		}
	}
	else if (is_control_pressed(0, 182))
	{
		play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
		iLocal_132 = 1;
		if (!func_57(14))
		{
			_push_scaleform_movie_function(iLocal_140, "SET_FOCUS_LOCK");
			_push_scaleform_movie_function_parameter_bool(true);
			func_58("CELL_FOCUS");
			_push_scaleform_movie_function_parameter_bool(true);
			_pop_scaleform_movie_function_void();
		}
	}
	if (func_135())
	{
		if (is_control_just_pressed(2, 186) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
					{
						play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
						set_facial_idle_anim_override(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						clear_facial_idle_anim_override(PLAYER::PLAYER_PED_ID());
						if (Global_14413 == 0)
						{
							iVar4 = 0;
							iVar2 = get_ped_prop_index(PLAYER::PLAYER_PED_ID(), false);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = get_ped_prop_index(PLAYER::PLAYER_PED_ID(), true);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_57 == 2 || iLocal_57 == 3) || iLocal_57 == 4) || iLocal_57 == 8) || iLocal_57 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_57 == 3)
										{
											set_facial_idle_anim_override(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									set_facial_idle_anim_override(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								set_facial_idle_anim_override(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							set_facial_idle_anim_override(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
					{
						set_facial_idle_anim_override(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						clear_facial_idle_anim_override(PLAYER::PLAYER_PED_ID());
						play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
					}
				}
			}
		}
		if (is_control_just_pressed(2, 185) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				if (iLocal_62 == 1)
				{
					play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (are_strings_equal(sLocal_19[Global_2562121], "phone_cam12DUMMY"))
						{
						}
						else
						{
							_0xA2CCBE62CD4C91A4(1);
							unk_0x375A706A5C2FD084(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						_0xA2CCBE62CD4C91A4(0);
						unk_0x375A706A5C2FD084(0);
					}
				}
			}
			else if (iLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					_0xA2CCBE62CD4C91A4(1);
					unk_0x375A706A5C2FD084(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					_0xA2CCBE62CD4C91A4(0);
					unk_0x375A706A5C2FD084(0);
				}
			}
		}
	}
	if (iLocal_59 == 1)
	{
		if (is_control_just_pressed(0, 172) && iLocal_156 == 0)
		{
			if (func_135())
			{
				Global_2562122++;
				play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
			}
			if (Global_2562122 == 13)
			{
				func_97(0);
				_0x1B0B4AEED5B9B41C(1f);
				set_streamed_texture_dict_as_no_longer_needed(sLocal_33[Global_2562122 - 1]);
				Global_2562122 = 0;
				func_55();
				if (iLocal_47 == 1)
				{
					GAMEPLAY::CLEAR_BIT(&Global_2563397, 2);
					iLocal_47 = 0;
					func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2562122 > 0 && Global_2562122 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				request_streamed_texture_dict(sLocal_33[Global_2562122], false);
			}
		}
	}
	if (Global_2562122 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (has_streamed_texture_dict_loaded(sLocal_33[Global_2562122]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!_0xBCEDB009461DA156())
				{
					func_97(1);
				}
				if (iLocal_47 == 0)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
					{
						iLocal_47 = 1;
					}
				}
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2563397, 2);
				func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				_0x1B0B4AEED5B9B41C(0.25f);
				_0x27FEB5254759CDE3(sLocal_33[Global_2562122], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_2562122 == 1 || Global_2562122 == 3)
			{
			}
			if (Global_2562122 == 2 || Global_2562122 == 4)
			{
			}
		}
	}
	if (is_control_just_pressed(0, 173) && iLocal_156 == 0)
	{
		if (func_135())
		{
			func_92();
			Global_2562121++;
			play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
		}
		if (Global_2562121 == 13)
		{
			Global_2562121 = 0;
		}
		if (Global_2562121 == 0)
		{
			if (func_135())
			{
				func_92();
			}
		}
		else
		{
			func_98();
		}
		func_54();
	}
	if (is_disabled_control_just_pressed(0, 184) && iLocal_156 == 0)
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
			{
				vLocal_67 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
				play_sound_frontend(-1, "Menu_Navigate", &Global_14402, 1);
				func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_126(iLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
				while (GAMEPLAY::GET_GAME_TIMER() < iLocal_135 + iLocal_139 && Global_14413.f_1 > 3)
				{
					func_122();
					func_105();
					func_77();
					_0xEB2D525B57F42B40();
					wait(0);
				}
				if (iLocal_131 == 0)
				{
					stop_sound(iLocal_112);
					iLocal_131 = 1;
					func_53(1);
					func_52();
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2285, 3);
					iLocal_65 = GAMEPLAY::GET_GAME_TIMER();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_53(0);
					iLocal_131 = 0;
					GAMEPLAY::CLEAR_BIT(&Global_2285, 3);
				}
				iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
				while (GAMEPLAY::GET_GAME_TIMER() < iLocal_135 + iLocal_137 && Global_14413.f_1 > 3)
				{
					func_122();
					func_105();
					func_77();
					_0xEB2D525B57F42B40();
					wait(0);
				}
				func_126(iLocal_140, "OPEN_SHUTTER");
				if (func_135())
				{
					if (Global_2562122 == 0)
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
						{
							func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
				{
					func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_105();
				func_122();
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 28))
				{
					StringCopy(&cLocal_145, "CELL_296", 16);
					func_50();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_131 == 0)
	{
		if (iLocal_113 == 0)
		{
			if (is_control_just_pressed(0, 40) || is_control_just_pressed(0, 41))
			{
				fLocal_114 = _get_gameplay_cam_zoom();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (has_sound_finished(iLocal_112))
					{
						play_sound_frontend(iLocal_112, "Camera_Zoom", &Global_14402, 1);
					}
				}
				else
				{
					stop_sound(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (is_control_pressed(0, 40) || is_control_pressed(0, 41))
		{
			fLocal_114 = _get_gameplay_cam_zoom();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (has_sound_finished(iLocal_112))
				{
					play_sound_frontend(iLocal_112, "Camera_Zoom", &Global_14402, 1);
				}
			}
			else
			{
				stop_sound(iLocal_112);
			}
		}
		else
		{
			stop_sound(iLocal_112);
		}
	}
	if (func_95(2, Global_14382, 0))
	{
		fLocal_75 = get_gameplay_cam_relative_pitch();
		fLocal_76 = get_gameplay_cam_relative_heading();
		_0x1072F115DAB0717E(0, 0);
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 21);
		stop_sound(iLocal_112);
		iLocal_127 = 1;
		func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(iLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		play_sound_frontend(-1, "Camera_Shoot", &Global_14402, 1);
		func_126(iLocal_140, "CLOSE_SHUTTER");
		vLocal_84 = {-90.3f, 0f, 90f};
		set_mobile_phone_rotation(vLocal_84, 0);
		if (!func_135())
		{
			func_92();
		}
		Global_16748 = 1;
		clear_floating_help(0, 1);
		while (Global_16747 < 6 && Global_14413.f_1 > 3)
		{
			func_122();
			func_105();
			func_77();
			func_109();
			_0xEB2D525B57F42B40();
			wait(0);
		}
		cell_cam_activate(0, 0);
		if (Global_14355)
		{
			func_1(1);
		}
		iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
		while (GAMEPLAY::GET_GAME_TIMER() < iLocal_135 + iLocal_138 && Global_14413.f_1 > 3)
		{
			func_122();
			func_105();
			func_77();
			_0xEB2D525B57F42B40();
			wait(0);
		}
		settimera(0);
		func_126(iLocal_140, "OPEN_SHUTTER");
		GAMEPLAY::CLEAR_BIT(&Global_2283, 21);
		func_100();
		if (Global_14413.f_1 > 3)
		{
			if (Global_69489)
			{
				func_20(1079, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						stat_increment(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						stat_increment(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						stat_increment(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_97(0);
		}
		func_105();
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2283, 28))
	{
		if (func_95(2, Global_14385, 0))
		{
			_0x1072F115DAB0717E(0, 0);
			wait(0);
			_0xEB2D525B57F42B40();
			func_122();
			wait(0);
			_0xEB2D525B57F42B40();
			func_122();
			_0xD801CC02177FA3F1();
			_0x6A12D88881435DCA();
			Global_16749 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_16745 = 1;
			clear_floating_help(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_67 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 9);
			set_game_paused(false);
			iLocal_142 = 0;
			func_127(Global_14394, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

auto func_11()
{
	func_12();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_15(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_14(PLAYER::PLAYER_PED_ID());
			if (func_13(iVar0) && (!func_57(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_13(Global_101154.f_1826.f_539.f_3549))
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

int func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_18(iParam0, iParam1))
	{
		uVar0 = func_17();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_18(int iParam0, auto uParam1)
{
	if (Global_1315901)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_19()
{
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 1;
	iLocal_125 = 0;
	Global_14350 = {Global_14366[Global_14358 /*3*/]};
	func_90(0, 1);
	func_93(0, 0);
	func_97(0);
	iLocal_115 = 0;
	func_92();
	if (!GAMEPLAY::IS_BIT_SET(Global_2284, 28))
	{
		if (_0x76BF03FADBF154F5() == 0)
		{
			if (is_xbox360_version())
			{
				if (iLocal_117 == 0)
				{
					iLocal_117 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 += iParam1;
	if (!func_23(iParam0))
	{
		func_22(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_25(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_25(uParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_25(uParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_25(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_25(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_25(uParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_25(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_25(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_25(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_25(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_25(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_25(uParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_25(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_25(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_25(uParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_25(uParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_25(uParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_25(uParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_25(uParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_25(uParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_25(uParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_25(uParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_25(uParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_25(uParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_25(uParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_25(uParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

bool func_23(int iParam0)
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

int func_24(auto uParam0, auto uParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_25(uParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

auto func_26()
{
	return Global_1312747;
}

void func_27()
{
	if (iLocal_156 == 1)
	{
		func_49();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(iLocal_141, "SET_DATA_SLOT", 1f, _get_control_action_name(0, 177, true), "CELL_281");
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 176, true), "CELL_280");
		if (iLocal_131)
		{
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) || get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (_is_input_disabled(2) || is_orbis_version())
					{
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_69489 == 0 && _get_number_of_instances_of_streamed_script(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (_is_input_disabled(2) || is_orbis_version())
					{
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(2, 183, true), "CELL_GRID");
					func_61(iLocal_141, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_135())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (iLocal_62)
							{
								func_61(iLocal_141, "SET_DATA_SLOT", 8f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (iLocal_62)
						{
							func_61(iLocal_141, "SET_DATA_SLOT", 7f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) || get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					func_61(iLocal_141, "SET_DATA_SLOT", 4f, _get_control_action_name(2, 183, true), "CELL_GRID");
					func_61(iLocal_141, "SET_DATA_SLOT", 5f, _get_control_action_name(0, 39, true), "CELL_284");
					if (func_135())
					{
						func_46(6f);
						func_45(7f);
						if (iLocal_63)
						{
							func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(0, 182, true), "CELL_FOCUS");
						}
						func_61(iLocal_141, "SET_DATA_SLOT", 8f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(iLocal_141, "SET_DATA_SLOT", 8f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (_is_input_disabled(2) || is_orbis_version())
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_1NP_XB");
				}
				if (!get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 4f, _get_control_action_name(2, 183, true), "CELL_GRID");
					func_61(iLocal_141, "SET_DATA_SLOT", 5f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					func_61(iLocal_141, "SET_DATA_SLOT", 6f, _get_control_action_name(0, 39, true), "CELL_284");
					if (func_135())
					{
						func_46(7f);
						func_45(8f);
						if (iLocal_63)
						{
							func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(0, 182, true), "CELL_FOCUS");
						}
						func_61(iLocal_141, "SET_DATA_SLOT", 9f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(iLocal_141, "SET_DATA_SLOT", 5f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
		_push_scaleform_movie_function_parameter_float(fLocal_77);
		_pop_scaleform_movie_function_void();
		func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(Vector3 fParam0)
{
	func_61(iLocal_141, "SET_DATA_SLOT", fParam0, _get_control_action_name(0, 174, true), "CELL_ACTION");
}

bool func_29(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_44(Global_2493570, Global_2493571))
		{
			if (iParam0 == 0 || !func_30(Global_2493570, Global_2493571, 0, 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	return func_31(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, iParam2, iParam3, iParam4);
}

bool func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	auto uVar0;
	auto uVar4;
	auto uVar8;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	uVar0 = 3;
	uVar4 = 3;
	uVar8 = 3;
	if (iParam1 == 0)
	{
		iVar15 = 3;
	}
	else if (iParam3)
	{
		iVar15 = 1;
	}
	else if (iParam4)
	{
		iVar15 = 2;
	}
	else
	{
		iVar15 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar4, &uVar8, iVar15, iParam5);
	if (!is_entity_dead(iParam0, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar12 = func_38(iParam0);
			if (!iVar12 == -1)
			{
				if (func_37(&uVar0, iVar12))
				{
					return true;
				}
			}
		}
		else
		{
			iVar13 = func_36(iParam0);
			if (!iVar13 == -1)
			{
				if (func_34(&uVar4, iVar13))
				{
					return true;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar14 = func_33(iParam0);
			if (!iVar14 == 0)
			{
				if (func_32(&uVar8, iVar14))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_32(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor(to_float(iParam1) / 32f);
	if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0], iParam1 - iVar0 * 32))
	{
		return true;
	}
	return false;
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = get_ped_drawable_variation(iParam0, true);
	return iVar0;
}

int func_34(auto uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

bool func_35(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor(to_float(iParam1) / 32f);
	if (GAMEPLAY::IS_BIT_SET(*uParam0[iVar0], iParam1 - iVar0 * 32))
	{
		return true;
	}
	return false;
}

int func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = get_ped_prop_index(iParam0, false);
	return iVar0;
}

int func_37(auto uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = get_ped_prop_index(iParam0, false);
	return iVar0;
}

void func_39(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (iParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 47, 1);
						func_41(uParam2, 48, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 5, 1);
					func_40(uParam4, 6, 1);
					func_40(uParam4, 7, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 33, 1);
					break;
				
				case 1:
					if (iParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 62, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 10:
					func_40(uParam4, 28, 1);
					break;
				
				case 12:
					if (iParam6)
					{
						func_43(uParam3, 3, 1);
						func_43(uParam3, 4, 1);
						func_43(uParam3, 6, 1);
						func_43(uParam3, 10, 1);
						func_43(uParam3, 54, 1);
						func_43(uParam3, 55, 1);
						func_43(uParam3, 56, 1);
						func_43(uParam3, 13, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_43(uParam3, 20, 1);
						func_43(uParam3, 26, 1);
						func_43(uParam3, 27, 1);
						func_43(uParam3, 32, 1);
						func_43(uParam3, 33, 1);
						func_43(uParam3, 37, 1);
						func_43(uParam3, 39, 1);
						func_41(uParam2, 3, 1);
						func_41(uParam2, 4, 1);
						func_41(uParam2, 6, 1);
						func_41(uParam2, 8, 1);
						func_41(uParam2, 9, 1);
						func_41(uParam2, 10, 1);
						func_41(uParam2, 53, 1);
						func_41(uParam2, 56, 1);
						func_41(uParam2, 55, 1);
						func_41(uParam2, 13, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 62, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 36, 1);
						func_41(uParam2, 38, 1);
						func_41(uParam2, 55, 1);
					}
					func_40(uParam4, 2, 1);
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 32, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 15:
					if (iParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 62, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
						func_41(uParam2, 19, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 6, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 32, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 18:
					if (iParam6)
					{
						func_43(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_40(uParam4, 9, 1);
					break;
				
				case 19:
					if (iParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 47, 1);
						func_41(uParam2, 48, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 62, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 8, 1);
					break;
				
				case 21:
					if (iParam6)
					{
						func_43(uParam3, 3, 1);
						func_43(uParam3, 7, 1);
						func_43(uParam3, 0, 1);
						func_43(uParam3, 12, 1);
						func_43(uParam3, 13, 1);
						func_43(uParam3, 15, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 17, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_43(uParam3, 20, 1);
						func_43(uParam3, 21, 1);
						func_43(uParam3, 25, 1);
						func_43(uParam3, 26, 1);
						func_43(uParam3, 27, 1);
						func_43(uParam3, 30, 1);
						func_43(uParam3, 31, 1);
						func_43(uParam3, 32, 1);
						func_43(uParam3, 33, 1);
						func_43(uParam3, 39, 1);
						func_43(uParam3, 37, 1);
						func_43(uParam3, 55, 1);
						func_41(uParam2, 0, 1);
						func_41(uParam2, 2, 1);
						func_41(uParam2, 3, 1);
						func_41(uParam2, 4, 1);
						func_41(uParam2, 6, 1);
						func_41(uParam2, 7, 1);
						func_41(uParam2, 8, 1);
						func_41(uParam2, 11, 1);
						func_41(uParam2, 13, 1);
						func_41(uParam2, 15, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 47, 1);
						func_41(uParam2, 48, 1);
						func_41(uParam2, 17, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 62, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
						func_41(uParam2, 19, 1);
						func_41(uParam2, 20, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 22, 1);
						func_41(uParam2, 54, 1);
						func_41(uParam2, 24, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 30, 1);
						func_41(uParam2, 31, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 38, 1);
						func_41(uParam2, 36, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							break;
						
						case 1:
							func_43(uParam3, 4, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 31, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 62, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 43, 1);
							func_40(uParam4, 29, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							break;
						
						case 2:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							break;
					}
					break;
				
				case 29:
					switch (iParam5)
					{
						case 0:
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
					}
					break;
				
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 6, 1);
							func_43(uParam3, 10, 1);
							func_43(uParam3, 54, 1);
							func_43(uParam3, 55, 1);
							func_43(uParam3, 56, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_43(uParam3, 55, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 53, 1);
							func_41(uParam2, 56, 1);
							func_41(uParam2, 55, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 55, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 6, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 19, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_43(uParam3, 55, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 53, 1);
							func_41(uParam2, 56, 1);
							func_41(uParam2, 55, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 55, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 4, 1);
							break;
						
						case 1:
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							break;
						
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 39, 1);
							func_43(uParam3, 37, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 36, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 1, 1);
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 5, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 10, 1);
							func_43(uParam3, 54, 1);
							func_43(uParam3, 55, 1);
							func_43(uParam3, 56, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 1, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 5, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 53, 1);
							func_41(uParam2, 56, 1);
							func_41(uParam2, 55, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 12, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 14, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 23, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 29, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 33, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 55, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 32, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 8:
				case 10:
				case 12:
				case 14:
				case 18:
				case 22:
				case 25:
				case 29:
				case 33:
				case 19:
				case 21:
					func_39(2, 29, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 30, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_40(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = floor(to_float(iParam1) / 32f);
	if (iParam2)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0[iVar0], iParam1 - 32 * iVar0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(uParam0[iVar0], iParam1 - iVar0 * 32);
	}
}

void func_41(auto uParam0, int iParam1, int iParam2)
{
	func_42(uParam0, iParam1, iParam2);
}

void func_42(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = floor(to_float(iParam1) / 32f);
	if (iParam2)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0[iVar0], iParam1 - iVar0 * 32);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(uParam0[iVar0], iParam1 - iVar0 * 32);
	}
}

void func_43(auto uParam0, int iParam1, int iParam2)
{
	func_42(uParam0, iParam1, iParam2);
}

bool func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return true;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
					return true;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return true;
					break;
			}
			break;
	}
	return false;
}

void func_45(Vector3 fParam0)
{
	func_61(iLocal_141, "SET_DATA_SLOT", fParam0, _get_control_action_name(0, 172, true), "CELL_BORDER");
}

void func_46(Vector3 fParam0)
{
	if (Global_1725136 == 1)
	{
		fParam0 = -1f;
	}
	func_61(iLocal_141, "SET_DATA_SLOT", fParam0, _get_control_action_name(0, 173, true), "CELL_FILTER");
}

void func_47()
{
	if (_is_input_disabled(2) || is_orbis_version())
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(0, 183, true), "CELL_GRID");
	func_61(iLocal_141, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (iLocal_62)
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 9f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
	}
	if (!func_57(14))
	{
		if ((Global_69489 == 0 && _get_number_of_instances_of_streamed_script(joaat("pi_menu")) > 0) && func_56())
		{
			_push_scaleform_movie_function(iLocal_140, "SET_FOCUS_LOCK");
			_push_scaleform_movie_function_parameter_bool(true);
			_begin_text_component("CELL_ACTTL");
			add_text_component_substring_player_name(_get_label_text(&Global_2564111));
			_end_text_component();
			_push_scaleform_movie_function_parameter_bool(false);
			_pop_scaleform_movie_function_void();
		}
	}
}

void func_48(Vector3 fParam0)
{
	func_61(iLocal_141, "SET_DATA_SLOT", fParam0, _get_control_action_name(0, 175, true), "CELL_ACCYC");
}

void func_49()
{
	func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(0, 39, true), "CELL_284");
	func_61(iLocal_141, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_61(iLocal_141, "SET_DATA_SLOT", 1f, _get_control_action_name(0, 177, true), "CELL_281");
	func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 176, true), "CELL_280");
	_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
	_push_scaleform_movie_function_parameter_float(fLocal_77);
	_pop_scaleform_movie_function_void();
	func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_50()
{
	if (iLocal_156 == 1)
	{
		func_51();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 177, true), "CELL_281");
		func_61(iLocal_141, "SET_DATA_SLOT", 1f, _get_control_action_name(2, 179, true), "CELL_287");
		if (iLocal_131)
		{
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) || get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (_is_input_disabled(2) || is_orbis_version())
					{
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_69489 == 0 && _get_number_of_instances_of_streamed_script(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (_is_input_disabled(2) || is_orbis_version())
					{
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(2, 183, true), "CELL_GRID");
					func_61(iLocal_141, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_135())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (iLocal_62)
							{
								func_61(iLocal_141, "SET_DATA_SLOT", 8f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (iLocal_62)
						{
							func_61(iLocal_141, "SET_DATA_SLOT", 7f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) || get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(2, 183, true), "CELL_GRID");
					func_61(iLocal_141, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					func_61(iLocal_141, "SET_DATA_SLOT", 5f, _get_control_action_name(0, 39, true), "CELL_284");
					if (func_135())
					{
						func_46(6f);
						func_45(7f);
						func_61(iLocal_141, "SET_DATA_SLOT", 8f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(iLocal_141, "SET_DATA_SLOT", 5f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else if (!get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (_is_input_disabled(2) || is_orbis_version())
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_1NP_XB");
				}
				func_61(iLocal_141, "SET_DATA_SLOT", 4f, _get_control_action_name(2, 183, true), "CELL_GRID");
				func_61(iLocal_141, "SET_DATA_SLOT", 5f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
				func_61(iLocal_141, "SET_DATA_SLOT", 6f, _get_control_action_name(0, 39, true), "CELL_284");
				if (func_135())
				{
					func_46(7f);
					func_45(8f);
					if (iLocal_63)
					{
						func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(0, 182, true), "CELL_FOCUS");
					}
					func_61(iLocal_141, "SET_DATA_SLOT", 9f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
				}
				else
				{
					if (_is_input_disabled(2) || is_orbis_version())
					{
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_1NP_XB");
					}
					func_61(iLocal_141, "SET_DATA_SLOT", 3f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_135())
					{
						func_46(4f);
						func_45(5f);
						func_61(iLocal_141, "SET_DATA_SLOT", 6f, _get_control_action_name(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
		_push_scaleform_movie_function_parameter_float(fLocal_77);
		_pop_scaleform_movie_function_void();
		func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()
{
	func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(0, 39, true), "CELL_284");
	func_61(iLocal_141, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_61(iLocal_141, "SET_DATA_SLOT", 1f, _get_control_action_name(2, 179, true), "CELL_287");
	func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 177, true), "CELL_281");
	_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
	_push_scaleform_movie_function_parameter_float(fLocal_77);
	_pop_scaleform_movie_function_void();
	func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()
{
	if (iLocal_131)
	{
		set_gameplay_cam_relative_pitch(fLocal_73, 1f);
		set_gameplay_cam_relative_heading(fLocal_74);
	}
}

void func_53(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_1617379.f_84067 == 1)
	{
	}
	else if (Global_1617379.f_84068 == 1)
	{
	}
	else
	{
		_0x015C49A93E3E086E(iParam0);
	}
}

void func_54()
{
	if (iLocal_61 == 1)
	{
		if (are_strings_equal(sLocal_19[Global_2562121], "phone_cam12DUMMY"))
		{
			_0xA2CCBE62CD4C91A4(0);
			unk_0x375A706A5C2FD084(0);
		}
		else
		{
			_0xA2CCBE62CD4C91A4(1);
			unk_0x375A706A5C2FD084(1);
		}
	}
}

void func_55()
{
	func_127(iLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_135())
	{
		if (Global_1725136 == 0)
		{
			set_timecycle_modifier("phone_cam");
		}
	}
}

bool func_56()
{
	if (func_57(14))
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[2 /*29*/])
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
	return true;
}

int func_57(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_58(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_59()
{
	if (_is_input_disabled(2) || is_orbis_version())
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (_is_input_disabled(2))
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(0, 30, true), "CELL_RT_RSTICK");
		func_61(iLocal_141, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(0, 1, true), "CELL_RT_RSTICK");
		func_61(iLocal_141, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_60()
{
	if (_is_input_disabled(2) || is_orbis_version())
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 3f, _get_control_action_name(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_61(iLocal_141, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(0, 1, true), "CELL_LT_RSTICK");
	if (func_57(14))
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 5f, _get_control_action_name(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 5f, _get_control_action_name(0, 39, true), "CELL_LT_LSTICKZ");
		func_61(iLocal_141, "SET_DATA_SLOT", 6f, _get_control_action_name(2, 30, true), "CELL_LT_LSTICK");
	}
}

void func_61(int iParam0, char* sParam1, Vector3 fParam2, char* sParam3, char* sParam4)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_push_scaleform_movie_function_parameter_int(round(fParam2));
	if (!is_string_null_or_empty(sParam3))
	{
		func_62(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_58(sParam4);
	}
	_pop_scaleform_movie_function_void();
}

void func_62(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

void func_63()
{
	if (Global_69489)
	{
		switch (Global_16829)
		{
			case 0:
				if (_is_input_disabled(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16829++;
				break;
			
			case 1:
				if (!is_help_message_being_displayed())
				{
					if (_is_input_disabled(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
					}
					Global_16829++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16828)
		{
			case 0:
				if (_is_input_disabled(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16828++;
				break;
			
			case 1:
				if (!is_help_message_being_displayed())
				{
					if (_is_input_disabled(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
					}
					Global_16828++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (_is_input_disabled(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (is_control_pressed(2, iVar10) && !is_control_pressed(2, iVar9))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = floor(_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = floor(_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = floor(_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = floor(_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (_is_input_disabled(2))
		{
			if (absi(iVar0) > 28 || absi(iVar1) > 28)
			{
				fVar6 = IntToFloat(iVar0) / 128f * fLocal_164;
			}
		}
		else if (absi(iVar2) > 28 || absi(iVar3) > 28)
		{
			fVar6 = IntToFloat(iVar2) / 128f * fLocal_164;
		}
		if (_is_input_disabled(2))
		{
			fVar7 = _0x4F8A26A890FD62FB(0, 290);
			fVar8 = _0x4F8A26A890FD62FB(0, 291);
			if (_0xE1615EC03B3BB4FD())
			{
				fVar8 *= -1f;
			}
			fVar4 += fVar7;
			fVar5 -= fVar8;
		}
		else if (absi(iVar0) > 28 || absi(iVar1) > 28)
		{
			fVar4 = IntToFloat(iVar0) / 128f * fLocal_164;
			fVar5 = IntToFloat(-iVar1) / 128f * fLocal_164;
		}
		func_67(fVar5);
		func_66(fVar6);
		func_65(fVar4);
	}
	else if (!is_control_pressed(2, iVar9))
	{
		enable_control_action(0, 2, 1);
		enable_control_action(0, 1, 1);
	}
}

void func_65(float fParam0)
{
	fLocal_161 += fParam0;
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	_0xD6ADE981781FCA09(fLocal_161);
}

void func_66(float fParam0)
{
	fLocal_162 += fParam0;
	if (fLocal_162 > 1f)
	{
		fLocal_162 = 1f;
	}
	else if (fLocal_162 < -1f)
	{
		fLocal_162 = -1f;
	}
	_0xF1E22DC13F5EEBAD(fLocal_162);
}

void func_67(float fParam0)
{
	fLocal_163 += fParam0;
	if (fLocal_163 > 1f)
	{
		fLocal_163 = 1f;
	}
	else if (fLocal_163 < -1f)
	{
		fLocal_163 = -1f;
	}
	_0x466DA42C89865553(fLocal_163);
}

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (_is_input_disabled(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (is_control_pressed(2, iVar10))
		{
			if (is_control_just_pressed(2, 178))
			{
				_0x53F4892D18EC90A4(0.5f);
				_0x3117D84EFA60F77B(0.85f);
				_0xAC2890471901861C(0.5f);
				_0x15E69E2802C24B8D(-0.25f);
				fLocal_157 = 0.5f;
				fLocal_158 = 0.85f;
				fLocal_159 = 0.5f;
				fLocal_160 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (is_control_pressed(2, iVar10) && !is_control_pressed(2, iVar11))
	{
		if (is_control_just_pressed(2, 178))
		{
			_0x53F4892D18EC90A4(0.5f);
			_0x3117D84EFA60F77B(0.85f);
			_0xAC2890471901861C(0.5f);
			_0x15E69E2802C24B8D(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = floor(_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = floor(_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = floor(_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = floor(_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (_is_input_disabled(2))
		{
			iVar1 = floor(_0x4F8A26A890FD62FB(0, 39)) * 127;
			fVar8 = _0x4F8A26A890FD62FB(0, 290);
			fVar9 = _0x4F8A26A890FD62FB(0, 291);
			if (_0xE1615EC03B3BB4FD())
			{
				fVar9 *= -1f;
			}
			fVar6 += fVar8;
			fVar7 -= fVar9;
		}
		else if (absi(iVar2) > 15 || absi(iVar3) > 15)
		{
			fVar6 = IntToFloat(iVar2) / 128f * fLocal_164;
			fVar7 = IntToFloat(-iVar3) / 128f * fLocal_164;
		}
		if (absi(iVar0) > 28 || absi(iVar1) > 28)
		{
			fVar4 = IntToFloat(iVar0) / 128f * fLocal_164;
			fVar5 = IntToFloat(iVar1) / 128f * fLocal_164;
		}
		func_72(fVar6);
		func_71(fVar7);
		func_70(fVar4);
		if (!func_57(14))
		{
			func_69(fVar5);
		}
	}
	else if (!is_disabled_control_pressed(2, iVar11))
	{
		enable_control_action(0, 2, 1);
		enable_control_action(0, 1, 1);
	}
	if (!is_disabled_control_pressed(2, iVar10) && !is_disabled_control_pressed(2, iVar11))
	{
		iVar0 = floor(_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = floor(_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = floor(_0x4F8A26A890FD62FB(0, 290)) * 127;
		iVar3 = floor(_0x4F8A26A890FD62FB(0, 291)) * 127;
		iVar2 = floor(_0x4F8A26A890FD62FB(0, 294)) * 127;
		iVar2 = floor(_0x4F8A26A890FD62FB(0, 295)) * 127;
		iVar3 = floor(_0x4F8A26A890FD62FB(0, 292)) * 127;
		iVar3 = floor(_0x4F8A26A890FD62FB(0, 293)) * 127;
		if (absi(iVar2) > 28 || absi(iVar3) > 28)
		{
			fVar6 = IntToFloat(iVar2) / 128f * fLocal_164;
			fVar7 = IntToFloat(-iVar3) / 128f * fLocal_164;
		}
		if (absi(iVar0) > 28 || absi(iVar1) > 28)
		{
			fVar4 = IntToFloat(iVar0) / 128f * fLocal_164;
			fVar5 = IntToFloat(iVar1) / 128f * fLocal_164;
		}
		if (!func_57(14))
		{
			func_69(fVar5);
		}
	}
}

void func_69(float fParam0)
{
	fLocal_159 += fParam0;
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < 0f)
	{
		fLocal_159 = 0f;
	}
	_0xAC2890471901861C(fLocal_159);
}

void func_70(float fParam0)
{
	fLocal_160 += fParam0;
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	_0x15E69E2802C24B8D(fLocal_160);
}

void func_71(float fParam0)
{
	fLocal_158 += fParam0;
	if (fLocal_158 > 1.5f)
	{
		fLocal_158 = 1.5f;
	}
	else if (fLocal_158 < 0.5f)
	{
		fLocal_158 = 0.5f;
	}
	_0x3117D84EFA60F77B(fLocal_158);
}

void func_72(float fParam0)
{
	fLocal_157 += fParam0;
	if (fLocal_157 > 2f)
	{
		fLocal_157 = 2f;
	}
	else if (fLocal_157 < -1.7f)
	{
		fLocal_157 = -1.7f;
	}
	_0x53F4892D18EC90A4(fLocal_157);
}

void func_73()
{
	if (Global_69749 || Global_69750)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_1617379.f_84067 == 0 && Global_1617379.f_84068 == 0)
			{
				draw_scaleform_movie_fullscreen(iLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_14355)
		{
			if (Global_14571)
			{
				if (iLocal_150 == 0)
				{
					if (Global_14413.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_75(255, 255, 255, 255);
			func_74(0.059f, 0.644f, "CELL_284", 0);
			func_75(255, 255, 255, 255);
			func_74(0.165f, 0.644f, "CELL_285", 0);
			func_75(255, 255, 255, 255);
			func_74(0.275f, 0.75f, "CELL_280", 0);
			func_75(255, 255, 255, 255);
			func_74(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14355)
	{
	}
	else
	{
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.75f, "CELL_287", 0);
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.79f, "CELL_286", 0);
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_74(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	_set_text_entry(sParam2);
	_draw_text(fParam0, fParam1, iParam3);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	set_text_scale(0.4f, 0.4f);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(1, 0, 0, 0, 205);
	set_text_proportional(1);
	set_text_font(0);
	set_text_colour(iParam0, iParam1, iParam2, iParam3);
}

void func_76()
{
	set_gameplay_cam_relative_pitch(fLocal_75, 1f);
	set_gameplay_cam_relative_heading(fLocal_76);
}

void func_77()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 44, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 3, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 4, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 5, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 6, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 39, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 56, 1);
}

void func_78()
{
	vLocal_87 = {Global_14366[Global_14358 /*3*/]};
	if (Global_14355)
	{
		if (func_81())
		{
			get_mobile_phone_position(&vLocal_93);
			vLocal_87 = {vLocal_93};
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		func_1(1);
		if (iLocal_121)
		{
			vLocal_81.x += 12f;
		}
		if (vLocal_81.x > vLocal_87.x || vLocal_81.x == vLocal_87.x)
		{
			vLocal_81.x = vLocal_87.x;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			vLocal_81.y -= 6f;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_2285, 4))
		{
			if (vLocal_81.y < vLocal_87.y + 15f || vLocal_81.y == vLocal_87.y + 15f)
			{
				vLocal_81.y = vLocal_87.y + 15f;
				iLocal_122 = 0;
			}
		}
		else if (vLocal_81.y < vLocal_87.y + 10f || vLocal_81.y == vLocal_87.y + 10f)
		{
			vLocal_81.y = vLocal_87.y + 10f;
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			vLocal_81.z -= 10f;
		}
		if (vLocal_81.z < vLocal_87.z || vLocal_81.z == vLocal_87.z)
		{
			vLocal_81.z = vLocal_87.z;
			iLocal_123 = 0;
		}
		if (func_81() == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2285, 4))
			{
				vLocal_87.y += 15f;
			}
			else
			{
				vLocal_87.y += 10f;
			}
			vLocal_87.x -= 14f;
		}
		else
		{
			vLocal_87 = {Global_14359[Global_14358 /*3*/]};
		}
		vLocal_81 = {vLocal_87};
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		set_mobile_phone_position(vLocal_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			vLocal_84 = {-90.3f, 0f, 90f};
			set_mobile_phone_rotation(vLocal_84, 0);
			if (!GAMEPLAY::IS_BIT_SET(Global_2283, 22))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_80();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_79();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_79()
{
	func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (GAMEPLAY::IS_BIT_SET(Global_2284, 28))
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 176, true), "CELL_286");
	}
	else
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 1f, _get_control_action_name(2, 178, true), "CELL_277");
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 176, true), "CELL_GALSAVE");
	}
	_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
	_push_scaleform_movie_function_parameter_float(fLocal_77);
	_pop_scaleform_movie_function_void();
	func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_80()
{
	func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (GAMEPLAY::IS_BIT_SET(Global_2284, 28))
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 1f, _get_control_action_name(2, 179, true), "CELL_287");
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 176, true), "CELL_286");
	}
	else
	{
		func_61(iLocal_141, "SET_DATA_SLOT", 2f, _get_control_action_name(2, 179, true), "CELL_287");
		func_61(iLocal_141, "SET_DATA_SLOT", 1f, _get_control_action_name(2, 178, true), "CELL_277");
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, _get_control_action_name(0, 176, true), "CELL_GALSAVE");
	}
	_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
	_push_scaleform_movie_function_parameter_float(fLocal_77);
	_pop_scaleform_movie_function_void();
	func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

bool func_81()
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
		if (func_57(14))
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

void func_82()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
	set_input_exclusive(0, Global_14383);
	vLocal_84 = {Global_14373};
	vLocal_87 = {Global_14366[Global_14358 /*3*/]};
	if (func_81())
	{
		get_mobile_phone_rotation(&vLocal_90, 0);
		vLocal_84 = {vLocal_90};
		get_mobile_phone_position(&vLocal_93);
		vLocal_87 = {vLocal_93};
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_14355)
	{
		func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_131 = 0;
		if (GAMEPLAY::IS_BIT_SET(Global_2283, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_83();
		}
		if (iLocal_121)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 9))
			{
				vLocal_81.x += 2f;
			}
			else
			{
				vLocal_81.x += 12f;
			}
		}
		if (vLocal_81.x > vLocal_87.x || vLocal_81.x == vLocal_87.x)
		{
			vLocal_81.x = vLocal_87.x;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			vLocal_81.y -= 6f;
		}
		if (vLocal_81.y < vLocal_87.y || vLocal_81.y == vLocal_87.y)
		{
			vLocal_81.y = vLocal_87.y;
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			vLocal_81.z -= 10f;
		}
		if (vLocal_81.z < vLocal_87.z || vLocal_81.z == vLocal_87.z)
		{
			vLocal_81.z = vLocal_87.z;
			iLocal_123 = 0;
		}
		if (iLocal_123 == 0)
		{
			if (iLocal_118)
			{
				vLocal_78.x++;
			}
			if (vLocal_78.x > vLocal_84.x || vLocal_78.x == vLocal_84.x)
			{
				vLocal_78.x = vLocal_84.x;
				iLocal_118 = 0;
			}
			if (iLocal_119)
			{
				vLocal_78.y -= 2f;
			}
			if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
			{
				vLocal_78.y = vLocal_84.y;
				iLocal_119 = 0;
			}
			if (iLocal_120)
			{
				vLocal_78.z -= 14f;
			}
			if (vLocal_78.z < vLocal_84.z || vLocal_78.z == vLocal_84.z)
			{
				vLocal_78.z = vLocal_84.z;
				iLocal_120 = 0;
			}
		}
		if (iLocal_126)
		{
			vLocal_78 = {vLocal_84};
			vLocal_81 = {vLocal_87};
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			if (func_81() == 0)
			{
				set_mobile_phone_rotation(vLocal_78, 0);
				set_mobile_phone_position(vLocal_81);
			}
			func_90(0, 1);
		}
		else if (func_81() == 0)
		{
			set_mobile_phone_rotation(vLocal_78, 0);
			set_mobile_phone_position(vLocal_81);
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_83();
		}
	}
	else
	{
		if (iLocal_118)
		{
			vLocal_78.x++;
		}
		if (vLocal_78.x > vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			vLocal_78.y -= 2f;
		}
		if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			vLocal_78.z -= 7f;
		}
		if (vLocal_78.z < vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			iLocal_120 = 0;
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_83();
		}
	}
	set_mobile_phone_rotation(vLocal_78, 0);
}

void func_83()
{
	func_1(0);
	if (func_81() == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2283, 30))
		{
			set_mobile_phone_position(Global_14359[Global_14358 /*3*/]);
		}
		else
		{
			set_mobile_phone_position(Global_14366[Global_14358 /*3*/]);
		}
		vLocal_78 = {vLocal_84};
		set_mobile_phone_rotation(vLocal_78, 0);
	}
	Global_16745 = 0;
	func_93(0, 0);
	func_97(0);
	iLocal_115 = 0;
	func_92();
	Global_14400 = 1;
	Global_16748 = 0;
	if (Global_14413.f_1 > 4)
	{
		Global_14413.f_1 = 6;
		Global_14391 = 1;
		func_84();
	}
	if (has_scaleform_movie_loaded(iLocal_140))
	{
		func_126(iLocal_140, "SHUTDOWN_MOVIE");
	}
	wait(0);
	_0xEB2D525B57F42B40();
	set_scaleform_movie_as_no_longer_needed(&iLocal_141);
	set_scaleform_movie_as_no_longer_needed(&iLocal_140);
	if (Global_14573 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
	}
	GAMEPLAY::CLEAR_BIT(&Global_2283, 18);
	GAMEPLAY::CLEAR_BIT(&Global_2283, 21);
	clear_floating_help(0, 1);
	GAMEPLAY::CLEAR_BIT(&Global_2285, 3);
	GAMEPLAY::CLEAR_BIT(&Global_2563397, 3);
	set_game_paused(false);
	set_player_can_do_drive_by(player_id(), 1);
	reset_hud_component_values(15);
	Global_16749 = 1;
	stop_sound(iLocal_112);
	release_sound_id(iLocal_112);
	_0x10D373323E5B9C0D();
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		set_facial_idle_anim_override(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
		clear_facial_idle_anim_override(PLAYER::PLAYER_PED_ID());
	}
	func_92();
	_0xA2CCBE62CD4C91A4(0);
	unk_0x375A706A5C2FD084(0);
	_0x1B0B4AEED5B9B41C(1f);
	if (Global_2562122 > 0 && Global_2562122 < 13)
	{
		set_streamed_texture_dict_as_no_longer_needed(sLocal_33[Global_2562122]);
	}
	func_90(0, 1);
	if (func_133(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	terminate_this_thread();
}

void func_84()
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
			func_127(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_2888);
			if (Global_2888 == 1)
			{
				func_127(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_127(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			}
			else if (Global_69489)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_87(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_87(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_87(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_87(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_127(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_87(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_86();
				func_127(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_58("CELL_300");
					func_58("CELL_217");
					func_58("CELL_217");
					_pop_scaleform_movie_function_void();
				}
				else if (Global_101154.f_32575[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_87(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_87(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(2), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), "CELL_217", &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
				}
				func_127(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_127(Global_14394, "SET_THEME", to_float(Global_101154.f_12741[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_86();
				if (Global_15725)
				{
					_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(4);
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(2);
					_begin_text_component("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_15727);
					_end_text_component();
					func_58("CELL_300");
					func_58("CELL_219");
					func_58("CELL_219");
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
						func_127(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_127(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14394, "SET_DATA_SLOT", to_float(4), to_float(false), to_float(3), -1f, -1f, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), &(Global_101154.f_32575[Global_1598 /*29*/].f_7), &Var0, &(Global_101154.f_32575[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_127(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_85();
			break;
		
		default:
			break;
	}
}

void func_85()
{
	if (has_scaleform_movie_loaded(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_87(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
		}
		else
		{
			func_87(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2283, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 20))
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_86()
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

void func_87(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_58(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_58(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_58(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_58(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_58(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_88(int iParam0)
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
		if (func_57(14))
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
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 3))
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
								func_58(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_87(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_87(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_87(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_87(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_87(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_58(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(Global_2289);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 6))
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
								func_58(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar6);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 3))
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
								func_58(&(Global_2290[iVar1 /*15*/]));
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
								func_58(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_58(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_87(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_87(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_89()
{
	switch (iLocal_100)
	{
		case 1:
			clear_floating_help(0, 1);
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 28))
			{
				StringCopy(&cLocal_145, "CELL_296", 16);
				func_50();
			}
			else
			{
				StringCopy(&cLocal_145, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Global_2283, 22))
			{
				clear_floating_help(0, 1);
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_80();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_79();
				}
				iLocal_100 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_90(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_91(0))
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

bool func_91(int iParam0)
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

void func_92()
{
	if ((Global_1617379.f_84067 == 0 && Global_1617379.f_84068 == 0) && Global_1725136 == 0)
	{
		clear_timecycle_modifier();
	}
}

void func_93(int iParam0, int iParam1)
{
	if (Global_1617379.f_84067 == 1)
	{
	}
	else if (Global_1617379.f_84068 == 1)
	{
	}
	else
	{
		cell_cam_activate(iParam0, iParam1);
	}
}

bool func_94()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2283, 15))
	{
		return true;
	}
	return false;
}

bool func_95(int iParam0, int iParam1, int iParam2)
{
	if (is_control_just_pressed(iParam0, iParam1) || (iParam2 == 1 && is_disabled_control_just_pressed(iParam0, iParam1)))
	{
		if (GAMEPLAY::IS_PC_VERSION())
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

void func_96()
{
	if (Global_14355)
	{
		vLocal_84 = {-90.3f, 0f, 90f};
		vLocal_87 = {1.5f, 0f, -17f};
		if (func_81())
		{
			get_mobile_phone_rotation(&vLocal_90, 0);
			vLocal_84 = {vLocal_90};
			get_mobile_phone_position(&vLocal_93);
			vLocal_87 = {vLocal_93};
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		if (iLocal_120 == 0)
		{
			if (iLocal_121)
			{
				vLocal_81.x -= 14f;
			}
			if (vLocal_81.x < vLocal_87.x || vLocal_81.x == vLocal_87.x)
			{
				iLocal_121 = 0;
			}
			if (iLocal_122)
			{
				vLocal_81.y += 7f;
			}
			if (vLocal_81.y > vLocal_87.y || vLocal_81.y == vLocal_87.y)
			{
				iLocal_122 = 0;
			}
			if (iLocal_123)
			{
				vLocal_81.z += 12f;
			}
			if (vLocal_81.z > vLocal_87.z || vLocal_81.z == vLocal_87.z)
			{
				iLocal_123 = 0;
			}
		}
		if (iLocal_118)
		{
			vLocal_78.x--;
		}
		if (vLocal_78.x < vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			vLocal_78.x = vLocal_84.x;
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			vLocal_78.y -= 0.5f;
		}
		if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			vLocal_78.y = vLocal_84.y;
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			vLocal_78.z += 11f;
		}
		if (vLocal_78.z > vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			vLocal_78.z = vLocal_84.z;
			iLocal_120 = 0;
		}
		if (func_81() == 0)
		{
			set_mobile_phone_rotation(vLocal_78, 0);
			set_mobile_phone_position(vLocal_81);
		}
	}
	else
	{
		vLocal_84 = {-93.9f, 4.9f, 90.7f};
		if (iLocal_118)
		{
			vLocal_78.x--;
		}
		if (vLocal_78.x < vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			vLocal_78.y += 2f;
		}
		if (vLocal_78.y > vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			vLocal_78.z += 7f;
		}
		if (vLocal_78.z > vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			iLocal_120 = 0;
		}
		set_mobile_phone_rotation(vLocal_78, 0);
	}
	if (Global_14355)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_81())
			{
			}
			else
			{
				vLocal_78 = {vLocal_84};
				set_mobile_phone_rotation(vLocal_78, 0);
				vLocal_81 = {vLocal_87};
				set_mobile_phone_position(vLocal_81);
			}
			if (iLocal_103 == 0)
			{
				Global_16746 = 0;
				func_93(1, 1);
				iLocal_115 = 1;
				func_97(1);
				func_55();
				func_98();
				func_53(0);
				settimera(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_105();
				func_127(iLocal_140, "DISPLAY_VIEW", to_float(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
				{
					func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_127(iLocal_140, "SET_REMAINING_PHOTOS", to_float(iLocal_109), to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_129();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		vLocal_78 = {vLocal_84};
		set_mobile_phone_rotation(vLocal_78, 0);
		Global_16746 = 0;
	}
}

void func_97(int iParam0)
{
	if (func_135())
	{
		if (iParam0)
		{
			if (!_0xBCEDB009461DA156())
			{
				_0x7AC24EAB6D74118D(1);
				if (Global_2562122 > 0 && Global_2562122 < 99)
				{
					_0x27FEB5254759CDE3(sLocal_33[Global_2562122], 0);
					_0x1B0B4AEED5B9B41C(0.25f);
				}
			}
		}
		else if (_0xBCEDB009461DA156())
		{
			_0x7AC24EAB6D74118D(0);
		}
	}
}

void func_98()
{
	if (Global_2562121 > 0 && Global_2562121 < 99)
	{
		if (Global_1725136 == 0)
		{
			set_timecycle_modifier(sLocal_19[Global_2562121]);
		}
	}
}

void func_99()
{
	if (Global_14355)
	{
		iLocal_125 = 0;
		func_55();
		func_90(1, 1);
		func_93(1, 1);
		iLocal_115 = 1;
		Global_16749 = 1;
	}
}

void func_100()
{
	if (iLocal_127 == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2283, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_50();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		if (are_strings_equal(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

void func_101()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_14402, 1);
	}
}

void func_102()
{
	_0x1072F115DAB0717E(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_103()
{
	func_104();
}

void func_104()
{
	if (iLocal_151)
	{
		if (timera() > 50)
		{
			iLocal_151 = 0;
		}
	}
	if (iLocal_151 == 0)
	{
	}
}

void func_105()
{
	if (Global_14413.f_1 > 3)
	{
		if (!is_pause_menu_active())
		{
			draw_scaleform_movie(iLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_106()
{
	if (func_57(14))
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
		Global_14413 = func_11();
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

void func_107(int iParam0)
{
	if (Global_14571)
	{
		func_90(0, 0);
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
	if (!func_108())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_108()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_109()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 56, 1);
	if (iLocal_150 == 0)
	{
		set_input_exclusive(0, Global_14386);
		set_input_exclusive(0, Global_14383);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 278, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 279, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 280, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 281, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 282, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 282, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 284, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 285, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 77, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 78, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 286, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 287, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 79, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 61, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 62, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 63, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 64, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 90, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 108, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 109, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 111, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 112, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 91, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 92, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 102, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 137, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 139, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 102, 1);
	}
}

bool func_110()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
			if (is_vehicle_seat_free(iVar0, -1))
			{
				return true;
			}
			else if (!get_ped_in_vehicle_seat(iVar0, -1) == PLAYER::PLAYER_PED_ID())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_111()
{
	int iVar0;
	
	func_118(&iVar0);
	if (iVar0)
	{
		return true;
	}
	if (Global_1315888 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_117())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_116())
	{
		return true;
	}
	if (func_115(157))
	{
		if (!func_114())
		{
			return true;
		}
	}
	if (func_115(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_112() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_112()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_112()
{
	switch (func_113())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

auto func_113()
{
	return Global_25120;
}

auto func_114()
{
	return Global_2434762.f_574;
}

bool func_115(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_116()
{
	return Global_2443085;
}

auto func_117()
{
	return Global_2434762.f_569;
}

void func_118(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 == 168)
		{
			get_event_data(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_119(iVar0);
					break;
				
				case 2:
					get_event_data(1, iVar0, &vVar4, 3);
					if (vVar4.z == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_119(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_121(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_120(iVar4, &iVar5))
						{
							remove_vehicle_window(iVar4, vVar0.z);
						}
						if (iVar5)
						{
							set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
}

bool func_120(int iParam0, auto uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_a_mission_entity(iParam0))
		{
			if (network_get_entity_is_local(iParam0))
			{
				set_entity_as_mission_entity(iParam0, false, 1);
				*uParam1 = 1;
			}
		}
		if (does_entity_belong_to_this_script(iParam0, 0))
		{
			if (network_has_control_of_entity(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_121(int iParam0, int iParam1, int iParam2)
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

void func_122()
{
	if (iLocal_156 == 1)
	{
		hide_hud_component_this_frame(7);
		hide_hud_component_this_frame(1);
		hide_hud_component_this_frame(3);
		hide_hud_component_this_frame(4);
		hide_hud_component_this_frame(6);
		hide_hud_component_this_frame(8);
		hide_hud_component_this_frame(9);
		hide_hud_component_this_frame(2);
	}
	else
	{
		hide_hud_and_radar_this_frame();
	}
}

void func_123(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_124()
{
	if (func_125())
	{
		_0x4AF92ACD3141D96C();
		if (_0x2A893980E96B659A(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_16749 = 1;
			Global_14413.f_1 = 3;
			_0x10D373323E5B9C0D();
		}
	}
	else
	{
		iLocal_109 = false;
		iLocal_110 = false;
		if (iLocal_104 == 1)
		{
			if (iLocal_127 == 0)
			{
				if (has_scaleform_movie_loaded(iLocal_140))
				{
					if (func_135())
					{
						if (Global_2562122 == 0)
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
							{
								func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_127(iLocal_140, "SET_REMAINING_PHOTOS", to_float(iLocal_109), to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_2563397, 2))
						{
							func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_127(iLocal_140, "SET_REMAINING_PHOTOS", to_float(iLocal_109), to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (has_scaleform_movie_loaded(iLocal_140))
			{
				func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(iLocal_140, "SET_REMAINING_PHOTOS", to_float(iLocal_109), to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		_0x10D373323E5B9C0D();
	}
}

bool func_125()
{
	if (Global_1617379.f_84067 == 1)
	{
		if (Global_69489)
		{
			return false;
		}
	}
	if (Global_1617379.f_84068 == 1)
	{
		if (Global_69489)
		{
			return false;
		}
	}
	if (is_xbox360_version() || is_ps3_version())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2284, 28))
		{
			return false;
		}
	}
	return true;
}

void func_126(int iParam0, char* sParam1)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_pop_scaleform_movie_function_void();
}

void func_127(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

auto func_128()
{
	if (Global_69489)
	{
		Global_14413 = 3;
	}
	else
	{
		Global_14413 = func_11();
	}
	if (Global_14413 > 3)
	{
		Global_14413 = 3;
	}
	return Global_101154.f_12741[Global_14413 /*20*/].f_7;
}

void func_129()
{
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 8;
	}
	Global_16748 = 0;
	iLocal_127 = 0;
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		vLocal_67 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	}
	if (Global_14355)
	{
		while (timera() < iLocal_137)
		{
			wait(0);
			func_105();
			func_77();
			_0xEB2D525B57F42B40();
		}
		func_126(iLocal_140, "OPEN_SHUTTER");
		func_122();
		func_100();
		iLocal_129 = 1;
		settimerb(0);
	}
	else
	{
		func_93(1, 1);
		func_97(1);
		func_55();
		func_98();
		func_53(0);
		iLocal_115 = 1;
	}
}

void func_130(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 15);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 15);
	}
}

auto func_131()
{
	return Global_1315888;
}

void func_132()
{
}

int func_133(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_134()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (get_ped_stealth_movement(PLAYER::PLAYER_PED_ID()))
		{
			set_ped_stealth_movement(PLAYER::PLAYER_PED_ID(), 0, 0);
			_0x53F4892D18EC90A4(fLocal_157);
			_0x3117D84EFA60F77B(fLocal_158);
			_0xAC2890471901861C(fLocal_159);
		}
		else
		{
			_0x53F4892D18EC90A4(fLocal_157);
			_0x3117D84EFA60F77B(fLocal_158);
			_0xAC2890471901861C(fLocal_159);
		}
	}
	_0x15E69E2802C24B8D(fLocal_160);
	_0xD6ADE981781FCA09(fLocal_161);
	_0xF1E22DC13F5EEBAD(fLocal_162);
	_0x466DA42C89865553(fLocal_163);
	func_52();
}

bool func_135()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return true;
}

