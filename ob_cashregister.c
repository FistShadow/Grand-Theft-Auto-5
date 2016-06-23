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
	int iLocal_18 = 0;
	Vector3 vLocal_19 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
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
	if (network_is_game_in_progress())
	{
		if (is_bit_set(Global_1348769, true))
		{
			func_17();
		}
		else
		{
			network_set_this_script_is_network_script(32, 0, -1);
			func_14(0, -1, 0);
			set_this_script_can_be_paused(0);
			iLocal_22 = 1;
		}
	}
	else if (has_force_cleanup_occurred(2))
	{
		func_17();
	}
	while (true)
	{
		wait(0);
		if (iLocal_22 == 1)
		{
			if (func_3())
			{
				func_17();
			}
		}
		if (does_entity_exist(iLocal_23))
		{
			if (is_object_within_brain_activation_range(iLocal_23))
			{
				switch (iLocal_18)
				{
					case 0:
						if (does_entity_have_drawable(iLocal_23))
						{
							vLocal_19 = {get_entity_coords(iLocal_23, 1)};
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((has_object_been_broken(iLocal_23) && is_entity_visible(iLocal_23)) && !is_entity_a_mission_entity(iLocal_23))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_17();
			}
		}
		else
		{
			func_17();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = get_random_int_in_range(70, 121);
	if (network_is_game_in_progress())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = get_random_int_in_range(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	set_bit(&iVar2, 3);
	set_bit(&iVar2, 4);
	request_model(iVar0);
	while (!has_model_loaded(iVar0))
	{
		wait(0);
	}
	create_pickup(iVar1, get_safe_pickup_coords(vLocal_19, 1.2f, 1.5f), iVar2, iVar3, 0, iVar0);
}

int func_2(int iParam0, int iParam1)
{
	Vector3 fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = to_float(iParam0) * Global_262145;
				iParam0 = round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

bool func_3()
{
	int iVar0;
	
	func_10(&iVar0);
	if (iVar0)
	{
		return true;
	}
	if (Global_1315888 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return true;
		}
	}
	if (func_9())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_8())
	{
		return true;
	}
	if (func_7(157))
	{
		if (!func_6())
		{
			return true;
		}
	}
	if (func_7(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_4() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_4()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_4()
{
	switch (func_5())
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

auto func_5()
{
	return Global_25120;
}

auto func_6()
{
	return Global_2434762.f_574;
}

bool func_7(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_8()
{
	return Global_2443085;
}

auto func_9()
{
	return Global_2434762.f_569;
}

void func_10(auto uParam0)
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
					func_11(iVar0);
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

void func_11(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_13(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (does_entity_exist(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_12(iVar4, &iVar5))
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

bool func_12(int iParam0, auto uParam1)
{
	if (does_entity_exist(iParam0))
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

bool func_13(int iParam0, int iParam1, int iParam2)
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

bool func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_16();
			}
			else
			{
				return false;
			}
		}
		if (!func_15())
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!iParam2)
					{
						func_16();
					}
					else
					{
						return false;
					}
				}
				if (func_9())
				{
					if (!iParam2)
					{
						func_16();
					}
					else
					{
						return false;
					}
				}
				if (func_7(155))
				{
					if (!iParam2)
					{
						func_16();
					}
					else
					{
						return false;
					}
				}
			}
			else if (!network_is_in_session())
			{
				if (!iParam2)
				{
					func_16();
				}
				else
				{
					return false;
				}
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!network_is_game_in_progress())
		{
			if (!iParam2)
			{
				func_16();
			}
			else
			{
				return false;
			}
		}
	}
	else if (!network_is_in_session())
	{
		if (!iParam2)
		{
			func_16();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_15()
{
	return Global_1315888;
}

void func_16()
{
	terminate_this_thread();
}

void func_17()
{
	terminate_this_thread();
}

