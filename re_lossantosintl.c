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
	auto uLocal_45 = 0;
	auto uLocal_46 = 0;
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	int[] iLocal_49 = new int[4];
	int iLocal_54 = 0;
	int[] iLocal_55 = new int[4];
	int iLocal_60 = 0;
	Vector3[] vLocal_61 = new Vector3[4];
	Vector3 vLocal_74 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	float fLocal_85 = 0;
	float fLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	auto uLocal_91 = 0;
	auto uLocal_92 = 0;
	auto uLocal_93 = 0;
	auto uLocal_94 = 0;
	int iLocal_95 = 0;
	auto uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_78 = true;
	iLocal_84 = joaat("s_m_m_pilot_01");
	iLocal_99 = 500;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	iLocal_97 = PLAYER::PLAYER_PED_ID();
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_97, 0))
		{
			iLocal_98 = 5;
		}
		switch (iLocal_98)
		{
			case 0:
				iLocal_98 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_98 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_98 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_98 = 4;
				break;
			
			case 4:
				if (Global_88539)
				{
					iLocal_98 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		wait(iLocal_99);
	}
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar0], 0) && !is_entity_visible(iLocal_49[iVar0])))
			{
				delete_vehicle(&(iLocal_49[iVar0]));
				PED::DELETE_PED(&(iLocal_55[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(iLocal_49[iVar0]), &(iLocal_55[iVar0]));
				set_vehicle_as_no_longer_needed(&(iLocal_49[iVar0]));
				set_ped_as_no_longer_needed(&(iLocal_55[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_54))
		{
			delete_vehicle(&iLocal_54);
			PED::DELETE_PED(&iLocal_60);
		}
		else
		{
			func_2(&iLocal_54, &iLocal_60);
			set_vehicle_as_no_longer_needed(&iLocal_54);
			set_ped_as_no_longer_needed(&iLocal_60);
		}
	}
	if (iLocal_82)
	{
		remove_vehicle_recording(101, "AirportJetTakeOff");
		remove_vehicle_recording(102, "AirportJetTakeOff");
		remove_vehicle_recording(101, "AirportNew");
		remove_vehicle_recording(102, "AirportNew");
		remove_vehicle_recording(103, "AirplaneLandingRedux");
		remove_vehicle_recording(104, "AirplaneLandingRedux");
		remove_vehicle_recording(101, "EastWestFlight");
	}
}

void func_2(int iParam0, auto uParam1)
{
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*iParam0, 0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, 0))
	{
		if (is_entity_in_air(*iParam0))
		{
			if (is_playback_going_on_for_vehicle(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					task_plane_mission(*uParam1, *iParam0, false, false, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 30f, 100, 50);
				}
			}
		}
	}
}

void func_3(int iParam0)
{
	if (iLocal_78)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], 0))
		{
			if (is_entity_in_air(iLocal_49[0]))
			{
				if (!is_playback_going_on_for_vehicle(iLocal_49[0]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_55[0], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], 0))
					{
						task_plane_mission(iLocal_55[0], iLocal_49[0], false, false, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
				else if (iParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_55[0], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], 0))
					{
						task_plane_mission(iLocal_55[0], iLocal_49[0], false, false, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[2], 0))
		{
			if (is_entity_in_air(iLocal_49[2]))
			{
				if (!is_playback_going_on_for_vehicle(iLocal_49[2]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_55[2], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[2], 0))
					{
						task_plane_mission(iLocal_55[2], iLocal_49[2], false, false, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
				else if (iParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_55[2], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[2], 0))
					{
						task_plane_mission(iLocal_55[2], iLocal_49[2], false, false, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;
	
	switch (iLocal_88)
	{
		case 0:
			vLocal_61[0 /*3*/] = {-1542.113f, -3023.802f, 23.2538f};
			vLocal_61[1 /*3*/] = {-3089.888f, -1960.075f, 313.559f};
			vLocal_61[2 /*3*/] = {-1037.638f, -3316.12f, 23.2475f};
			vLocal_61[3 /*3*/] = {451.174f, -4009.46f, 135.1171f};
			vLocal_74 = {-1612.174f, -2688.442f, 12.9444f};
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()) || is_ped_in_any_plane(PLAYER::PLAYER_PED_ID())) || is_player_wanted_level_greater(player_id(), 0))
				{
					iLocal_78 = false;
				}
				else
				{
					iLocal_78 = true;
				}
			}
			iLocal_88 = 1;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(iLocal_84);
			request_vehicle_recording(101, "AirportJetTakeOff");
			request_vehicle_recording(103, "AirplaneLandingRedux");
			request_vehicle_recording(101, "EastWestFlight");
			request_vehicle_recording(101, "AirportNew");
			request_vehicle_recording(104, "AirplaneLandingRedux");
			iLocal_88 = 2;
			break;
		
		case 2:
			if (!iLocal_82)
			{
				if ((((((STREAMING::HAS_MODEL_LOADED(joaat("jet")) && STREAMING::HAS_MODEL_LOADED(iLocal_84)) && has_vehicle_recording_been_loaded(101, "AirportJetTakeOff")) && has_vehicle_recording_been_loaded(103, "AirplaneLandingRedux")) && has_vehicle_recording_been_loaded(101, "AirportNew")) && has_vehicle_recording_been_loaded(104, "AirplaneLandingRedux")) && has_vehicle_recording_been_loaded(101, "EastWestFlight"))
				{
					iLocal_82 = true;
				}
				else
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					STREAMING::REQUEST_MODEL(iLocal_84);
					request_vehicle_recording(101, "AirportJetTakeOff");
					request_vehicle_recording(102, "AirportJetTakeOff");
					request_vehicle_recording(101, "AirportNew");
					request_vehicle_recording(102, "AirportNew");
					request_vehicle_recording(101, "EastWestFlight");
				}
			}
			if (iLocal_82)
			{
				if (!CAM::IS_SPHERE_VISIBLE(vLocal_61[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(vLocal_74, 50f))
				{
					iLocal_88 = 3;
				}
				else
				{
					if (CAM::IS_SPHERE_VISIBLE(vLocal_61[0 /*3*/], 50f))
					{
					}
					if (CAM::IS_SPHERE_VISIBLE(vLocal_74, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			iLocal_49[0] = create_vehicle(joaat("jet"), vLocal_61[0 /*3*/], 0, 1, true);
			set_entity_heading(iLocal_49[0], 240.3179f);
			_0x279D50DE5652D935(iLocal_49[0], 0);
			iLocal_49[1] = create_vehicle(joaat("jet"), vLocal_61[1 /*3*/], 0, 1, true);
			_0x279D50DE5652D935(iLocal_49[1], 0);
			iLocal_49[2] = create_vehicle(joaat("jet"), vLocal_61[2 /*3*/], 0, 1, true);
			_0x279D50DE5652D935(iLocal_49[2], 0);
			iLocal_49[3] = create_vehicle(joaat("jet"), vLocal_61[3 /*3*/], 0, 1, true);
			_0x279D50DE5652D935(iLocal_49[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
				{
					iLocal_55[iVar0] = PED::CREATE_PED_inside_vehicle(iLocal_49[iVar0], 4, iLocal_84, -1, 1, true);
					set_entity_lod_dist(iLocal_49[iVar0], 1000);
					set_vehicle_engine_on(iLocal_49[iVar0], true, 1, 0);
					set_blocking_of_non_temporary_events(iLocal_55[iVar0], true);
				}
				iVar0++;
			}
			func_8(&(iLocal_49[1]), &(iLocal_55[1]));
			func_8(&(iLocal_49[2]), &(iLocal_55[2]));
			func_8(&(iLocal_49[3]), &(iLocal_55[3]));
			if (iLocal_78)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
				{
					if (has_vehicle_recording_been_loaded(101, "AirportJetTakeOff"))
					{
						start_playback_recorded_vehicle_with_flags(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_77 = 1;
					}
					else
					{
						request_vehicle_recording(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_88 = 4;
			break;
		
		case 4:
			if (iLocal_81)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[3], 0))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[3]))
					{
						if (!iLocal_79)
						{
							func_8(&(iLocal_49[3]), &(iLocal_55[3]));
							iLocal_79 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_87)
			{
				case 0:
					if (!iLocal_77)
					{
						if (iLocal_78)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], 0))
							{
								if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[0]) && !CAM::IS_SPHERE_VISIBLE(vLocal_61[0 /*3*/], 50f))
								{
									if (has_vehicle_recording_been_loaded(101, "AirportJetTakeOff"))
									{
										start_playback_recorded_vehicle_with_flags(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_77 = 1;
									}
									else
									{
										request_vehicle_recording(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_77)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_49[0]))
							{
								fLocal_85 = get_position_in_recording(iLocal_49[0]);
							}
						}
						if (fLocal_85 > 1100f)
						{
							iLocal_87 = 1;
						}
					}
					break;
				
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], 0))
					{
						if (iLocal_78)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[1]))
							{
								if (iLocal_81)
								{
									if (iLocal_79)
									{
										func_6(&(iLocal_49[1]), &(iLocal_55[1]));
										if (has_vehicle_recording_been_loaded(103, "AirplaneLandingRedux"))
										{
											start_playback_recorded_vehicle_with_flags(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_80 = 0;
											iLocal_87 = 2;
										}
										else
										{
											request_vehicle_recording(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(iLocal_49[1]), &(iLocal_55[1]));
									if (has_vehicle_recording_been_loaded(103, "AirplaneLandingRedux"))
									{
										start_playback_recorded_vehicle_with_flags(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_80 = 0;
										iLocal_87 = 2;
									}
									else
									{
										request_vehicle_recording(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], 0))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_49[1]))
						{
							iLocal_87 = 3;
						}
					}
					break;
				
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[2], 0))
					{
						if (has_vehicle_recording_been_loaded(101, "AirportNew"))
						{
							if (!CAM::IS_SPHERE_VISIBLE(vLocal_61[2 /*3*/], 50f))
							{
								if (!is_playback_going_on_for_vehicle(iLocal_49[2]))
								{
									func_6(&(iLocal_49[2]), &(iLocal_55[2]));
									start_playback_recorded_vehicle(iLocal_49[2], 101, "AirportNew", 1);
									iLocal_87 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[2], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_49[2]))
						{
							fLocal_86 = get_position_in_recording(iLocal_49[2]);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], 0))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_49[1]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[1]))
							{
								func_8(&(iLocal_49[1]), &(iLocal_55[1]));
								iLocal_80 = 1;
							}
						}
					}
					if (fLocal_86 > 1100f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[3], 0))
						{
							if (has_vehicle_recording_been_loaded(104, "AirplaneLandingRedux"))
							{
								if (!CAM::IS_SPHERE_VISIBLE(vLocal_61[3 /*3*/], 50f))
								{
									if (!is_playback_going_on_for_vehicle(iLocal_49[3]) && iLocal_80)
									{
										func_6(&(iLocal_49[3]), &(iLocal_55[3]));
										start_playback_recorded_vehicle(iLocal_49[3], 104, "AirplaneLandingRedux", 1);
										iLocal_87 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[3], 0))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_49[3]))
						{
							func_5();
							iLocal_87 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_85 = 0f;
	iLocal_77 = 0;
	iLocal_81 = 1;
	iLocal_79 = 0;
}

void func_6(auto uParam0, auto uParam1)
{
	set_entity_visible(*uParam0, true, 0);
	set_entity_visible(*uParam1, true, 0);
	set_entity_collision(*uParam0, true, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
}

void func_7()
{
	Vector3 vVar0;
	
	switch (iLocal_83)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				iLocal_54 = create_vehicle(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, 1, true);
				set_entity_lod_dist(iLocal_54, 1000);
				set_vehicle_engine_on(iLocal_54, true, 1, 0);
				_0x279D50DE5652D935(iLocal_54, 0);
				iLocal_60 = PED::CREATE_PED_inside_vehicle(iLocal_54, 4, iLocal_84, -1, 1, true);
				set_blocking_of_non_temporary_events(iLocal_60, true);
				iLocal_83 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
			{
				if (has_vehicle_recording_been_loaded(101, "EastWestFlight"))
				{
					if (!is_playback_going_on_for_vehicle(iLocal_54))
					{
						start_playback_recorded_vehicle_with_flags(iLocal_54, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_83 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iLocal_54, 0))
			{
				if (!is_playback_going_on_for_vehicle(iLocal_54))
				{
					if ((ENTITY::IS_ENTITY_OCCLUDED(iLocal_54) && !CAM::IS_SPHERE_VISIBLE(-1602.086f, -2674.039f, 12.9444f, 50f)) && vdist2(vVar0, ENTITY::GET_ENTITY_COORDS(iLocal_54, 1)) > 62500f)
					{
						iLocal_83 = 1;
					}
				}
			}
			break;
	}
}

void func_8(auto uParam0, auto uParam1)
{
	set_entity_visible(*uParam0, false, 0);
	set_entity_visible(*uParam1, false, 0);
	set_entity_collision(*uParam0, false, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
}

void func_9()
{
}

bool func_10()
{
	return true;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	terminate_this_thread();
}

void func_13()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 fVar9;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_89))
		{
			delete_vehicle(&iLocal_89);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_89, 0) && !PED::IS_PED_INJURED(iLocal_90))
		{
			stop_playback_recorded_vehicle(iLocal_89);
			set_ped_keep_task(iLocal_90, true);
			vVar0 = {ENTITY::GET_ENTITY_COORDS(iLocal_89, 1)};
			fVar9 = get_entity_heading(iLocal_89);
			vVar3 = {0f, 500f, 50f};
			vVar6 = {_get_object_offset_from_coords(vVar0, fVar9, vVar3)};
			task_heli_mission(iLocal_90, iLocal_89, false, false, vVar6, 4, 50f, -1f, 0f, 100, 50, -1f, 0);
		}
	}
	if (iLocal_95)
	{
		remove_vehicle_recording(102, "HelicopterTakeOff");
	}
}

