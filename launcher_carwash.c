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
	auto uLocal_20 = 0;
	char* sLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	float fLocal_24 = 0;
	auto uLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	float fLocal_28 = 0;
	float fLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	auto uLocal_32 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	float fLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	int iLocal_38 = 0;
	auto uLocal_39 = 0;
	struct<24>[] Local_40 = new struct<24>[2];
	auto uLocal_89 = 0;
	auto uLocal_90 = 0;
	auto uLocal_91 = 0;
	auto uLocal_92 = 0;
	auto uLocal_93 = 0;
	auto uLocal_94 = 0;
	auto uLocal_95 = 0;
	auto uLocal_96 = 0;
	auto uLocal_97 = 0;
	auto uLocal_98 = 0;
	auto uLocal_99 = 0;
	auto uLocal_100 = 0;
	auto uLocal_101 = -1;
	auto uLocal_102 = 0;
	auto uLocal_103 = 0;
	auto uLocal_104 = 0;
	auto uLocal_105 = 0;
	int iLocal_106 = 0;
	Vector3[] vLocal_107 = new Vector3[2];
	var[] uLocal_114 = new var[2];
	int[] iLocal_117 = new int[2];
	struct<2> Local_120 = 0;
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
	auto uLocal_137 = 5;
	auto uLocal_138 = 0;
	auto uLocal_139 = 0;
	auto uLocal_140 = 0;
	auto uLocal_141 = 0;
	auto uLocal_142 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	vVar2 = {Local_120.f_1[0 /*3*/]};
	if (_get_number_of_instances_of_streamed_script(joaat("launcher_carwash")) > 1)
	{
		terminate_this_thread();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		network_set_script_is_safe_for_network_game();
		set_this_script_can_be_paused(0);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(99))
	{
		func_69();
	}
	if (Global_2621550)
	{
		if (_get_number_of_instances_of_streamed_script(-949873222) == 0)
		{
			_request_streamed_script(-949873222);
			while (!_has_streamed_script_loaded(-949873222))
			{
				wait(0);
			}
			_start_new_streamed_script_with_args(-949873222, &Local_120, 23, 1424);
		}
		terminate_this_thread();
	}
	if (func_68(PLAYER::PLAYER_PED_ID()))
	{
	}
	func_62();
	while (true)
	{
		func_68(PLAYER::PLAYER_PED_ID());
		if (func_61(PLAYER::PLAYER_PED_ID(), vVar2, 0) > 100f + 20f)
		{
			func_69();
		}
		iVar0 = false;
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
			iVar0 = (func_58(iVar1) || func_57(iVar1));
			iLocal_106 = does_vehicle_have_roof(iVar1);
			func_56(iLocal_106);
		}
		iVar5 = 0;
		while (iVar5 < Local_40)
		{
			func_55(iVar5);
			iVar5++;
		}
		if (func_1(&Local_40, &uLocal_89, iVar0, 0, 1, 1424))
		{
			func_69();
		}
		wait(0);
	}
}

bool func_1(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*uParam1.f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_50(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (*uParam1.f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_43(*uParam1.f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_40(iParam0[iVar0 /*24*/]) && *iParam0[iVar0 /*24*/])
					{
						*uParam1.f_12 = iVar0;
						if (*(iParam0[iVar0 /*24*/]).f_7 || (get_mission_flag() && *uParam1.f_16 == 0))
						{
							func_39(uParam1, 6);
						}
						else if (get_player_wanted_level(player_id()) > 0)
						{
							func_39(uParam1, 8);
						}
						else if (iParam2)
						{
							func_39(uParam1, 3);
						}
						else if (*(iParam0[iVar0 /*24*/]).f_8)
						{
							func_39(uParam1, 2);
						}
						else if (func_29() < *(iParam0[*uParam1.f_12 /*24*/]).f_9)
						{
							func_39(uParam1, 1);
						}
						else if (func_24())
						{
							func_39(uParam1, 7);
						}
						else
						{
							func_39(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_23(uParam1);
			}
			break;
		
		case 2:
			if (!*uParam1.f_9)
			{
				func_21(uParam1, *uParam1.f_6);
			}
			if (func_17(iParam0[*uParam1.f_12 /*24*/]) || *(iParam0[iVar0 /*24*/]).f_8 == 0)
			{
				func_39(uParam1, 0);
				return false;
			}
			break;
		
		case 1:
			if (!*uParam1.f_9)
			{
				func_12(uParam1, *uParam1.f_2, *(iParam0[*uParam1.f_12 /*24*/]).f_9);
			}
			if (func_17(iParam0[*uParam1.f_12 /*24*/]) || func_29() >= *(iParam0[*uParam1.f_12 /*24*/]).f_9)
			{
				func_39(uParam1, 0);
				return false;
			}
			break;
		
		case 6:
			if (!*uParam1.f_9)
			{
				func_21(uParam1, *uParam1.f_1);
			}
			if (func_17(iParam0[*uParam1.f_12 /*24*/]) || !func_43(*uParam1.f_16))
			{
				func_39(uParam1, 0);
				return false;
			}
			break;
		
		case 3:
			if (!*uParam1.f_9)
			{
				func_21(uParam1, *uParam1.f_3);
			}
			if ((func_17(iParam0[*uParam1.f_12 /*24*/]) || iParam2 == 0) || !func_43(*uParam1.f_16))
			{
				func_39(uParam1, 0);
				return false;
			}
			break;
		
		case 7:
			if (!*uParam1.f_9)
			{
				func_21(uParam1, *uParam1.f_5);
			}
			if (func_17(iParam0[*uParam1.f_12 /*24*/]) || !func_43(*uParam1.f_16))
			{
				func_39(uParam1, 0);
				return false;
			}
			break;
		
		case 8:
			if (!*uParam1.f_9)
			{
				func_21(uParam1, *uParam1.f_4);
			}
			if (func_17(iParam0[*uParam1.f_12 /*24*/]) || get_player_wanted_level(player_id()) == 0)
			{
				func_39(uParam1, 0);
				return false;
			}
			break;
		
		case 9:
			if (!*uParam1.f_9)
			{
				if (func_11())
				{
					func_21(uParam1, *uParam1.f_7);
				}
				else
				{
					func_21(uParam1, *uParam1.f_8);
				}
			}
			if (func_17(iParam0[*uParam1.f_12 /*24*/]) || func_8(iParam0[*uParam1.f_12 /*24*/]))
			{
				func_39(uParam1, 0);
				return false;
			}
			break;
		
		case 4:
			set_input_exclusive(2, 51);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 101, 1);
			func_7();
			if (get_player_wanted_level(player_id()) > 0)
			{
				func_39(uParam1, 8);
				return false;
			}
			if (*(iParam0[*uParam1.f_12 /*24*/]).f_8)
			{
				func_39(uParam1, 2);
				return false;
			}
			if (func_17(iParam0[*uParam1.f_12 /*24*/]) || !func_43(*uParam1.f_16))
			{
				func_39(uParam1, 0);
				return false;
			}
			if (Global_68058)
			{
				return false;
			}
			if (func_4(1))
			{
				return false;
			}
			if (*(iParam0[*uParam1.f_12 /*24*/]).f_6 == 1)
			{
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) || func_3(PLAYER::PLAYER_PED_ID(), 0) != -1)
				{
					func_39(uParam1, 0);
					return false;
				}
			}
			if (*(iParam0[*uParam1.f_12 /*24*/]).f_7 || (get_mission_flag() && *uParam1.f_16 == 0))
			{
				func_39(uParam1, 6);
				return false;
			}
			if (func_24())
			{
				func_39(uParam1, 7);
				return false;
			}
			if (func_29() < *(iParam0[*uParam1.f_12 /*24*/]).f_9)
			{
				func_39(uParam1, 1);
				return false;
			}
			if (!*uParam1.f_9)
			{
				func_12(uParam1, *uParam1, *(iParam0[*uParam1.f_12 /*24*/]).f_9);
			}
			if (*(iParam0[*uParam1.f_12 /*24*/]).f_6 == 1)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
			}
			if (is_pause_menu_active() || is_system_ui_being_displayed())
			{
				return false;
			}
			if (is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
			{
				if ((is_ped_falling(PLAYER::PLAYER_PED_ID()) || is_ped_jumping(PLAYER::PLAYER_PED_ID())) || is_ped_jumping_out_of_vehicle(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if ((is_ped_running_ragdoll_task(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_getting_up(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_climbing(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_ducking(PLAYER::PLAYER_PED_ID()) || is_ped_swimming(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (get_entity_speed(PLAYER::PLAYER_PED_ID()) > 0.05f)
				{
					return false;
				}
			}
			if (is_control_just_pressed(2, 51) && *uParam1.f_9 == 1)
			{
				if (!func_8(iParam0[*uParam1.f_12 /*24*/]))
				{
					func_39(uParam1, 9);
				}
				else
				{
					func_39(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_23(uParam1);
			*(iParam0[*uParam1.f_12 /*24*/]).f_8 = 0;
			if (!iParam4)
			{
				func_39(uParam1, 0);
				return true;
			}
			clear_help(1);
			clear_area_of_projectiles(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
			if (!is_string_null_or_empty(*(iParam0[*uParam1.f_12 /*24*/]).f_5))
			{
				SCRIPT::REQUEST_SCRIPT(*(iParam0[*uParam1.f_12 /*24*/]).f_5);
				while (!SCRIPT::HAS_SCRIPT_LOADED(*(iParam0[*uParam1.f_12 /*24*/]).f_5))
				{
					func_7();
					if (func_68(PLAYER::PLAYER_PED_ID()))
					{
						if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !Global_69489)
						{
							func_2(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, 1, 0);
							set_vehicle_brake_lights(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0);
						}
					}
					set_input_exclusive(2, 51);
					SCRIPT::REQUEST_SCRIPT(*(iParam0[*uParam1.f_12 /*24*/]).f_5);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 101, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 23, 1);
					wait(0);
				}
				if (iParam3)
				{
					do_screen_fade_out(250);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED(*(iParam0[*uParam1.f_12 /*24*/]).f_5))
				{
					if (iParam3)
					{
						while (!is_screen_faded_out())
						{
							if (func_68(PLAYER::PLAYER_PED_ID()))
							{
								if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !Global_69489)
								{
									func_2(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, 1, 0);
									set_vehicle_brake_lights(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0);
								}
							}
							set_input_exclusive(2, 51);
							CONTROLS::DISABLE_CONTROL_ACTION(0, 101, 1);
							CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
							CONTROLS::DISABLE_CONTROL_ACTION(0, 23, 1);
							func_7();
							wait(0);
						}
					}
					SYSTEM::START_NEW_SCRIPT(*(iParam0[*uParam1.f_12 /*24*/]).f_5, iParam5);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(*(iParam0[*uParam1.f_12 /*24*/]).f_5);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (iParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!iParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
	_0x17FCA7199A530203();
	if (GAMEPLAY::GET_GAME_TIMER() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

int func_3(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (is_ped_in_any_vehicle(iParam0, iParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					iVar1 = _get_vehicle_model_max_number_of_passengers(ENTITY::GET_ENTITY_MODEL(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = iVar2 - 1;
						if (!is_vehicle_seat_free(iVar0, iVar3))
						{
							if (get_ped_in_vehicle_seat(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

bool func_4(int iParam0)
{
	if (iParam0)
	{
		if (func_6())
		{
			return true;
		}
	}
	if (func_5(14))
	{
		return true;
	}
	return false;
}

int func_5(int iParam0)
{
	return Global_35711 == iParam0;
}

bool func_6()
{
	if (Global_100101)
	{
		return true;
	}
	if (!func_5(14) && _get_number_of_instances_of_streamed_script(joaat("director_mode")) > 0)
	{
		return true;
	}
	return false;
}

void func_7()
{
	Global_17118.f_6 = 1;
}

bool func_8(auto uParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	
	iVar4 = PLAYER::PLAYER_PED_ID();
	if (*uParam0.f_15 == 360f)
	{
		return true;
	}
	if (func_10(*uParam0.f_12))
	{
		return true;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar3 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (func_68(iVar3))
		{
			vVar0 = {get_entity_rotation(iVar3, 2)};
			if (vVar0.y > 45f || vVar0.y < -45f)
			{
				return false;
			}
			iVar4 = iVar3;
		}
	}
	vVar0 = {get_entity_forward_vector(iVar4)};
	if (func_9(*uParam0.f_12, vVar0) > cos(*uParam0.f_15))
	{
		return true;
	}
	return false;
}

float func_9(struct<2> Param0, auto uParam1, struct<2> Param2, auto uParam3)
{
	return Param0 * Param3 + Param0.f_1 * Param3.f_1;
}

bool func_10(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_11()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		return is_entity_upright(iVar0, 90f);
	}
	return is_entity_upright(PLAYER::PLAYER_PED_ID(), 90f);
}

bool func_12(auto uParam0, char* sParam1, int iParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (func_14(uParam0) || !is_help_message_being_displayed())
	{
		clear_help(1);
		func_13(sParam1, iParam2);
		*uParam0.f_14 = sParam1;
		*uParam0.f_15 = iParam2;
		*uParam0.f_9 = 1;
		return true;
	}
	return false;
}

void func_13(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	add_text_component_integer(iParam1);
	_display_help_text_from_string_label(0, 1, true, -1);
}

int func_14(auto uParam0)
{
	if (is_string_null_or_empty(*uParam0.f_14))
	{
		return 0;
	}
	if (!is_help_message_being_displayed())
	{
		return 0;
	}
	if (are_strings_equal(*uParam0, *uParam0.f_14) || are_strings_equal(*uParam0.f_2, *uParam0.f_14))
	{
		return func_16(*uParam0.f_14, *uParam0.f_15);
	}
	return func_15(*uParam0.f_14);
}

int func_15(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

int func_16(char* sParam0, int iParam1)
{
	_0x0A24DA3A41B718F5(sParam0);
	add_text_component_integer(iParam1);
	return _0x10BDDBFC529428DD(0);
}

int func_17(auto uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (*uParam0.f_6 == 0)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			return true;
		}
	}
	else if (*uParam0.f_6 == 1)
	{
		if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			return true;
		}
		if (func_3(PLAYER::PLAYER_PED_ID(), 0) != -1)
		{
			return true;
		}
	}
	if (*uParam0.f_11 == 0)
	{
		return !func_20(PLAYER::PLAYER_PED_ID(), *uParam0.f_1, *uParam0.f_10 + 2f);
	}
	Var0 = {func_18(*uParam0.f_16, 2f)};
	return !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, true, 0);
}

struct<8> func_18(struct<8> Param0, float fParam1)
{
	struct<8> Var0;
	Vector3 vVar8;
	
	Var0 = 2;
	vVar8 = {func_19(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8)};
	Var0[0 /*3*/] = {Param0[0 /*3*/] - vVar8};
	Var0[1 /*3*/] = {Param0[1 /*3*/] + vVar8};
	Var0.f_7 = Param0.f_7 + fParam8 * 2f;
	return Var0;
}

Vector3 func_19(Vector3 vParam0)
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

int func_20(int iParam0, Vector3 vParam1, float fParam2)
{
	return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), vParam1) <= fParam4 * fParam4;
}

bool func_21(auto uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (func_14(uParam0) || !is_help_message_being_displayed())
	{
		clear_help(1);
		func_22(sParam1);
		*uParam0.f_14 = sParam1;
		*uParam0.f_15 = 0;
		*uParam0.f_9 = 1;
		return true;
	}
	return false;
}

void func_22(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

void func_23(auto uParam0)
{
	if (func_14(uParam0))
	{
		clear_help(1);
	}
	*uParam0.f_14 = 0;
	*uParam0.f_15 = 0;
	if (*uParam0.f_9 == 1)
	{
		*uParam0.f_9 = 0;
	}
}

int func_24()
{
	int iVar0;
	
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		return false;
	}
	iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
	if (is_entity_on_fire(iVar0))
	{
		return true;
	}
	if (func_28(iVar0))
	{
		return true;
	}
	if (func_25(iVar0, 3))
	{
		return true;
	}
	return !is_vehicle_driveable(iVar0, 0);
}

bool func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_26(iParam0))
	{
		iVar0 = 0;
		if (is_vehicle_tyre_burst(iParam0, false, 0) && is_vehicle_tyre_burst(iParam0, true, 0))
		{
			return true;
		}
		if (is_vehicle_tyre_burst(iParam0, 4, 0) && is_vehicle_tyre_burst(iParam0, 5, 0))
		{
			return true;
		}
		if (is_vehicle_tyre_burst(iParam0, false, 0))
		{
			iVar0++;
		}
		if (is_vehicle_tyre_burst(iParam0, true, 0))
		{
			iVar0++;
		}
		if (is_vehicle_tyre_burst(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (is_vehicle_tyre_burst(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_26(int iParam0)
{
	if (func_27(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_27(int iParam0)
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

bool func_28(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
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

int func_29()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return func_36(player_id());
	}
	switch (func_31())
	{
		case 2:
			return func_30(2);
		
		case 0:
			return func_30(0);
		
		case 1:
			return func_30(1);
		
		default:
	}
	return 0;
}

auto func_30(int iParam0)
{
	return Global_52923[iParam0];
}

auto func_31()
{
	func_32();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_32()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER::PLAYER_PED_ID());
			if (func_33(iVar0) && (!func_5(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_33(Global_101154.f_1826.f_539.f_3549))
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

int func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

auto func_36(int iParam0)
{
	auto uVar0;
	
	uVar0 = func_37(iParam0);
	return uVar0;
}

int func_37(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == player_id())
		{
			return _0xA40F9C2623F6A8B5(-1);
		}
		else if (func_38(iParam0))
		{
			return Global_1587523[iParam0 /*444*/].f_195.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_38(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2428492.f_1, iParam0);
	}
	return true;
}

void func_39(auto uParam0, int iParam1)
{
	*uParam0.f_13 = iParam1;
	func_23(uParam0);
}

int func_40(auto uParam0)
{
	func_68(PLAYER::PLAYER_PED_ID());
	if (*uParam0 == 0)
	{
		return false;
	}
	if (func_42(0))
	{
		return false;
	}
	if (func_41())
	{
		return false;
	}
	if (*uParam0.f_6 == 0)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			return false;
		}
	}
	else if (*uParam0.f_6 == 1)
	{
		if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			return false;
		}
		if (func_3(PLAYER::PLAYER_PED_ID(), 0) != -1)
		{
			return false;
		}
	}
	if (*uParam0.f_11 == 1)
	{
		return is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), *(uParam0.f_16[0 /*3*/]), *(uParam0.f_16[1 /*3*/]), *uParam0.f_16.f_7, 0, true, 0);
	}
	return func_20(PLAYER::PLAYER_PED_ID(), *uParam0.f_1, *uParam0.f_10);
}

int func_41()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

int func_42(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_43(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_49())
		{
			return false;
		}
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_system_ui_being_displayed())
	{
		return false;
	}
	if (func_41())
	{
		return false;
	}
	if (Global_55743)
	{
		return false;
	}
	if (func_42(0))
	{
		return false;
	}
	if (func_48(0))
	{
		return false;
	}
	if (func_44(player_id()))
	{
		return false;
	}
	return true;
}

bool func_44(int iParam0)
{
	if (func_47(iParam0))
	{
		return true;
	}
	if (func_45(iParam0))
	{
		return true;
	}
	return false;
}

int func_45(auto uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return func_46(uParam0, 9);
	}
	return false;
}

int func_46(auto uParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[uParam0 /*174*/].f_10.f_4, iParam1);
}

int func_47(auto uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

bool func_48(int iParam0)
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

bool func_49()
{
	if (Global_35711 == 15)
	{
		return false;
	}
	return true;
}

void func_50(auto uParam0)
{
	if (*uParam0.f_11 == 1)
	{
		func_52(uParam0.f_16, 255, 100, 0, 100);
	}
	else
	{
		func_51(*uParam0.f_1, *uParam0.f_10, 0, 0, 255, 255, 32);
	}
}

void func_51(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 fVar8;
	
	fVar1 = 360f / to_float(iParam8);
	vVar2 = {vParam0};
	vVar5 = {vParam0};
	fVar8 = 0f;
	vVar2 = {vParam0};
	vVar2.x += sin(fVar8 - fVar1) * fParam3;
	vVar2.y += cos(fVar8 - fVar1) * fParam3;
	iVar0 = 0;
	while (iVar0 <= iParam8)
	{
		vVar5 = {vParam0};
		vVar5.x += sin(fVar8) * fParam3;
		vVar5.y += cos(fVar8) * fParam3;
		unk_0x0A25F80D5BADC013(vVar2, vVar5, iParam4, iParam5, iParam6, iParam7);
		vVar2 = {vVar5};
		fVar8 += fVar1;
		iVar0++;
	}
}

void func_52(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_53(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), *uParam0.f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_53(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	Vector3 vVar7;
	Vector3 vVar10;
	Vector3[] vVar13 = new Vector3[8];
	int iVar38;
	
	if (fParam6 == 0f)
	{
		return;
	}
	vVar0 = {func_19(vParam3 - vParam0)};
	vVar3 = {func_54(vVar0, 0f, 0f, 1f)};
	fVar6 = fParam6 / 2f;
	vVar7 = {vParam0};
	vVar10 = {vParam3};
	vVar10.z = vParam0.z;
	vVar13[0 /*3*/] = {vVar7 - vVar3 * Vector(fVar6, fVar6, fVar6)};
	vVar13[1 /*3*/] = {vVar7 + vVar3 * Vector(fVar6, fVar6, fVar6)};
	vVar13[2 /*3*/] = {vVar10 + vVar3 * Vector(fVar6, fVar6, fVar6)};
	vVar13[3 /*3*/] = {vVar10 - vVar3 * Vector(fVar6, fVar6, fVar6)};
	unk_0x0A25F80D5BADC013(vVar13[0 /*3*/], vVar13[1 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[1 /*3*/], vVar13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[2 /*3*/], vVar13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[3 /*3*/], vVar13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		vVar13[4 + iVar38 /*3*/] = {vVar13[iVar38 /*3*/]};
		vVar13[4 + iVar38 /*3*/].f_2 = vParam3.z;
		iVar38++;
	}
	unk_0x0A25F80D5BADC013(vVar13[4 /*3*/], vVar13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[5 /*3*/], vVar13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[6 /*3*/], vVar13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[7 /*3*/], vVar13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[0 /*3*/], vVar13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[1 /*3*/], vVar13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[2 /*3*/], vVar13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[3 /*3*/], vVar13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_54(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.y * vParam3.z - vParam0.z * vParam3.y, vParam0.z * vParam3.x - vParam0.x * vParam3.z, vParam0.x * vParam3.y - vParam0.y * vParam3.x;
}

void func_55(int iParam0)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	auto uVar5;
	int iVar8;
	
	if (!func_40(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (iLocal_117[iParam0] == 0)
	{
		if (GAMEPLAY::GET_GAME_TIMER() > uLocal_114[iParam0])
		{
			iLocal_117[iParam0] = _0xE6AC6C45FBE83004(vLocal_107[iParam0 /*3*/], vLocal_107[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 4);
		}
	}
	else
	{
		iVar0 = _get_raycast_result(iLocal_117[iParam0], &iVar8, &uVar2, &uVar5, &iVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (is_entity_a_vehicle(iVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_117[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_117[iParam0] = 0;
		}
		uLocal_114[iParam0] = GAMEPLAY::GET_GAME_TIMER() + 250;
	}
}

void func_56(int iParam0)
{
	if (iParam0)
	{
	}
}

bool func_57(int iParam0)
{
	if (!is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (is_vehicle_door_damaged(iParam0, false))
	{
		return true;
	}
	if (is_vehicle_door_damaged(iParam0, true))
	{
		return true;
	}
	if (is_vehicle_door_damaged(iParam0, 2))
	{
		return true;
	}
	if (is_vehicle_door_damaged(iParam0, 3))
	{
		return true;
	}
	if (is_vehicle_a_convertible(iParam0, 1))
	{
		if (get_convertible_roof_state(iParam0) == 6)
		{
			return true;
		}
	}
	return false;
}

bool func_58(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!func_27(iParam0))
	{
		return false;
	}
	if (!does_vehicle_have_roof(iParam0))
	{
		return true;
	}
	if (is_vehicle_attached_to_trailer(iParam0))
	{
		return true;
	}
	if (!is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (is_entity_on_fire(iParam0))
	{
		return true;
	}
	if (func_59(iParam0))
	{
		return true;
	}
	get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar0, &vVar3);
	if (absf(vVar3.x - vVar0.x) > 3.4f)
	{
		return true;
	}
	if (absf(vVar3.z - vVar0.z) > 2.9f)
	{
		return true;
	}
	if (Global_69489)
	{
		if (!network_has_control_of_entity(iParam0))
		{
			return false;
		}
	}
	if (is_vehicle_a_convertible(iParam0, 1) && !does_vehicle_have_roof(iParam0))
	{
		return true;
	}
	if (!is_vehicle_a_convertible(iParam0, 1) && !does_vehicle_have_roof(iParam0))
	{
		return true;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("btype") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("btype3"))
	{
		if (((((func_27(get_ped_in_vehicle_seat(iParam0, 3)) || func_27(get_ped_in_vehicle_seat(iParam0, 4))) || func_27(get_ped_in_vehicle_seat(iParam0, 5))) || func_27(get_ped_in_vehicle_seat(iParam0, 6))) || func_27(get_ped_in_vehicle_seat(iParam0, 7))) || func_27(get_ped_in_vehicle_seat(iParam0, 8)))
		{
			return true;
		}
	}
	return false;
}

bool func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_60(iVar0))
	{
		return true;
	}
	if (iVar0 == joaat("regina"))
	{
		if (is_vehicle_extra_turned_on(iParam0, 2))
		{
			return true;
		}
		if (is_vehicle_extra_turned_on(iParam0, 3) && is_vehicle_extra_turned_on(iParam0, 4))
		{
			return true;
		}
	}
	if (iVar0 == joaat("banshee") && is_vehicle_extra_turned_on(iParam0, 1))
	{
		return true;
	}
	if (iVar0 == joaat("peyote") && is_vehicle_extra_turned_on(iParam0, 1))
	{
		return true;
	}
	if (iVar0 == joaat("coquette") && !does_vehicle_have_roof(iParam0))
	{
		return true;
	}
	if (iVar0 == joaat("manana") && is_vehicle_extra_turned_on(iParam0, 1))
	{
		return true;
	}
	if (iVar0 == joaat("mesa") && !is_vehicle_extra_turned_on(iParam0, 1))
	{
		return true;
	}
	if (iVar0 == joaat("voltic") && is_vehicle_extra_turned_on(iParam0, 1))
	{
		return true;
	}
	if (iVar0 == joaat("bobcatxl") && !is_vehicle_extra_turned_on(iParam0, 1))
	{
		return true;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (is_vehicle_extra_turned_on(iParam0, 3) && !is_vehicle_extra_turned_on(iParam0, 7))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_60(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
			return true;
		
		default:
	}
	if (iParam0 == get_hash_key("ratloader2"))
	{
		return true;
	}
	if (!is_this_model_a_car(iParam0))
	{
		return true;
	}
	if (get_num_dlc_vehicles() > 0)
	{
		if (iParam0 == get_hash_key("bifta"))
		{
			return true;
		}
		if (iParam0 == get_hash_key("kalahari"))
		{
			return true;
		}
	}
	return false;
}

auto func_61(int iParam0, Vector3 vParam1, int iParam2)
{
	Vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	else
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	}
	return get_distance_between_coords(vVar0, vParam1, iParam4);
}

void func_62()
{
	func_66(&(Local_40[0 /*24*/]), 1, "Carwash1", func_67(156), 15, "", 0, 4f);
	func_66(&(Local_40[1 /*24*/]), 1, "Carwash2", func_67(157), 15, "", 0, 4f);
	func_64(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_64(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_63(&uLocal_89, 0);
	vLocal_107[0 /*3*/] = {47.6f, -1392f, 29.4f};
	vLocal_107[1 /*3*/] = {-700f, -925.3f, 19f};
}

void func_63(auto uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	*uParam0.f_1 = "";
	*uParam0.f_3 = "CWASH_NOWAY";
	*uParam0.f_4 = "CWASH_WANTED";
	*uParam0.f_5 = "CWASH_CARBROKE";
	*uParam0.f_6 = "CWASH_BLOCKED";
	*uParam0.f_7 = "CWASH_WRONGWAY";
	*uParam0.f_8 = "CWASH_UPSIDEDO";
	*uParam0.f_16 = iParam1;
	if (!Global_69489)
	{
		*uParam0.f_2 = "CWASH_NOMONEY";
		return;
	}
	if (is_ps3_version() || is_orbis_version())
	{
		*uParam0.f_2 = "CWASH_POOR_PSN";
	}
	else if (is_xbox360_version() || is_durango_version())
	{
		*uParam0.f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		*uParam0.f_2 = "CWASH_POOR_STD";
	}
}

void func_64(auto uParam0, Vector3 vParam1, float fParam2)
{
	*uParam0.f_12 = {func_19(vParam1 * Vector(5f, 5f, 5f))};
	*uParam0.f_15 = func_65(fParam4, 0f, 360f);
}

float func_65(float fParam0, float fParam1, float fParam2)
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

void func_66(auto uParam0, int iParam1, char* sParam2, Vector3 vParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	*uParam0.f_5 = sParam2;
	*uParam0.f_1 = {vParam3};
	*uParam0.f_4 = sParam7;
	*uParam0.f_9 = iParam6;
	*uParam0.f_7 = iParam8;
	*uParam0.f_6 = iParam1;
	*uParam0.f_11 = 0;
	*uParam0 = 1;
	*uParam0.f_12 = {0f, 0f, 0f};
	*uParam0.f_15 = 360f;
	if (iParam1 == 0)
	{
		*uParam0.f_10 = 2.75f;
	}
	else
	{
		*uParam0.f_10 = 2.75f * 2f;
	}
	if (fParam9 > 0f)
	{
		*uParam0.f_10 = fParam9;
	}
}

Vector3 func_67(int iParam0)
{
	auto uVar0;
	
	uVar0 = iParam0;
	return Global_25433[uVar0 /*23*/][0 /*3*/];
}

int func_68(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

void func_69()
{
	func_70(&Local_40);
	func_23(&uLocal_89);
	terminate_this_thread();
}

void func_70(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_71(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_71(auto uParam0)
{
	*uParam0 = 0;
}

