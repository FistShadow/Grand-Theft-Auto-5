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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	func_4(21);
	if (has_force_cleanup_occurred(18))
	{
		if (get_cause_of_most_recent_force_cleanup() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		wait(0);
		if (_get_number_of_instances_of_streamed_script(joaat("docks_setup")) == 0)
		{
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					iLocal_28 = get_vehicle_ped_is_in(player_ped_id(), 0);
				}
				else
				{
					iLocal_28 = false;
				}
			}
			if (does_entity_exist(iLocal_28))
			{
				if (is_vehicle_driveable(iLocal_28, 0))
				{
					if (is_vehicle_model(iLocal_28, joaat("handler")))
					{
						set_input_exclusive(0, 51);
						if (!_0x62CA17B74C435651(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!does_entity_exist(iLocal_29) || (does_entity_exist(iLocal_29) && get_closest_object_of_type(get_entity_coords(iLocal_28, 1), 15f, 874602658, 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = get_closest_object_of_type(get_entity_coords(iLocal_28, 1), 15f, 874602658, 1, 0, 1);
								}
								if (does_entity_exist(iLocal_29))
								{
									if (func_1(&iLocal_30, 1000))
									{
										if (_0x89D630CF5EA96D23(iLocal_28, iLocal_29))
										{
											if (is_control_just_pressed(0, 51))
											{
												_0x6A98C2ECF57FA5D4(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								iLocal_30 = get_game_timer();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (is_control_just_pressed(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

bool func_1(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = get_game_timer();
	if (iVar0 - *uParam0 > iParam1)
	{
		return true;
	}
	return false;
}

void func_2()
{
	terminate_this_thread();
}

bool func_3(int iParam0)
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
		clear_bit(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
		return true;
	}
	return false;
}

bool func_4(int iParam0)
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

