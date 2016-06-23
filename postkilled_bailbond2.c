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
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
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
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 4;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 3;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	vector3[] vLocal_88 = new vector3[5];
	struct<8>[] Local_104 = new struct<8>[5];
	int iLocal_145 = 0;
	struct<9> Local_146 = 4;
#endregion

void main()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	iLocal_79 = {Local_146};
	if (has_force_cleanup_occurred(19))
	{
		func_19();
	}
	if (!is_ped_injured(player_ped_id()))
	{
		func_18();
	}
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = get_game_timer();
	while (true)
	{
		if (!func_9())
		{
			func_19();
		}
		if (get_game_timer() - iVar6 > 100)
		{
			if (!is_ped_injured(player_ped_id()))
			{
				vVar0 = {get_entity_coords(player_ped_id(), 0)};
				if (func_8(iLocal_79[iVar3]))
				{
					if (vdist2(vVar0, get_entity_coords(iLocal_79[iVar3], 0)) >= IntToFloat(iVar5 * iVar5) && is_entity_occluded(iLocal_79[iVar3]))
					{
						func_7(&(Local_104[iVar3 /*8*/]));
						func_6(&(iLocal_79[iVar3]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_79[iVar3], &(Local_104[iVar3 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1);
					}
				}
				else if (does_entity_exist(iLocal_79[iVar3]))
				{
					func_6(&(iLocal_79[iVar3]), 1, 0, 1);
				}
				if (func_3(iLocal_79.f_5[iVar4]))
				{
					if (vdist2(vVar0, vLocal_88[iVar4 /*3*/]) >= IntToFloat(iVar5 * iVar5))
					{
						if (is_entity_occluded(iLocal_79.f_5[iVar4]) || is_ped_in_vehicle(player_ped_id(), iLocal_79.f_5[iVar4], 0))
						{
							func_2(&(iLocal_79.f_5[iVar4]));
						}
					}
				}
				else if (does_entity_exist(iLocal_79.f_5[iVar4]))
				{
					func_2(&(iLocal_79.f_5[iVar4]));
				}
				iVar3++;
				if (iVar3 == iLocal_79)
				{
					iVar3 = 0;
				}
				iVar4++;
				if (iVar4 == iLocal_79.f_5)
				{
					iVar4 = 0;
				}
				if (func_1())
				{
					func_19();
				}
			}
			iVar6 = get_game_timer();
		}
		wait(0);
	}
}

bool func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iLocal_79.f_5 - 1)
	{
		if (does_entity_exist(iLocal_79.f_5[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_79 - 1)
	{
		if (does_entity_exist(iLocal_79[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_2(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		is_entity_dead(*iParam0, 0);
		if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

bool func_3(int iParam0)
{
	if (func_4(iParam0))
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

bool func_4(int iParam0)
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

bool func_5(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = get_player_index();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!is_ped_injured(iParam0))
	{
		if (!does_ped_have_ai_blip(iParam0))
		{
			if (iParam8 == -1)
			{
				_0xD30C50DF888D58B5(iParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			*uParam1.f_7 = iParam0;
			_0xE52B8E7F85D39A08(iParam0, iParam2);
			_0x97C65887D4B37FA9(iParam0, fParam6);
			if (does_blip_exist(*uParam1))
			{
				set_blip_priority(*uParam1, 7);
			}
		}
		_0x0C4BBF625CA98C4E(iParam0, iParam4);
		hide_special_ability_lockon_operation(iParam0, iParam5);
		*uParam1 = _0x7CD934010E115C2C(iParam0);
		if (!is_bit_set(*uParam1.f_6, 2))
		{
			if (does_blip_exist(*uParam1))
			{
				if (!is_string_null_or_empty(sParam7))
				{
					begin_text_command_set_blip_name("MCUSTBLIP");
					add_text_component_substring_player_name(sParam7);
					end_text_command_set_blip_name(*uParam1);
				}
				set_bit(uParam1.f_6, 2);
			}
		}
		if (is_ped_in_any_vehicle(iParam0, 0))
		{
			*uParam1.f_1 = _0x56176892826A4FE8(iParam0);
			if (!is_bit_set(*uParam1.f_6, 3))
			{
				if (does_blip_exist(*uParam1.f_1))
				{
					set_blip_priority(*uParam1.f_1, 7);
					set_bit(uParam1.f_6, 3);
				}
			}
		}
		else if (does_blip_exist(*uParam1.f_1))
		{
			*uParam1.f_1 = 0;
			clear_bit(uParam1.f_6, 3);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_ped_injured(*iParam0))
		{
			set_entity_load_collision_flag(*iParam0, false);
			if (iParam3 == 0)
			{
				clear_ped_secondary_task(*iParam0);
			}
			set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				set_blocking_of_non_temporary_events(*iParam0, false);
			}
		}
		set_ped_as_no_longer_needed(iParam0);
	}
}

void func_7(int iParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
		iVar0 = true;
	}
	if (does_blip_exist(*iParam0.f_1))
	{
		remove_blip(iParam0.f_1);
		iVar0 = true;
	}
	if (does_entity_exist(*iParam0.f_7))
	{
		if (!is_ped_injured(*iParam0.f_7))
		{
			if (does_ped_have_ai_blip(*iParam0.f_7))
			{
				_0xD30C50DF888D58B5(*iParam0.f_7, 0);
			}
		}
		iVar0 = true;
	}
	if (iVar0)
	{
		*iParam0 = {Var1};
	}
}

bool func_8(int iParam0)
{
	if (func_4(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_9()
{
	if (_get_number_of_instances_of_streamed_script(joaat("bailbond2")) == 0)
	{
		if (!func_16(4))
		{
			return false;
		}
	}
	if (Global_88531 == 1)
	{
		return false;
	}
	if (is_cutscene_playing())
	{
		return false;
	}
	if (Global_25122)
	{
		return false;
	}
	if (func_10() != 2)
	{
		return false;
	}
	return true;
}

var func_10()
{
	func_11();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_15(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_14(player_ped_id());
			if (func_13(iVar0) && (!func_12(14) || Global_100106))
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

int func_12(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
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

int func_16(int iParam0)
{
	return func_17(iParam0, Global_35711);
}

bool func_17(int iParam0, int iParam1)
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

void func_18()
{
	int iVar0;
	
	add_relationship_group("ENEMIES", &iLocal_145);
	set_relationship_between_groups(5, 1862763509, iLocal_145);
	set_relationship_between_groups(5, iLocal_145, 1862763509);
	iVar0 = 0;
	while (iVar0 <= iLocal_79.f_5 - 1)
	{
		if (func_3(iLocal_79.f_5[iVar0]))
		{
			set_entity_as_mission_entity(iLocal_79.f_5[iVar0], true, 1);
			vLocal_88[iVar0 /*3*/] = {get_entity_coords(iLocal_79.f_5[iVar0], 0)};
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_79 - 1)
	{
		if (func_8(iLocal_79[iVar0]))
		{
			set_entity_as_mission_entity(iLocal_79[iVar0], true, 1);
			set_ped_relationship_group_hash(iLocal_79[iVar0], iLocal_145);
			func_5(iLocal_79[iVar0], &(Local_104[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1);
		}
		iVar0++;
	}
}

void func_19()
{
	int iVar0;
	
	clear_relationship_between_groups(5, 1862763509, iLocal_145);
	clear_relationship_between_groups(5, iLocal_145, 1862763509);
	iVar0 = 0;
	while (iVar0 <= iLocal_79 - 1)
	{
		func_7(&(Local_104[iVar0 /*8*/]));
		func_6(&(iLocal_79[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_79.f_5 - 1)
	{
		func_2(&(iLocal_79.f_5[iVar0]));
		iVar0++;
	}
	terminate_this_thread();
}

