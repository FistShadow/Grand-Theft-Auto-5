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
	int iLocal_43 = 0;
	var uLocal_44 = 8;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 2;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 8;
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
	int iLocal_78 = 0;
	struct<858> Local_79 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	vector3 vLocal_948 = 0;
	vector3 vLocal_951 = 0;
	int iLocal_954 = 0;
	var uLocal_955 = 0;
	int[] iLocal_956 = new int[2];
	int iLocal_959 = 0;
	struct<5> Local_960 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 21;
	var uLocal_968 = 6;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int[] iLocal_977 = new int[2];
	int iLocal_980 = 0;
	int iLocal_981 = 0;
	int iLocal_982 = 0;
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
	iLocal_78 = joaat("p_amb_phone_01");
	vLocal_948 = {0f, 0f, 0f};
	vLocal_951 = {0f, 0f, 0f};
	iLocal_954 = -1;
	iLocal_975 = joaat("s_m_m_autoshop_02");
	iLocal_976 = joaat("taxi");
	iLocal_980 = 1;
	if (has_force_cleanup_occurred(35))
	{
		if (get_cause_of_most_recent_force_cleanup() == 1)
		{
			func_948(0);
		}
		else
		{
			func_948(5);
		}
		func_941();
	}
	func_931();
	wait(0);
	while (iLocal_980)
	{
		wait(0);
		switch (Local_79)
		{
			case 0:
				func_930(iLocal_982);
				if (Local_79.f_1 != 7)
				{
					func_948(Local_79.f_1);
				}
				break;
			
			case 1:
				func_920();
				if (Local_79.f_1 != 7)
				{
					func_948(Local_79.f_1);
				}
				break;
			
			case 2:
				if (Local_79.f_2)
				{
					Local_79.f_2 = 0;
					func_911();
				}
				func_844();
				if (Local_79.f_1 != 7)
				{
					func_948(Local_79.f_1);
				}
				break;
			
			case 3:
				if (func_843())
				{
					func_831();
				}
				break;
			
			case 4:
				if (func_830())
				{
					func_828();
				}
				break;
			
			case 5:
				if (func_794())
				{
					func_831();
				}
				break;
			
			case 6:
				if (Local_79.f_2)
				{
					Local_79.f_2 = 0;
					func_788();
				}
				func_292();
				if (Local_79.f_1 != 7)
				{
					func_948(Local_79.f_1);
				}
				break;
			
			case 7:
				if (func_4(1))
				{
					func_1();
				}
				break;
			
			case 8:
				if (func_4(0))
				{
					func_1();
				}
				break;
			
			default:
				break;
		}
	}
	func_941();
}

void func_1()
{
	clear_prints();
	func_2();
	iLocal_980 = 0;
}

bool func_2()
{
	if (func_3(0))
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
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

bool func_4(int iParam0)
{
	struct<151> Var0;
	int iVar154;
	
	if (_is_interior_rendering_disabled())
	{
		func_287();
		func_286(4);
		return false;
	}
	else if (func_285())
	{
		if (func_284())
		{
			func_286(3);
			return false;
		}
	}
	else if (!is_player_playing(player_id()) || is_ped_injured(player_ped_id()))
	{
		func_286(0);
		return false;
	}
	else if ((func_281(6) && !func_280(6)) && !func_280(7))
	{
		func_286(1);
		return false;
	}
	else
	{
		Var0 = 6;
		Var0.f_112 = 2;
		Var0.f_140 = 3;
		Var0.f_150 = 3;
		if (iParam0)
		{
			func_279(Local_79.f_644, &Var0);
		}
		else
		{
			func_278(Global_87438, &Var0);
		}
		if (func_68(&Var0, &(Local_79.f_650), &(Local_79.f_259), &(Local_79.f_257), &(Local_79.f_651), Local_79.f_56.f_7, Local_79.f_109.f_7, &(Local_79.f_649), Local_79.f_56.f_8, Local_79.f_109.f_8))
		{
			iVar154 = 0;
			while (iVar154 < 9)
			{
				if (func_67(iVar154) == 4 && func_66(iVar154) == 0)
				{
					func_65(iVar154);
				}
				iVar154++;
			}
			if (Local_79.f_56.f_1 != 145)
			{
				playstats_friend_activity(func_64(Local_79.f_56.f_1), 0);
			}
			if (Local_79.f_109.f_1 != 145)
			{
				playstats_friend_activity(func_64(Local_79.f_109.f_1), 0);
			}
			func_5(&(Local_79.f_3), 0, 1);
			func_5(&(Local_79.f_56), 0, 1);
			func_5(&(Local_79.f_109), 0, 1);
			return true;
		}
	}
	return false;
}

void func_5(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 != 0)
	{
		if (func_63(*uParam0.f_1))
		{
			clear_bit(&Global_87462, *uParam0.f_1);
		}
		func_61(uParam0);
		func_60(uParam0, 0);
		func_54(uParam0);
		if (does_blip_exist(*uParam0.f_10))
		{
			remove_blip(uParam0.f_10);
		}
		if (does_blip_exist(*uParam0.f_11))
		{
			remove_blip(uParam0.f_11);
		}
		if (does_entity_exist(*uParam0.f_9))
		{
			if (is_entity_attached_to_any_ped(*uParam0.f_9))
			{
				detach_entity(*uParam0.f_9, 1, true);
			}
			delete_object(uParam0.f_9);
		}
		func_52(uParam0);
		func_49(uParam0);
		if (*uParam0.f_35 != 0)
		{
			set_model_as_no_longer_needed(*uParam0.f_35);
		}
		if (*uParam0.f_34 != 0)
		{
			set_model_as_no_longer_needed(*uParam0.f_34);
		}
		if (*uParam0.f_50)
		{
			func_48(*uParam0.f_1);
		}
		if (func_63(*uParam0.f_1) && (((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam2))
		{
			func_45(uParam0, 2, 0);
		}
		else
		{
			func_45(uParam0, 1, 0);
		}
		func_44(*uParam0.f_1, 1);
		func_43(uParam0);
		func_39(*uParam0.f_1);
		if (iParam1 == 1)
		{
			if (does_entity_exist(*uParam0.f_8) && does_entity_belong_to_this_script(*uParam0.f_8, 0))
			{
				delete_vehicle(uParam0.f_8);
			}
		}
		if (does_entity_exist(*uParam0.f_7) && *uParam0.f_7 != player_ped_id())
		{
			if (iParam1 == 0 || iParam1 == 1)
			{
				delete_ped(uParam0.f_7);
			}
			else if (iParam1 == 2)
			{
				set_ped_as_no_longer_needed(uParam0.f_7);
			}
			else if (iParam1 == 4)
			{
				func_38(*uParam0.f_7, *uParam0.f_1);
			}
			else if (iParam1 == 5)
			{
				func_14(*uParam0.f_7, *uParam0.f_1, Global_87458);
			}
			else if (iParam1 == 6)
			{
				func_11(*uParam0.f_7, *uParam0.f_1);
			}
			else if (iParam1 == 3)
			{
			}
		}
		func_6(uParam0);
	}
}

void func_6(var uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 145;
	*uParam0.f_2 = 25;
	StringCopy(uParam0.f_3, "", 16);
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	func_8(uParam0.f_15);
	*uParam0.f_21 = {0f, 0f, 0f};
	*uParam0.f_24 = {0f, 0f, 0f};
	*uParam0.f_27 = 0;
	*uParam0.f_28 = 0;
	func_7(uParam0.f_29);
	*uParam0.f_32 = 0;
	*uParam0.f_34 = 0;
	*uParam0.f_35 = 0;
	*uParam0.f_36 = 0;
	*uParam0.f_37 = 0;
	*uParam0.f_38 = 0;
	*uParam0.f_39 = 0;
	*uParam0.f_40 = 0;
	*uParam0.f_41 = 0;
	*uParam0.f_45 = 0;
	*uParam0.f_46 = 0;
	*uParam0.f_47 = 0;
	*uParam0.f_48 = 0;
	*uParam0.f_49 = 0;
	*uParam0.f_50 = 0;
	*uParam0.f_51 = 0;
	*uParam0.f_52 = 7;
}

void func_7(var uParam0)
{
	*uParam0.f_1 = 0f;
	*uParam0.f_2 = 0f;
	*uParam0 = 0;
}

void func_8(int iParam0)
{
	func_9(iParam0, 0f);
}

void func_9(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_10(is_bit_set(*iParam0, 4)) - fParam1;
	set_bit(iParam0, true);
	clear_bit(iParam0, 2);
	*iParam0.f_2 = 0f;
}

float func_10(int iParam0)
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

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_group_member(iParam0, func_13()))
		{
			remove_ped_from_group(iParam0);
		}
		set_ped_keep_task(iParam0, true);
		iVar0 = get_script_task_status(iParam0, -1146898486);
		if (iVar0 != 1 && iVar0 != 0)
		{
			clear_ped_tasks(iParam0);
			task_wander_standard(iParam0, 1193033728, 0);
		}
	}
	func_12(iParam0, iParam1, 5);
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	if (is_ped_injured(iParam0))
	{
		set_ped_as_no_longer_needed(&iParam0);
	}
	else if (!func_63(iParam1))
	{
		set_ped_as_no_longer_needed(&iParam0);
	}
	else if (Global_69489)
	{
		set_ped_as_no_longer_needed(&iParam0);
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("friends_controller")) == 0)
	{
		set_ped_as_no_longer_needed(&iParam0);
	}
	else if (func_280(2))
	{
		set_ped_as_no_longer_needed(&iParam0);
	}
	else if ((Global_35711 == 6 || Global_35711 == 7) && Global_87437 < 22)
	{
		set_ped_as_no_longer_needed(&iParam0);
	}
	else
	{
		if (!is_ped_injured(Global_87449[iParam1]))
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
		Global_87449[iParam1] = iParam0;
		Global_87453[iParam1] = iParam2;
	}
}

int func_13()
{
	return get_player_group(get_player_index());
}

void func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	var uVar8;
	var uVar9;
	int iVar10;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_group_member(iParam0, func_13()))
		{
			remove_ped_from_group(iParam0);
		}
		set_ped_keep_task(iParam0, true);
		clear_ped_tasks(iParam0);
		iVar0 = false;
		if (iParam2 == 44)
		{
			vVar1 = {1382.859f, -1706.069f, 62.8927f};
			iVar0 = true;
		}
		else if (iParam2 != -1)
		{
			iVar4 = Global_82399[iParam2 /*34*/].f_10;
			if (func_37(iVar4))
			{
				vVar5 = {func_32(iVar4, func_33())};
			}
			else
			{
				vVar5 = {func_32(iVar4, 0)};
			}
			vVar1 = {vVar5 + func_31(get_entity_coords(iParam0, 1) - vVar5) * Vector(50f, 50f, 50f)};
			if (func_15(vVar1, &vVar1, &uVar8, &uVar9, 1, 0, 1))
			{
				iVar0 = true;
			}
		}
		open_sequence_task(&iVar10);
		if (is_ped_in_any_vehicle(iParam0, 1))
		{
			task_leave_any_vehicle(false, 0, 0);
		}
		task_look_at_entity(false, player_ped_id(), 2000, 3072, 2);
		task_pause(false, get_random_int_in_range(800, 1200));
		if (iVar0)
		{
			task_follow_nav_mesh_to_coord(false, vVar1, 1f, -1, 0.25f, 5, 1193033728);
		}
		task_wander_standard(false, 1193033728, 0);
		close_sequence_task(iVar10);
		task_perform_sequence(iParam0, iVar10);
		clear_sequence_task(&iVar10);
	}
	func_12(iParam0, iParam1, 4);
}

bool func_15(vector3 vParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	while (true)
	{
		if (get_nth_closest_vehicle_node_with_heading(vParam0, iParam6, uParam3, uParam4, uParam5, 1, 3f, 0f))
		{
			if (func_16(*uParam3, 10f, 1f, 1f, 5f, iParam7, iParam8, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				return true;
			}
		}
		iParam6++;
		iVar0++;
		if (iVar0 > 75)
		{
			*uParam3 = {vParam0};
			return false;
		}
	}
	return false;
}

bool func_16(vector3 vParam0, float fParam1, float fParam2, float fParam3, Vector3 fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
{
	Global_2404956 = 0;
	if (fParam3 > 0f)
	{
		if (is_any_vehicle_near_point(vParam0, fParam3))
		{
			return false;
		}
	}
	if (fParam4 > 0f)
	{
		if (is_any_ped_near_point(vParam0.x, vParam0.y, vParam0.z + 1f, fParam4) || is_any_ped_near_point(vParam0, fParam4))
		{
			return false;
		}
	}
	if (fParam5 > 0f)
	{
		if (is_any_object_near_point(vParam0, fParam5, iParam18))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam13)
	{
		if (get_number_of_fires_in_range(vParam0, 2.5f) > 0)
		{
			return false;
		}
	}
	Global_2404956++;
	if (fParam14 > 0f)
	{
		if (func_24(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_17(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_17(vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_23(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (get_distance_between_coords(func_22(player_id()), vParam0, 1) <= fVar2 + fParam3)
				{
					if (is_sphere_visible(vParam0, fParam3))
					{
						return true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_23(iVar1, 1, 1))
		{
			if (!func_19(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_18(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!get_player_team(iVar1) == -1)
							{
								if (get_player_team(iVar1) == get_player_team(player_id()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!iParam7)
						{
							if ((iParam5 || (iParam5 == 0 && get_player_team(iVar1) != get_player_team(player_id()))) || get_player_team(iVar1) == -1)
							{
								if (get_distance_between_coords(func_22(iVar1), vParam0, 1) <= fVar2 + fParam3)
								{
									if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
									{
										return true;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam8 || get_player_team(iVar1) == -1)
						{
							if (get_distance_between_coords(func_22(iVar1), vParam0, 1) <= fVar2 + fParam3)
							{
								if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_18(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_20(-1, 0) == 8;
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

int func_20(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

var func_21()
{
	return Global_1312747;
}

Vector3 func_22(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

bool func_23(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
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

bool func_24(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_23(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!is_ped_injured(get_player_ped(iVar1)) && func_18(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_25(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_22(iVar1), vParam0, 1) < fParam3)
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_25(int iParam0)
{
	if (func_30(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_29(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_26(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_28(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_28(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_27()
{
	return -1;
}

int func_28(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_27();
}

struct<13> func_29(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_30(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_29(iParam0)};
		Global_2459453 = {func_29(iParam1)};
		if (network_clan_player_is_active(&Global_2459440))
		{
			if (network_clan_player_is_active(&Global_2459453))
			{
				network_clan_player_get_desc(&Global_2459370, 35, &Global_2459440);
				network_clan_player_get_desc(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
				{
					return true;
				}
			}
		}
	}
	return false;
}

Vector3 func_31(vector3 vParam0)
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

Vector3 func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_25433[iVar0 /*23*/][iParam1 /*3*/];
}

var func_33()
{
	func_34();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_34()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_36(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_35(player_ped_id());
			if (func_63(iVar0) && (!func_280(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_63(Global_101154.f_1826.f_539.f_3549))
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
	if (func_63(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return is_bit_set(Global_25433[iVar0 /*23*/].f_11, 19);
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_group_member(iParam0, func_13()))
		{
			remove_ped_from_group(iParam0);
		}
		set_ped_keep_task(iParam0, true);
		iVar0 = get_script_task_status(iParam0, 1805844857);
		if (iVar0 != 1 && iVar0 != 0)
		{
			clear_ped_tasks(iParam0);
			task_smart_flee_ped(iParam0, player_ped_id(), 5000f, -1, 1, 0);
		}
	}
	func_12(iParam0, iParam1, 6);
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_41(iVar0, &iVar1, &iVar2);
		if (iVar1 == iParam0 || iVar2 == iParam0)
		{
			iVar4 = func_67(iVar0);
			if (iVar4 == 3 || iVar4 == 4)
			{
				func_40(iVar0, 0);
				iVar3 = 1;
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_40(int iParam0, int iParam1)
{
	if (iParam0 < 9)
	{
		Global_87467[iParam0 /*2*/] = iParam1;
		if (iParam1 == 0)
		{
			Global_87467[iParam0 /*2*/].f_1 = 0;
		}
	}
}

bool func_41(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 != 9 && iParam0 != 10)
	{
		*uParam1 = func_42(Global_101154.f_16793.f_175[iParam0 /*19*/]);
		*uParam2 = func_42(Global_101154.f_16793.f_175[iParam0 /*19*/].f_1);
		return true;
	}
	return false;
}

int func_42(int iParam0)
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
			return 19;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 17;
			break;
	}
	return 145;
}

void func_43(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (*uParam0.f_2 < 24)
		{
			if (*uParam0.f_28 != 0)
			{
				remove_scenario_blocking_area(*uParam0.f_28, 0);
				*uParam0.f_28 = 0;
			}
		}
	}
}

void func_44(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				Global_86617[8] = 140;
				break;
			
			case 1:
				break;
			
			case 2:
				Global_86617[9] = 140;
				break;
			
			case 19:
				Global_86617[6] = 140;
				break;
			
			case 14:
				Global_86617[0] = 140;
				break;
			
			case 17:
				Global_86617[2] = 140;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (Global_86617[8] == 140)
				{
					Global_86617[8] = 141;
				}
				break;
			
			case 1:
				break;
			
			case 2:
				if (Global_86617[9] == 140)
				{
					Global_86617[9] = 141;
				}
				break;
			
			case 19:
				if (Global_86617[6] == 140)
				{
					Global_86617[6] = 141;
				}
				break;
			
			case 14:
				if (Global_86617[0] == 140)
				{
					Global_86617[0] = 141;
				}
				break;
			
			case 17:
				if (Global_86617[2] == 140)
				{
					Global_86617[2] = 141;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_45(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_50 || iParam2)
	{
		if (Local_79.f_3.f_1 != 145 && Local_79.f_3.f_1 != *uParam0.f_1)
		{
			func_46(Local_79.f_3.f_1, *uParam0.f_1, iParam1);
		}
		if (Local_79.f_56.f_50 && Local_79.f_56.f_1 != *uParam0.f_1)
		{
			func_46(Local_79.f_56.f_1, *uParam0.f_1, iParam1);
		}
		if (Local_79.f_109.f_50 && Local_79.f_109.f_1 != *uParam0.f_1)
		{
			func_46(Local_79.f_109.f_1, *uParam0.f_1, iParam1);
		}
	}
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_64(iParam0);
	iVar1 = func_64(iParam1);
	iVar2 = func_47(iVar0, iVar1);
	if (iVar2 != 10)
	{
		func_8(&(Global_101154.f_16793.f_175[iVar2 /*19*/].f_5));
		Global_101154.f_16793.f_175[iVar2 /*19*/].f_8 = iParam2;
	}
}

int func_47(int iParam0, int iParam1)
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

void func_48(int iParam0)
{
	if (((iParam0 == 144 || iParam0 == 145) || iParam0 == 147) || iParam0 == 148)
	{
		return;
	}
	Global_36263[iParam0] = get_game_timer() + 20000;
}

void func_49(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (!is_ped_injured(*uParam0.f_7))
		{
			set_ped_suffers_critical_hits(*uParam0.f_7, 1);
			set_ped_can_be_knocked_off_vehicle(*uParam0.f_7, 0);
			set_ped_config_flag(*uParam0.f_7, 32, true);
			set_ped_config_flag(*uParam0.f_7, 107, false);
			if (does_group_exist(func_13()) && is_ped_group_member(*uParam0.f_7, func_13()))
			{
				set_ped_can_teleport_to_group_leader(*uParam0.f_7, func_13(), 0);
			}
			set_entity_only_damaged_by_player(*uParam0.f_7, false);
			if (*uParam0.f_1 != 0)
			{
				if (func_51(4, *uParam0.f_7))
				{
					func_50(4, *uParam0.f_7, 0);
				}
			}
			if (*uParam0.f_7 != player_ped_id())
			{
				if (is_ped_in_group(*uParam0.f_7))
				{
					remove_ped_from_group(*uParam0.f_7);
				}
			}
		}
	}
}

void func_50(int iParam0, int iParam1, int iParam2)
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

bool func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_34834[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_34834[iParam0 /*31*/].f_25[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_52(var uParam0)
{
	char* sVar0;
	
	if (func_53(uParam0, &sVar0))
	{
		remove_anim_dict(&sVar0);
	}
}

bool func_53(var uParam0, char* sParam1)
{
	if (*uParam0.f_1 == 0)
	{
		StringCopy(sParam1, "friends@frm@ig_1", 64);
		return true;
	}
	else if (*uParam0.f_1 == 1)
	{
		StringCopy(sParam1, "friends@frf@ig_1", 64);
		return true;
	}
	else if (*uParam0.f_1 == 2)
	{
		StringCopy(sParam1, "friends@frt@ig_1", 64);
		return true;
	}
	else if (*uParam0.f_1 == 19)
	{
		StringCopy(sParam1, "friends@frl@ig_1", 64);
		return true;
	}
	else if (*uParam0.f_1 == 14)
	{
		StringCopy(sParam1, "friends@frj@ig_1", 64);
		return true;
	}
	else if (*uParam0.f_1 == 17)
	{
		StringCopy(sParam1, "friends@fra@ig_1", 64);
		return true;
	}
	return false;
}

void func_54(var uParam0)
{
	if (does_blip_exist(*uParam0.f_11))
	{
		remove_blip(uParam0.f_11);
	}
	if (does_blip_exist(*uParam0.f_10))
	{
		remove_blip(uParam0.f_10);
	}
	if (*uParam0.f_47 == 1)
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(0);
		}
		set_cinematic_button_active(true);
		*uParam0.f_47 = 0;
	}
	func_58("FR_HV_HORN", uParam0.f_3);
	func_58("FR_H_PKUP", uParam0.f_3);
	func_58("FR_H_WAIT", uParam0.f_3);
	func_58("FR_H_DROPOFF0", uParam0.f_3);
	func_58("FR_H_DROPOFF1", uParam0.f_3);
	func_58("FR_H_DROPOFF2", uParam0.f_3);
	func_57("FR_GETBACK", uParam0.f_3);
	func_55("FR_GETBACK2");
}

void func_55(char* sParam0)
{
	if (func_56(sParam0, 0, 0))
	{
		clear_prints();
	}
}

var func_56(char* sParam0, int iParam1, char* sParam2)
{
	_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		_add_text_component_item_string(sParam2);
	}
	return _0x8A9BA1AB3E237613();
}

void func_57(char* sParam0, char* sParam1)
{
	if (func_56(sParam0, 1, sParam1))
	{
		clear_prints();
	}
}

void func_58(char* sParam0, char* sParam1)
{
	if (func_59(sParam0, sParam1))
	{
		clear_help(1);
	}
}

int func_59(char* sParam0, char* sParam1)
{
	_0x0A24DA3A41B718F5(sParam0);
	_add_text_component_item_string(sParam1);
	return _0x10BDDBFC529428DD(0);
}

void func_60(var uParam0, int iParam1)
{
	if (*uParam0.f_47 || iParam1)
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(0);
		}
		set_cinematic_button_active(true);
		*uParam0.f_47 = 0;
	}
	func_58("FR_HV_HORN", uParam0.f_3);
}

void func_61(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (func_63(*uParam0.f_1))
		{
			if (*uParam0.f_45)
			{
				if ((Global_101154.f_17223[*uParam0.f_1] == 2 || Global_101154.f_17223[*uParam0.f_1] == 3) || Global_101154.f_17223[*uParam0.f_1] == 4)
				{
					func_62(*uParam0.f_1);
				}
				*uParam0.f_45 = 0;
			}
		}
	}
}

void func_62(var uParam0)
{
	if ((Global_101154.f_17223[uParam0] != 2 && Global_101154.f_17223[uParam0] != 3) && Global_101154.f_17223[uParam0] != 4)
	{
		return;
	}
	Global_101154.f_17223[uParam0] = 318;
	Global_89454[uParam0 /*109*/].f_3 = 145;
	Global_89454[uParam0 /*109*/].f_2 = 318;
	Global_89454[uParam0 /*109*/].f_4 = {0f, 0f, 0f};
	Global_89454[uParam0 /*109*/].f_7 = 0f;
}

int func_63(int iParam0)
{
	return iParam0 < 3;
}

int func_64(int iParam0)
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

void func_65(int iParam0)
{
	if (iParam0 < 9)
	{
		if (!is_bit_set(Global_101154.f_16793.f_175[iParam0 /*19*/].f_18, false))
		{
			set_bit(&(Global_101154.f_16793.f_175[iParam0 /*19*/].f_18), false);
		}
	}
}

int func_66(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_87467[iParam0 /*2*/].f_1;
	}
	return 0;
}

int func_67(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_87467[iParam0 /*2*/];
	}
	return -1;
}

bool func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	struct<2> Var14;
	struct<2> Var17;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	vector3 vVar32;
	vector3 vVar35;
	vector3 vVar38;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	vector3 vVar49;
	vector3 vVar52;
	
	iVar0 = 0;
	if (*uParam0.f_124 < 2f)
	{
		if (*uParam3 >= 402)
		{
			iVar0 = 1;
		}
	}
	else if (*uParam3 >= 403 && timera() > round(*uParam0.f_124 - 2f * 1000f))
	{
		iVar0 = 1;
	}
	if (*uParam3 > 301 && *uParam3 < 900)
	{
		if (is_screen_faded_out())
		{
			*uParam3 = 900;
		}
		else if (iVar0 == 0)
		{
			if (!is_screen_fading_in())
			{
				if (func_276(1000))
				{
					do_screen_fade_out(500);
				}
			}
		}
	}
	if (*uParam3 > 0)
	{
		if (*uParam4 < get_game_timer())
		{
			if (!is_ped_injured(player_ped_id()))
			{
				if (func_274(player_ped_id()))
				{
					func_266(player_ped_id(), 5000);
				}
			}
			if (!is_ped_injured(iParam5))
			{
				if (func_274(iParam5))
				{
					func_266(iParam5, 5000);
				}
			}
			if (!is_ped_injured(iParam6))
			{
				if (func_274(iParam6))
				{
					func_266(iParam6, 5000);
				}
			}
			*uParam4 = get_game_timer() + 5000;
		}
	}
	if (*uParam3 == 0)
	{
		func_149(*uParam0.f_105, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1);
		set_player_control(player_id(), false, 0);
		func_148();
		*iParam7 = 0;
		settimera(0);
		if (!is_ped_injured(player_ped_id()))
		{
			if (func_274(player_ped_id()))
			{
				func_266(player_ped_id(), 6000);
			}
		}
		if (!is_ped_injured(iParam5))
		{
			if (func_274(iParam5))
			{
				func_266(iParam5, 6000);
			}
		}
		if (!is_ped_injured(iParam6))
		{
			if (func_274(iParam6))
			{
				func_266(iParam6, 6000);
			}
		}
		*uParam4 = get_game_timer() + 5000;
		iVar1 = get_players_last_vehicle();
		if (does_entity_exist(iVar1))
		{
			set_entity_as_mission_entity(iVar1, true, 1);
		}
		if (!is_ped_injured(player_ped_id()) && is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			do_screen_fade_in(500);
			*uParam3 = 101;
		}
		else
		{
			*uParam3 = 301;
		}
	}
	else if (*uParam3 == 101)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			clear_ped_tasks(player_ped_id());
			open_sequence_task(&iVar2);
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				task_leave_any_vehicle(false, 0, 0);
			}
			else
			{
				task_follow_nav_mesh_to_coord(false, *uParam0.f_109, 1f, 20000, 0.25f, 0, 1193033728);
			}
			close_sequence_task(iVar2);
			task_perform_sequence(player_ped_id(), iVar2);
			clear_sequence_task(&iVar2);
		}
		if (!is_ped_injured(iParam5))
		{
			clear_ped_tasks(player_ped_id());
			open_sequence_task(&iVar2);
			if (is_ped_in_any_vehicle(iParam5, 0))
			{
				task_leave_any_vehicle(false, 550, 0);
			}
			else
			{
				task_follow_nav_mesh_to_coord(false, *(uParam0.f_112[0 /*3*/]), 1f, 20000, 0.25f, 0, 1193033728);
			}
			close_sequence_task(iVar2);
			task_perform_sequence(iParam5, iVar2);
			clear_sequence_task(&iVar2);
		}
		if (!is_ped_injured(iParam6))
		{
			clear_ped_tasks(player_ped_id());
			open_sequence_task(&iVar2);
			if (is_ped_in_any_vehicle(iParam6, 0))
			{
				task_leave_any_vehicle(false, 800, 0);
			}
			else
			{
				task_follow_nav_mesh_to_coord(false, *(uParam0.f_112[1 /*3*/]), 1f, 20000, 0.25f, 0, 1193033728);
			}
			close_sequence_task(iVar2);
			task_perform_sequence(iParam6, iVar2);
			clear_sequence_task(&iVar2);
		}
		settimera(0);
		*uParam3++;
	}
	else if (*uParam3 == 102)
	{
		if (timera() > 1500)
		{
			settimera(0);
			*uParam3 = 301;
		}
	}
	else if (*uParam3 == 301)
	{
		iVar3 = get_players_last_vehicle();
		*uParam1 = func_147(uParam0, iParam7, iParam5, iParam6, iParam8, iParam9, iVar3);
		if (*uParam1 == 3)
		{
			if (!is_vehicle_driveable(*iParam7, 0))
			{
				if (timera() < 15000)
				{
					*iParam7 = func_146(*uParam0.f_105, *uParam0.f_108);
					if (!is_vehicle_driveable(*iParam7, 0))
					{
						return false;
					}
				}
				else
				{
					*uParam1 = 0;
					*iParam7 = iVar3;
				}
			}
		}
		if (does_entity_exist(*iParam7))
		{
			if (!does_entity_belong_to_this_script(*iParam7, 0))
			{
				set_entity_as_mission_entity(*iParam7, true, 0);
			}
		}
		if (*uParam1 != 1)
		{
			if (iParam8 != *iParam7)
			{
				if (does_entity_exist(iParam8))
				{
					delete_vehicle(&iParam8);
				}
			}
		}
		if (*uParam1 != 2)
		{
			if (iParam9 != *iParam7)
			{
				if (does_entity_exist(iParam9))
				{
					delete_vehicle(&iParam9);
				}
			}
		}
		if (*uParam1 != 0)
		{
			if (*iParam7 != iVar3)
			{
				if (does_entity_exist(iVar3))
				{
					func_144(iVar3, uParam0.f_135, 0);
				}
			}
		}
		if (*uParam1 == 2)
		{
			*uParam1 = 1;
		}
		vVar4 = {*uParam0.f_109 - Vector(50f, 150f, 150f)};
		vVar7 = {*uParam0.f_109 + Vector(50f, 150f, 150f)};
		clear_area_of_vehicles(*uParam0.f_109, 150f, 0, 0, 0, 0, false);
		clear_area_of_peds(*uParam0.f_109, 150f, 0);
		set_ped_paths_in_area(vVar4, vVar7, false, 0);
		set_roads_in_area(vVar4, vVar7, false, 1);
		if (!is_ped_injured(player_ped_id()))
		{
			clear_ped_tasks(player_ped_id());
			stop_ped_speaking(player_ped_id(), 1);
			set_ped_config_flag(player_ped_id(), 240, true);
			if (func_274(iParam5))
			{
				func_266(player_ped_id(), 20000);
			}
			if (func_143(iParam5))
			{
				clear_ped_tasks(iParam5);
				stop_ped_speaking(iParam5, 1);
				set_blocking_of_non_temporary_events(iParam5, true);
				set_ped_config_flag(iParam5, 240, true);
				if (is_ped_in_group(iParam5))
				{
					remove_ped_from_group(iParam5);
				}
				if (func_274(iParam5))
				{
					func_266(iParam5, 20000);
				}
			}
			if (func_143(iParam6))
			{
				clear_ped_tasks(iParam6);
				stop_ped_speaking(iParam6, 1);
				set_blocking_of_non_temporary_events(iParam6, true);
				set_ped_config_flag(iParam6, 240, true);
				if (is_ped_in_group(iParam6))
				{
					remove_ped_from_group(iParam6);
				}
				if (func_274(iParam6))
				{
					func_266(iParam6, 20000);
				}
			}
			clear_area(*uParam0.f_109, 15f, 1, 0, 0, false);
			vVar10 = {*uParam0.f_109 + Vector(1f, 0f, 0f)};
			get_ground_z_for_3d_coord(vVar10, &(vVar10.f_2), 0);
			set_entity_coords(player_ped_id(), vVar10, 1, false, 0, 1);
			func_142(player_ped_id(), *(uParam0.f_112[0 /*3*/]) + *(uParam0.f_112[1 /*3*/]) * Vector(0.5f, 0.5f, 0.5f));
			if (func_143(iParam5))
			{
				vVar10 = {*(uParam0.f_112[0 /*3*/]) + Vector(1f, 0f, 0f)};
				get_ground_z_for_3d_coord(vVar10, &(vVar10.f_2), 0);
				clear_ped_tasks_immediately(iParam5);
				set_entity_coords(iParam5, vVar10, 1, false, 0, 1);
				func_142(iParam5, *uParam0.f_109);
			}
			if (func_143(iParam6))
			{
				vVar10 = {*(uParam0.f_112[1 /*3*/]) + Vector(1f, 0f, 0f)};
				get_ground_z_for_3d_coord(vVar10, &(vVar10.f_2), 0);
				clear_ped_tasks_immediately(iParam6);
				set_entity_coords(iParam6, vVar10, 1, false, 0, 1);
				func_142(iParam6, *uParam0.f_109);
			}
			if (does_entity_exist(*iParam7))
			{
				if (is_entity_dead(*iParam7, 0))
				{
					delete_vehicle(iParam7);
				}
				else
				{
					clear_area(*uParam0.f_105, 15f, 1, 0, 0, false);
					set_entity_coords(*iParam7, *uParam0.f_105, 1, false, 0, 1);
					set_entity_heading(*iParam7, *uParam0.f_108);
					if (*uParam1 == 1)
					{
						if (!func_141(*iParam7, *uParam0.f_132))
						{
							set_entity_heading(*iParam7, *uParam0.f_108 + 180f);
						}
					}
					set_vehicle_on_ground_properly(*iParam7);
					set_vehicle_doors_shut(*iParam7, 1);
				}
			}
			if (*uParam1 == 0)
			{
				if (*iParam7 == iVar3)
				{
					if (does_entity_exist(iVar3))
					{
						iVar13 = get_entity_model(iVar3);
						if (iVar13 != 0)
						{
							get_model_dimensions(iVar13, &Var14, &Var17);
							if (((Var17 > 2.5f || Var17.f_1 > 4f) || Var14 < -2.5f) || Var14.f_1 < -4f)
							{
								func_144(iVar3, uParam0.f_135, 1);
							}
						}
					}
				}
			}
			func_140(uParam0[0 /*15*/]);
			settimera(-round(*uParam0.f_123 * 1000f));
			settimerb(0);
		}
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(1000);
		}
		*uParam3++;
	}
	else if (*uParam3 == 302)
	{
		if (timera() > 0)
		{
			if (func_143(player_ped_id()))
			{
				if (!func_139())
				{
					if (func_274(player_ped_id()))
					{
						iVar20 = 60;
					}
					else if (func_143(iParam5) && func_143(iParam6))
					{
						iVar20 = 61;
					}
					else
					{
						iVar20 = 59;
					}
					iVar21 = iParam5;
					if (is_ped_injured(iParam5))
					{
						iVar21 = iParam6;
					}
					if (func_143(iVar21))
					{
						if (func_121(player_ped_id(), iVar21, iVar20, uParam2))
						{
							task_look_at_entity(player_ped_id(), iVar21, -1, 2048, 4);
							*uParam3++;
						}
					}
					else
					{
						*uParam3++;
					}
				}
			}
			else
			{
				*uParam3++;
			}
		}
	}
	else if (*uParam3 == 303)
	{
		if (!func_139())
		{
			if (timerb() > round(*(uParam0[0 /*15*/]).f_13 * 1000f))
			{
				*uParam3++;
			}
		}
	}
	else if (*uParam3 == 304)
	{
		if ((is_ped_injured(iParam5) || !is_ped_in_any_vehicle(iParam5, 0)) && (is_ped_injured(iParam6) || !is_ped_in_any_vehicle(iParam6, 0)))
		{
			if (*uParam0.f_127 && !is_ped_injured(iParam6))
			{
				func_140(uParam0[2 /*15*/]);
			}
			else
			{
				func_140(uParam0[1 /*15*/]);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 305)
	{
		if (func_143(player_ped_id()) && func_143(iParam5))
		{
			iVar22 = func_120();
			iVar23 = func_117(iParam5);
			iVar24 = 50;
			if (iVar22 != 145 && iVar23 != 145)
			{
				iVar24 = func_116(iVar22, iVar23);
			}
			if (func_274(iParam5))
			{
				iVar25 = 65;
			}
			else if (iVar24 < 20)
			{
				iVar25 = 64;
			}
			else if (iVar24 < 40)
			{
				iVar25 = 63;
			}
			else
			{
				iVar25 = 62;
			}
			if (func_121(player_ped_id(), iParam5, iVar25, uParam2))
			{
				*uParam3++;
			}
		}
		else
		{
			*uParam3++;
		}
	}
	else if (*uParam3 == 306)
	{
		if (!func_139())
		{
			if (*uParam0.f_127 == 0 && !is_ped_injured(iParam6))
			{
				func_140(uParam0[2 /*15*/]);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 307)
	{
		if (func_143(player_ped_id()) && func_143(iParam6))
		{
			iVar26 = func_120();
			iVar27 = func_117(iParam6);
			iVar28 = 50;
			if (iVar26 != 145 && iVar27 != 145)
			{
				iVar28 = func_116(iVar26, iVar27);
			}
			if (func_274(iParam6))
			{
				iVar29 = 65;
			}
			else if (iVar28 < 20)
			{
				iVar29 = 64;
			}
			else if (iVar28 < 40)
			{
				iVar29 = 63;
			}
			else
			{
				iVar29 = 62;
			}
			if (func_121(player_ped_id(), iParam6, iVar29, uParam2))
			{
				*uParam3++;
			}
		}
		else
		{
			*uParam3++;
		}
	}
	else if (*uParam3 == 308)
	{
		if (!func_139())
		{
			*uParam3 = 401;
		}
	}
	else if (*uParam3 == 401)
	{
		if (func_143(player_ped_id()))
		{
			if (*uParam1 != 1)
			{
				task_clear_look_at(player_ped_id());
			}
		}
		iVar30 = true;
		iVar31 = 2;
		if (*uParam1 == 3 && is_vehicle_driveable(*iParam7, 0))
		{
			if (!is_ped_injured(iParam5))
			{
				vVar32 = {get_entity_forward_vector(*iParam7)};
				vVar35 = {vVar32.y, -vVar32.x, 0f};
				vVar38 = {get_entity_coords(iParam5, 1) - get_entity_coords(*iParam7, 1)};
				if (func_115(vVar35, vVar38) > 0f)
				{
					iVar30 = 2;
					iVar31 = true;
				}
			}
			if (get_entity_model(*iParam7) != iLocal_976)
			{
				if (!is_ped_injured(iParam5))
				{
					iVar30 = -1;
				}
				else
				{
					iVar30 = iVar31;
					iVar31 = -1;
				}
			}
		}
		if (func_143(iParam5))
		{
			task_clear_look_at(iParam5);
			clear_ped_tasks(iParam5);
			if (*uParam1 == 1)
			{
				task_follow_nav_mesh_to_coord(iParam5, *uParam0.f_129, 1f, -1, 0.25f, 0, 1193033728);
			}
			else if (*uParam1 == 3 && is_vehicle_driveable(*iParam7, 0))
			{
				task_enter_vehicle(iParam5, *iParam7, 20000, iVar30, 1f, 1, 0);
			}
			else
			{
				task_follow_nav_mesh_to_coord(iParam5, *uParam0.f_119, 1f, -1, 0.25f, 0, 1193033728);
			}
		}
		if (func_143(iParam6))
		{
			task_clear_look_at(iParam6);
			clear_ped_tasks(iParam6);
			open_sequence_task(&iVar41);
			task_pause(false, 500);
			if (*uParam1 == 1)
			{
				task_follow_nav_mesh_to_coord(false, *uParam0.f_129, 1f, -1, 0.25f, 0, 1193033728);
			}
			else if (*uParam1 == 3 && is_vehicle_driveable(*iParam7, 0))
			{
				task_enter_vehicle(false, *iParam7, 20000, iVar31, 1f, 1, 0);
			}
			else
			{
				task_follow_nav_mesh_to_coord(false, *uParam0.f_119, 1f, -1, 0.25f, 0, 1193033728);
			}
			close_sequence_task(iVar41);
			task_perform_sequence(iParam6, iVar41);
			clear_sequence_task(&iVar41);
		}
		*uParam3++;
	}
	else if (*uParam3 == 402)
	{
		if (timera() > 500)
		{
			if (*uParam1 != 1)
			{
				func_140(uParam0[3 /*15*/]);
			}
			else
			{
				func_140(uParam0[4 /*15*/]);
			}
			settimera(0);
			if (*uParam1 != 1)
			{
				*uParam3++;
			}
			else
			{
				*uParam3 = 501;
			}
		}
	}
	else if (*uParam3 == 403)
	{
		if (*uParam0.f_124 > 0.1f)
		{
			if (timera() > round(*uParam0.f_124 * 1000f))
			{
				*uParam3 = 900;
			}
		}
		else if (timera() > 10000)
		{
			if (!is_screen_fading_in())
			{
				do_screen_fade_out(500);
			}
		}
		else if (timera() > 2500)
		{
			if (*uParam1 != 3)
			{
				if ((is_ped_injured(iParam5) || !is_entity_at_entity(iParam5, player_ped_id(), 4f, 4f, 4f, 0, 1, 0)) && (is_ped_injured(iParam6) || !is_entity_at_entity(iParam6, player_ped_id(), 4f, 4f, 4f, 0, 1, 0)))
				{
					*uParam3 = 900;
				}
				else if ((!is_ped_injured(iParam5) && is_entity_at_coord(iParam5, *uParam0.f_119, 0.5f, 0.5f, 0.5f, false, true, 0)) || (!is_ped_injured(iParam6) && is_entity_at_coord(iParam6, *uParam0.f_119, 0.5f, 0.5f, 0.5f, false, true, 0)))
				{
					*uParam3 = 900;
				}
			}
			else if (!is_vehicle_driveable(*iParam7, 0) || !is_entity_at_entity(*iParam7, player_ped_id(), 15f, 15f, 15f, 0, 1, 0))
			{
				*uParam3 = 900;
			}
			else if (is_vehicle_driveable(*iParam7, 0) && is_entity_at_coord(*iParam7, *uParam0.f_132, 1f, 1f, 1f, false, true, 0))
			{
				*uParam3 = 900;
			}
		}
		if (*uParam1 == 3 && is_vehicle_driveable(*iParam7, 0))
		{
			if ((is_ped_injured(iParam5) || is_ped_in_any_vehicle(iParam5, 0)) && (is_ped_injured(iParam6) || is_ped_in_any_vehicle(iParam6, 0)))
			{
				iVar42 = get_ped_in_vehicle_seat(*iParam7, -1);
				if (!is_ped_injured(iVar42))
				{
					if (!func_114(iVar42, -1817882002))
					{
						clear_ped_tasks(iVar42);
						task_vehicle_drive_to_coord(iVar42, *iParam7, *uParam0.f_132, 10f, 0, iLocal_976, 786603, 5f, 5f);
					}
				}
			}
		}
	}
	else if (*uParam3 == 501)
	{
		if (timera() > 10000)
		{
			settimera(0);
			*uParam3++;
		}
		else if ((is_ped_injured(iParam5) || !is_entity_on_screen(iParam5)) && (is_ped_injured(iParam6) || !is_entity_on_screen(iParam6)))
		{
			settimera(0);
			*uParam3++;
		}
	}
	else if (*uParam3 == 502)
	{
		if (timera() > round(*uParam0.f_125 * 1000f))
		{
			iVar43 = false;
			if (!is_ped_injured(iParam5))
			{
				set_ped_into_vehicle(iParam5, *iParam7, -1);
				if (!is_ped_injured(iParam6))
				{
					set_ped_into_vehicle(iParam6, *iParam7, false);
				}
				iVar43 = iParam5;
			}
			else if (!is_ped_injured(iParam6))
			{
				set_ped_into_vehicle(iParam6, *iParam7, -1);
				iVar43 = iParam6;
			}
			if (!is_ped_injured(iVar43))
			{
				clear_ped_tasks(iVar43);
				open_sequence_task(&iVar44);
				task_pause(false, 750);
				iVar45 = 786469 | 512;
				task_vehicle_drive_to_coord(false, *iParam7, *uParam0.f_132, 10f, 0, get_entity_model(*iParam7), iVar45, 5f, 5f);
				close_sequence_task(iVar44);
				task_perform_sequence(iVar43, iVar44);
				clear_sequence_task(&iVar44);
			}
			settimera(0);
			func_140(uParam0[5 /*15*/]);
			if (func_143(player_ped_id()))
			{
				func_142(player_ped_id(), *uParam0.f_105);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 503)
	{
		if (*uParam0.f_126 > 0.1f)
		{
			if (timera() > round(*uParam0.f_126 * 1000f))
			{
				*uParam3 = 900;
			}
		}
		else if (timera() > 20000)
		{
			*uParam3 = 900;
		}
		else if (!is_vehicle_driveable(*iParam7, 0) || !is_entity_on_screen(*iParam7))
		{
			settimera(0);
			*uParam3++;
		}
	}
	else if (*uParam3 == 504)
	{
		if (timera() > 2000)
		{
			*uParam3 = 900;
		}
	}
	else if (*uParam3 == 900)
	{
		if (*uParam1 != 1)
		{
			func_113(uParam0.f_91, *uParam0.f_97);
		}
		else
		{
			func_113(uParam0.f_98, *uParam0.f_104);
		}
		func_148();
		if (!is_ped_injured(player_ped_id()))
		{
			clear_ped_tasks(player_ped_id());
			task_clear_look_at(player_ped_id());
		}
		if (does_entity_exist(*iParam7) && !is_entity_dead(*iParam7, 0))
		{
			if (func_143(iParam5) && func_109(*iParam7, iParam5))
			{
				set_vehicle_doors_locked(*iParam7, 2);
			}
			if (func_143(Local_79.f_109.f_7) && func_109(*iParam7, iParam6))
			{
				set_vehicle_doors_locked(*iParam7, 2);
			}
		}
		if (func_143(iParam5))
		{
			iVar46 = func_117(iParam5);
			if (func_63(iVar46))
			{
				if ((is_vehicle_driveable(*iParam7, 0) && is_ped_in_vehicle(iParam5, *iParam7, 0)) && get_ped_in_vehicle_seat(*iParam7, -1) == iParam5)
				{
					set_entity_coords(*iParam7, *(uParam0.f_140[2 /*3*/]), 1, false, 0, 1);
					set_entity_heading(*iParam7, *uParam0.f_150[2]);
					set_vehicle_on_ground_properly(*iParam7);
				}
				else
				{
					set_entity_coords(iParam5, *(uParam0.f_140[0 /*3*/]) - Vector(1f, 0f, 0f), 1, false, 0, 1);
					set_entity_heading(iParam5, *uParam0.f_150[0]);
				}
				func_85(iParam5, 0);
				func_78(iParam5, &(Global_90747[iVar46 /*98*/]), &(Global_91050[iVar46 /*3*/]), &(Global_91060[iVar46]), &(Global_91042[iVar46]), &(Global_2563620[iVar46]));
				Global_101154.f_17223[iVar46] = 318;
				if (Global_91042[iVar46] == 1)
				{
					Global_91042[iVar46] = 0;
				}
			}
			delete_ped(&iParam5);
		}
		if (func_143(iParam6))
		{
			iVar47 = func_117(iParam6);
			if (func_63(iVar47))
			{
				if ((is_vehicle_driveable(*iParam7, 0) && is_ped_in_vehicle(iParam6, *iParam7, 0)) && get_ped_in_vehicle_seat(*iParam7, -1) == iParam6)
				{
					set_entity_coords(*iParam7, *(uParam0.f_140[2 /*3*/]), 1, false, 0, 1);
					set_entity_heading(*iParam7, *uParam0.f_150[2]);
					set_vehicle_on_ground_properly(*iParam7);
				}
				else
				{
					set_entity_coords(iParam6, *(uParam0.f_140[1 /*3*/]) - Vector(1f, 0f, 0f), 1, false, 0, 1);
					set_entity_heading(iParam6, *uParam0.f_150[1]);
				}
				func_85(iParam6, 0);
				func_78(iParam6, &(Global_90747[iVar47 /*98*/]), &(Global_91050[iVar47 /*3*/]), &(Global_91060[iVar47]), &(Global_91042[iVar47]), &(Global_2563620[iVar47]));
				Global_101154.f_17223[iVar47] = 318;
				if (Global_91042[iVar47] == 1)
				{
					Global_91042[iVar47] = 0;
				}
			}
			delete_ped(&iParam6);
		}
		if (does_entity_exist(*iParam7))
		{
			if (*uParam1 != 3)
			{
				if (*uParam1 == 1)
				{
					delete_vehicle(iParam7);
				}
				else
				{
					set_vehicle_as_no_longer_needed(iParam7);
				}
			}
			else
			{
				if (!is_entity_dead(*iParam7, 0))
				{
					iVar48 = get_ped_in_vehicle_seat(*iParam7, -1);
					if (does_entity_exist(iVar48))
					{
						delete_ped(&iVar48);
					}
				}
				delete_vehicle(iParam7);
			}
		}
		set_model_as_no_longer_needed(iLocal_976);
		set_model_as_no_longer_needed(iLocal_975);
		*uParam3++;
	}
	else if (*uParam3 == 901)
	{
		if (is_screen_faded_out() && get_follow_ped_cam_view_mode() == 4)
		{
			render_script_cams(false, false, 3000, 1, 0, 0);
		}
		else
		{
			_0xC819F3CBB62BF692(0, 0f, 3, 0);
		}
		if (does_cam_exist(iLocal_977[0]))
		{
			destroy_cam(iLocal_977[0], 0);
		}
		if (does_cam_exist(iLocal_977[1]))
		{
			destroy_cam(iLocal_977[1], 0);
		}
		if (func_143(player_ped_id()))
		{
			stop_ped_speaking(player_ped_id(), 0);
			set_ped_config_flag(player_ped_id(), 240, false);
		}
		vVar49 = {*uParam0.f_109 - Vector(50f, 150f, 150f)};
		vVar52 = {*uParam0.f_109 + Vector(50f, 150f, 150f)};
		set_ped_paths_back_to_original(vVar49, vVar52, 0);
		set_roads_back_to_original(vVar49, vVar52, 1);
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(500);
		}
		func_69(0, 0, 1, 1);
		return true;
	}
	return false;
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_index();
	set_everyone_ignore_player(iVar0, 0);
	set_player_control(iVar0, iParam3, 0);
	func_71(0, 1, 0, 0);
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
		if ((iLocal_43 != 0 && iLocal_43 != joaat("object")) && iLocal_43 != joaat("gadget_parachute"))
		{
			if (func_70(player_ped_id()))
			{
				if (has_ped_got_weapon(player_ped_id(), iLocal_43, 0))
				{
					set_current_ped_weapon(player_ped_id(), iLocal_43, false);
				}
			}
		}
	}
	if (func_143(player_ped_id()))
	{
		set_ped_stealth_movement(player_ped_id(), 0, 0);
	}
}

bool func_70(int iParam0)
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

void func_71(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_77(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_76())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_75(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_77(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_75(0, iParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_73(player_id())) && !func_19(player_id(), 0)) && !func_72())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_73(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_72()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_73(int iParam0)
{
	if (func_19(iParam0, 0))
	{
		return true;
	}
	if (func_74())
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

int func_74()
{
	return is_bit_set(Global_2359301, 3);
}

int func_75(int iParam0, int iParam1, var uParam2, int iParam3)
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

bool func_76()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_77(int iParam0)
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

void func_78(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar6;
	
	iVar0 = 0;
	iVar1 = false;
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			if (is_ped_in_any_vehicle(iParam0, 0))
			{
				iVar1 = get_vehicle_ped_is_in(iParam0, 0);
				*uParam4 = 2;
			}
			else
			{
				uVar2 = func_35(iParam0);
				if (!is_entity_dead(Global_91046[uVar2], 0))
				{
					if (is_vehicle_seat_free(Global_91046[uVar2], -1))
					{
						vVar3 = {get_entity_coords(iParam0, 1)};
						vVar6 = {get_entity_coords(Global_91046[uVar2], 1)};
						if (get_entity_model(Global_91046[uVar2]) == joaat("luxor2"))
						{
							if (vdist(vVar3, vVar6) < 10f)
							{
								*uParam4 = 2;
								iVar1 = Global_91046[uVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	func_79(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}

void func_79(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	
	*uParam2.f_97 = 0;
	iVar0 = 145;
	if (!is_entity_dead(iParam0, 0) && !is_entity_dead(iParam1, 0))
	{
		iVar0 = func_35(iParam0);
		if (iVar0 > 3)
		{
			if (network_is_game_in_progress())
			{
			}
			return;
		}
		if (decor_exist_on(iParam1, "GetawayVehicleValid"))
		{
			if (decor_get_bool(iParam1, "GetawayVehicleValid"))
			{
				if ((Global_101154.f_7775.f_99.f_58[45] || Global_101154.f_7775.f_99.f_58[12]) || Global_101154.f_7775.f_99.f_58[34])
				{
					*uParam5 = 0;
					Global_91046[iVar0] = 0;
					return;
				}
			}
		}
		if (is_ped_in_vehicle(iParam0, iParam1, 0) || iParam7)
		{
			*uParam5 = 2;
			Global_91046[iVar0] = iParam1;
		}
		else if (is_ped_in_any_vehicle(iParam0, 0))
		{
			iParam1 = get_vehicle_ped_is_in(iParam0, 0);
			*uParam5 = 2;
			Global_91046[iVar0] = iParam1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 68)
			{
				if (iParam1 == Global_68319.f_139[iVar1])
				{
					*uParam5 = 0;
					Global_91046[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!is_entity_dead(Global_91046[iVar0], 0))
			{
				if (!func_83(Global_91046[iVar0], iVar0, 0) || is_ped_in_vehicle(iParam0, Global_91046[iVar0], 0))
				{
					vVar2 = {get_entity_coords(iParam0, 1)};
					vVar5 = {get_entity_coords(Global_91046[iVar0], 1)};
					if (func_82(iParam0, Global_91046[iVar0], 0))
					{
						if (vdist2(vVar2, vVar5) < 22500f)
						{
							*uParam3 = {vVar5};
							*uParam4 = get_entity_heading(Global_91046[iVar0]);
							*uParam5 = 1;
							Global_91046[iVar0] = iParam1;
							if (vdist2(vVar2, vVar5) < 1.5f * 1.5f)
							{
							}
						}
					}
				}
				else
				{
					*uParam5 = 0;
					Global_91046[iVar0] = 0;
				}
			}
		}
	}
	if (does_entity_exist(iParam1))
	{
		*uParam2 = get_entity_model(iParam1);
		if (get_vehicle_trailer_vehicle(iParam1, &iVar9))
		{
			*uParam2.f_1 = get_entity_model(iVar9);
		}
		*uParam2.f_2 = get_vehicle_dirt_level(iParam1);
		*uParam2.f_3 = get_entity_health(iParam1);
		*uParam2.f_4 = get_vehicle_colour_combination(iParam1);
		if (*uParam2.f_4 > -1)
		{
			*uParam2.f_9 = 1;
			*uParam2.f_5 = -1;
			*uParam2.f_6 = -1;
		}
		else
		{
			*uParam2.f_9 = 0;
			get_vehicle_colours(iParam1, uParam2.f_5, uParam2.f_6);
		}
		if (!is_this_model_a_boat(*uParam2))
		{
			*uParam2.f_10 = 1;
			get_vehicle_extra_colours(iParam1, uParam2.f_7, uParam2.f_8);
		}
		else
		{
			*uParam2.f_10 = 0;
			*uParam2.f_7 = -1;
			*uParam2.f_8 = -1;
		}
		StringCopy(uParam2.f_27, get_vehicle_number_plate_text(iParam1), 16);
		*uParam2.f_26 = get_vehicle_number_plate_text_index(iParam1);
		*uParam2.f_88 = get_vehicle_tyres_can_burst(iParam1);
		get_vehicle_tyre_smoke_color(iParam1, uParam2.f_84, uParam2.f_85, uParam2.f_86);
		*uParam2.f_87 = get_vehicle_window_tint(iParam1);
		_get_vehicle_neon_lights_colour(iParam1, uParam2.f_93, uParam2.f_94, uParam2.f_95);
		if (_is_vehicle_neon_light_enabled(iParam1, 2))
		{
			set_bit(uParam2.f_92, 28);
		}
		else
		{
			clear_bit(uParam2.f_92, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam1, 3))
		{
			set_bit(uParam2.f_92, 29);
		}
		else
		{
			clear_bit(uParam2.f_92, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam1, 0))
		{
			set_bit(uParam2.f_92, 30);
		}
		else
		{
			clear_bit(uParam2.f_92, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam1, 1))
		{
			set_bit(uParam2.f_92, 31);
		}
		else
		{
			clear_bit(uParam2.f_92, 31);
		}
		*uParam2.f_89 = get_vehicle_livery(iParam1);
		*uParam2.f_90 = get_vehicle_wheel_type(iParam1);
		iVar8 = 0;
		while (iVar8 < 12)
		{
			*uParam2.f_11[iVar8] = is_vehicle_extra_turned_on(iParam1, iVar8 + 1);
			iVar8++;
		}
		if (is_vehicle_a_convertible(iParam1, 0))
		{
			iVar10 = get_convertible_roof_state(iParam1);
			if (iVar10 == 0 || iVar10 == 5)
			{
				*uParam2.f_24 = 1;
			}
			else
			{
				*uParam2.f_24 = 0;
			}
		}
		else
		{
			*uParam2.f_24 = 0;
		}
		if (iParam0 == player_ped_id())
		{
			*uParam2.f_25 = get_player_radio_station_index();
		}
		func_81(&iParam1, uParam2.f_31, uParam2.f_81);
		*uParam2.f_96 = _get_vehicle_paint_fade(iParam1);
		*uParam2.f_97 = func_80(iParam1);
		*uParam6 = -1;
		switch (iVar0)
		{
			case 0:
				if (Global_101154.f_18807.f_69[0 /*78*/].f_66 == get_entity_model(iParam1))
				{
					*uParam6 = 12;
				}
				break;
			
			case 1:
				if (Global_101154.f_18807.f_69[1 /*78*/].f_66 == get_entity_model(iParam1))
				{
					*uParam6 = 13;
				}
				break;
			
			case 2:
				if (Global_101154.f_18807.f_69[2 /*78*/].f_66 == get_entity_model(iParam1))
				{
					*uParam6 = 14;
				}
				break;
		}
	}
	else
	{
		*uParam5 = 0;
		*uParam3 = {0f, 0f, 0f};
		*uParam4 = 0f;
		*uParam2 = 0;
		*uParam2.f_1 = 0;
		*uParam2.f_2 = 0f;
		*uParam2.f_3 = 0;
		*uParam2.f_4 = 0;
		*uParam2.f_5 = 0;
		*uParam2.f_6 = 0;
		*uParam2.f_7 = 0;
		*uParam2.f_8 = 0;
		*uParam2.f_9 = 0;
		*uParam2.f_10 = 0;
		iVar8 = 0;
		while (iVar8 < *uParam2.f_11)
		{
			*uParam2.f_11[iVar8] = 0;
			iVar8++;
		}
		*uParam2.f_24 = 0;
		*uParam2.f_25 = 0;
		*uParam5 = 0;
		*uParam6 = -1;
		*uParam2.f_96 = 0f;
	}
}

bool func_80(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (does_entity_exist(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && get_entity_model(Global_88942[iVar0]) == get_entity_model(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_81(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			*uParam1[iVar0] = 0;
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				*uParam1[iVar0] = 1;
			}
		}
		else
		{
			*uParam1[iVar0] = get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				*uParam2[0] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				*uParam2[1] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return true;
}

bool func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_ped_in_vehicle(iParam0, iParam1, iParam2))
	{
		iVar0 = get_entity_model(iParam1);
		if (is_this_model_a_boat(iVar0) || (iVar0 == joaat("submersible") || iVar0 == joaat("submersible2")))
		{
			if (is_entity_in_water(iParam1))
			{
				return false;
			}
			return true;
		}
		if ((is_this_model_a_plane(iVar0) || is_this_model_a_heli(iVar0)) || iVar0 == joaat("blimp"))
		{
			if (is_entity_in_air(iParam1))
			{
				return false;
			}
			return true;
		}
		return true;
	}
	return false;
}

bool func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	var uVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_84(iParam1, iVar0, &sVar1, &uVar9))
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

bool func_84(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_85(int iParam0, int iParam1)
{
	func_97(iParam0);
	func_91(iParam0, iParam1);
	func_90(iParam0);
	func_89(iParam0);
	func_88(iParam0);
	func_87(iParam0);
	func_86(iParam0);
}

void func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (func_63(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			Global_101154.f_1826.f_539.f_1556[iVar0] = get_player_wanted_level(player_id());
		}
	}
}

void func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (func_63(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_1546[iVar0 /*3*/] = {get_entity_velocity(iParam0)};
	}
}

void func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (func_63(iVar0) && !is_ped_injured(iParam0))
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

void func_89(int iParam0)
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (func_63(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_90(int iParam0)
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (func_63(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_290[iVar0] = to_float(get_entity_health(iParam0)) - 100f / to_float(get_ped_max_health(iParam0)) - 100f * 100f;
	}
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_35(iParam0);
	if (func_63(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			func_92(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
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

void func_92(int iParam0, var uParam1)
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
			iVar3 = func_96(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_96(iVar0));
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
					iVar2 = func_94(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							set_bit(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_94(vVar4.x, iVar1);
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
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_93(Var9.f_1)) && iVar70 < 50)
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

bool func_93(int iParam0)
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

int func_94(int iParam0, int iParam1)
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
				iVar1 = func_95(iParam0, &uVar2);
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

int func_95(int iParam0, var uParam1)
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

int func_96(int iParam0)
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

void func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (func_63(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_1524[iVar0] = func_98();
	}
}

var func_98()
{
	var uVar0;
	
	func_108(&uVar0, get_clock_seconds());
	func_107(&uVar0, get_clock_minutes());
	func_106(&uVar0, get_clock_hours());
	func_101(&uVar0, get_clock_day_of_month());
	func_100(&uVar0, get_clock_month());
	func_99(&uVar0, get_clock_year());
	return uVar0;
}

void func_99(var uParam0, int iParam1)
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

void func_100(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_101(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_105(*uParam0);
	iVar1 = func_103(*uParam0);
	if (iParam1 < 1 || iParam1 > func_102(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_102(int iParam0, int iParam1)
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

var func_103(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_104(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_105(int iParam0)
{
	return (iParam0 && 15);
}

void func_106(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_107(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_108(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<82> Var3;
	
	if (does_entity_exist(iParam0))
	{
		if (!func_112(iParam0))
		{
			iVar0 = get_entity_model(iParam0);
			iVar1 = func_117(iParam1);
			iVar2 = func_63(iVar1);
			if (iVar1 < 147)
			{
				Var3.f_11 = 12;
				Var3.f_31 = 49;
				Var3.f_81 = 2;
				if (iVar2)
				{
					func_111(iVar1, &Var3, 1);
				}
				else
				{
					func_110(iVar1, &Var3, 1);
				}
				if (Var3 == iVar0)
				{
					if ((is_this_model_a_bike(Var3) || is_this_model_a_bicycle(Var3)) || are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Var3.f_27)))
					{
						return true;
					}
				}
				if (iVar2)
				{
					func_111(iVar1, &Var3, 2);
				}
				else
				{
					func_110(iVar1, &Var3, 2);
				}
				if (Var3 == iVar0)
				{
					if ((is_this_model_a_bike(Var3) || is_this_model_a_bicycle(Var3)) || are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Var3.f_27)))
					{
						return true;
					}
				}
				if (iVar2)
				{
					func_111(iVar1, &Var3, 3);
				}
				else
				{
					func_110(iVar1, &Var3, 3);
				}
				if (Var3 == iVar0)
				{
					if ((is_this_model_a_bike(Var3) || is_this_model_a_bicycle(Var3)) || are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Var3.f_27)))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_110(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("tribike");
			}
			else
			{
				iVar0 = joaat("tribike");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("tribike"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("issi2");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("sentinel2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("faggio2");
			}
			else
			{
				iVar0 = joaat("sentinel2");
			}
			switch (iVar0)
			{
				case joaat("sentinel2"):
					Var1 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				
				case joaat("faggio2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("speedo");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("emperor");
			}
			else
			{
				iVar0 = joaat("speedo");
			}
			switch (iVar0)
			{
				case joaat("speedo"):
					Var1 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				
				case joaat("emperor"):
					Var1 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		
		case 29:
			Var1 = joaat("adder");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		
		case 30:
			Var1 = joaat("oracle2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("asterope");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("asterope");
			}
			switch (iVar0)
			{
				case joaat("asterope"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*iParam1 = {Var1};
}

void func_111(int iParam0, var uParam1, int iParam2)
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

bool func_112(int iParam0)
{
	if (Global_69489)
	{
		if (decor_exist_on(iParam0, "Veh_Modded_By_Player"))
		{
			return true;
		}
	}
	return false;
}

bool func_113(var uParam0, Vector3 fParam1)
{
	if (does_cam_exist(iLocal_977[0]))
	{
		destroy_cam(iLocal_977[0], 0);
	}
	if (does_cam_exist(iLocal_977[1]))
	{
		destroy_cam(iLocal_977[1], 0);
	}
	iLocal_977[0] = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
	if (does_cam_exist(iLocal_977[0]))
	{
		set_cam_coord(iLocal_977[0], *uParam0);
		set_cam_rot(iLocal_977[0], *uParam0.f_3, 2);
		set_cam_fov(iLocal_977[0], fParam1);
		set_cam_active(iLocal_977[0], true);
		render_script_cams(true, false, 3000, 1, 0, 0);
		return true;
	}
	return false;
}

bool func_114(int iParam0, int iParam1)
{
	if (func_143(iParam0))
	{
		if (get_script_task_status(iParam0, iParam1) == 1 || get_script_task_status(iParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

float func_115(struct<2> Param0, Vector3 fParam1, struct<2> Param2, Vector3 fParam3)
{
	return Param0 * Param3 + Param0.f_1 * Param3.f_1;
}

var func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = func_64(iParam0);
	iVar1 = func_64(iParam1);
	uVar2 = func_47(iVar0, iVar1);
	return Global_101154.f_16793.f_175[uVar2 /*19*/].f_17;
}

int func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (iVar0 == 145)
	{
		iVar0 = func_118(iParam0);
	}
	return iVar0;
}

int func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 3;
		while (iVar0 <= 147 - 1)
		{
			if (func_119(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_119(int iParam0)
{
	if (!func_63(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_120()
{
	func_34();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_121(int iParam0, int iParam1, int iParam2, var uParam3)
{
	char* sVar0;
	char* sVar4;
	int iVar8;
	int iVar9;
	
	iVar8 = func_117(iParam0);
	iVar9 = func_117(iParam1);
	func_135(uParam3, iVar8, iParam0, 1);
	func_135(uParam3, iVar9, iParam1, 1);
	if (func_132(iVar8, iVar9, iParam2, &sVar0, &sVar4))
	{
		if (func_122(uParam3, &sVar0, &sVar4, 4, 0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

int func_122(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_131(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_123(sParam2, iParam3, 0);
}

bool func_123(char* sParam0, int iParam1, int iParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_130();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_129(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_128();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			clear_bit(&Global_2283, 20);
			clear_bit(&Global_2284, 17);
			clear_bit(&Global_2285, false);
			if (iParam2)
			{
				func_127();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return false;
				}
				if (func_126())
				{
					return false;
				}
				if (is_ped_sprinting(player_ped_id()))
				{
					return false;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(player_ped_id()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(player_ped_id()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_76())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (is_bit_set(Global_2283, 9))
				{
					return false;
				}
			}
			func_125();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_124();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return false;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_130();
	}
	return false;
}

void func_124()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_15712 = 1;
}

void func_125()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = {Global_15794};
	Global_15812 = {Global_15800};
	Global_15767 = Global_15766;
	Global_15836 = {Global_15818};
	Global_15842 = {Global_15824};
	Global_15848 = {Global_15830};
	Global_15854 = {Global_15860};
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = {Global_15743};
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	clear_bit(&Global_2284, 16);
}

bool func_126()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(player_ped_id(), &iVar1, 1);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(player_ped_id(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_127()
{
	if (func_280(14))
	{
		if (!is_entity_dead(player_ped_id(), 0))
		{
			if (get_entity_model(player_ped_id()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[2 /*29*/])
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
		Global_14413 = func_120();
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

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = {0f, 0f, 0f};
}

int func_129(int iParam0, int iParam1)
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

void func_130()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

bool func_132(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_64(iParam0);
	iVar1 = func_64(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return false;
	}
	*sParam4 = {func_133(iVar0, iVar1, 7, 1)};
	*sParam3 = {*sParam4};
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_", 16);
	switch (iParam2)
	{
		case 0:
			StringConCat(sParam4, "PkOk", 16);
			break;
		
		case 1:
			StringConCat(sParam4, "PkLt", 16);
			break;
		
		case 2:
			StringConCat(sParam4, "PkFt", 16);
			break;
		
		case 3:
			StringConCat(sParam4, "PkFul", 16);
			break;
		
		case 4:
			StringConCat(sParam4, "PkOdd", 16);
			break;
		
		case 5:
			StringConCat(sParam4, "PkUDr", 16);
			break;
		
		case 6:
			StringConCat(sParam4, "GrOk", 16);
			break;
		
		case 7:
			StringConCat(sParam4, "GrIr", 16);
			break;
		
		case 8:
			StringConCat(sParam4, "GrVi", 16);
			break;
		
		case 9:
			StringConCat(sParam4, "GrPl", 16);
			break;
		
		case 10:
			StringConCat(sParam4, "GrUDr", 16);
			break;
		
		case 11:
			StringConCat(sParam4, "AmbH_ok", 16);
			break;
		
		case 12:
			StringConCat(sParam4, "AmbH_rc", 16);
			break;
		
		case 13:
			StringConCat(sParam4, "AmbH_ir", 16);
			break;
		
		case 14:
			StringConCat(sParam4, "AmbB_mi", 16);
			break;
		
		case 15:
			StringConCat(sParam4, "AmbB_ok", 16);
			break;
		
		case 16:
			StringConCat(sParam4, "AmbO_qu", 16);
			break;
		
		case 17:
			StringConCat(sParam4, "AmbO_Y1", 16);
			break;
		
		case 18:
			StringConCat(sParam4, "AmbO_Y2", 16);
			break;
		
		case 19:
			StringConCat(sParam4, "AmbO_N1", 16);
			break;
		
		case 20:
			StringConCat(sParam4, "AmbG_ok", 16);
			break;
		
		case 21:
			StringConCat(sParam4, "AmbG_ir", 16);
			break;
		
		case 22:
			StringConCat(sParam4, "AmbS1", 16);
			break;
		
		case 23:
			StringConCat(sParam4, "AmbS2", 16);
			break;
		
		case 24:
			StringConCat(sParam4, "AmbS3", 16);
			break;
		
		case 25:
			StringConCat(sParam4, "AmbS4_1", 16);
			break;
		
		case 26:
			StringConCat(sParam4, "AmbS4_2", 16);
			break;
		
		case 27:
			StringConCat(sParam4, "AmbS4_3", 16);
			break;
		
		case 28:
			StringConCat(sParam4, "AmbS4_4", 16);
			break;
		
		case 29:
			StringConCat(sParam4, "AmbS_ft", 16);
			break;
		
		case 30:
			StringConCat(sParam4, "AmbT1", 16);
			break;
		
		case 31:
			StringConCat(sParam4, "AmbT1_r", 16);
			break;
		
		case 32:
			StringConCat(sParam4, "AmbT2", 16);
			break;
		
		case 33:
			StringConCat(sParam4, "AmbT3", 16);
			break;
		
		case 34:
			StringConCat(sParam4, "AmbT4", 16);
			break;
		
		case 35:
			StringConCat(sParam4, "AmbP1a", 16);
			break;
		
		case 36:
			StringConCat(sParam4, "AmbP1b", 16);
			break;
		
		case 37:
			StringConCat(sParam4, "AmbP1c", 16);
			break;
		
		case 38:
			StringConCat(sParam4, "AmbP2", 16);
			break;
		
		case 39:
			StringConCat(sParam4, "VDrunk", 16);
			break;
		
		case 40:
			StringConCat(sParam4, "Satis", 16);
			break;
		
		case 41:
			StringConCat(sParam4, "Done", 16);
			break;
		
		case 42:
			StringConCat(sParam4, "ZnStory", 16);
			break;
		
		case 43:
			StringConCat(sParam4, "ZnSquad", 16);
			break;
		
		case 44:
			StringConCat(sParam4, "ZnDrunk", 16);
			break;
		
		case 45:
			StringConCat(sParam4, "ZnCncl", 16);
			break;
		
		case 46:
			StringConCat(sParam4, "ZnCnclD", 16);
			break;
		
		case 47:
			StringConCat(sParam4, "RjTime", 16);
			break;
		
		case 48:
			StringConCat(sParam4, "RjOk", 16);
			break;
		
		case 49:
			StringConCat(sParam4, "RjCrazy", 16);
			break;
		
		case 50:
			StringConCat(sParam4, "RjStuck", 16);
			break;
		
		case 51:
			StringConCat(sParam4, "SqStart", 16);
			break;
		
		case 52:
			StringConCat(sParam4, "SqPass", 16);
			break;
		
		case 53:
			StringConCat(sParam4, "NewH", 16);
			break;
		
		case 54:
			StringConCat(sParam4, "NewC", 16);
			break;
		
		case 55:
			StringConCat(sParam4, "NewT", 16);
			break;
		
		case 56:
			StringConCat(sParam4, "CinMlt", 16);
			break;
		
		case 57:
			StringConCat(sParam4, "CarDam", 16);
			break;
		
		case 58:
			StringConCat(sParam4, "PedDam", 16);
			break;
		
		case 59:
			StringConCat(sParam4, "DrpOp", 16);
			break;
		
		case 60:
			StringConCat(sParam4, "DrpOpDr", 16);
			break;
		
		case 61:
			StringConCat(sParam4, "DrpOpPl", 16);
			break;
		
		case 62:
			StringConCat(sParam4, "DrpA", 16);
			break;
		
		case 63:
			StringConCat(sParam4, "DrpB", 16);
			break;
		
		case 64:
			StringConCat(sParam4, "DrpC", 16);
			break;
		
		case 65:
			StringConCat(sParam4, "DrpDr", 16);
			break;
		
		case 66:
			StringConCat(sParam4, "DrpCar", 16);
			break;
		
		case 67:
			StringConCat(sParam4, "Death", 16);
			break;
		
		default:
			if (iParam2 != 69)
			{
			}
			return false;
			break;
	}
	return true;
}

struct<4> func_133(int iParam0, int iParam1, int iParam2, int iParam3)
{
	char[16] cVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	StringCopy(&cVar0, "F", 16);
	if (iParam3 == 0)
	{
		StringConCat(&cVar0, "p", 16);
		StringConCat(&cVar0, func_134(iParam0), 16);
		StringConCat(&cVar0, func_134(iParam1), 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, func_134(iParam0), 16);
		StringConCat(&cVar0, func_134(iParam1), 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar0, "c", 16);
		if (iParam2 < iParam1)
		{
			iVar4 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar4;
		}
		if (iParam1 < iParam0)
		{
			iVar5 = iParam0;
			iParam0 = iParam1;
			iParam1 = iVar5;
		}
		if (iParam2 < iParam1)
		{
			iVar6 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar6;
		}
		StringConCat(&cVar0, func_134(iParam0), 16);
		StringConCat(&cVar0, func_134(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&cVar0, func_134(iParam2), 16);
		}
	}
	else
	{
		StringConCat(&cVar0, "x", 16);
		StringConCat(&cVar0, func_134(iParam0), 16);
		StringConCat(&cVar0, func_134(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&cVar0, func_134(iParam2), 16);
		}
	}
	return cVar0;
}

char* func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "M";
			break;
		
		case 1:
			return "F";
			break;
		
		case 2:
			return "T";
			break;
		
		case 3:
			return "L";
			break;
		
		case 4:
			return "J";
			break;
		
		case 5:
			return "A";
			break;
	}
	return "X";
}

void func_135(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	var uVar4;
	
	StringCopy(&Var0, func_138(iParam1), 16);
	uVar4 = func_137(iParam1);
	if (iParam3)
	{
	}
	func_136(uParam0, uVar4, iParam2, &Var0, 0, 1);
}

void func_136(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
	}
	*uParam0[iParam1 /*10*/] = iParam2;
	StringCopy(uParam0[iParam1 /*10*/].f_1, sParam3, 24);
	*(uParam0[iParam1 /*10*/]).f_7 = 1;
	*(uParam0[iParam1 /*10*/]).f_8 = iParam4;
	*(uParam0[iParam1 /*10*/]).f_9 = iParam5;
	if (!Global_69489)
	{
		if (!is_ped_injured(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!is_ped_injured(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

int func_137(int iParam0)
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
		
		case 19:
			return 3;
			break;
		
		case 14:
			return 4;
			break;
		
		case 17:
			return 5;
			break;
	}
	return 9;
}

char* func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MICHAEL";
			break;
		
		case 1:
			return "FRANKLIN";
			break;
		
		case 2:
			return "TREVOR";
			break;
		
		case 19:
			return "LAMAR";
			break;
		
		case 14:
			return "JIMMY";
			break;
		
		case 17:
			return "AMANDA";
			break;
	}
	return "invalid";
}

bool func_139()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_140(var uParam0)
{
	if (*uParam0.f_14)
	{
		if (does_cam_exist(iLocal_977[0]))
		{
			destroy_cam(iLocal_977[0], 0);
		}
		if (does_cam_exist(iLocal_977[1]))
		{
			destroy_cam(iLocal_977[1], 0);
		}
		iLocal_977[0] = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
		iLocal_977[1] = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
		if (does_cam_exist(iLocal_977[0]) && does_cam_exist(iLocal_977[1]))
		{
			set_cam_coord(iLocal_977[0], *uParam0);
			set_cam_rot(iLocal_977[0], *uParam0.f_3, 2);
			set_cam_fov(iLocal_977[0], *uParam0.f_12);
			set_cam_coord(iLocal_977[1], *uParam0.f_6);
			set_cam_rot(iLocal_977[1], *uParam0.f_6.f_3, 2);
			set_cam_fov(iLocal_977[1], *uParam0.f_12);
			shake_cam(iLocal_977[0], "HAND_SHAKE", 0.25f);
			shake_cam(iLocal_977[1], "HAND_SHAKE", 0.25f);
			if (*uParam0.f_13 > 0.1f)
			{
				set_cam_active_with_interp(iLocal_977[1], iLocal_977[0], round(*uParam0.f_13 * 1000f), 1, 1);
			}
			else
			{
				set_cam_active(iLocal_977[0], true);
			}
			render_script_cams(true, false, 3000, 1, 0, 0);
			return true;
		}
	}
	return false;
}

bool func_141(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = {vParam1 - get_entity_coords(iParam0, 1)};
	vVar3 = {get_entity_forward_vector(iParam0)};
	if (func_115(vVar0, vVar3) > 0f)
	{
		return true;
	}
	return false;
}

void func_142(int iParam0, struct<2> Param1, Vector3 fParam2)
{
	vector3 vVar0;
	Vector3 fVar3;
	Vector3 fVar4;
	Vector3 fVar5;
	
	vVar0 = {get_entity_coords(iParam0, 1)};
	fVar4 = Param1 - vVar0.x;
	fVar5 = Param1.f_1 - vVar0.y;
	if (fVar5 != 0f)
	{
		fVar3 = atan2(fVar4, fVar5);
	}
	else if (fVar4 < 0f)
	{
		fVar3 = -90f;
	}
	else
	{
		fVar3 = 90f;
	}
	fVar3 *= -1f;
	set_entity_heading(iParam0, fVar3);
}

bool func_143(int iParam0)
{
	if (func_70(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_144(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var4;
	vector3 vVar7;
	int iVar10;
	
	if (is_entity_dead(iParam0, 0))
	{
		delete_vehicle(&iParam0);
	}
	else
	{
		iVar0 = get_entity_model(iParam0);
		get_model_dimensions(iVar0, &Var1, &Var4);
		vVar7 = {0f, 0f, 0f};
		iVar10 = false;
		Var4 -= 1.02f;
		Var1 += 1.02f;
		Var4.f_1 -= 2.57f;
		Var1.f_1 += 2.61f;
		if (func_145(*uParam1.f_4, 1) && (iParam2 || Var4 > 0f))
		{
			vVar7.x -= Var4;
			iVar10 = true;
		}
		else if (func_145(*uParam1.f_4, 2) && (iParam2 || Var1 < 0f))
		{
			vVar7.x -= Var1;
			iVar10 = true;
		}
		if (func_145(*uParam1.f_4, 4) && (iParam2 || Var1.f_1 < 0f))
		{
			vVar7.y -= Var1.f_1;
			iVar10 = true;
		}
		else if (func_145(*uParam1.f_4, 8) && (iParam2 || Var4.f_1 > 0f))
		{
			vVar7.y -= Var4.f_1;
			iVar10 = true;
		}
		if (iVar10)
		{
			*uParam1 = {_get_object_offset_from_coords(*uParam1, *uParam1.f_3, vVar7)};
		}
		set_entity_coords(iParam0, *uParam1 + Vector(1f, 0f, 0f), 0, false, 0, 1);
		set_entity_heading(iParam0, *uParam1.f_3);
		set_vehicle_on_ground_properly(iParam0);
		set_vehicle_doors_shut(iParam0, 1);
	}
}

int func_145(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_146(vector3 vParam0, Vector3 fParam1)
{
	int iVar0;
	int iVar1;
	
	request_model(iLocal_975);
	request_model(iLocal_976);
	if (has_model_loaded(iLocal_975) && has_model_loaded(iLocal_976))
	{
		clear_area(vParam0, 6f, 1, 0, 0, false);
		iVar0 = create_vehicle(iLocal_976, vParam0, fParam3, 1, 1);
		if (does_entity_exist(iVar0))
		{
			if (is_vehicle_driveable(iVar0, 0))
			{
				iVar1 = create_ped_inside_vehicle(iVar0, 4, iLocal_975, -1, 1, true);
				if (!is_ped_injured(iVar1))
				{
					set_blocking_of_non_temporary_events(iVar1, true);
					set_model_as_no_longer_needed(iLocal_975);
					set_model_as_no_longer_needed(iLocal_976);
					return iVar0;
				}
				else
				{
					delete_vehicle(&iVar0);
				}
			}
			else
			{
				delete_vehicle(&iVar0);
			}
		}
	}
	return false;
}

int func_147(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = 0;
	if (*uParam0.f_128 == 0 && *(uParam0[5 /*15*/]).f_14 == 0)
	{
		*uParam1 = iParam6;
		iVar0 = 0;
	}
	else if ((func_143(iParam2) && is_vehicle_driveable(iParam4, 0)) && is_entity_at_coord(iParam4, *uParam0.f_105, 60f, 60f, 60f, false, true, 0))
	{
		*uParam1 = iParam4;
		if (*uParam0.f_128)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if ((func_143(iParam3) && is_vehicle_driveable(iParam5, 0)) && is_entity_at_coord(iParam5, *uParam0.f_105, 60f, 60f, 60f, false, true, 0))
	{
		*uParam1 = iParam5;
		if (*uParam0.f_128)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (*uParam0.f_128)
	{
		*uParam1 = 0;
		iVar0 = 3;
	}
	else
	{
		*uParam1 = iParam6;
		iVar0 = 0;
	}
	return iVar0;
}

void func_148()
{
	Global_14578 = 0;
	func_130();
}

void func_149(vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = get_player_index();
	if (is_player_playing(iVar0))
	{
		func_265(0);
		if (iParam9)
		{
			remove_player_helmet(get_player_index(), 1);
		}
		if (iParam8)
		{
			switch (func_120())
			{
				case 0:
					if (func_264(player_ped_id(), 8, 15))
					{
						func_151(player_ped_id(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_264(player_ped_id(), 9, 6))
					{
						func_151(player_ped_id(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_264(player_ped_id(), 8, 1) || func_264(player_ped_id(), 8, 10))
					{
						func_151(player_ped_id(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_264(player_ped_id(), 8, 4))
					{
						func_151(player_ped_id(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			clear_area_of_peds(func_22(get_player_index()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			clear_area_of_objects(vParam0, 30f, 0);
		}
		if (iParam10)
		{
			stop_fire_in_range(vParam0, 30f);
		}
		clear_area_of_projectiles(vParam0, 30f, 0);
		set_player_wanted_level(iVar0, false, 0);
		set_player_wanted_level_now(iVar0, 0);
		set_everyone_ignore_player(iVar0, 1);
		if (iParam12)
		{
			display_radar(false);
			display_hud(false);
		}
		clear_prints();
		if (iParam11 == 1)
		{
			clear_help(1);
		}
		if (iParam3 == 1)
		{
			set_widescreen_borders(true, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_43 = false;
			if (func_70(player_ped_id()))
			{
				iLocal_43 = get_selected_ped_weapon(player_ped_id());
				set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
			}
		}
		if (iParam5 == 1)
		{
			func_150(500, 0);
		}
	}
}

void func_150(int iParam0, int iParam1)
{
	if (is_screen_faded_out() || is_screen_fading_out())
	{
		if (!is_screen_fading_in())
		{
			do_screen_fade_in(iParam0);
		}
	}
	if (iParam1)
	{
		while (!is_screen_faded_in())
		{
			wait(0);
		}
	}
}

bool func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		Global_69311[1 /*14*/] = {func_200(iVar10, iParam1, iParam2)};
		if (!func_199(iParam3))
		{
			Global_69310--;
			return false;
		}
		func_192(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_190(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_190(iParam0, 9);
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
			iVar7 = func_186(iParam0, 1);
			if (!func_185(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = func_186(iParam0, 0);
			if (!func_184(iVar10, 14, iVar8) && !func_182(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_186(iParam0, 2);
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
			uVar11 = {func_178(iVar10, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_69311[1 /*14*/] = {func_200(iVar10, iVar0, uVar11[iVar0])};
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
							uVar27 = {func_172(iVar10, uVar11[iVar0])};
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_69311[1 /*14*/] = {func_200(iVar10, 14, uVar27[iVar1])};
							func_171(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
							func_192(14);
							if (Global_69310 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_163(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_151(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_162(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							set_ped_component_variation(iParam0, func_161(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_161(iVar0)));
						}
						else
						{
							set_ped_component_variation(iParam0, func_161(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
						}
						func_192(iVar0);
						if (Global_69310 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_163(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_151(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69311[1 /*14*/] = {func_200(iVar10, iVar0, func_160(iParam0, iVar0, -1))};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_159(iParam0, iVar10, &iVar4, 1))
							{
								func_151(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = {func_178(iVar10, 0)};
						func_151(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = {func_200(iVar10, 8, iVar5)};
			if (iVar5 != -99)
			{
				if (func_157(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_151(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_200(iVar10, 9, iVar6)};
			if (iVar6 != -99)
			{
				if (func_157(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_151(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_200(iVar10, 14, iVar7)};
			if (iVar7 != -99)
			{
				if (func_157(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_151(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_200(iVar10, 14, iVar8)};
			if (iVar8 != -99)
			{
				if (func_157(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_151(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_200(iVar10, 14, iVar9)};
			if (iVar9 != -99)
			{
				if (func_157(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_151(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = {func_172(iVar10, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69311[1 /*14*/] = {func_200(iVar10, 14, uVar67[iVar1])};
			func_171(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			func_192(14);
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_163(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_151(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_171(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
		func_192(iParam1);
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_163(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_151(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			set_ped_component_variation(iParam0, func_161(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_161(iParam1)));
		}
		else
		{
			set_ped_component_variation(iParam0, func_161(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
		}
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_163(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_151(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_154(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69310 == 1)
	{
		if (func_159(iParam0, iVar10, &iVar4, 0))
		{
			func_151(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_152(iParam0, iVar10, &iVar4))
		{
			func_151(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_69310--;
	return true;
}

bool func_152(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_153(iParam1);
	if (Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 != -99)
	{
		if (!func_264(iParam0, Global_101154.f_1826.f_539[uVar0 /*65*/].f_64, Global_101154.f_1826.f_539[uVar0 /*65*/].f_63))
		{
			*iParam2 = Global_101154.f_1826.f_539[uVar0 /*65*/].f_62;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 = -99;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

int func_153(int iParam0)
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

void func_154(int iParam0, int iParam1, int iParam2)
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
	if (func_156(iParam0, 12, iVar0))
	{
		if (func_155(iParam0, iParam1, iParam2))
		{
			uVar1 = func_153(iParam0);
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

bool func_155(int iParam0, int iParam1, int iParam2)
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

int func_156(int iParam0, int iParam1, int iParam2)
{
	Global_69311[1 /*14*/] = {func_200(iParam0, iParam1, iParam2)};
	return is_bit_set(Global_69311[1 /*14*/].f_6, 2);
}

bool func_157(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = {func_172(iParam0, *uParam4[13])};
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
	if (func_158(iParam0, iParam2, iParam3))
	{
		return true;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_185(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_184(iParam0, iParam2, iParam3))
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
		else if (func_182(iParam0, iParam2, iParam3))
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
		if (func_185(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_184(iParam0, iParam2, iParam3))
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
		else if (func_182(iParam0, iParam2, iParam3))
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
		if (func_185(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_184(iParam0, iParam2, iParam3))
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
		else if (func_182(iParam0, iParam2, iParam3))
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

bool func_158(int iParam0, int iParam1, int iParam2)
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

bool func_159(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = func_153(iParam1);
	if (Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 != -99)
	{
		if (!func_264(iParam0, Global_101154.f_1826.f_539[uVar0 /*65*/].f_61, Global_101154.f_1826.f_539[uVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_101154.f_1826.f_539[uVar0 /*65*/].f_59;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 = -99;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

int func_160(int iParam0, int iParam1, int iParam2)
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
				if (func_264(iParam0, iParam1, iVar0))
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
				if (func_264(iParam0, iParam1, iVar1))
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
				return func_186(iParam0, iParam2);
			}
		}
		else
		{
			return func_190(iParam0, iParam1);
		}
	}
	return -99;
}

int func_161(int iParam0)
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

bool func_162(int iParam0, int iParam1, int iParam2, int iParam3)
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
		uVar0 = func_153(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_61 = iParam1;
		return true;
	}
	return false;
}

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				iVar1 = func_190(iParam0, 1);
				iVar0 = func_170(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_190(iParam0, 2);
				iVar0 = func_170(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_162(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_169(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_168(iParam1, iParam3, &iVar0))
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
									if (!func_167(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_167(iParam0, 3, 135, 150))
									{
										iVar0 = func_166(iParam1, 3, 135, 150);
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
									if (!func_167(iParam0, 3, 209, 222))
									{
										iVar0 = func_166(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_167(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_166(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_166(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_166(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_166(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_167(iParam0, 3, 176, 191) && !func_167(iParam0, 3, 227, 242))
									{
										iVar0 = func_166(iParam1, 3, 176, 191);
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
								iVar4 = func_190(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_190(iParam0, 11);
								iVar5 = func_165(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_190(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_164(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
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
								iVar7 = func_190(iParam0, 8);
								iVar8 = func_190(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_165(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_165(iParam1, iParam3, iVar8, 1);
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
								iVar9 = func_190(iParam0, 11);
								iVar0 = func_165(iParam1, -99, iVar9, 0);
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

bool func_164(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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

int func_165(int iParam0, int iParam1, int iParam2, int iParam3)
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
				iParam2 = func_166(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_166(iParam0, 11, 25, 40);
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

int func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= iParam3 - 1)
	{
		iVar1 = iVar0;
		if (func_156(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

bool func_167(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_190(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return true;
	}
	return false;
}

bool func_168(int iParam0, int iParam1, int iParam2)
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

bool func_169(int iParam0, int iParam1, int iParam2, int iParam3)
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
		uVar0 = func_153(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_64 = iParam1;
		return true;
	}
	return false;
}

int func_170(int iParam0, int iParam1, int iParam2)
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

void func_171(int iParam0, int iParam1, int iParam2, int iParam3)
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

struct<10> func_172(int iParam0, int iParam1)
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
					func_177(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_177(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_177(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_177(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_177(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_177(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_177(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_177(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_177(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_177(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_177(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_173(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_177(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_177(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_177(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_177(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_177(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_177(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_177(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_177(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_177(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_177(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_173(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_177(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_177(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_177(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_177(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_177(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_177(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_177(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_177(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_177(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_177(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_173(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_177(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_177(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_177(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_177(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_177(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_177(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_177(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_177(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_177(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_177(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_177(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_177(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_177(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_177(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_177(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_177(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_177(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_177(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_177(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_177(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_177(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_177(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_177(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_177(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_177(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_177(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_173(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_177(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_177(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_177(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_177(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_177(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_177(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_177(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_177(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_177(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_177(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_177(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_177(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_177(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_177(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_177(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_177(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_177(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_177(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_177(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_177(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_177(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_177(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_177(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_177(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_177(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_173(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_173(int iParam0, int iParam1, int iParam2, int iParam3)
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
						*iParam0[vVar16.z] = func_174(iParam1, vVar16.x, 14, iVar0);
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

int func_174(int iParam0, int iParam1, int iParam2, int iParam3)
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
					return func_176(iParam0) + iVar18;
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
		iVar39 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_161(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			get_shop_ped_query_component(iVar37, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return func_175(iParam0, func_161(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_175(int iParam0, int iParam1)
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

int func_176(int iParam0)
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

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<16> func_178(int iParam0, int iParam1)
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
						func_181(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_181(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_181(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_181(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_181(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_181(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_181(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[0], Global_101154.f_1826.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_181(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_181(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_181(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_181(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_181(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_181(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_181(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_181(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_181(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_181(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_181(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_181(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_181(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_181(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_181(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_181(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_181(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_181(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_181(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_181(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_181(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_181(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_181(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_181(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_181(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_181(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_181(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_181(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_181(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_181(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_181(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_181(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_181(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_181(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_181(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_181(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_181(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_181(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_181(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_181(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_181(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_181(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_181(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_181(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_181(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_181(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_181(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_179(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_181(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_181(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_181(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[1], Global_101154.f_1826.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_181(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_181(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_181(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_181(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_181(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_181(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_181(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_181(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_181(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_181(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_181(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_181(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_181(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_181(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_181(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_181(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_181(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_181(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_181(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_181(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_181(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_181(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_181(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_181(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_181(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_181(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_181(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_181(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_181(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_181(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_181(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_181(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_181(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_181(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_181(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_181(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_181(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_181(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_181(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_181(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_181(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_181(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_181(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_181(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_179(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_181(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_181(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_181(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_181(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_181(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[2], Global_101154.f_1826.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_181(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_181(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_181(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_181(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_181(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_181(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_181(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_181(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_181(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_181(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_181(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_181(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_181(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_181(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_181(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_181(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_181(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_181(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_181(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_181(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_181(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_181(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_181(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_181(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_181(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_181(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_181(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_181(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_181(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_181(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_181(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_181(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_181(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_181(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_181(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_181(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_181(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_181(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_181(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_181(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_181(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_181(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_181(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_179(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_181(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_181(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_181(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_181(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_181(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_181(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_181(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_181(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_181(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_181(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_181(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_181(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_181(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_181(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_181(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_181(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_181(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_181(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_181(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_181(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_181(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_181(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_181(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_181(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_181(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_181(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_179(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_181(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_181(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_181(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_181(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_181(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_181(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_181(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_181(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_181(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_181(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_181(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_181(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_181(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_181(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_181(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_181(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_181(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_181(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_181(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_181(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_181(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_181(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_181(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_181(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_181(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_181(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_181(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_181(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_179(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3)
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
						*iParam0[func_180(vVar16.z)] = vVar16.x;
					}
					else
					{
						*iParam0[func_180(vVar16.z)] = func_174(iParam1, vVar16.x, func_180(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					*iParam0[func_180(vVar16.z)] = vVar16.y;
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

int func_180(int iParam0)
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

void func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_182(int iParam0, int iParam1, int iParam2)
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
						return (_0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 14, 3), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 14, 3), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 1, 3), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 1, 3), -1842686353, false));
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
						return (_0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 14, 4), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 14, 4), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 1, 4), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 1, 4), -1842686353, false));
					}
					break;
			}
			break;
	}
	return false;
}

int func_183(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar19 = iParam1 - func_176(iParam0);
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
		iVar40 = iParam1 - func_175(iParam0, func_161(iParam2));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69432.f_26[iParam2] && iParam1 == Global_69432[iParam2]) && Global_69432.f_13[iParam2] != 0)
		{
			return Global_69432.f_13[iParam2];
		}
		iVar41 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_161(iParam2));
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

bool func_184(int iParam0, int iParam1, int iParam2)
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
					iVar0 = func_183(iParam0, iParam2, 1, 3);
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
					iVar1 = func_183(iParam0, iParam2, 1, 4);
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

int func_185(int iParam0, int iParam1, int iParam2)
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
					return _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 14, 3), 97230661, true);
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
					return _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 14, 4), 97230661, true);
				}
			}
			break;
	}
	return false;
}

int func_186(int iParam0, int iParam1)
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
		return func_189(iParam1);
	}
	iVar1 = get_ped_prop_texture_index(iParam0, iParam1);
	return func_187(iParam0, iVar0, iVar1, iParam1);
}

int func_187(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_189(iParam3);
	}
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_174(get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_174(get_entity_model(iParam0), iVar1, 14, 4);
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
					iVar3 += func_188(iParam0, iParam3);
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
	return func_189(iParam3);
}

int func_188(int iParam0, int iParam1)
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

int func_189(int iParam0)
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

int func_190(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = func_161(iParam1);
	iVar1 = get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = get_ped_texture_variation(iParam0, iVar0);
	return func_191(iParam0, iVar1, iVar2, iParam1);
}

int func_191(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_161(iParam3);
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

void func_192(int iParam0)
{
	if (is_bit_set(Global_69311[1 /*14*/].f_6, true) && !is_bit_set(Global_69311[1 /*14*/].f_6, 6))
	{
		func_198(iParam0, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 2, Global_69311[1 /*14*/].f_1, 1, 0);
	}
	if (is_bit_set(Global_69311[1 /*14*/].f_6, true) && is_bit_set(Global_69311[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_193(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_193(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_193(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_197(iParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_196(uVar2, iVar0, 0);
		set_bit(&iVar3, iVar1);
		func_194(uVar2, iVar3, iVar0, 1);
	}
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_195(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_195(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_21();
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

int func_196(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_195(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_197(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
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

int func_198(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_199(int iParam0)
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

struct<14> func_200(int iParam0, int iParam1, int iParam2)
{
	func_263();
	if (iParam0 == joaat("player_zero"))
	{
		func_245(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_226(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_201(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_201(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_225(iParam1);
			break;
		
		case 2:
			func_224(iParam1);
			break;
		
		case 3:
			func_221(iParam1);
			break;
		
		case 4:
			func_220(iParam1);
			break;
		
		case 6:
			func_219(iParam1);
			break;
		
		case 5:
			func_218(iParam1);
			break;
		
		case 8:
			func_217(iParam1);
			break;
		
		case 9:
			func_216(iParam1);
			break;
		
		case 10:
			func_215(iParam1);
			break;
		
		case 1:
			func_214(iParam1);
			break;
		
		case 7:
			func_213(iParam1);
			break;
		
		case 11:
			func_212(iParam1);
			break;
		
		case 12:
			func_211(iParam1);
			break;
		
		case 13:
			func_210(iParam1);
			break;
		
		case 14:
			func_202(iParam1);
			break;
	}
}

void func_202(int iParam0)
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
			func_209(iVar10, iParam0, 155);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_203(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	*uParam0.f_12 = func_208(iParam8);
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
		if (func_280(14))
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
			if (!func_207(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_207(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_207(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_207(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_207(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_207(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
	}
	else if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
	{
		set_bit(uParam0.f_6, false);
		set_bit(uParam0.f_6, 5);
		if (func_198(iParam1, *uParam0.f_5, *uParam0.f_2, 0, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, true);
		}
		if (func_198(iParam1, *uParam0.f_5, *uParam0.f_2, 1, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 2);
		}
		if (!func_198(iParam1, *uParam0.f_5, *uParam0.f_2, 2, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 4);
		}
	}
	else
	{
		set_bit(uParam0.f_6, false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_280(14))
			{
				return;
			}
			iVar0 = func_196(func_206(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, true);
			}
			iVar0 = func_196(func_205(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, 2);
			}
			if (func_204(iParam1, *uParam0.f_2, &uVar1))
			{
				iVar0 = func_196(uVar1, Global_69309, 0);
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

int func_204(int iParam0, int iParam1, var uParam2)
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

int func_205(int iParam0, int iParam1)
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

int func_206(int iParam0, int iParam1)
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

int func_207(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_197(uParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_196(uVar2, iVar0, 0);
		return is_bit_set(iVar3, iVar1);
	}
	return false;
}

int func_208(int iParam0)
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

void func_209(int iParam0, int iParam1, int iParam2)
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
					func_203(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_203(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_203(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, false), iVar37, 2, Var20.f_1 != 0);
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
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_161(iParam0));
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
					func_203(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_210(int iParam0)
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
			func_209(iVar10, iParam0, 9);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_211(int iParam0)
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
			func_209(iVar10, iParam0, 48);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_212(int iParam0)
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
			func_209(iVar10, iParam0, 1);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_213(int iParam0)
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
			func_209(iVar10, iParam0, 1);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_214(int iParam0)
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
			func_209(iVar10, iParam0, 6);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_215(int iParam0)
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
			func_209(iVar10, iParam0, 33);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_216(int iParam0)
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
			func_209(iVar10, iParam0, 17);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_217(int iParam0)
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
			func_209(iVar10, iParam0, 18);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_218(int iParam0)
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
			func_209(iVar10, iParam0, 7);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_219(int iParam0)
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
			func_209(iVar10, iParam0, 84);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_220(int iParam0)
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
			func_209(iVar10, iParam0, 104);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_221(int iParam0)
{
	if (iParam0 < 136)
	{
		func_223(iParam0);
	}
	else
	{
		func_222(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_209(3, iParam0, 242);
	}
}

void func_222(int iParam0)
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
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_223(int iParam0)
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
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_224(int iParam0)
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
			func_209(iVar10, iParam0, 9);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_225(int iParam0)
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
			func_209(iVar10, iParam0, 7);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_226(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_244(iParam1);
			break;
		
		case 2:
			func_243(iParam1);
			break;
		
		case 3:
			func_239(iParam1);
			break;
		
		case 4:
			func_238(iParam1);
			break;
		
		case 6:
			func_237(iParam1);
			break;
		
		case 5:
			func_236(iParam1);
			break;
		
		case 8:
			func_235(iParam1);
			break;
		
		case 9:
			func_234(iParam1);
			break;
		
		case 10:
			func_233(iParam1);
			break;
		
		case 1:
			func_232(iParam1);
			break;
		
		case 7:
			func_231(iParam1);
			break;
		
		case 11:
			func_230(iParam1);
			break;
		
		case 12:
			func_229(iParam1);
			break;
		
		case 13:
			func_228(iParam1);
			break;
		
		case 14:
			func_227(iParam1);
			break;
	}
}

void func_227(int iParam0)
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
			func_209(iVar10, iParam0, 175);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_228(int iParam0)
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
			func_209(iVar10, iParam0, 9);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_229(int iParam0)
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
			func_209(iVar10, iParam0, 47);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_230(int iParam0)
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
			func_209(iVar10, iParam0, 63);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_231(int iParam0)
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
			func_209(iVar10, iParam0, 1);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_232(int iParam0)
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
			func_209(iVar10, iParam0, 5);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_233(int iParam0)
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
			func_209(iVar10, iParam0, 53);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_234(int iParam0)
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
			func_209(iVar10, iParam0, 12);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_235(int iParam0)
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
			func_209(iVar10, iParam0, 77);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_236(int iParam0)
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
			func_209(iVar10, iParam0, 7);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_237(int iParam0)
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
			func_209(iVar10, iParam0, 134);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_238(int iParam0)
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
			func_209(iVar10, iParam0, 117);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_239(int iParam0)
{
	if (iParam0 < 107)
	{
		func_242(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_241(iParam0);
	}
	else
	{
		func_240(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_209(3, iParam0, 318);
	}
}

void func_240(int iParam0)
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
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_241(int iParam0)
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
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_242(int iParam0)
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
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_243(int iParam0)
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
			func_209(iVar10, iParam0, 21);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_244(int iParam0)
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
			func_209(iVar10, iParam0, 10);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_245(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_262(iParam1);
			break;
		
		case 2:
			func_261(iParam1);
			break;
		
		case 3:
			func_258(iParam1);
			break;
		
		case 4:
			func_257(iParam1);
			break;
		
		case 6:
			func_256(iParam1);
			break;
		
		case 5:
			func_255(iParam1);
			break;
		
		case 8:
			func_254(iParam1);
			break;
		
		case 9:
			func_253(iParam1);
			break;
		
		case 10:
			func_252(iParam1);
			break;
		
		case 1:
			func_251(iParam1);
			break;
		
		case 7:
			func_250(iParam1);
			break;
		
		case 11:
			func_249(iParam1);
			break;
		
		case 12:
			func_248(iParam1);
			break;
		
		case 13:
			func_247(iParam1);
			break;
		
		case 14:
			func_246(iParam1);
			break;
	}
}

void func_246(int iParam0)
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
			func_209(iVar10, iParam0, 113);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_247(int iParam0)
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
			func_209(iVar10, iParam0, 10);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_248(int iParam0)
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
			func_209(iVar10, iParam0, 53);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_249(int iParam0)
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
			func_209(iVar10, iParam0, 45);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_250(int iParam0)
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
			func_209(iVar10, iParam0, 1);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_251(int iParam0)
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
			func_209(iVar10, iParam0, 5);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_252(int iParam0)
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
			func_209(iVar10, iParam0, 48);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_253(int iParam0)
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
			func_209(iVar10, iParam0, 20);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_254(int iParam0)
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
			func_209(iVar10, iParam0, 24);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_255(int iParam0)
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
			func_209(iVar10, iParam0, 14);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_256(int iParam0)
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
			func_209(iVar10, iParam0, 99);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_257(int iParam0)
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
			func_209(iVar10, iParam0, 113);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_258(int iParam0)
{
	if (iParam0 < 60)
	{
		func_260(iParam0);
	}
	else
	{
		func_259(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_209(3, iParam0, 181);
	}
}

void func_259(int iParam0)
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
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_260(int iParam0)
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
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_261(int iParam0)
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
			func_209(iVar10, iParam0, 6);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_262(int iParam0)
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
			func_209(iVar10, iParam0, 7);
			return;
			break;
	}
	func_203(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_263()
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

bool func_264(int iParam0, int iParam1, int iParam2)
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
	Global_69311[1 /*14*/] = {func_200(iVar0, iParam1, iParam2)};
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam1 == 12)
	{
		uVar5 = {func_178(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_264(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = {func_172(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_264(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69311[2 /*14*/] = {func_200(iVar0, 14, iVar4)};
									if (Global_69311[2 /*14*/].f_12 == iVar3)
									{
										if (func_264(iParam0, 14, iVar4))
										{
											if (!func_157(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69311[2 /*14*/])))
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
						iVar1 = func_190(iParam0, iVar2);
						Global_69311[2 /*14*/] = {func_200(iVar0, iVar2, iVar1)};
						if (!func_157(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69311[2 /*14*/])))
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
		uVar32 = {func_172(iVar0, iParam2)};
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_264(iParam0, 14, uVar32[iVar31]))
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
	else if (Global_69311[1 /*14*/].f_3 == get_ped_drawable_variation(iParam0, func_161(iParam1)) && Global_69311[1 /*14*/].f_4 == get_ped_texture_variation(iParam0, func_161(iParam1)))
	{
		return true;
	}
	return false;
}

void func_265(int iParam0)
{
	int iVar0;
	
	iVar0 = get_player_index();
	if (!is_player_dead(iVar0))
	{
		if (iParam0)
		{
		}
		set_player_control(iVar0, iParam0, 16);
		set_player_control(iVar0, iParam0, 32);
	}
	func_71(1, 1, 0, 0);
}

void func_266(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = func_273(iParam0);
	iVar1 = -1;
	if (iVar0 == -1)
	{
		iVar1 = func_272(iParam0);
		if (!iVar1 == -1)
		{
			Global_36616[iVar1 /*5*/].f_3 += iParam1;
			Global_36616[iVar1 /*5*/].f_2 += iParam1;
		}
		return;
	}
	func_267(1, iVar0, 2, iParam1);
}

void func_267(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_268(iParam0, iParam1, iParam2, 0, iParam3);
}

void func_268(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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
	if (func_270(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_269();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36723[iVar0 /*5*/] = iParam0;
	Global_36723[iVar0 /*5*/].f_1 = iParam1;
	Global_36723[iVar0 /*5*/].f_2 = iParam2;
	Global_36723[iVar0 /*5*/].f_3 = iParam3;
	Global_36723[iVar0 /*5*/].f_4 = uParam4;
}

int func_269()
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

bool func_270(int iParam0, int iParam1, int iParam2)
{
	if (func_271(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_271(int iParam0, int iParam1, int iParam2)
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

int func_272(int iParam0)
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

int func_273(int iParam0)
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
		if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
		{
			return Global_36642[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_274(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_275(iParam0) == -1)
	{
		return false;
	}
	return true;
}

int func_275(int iParam0)
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

bool func_276(int iParam0)
{
	if (is_screen_faded_in())
	{
		if (get_game_timer() - Global_28 > iParam0)
		{
			Global_27 = get_game_timer();
		}
		Global_28 = get_game_timer();
		if (get_game_timer() - Global_27 > iParam0)
		{
			if (func_277())
			{
				Global_27 = get_game_timer();
				return true;
			}
		}
	}
	return false;
}

bool func_277()
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_control_just_pressed(0, 18) || is_control_just_pressed(2, 18))
	{
		return true;
	}
	return false;
}

bool func_278(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 7:
			*(uParam1[0 /*15*/]) = {405.9127f, -711.7676f, 31.2618f};
			*(uParam1[0 /*15*/].f_3) = {19.919f, 0f, 90.3396f};
			*(uParam1[0 /*15*/].f_6) = {405.4205f, -711.784f, 29.3979f};
			*(uParam1[0 /*15*/].f_6.f_3) = {5.5077f, 0f, 99.6259f};
			*(uParam1[0 /*15*/]).f_12 = 50f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {398.0591f, -714.2009f, 29.6786f};
			*(uParam1[1 /*15*/].f_3) = {-2.2484f, 0.0024f, 51.3791f};
			*(uParam1[1 /*15*/].f_6) = {397.969f, -714.1289f, 29.6741f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-2.2484f, 0.0024f, 51.174f};
			*(uParam1[1 /*15*/]).f_12 = 38.1457f;
			*(uParam1[1 /*15*/]).f_13 = 5.58f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {398.3901f, -714.3004f, 29.7155f};
			*(uParam1[2 /*15*/].f_3) = {-1.9825f, -0.0437f, 50.2219f};
			*(uParam1[2 /*15*/].f_6) = {398.3167f, -714.2393f, 29.7122f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-1.9825f, -0.0437f, 48.076f};
			*(uParam1[2 /*15*/]).f_12 = 39.2093f;
			*(uParam1[2 /*15*/]).f_13 = 13f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {405.5188f, -709.9571f, 29.6613f};
			*(uParam1[3 /*15*/].f_3) = {-2.8617f, 0.0312f, 110.409f};
			*(uParam1[3 /*15*/].f_6) = {405.8275f, -709.2303f, 29.6882f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-2.8617f, 0.0312f, 103.4981f};
			*(uParam1[3 /*15*/]).f_12 = 38.1457f;
			*(uParam1[3 /*15*/]).f_13 = 8.375f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {397.4691f, -712.0601f, 29.7563f};
			*(uParam1[5 /*15*/].f_3) = {-5.987f, -0.017f, 154.1207f};
			*(uParam1[5 /*15*/].f_6) = {397.4691f, -712.0601f, 29.7563f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-5.987f, -0.017f, 154.1207f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {397.4691f, -712.0601f, 29.7563f};
			*uParam1.f_91.f_3 = {-5.987f, -0.017f, 154.1207f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {397.6112f, -710.4716f, 29.7051f};
			*uParam1.f_98.f_3 = {4.6835f, -0.3053f, 163.9312f};
			*uParam1.f_104 = 50f;
			*uParam1.f_105 = {401.2501f, -709.6287f, 28.1688f};
			*uParam1.f_108 = 0f;
			*uParam1.f_109 = {396.8529f, -713.7012f, 28.2854f};
			*(uParam1.f_112[0 /*3*/]) = {395.8499f, -711.9299f, 28.2849f};
			*(uParam1.f_112[1 /*3*/]) = {397.0676f, -712.2994f, 28.285f};
			*uParam1.f_119 = {396.5359f, -692.8924f, 28.2871f};
			*uParam1.f_123 = 1.55f;
			*uParam1.f_124 = 7.705f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 5.115f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 1;
			*uParam1.f_129 = {398.3131f, -708.6296f, 28.2844f};
			*uParam1.f_132 = {402.7359f, -689.6898f, 28.2549f};
			*uParam1.f_135 = {401.3918f, -718.0711f, 28.1762f};
			*uParam1.f_135.f_3 = 0f;
			*uParam1.f_135.f_4 = 10;
			*(uParam1.f_140[0 /*3*/]) = {390.1166f, -686.0222f, 28.27f};
			*uParam1.f_150[0] = 94.1853f;
			*(uParam1.f_140[1 /*3*/]) = {444.7804f, -686.5525f, 27.5881f};
			*uParam1.f_150[1] = 270.72f;
			*(uParam1.f_140[2 /*3*/]) = {382.391f, -671.3192f, 28.2481f};
			*uParam1.f_150[2] = 57.3318f;
			return true;
			break;
		
		case 8:
			*(uParam1[0 /*15*/]) = {-1405.148f, -195.824f, 50.5379f};
			*(uParam1[0 /*15*/].f_3) = {15.4864f, 0f, 126.9167f};
			*(uParam1[0 /*15*/].f_6) = {-1405.472f, -195.2269f, 48.3459f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-6.4786f, 0f, 133.4543f};
			*(uParam1[0 /*15*/]).f_12 = 43.8728f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-1414.142f, -200.2502f, 47.8477f};
			*(uParam1[1 /*15*/].f_3) = {-3.1055f, 0f, -105.8073f};
			*(uParam1[1 /*15*/].f_6) = {-1414.117f, -200.2495f, 47.8464f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-3.1055f, 0f, -105.1865f};
			*(uParam1[1 /*15*/]).f_12 = 35.8476f;
			*(uParam1[1 /*15*/]).f_13 = 8.425f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-1414.262f, -199.6994f, 47.8791f};
			*(uParam1[2 /*15*/].f_3) = {-3.8011f, 0f, -118.3642f};
			*(uParam1[2 /*15*/].f_6) = {-1414.096f, -199.7538f, 47.8676f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-3.8011f, 0f, -119.1302f};
			*(uParam1[2 /*15*/]).f_12 = 35.8476f;
			*(uParam1[2 /*15*/]).f_13 = 11.175f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {-1410.383f, -193.2492f, 47.9417f};
			*(uParam1[3 /*15*/].f_3) = {-2.9923f, 0f, 176.5927f};
			*(uParam1[3 /*15*/].f_6) = {-1410.383f, -193.2492f, 47.9417f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-2.9923f, 0f, -172.945f};
			*(uParam1[3 /*15*/]).f_12 = 40.3821f;
			*(uParam1[3 /*15*/]).f_13 = 6.35f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-1411.703f, -200.2036f, 47.7778f};
			*(uParam1[5 /*15*/].f_3) = {-3.8893f, 0f, 130.3052f};
			*(uParam1[5 /*15*/].f_6) = {-1411.703f, -200.2036f, 47.7778f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-3.8893f, 0f, 130.3052f};
			*(uParam1[5 /*15*/]).f_12 = 50.0049f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-1411.703f, -200.2036f, 47.7778f};
			*uParam1.f_91.f_3 = {-3.8893f, 0f, 130.3052f};
			*uParam1.f_97 = 50.0049f;
			*uParam1.f_98 = {-1411.703f, -200.2036f, 47.7778f};
			*uParam1.f_98.f_3 = {-3.8893f, 0f, 130.3052f};
			*uParam1.f_104 = 50.0049f;
			*uParam1.f_105 = {-1407.576f, -199.3733f, 46.0344f};
			*uParam1.f_108 = 216.25f;
			*uParam1.f_109 = {-1412.964f, -200.9753f, 46.2845f};
			*(uParam1.f_112[0 /*3*/]) = {-1410.982f, -200.6391f, 46.2294f};
			*(uParam1.f_112[1 /*3*/]) = {-1411.232f, -201.405f, 46.2381f};
			*uParam1.f_119 = {-1427.788f, -187.1937f, 46.4753f};
			*uParam1.f_123 = 1.75f;
			*uParam1.f_124 = 9.84f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 1;
			*uParam1.f_129 = {-1427.788f, -187.1937f, 46.4753f};
			*uParam1.f_132 = {-1358.114f, -272.4378f, 41.4143f};
			*uParam1.f_135 = {-1439.46f, -202.4132f, 46.6154f};
			*uParam1.f_135.f_3 = 322.56f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {-1383.764f, -264.7188f, 41.9284f};
			*uParam1.f_150[0] = 130.32f;
			*(uParam1.f_140[1 /*3*/]) = {-1473.486f, -257.2262f, 48.9357f};
			*uParam1.f_150[1] = 44.64f;
			*(uParam1.f_140[2 /*3*/]) = {-1382.035f, -271.8694f, 41.9838f};
			*uParam1.f_150[2] = 132.0433f;
			return true;
			break;
		
		case 9:
			*(uParam1[0 /*15*/]) = {290.8533f, 172.5629f, 105.446f};
			*(uParam1[0 /*15*/].f_3) = {24.0829f, 0f, -19.9766f};
			*(uParam1[0 /*15*/].f_6) = {290.8804f, 172.6505f, 105.1818f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-3.3518f, 0f, -17.3689f};
			*(uParam1[0 /*15*/]).f_12 = 36.3239f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {298.6032f, 181.1218f, 104.7438f};
			*(uParam1[1 /*15*/].f_3) = {-3.2463f, 0f, 81.368f};
			*(uParam1[1 /*15*/].f_6) = {298.5056f, 181.1366f, 104.7382f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-3.1642f, 0f, 81.8605f};
			*(uParam1[1 /*15*/]).f_12 = 35.122f;
			*(uParam1[1 /*15*/]).f_13 = 6.625f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {298.311f, 180.892f, 104.7343f};
			*(uParam1[2 /*15*/].f_3) = {-3.3284f, 0f, 74.3088f};
			*(uParam1[2 /*15*/].f_6) = {298.2302f, 180.9147f, 104.7294f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-2.3434f, 0f, 73.7343f};
			*(uParam1[2 /*15*/]).f_12 = 35.122f;
			*(uParam1[2 /*15*/]).f_13 = 10.175f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {299.5133f, 174.0084f, 104.6379f};
			*(uParam1[3 /*15*/].f_3) = {0.7548f, 0f, 40.582f};
			*(uParam1[3 /*15*/].f_6) = {299.5133f, 174.0084f, 104.6379f};
			*(uParam1[3 /*15*/].f_6.f_3) = {0.7548f, 0f, 60.3641f};
			*(uParam1[3 /*15*/]).f_12 = 42.6649f;
			*(uParam1[3 /*15*/]).f_13 = 6.925f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {295.994f, 180.8288f, 104.8471f};
			*(uParam1[5 /*15*/].f_3) = {-9.6963f, 0f, -42.3682f};
			*(uParam1[5 /*15*/].f_6) = {295.994f, 180.8288f, 104.8471f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-9.6963f, 0f, -42.3682f};
			*(uParam1[5 /*15*/]).f_12 = 49.972f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {295.994f, 180.8288f, 104.8471f};
			*uParam1.f_91.f_3 = {-9.6963f, 0f, -42.3682f};
			*uParam1.f_97 = 49.972f;
			*uParam1.f_98 = {295.994f, 180.8288f, 104.8471f};
			*uParam1.f_98.f_3 = {-9.6963f, 0f, -42.3682f};
			*uParam1.f_104 = 49.972f;
			*uParam1.f_105 = {290.7559f, 177.1301f, 103.1523f};
			*uParam1.f_108 = 74.52f;
			*uParam1.f_109 = {297.1597f, 181.7558f, 103.2131f};
			*(uParam1.f_112[0 /*3*/]) = {295.0739f, 181.1341f, 103.2455f};
			*(uParam1.f_112[1 /*3*/]) = {294.9557f, 182.0589f, 103.2534f};
			*uParam1.f_119 = {301.1894f, 190.1084f, 103.1125f};
			*uParam1.f_123 = 1.65f;
			*uParam1.f_124 = 11.1f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 1;
			*uParam1.f_129 = {301.1894f, 190.1084f, 103.1125f};
			*uParam1.f_132 = {153.4835f, 223.6109f, 105.7286f};
			*uParam1.f_135 = {280.205f, 152.9264f, 103.1841f};
			*uParam1.f_135.f_3 = 248.76f;
			*uParam1.f_135.f_4 = 5;
			*(uParam1.f_140[0 /*3*/]) = {227.2966f, 223.5158f, 104.5494f};
			*uParam1.f_150[0] = 340.2f;
			*(uParam1.f_140[1 /*3*/]) = {196.4739f, 139.1099f, 100.2864f};
			*uParam1.f_150[1] = 159.8148f;
			*(uParam1.f_140[2 /*3*/]) = {225.8337f, 237.2527f, 104.5132f};
			*uParam1.f_150[2] = 337.7378f;
			return true;
			break;
	}
	return false;
}

bool func_279(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*(uParam1[0 /*15*/]) = {-826.7827f, 183.7083f, 72.275f};
			*(uParam1[0 /*15*/].f_3) = {24.3451f, 0f, -121.7598f};
			*(uParam1[0 /*15*/].f_6) = {-826.7559f, 183.7018f, 71.8113f};
			*(uParam1[0 /*15*/].f_6.f_3) = {3.8335f, 0f, -148.4988f};
			*(uParam1[0 /*15*/]).f_12 = 47.4693f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-826.2693f, 180.629f, 71.8522f};
			*(uParam1[1 /*15*/].f_3) = {0.3385f, 0f, -125.3694f};
			*(uParam1[1 /*15*/].f_6) = {-826.1978f, 180.5609f, 71.8527f};
			*(uParam1[1 /*15*/].f_6.f_3) = {0.3385f, 0f, -125.3694f};
			*(uParam1[1 /*15*/]).f_12 = 32.278f;
			*(uParam1[1 /*15*/]).f_13 = 2.6f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-825.2714f, 181.3561f, 71.8458f};
			*(uParam1[2 /*15*/].f_3) = {0.3457f, 0f, -154.4318f};
			*(uParam1[2 /*15*/].f_6) = {-825.2325f, 181.2749f, 71.8464f};
			*(uParam1[2 /*15*/].f_6.f_3) = {0.3457f, 0f, -154.4318f};
			*(uParam1[2 /*15*/]).f_12 = 29.2584f;
			*(uParam1[2 /*15*/]).f_13 = 3f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {-823.177f, 180.3802f, 71.8216f};
			*(uParam1[3 /*15*/].f_3) = {-3.9551f, 0f, 122.8645f};
			*(uParam1[3 /*15*/].f_6) = {-823.3178f, 180.3653f, 71.8129f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-3.7621f, 0f, 116.8534f};
			*(uParam1[3 /*15*/]).f_12 = 50f;
			*(uParam1[3 /*15*/]).f_13 = 3f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-826.7559f, 183.7018f, 71.8113f};
			*(uParam1[5 /*15*/].f_3) = {3.8335f, 0f, -148.4988f};
			*(uParam1[5 /*15*/].f_6) = {-826.7559f, 183.7018f, 71.8113f};
			*(uParam1[5 /*15*/].f_6.f_3) = {3.8335f, 0f, -148.4988f};
			*(uParam1[5 /*15*/]).f_12 = 47.4693f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-826.7559f, 183.7018f, 71.8113f};
			*uParam1.f_91.f_3 = {3.8335f, 0f, -148.4988f};
			*uParam1.f_97 = 47.4693f;
			*uParam1.f_98 = {-826.7559f, 183.7018f, 71.8113f};
			*uParam1.f_98.f_3 = {3.8335f, 0f, -148.4988f};
			*uParam1.f_104 = 47.4693f;
			*uParam1.f_105 = {-830.1575f, 175.3299f, 71.1486f};
			*uParam1.f_108 = 335f;
			*uParam1.f_109 = {-825.5045f, 179.6075f, 70.4304f};
			*(uParam1.f_112[0 /*3*/]) = {-824.0706f, 179.5434f, 70.4812f};
			*(uParam1.f_112[1 /*3*/]) = {-824.3851f, 178.7221f, 70.3815f};
			*uParam1.f_119 = {-816.7786f, 178.2218f, 71.2278f};
			*uParam1.f_123 = 3.03f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-816.7786f, 178.2218f, 71.2278f};
			*uParam1.f_132 = {-816.7786f, 178.2218f, 71.2278f};
			*uParam1.f_135 = {-857.8395f, 158.6697f, 64.0398f};
			*uParam1.f_135.f_3 = 352.08f;
			*uParam1.f_135.f_4 = 1;
			*(uParam1.f_140[0 /*3*/]) = {-791.8809f, 155.0175f, 70.6749f};
			*uParam1.f_150[0] = 189.9119f;
			*(uParam1.f_140[1 /*3*/]) = {-795.0798f, 176.0365f, 72.835f};
			*uParam1.f_150[1] = 186.5013f;
			return true;
			break;
		
		case 2:
			*(uParam1[0 /*15*/]) = {1988.662f, 3809.245f, 33.889f};
			*(uParam1[0 /*15*/].f_3) = {2.3222f, 0f, 59.8915f};
			*(uParam1[0 /*15*/].f_6) = {1988.41f, 3808.381f, 32.7818f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-3.5227f, 0f, 34.7012f};
			*(uParam1[0 /*15*/]).f_12 = 41.7859f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {1999.131f, 3808.382f, 37.36f};
			*(uParam1[1 /*15*/].f_3) = {-19.3735f, 0f, 77.9903f};
			*(uParam1[1 /*15*/].f_6) = {1999.131f, 3808.382f, 34.36f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-19.3735f, 0f, 77.9903f};
			*(uParam1[1 /*15*/]).f_12 = 50f;
			*(uParam1[1 /*15*/]).f_13 = 0f;
			*(uParam1[1 /*15*/]).f_14 = 0;
			*(uParam1[2 /*15*/]) = {1986.536f, 3808.712f, 32.7272f};
			*(uParam1[2 /*15*/].f_3) = {-4.2982f, 0.0419f, -15.1045f};
			*(uParam1[2 /*15*/].f_6) = {1986.546f, 3808.747f, 32.7245f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-4.2982f, 0.0419f, -17.9532f};
			*(uParam1[2 /*15*/]).f_12 = 27.6284f;
			*(uParam1[2 /*15*/]).f_13 = 4f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {1984.67f, 3817.902f, 32.6427f};
			*(uParam1[3 /*15*/].f_3) = {-1.1635f, 0.0008f, -168.368f};
			*(uParam1[3 /*15*/].f_6) = {1984.887f, 3817.297f, 32.6298f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-1.1635f, 0.0008f, -168.368f};
			*(uParam1[3 /*15*/]).f_12 = 39.0874f;
			*(uParam1[3 /*15*/]).f_13 = 5f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {1985.8f, 3811.2f, 32.6f};
			*(uParam1[5 /*15*/].f_3) = {-3.2f, 0f, -172.8f};
			*(uParam1[5 /*15*/].f_6) = {1985.8f, 3811.2f, 32.6f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-3.2f, 0f, -172.8f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {1985.8f, 3811.2f, 32.6f};
			*uParam1.f_91.f_3 = {-3.2f, 0f, -172.8f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {1985.8f, 3811.2f, 32.6f};
			*uParam1.f_98.f_3 = {-3.2f, 0f, -172.8f};
			*uParam1.f_104 = 50f;
			*uParam1.f_105 = {1984.545f, 3797.065f, 31.253f};
			*uParam1.f_108 = 303.75f;
			*uParam1.f_109 = {1986.351f, 3809.745f, 31.1284f};
			*(uParam1.f_112[0 /*3*/]) = {1986.562f, 3811.748f, 31.1313f};
			*(uParam1.f_112[1 /*3*/]) = {1987.799f, 3811.082f, 31.0998f};
			*uParam1.f_119 = {1977.868f, 3815.664f, 32.7359f};
			*uParam1.f_123 = 3.225f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 0;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {1977.868f, 3815.664f, 32.7359f};
			*uParam1.f_132 = {1977.868f, 3815.664f, 32.7359f};
			*uParam1.f_135 = {1996.434f, 3822.849f, 31.1168f};
			*uParam1.f_135.f_3 = 200.88f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {1970.161f, 3832.697f, 31.0051f};
			*uParam1.f_150[0] = 345.24f;
			*(uParam1.f_140[1 /*3*/]) = {1923.846f, 3793.484f, 31.3044f};
			*uParam1.f_150[1] = 24.6026f;
			return true;
			break;
		
		case 3:
			*(uParam1[0 /*15*/]) = {-15.8397f, -1454.149f, 32.0213f};
			*(uParam1[0 /*15*/].f_3) = {-0.6298f, 0.0085f, -9.3542f};
			*(uParam1[0 /*15*/].f_6) = {-15.0177f, -1455.3f, 31.1352f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-4.2034f, -0.0715f, -24.1621f};
			*(uParam1[0 /*15*/]).f_12 = 38.6495f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-25.7417f, -1450.132f, 33.5422f};
			*(uParam1[1 /*15*/].f_3) = {-11.1198f, 0f, -123.8078f};
			*(uParam1[1 /*15*/].f_6) = {-25.7417f, -1450.132f, 30.5422f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-11.1198f, 0f, -123.8078f};
			*(uParam1[1 /*15*/]).f_12 = 38.2875f;
			*(uParam1[1 /*15*/]).f_13 = 0f;
			*(uParam1[1 /*15*/]).f_14 = 0;
			*(uParam1[2 /*15*/]) = {-13.6389f, -1451.056f, 31.0825f};
			*(uParam1[2 /*15*/].f_3) = {-3.2369f, -0.029f, 176.9312f};
			*(uParam1[2 /*15*/].f_6) = {-25.7417f, -1450.132f, 30.5422f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-11.1198f, 0f, -123.8078f};
			*(uParam1[2 /*15*/]).f_12 = 26.097f;
			*(uParam1[2 /*15*/]).f_13 = 0f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {-15.5813f, -1457.149f, 30.8433f};
			*(uParam1[3 /*15*/].f_3) = {-1.3844f, 0f, -15.1833f};
			*(uParam1[3 /*15*/].f_6) = {-15.6248f, -1457.021f, 30.8406f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-0.4872f, 0f, -12.8425f};
			*(uParam1[3 /*15*/]).f_12 = 32.9661f;
			*(uParam1[3 /*15*/]).f_13 = 4f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-14.4f, -1453.1f, 31f};
			*(uParam1[5 /*15*/].f_3) = {-3f, 0f, -144f};
			*(uParam1[5 /*15*/].f_6) = {-14.4f, -1453.1f, 31f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-3f, 0f, -144f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-14.4f, -1453.1f, 31f};
			*uParam1.f_91.f_3 = {-3f, 0f, -144f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {-14.4f, -1453.1f, 31f};
			*uParam1.f_98.f_3 = {-3f, 0f, -144f};
			*uParam1.f_104 = 50f;
			*uParam1.f_105 = {-5.0612f, -1456.55f, 29.4097f};
			*uParam1.f_108 = 96.12f;
			*uParam1.f_109 = {-13.8595f, -1454.332f, 29.5001f};
			*(uParam1.f_112[0 /*3*/]) = {-14.2219f, -1452.365f, 29.5429f};
			*(uParam1.f_112[1 /*3*/]) = {-13.2385f, -1452.184f, 29.548f};
			*uParam1.f_119 = {-13.9595f, -1441.432f, 30.2797f};
			*uParam1.f_123 = 3f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 0;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-13.9595f, -1441.432f, 30.2797f};
			*uParam1.f_132 = {-13.9595f, -1441.432f, 30.2797f};
			*uParam1.f_135 = {-31.3914f, -1468.314f, 30.0697f};
			*uParam1.f_135.f_3 = 274.68f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {-14.3429f, -1423.344f, 29.7124f};
			*uParam1.f_150[0] = 257.04f;
			*(uParam1.f_140[1 /*3*/]) = {9.0406f, -1416.897f, 28.3067f};
			*uParam1.f_150[1] = 270.72f;
			*(uParam1.f_140[2 /*3*/]) = {0f, 0f, 0f};
			*uParam1.f_150[2] = 0f;
			return true;
			break;
		
		case 4:
			*(uParam1[0 /*15*/]) = {21.2376f, 576.7308f, 185.7817f};
			*(uParam1[0 /*15*/].f_3) = {1.9456f, 0.0255f, 179.1536f};
			*(uParam1[0 /*15*/].f_6) = {21.2591f, 576.9102f, 183.7657f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-6.2299f, 0.0255f, 171.9914f};
			*(uParam1[0 /*15*/]).f_12 = 39.704f;
			*(uParam1[0 /*15*/]).f_13 = 6f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {12.3045f, 550.5663f, 176.4523f};
			*(uParam1[1 /*15*/].f_3) = {-4.0739f, 0f, 153.0748f};
			*(uParam1[1 /*15*/].f_6) = {12.171f, 550.1313f, 176.4203f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-3.1393f, 0f, 151.833f};
			*(uParam1[1 /*15*/]).f_12 = 31.4978f;
			*(uParam1[1 /*15*/]).f_13 = 10f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-9.2007f, 554.8126f, 180.3407f};
			*(uParam1[2 /*15*/].f_3) = {-8.5854f, -0.0669f, -106.6038f};
			*(uParam1[2 /*15*/].f_6) = {-9.2007f, 554.8126f, 177.3407f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-8.5854f, -0.0669f, -106.6038f};
			*(uParam1[2 /*15*/]).f_12 = 35.9812f;
			*(uParam1[2 /*15*/]).f_13 = 0f;
			*(uParam1[2 /*15*/]).f_14 = 0;
			*(uParam1[3 /*15*/]) = {11.9662f, 545.9982f, 176.342f};
			*(uParam1[3 /*15*/].f_3) = {-4.2197f, 0.0086f, 36.2193f};
			*(uParam1[3 /*15*/].f_6) = {11.9368f, 546.1504f, 176.3316f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-4.2197f, 0.0086f, 35.5229f};
			*(uParam1[3 /*15*/]).f_12 = 50f;
			*(uParam1[3 /*15*/]).f_13 = 4f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {21.2591f, 576.9102f, 183.7657f};
			*(uParam1[5 /*15*/].f_3) = {-6.2299f, 0.0255f, 171.9914f};
			*(uParam1[5 /*15*/].f_6) = {21.2591f, 576.9102f, 183.7657f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-6.2299f, 0.0255f, 171.9914f};
			*(uParam1[5 /*15*/]).f_12 = 39.704f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {21.2591f, 576.9102f, 183.7657f};
			*uParam1.f_91.f_3 = {-6.2299f, 0.0255f, 171.9914f};
			*uParam1.f_97 = 39.704f;
			*uParam1.f_98 = {21.2591f, 576.9102f, 183.7657f};
			*uParam1.f_98.f_3 = {-6.2299f, 0.0255f, 171.9914f};
			*uParam1.f_104 = 39.704f;
			*uParam1.f_105 = {16.4339f, 549.3853f, 175.3116f};
			*uParam1.f_108 = 56.25f;
			*uParam1.f_109 = {10.8375f, 549.054f, 174.9718f};
			*(uParam1.f_112[0 /*3*/]) = {11.4257f, 547.3162f, 174.9038f};
			*(uParam1.f_112[1 /*3*/]) = {10.0769f, 547.0983f, 174.7723f};
			*uParam1.f_119 = {8.1316f, 539.2505f, 174.9739f};
			*uParam1.f_123 = 3.025f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 0;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {8.1316f, 539.2505f, 174.9739f};
			*uParam1.f_132 = {8.1316f, 539.2505f, 174.9739f};
			*uParam1.f_135 = {24.9549f, 566.2881f, 177.4016f};
			*uParam1.f_135.f_3 = 110.16f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {14.6234f, 526.126f, 173.6292f};
			*uParam1.f_150[0] = 115.56f;
			*(uParam1.f_140[1 /*3*/]) = {11.0096f, 521.315f, 169.2275f};
			*uParam1.f_150[1] = 197.1696f;
			*(uParam1.f_140[2 /*3*/]) = {0f, 0f, 0f};
			*uParam1.f_150[2] = 0f;
			return true;
			break;
		
		case 5:
			*(uParam1[0 /*15*/]) = {1988.662f, 3809.245f, 33.889f};
			*(uParam1[0 /*15*/].f_3) = {2.3222f, 0f, 59.8915f};
			*(uParam1[0 /*15*/].f_6) = {1988.41f, 3808.381f, 32.7818f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-3.5227f, 0f, 34.7012f};
			*(uParam1[0 /*15*/]).f_12 = 41.7859f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {1999.131f, 3808.382f, 37.36f};
			*(uParam1[1 /*15*/].f_3) = {-19.3735f, 0f, 77.9903f};
			*(uParam1[1 /*15*/].f_6) = {1999.131f, 3808.382f, 34.36f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-19.3735f, 0f, 77.9903f};
			*(uParam1[1 /*15*/]).f_12 = 50f;
			*(uParam1[1 /*15*/]).f_13 = 0f;
			*(uParam1[1 /*15*/]).f_14 = 0;
			*(uParam1[2 /*15*/]) = {1986.536f, 3808.712f, 32.7272f};
			*(uParam1[2 /*15*/].f_3) = {-4.2982f, 0.0419f, -15.1045f};
			*(uParam1[2 /*15*/].f_6) = {1986.546f, 3808.747f, 32.7245f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-4.2982f, 0.0419f, -17.9532f};
			*(uParam1[2 /*15*/]).f_12 = 27.6284f;
			*(uParam1[2 /*15*/]).f_13 = 4f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {1984.67f, 3817.902f, 32.6427f};
			*(uParam1[3 /*15*/].f_3) = {-1.1635f, 0.0008f, -168.368f};
			*(uParam1[3 /*15*/].f_6) = {1984.887f, 3817.297f, 32.6298f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-1.1635f, 0.0008f, -168.368f};
			*(uParam1[3 /*15*/]).f_12 = 39.0874f;
			*(uParam1[3 /*15*/]).f_13 = 5f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {1985.8f, 3811.2f, 32.6f};
			*(uParam1[5 /*15*/].f_3) = {-3.2f, 0f, -172.8f};
			*(uParam1[5 /*15*/].f_6) = {1985.8f, 3811.2f, 32.6f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-3.2f, 0f, -172.8f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {1985.8f, 3811.2f, 32.6f};
			*uParam1.f_91.f_3 = {-3.2f, 0f, -172.8f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {21.2591f, 576.9102f, 183.7657f};
			*uParam1.f_98.f_3 = {-6.2299f, 0.0255f, 171.9914f};
			*uParam1.f_104 = 39.704f;
			*uParam1.f_105 = {1984.545f, 3797.065f, 31.253f};
			*uParam1.f_108 = 303.75f;
			*uParam1.f_109 = {1986.351f, 3809.745f, 31.1284f};
			*(uParam1.f_112[0 /*3*/]) = {1986.562f, 3811.748f, 31.1313f};
			*(uParam1.f_112[1 /*3*/]) = {1987.799f, 3811.082f, 31.0998f};
			*uParam1.f_119 = {1977.868f, 3815.664f, 32.7359f};
			*uParam1.f_123 = 3.225f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 0;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {8.1316f, 539.2505f, 174.9739f};
			*uParam1.f_132 = {8.1316f, 539.2505f, 174.9739f};
			*uParam1.f_135 = {1996.434f, 3822.849f, 31.1168f};
			*uParam1.f_135.f_3 = 200.88f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {1970.161f, 3832.697f, 31.0051f};
			*uParam1.f_150[0] = 345.24f;
			*(uParam1.f_140[1 /*3*/]) = {1923.846f, 3793.484f, 31.3044f};
			*uParam1.f_150[1] = 24.6026f;
			return true;
			break;
		
		case 6:
			*(uParam1[0 /*15*/]) = {-1189.419f, -1506.489f, 4.811f};
			*(uParam1[0 /*15*/].f_3) = {4.0569f, 0f, -111.2564f};
			*(uParam1[0 /*15*/].f_6) = {-1189.142f, -1505.771f, 4.8109f};
			*(uParam1[0 /*15*/].f_6.f_3) = {4.1072f, 0.0399f, -111.7328f};
			*(uParam1[0 /*15*/]).f_12 = 41.5362f;
			*(uParam1[0 /*15*/]).f_13 = 5.55f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-1160.05f, -1514.512f, 4.7395f};
			*(uParam1[1 /*15*/].f_3) = {-2.2734f, 0.0031f, -127.6174f};
			*(uParam1[1 /*15*/].f_6) = {-1159.904f, -1514.625f, 4.7321f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-0.9723f, 0.0031f, -126.8698f};
			*(uParam1[1 /*15*/]).f_12 = 26.7346f;
			*(uParam1[1 /*15*/]).f_13 = 5.65f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-1159.954f, -1514.022f, 4.7491f};
			*(uParam1[2 /*15*/].f_3) = {-2.2734f, 0.0031f, -143.3719f};
			*(uParam1[2 /*15*/].f_6) = {-1159.839f, -1514.176f, 4.7415f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-2.2734f, 0.0031f, -144.9591f};
			*(uParam1[2 /*15*/]).f_12 = 26.7346f;
			*(uParam1[2 /*15*/]).f_13 = 10f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {-1157.197f, -1524.042f, 4.3609f};
			*(uParam1[3 /*15*/].f_3) = {2.9759f, 0f, 4.513f};
			*(uParam1[3 /*15*/].f_6) = {-1157.153f, -1523.628f, 4.3821f};
			*(uParam1[3 /*15*/].f_6.f_3) = {2.9759f, 0f, 4.513f};
			*(uParam1[3 /*15*/]).f_12 = 26.7346f;
			*(uParam1[3 /*15*/]).f_13 = 4f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-1156.8f, -1515.6f, 4.6f};
			*(uParam1[5 /*15*/].f_3) = {-2.9f, 0f, 94f};
			*(uParam1[5 /*15*/].f_6) = {-1156.8f, -1515.6f, 4.6f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-2.9f, 0f, 94f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-1156.8f, -1515.6f, 4.6f};
			*uParam1.f_91.f_3 = {-2.9f, 0f, 94f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {-1156.8f, -1515.6f, 4.6f};
			*uParam1.f_98.f_3 = {-2.9f, 0f, 94f};
			*uParam1.f_104 = 50f;
			*uParam1.f_105 = {-1168.042f, -1519.458f, 3.2867f};
			*uParam1.f_108 = 306.25f;
			*uParam1.f_109 = {-1158.243f, -1515.221f, 3.2073f};
			*(uParam1.f_112[0 /*3*/]) = {-1157.554f, -1517.099f, 3.3741f};
			*(uParam1.f_112[1 /*3*/]) = {-1158.492f, -1517.444f, 3.357f};
			*uParam1.f_119 = {-1148.843f, -1521.801f, 3.4073f};
			*uParam1.f_123 = 2.95f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-1148.843f, -1521.801f, 3.4073f};
			*uParam1.f_132 = {-1148.843f, -1521.801f, 3.4073f};
			*uParam1.f_135 = {-1176.761f, -1521.671f, 3.4037f};
			*uParam1.f_135.f_3 = 301.68f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {-1148.9f, -1523.479f, 9.6331f};
			*uParam1.f_150[0] = 34.92f;
			*(uParam1.f_140[1 /*3*/]) = {-1134.435f, -1532.005f, 3.315f};
			*uParam1.f_150[1] = 309.24f;
			*(uParam1.f_140[2 /*3*/]) = {0f, 0f, 0f};
			*uParam1.f_150[2] = 0f;
			return true;
			break;
		
		case 7:
			*(uParam1[0 /*15*/]) = {129.8136f, -1313.469f, 29.9182f};
			*(uParam1[0 /*15*/].f_3) = {21.2995f, -0.0209f, -12.3644f};
			*(uParam1[0 /*15*/].f_6) = {129.8168f, -1313.456f, 29.3543f};
			*(uParam1[0 /*15*/].f_6.f_3) = {3.8903f, -0.0209f, -14.9554f};
			*(uParam1[0 /*15*/]).f_12 = 36.2014f;
			*(uParam1[0 /*15*/]).f_13 = 5.325f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {132.7778f, -1307.627f, 29.7443f};
			*(uParam1[1 /*15*/].f_3) = {-2.534f, 0.0048f, -0.6283f};
			*(uParam1[1 /*15*/].f_6) = {132.7788f, -1307.527f, 29.7398f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-2.534f, 0.0048f, -0.6283f};
			*(uParam1[1 /*15*/]).f_12 = 27.0556f;
			*(uParam1[1 /*15*/]).f_13 = 5.1f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {132.4454f, -1307.645f, 29.748f};
			*(uParam1[2 /*15*/].f_3) = {-3.058f, 0.0048f, -11.2444f};
			*(uParam1[2 /*15*/].f_6) = {132.4589f, -1307.577f, 29.7443f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-2.534f, 0.0048f, -11.3535f};
			*(uParam1[2 /*15*/]).f_12 = 27.0556f;
			*(uParam1[2 /*15*/]).f_13 = 10.05f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {129.1269f, -1301.723f, 29.4008f};
			*(uParam1[3 /*15*/].f_3) = {0.316f, -0.0209f, -128.7821f};
			*(uParam1[3 /*15*/].f_6) = {128.7942f, -1301.455f, 29.3985f};
			*(uParam1[3 /*15*/].f_6.f_3) = {0.316f, -0.0209f, -128.7821f};
			*(uParam1[3 /*15*/]).f_12 = 40.468f;
			*(uParam1[3 /*15*/]).f_13 = 10.725f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {132.8f, -1305.1f, 29.7f};
			*(uParam1[5 /*15*/].f_3) = {-6.6f, 0f, 177.3f};
			*(uParam1[5 /*15*/].f_6) = {132.8f, -1305.1f, 29.7f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-6.6f, 0f, 177.3f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {132.8f, -1305.1f, 29.7f};
			*uParam1.f_91.f_3 = {-6.6f, 0f, 177.3f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {132.8f, -1305.1f, 29.7f};
			*uParam1.f_98.f_3 = {-6.6f, 0f, 177.3f};
			*uParam1.f_104 = 50f;
			*uParam1.f_105 = {133.1947f, -1312.149f, 28.1072f};
			*uParam1.f_108 = 126.05f;
			*uParam1.f_109 = {133.0748f, -1306.509f, 28.133f};
			*(uParam1.f_112[0 /*3*/]) = {132.4439f, -1304.66f, 28.2045f};
			*(uParam1.f_112[1 /*3*/]) = {133.2145f, -1304.75f, 28.1905f};
			*uParam1.f_119 = {128.5787f, -1298.368f, 28.3026f};
			*uParam1.f_123 = 2.925f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {128.5787f, -1298.368f, 28.3026f};
			*uParam1.f_132 = {128.5787f, -1298.368f, 28.3026f};
			*uParam1.f_135 = {154.0517f, -1307.696f, 28.2026f};
			*uParam1.f_135.f_3 = 149.04f;
			*uParam1.f_135.f_4 = 10;
			*(uParam1.f_140[0 /*3*/]) = {95.7223f, -1313.171f, 28.294f};
			*uParam1.f_150[0] = 83.16f;
			*(uParam1.f_140[1 /*3*/]) = {112.8357f, -1276.493f, 28.0221f};
			*uParam1.f_150[1] = 99.36f;
			*(uParam1.f_140[2 /*3*/]) = {0f, 0f, 0f};
			*uParam1.f_150[2] = 0f;
			return true;
			break;
		
		case 8:
			*(uParam1[0 /*15*/]) = {166.9471f, -1340.813f, 31.2908f};
			*(uParam1[0 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[0 /*15*/].f_6) = {166.9471f, -1340.813f, 29.2908f};
			*(uParam1[0 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[0 /*15*/]).f_12 = 50f;
			*(uParam1[0 /*15*/]).f_13 = 5.325f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {132.7778f, -1307.627f, 29.7443f};
			*(uParam1[1 /*15*/].f_3) = {-2.534f, 0.0048f, -0.6283f};
			*(uParam1[1 /*15*/].f_6) = {132.7788f, -1307.527f, 29.7398f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-2.534f, 0.0048f, -0.6283f};
			*(uParam1[1 /*15*/]).f_12 = 27.0556f;
			*(uParam1[1 /*15*/]).f_13 = 5.1f;
			*(uParam1[1 /*15*/]).f_14 = 0;
			*(uParam1[2 /*15*/]) = {132.4454f, -1307.645f, 29.748f};
			*(uParam1[2 /*15*/].f_3) = {-3.058f, 0.0048f, -11.2444f};
			*(uParam1[2 /*15*/].f_6) = {132.4589f, -1307.577f, 29.7443f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-2.534f, 0.0048f, -11.3535f};
			*(uParam1[2 /*15*/]).f_12 = 27.0556f;
			*(uParam1[2 /*15*/]).f_13 = 10.05f;
			*(uParam1[2 /*15*/]).f_14 = 0;
			*(uParam1[3 /*15*/]) = {129.1269f, -1301.723f, 29.4008f};
			*(uParam1[3 /*15*/].f_3) = {0.316f, -0.0209f, -128.7821f};
			*(uParam1[3 /*15*/].f_6) = {128.7942f, -1301.455f, 29.3985f};
			*(uParam1[3 /*15*/].f_6.f_3) = {0.316f, -0.0209f, -128.7821f};
			*(uParam1[3 /*15*/]).f_12 = 40.468f;
			*(uParam1[3 /*15*/]).f_13 = 10.725f;
			*(uParam1[3 /*15*/]).f_14 = 0;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {166.9471f, -1340.813f, 31.2908f};
			*(uParam1[5 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[5 /*15*/].f_6) = {166.9471f, -1340.813f, 31.2908f};
			*(uParam1[5 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {166.9471f, -1340.813f, 31.2908f};
			*uParam1.f_91.f_3 = {0f, 0f, 0f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {132.8f, -1305.1f, 29.7f};
			*uParam1.f_98.f_3 = {-6.6f, 0f, 177.3f};
			*uParam1.f_104 = 50f;
			*uParam1.f_105 = {176.9471f, -1340.813f, 28.2908f};
			*uParam1.f_108 = 0f;
			*uParam1.f_109 = {176.9471f, -1340.813f, 28.2908f};
			*(uParam1.f_112[0 /*3*/]) = {177.5471f, -1340.513f, 28.2908f};
			*(uParam1.f_112[1 /*3*/]) = {177.5471f, -1341.113f, 28.2908f};
			*uParam1.f_119 = {181.9471f, -1340.813f, 28.2908f};
			*uParam1.f_123 = 2.925f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {128.5787f, -1298.368f, 28.3026f};
			*uParam1.f_132 = {128.5787f, -1298.368f, 28.3026f};
			*uParam1.f_135 = {154.0517f, -1307.696f, 28.2026f};
			*uParam1.f_135.f_3 = 149.04f;
			*uParam1.f_135.f_4 = 10;
			*(uParam1.f_140[0 /*3*/]) = {176.9471f, -1340.813f, 28.2908f};
			*uParam1.f_150[0] = 0f;
			*(uParam1.f_140[1 /*3*/]) = {176.9471f, -1340.813f, 28.2908f};
			*uParam1.f_150[1] = 0f;
			return true;
			break;
		
		case 9:
			*(uParam1[0 /*15*/]) = {-56.3573f, -1460.427f, 34.1991f};
			*(uParam1[0 /*15*/].f_3) = {8.1986f, 0f, 33.5765f};
			*(uParam1[0 /*15*/].f_6) = {-56.5558f, -1460.149f, 32.6568f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-4.0126f, 0f, 51.7138f};
			*(uParam1[0 /*15*/]).f_12 = 50f;
			*(uParam1[0 /*15*/]).f_13 = 6.3f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-57.7509f, -1459.455f, 32.518f};
			*(uParam1[1 /*15*/].f_3) = {-2.6848f, 0f, 75.5677f};
			*(uParam1[1 /*15*/].f_6) = {-57.7917f, -1459.445f, 32.516f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-2.4783f, 0f, 75.5677f};
			*(uParam1[1 /*15*/]).f_12 = 26.9657f;
			*(uParam1[1 /*15*/]).f_13 = 5.375f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-57.7837f, -1459.794f, 32.5223f};
			*(uParam1[2 /*15*/].f_3) = {-2.6848f, 0f, 58.9447f};
			*(uParam1[2 /*15*/].f_6) = {-57.8125f, -1459.687f, 32.5185f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-2.6848f, 0f, 58.169f};
			*(uParam1[2 /*15*/]).f_12 = 26.9657f;
			*(uParam1[2 /*15*/]).f_13 = 10.975f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {-61.4802f, -1449.468f, 32.2744f};
			*(uParam1[3 /*15*/].f_3) = {0.1485f, 0f, -174.2878f};
			*(uParam1[3 /*15*/].f_6) = {-61.4802f, -1449.468f, 32.2744f};
			*(uParam1[3 /*15*/].f_6.f_3) = {0.1485f, 0f, -177.7354f};
			*(uParam1[3 /*15*/]).f_12 = 35.5635f;
			*(uParam1[3 /*15*/]).f_13 = 4.175f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-58.6f, -1458.2f, 32.7f};
			*(uParam1[5 /*15*/].f_3) = {-9.2f, 0f, 149f};
			*(uParam1[5 /*15*/].f_6) = {-58.6f, -1458.2f, 32.7f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-9.2f, 0f, 149f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-58.6f, -1458.2f, 32.7f};
			*uParam1.f_91.f_3 = {-9.2f, 0f, 149f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {-58.6f, -1458.2f, 32.7f};
			*uParam1.f_98.f_3 = {-9.2f, 0f, 149f};
			*uParam1.f_104 = 50f;
			*uParam1.f_105 = {-62.9473f, -1462.459f, 30.9713f};
			*uParam1.f_108 = 116.37f;
			*uParam1.f_109 = {-59.0633f, -1459.54f, 30.9904f};
			*(uParam1.f_112[0 /*3*/]) = {-60.5552f, -1458.208f, 31.0545f};
			*(uParam1.f_112[1 /*3*/]) = {-59.8892f, -1457.462f, 31.0777f};
			*uParam1.f_119 = {-67.2833f, -1451.74f, 30.994f};
			*uParam1.f_123 = 3.55f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-67.2833f, -1451.74f, 30.994f};
			*uParam1.f_132 = {-67.2833f, -1451.74f, 30.994f};
			*uParam1.f_135 = {-46.4771f, -1460.511f, 30.8037f};
			*uParam1.f_135.f_3 = 95.76f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {-68.4237f, -1436.754f, 31.1236f};
			*uParam1.f_150[0] = 116.64f;
			*(uParam1.f_140[1 /*3*/]) = {-74.2421f, -1420.867f, 28.3225f};
			*uParam1.f_150[1] = 271.8f;
			*(uParam1.f_140[2 /*3*/]) = {0f, 0f, 0f};
			*uParam1.f_150[2] = 0f;
			return true;
			break;
		
		case 10:
			*(uParam1[0 /*15*/]) = {-10.932f, -117.3033f, 57.4867f};
			*(uParam1[0 /*15*/].f_3) = {28.1405f, -0.0662f, 15.2927f};
			*(uParam1[0 /*15*/].f_6) = {-11.2653f, -117.2236f, 57.1882f};
			*(uParam1[0 /*15*/].f_6.f_3) = {0.5113f, -0.0662f, 30.565f};
			*(uParam1[0 /*15*/]).f_12 = 49.9706f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-7.0757f, -120.2365f, 61.4475f};
			*(uParam1[1 /*15*/].f_3) = {-4.7436f, 0.1427f, 49.9124f};
			*(uParam1[1 /*15*/].f_6) = {-6.8992f, -120.3944f, 58.5944f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-4.7436f, 0.1427f, 49.9124f};
			*(uParam1[1 /*15*/]).f_12 = 44.4311f;
			*(uParam1[1 /*15*/]).f_13 = 0f;
			*(uParam1[1 /*15*/]).f_14 = 0;
			*(uParam1[2 /*15*/]) = {-11.5998f, -116.8049f, 57.3232f};
			*(uParam1[2 /*15*/].f_3) = {-1.4412f, 0f, 19.334f};
			*(uParam1[2 /*15*/].f_6) = {-6.8992f, -120.3944f, 58.5944f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-4.7436f, 0.1427f, 49.9124f};
			*(uParam1[2 /*15*/]).f_12 = 28.2808f;
			*(uParam1[2 /*15*/]).f_13 = 0f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {-20.2221f, -111.6242f, 57.1864f};
			*(uParam1[3 /*15*/].f_3) = {-1.4928f, 0f, -95.3855f};
			*(uParam1[3 /*15*/].f_6) = {-20.2221f, -111.6242f, 57.1864f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-1.4928f, 0f, -89.5594f};
			*(uParam1[3 /*15*/]).f_12 = 42.4439f;
			*(uParam1[3 /*15*/]).f_13 = 0f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {-12.2428f, -118.5385f, 57.0926f};
			*(uParam1[4 /*15*/].f_3) = {-2.338f, -0.0148f, -1.9302f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 49.9706f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-10.7f, -114.5f, 57.2f};
			*(uParam1[5 /*15*/].f_3) = {-0.7f, 0f, 115.2f};
			*(uParam1[5 /*15*/].f_6) = {-10.7f, -114.5f, 57.2f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-0.7f, 0f, 109.1433f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 4.575f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-10.7f, -114.5f, 57.2f};
			*uParam1.f_91.f_3 = {-0.7f, 0f, 115.2f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {-13.0725f, -115.19f, 57.2984f};
			*uParam1.f_98.f_3 = {-4.2214f, -0.8691f, -107.3625f};
			*uParam1.f_104 = 49.9706f;
			*uParam1.f_105 = {-18.5821f, -115.3713f, 55.7963f};
			*uParam1.f_108 = 73.08f;
			*uParam1.f_109 = {-11.6174f, -115.3955f, 55.781f};
			*(uParam1.f_112[0 /*3*/]) = {-13.4109f, -114.6339f, 55.8221f};
			*(uParam1.f_112[1 /*3*/]) = {-12.6469f, -114.0475f, 55.8117f};
			*uParam1.f_119 = {-13.4678f, -109.2617f, 56.1351f};
			*uParam1.f_123 = 2.675f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 6f;
			*uParam1.f_127 = 0;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-16.8713f, -118.8766f, 55.8675f};
			*uParam1.f_132 = {-97.4889f, -89.0346f, 56.5371f};
			*uParam1.f_135 = {-1.682f, -108.0647f, 55.8574f};
			*uParam1.f_135.f_3 = 160.56f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {-60.4338f, -88.276f, 56.7463f};
			*uParam1.f_150[0] = 346.32f;
			*(uParam1.f_140[1 /*3*/]) = {-29.7926f, -85.2089f, 56.2538f};
			*uParam1.f_150[1] = 42.12f;
			*(uParam1.f_140[2 /*3*/]) = {-64.4417f, -76.578f, 57.13f};
			*uParam1.f_150[2] = 350.7988f;
			return true;
			break;
		
		case 11:
			*(uParam1[0 /*15*/]) = {-599.6635f, -307.1347f, 35.5723f};
			*(uParam1[0 /*15*/].f_3) = {6.6136f, 0.0661f, 14.4573f};
			*(uParam1[0 /*15*/].f_6) = {-599.6488f, -307.1032f, 35.4806f};
			*(uParam1[0 /*15*/].f_6.f_3) = {0.6974f, 0.0661f, -24.9427f};
			*(uParam1[0 /*15*/]).f_12 = 45.1942f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-598.3406f, -305.7075f, 35.495f};
			*(uParam1[1 /*15*/].f_3) = {-1.8206f, 0f, -24.4412f};
			*(uParam1[1 /*15*/].f_6) = {-598.2725f, -305.5562f, 35.4897f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-1.2461f, 0f, -23.8667f};
			*(uParam1[1 /*15*/]).f_12 = 27.1855f;
			*(uParam1[1 /*15*/]).f_13 = 10.225f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-595.8862f, -335.8199f, 39.8311f};
			*(uParam1[2 /*15*/].f_3) = {-2.4437f, 0.0925f, 2.7068f};
			*(uParam1[2 /*15*/].f_6) = {-595.8862f, -335.8199f, 36.8311f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-2.4437f, 0.0925f, 2.7068f};
			*(uParam1[2 /*15*/]).f_12 = 30.8234f;
			*(uParam1[2 /*15*/]).f_13 = 0f;
			*(uParam1[2 /*15*/]).f_14 = 0;
			*(uParam1[3 /*15*/]) = {-603.5041f, -298.5019f, 35.5324f};
			*(uParam1[3 /*15*/].f_3) = {-0.4957f, 0f, -127.7728f};
			*(uParam1[3 /*15*/].f_6) = {-603.7752f, -298.292f, 35.8069f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-0.4957f, 0f, -127.7728f};
			*(uParam1[3 /*15*/]).f_12 = 37.7459f;
			*(uParam1[3 /*15*/]).f_13 = 4.875f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {-589.7507f, -307.463f, 35.5272f};
			*(uParam1[4 /*15*/].f_3) = {-4.1072f, 0.0055f, 69.2885f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 24.1002f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-598.8f, -304.1f, 35.4f};
			*(uParam1[5 /*15*/].f_3) = {0.3f, 0f, -105.1f};
			*(uParam1[5 /*15*/].f_6) = {-598.8f, -304.1f, 35.4f};
			*(uParam1[5 /*15*/].f_6.f_3) = {0.3f, 0f, -118.5139f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 6.525f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-598.8f, -304.1f, 35.4f};
			*uParam1.f_91.f_3 = {0.3f, 0f, -105.1f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {-598.8f, -304.1f, 35.4f};
			*uParam1.f_98.f_3 = {0.3f, 0f, -118.5139f};
			*uParam1.f_104 = 50f;
			*uParam1.f_105 = {-591.6484f, -304.453f, 33.8604f};
			*uParam1.f_108 = 122.04f;
			*uParam1.f_109 = {-597.5052f, -304.8516f, 33.9584f};
			*(uParam1.f_112[0 /*3*/]) = {-597.8029f, -303.0807f, 33.9633f};
			*(uParam1.f_112[1 /*3*/]) = {-596.705f, -302.7705f, 33.9718f};
			*uParam1.f_119 = {-604.737f, -293.2985f, 33.9548f};
			*uParam1.f_123 = 2.925f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 8.37f;
			*uParam1.f_127 = 0;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-591.2324f, -302.5901f, 33.9939f};
			*uParam1.f_132 = {-612.3061f, -316.7069f, 33.7226f};
			*uParam1.f_135 = {-585.7039f, -300.9887f, 33.9348f};
			*uParam1.f_135.f_3 = 116.64f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {-623.0575f, -252.5577f, 37.6049f};
			*uParam1.f_150[0] = 346.32f;
			*(uParam1.f_140[1 /*3*/]) = {-585.6531f, -270.6682f, 34.6228f};
			*uParam1.f_150[1] = 33.48f;
			*(uParam1.f_140[2 /*3*/]) = {-649.7907f, -296.3604f, 34.3442f};
			*uParam1.f_150[2] = 32.4f;
			return true;
			break;
		
		case 12:
			*(uParam1[0 /*15*/]) = {-158.1838f, -175.1498f, 44.1235f};
			*(uParam1[0 /*15*/].f_3) = {-1.234f, 0f, -24.3748f};
			*(uParam1[0 /*15*/].f_6) = {-157.466f, -176.0162f, 44.1356f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-1.234f, 0f, -54.2213f};
			*(uParam1[0 /*15*/]).f_12 = 38.9525f;
			*(uParam1[0 /*15*/]).f_13 = 7.5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-162.7006f, -153.3978f, 45.8229f};
			*(uParam1[1 /*15*/].f_3) = {-4.6874f, 0.0837f, -166.4122f};
			*(uParam1[1 /*15*/].f_6) = {-162.7006f, -153.3978f, 42.8229f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-4.6874f, 0.0837f, -166.4122f};
			*(uParam1[1 /*15*/]).f_12 = 30.9732f;
			*(uParam1[1 /*15*/]).f_13 = 0f;
			*(uParam1[1 /*15*/]).f_14 = 0;
			*(uParam1[2 /*15*/]) = {-162.7006f, -153.3978f, 45.8229f};
			*(uParam1[2 /*15*/].f_3) = {-4.6874f, 0.0837f, -166.4122f};
			*(uParam1[2 /*15*/].f_6) = {-162.7006f, -153.3978f, 42.8229f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-4.6874f, 0.0837f, -166.4122f};
			*(uParam1[2 /*15*/]).f_12 = 30.9732f;
			*(uParam1[2 /*15*/]).f_13 = 0f;
			*(uParam1[2 /*15*/]).f_14 = 0;
			*(uParam1[3 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[3 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[3 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[3 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[3 /*15*/]).f_12 = 0f;
			*(uParam1[3 /*15*/]).f_13 = 0f;
			*(uParam1[3 /*15*/]).f_14 = 0;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-155.5f, -173.6f, 44.3f};
			*(uParam1[5 /*15*/].f_3) = {-5.3f, 0f, 176.7f};
			*(uParam1[5 /*15*/].f_6) = {-155.5f, -173.6f, 44.3f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-5.3f, 0f, 176.7f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-155.5f, -173.6f, 44.3f};
			*uParam1.f_91.f_3 = {-5.3f, 0f, 176.7f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {-155.5f, -173.6f, 44.3f};
			*uParam1.f_98.f_3 = {-5.3f, 0f, 176.7f};
			*uParam1.f_104 = 50f;
			*uParam1.f_105 = {-159.0514f, -179.6376f, 42.6038f};
			*uParam1.f_108 = 340.79f;
			*uParam1.f_109 = {-155.6107f, -175.4378f, 42.7616f};
			*(uParam1.f_112[0 /*3*/]) = {-155.2113f, -173.4781f, 42.7592f};
			*(uParam1.f_112[1 /*3*/]) = {-154.2314f, -173.6778f, 42.7592f};
			*uParam1.f_119 = {-151.4107f, -167.0978f, 42.7614f};
			*uParam1.f_123 = 2.675f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 5.985f;
			*uParam1.f_127 = 0;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-157.8152f, -173.411f, 42.6205f};
			*uParam1.f_132 = {-180.3291f, -85.6264f, 51.5502f};
			*uParam1.f_135 = {-178.2606f, -176.797f, 42.6219f};
			*uParam1.f_135.f_3 = 247.32f;
			*uParam1.f_135.f_4 = 8;
			*(uParam1.f_140[0 /*3*/]) = {-111.5168f, -176.4249f, 49.3869f};
			*uParam1.f_150[0] = 337.9647f;
			*(uParam1.f_140[1 /*3*/]) = {-146.1066f, -289.7199f, 40.319f};
			*uParam1.f_150[1] = 162.6801f;
			*(uParam1.f_140[2 /*3*/]) = {-184.0584f, -92.239f, 51.4793f};
			*uParam1.f_150[2] = 339.5543f;
			return true;
			break;
		
		case 13:
			*(uParam1[0 /*15*/]) = {216.6692f, -50.2341f, 71.0802f};
			*(uParam1[0 /*15*/].f_3) = {9.2136f, 0.0713f, 39.639f};
			*(uParam1[0 /*15*/].f_6) = {215.4209f, -49.6516f, 69.8986f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-2.9289f, 0.0803f, 45.7664f};
			*(uParam1[0 /*15*/]).f_12 = 24.7144f;
			*(uParam1[0 /*15*/]).f_13 = 6.025f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {210.3946f, -45.6195f, 69.3571f};
			*(uParam1[1 /*15*/].f_3) = {0.0814f, 0.0714f, 46.1003f};
			*(uParam1[1 /*15*/].f_6) = {210.3504f, -45.577f, 69.3572f};
			*(uParam1[1 /*15*/].f_6.f_3) = {0.0814f, 0.0714f, 46.1003f};
			*(uParam1[1 /*15*/]).f_12 = 24.7144f;
			*(uParam1[1 /*15*/]).f_13 = 5.9f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {210.6824f, -46.2715f, 69.2401f};
			*(uParam1[2 /*15*/].f_3) = {-0.8841f, 0.0714f, 32.8208f};
			*(uParam1[2 /*15*/].f_6) = {210.5762f, -46.1068f, 69.2371f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-0.8841f, 0.0714f, 31.8309f};
			*(uParam1[2 /*15*/]).f_12 = 24.7144f;
			*(uParam1[2 /*15*/]).f_13 = 11.2f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {215.5824f, -47.3697f, 69.1787f};
			*(uParam1[3 /*15*/].f_3) = {2.7258f, 0.0713f, 56.249f};
			*(uParam1[3 /*15*/].f_6) = {215.5824f, -47.3697f, 69.1787f};
			*(uParam1[3 /*15*/].f_6.f_3) = {2.5404f, 0.0713f, 52.4503f};
			*(uParam1[3 /*15*/]).f_12 = 33.9919f;
			*(uParam1[3 /*15*/]).f_13 = 4.75f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {202.2701f, -56.2778f, 69.5264f};
			*(uParam1[4 /*15*/].f_3) = {-4.8356f, 0.0133f, -30.2715f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 24.7144f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {209.4f, -43.8f, 69.5f};
			*(uParam1[5 /*15*/].f_3) = {-6.8f, 0f, 164.6f};
			*(uParam1[5 /*15*/].f_6) = {209.4f, -43.8f, 69.5f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-6.8f, 0f, 158.8225f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 5.625f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {209.4f, -43.8f, 69.5f};
			*uParam1.f_91.f_3 = {-6.8f, 0f, 164.6f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {209.4f, -43.8f, 69.5f};
			*uParam1.f_98.f_3 = {-6.8f, 0f, 158.8225f};
			*uParam1.f_104 = 50f;
			*uParam1.f_105 = {210.5713f, -51.1838f, 67.8538f};
			*uParam1.f_108 = 70.71f;
			*uParam1.f_109 = {209.114f, -45.0546f, 67.9221f};
			*(uParam1.f_112[0 /*3*/]) = {208.0977f, -42.7594f, 67.8671f};
			*(uParam1.f_112[1 /*3*/]) = {209.2602f, -42.3165f, 67.9124f};
			*uParam1.f_119 = {201.3204f, -27.2177f, 68.9116f};
			*uParam1.f_123 = 3.425f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 8.1f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {201.3804f, -45.9723f, 67.6405f};
			*uParam1.f_132 = {169.5868f, -39.8977f, 67.1079f};
			*uParam1.f_135 = {220.3531f, -54.6546f, 68.0668f};
			*uParam1.f_135.f_3 = 72.36f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {142.2029f, -8.6707f, 66.601f};
			*uParam1.f_150[0] = 341.28f;
			*(uParam1.f_140[1 /*3*/]) = {193.9097f, -0.0854f, 72.4415f};
			*uParam1.f_150[1] = 63.36f;
			*(uParam1.f_140[2 /*3*/]) = {141.1481f, 4.3401f, 67.0326f};
			*uParam1.f_150[2] = 340.2f;
			return true;
			break;
		
		case 14:
			*(uParam1[0 /*15*/]) = {-190.1953f, -796.7072f, 31.3248f};
			*(uParam1[0 /*15*/].f_3) = {5.1543f, -0.1219f, 2.2711f};
			*(uParam1[0 /*15*/].f_6) = {-190.1855f, -796.9056f, 31.3069f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-1.8464f, -0.1219f, 21.1543f};
			*(uParam1[0 /*15*/]).f_12 = 37.4511f;
			*(uParam1[0 /*15*/]).f_13 = 5.7f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-195.8433f, -782.9503f, 30.9256f};
			*(uParam1[1 /*15*/].f_3) = {-1.2833f, 0.0184f, 56.2469f};
			*(uParam1[1 /*15*/].f_6) = {-196.0999f, -782.7787f, 30.9187f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-1.2833f, 0.0184f, 56.2469f};
			*(uParam1[1 /*15*/]).f_12 = 27.5662f;
			*(uParam1[1 /*15*/]).f_13 = 11.4f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-174.1382f, -798.4118f, 34.3625f};
			*(uParam1[2 /*15*/].f_3) = {-4.1411f, 0.0443f, -50.839f};
			*(uParam1[2 /*15*/].f_6) = {-174.1382f, -798.4118f, 31.3625f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-4.1411f, 0.0443f, -50.839f};
			*(uParam1[2 /*15*/]).f_12 = 45f;
			*(uParam1[2 /*15*/]).f_13 = 0f;
			*(uParam1[2 /*15*/]).f_14 = 0;
			*(uParam1[3 /*15*/]) = {-207.453f, -783.0007f, 30.6883f};
			*(uParam1[3 /*15*/].f_3) = {0.9957f, -0.0267f, -64.616f};
			*(uParam1[3 /*15*/].f_6) = {-207.483f, -782.9033f, 30.6885f};
			*(uParam1[3 /*15*/].f_6.f_3) = {0.9957f, -0.0267f, -64.1235f};
			*(uParam1[3 /*15*/]).f_12 = 39.0431f;
			*(uParam1[3 /*15*/]).f_13 = 3.925f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {-199.962f, -783.7169f, 30.9963f};
			*(uParam1[4 /*15*/].f_3) = {-3.9471f, 0.0848f, -37.9213f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 27.5662f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-198.6f, -781.3f, 31f};
			*(uParam1[5 /*15*/].f_3) = {-3.1f, 0f, -86.6f};
			*(uParam1[5 /*15*/].f_6) = {-198.6f, -781.3f, 31f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-3.1f, 0f, -86.6f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-198.6f, -781.3f, 31f};
			*uParam1.f_91.f_3 = {-3.1f, 0f, -86.6f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {-194.9262f, -780.7396f, 30.7532f};
			*uParam1.f_98.f_3 = {-1.3809f, 0f, 100.1161f};
			*uParam1.f_104 = 50f;
			*uParam1.f_105 = {-162.74f, -789.3305f, 30.9774f};
			*uParam1.f_108 = 154.8f;
			*uParam1.f_109 = {-197.2339f, -781.257f, 29.454f};
			*(uParam1.f_112[0 /*3*/]) = {-200.024f, -781.1829f, 29.454f};
			*(uParam1.f_112[1 /*3*/]) = {-199.6951f, -780.3373f, 29.454f};
			*uParam1.f_119 = {-208.5797f, -778.6299f, 29.3554f};
			*uParam1.f_123 = 3.05f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0.2f;
			*uParam1.f_126 = 5.175f;
			*uParam1.f_127 = 0;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-193.8266f, -787.1005f, 29.454f};
			*uParam1.f_132 = {-176.0065f, -830.4868f, 29.6752f};
			*uParam1.f_135 = {-160.5266f, -783.0484f, 31.0433f};
			*uParam1.f_135.f_3 = 164.52f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {-245.7672f, -772.6562f, 31.4945f};
			*uParam1.f_150[0] = 340.2f;
			*(uParam1.f_140[1 /*3*/]) = {-240.8987f, -803.7341f, 29.8505f};
			*uParam1.f_150[1] = 78.12f;
			*(uParam1.f_140[2 /*3*/]) = {-219.2494f, -869.4808f, 28.864f};
			*uParam1.f_150[2] = 73.08f;
			return true;
			break;
		
		case 15:
			*(uParam1[0 /*15*/]) = {-830.9531f, -1088.276f, 13.0086f};
			*(uParam1[0 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[0 /*15*/].f_6) = {-830.9531f, -1088.276f, 11.0086f};
			*(uParam1[0 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[0 /*15*/]).f_12 = 50f;
			*(uParam1[0 /*15*/]).f_13 = 0f;
			*(uParam1[0 /*15*/]).f_14 = 0;
			*(uParam1[1 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[1 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[1 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[1 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[1 /*15*/]).f_12 = 0f;
			*(uParam1[1 /*15*/]).f_13 = 0f;
			*(uParam1[1 /*15*/]).f_14 = 0;
			*(uParam1[2 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[2 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[2 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[2 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[2 /*15*/]).f_12 = 0f;
			*(uParam1[2 /*15*/]).f_13 = 0f;
			*(uParam1[2 /*15*/]).f_14 = 0;
			*(uParam1[3 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[3 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[3 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[3 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[3 /*15*/]).f_12 = 0f;
			*(uParam1[3 /*15*/]).f_13 = 0f;
			*(uParam1[3 /*15*/]).f_14 = 0;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-830.9531f, -1088.276f, 13.0086f};
			*(uParam1[5 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[5 /*15*/].f_6) = {-830.9531f, -1088.276f, 13.0086f};
			*(uParam1[5 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[5 /*15*/]).f_12 = 50f;
			*(uParam1[5 /*15*/]).f_13 = 0f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-830.9531f, -1088.276f, 13.0086f};
			*uParam1.f_91.f_3 = {0f, 0f, 0f};
			*uParam1.f_97 = 50f;
			*uParam1.f_98 = {0f, 0f, 0f};
			*uParam1.f_98.f_3 = {0f, 0f, 0f};
			*uParam1.f_104 = 0f;
			*uParam1.f_105 = {-820.9531f, -1088.276f, 10.0086f};
			*uParam1.f_108 = 0f;
			*uParam1.f_109 = {-820.9531f, -1088.276f, 10.0086f};
			*(uParam1.f_112[0 /*3*/]) = {-820.3531f, -1087.976f, 10.0086f};
			*(uParam1.f_112[1 /*3*/]) = {-820.3531f, -1088.576f, 10.0086f};
			*uParam1.f_119 = {-815.9531f, -1088.276f, 10.0086f};
			*uParam1.f_123 = 0f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 0f;
			*uParam1.f_127 = 0;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {0f, 0f, 0f};
			*uParam1.f_132 = {0f, 0f, 0f};
			*uParam1.f_135 = {0f, 0f, 0f};
			*uParam1.f_135.f_3 = 0f;
			*uParam1.f_135.f_4 = 0;
			*(uParam1.f_140[0 /*3*/]) = {-820.9531f, -1088.276f, 10.0086f};
			*uParam1.f_150[0] = 0f;
			*(uParam1.f_140[1 /*3*/]) = {-820.9531f, -1088.276f, 10.0086f};
			*uParam1.f_150[1] = 0f;
			*(uParam1.f_140[2 /*3*/]) = {-64.4417f, -76.578f, 57.13f};
			*uParam1.f_150[2] = 350.7988f;
			return true;
			break;
		
		case 16:
			*(uParam1[0 /*15*/]) = {231.1337f, -972.4833f, 30.5744f};
			*(uParam1[0 /*15*/].f_3) = {16.554f, 0f, 19.9826f};
			*(uParam1[0 /*15*/].f_6) = {231.1004f, -972.3924f, 30.3643f};
			*(uParam1[0 /*15*/].f_6.f_3) = {5.1901f, 0f, 18.1092f};
			*(uParam1[0 /*15*/]).f_12 = 39.727f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {231.1243f, -960.4684f, 29.9486f};
			*(uParam1[1 /*15*/].f_3) = {-3.325f, 0.0034f, 44.3253f};
			*(uParam1[1 /*15*/].f_6) = {231.0919f, -960.4258f, 29.9455f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-3.325f, 0.0034f, 44.3253f};
			*(uParam1[1 /*15*/]).f_12 = 18.438f;
			*(uParam1[1 /*15*/]).f_13 = 4.925f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {231.1691f, -961.2233f, 29.9703f};
			*(uParam1[2 /*15*/].f_3) = {-1.486f, 0f, 33.1161f};
			*(uParam1[2 /*15*/].f_6) = {231.019f, -960.993f, 29.9631f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-1.486f, 0f, 33.6074f};
			*(uParam1[2 /*15*/]).f_12 = 18.8257f;
			*(uParam1[2 /*15*/]).f_13 = 9.525f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {201.2578f, -968.2456f, 31.4906f};
			*(uParam1[3 /*15*/].f_3) = {-3.687f, 0f, -68.9103f};
			*(uParam1[3 /*15*/].f_6) = {201.1927f, -968.077f, 31.4906f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-3.687f, 0f, -68.9103f};
			*(uParam1[3 /*15*/]).f_12 = 30.4755f;
			*(uParam1[3 /*15*/]).f_13 = 4.95f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {242.8073f, -959.5851f, 29.7023f};
			*(uParam1[4 /*15*/].f_3) = {0.2064f, 0.0551f, 93.2706f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 35.954f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {229.2498f, -959.5234f, 29.8773f};
			*(uParam1[5 /*15*/].f_3) = {-3.2186f, 0f, -71.4419f};
			*(uParam1[5 /*15*/].f_6) = {229.2498f, -959.5234f, 29.8773f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-3.2186f, 0f, -75.0536f};
			*(uParam1[5 /*15*/]).f_12 = 50.036f;
			*(uParam1[5 /*15*/]).f_13 = 5.31f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {229.2498f, -959.5234f, 29.8773f};
			*uParam1.f_91.f_3 = {-3.2186f, 0f, -71.4419f};
			*uParam1.f_97 = 50.036f;
			*uParam1.f_98 = {229.2498f, -959.5234f, 29.8773f};
			*uParam1.f_98.f_3 = {-3.2186f, 0f, -75.0536f};
			*uParam1.f_104 = 50.036f;
			*uParam1.f_105 = {240.7464f, -951.9853f, 28.1878f};
			*uParam1.f_108 = 158.97f;
			*uParam1.f_109 = {230.4242f, -959.2939f, 28.3431f};
			*(uParam1.f_112[0 /*3*/]) = {228.2315f, -958.0656f, 28.3444f};
			*(uParam1.f_112[1 /*3*/]) = {228.8929f, -957.1745f, 28.3397f};
			*uParam1.f_119 = {213.1038f, -944.3844f, 29.6918f};
			*uParam1.f_123 = 2.505f;
			*uParam1.f_124 = 4f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 7.635f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {236.7469f, -954.621f, 28.2767f};
			*uParam1.f_132 = {229.3741f, -985.0717f, 28.207f};
			*uParam1.f_135 = {243.9274f, -942.5368f, 28.2134f};
			*uParam1.f_135.f_3 = 160.56f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {209.7067f, -912.3889f, 29.6919f};
			*uParam1.f_150[0] = 325.08f;
			*(uParam1.f_140[1 /*3*/]) = {195.2277f, -985.6662f, 29.0919f};
			*uParam1.f_150[1] = 108f;
			*(uParam1.f_140[2 /*3*/]) = {145.6692f, -1008.577f, 28.4015f};
			*uParam1.f_150[2] = 74.2663f;
			return true;
			break;
		
		case 17:
			*(uParam1[0 /*15*/]) = {248.2705f, -1007.885f, 29.7324f};
			*(uParam1[0 /*15*/].f_3) = {62.7218f, 0f, -110.9959f};
			*(uParam1[0 /*15*/].f_6) = {248.4682f, -1007.96f, 29.724f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-2.253f, 0f, -107.2616f};
			*(uParam1[0 /*15*/]).f_12 = 40.2691f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {229.6498f, -1017.933f, 34.3134f};
			*(uParam1[1 /*15*/].f_3) = {-8.7545f, -0.043f, -60.4954f};
			*(uParam1[1 /*15*/].f_6) = {229.6498f, -1017.933f, 31.3134f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-8.7545f, -0.043f, -60.4954f};
			*(uParam1[1 /*15*/]).f_12 = 36.2565f;
			*(uParam1[1 /*15*/]).f_13 = 0f;
			*(uParam1[1 /*15*/]).f_14 = 0;
			*(uParam1[2 /*15*/]) = {229.6498f, -1017.933f, 34.3134f};
			*(uParam1[2 /*15*/].f_3) = {-8.7545f, -0.043f, -60.4954f};
			*(uParam1[2 /*15*/].f_6) = {229.6498f, -1017.933f, 31.3134f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-8.7545f, -0.043f, -60.4954f};
			*(uParam1[2 /*15*/]).f_12 = 36.2565f;
			*(uParam1[2 /*15*/]).f_13 = 0f;
			*(uParam1[2 /*15*/]).f_14 = 0;
			*(uParam1[3 /*15*/]) = {245.8116f, -1013.307f, 29.7147f};
			*(uParam1[3 /*15*/].f_3) = {1.2147f, 0f, -54.9007f};
			*(uParam1[3 /*15*/].f_6) = {245.8373f, -1013.343f, 29.7147f};
			*(uParam1[3 /*15*/].f_6.f_3) = {1.2147f, 0f, -57.703f};
			*(uParam1[3 /*15*/]).f_12 = 40.2691f;
			*(uParam1[3 /*15*/]).f_13 = 3.75f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {244.272f, -1004.543f, 29.5566f};
			*(uParam1[4 /*15*/].f_3) = {-4.8904f, -0.4852f, -110.0739f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 45f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {250.6561f, -1009.151f, 29.8025f};
			*(uParam1[5 /*15*/].f_3) = {-5.4451f, 0f, 14.2227f};
			*(uParam1[5 /*15*/].f_6) = {250.6561f, -1009.151f, 29.8025f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-5.4451f, 0f, 12.1978f};
			*(uParam1[5 /*15*/]).f_12 = 49.9613f;
			*(uParam1[5 /*15*/]).f_13 = 6.945f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {250.6561f, -1009.151f, 29.8025f};
			*uParam1.f_91.f_3 = {-5.4451f, 0f, 14.2227f};
			*uParam1.f_97 = 49.9613f;
			*uParam1.f_98 = {248.7408f, -1006.52f, 29.6853f};
			*uParam1.f_98.f_3 = {-2.7843f, 0.0116f, -145.7124f};
			*uParam1.f_104 = 49.9613f;
			*uParam1.f_105 = {247.4841f, -1004.881f, 28.1653f};
			*uParam1.f_108 = 345.6f;
			*uParam1.f_109 = {250.0948f, -1007.888f, 28.272f};
			*(uParam1.f_112[0 /*3*/]) = {251.6908f, -1009.03f, 28.2721f};
			*(uParam1.f_112[1 /*3*/]) = {250.5304f, -1009.593f, 28.2708f};
			*uParam1.f_119 = {255.7346f, -1013.608f, 28.2705f};
			*uParam1.f_123 = 2.505f;
			*uParam1.f_124 = 0f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 8.1f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {247.3293f, -1011.432f, 28.2669f};
			*uParam1.f_132 = {282.2794f, -906.4485f, 27.9033f};
			*uParam1.f_135 = {244.7239f, -1014.886f, 28.1332f};
			*uParam1.f_135.f_3 = 348.48f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {265.8661f, -1031.151f, 28.2119f};
			*uParam1.f_150[0] = 218.52f;
			*(uParam1.f_140[1 /*3*/]) = {279.8312f, -962.0749f, 28.4125f};
			*uParam1.f_150[1] = 266.76f;
			*(uParam1.f_140[2 /*3*/]) = {284.2156f, -955.7428f, 28.3454f};
			*uParam1.f_150[2] = 267.5414f;
			return true;
			break;
		
		case 18:
			*(uParam1[0 /*15*/]) = {-223.04f, -1494.461f, 32.1563f};
			*(uParam1[0 /*15*/].f_3) = {-2.3031f, 0.0137f, 170.1147f};
			*(uParam1[0 /*15*/].f_6) = {-222.5391f, -1494.285f, 32.1495f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-2.3031f, 0.0137f, -141.8289f};
			*(uParam1[0 /*15*/]).f_12 = 33.267f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-216.6314f, -1498.653f, 31.918f};
			*(uParam1[1 /*15*/].f_3) = {-1.2591f, -0.0294f, -155.8858f};
			*(uParam1[1 /*15*/].f_6) = {-216.5979f, -1498.728f, 31.9162f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-1.2591f, -0.0294f, -157.2869f};
			*(uParam1[1 /*15*/]).f_12 = 17.2517f;
			*(uParam1[1 /*15*/]).f_13 = 0f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-216.0729f, -1498.936f, 31.8561f};
			*(uParam1[2 /*15*/].f_3) = {-1.2116f, 0.0137f, -167.8524f};
			*(uParam1[2 /*15*/].f_6) = {-216.035f, -1499.112f, 31.8523f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-1.2116f, 0.0137f, -169.2618f};
			*(uParam1[2 /*15*/]).f_12 = 21.1725f;
			*(uParam1[2 /*15*/]).f_13 = 10.4f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {-215.1879f, -1494.078f, 31.6461f};
			*(uParam1[3 /*15*/].f_3) = {-0.3716f, 0.0137f, 167.1272f};
			*(uParam1[3 /*15*/].f_6) = {-215.4108f, -1494.492f, 31.6431f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-0.3716f, 0.0137f, 164.7599f};
			*(uParam1[3 /*15*/]).f_12 = 34.7576f;
			*(uParam1[3 /*15*/]).f_13 = 4.825f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {-214.1399f, -1497.863f, 31.5615f};
			*(uParam1[4 /*15*/].f_3) = {-1.6427f, 0.0712f, 174.9291f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 50f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-215.9396f, -1502.092f, 31.9881f};
			*(uParam1[5 /*15*/].f_3) = {-8.182f, 0.0137f, -39.2424f};
			*(uParam1[5 /*15*/].f_6) = {-215.9396f, -1502.092f, 31.9881f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-8.182f, 0.0137f, -42.089f};
			*(uParam1[5 /*15*/]).f_12 = 50.0069f;
			*(uParam1[5 /*15*/]).f_13 = 6.795f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-215.9396f, -1502.092f, 31.9881f};
			*uParam1.f_91.f_3 = {-8.182f, 0.0137f, -39.2424f};
			*uParam1.f_97 = 50.0069f;
			*uParam1.f_98 = {-213.5682f, -1500.077f, 31.854f};
			*uParam1.f_98.f_3 = {-2.4576f, 0.0837f, 111.3005f};
			*uParam1.f_104 = 50.0069f;
			*uParam1.f_105 = {-209.7381f, -1495.071f, 30.2667f};
			*uParam1.f_108 = 141.48f;
			*uParam1.f_109 = {-215.1646f, -1500.812f, 30.4305f};
			*(uParam1.f_112[0 /*3*/]) = {-215.0512f, -1503.367f, 30.4623f};
			*(uParam1.f_112[1 /*3*/]) = {-215.9888f, -1503.289f, 30.4622f};
			*uParam1.f_119 = {-222.2676f, -1510.992f, 30.6938f};
			*uParam1.f_123 = 2.505f;
			*uParam1.f_124 = 4.175f;
			*uParam1.f_125 = 0.54f;
			*uParam1.f_126 = 9.69f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-206.9685f, -1494.614f, 30.4733f};
			*uParam1.f_132 = {-162.9734f, -1508.385f, 32.3938f};
			*uParam1.f_135 = {-224.7263f, -1488.164f, 30.3038f};
			*uParam1.f_135.f_3 = 139.68f;
			*uParam1.f_135.f_4 = 8;
			*(uParam1.f_140[0 /*3*/]) = {-239.6648f, -1549.731f, 30.6344f};
			*uParam1.f_150[0] = 136.44f;
			*(uParam1.f_140[1 /*3*/]) = {-263.615f, -1540.688f, 30.6904f};
			*uParam1.f_150[1] = 187.56f;
			*(uParam1.f_140[2 /*3*/]) = {-144.4396f, -1549.473f, 33.4471f};
			*uParam1.f_150[2] = 139.0999f;
			return true;
			break;
		
		case 19:
			*(uParam1[0 /*15*/]) = {-1181.397f, -826.845f, 16.5792f};
			*(uParam1[0 /*15*/].f_3) = {9.6959f, 0f, 47.2246f};
			*(uParam1[0 /*15*/].f_6) = {-1181.98f, -827.2338f, 14.7335f};
			*(uParam1[0 /*15*/].f_6.f_3) = {4.1175f, 0f, 52.9134f};
			*(uParam1[0 /*15*/]).f_12 = 50f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-1184.33f, -826.4483f, 14.7437f};
			*(uParam1[1 /*15*/].f_3) = {-0.6489f, -0.0007f, 62.8269f};
			*(uParam1[1 /*15*/].f_6) = {-1184.571f, -826.3248f, 14.7407f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-0.1044f, -0.0007f, 62.8269f};
			*(uParam1[1 /*15*/]).f_12 = 18.4352f;
			*(uParam1[1 /*15*/]).f_13 = 5.55f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-1184.338f, -826.9095f, 14.7463f};
			*(uParam1[2 /*15*/].f_3) = {-0.6489f, -0.0007f, 50.098f};
			*(uParam1[2 /*15*/].f_6) = {-1184.433f, -826.8304f, 14.7449f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-0.6489f, -0.0007f, 48.6321f};
			*(uParam1[2 /*15*/]).f_12 = 18.4352f;
			*(uParam1[2 /*15*/]).f_13 = 11.425f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {-1183.2f, -830.7167f, 14.5212f};
			*(uParam1[3 /*15*/].f_3) = {1.0563f, 0f, 27.379f};
			*(uParam1[3 /*15*/].f_6) = {-1183.022f, -830.6245f, 14.5212f};
			*(uParam1[3 /*15*/].f_6.f_3) = {2.0449f, 0f, 26.6091f};
			*(uParam1[3 /*15*/]).f_12 = 42.0117f;
			*(uParam1[3 /*15*/]).f_13 = 5.2f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {-1188.466f, -824.3413f, 14.8546f};
			*(uParam1[4 /*15*/].f_3) = {1.5615f, -0.1037f, -118.6105f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 53.386f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-1186.471f, -824.6526f, 14.8865f};
			*(uParam1[5 /*15*/].f_3) = {-3.8721f, 0f, 169.2043f};
			*(uParam1[5 /*15*/].f_6) = {-1186.471f, -824.6526f, 14.8865f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-3.8721f, 0f, 173.8093f};
			*(uParam1[5 /*15*/]).f_12 = 49.9849f;
			*(uParam1[5 /*15*/]).f_13 = 5.52f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-1186.471f, -824.6526f, 14.8865f};
			*uParam1.f_91.f_3 = {-3.8721f, 0f, 169.2043f};
			*uParam1.f_97 = 49.9849f;
			*uParam1.f_98 = {-1186.429f, -827.6542f, 14.7835f};
			*uParam1.f_98.f_3 = {-0.7502f, 0.0313f, -9.5858f};
			*uParam1.f_104 = 49.9849f;
			*uParam1.f_105 = {-1189.128f, -832.9972f, 13.2161f};
			*uParam1.f_108 = 218.52f;
			*uParam1.f_109 = {-1186.425f, -825.9056f, 13.3321f};
			*(uParam1.f_112[0 /*3*/]) = {-1187.74f, -824.2661f, 13.3448f};
			*(uParam1.f_112[1 /*3*/]) = {-1186.4f, -824.4038f, 13.3008f};
			*uParam1.f_119 = {-1190.961f, -806.6936f, 17.0174f};
			*uParam1.f_123 = 2.505f;
			*uParam1.f_124 = 4f;
			*uParam1.f_125 = 0.27f;
			*uParam1.f_126 = 8.625f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-1192.524f, -834.0498f, 13.3085f};
			*uParam1.f_132 = {-1131.694f, -912.2311f, 2.2148f};
			*uParam1.f_135 = {-1196.721f, -872.5267f, 12.5092f};
			*uParam1.f_135.f_3 = 299.52f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {-1265.435f, -727.5261f, 21.1402f};
			*uParam1.f_150[0] = 25.92f;
			*(uParam1.f_140[1 /*3*/]) = {-1222.269f, -784.6736f, 16.6973f};
			*uParam1.f_150[1] = 30.96f;
			*(uParam1.f_140[2 /*3*/]) = {-1140.77f, -935.9708f, 1.6022f};
			*uParam1.f_150[2] = 125.0739f;
			return true;
			break;
		
		case 20:
			*(uParam1[0 /*15*/]) = {-1400.438f, -585.9051f, 30.9432f};
			*(uParam1[0 /*15*/].f_3) = {32.3305f, 0f, -105.6953f};
			*(uParam1[0 /*15*/].f_6) = {-1400.362f, -585.9331f, 30.9394f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-2.7052f, 0f, -110.3139f};
			*(uParam1[0 /*15*/]).f_12 = 50f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-1397.601f, -589.7619f, 30.8651f};
			*(uParam1[1 /*15*/].f_3) = {-4.6041f, 0.0007f, -69.4751f};
			*(uParam1[1 /*15*/].f_6) = {-1397.428f, -589.6965f, 30.8501f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-4.6041f, 0.0007f, -69.4751f};
			*(uParam1[1 /*15*/]).f_12 = 25.7248f;
			*(uParam1[1 /*15*/]).f_13 = 5.075f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-1398.365f, -590.4213f, 30.7041f};
			*(uParam1[2 /*15*/].f_3) = {-1.8133f, 0.0007f, -54.5359f};
			*(uParam1[2 /*15*/].f_6) = {-1398.268f, -590.3511f, 30.7003f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-1.8133f, 0.0007f, -53.8792f};
			*(uParam1[2 /*15*/]).f_12 = 25.7248f;
			*(uParam1[2 /*15*/]).f_13 = 10.05f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {-1392.434f, -584.4755f, 30.6697f};
			*(uParam1[3 /*15*/].f_3) = {-3.5396f, 0f, 147.9476f};
			*(uParam1[3 /*15*/].f_6) = {-1392.684f, -584.874f, 30.6406f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-2.1681f, 0f, 149.1801f};
			*(uParam1[3 /*15*/]).f_12 = 32.1336f;
			*(uParam1[3 /*15*/]).f_13 = 8.025f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-1395.967f, -590.8463f, 30.9775f};
			*(uParam1[5 /*15*/].f_3) = {-7.0494f, 0f, -16.7103f};
			*(uParam1[5 /*15*/].f_6) = {-1395.967f, -590.8463f, 30.9775f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-7.0494f, 0f, -2.2177f};
			*(uParam1[5 /*15*/]).f_12 = 49.3689f;
			*(uParam1[5 /*15*/]).f_13 = 4.785f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-1395.967f, -590.8463f, 30.9775f};
			*uParam1.f_91.f_3 = {-7.0494f, 0f, -16.7103f};
			*uParam1.f_97 = 49.3689f;
			*uParam1.f_98 = {-1395.967f, -590.8463f, 30.9775f};
			*uParam1.f_98.f_3 = {-7.0494f, 0f, -2.2177f};
			*uParam1.f_104 = 49.3689f;
			*uParam1.f_105 = {-1396.863f, -583.7726f, 29.2332f};
			*uParam1.f_108 = 305.28f;
			*uParam1.f_109 = {-1395.69f, -589.4706f, 29.2947f};
			*(uParam1.f_112[0 /*3*/]) = {-1394.478f, -588.175f, 29.2765f};
			*(uParam1.f_112[1 /*3*/]) = {-1395.249f, -586.9717f, 29.2791f};
			*uParam1.f_119 = {-1387.374f, -586.2861f, 29.2117f};
			*uParam1.f_123 = 2.505f;
			*uParam1.f_124 = 4f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 8.16f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-1395.365f, -585.9979f, 29.2759f};
			*uParam1.f_132 = {-1437.236f, -602.3437f, 29.7106f};
			*uParam1.f_135 = {-1402.181f, -587.1375f, 29.2292f};
			*uParam1.f_135.f_3 = 301.68f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {-1363.934f, -597.2744f, 28.115f};
			*uParam1.f_150[0] = 212.4f;
			*(uParam1.f_140[1 /*3*/]) = {-1317.086f, -534.9244f, 31.6545f};
			*uParam1.f_150[1] = 284.04f;
			*(uParam1.f_140[2 /*3*/]) = {-1521.922f, -692.8118f, 27.4762f};
			*uParam1.f_150[2] = 232.8838f;
			return true;
			break;
		
		case 21:
			*(uParam1[0 /*15*/]) = {-1366.922f, -398.731f, 41.0798f};
			*(uParam1[0 /*15*/].f_3) = {17.4675f, -0.1845f, -77.0057f};
			*(uParam1[0 /*15*/].f_6) = {-1366.93f, -398.9865f, 40.0866f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-5.1001f, -0.1845f, -65.4537f};
			*(uParam1[0 /*15*/]).f_12 = 30.8234f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-1345.72f, -386.2633f, 37.2103f};
			*(uParam1[1 /*15*/].f_3) = {-1.0508f, -0.1845f, -61.7459f};
			*(uParam1[1 /*15*/].f_6) = {-1345.581f, -386.1886f, 37.2074f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-1.0508f, -0.1845f, -61.7459f};
			*(uParam1[1 /*15*/]).f_12 = 21.5932f;
			*(uParam1[1 /*15*/]).f_13 = 6.925f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-1345.955f, -386.2108f, 37.2211f};
			*(uParam1[2 /*15*/].f_3) = {-3.4291f, -0.1845f, -72.0063f};
			*(uParam1[2 /*15*/].f_6) = {-1345.777f, -386.153f, 37.2099f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-3.185f, -0.1845f, -72.0063f};
			*(uParam1[2 /*15*/]).f_12 = 21.5932f;
			*(uParam1[2 /*15*/]).f_13 = 10.075f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {-1337.814f, -390.8861f, 37.0116f};
			*(uParam1[3 /*15*/].f_3) = {-0.8397f, -0.1845f, 42.1048f};
			*(uParam1[3 /*15*/].f_6) = {-1338.064f, -391.1115f, 37.0105f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-0.8397f, -0.1845f, 42.1048f};
			*(uParam1[3 /*15*/]).f_12 = 33.8628f;
			*(uParam1[3 /*15*/]).f_13 = 10.375f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {-1347.607f, -384.3f, 37.2427f};
			*(uParam1[4 /*15*/].f_3) = {-5.1716f, -0.1784f, -101.7165f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 33.8628f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-1342.915f, -385.4987f, 37.2378f};
			*(uParam1[5 /*15*/].f_3) = {-3.0101f, -0.1845f, 62.5899f};
			*(uParam1[5 /*15*/].f_6) = {-1342.915f, -385.4987f, 37.2378f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-3.0101f, -0.1845f, 49.9371f};
			*(uParam1[5 /*15*/]).f_12 = 49.9943f;
			*(uParam1[5 /*15*/]).f_13 = 5.52f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-1342.915f, -385.4987f, 37.2378f};
			*uParam1.f_91.f_3 = {-3.0101f, -0.1845f, 62.5899f};
			*uParam1.f_97 = 49.9943f;
			*uParam1.f_98 = {-1344.697f, -383.5359f, 37.1767f};
			*uParam1.f_98.f_3 = {-7.7089f, -0.22f, -177.5366f};
			*uParam1.f_104 = 49.9943f;
			*uParam1.f_105 = {-1346.659f, -382.4048f, 35.755f};
			*uParam1.f_108 = 304.2f;
			*uParam1.f_109 = {-1344.319f, -385.1048f, 35.7534f};
			*(uParam1.f_112[0 /*3*/]) = {-1342.346f, -384.7795f, 35.7455f};
			*(uParam1.f_112[1 /*3*/]) = {-1342.183f, -385.7662f, 35.745f};
			*uParam1.f_119 = {-1315.982f, -383.286f, 35.7237f};
			*uParam1.f_123 = 2.505f;
			*uParam1.f_124 = 4f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 5.685f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-1341.672f, -376.5873f, 35.7475f};
			*uParam1.f_132 = {-1275.441f, -344.9638f, 35.6584f};
			*uParam1.f_135 = {-1326.111f, -395.0894f, 35.4495f};
			*uParam1.f_135.f_3 = 212.4f;
			*uParam1.f_135.f_4 = 8;
			*(uParam1.f_140[0 /*3*/]) = {-1300.443f, -383.3367f, 35.5787f};
			*uParam1.f_150[0] = 208.44f;
			*(uParam1.f_140[1 /*3*/]) = {-1331.939f, -325.6764f, 36.3622f};
			*uParam1.f_150[1] = 29.88f;
			*(uParam1.f_140[2 /*3*/]) = {-1293.166f, -383.7935f, 35.5591f};
			*uParam1.f_150[2] = 207.2801f;
			return true;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = {-12.9499f, 6502.845f, 32.7873f};
			*(uParam1[0 /*15*/].f_3) = {9.5209f, 0f, 28.9591f};
			*(uParam1[0 /*15*/].f_6) = {-12.9172f, 6502.981f, 32.0578f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-3.2163f, 0f, 28.4487f};
			*(uParam1[0 /*15*/]).f_12 = 31.35f;
			*(uParam1[0 /*15*/]).f_13 = 5f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {-15.8414f, 6504.559f, 32.0731f};
			*(uParam1[1 /*15*/].f_3) = {-2.4909f, 0f, -79.5938f};
			*(uParam1[1 /*15*/].f_6) = {-15.719f, 6504.578f, 32.0677f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-2.4909f, 0f, -79.5938f};
			*(uParam1[1 /*15*/]).f_12 = 26.7402f;
			*(uParam1[1 /*15*/]).f_13 = 6.8f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {-15.2964f, 6503.461f, 32.0741f};
			*(uParam1[2 /*15*/].f_3) = {-3.2163f, 0f, -40.2756f};
			*(uParam1[2 /*15*/].f_6) = {-15.2178f, 6503.554f, 32.0673f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-3.2163f, 0f, -40.2756f};
			*(uParam1[2 /*15*/]).f_12 = 31.35f;
			*(uParam1[2 /*15*/]).f_13 = 9.425f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {-17.4111f, 6499.129f, 31.9122f};
			*(uParam1[3 /*15*/].f_3) = {-1.2605f, 0f, -35.0484f};
			*(uParam1[3 /*15*/].f_6) = {-17.3962f, 6499.245f, 31.9101f};
			*(uParam1[3 /*15*/].f_6.f_3) = {-1.2605f, 0f, -38.0048f};
			*(uParam1[3 /*15*/]).f_12 = 28.2785f;
			*(uParam1[3 /*15*/]).f_13 = 10.825f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {-13.457f, 6504.143f, 32.0189f};
			*(uParam1[5 /*15*/].f_3) = {-5.428f, 0f, 29.793f};
			*(uParam1[5 /*15*/].f_6) = {-13.457f, 6504.143f, 32.0189f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-5.428f, 0f, 25.0133f};
			*(uParam1[5 /*15*/]).f_12 = 49.9863f;
			*(uParam1[5 /*15*/]).f_13 = 5.1f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {-13.457f, 6504.143f, 32.0189f};
			*uParam1.f_91.f_3 = {-5.428f, 0f, 29.793f};
			*uParam1.f_97 = 49.9863f;
			*uParam1.f_98 = {-14.0094f, 6506.85f, 32.039f};
			*uParam1.f_98.f_3 = {-7.8212f, 0f, 154.0325f};
			*uParam1.f_104 = 49.9863f;
			*uParam1.f_105 = {-14.8887f, 6510.313f, 30.2857f};
			*uParam1.f_108 = 317.16f;
			*uParam1.f_109 = {-14.6068f, 6505.243f, 30.5313f};
			*(uParam1.f_112[0 /*3*/]) = {-13.406f, 6504.645f, 30.5605f};
			*(uParam1.f_112[1 /*3*/]) = {-13.3913f, 6506.082f, 30.5421f};
			*uParam1.f_119 = {-2.3765f, 6505.239f, 30.4432f};
			*uParam1.f_123 = 2.505f;
			*uParam1.f_124 = 4.125f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 7.32f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {-14.5603f, 6510.57f, 30.2871f};
			*uParam1.f_132 = {21.5285f, 6548.239f, 30.2918f};
			*uParam1.f_135 = {-22.4419f, 6502.546f, 30.2973f};
			*uParam1.f_135.f_3 = 313.56f;
			*uParam1.f_135.f_4 = 9;
			*(uParam1.f_140[0 /*3*/]) = {0.2704f, 6440.619f, 30.4253f};
			*uParam1.f_150[0] = 226.08f;
			*(uParam1.f_140[1 /*3*/]) = {42.3786f, 6499.078f, 30.4253f};
			*uParam1.f_150[1] = 230.76f;
			*(uParam1.f_140[2 /*3*/]) = {85.8481f, 6593.306f, 30.4944f};
			*uParam1.f_150[2] = 229.9428f;
			return true;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = {1398.366f, 3589.792f, 35.7675f};
			*(uParam1[0 /*15*/].f_3) = {16.1439f, 0f, 12.7999f};
			*(uParam1[0 /*15*/].f_6) = {1398.386f, 3589.78f, 35.4151f};
			*(uParam1[0 /*15*/].f_6.f_3) = {-3.1277f, 0f, 60.2753f};
			*(uParam1[0 /*15*/]).f_12 = 41.4763f;
			*(uParam1[0 /*15*/]).f_13 = 6.45f;
			*(uParam1[0 /*15*/]).f_14 = 1;
			*(uParam1[1 /*15*/]) = {1393.177f, 3589.758f, 35.3621f};
			*(uParam1[1 /*15*/].f_3) = {-1.7755f, 0f, -47.7455f};
			*(uParam1[1 /*15*/].f_6) = {1393.235f, 3589.811f, 35.3597f};
			*(uParam1[1 /*15*/].f_6.f_3) = {-1.7755f, 0f, -47.7455f};
			*(uParam1[1 /*15*/]).f_12 = 25.6712f;
			*(uParam1[1 /*15*/]).f_13 = 5.925f;
			*(uParam1[1 /*15*/]).f_14 = 1;
			*(uParam1[2 /*15*/]) = {1393.233f, 3589.382f, 35.3779f};
			*(uParam1[2 /*15*/].f_3) = {-4.1375f, 0f, -43.9328f};
			*(uParam1[2 /*15*/].f_6) = {1393.384f, 3589.538f, 35.3621f};
			*(uParam1[2 /*15*/].f_6.f_3) = {-3.8599f, 0f, -43.0485f};
			*(uParam1[2 /*15*/]).f_12 = 25.6712f;
			*(uParam1[2 /*15*/]).f_13 = 10.675f;
			*(uParam1[2 /*15*/]).f_14 = 1;
			*(uParam1[3 /*15*/]) = {1401.436f, 3593.278f, 34.9226f};
			*(uParam1[3 /*15*/].f_3) = {4.7665f, 0f, 89.9214f};
			*(uParam1[3 /*15*/].f_6) = {1401.411f, 3593.278f, 34.9247f};
			*(uParam1[3 /*15*/].f_6.f_3) = {2.3666f, 0f, 93.3675f};
			*(uParam1[3 /*15*/]).f_12 = 40.2577f;
			*(uParam1[3 /*15*/]).f_13 = 7.025f;
			*(uParam1[3 /*15*/]).f_14 = 1;
			*(uParam1[4 /*15*/]) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/].f_6.f_3) = {0f, 0f, 0f};
			*(uParam1[4 /*15*/]).f_12 = 0f;
			*(uParam1[4 /*15*/]).f_13 = 0f;
			*(uParam1[4 /*15*/]).f_14 = 0;
			*(uParam1[5 /*15*/]) = {1393.014f, 3590.391f, 35.3415f};
			*(uParam1[5 /*15*/].f_3) = {-3.6763f, 0f, -73.5766f};
			*(uParam1[5 /*15*/].f_6) = {1393.014f, 3590.391f, 35.3415f};
			*(uParam1[5 /*15*/].f_6.f_3) = {-3.6763f, 0f, -76.3552f};
			*(uParam1[5 /*15*/]).f_12 = 49.9894f;
			*(uParam1[5 /*15*/]).f_13 = 5.895f;
			*(uParam1[5 /*15*/]).f_14 = 1;
			*uParam1.f_91 = {1393.014f, 3590.391f, 35.3415f};
			*uParam1.f_91.f_3 = {-3.6763f, 0f, -73.5766f};
			*uParam1.f_97 = 49.9894f;
			*uParam1.f_98 = {1395.981f, 3590.8f, 35.2591f};
			*uParam1.f_98.f_3 = {-1.4534f, -0.0615f, 64.6092f};
			*uParam1.f_104 = 49.9894f;
			*uParam1.f_105 = {1401.176f, 3591.584f, 33.9257f};
			*uParam1.f_108 = 287.28f;
			*uParam1.f_109 = {1394.206f, 3591.311f, 33.8731f};
			*(uParam1.f_112[0 /*3*/]) = {1395.798f, 3592.12f, 33.885f};
			*(uParam1.f_112[1 /*3*/]) = {1395.861f, 3591.15f, 33.8331f};
			*uParam1.f_119 = {1394.218f, 3599.675f, 33.9149f};
			*uParam1.f_123 = 3.505f;
			*uParam1.f_124 = 4.125f;
			*uParam1.f_125 = 0f;
			*uParam1.f_126 = 8.205f;
			*uParam1.f_127 = 1;
			*uParam1.f_128 = 0;
			*uParam1.f_129 = {1398.347f, 3589.341f, 33.9425f};
			*uParam1.f_132 = {1489.784f, 3614.96f, 33.8271f};
			*uParam1.f_135 = {1382.274f, 3593.806f, 33.8937f};
			*uParam1.f_135.f_3 = 12.96f;
			*uParam1.f_135.f_4 = 5;
			*(uParam1.f_140[0 /*3*/]) = {1452.449f, 3638.907f, 33.6778f};
			*uParam1.f_150[0] = 13.68f;
			*(uParam1.f_140[1 /*3*/]) = {1347.231f, 3612.064f, 33.876f};
			*uParam1.f_150[1] = 28.8212f;
			*(uParam1.f_140[2 /*3*/]) = {1459.649f, 3651.67f, 33.5887f};
			*uParam1.f_150[2] = 14.7733f;
			return true;
			break;
	}
	return false;
}

int func_280(int iParam0)
{
	return Global_35711 == iParam0;
}

bool func_281(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_282(iParam0))
	{
		return false;
	}
	return true;
}

int func_282(int iParam0)
{
	return func_283(iParam0, Global_35711);
}

bool func_283(int iParam0, int iParam1)
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

bool func_284()
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

bool func_285()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

void func_286(int iParam0)
{
	Local_79.f_1 = iParam0;
}

void func_287()
{
	int iVar0;
	int iVar1;
	
	if (Local_79.f_258 != 0)
	{
		func_54(&(Local_79.f_3));
		func_54(&(Local_79.f_56));
		func_54(&(Local_79.f_109));
		if (does_blip_exist(Local_79.f_648))
		{
			remove_blip(&(Local_79.f_648));
		}
		if (func_291("FR_H_ACTIV1"))
		{
			clear_help(1);
		}
		if (func_291("FR_H_ACTIV2"))
		{
			clear_help(1);
		}
		if (Local_79.f_618)
		{
			iVar0 = 0;
			while (iVar0 < 22)
			{
				iVar1 = Global_87347[iVar0 /*2*/];
				if (func_290(iVar1))
				{
					func_289(iVar1, 0, 0);
				}
				iVar0++;
			}
			func_288(&(Local_79.f_631));
			Local_79.f_633 = 0;
		}
		Local_79.f_258 = 0;
	}
}

void func_288(var uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
}

void func_289(int iParam0, int iParam1, int iParam2)
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

int func_290(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return does_blip_exist(Global_25433[iVar0 /*23*/].f_19);
}

int func_291(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_292()
{
	func_787();
	if (_is_interior_rendering_disabled())
	{
		func_287();
		func_286(4);
		return;
	}
	else if (func_285())
	{
		if (func_284())
		{
			func_286(3);
		}
	}
	else if (!is_player_playing(player_id()))
	{
		func_287();
		func_286(0);
	}
	else if (((func_281(6) && !func_280(6)) && !func_280(7)) && !func_280(2))
	{
		func_287();
		func_784(0, 48, 0);
		func_286(1);
	}
	else if (func_783())
	{
		func_472();
		func_439();
		func_296(1);
		func_287();
		if (!func_295())
		{
			if (func_293())
			{
				func_286(6);
			}
		}
	}
}

bool func_293()
{
	int iVar0;
	
	if (Local_79.f_56 != 0 || Local_79.f_109 != 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_79.f_162[iVar0 /*28*/].f_1 != 0 && Local_79.f_162[iVar0 /*28*/].f_1 != 11)
		{
			return false;
		}
		iVar0++;
	}
	if (func_294(&(Local_79.f_703)) == 3 || Local_79.f_670 > 0)
	{
		return false;
	}
	return true;
}

var func_294(var uParam0)
{
	return *uParam0;
}

bool func_295()
{
	int iVar0;
	
	if ((Local_79.f_56 != 0 && Local_79.f_56 < 7) || (Local_79.f_109 != 0 && Local_79.f_109 < 7))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Local_79.f_162[iVar0 /*28*/].f_1 != 0 && Local_79.f_162[iVar0 /*28*/].f_1 != 11) && Local_79.f_162[iVar0 /*28*/].f_1 < 14)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_296(int iParam0)
{
	func_370(&(Local_79.f_703), &(Local_79.f_737));
	func_365();
	func_362();
	func_300();
	if (iParam0)
	{
		func_297();
	}
}

void func_297()
{
	if (Global_101154.f_16793.f_408 == 0)
	{
		if (Local_79.f_162[0 /*28*/].f_1 == 3 || Local_79.f_162[0 /*28*/].f_1 == 7)
		{
			if (func_298("FR_H_BUDM_A"))
			{
				Global_101154.f_16793.f_408 = 1;
				return;
			}
		}
		else if (Local_79.f_162[1 /*28*/].f_1 == 3 || Local_79.f_162[1 /*28*/].f_1 == 7)
		{
			if (func_298("FR_H_BUDF_A"))
			{
				Global_101154.f_16793.f_408 = 1;
				return;
			}
		}
		else if (Local_79.f_162[2 /*28*/].f_1 == 3 || Local_79.f_162[2 /*28*/].f_1 == 7)
		{
			if (func_298("FR_H_BUDT_A"))
			{
				Global_101154.f_16793.f_408 = 1;
				return;
			}
		}
	}
	if (Global_101154.f_16793.f_409 == 0)
	{
		if (Local_79.f_857)
		{
			if (func_298("FR_H_BUD_SW"))
			{
				Global_101154.f_16793.f_409 = 1;
				return;
			}
		}
	}
	else if (is_help_message_being_displayed())
	{
		if (is_player_switch_in_progress())
		{
			if (func_291("FR_H_BUD_SW"))
			{
				clear_help(1);
			}
		}
	}
}

bool func_298(char* sParam0)
{
	if (!is_help_message_on_screen())
	{
		func_299(sParam0, -1);
		return true;
	}
	return false;
}

void func_299(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_300()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_120();
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Local_79.f_671[iVar1 /*6*/].f_1 != 6 && Local_79.f_671[iVar1 /*6*/] != iVar0)
		{
			if (!func_361(&(Local_79.f_671[iVar1 /*6*/].f_3)) || func_358(&(Local_79.f_671[iVar1 /*6*/].f_3), 0f))
			{
				if (!does_entity_exist(func_356(Local_79.f_671[iVar1 /*6*/])))
				{
					iVar2 = -1924990311;
					if (Local_79.f_671[iVar1 /*6*/].f_1 == 2)
					{
						iVar2 = func_355(func_64(Local_79.f_671[iVar1 /*6*/]));
					}
					if (iVar2 != -1)
					{
						func_301(iVar0, Local_79.f_671[iVar1 /*6*/], Local_79.f_671[iVar1 /*6*/].f_1, 1, Local_79.f_671[iVar1 /*6*/].f_2, iVar2, -1);
					}
					Local_79.f_671[iVar1 /*6*/].f_1 = 6;
					Local_79.f_702--;
				}
			}
		}
		iVar1++;
	}
}

bool func_301(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	
	iVar0 = 3;
	iVar1 = func_64(iParam1);
	iVar2 = func_354(iParam0);
	iVar3 = 10000;
	if (iParam3 == 0)
	{
		if (func_352(iVar1, iParam2, -1, &iVar4, &iVar5))
		{
			if (iParam5 == -1)
			{
				return false;
			}
			iVar6 = 0;
			if (((((iParam5 == 2091854273 || iParam5 == 328868333) || iParam5 == -1813399915) || iParam5 == 465306446) || iParam5 == -816460512) || iParam5 == -702667427)
			{
				iVar6 = 262144;
			}
			iVar7 = -1;
			if (iParam5 == 2091854273)
			{
				iVar7 = 24;
			}
			else if (iParam5 == 328868333)
			{
				iVar7 = 25;
			}
			else if (iParam5 == -1813399915)
			{
				iVar7 = 26;
			}
			else if (iParam5 == 465306446)
			{
				iVar7 = 27;
			}
			else if (iParam5 == -816460512)
			{
				iVar7 = 28;
			}
			else if (iParam5 == -702667427)
			{
				iVar7 = 29;
			}
			if (func_349(iParam5, iVar4, iVar5, iVar0, iVar2, iParam1, iVar3, 10000, iParam6, iParam4, iVar7, iVar6, 1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	else if (func_347(iVar1, iParam2, -1, &sVar8))
	{
		if (func_335(iParam1, &sVar8, 1, 0, 0, 0, 0, 1, 0, 1))
		{
			if (iParam4 != 0)
			{
				switch (iParam4)
				{
					case 202:
						func_334();
						break;
					
					case 203:
						func_333();
						break;
					
					case 204:
						func_332();
						break;
					
					case 205:
						func_331();
						break;
					
					case 206:
						func_302();
						break;
					}
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_302()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_120();
	iVar1 = func_330(iVar0);
	if (iVar1 > 10000)
	{
		func_303(iVar0, 128, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_303(iVar0, 128, iVar1 / 10);
	}
}

int func_303(int iParam0, int iParam1, int iParam2)
{
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_304(Global_101154.f_32575[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

bool func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_329();
	if (iParam3 < 1)
	{
		return false;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_328(99, 1);
					func_327(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_327(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_327(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_312(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_311(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_327(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_327(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_327(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_311(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_327(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_327(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_327(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_327(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_327(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_327(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_327(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_327(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_327(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (_get_this_script_hash())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_327(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_327(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_327(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_327(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_327(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_327(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_311(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_327(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_327(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_327(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_327(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_327(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_327(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_310(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_328(95, iParam3);
					break;
				
				case 1:
					func_328(97, iParam3);
					break;
				
				case 2:
					func_328(96, iParam3);
					break;
			}
			func_328(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_307(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_307(iVar1);
	}
	iVar5 = Global_52923[iVar2] + iParam3;
	switch (iParam1)
	{
		case 1:
			if (Global_52923[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52923[iVar2] = 2147483647;
				}
				else
				{
					Global_52923[iVar2] += iParam3;
				}
			}
			switch (iParam0)
			{
				case 0:
					func_327(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_327(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_327(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!iParam4)
			{
				if (Global_52923[iVar2] - iParam3 < 0)
				{
					return false;
				}
			}
			iVar3 = Global_52923[iVar2];
			Global_52923[iVar2] -= iParam3;
			if (iParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101154.f_25089.f_233[iVar2 /*69*/]++;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_1++;
		if (Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_306(iParam0);
	if (Global_35711 == 15)
	{
		func_305(0);
	}
	return true;
}

void func_305(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!iParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_306(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			stat_set_int(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			stat_set_int(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			stat_set_int(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_307(int iParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = false;
	if (!network_is_game_in_progress())
	{
		if (is_bit_set(Global_101154.f_25089.f_471, iParam0))
		{
			iVar0 = true;
			clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (is_bit_set(Global_101154.f_25089.f_471, iParam0) || is_bit_set(Global_2097152[func_309() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		clear_bit(&(Global_2097152[func_309() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_308(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_309()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_310(int iParam0)
{
	func_328(93, iParam0);
	func_328(29, iParam0);
	func_328(30, iParam0);
}

int func_311(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return is_bit_set(Global_101154.f_25089.f_471, iParam0);
	}
	return is_bit_set(Global_2097152[func_309() /*10375*/].f_7704.f_10, iParam0);
}

bool func_312(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	if (has_achievement_been_passed(27))
	{
		return false;
	}
	if (stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (iParam0)
	{
	}
	iVar2 = 0;
	stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000)
	{
		stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_326(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_313(27, 1);
	return true;
}

int func_313(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_314(iParam0, iParam1);
}

bool func_314(int iParam0, int iParam1)
{
	if (func_280(14) && !func_325(iParam0))
	{
		return false;
	}
	if (has_achievement_been_passed(iParam0) && iParam1 == 1)
	{
		return false;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return false;
	}
	if (func_324(&Global_2563627))
	{
		if (func_322(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_315(&Global_2563627, iParam0))
		{
			return true;
		}
	}
	else
	{
		if (!give_achievement_to_player(iParam0))
		{
			return false;
		}
		if (has_achievement_been_passed(iParam0))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_315(var uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_280(14) && !func_325(iParam1))
	{
		return false;
	}
	if (func_322(uParam0, iParam1))
	{
		return false;
	}
	if (func_321(uParam0) < 0f)
	{
		func_320(uParam0, 0);
	}
	func_318(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_316(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_316(var uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_280(14) && !func_325(iParam1))
	{
		return false;
	}
	if (func_322(uParam0, iParam1))
	{
		return false;
	}
	if (func_321(uParam0) < 0f)
	{
		func_320(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_317(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_317(var uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_318(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_319(uParam0, iVar0);
		iVar0++;
	}
	func_320(uParam0, Global_2563626 - 0.5f);
}

void func_319(var uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_320(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		*uParam0.f_72 = 0f;
	}
	else
	{
		*uParam0.f_72 = fParam1;
	}
}

var func_321(var uParam0)
{
	return *uParam0.f_72;
}

int func_322(var uParam0, int iParam1)
{
	return func_323(uParam0, iParam1) != -1;
}

int func_323(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_324(var uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_325(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
		
		default:
	}
	return false;
}

int func_326(int iParam0, int iParam1)
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

void func_327(int iParam0, int iParam1)
{
	int iVar0;
	
	stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stat_set_int(iParam0, iVar0, 1);
}

void func_328(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (network_is_game_in_progress())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		stat_get_int(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stat_set_int(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_329()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

int func_330(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			stat_get_int(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			stat_get_int(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			stat_get_int(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

void func_331()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_120();
	iVar1 = func_330(iVar0);
	if (iVar1 > 10000)
	{
		func_303(iVar0, 127, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_303(iVar0, 127, iVar1 / 10);
	}
}

void func_332()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_120();
	iVar1 = func_330(iVar0);
	if (iVar1 > 10000)
	{
		func_303(iVar0, 126, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_303(iVar0, 126, iVar1 / 10);
	}
}

void func_333()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_120();
	iVar1 = func_330(iVar0);
	if (iVar1 > 10000)
	{
		func_303(iVar0, 125, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_303(iVar0, 125, iVar1 / 10);
	}
}

void func_334()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_120();
	iVar1 = func_330(iVar0);
	if (iVar1 > 10000)
	{
		func_303(iVar0, 124, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_303(iVar0, 124, iVar1 / 10);
	}
}

bool func_335(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	clear_bit(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_336(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
			Global_2970 = iParam0;
			set_bit(&Global_2283, true);
			set_bit(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_336(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, int iParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_127();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (is_player_playing(player_id()))
		{
			if (is_ped_swimming_under_water(player_ped_id()))
			{
				return false;
			}
		}
		if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
	}
	if (func_346() == 0)
	{
		func_344();
		return false;
	}
	func_343(Global_16779);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/]), sParam1, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_25 = iParam7;
	Global_101154.f_12831[Global_16779 /*104*/].f_26 = uParam8;
	Global_101154.f_12831[Global_16779 /*104*/].f_29 = uParam9;
	Global_101154.f_12831[Global_16779 /*104*/].f_30 = uParam12;
	Global_101154.f_12831[Global_16779 /*104*/].f_31 = uParam11;
	Global_101154.f_12831[Global_16779 /*104*/].f_28 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), sParam15, 64);
	if (is_bit_set(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_342(0);
		func_342(2);
		func_342(1);
	}
	else
	{
		func_127();
		switch (iParam16)
		{
			case 3:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_342(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_342(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_342(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_342(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (is_bit_set(Global_2283, 10))
		{
			Global_101154.f_12741[0 /*20*/].f_17 = 1;
			Global_101154.f_12741[1 /*20*/].f_17 = 1;
			Global_101154.f_12741[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101154.f_12741[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101154.f_12741[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101154.f_12741[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101154.f_12741[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (iParam10)
	{
		func_127();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_341())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_340(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_337(1);
			func_340(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_337(int iParam0)
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
		if (func_280(14))
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
								if (is_bit_set(Global_2284, 3))
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
								func_339(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_338(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_338(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_338(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_338(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_338(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_339(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(Global_2289);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2)
							{
								if (is_bit_set(Global_2284, 6))
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
								func_339(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar6);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3)
							{
								if (is_bit_set(Global_2284, 3))
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
								func_339(&(Global_2290[iVar1 /*15*/]));
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
								func_339(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && is_bit_set(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_339(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_338(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_338(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_338(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_339(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_339(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_339(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_339(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_339(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_339(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_340(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

var func_341()
{
	return Global_1315913;
}

void func_342(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_343(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = get_clock_hours();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_101154.f_12831[uParam0 /*104*/].f_18 = iVar0;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_1 = iVar1;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_2 = iVar2;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_3 = iVar3;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_344()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_345(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_345(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

bool func_346()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return true;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0 || Global_101154.f_12831[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_345(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return false;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 0;
	return true;
}

bool func_347(int iParam0, int iParam1, int iParam2, var uParam3)
{
	char[16] cVar0;
	struct<4>[] Var4 = new struct<4>[2];
	int iVar13;
	
	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		StringCopy(&cVar0, "FTX_", 16);
		StringConCat(&cVar0, func_134(iParam0), 16);
		StringConCat(&cVar0, "_", 16);
		switch (iParam1)
		{
			case 0:
				StringConCat(&cVar0, "LOST", 16);
				break;
			
			case 1:
				StringConCat(&cVar0, "LATE", 16);
				break;
			
			case 2:
				StringConCat(&cVar0, "HOSP", 16);
				break;
			
			case 3:
				StringConCat(&cVar0, "PDIED", 16);
				break;
			
			case 4:
				StringConCat(&cVar0, "PBUST", 16);
				break;
			
			default:
				StringConCat(&cVar0, "X", 16);
				StringIntConCat(&cVar0, iParam1, 16);
				*uParam3 = {cVar0};
				return false;
				break;
		}
		Var4[0 /*4*/] = {cVar0};
		StringConCat(&(Var4[0 /*4*/]), "a", 16);
		Var4[1 /*4*/] = {cVar0};
		StringConCat(&(Var4[1 /*4*/]), "b", 16);
		if (iParam2 == -1)
		{
			iVar13 = func_42(iParam0);
			if (func_348(&(Var4[0 /*4*/]), iVar13))
			{
				iParam2 = 1;
			}
			else if (func_348(&(Var4[1 /*4*/]), iVar13))
			{
				iParam2 = 0;
			}
			else
			{
				iParam2 = get_random_int_in_range(false, 2);
			}
		}
		*uParam3 = {Var4[iParam2 /*4*/]};
		return true;
	}
	return false;
}

bool func_348(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam1 > 3)
	{
		return false;
	}
	while (iVar0 < 35)
	{
		if (!is_string_null(&(Global_101154.f_12831[iVar0 /*104*/])))
		{
			if (are_strings_equal(&(Global_101154.f_12831[iVar0 /*104*/]), sParam0))
			{
				if (Global_101154.f_12831[iVar0 /*104*/].f_99[iParam1])
				{
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		return true;
	}
	return false;
}

bool func_349(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_3(0))
	{
		return false;
	}
	if (iParam6 < 0)
	{
		return false;
	}
	if (iParam7 < 0)
	{
		return false;
	}
	if (iParam8 == 76)
	{
		return false;
	}
	if (iParam9 == 235)
	{
		return false;
	}
	if (iParam5 < 3)
	{
		if (is_bit_set(iParam4, iParam5))
		{
			return false;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return false;
	}
	if (Global_101154.f_6378.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_351(iParam3);
		Var0.f_4 = get_game_timer() + iParam6;
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		clear_bit(&(Var0.f_1), false);
		Global_101154.f_6378.f_651[Global_101154.f_6378.f_764 /*14*/] = {Var0};
		Global_101154.f_6378.f_764++;
		func_350(0);
		func_350(1);
		func_350(2);
		return true;
	}
	return false;
}

void func_350(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_63(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_136)
	{
		if (is_bit_set(Global_101154.f_6378[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_101154.f_6378[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_101154.f_6378[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101154.f_6378.f_764)
	{
		if (is_bit_set(Global_101154.f_6378.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_101154.f_6378.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101154.f_6378.f_919[iParam0] = iVar1;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_352(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	struct<4>[] Var0 = new struct<4>[2];
	int iVar9;
	
	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		switch (iParam0)
		{
			case 0:
				*uParam3 = 61;
				break;
			
			case 1:
				*uParam3 = 62;
				break;
			
			case 2:
				*uParam3 = 63;
				break;
			
			case 3:
				*uParam3 = 64;
				break;
			
			case 4:
				*uParam3 = 65;
				break;
			
			case 5:
				*uParam3 = 66;
				break;
		}
		if (iParam2 == -1)
		{
			if (func_347(iParam0, iParam1, 0, &(Var0[0 /*4*/])) && func_347(iParam0, iParam1, 1, &(Var0[1 /*4*/])))
			{
				iVar9 = func_42(iParam0);
				if (func_348(&(Var0[0 /*4*/]), iVar9))
				{
					iParam2 = 1;
				}
				else if (func_348(&(Var0[1 /*4*/]), iVar9))
				{
					iParam2 = 0;
				}
				else
				{
					iParam2 = get_random_int_in_range(false, 2);
				}
			}
			else
			{
				iParam2 = get_random_int_in_range(false, 2);
			}
		}
		*uParam4 = func_353(iParam1, iParam2);
		return true;
	}
	return false;
}

int func_353(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == 1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam1 == 0)
				{
					return 67;
				}
				else
				{
					return 68;
				}
				break;
			
			case 1:
				if (iParam1 == 0)
				{
					return 69;
				}
				else
				{
					return 70;
				}
				break;
			
			case 2:
				if (iParam1 == 0)
				{
					return 71;
				}
				else
				{
					return 72;
				}
				break;
			
			case 3:
				if (iParam1 == 0)
				{
					return 73;
				}
				else
				{
					return 74;
				}
				break;
			
			case 4:
				if (iParam1 == 0)
				{
					return 75;
				}
				else
				{
					return 76;
				}
				break;
			}
	}
	return 75;
}

int func_354(int iParam0)
{
	switch (iParam0)
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

int func_355(int iParam0)
{
	if (iParam0 == 0)
	{
		return 2091854273;
	}
	else if (iParam0 == 1)
	{
		return 328868333;
	}
	else if (iParam0 == 2)
	{
		return -1813399915;
	}
	else if (iParam0 == 3)
	{
		return 465306446;
	}
	else if (iParam0 == 4)
	{
		return -816460512;
	}
	else if (iParam0 == 5)
	{
		return -702667427;
	}
	return -1;
}

int func_356(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (func_63(iParam0))
	{
		uVar0 = func_357(iParam0);
		return Global_89089[uVar0];
	}
	else
	{
		iVar1 = func_64(iParam0);
		if (iVar1 != 7)
		{
			iVar2 = iVar1 - 3;
			if (iVar2 < 3)
			{
				return Global_87445[iVar2];
			}
		}
	}
	return 0;
}

int func_357(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

bool func_358(var uParam0, float fParam1)
{
	if (func_361(uParam0))
	{
		if (func_359(uParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

float func_359(var uParam0)
{
	if (func_361(uParam0))
	{
		if (func_360(uParam0))
		{
			return *uParam0.f_2;
		}
		else
		{
			return func_10(is_bit_set(*uParam0, 4)) - *uParam0.f_1;
		}
	}
	return *uParam0.f_1;
}

int func_360(var uParam0)
{
	return is_bit_set(*uParam0, 2);
}

int func_361(var uParam0)
{
	return is_bit_set(*uParam0, true);
}

void func_362()
{
	var uVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	
	if (Local_79.f_670 > 0)
	{
		if (!is_help_message_being_displayed())
		{
			uVar0 = Local_79.f_654[0 /*3*/];
			iVar1 = func_64(Local_79.f_654[0 /*3*/]);
			if (iVar1 < 6)
			{
				Var2 = {Global_101154.f_32575[uVar0 /*29*/].f_3};
				switch (Local_79.f_654[0 /*3*/].f_1)
				{
					case 0:
						if (iVar1 != 5)
						{
							func_364("FR_X_INJ_1m", &Var2, -1);
						}
						else
						{
							func_364("FR_X_INJ_1f", &Var2, -1);
						}
						if (Local_79.f_654[0 /*3*/].f_2 != 0)
						{
							func_363(Local_79.f_654[0 /*3*/], 2, 1092616192, Local_79.f_654[0 /*3*/].f_2);
						}
						break;
					
					case 3:
						if (iVar1 != 5)
						{
							func_364("FR_X_FLEE_1m", &Var2, -1);
						}
						else
						{
							func_364("FR_X_FLEE_1f", &Var2, -1);
						}
						break;
					
					case 4:
						if (iVar1 != 5)
						{
							func_364("FR_X_ATAC_1m", &Var2, -1);
						}
						else
						{
							func_364("FR_X_ATAC_1f", &Var2, -1);
						}
						break;
					
					case 1:
						if (iVar1 != 5)
						{
							func_364("FR_X_LOST_1m", &Var2, -1);
						}
						else
						{
							func_364("FR_X_LOST_1f", &Var2, -1);
						}
						func_363(Local_79.f_654[0 /*3*/], 0, 1092616192, Local_79.f_654[0 /*3*/].f_2);
						break;
					
					case 2:
						func_364("FR_X_LATE", &Var2, -1);
						func_363(Local_79.f_654[0 /*3*/], 1, 1092616192, Local_79.f_654[0 /*3*/].f_2);
						break;
				}
			}
			Local_79.f_670--;
			iVar6 = 0;
			while (iVar6 < Local_79.f_670)
			{
				Local_79.f_654[iVar6 /*3*/] = {Local_79.f_654[iVar6 + 1 /*3*/]};
				iVar6++;
			}
		}
	}
}

int func_363(int iParam0, int iParam1, float fParam2, var uParam3)
{
	int iVar0;
	
	if (iParam0 >= 145)
	{
	}
	else if (iParam1 >= 5)
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_79.f_671[iVar0 /*6*/].f_1 == 6)
			{
				Local_79.f_671[iVar0 /*6*/] = iParam0;
				Local_79.f_671[iVar0 /*6*/].f_1 = iParam1;
				Local_79.f_671[iVar0 /*6*/].f_2 = uParam3;
				func_9(&(Local_79.f_671[iVar0 /*6*/].f_3), -fParam2);
				Local_79.f_702++;
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

void func_364(char* sParam0, char* sParam1, int iParam2)
{
	_set_text_component_format(sParam0);
	_add_text_component_item_string(sParam1);
	_display_help_text_from_string_label(0, 0, true, iParam2);
}

void func_365()
{
	if (func_369() != Local_79.f_56.f_7)
	{
		func_368(Local_79.f_56.f_7);
	}
	if (func_367() != Local_79.f_109.f_7)
	{
		func_366(Local_79.f_109.f_7);
	}
}

void func_366(int iParam0)
{
	Global_87444 = iParam0;
}

var func_367()
{
	return Global_87444;
}

void func_368(int iParam0)
{
	Global_87443 = iParam0;
}

var func_369()
{
	return Global_87443;
}

void func_370(var uParam0, var uParam1)
{
	char* sVar0;
	char* sVar4;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar8 = func_120();
	switch (*uParam0)
	{
		case 20:
			if (*uParam0.f_3 != 20)
			{
				func_438(uParam0, *uParam0.f_3, 145, 69);
			}
			break;
		
		case 0:
			if (*uParam0.f_2 == 0)
			{
				if (!func_437(uParam1))
				{
					func_436(uParam1, 0);
				}
				else
				{
					*uParam0.f_32 = func_432(0);
					if (func_132(iVar8, *uParam0.f_32, func_431(), &sVar0, &sVar4))
					{
						func_430(uParam1, &sVar0, &sVar4);
					}
					*uParam0.f_2++;
				}
			}
			else if (*uParam0.f_2 == 1)
			{
				if (func_437(uParam1))
				{
					func_438(uParam0, 1, 145, 69);
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			if (*uParam0.f_2 == 0)
			{
				if (func_358(uParam0.f_4, 20f))
				{
					*uParam0.f_2++;
				}
				else if (func_437(uParam1))
				{
					*uParam0.f_32 = func_432(0);
					if (func_132(iVar8, *uParam0.f_32, func_429(), &sVar0, &sVar4))
					{
						func_430(uParam1, &sVar0, &sVar4);
					}
					*uParam0.f_2++;
				}
			}
			else if (*uParam0.f_2 == 1)
			{
				if (func_437(uParam1))
				{
					func_428(uParam0);
				}
			}
			break;
		
		case 3:
			if (*uParam0.f_32 == 145)
			{
				func_428(uParam0);
			}
			else if (*uParam0.f_2 == 0)
			{
				if (func_437(uParam1))
				{
					if (func_132(iVar8, *uParam0.f_32, *uParam0.f_33, &sVar0, &sVar4))
					{
						func_430(uParam1, &sVar0, &sVar4);
					}
					*uParam0.f_2++;
				}
			}
			else if (*uParam0.f_2 == 1)
			{
				if (func_437(uParam1))
				{
					func_428(uParam0);
				}
			}
			break;
		
		case 4:
			if (is_ped_injured(player_ped_id()) || !func_427())
			{
				func_428(uParam0);
			}
			else
			{
				func_426(uParam1, 1);
			}
			break;
		
		case 5:
			if (*uParam0.f_2 == 0)
			{
				if (!func_437(uParam1))
				{
					func_436(uParam1, 1);
				}
				func_428(uParam0);
			}
			break;
		
		case 6:
			if (*uParam0.f_2 == 0)
			{
				func_436(uParam1, 0);
				if (func_358(uParam0.f_7, -100f))
				{
					func_9(uParam0.f_7, -100f);
				}
				*uParam0.f_2++;
			}
			else if (*uParam0.f_2 == 1)
			{
				if (func_358(uParam0.f_4, 60f))
				{
					*uParam0.f_2++;
				}
				else if (func_358(uParam0.f_4, 3f))
				{
					if (func_425(1))
					{
						if (func_437(uParam1))
						{
							if ((iVar8 == 2 && Local_79.f_56.f_1 == 19) && func_413(2, 19, 1, 2, func_422(), &sVar0, &sVar4, 1))
							{
								func_430(uParam1, &sVar0, &sVar4);
								*uParam0.f_2++;
							}
							else if (func_413(iVar8, Local_79.f_56.f_1, Local_79.f_109.f_1, 2, func_422(), &sVar0, &sVar4, 1))
							{
								func_430(uParam1, &sVar0, &sVar4);
								*uParam0.f_2++;
							}
							else
							{
								*uParam0.f_32 = func_432(0);
								if (*uParam0.f_32 == 145 || !func_132(iVar8, *uParam0.f_32, 39, &sVar0, &sVar4))
								{
									*uParam0.f_2++;
								}
								else
								{
									func_430(uParam1, &sVar0, &sVar4);
									*uParam0.f_2++;
								}
							}
						}
					}
				}
			}
			else if (*uParam0.f_2 == 2)
			{
				if (func_437(uParam1))
				{
					func_428(uParam0);
				}
			}
			break;
		
		case 7:
			if (!is_bit_set(Global_87462, 3))
			{
				if (is_ped_injured(player_ped_id()) || !func_427())
				{
					func_428(uParam0);
				}
			}
			else
			{
				func_426(uParam1, 1);
				if (func_358(uParam0.f_4, 0f))
				{
					if (!func_412(uParam1))
					{
						iVar9 = false;
						if (func_411())
						{
							if (func_410(&(Local_79.f_56)))
							{
								iVar9 = Local_79.f_56.f_7;
							}
						}
						else if (func_410(&(Local_79.f_109)))
						{
							iVar9 = Local_79.f_109.f_7;
						}
						if (!is_ped_injured(iVar9) && !is_any_speech_playing(iVar9))
						{
							func_408(iVar9, "ROBBERY_FRIEND_WITNESS", 3);
							if (is_any_speech_playing(iVar9))
							{
								func_9(uParam0.f_4, -5f);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (*uParam0.f_32 == 145)
			{
				func_428(uParam0);
			}
			else if (*uParam0.f_2 == 0)
			{
				if (!func_437(uParam1))
				{
					func_436(uParam1, 0);
				}
				else
				{
					if (func_132(iVar8, *uParam0.f_32, func_403(*uParam0.f_32, &iVar10), &sVar0, &sVar4))
					{
						func_430(uParam1, &sVar0, &sVar4);
					}
					if (iVar10)
					{
						func_400(iVar8, *uParam0.f_32, 3);
					}
					func_8(uParam0.f_4);
					*uParam0.f_2++;
				}
			}
			else if (*uParam0.f_2 == 1)
			{
				if (func_437(uParam1))
				{
					*uParam0.f_2++;
				}
			}
			else if (*uParam0.f_2 == 2)
			{
				if (func_358(uParam0.f_4, 20f) || is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					*uParam0.f_2++;
				}
			}
			else if (*uParam0.f_2 == 3)
			{
				if (func_358(uParam0.f_4, 30f) || !is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					*uParam0.f_2++;
				}
				else if (is_ped_in_vehicle(func_356(*uParam0.f_32), get_vehicle_ped_is_in(player_ped_id(), 0), 0))
				{
					if (func_437(uParam1))
					{
						if (func_132(iVar8, *uParam0.f_32, func_399(*uParam0.f_32), &sVar0, &sVar4))
						{
							func_430(uParam1, &sVar0, &sVar4);
						}
						*uParam0.f_2++;
					}
				}
			}
			else if (*uParam0.f_2 == 4)
			{
				if (func_437(uParam1))
				{
					func_428(uParam0);
				}
			}
			break;
		
		case 9:
			func_428(uParam0);
			break;
		
		case 10:
			if (*uParam0.f_2 == 0)
			{
				if (func_398(Global_87438) != 4)
				{
					func_436(uParam1, 0);
					*uParam0.f_2++;
				}
				else
				{
					*uParam0.f_2 = 2;
				}
			}
			else if (*uParam0.f_2 == 1)
			{
				if (func_358(uParam0.f_4, 30f))
				{
					*uParam0.f_2++;
				}
				else if (func_358(uParam0.f_4, 0.5f))
				{
					if (func_437(uParam1))
					{
						if (((Global_87438 < 22 && Global_87347[Global_87438 /*2*/].f_1 == 1) && Local_79.f_3.f_1 == 0) && Local_79.f_56.f_1 == 17)
						{
							if (!is_ped_injured(Local_79.f_56.f_7))
							{
								if (Global_87439 == 0)
								{
									func_408(Local_79.f_56.f_7, "FAC_LEAVE_TENNIS_WON", 3);
								}
								else if (Global_87439 == 3)
								{
									func_408(Local_79.f_56.f_7, "FAC_LEAVE_TENNIS_LOST", 3);
								}
								else if (Global_87439 == 2)
								{
									func_408(Local_79.f_56.f_7, "FAC_LEAVE_TENNIS_QUIT", 3);
								}
							}
							*uParam0.f_2++;
						}
						else if (Global_87438 == 12)
						{
							*uParam0.f_32 = func_432(1);
							if (*uParam0.f_32 != 145)
							{
								if (func_397(iVar8, *uParam0.f_32, Global_87438, Global_87439, func_274(player_ped_id()), &sVar0, &sVar4))
								{
									func_430(uParam1, &sVar0, &sVar4);
								}
								*uParam0.f_2++;
							}
						}
						else
						{
							*uParam0.f_32 = func_432(0);
							if (func_397(iVar8, *uParam0.f_32, Global_87438, Global_87439, func_274(player_ped_id()), &sVar0, &sVar4))
							{
								func_430(uParam1, &sVar0, &sVar4);
							}
							*uParam0.f_2++;
						}
					}
				}
			}
			else if (*uParam0.f_2 == 2)
			{
				if (((Global_87438 < 22 && Global_87347[Global_87438 /*2*/].f_1 == 1) && Local_79.f_3.f_1 == 0) && Local_79.f_56.f_1 == 17)
				{
					if (is_ped_injured(Local_79.f_56.f_7) || !is_any_speech_playing(Local_79.f_56.f_7))
					{
						func_8(uParam0.f_4);
						*uParam0.f_2++;
					}
				}
				else if (func_437(uParam1))
				{
					func_8(uParam0.f_4);
					*uParam0.f_2++;
				}
			}
			else if (*uParam0.f_2 == 3)
			{
				if (func_358(uParam0.f_4, 1.5f))
				{
					if (func_395(1))
					{
						if (func_437(uParam1))
						{
							*uParam0.f_32 = func_432(0);
							if (func_132(iVar8, *uParam0.f_32, func_394(), &sVar0, &sVar4))
							{
								func_430(uParam1, &sVar0, &sVar4);
							}
							*uParam0.f_2++;
						}
					}
				}
			}
			else if (*uParam0.f_2 == 4)
			{
				if (func_437(uParam1))
				{
					func_428(uParam0);
				}
			}
			break;
		
		case 11:
			if (*uParam0.f_32 == 145)
			{
				func_428(uParam0);
			}
			else if (*uParam0.f_2 == 0)
			{
				func_426(uParam1, 0);
				iVar11 = func_356(*uParam0.f_32);
				if (is_ped_injured(iVar11) || !is_ped_ragdoll(iVar11))
				{
					if (func_437(uParam1))
					{
						if (func_132(iVar8, *uParam0.f_32, *uParam0.f_33, &sVar0, &sVar4))
						{
							func_430(uParam1, &sVar0, &sVar4);
						}
						*uParam0.f_2++;
					}
				}
			}
			else if (*uParam0.f_2 == 1)
			{
				if (func_437(uParam1))
				{
					func_428(uParam0);
				}
			}
			break;
		
		case 12:
			if (is_ped_injured(player_ped_id()) || !is_player_wanted_level_greater(player_id(), 0))
			{
				func_428(uParam0);
			}
			else
			{
				func_426(uParam1, 1);
				if (*uParam0.f_2 == 0)
				{
					if (!func_412(uParam1))
					{
						iVar12 = false;
						if (func_411())
						{
							if (func_410(&(Local_79.f_56)))
							{
								iVar12 = Local_79.f_56.f_7;
							}
						}
						else if (func_410(&(Local_79.f_109)))
						{
							iVar12 = Local_79.f_109.f_7;
						}
						if (!is_ped_injured(iVar12) && !is_any_speech_playing(iVar12))
						{
							func_408(iVar12, "GET_WANTED_LEVEL", 3);
							if (is_any_speech_playing(iVar12))
							{
								*uParam0.f_2++;
							}
						}
					}
				}
			}
			break;
		
		case 13:
			if (func_437(uParam1))
			{
				func_8(uParam0.f_10);
				func_393(uParam0);
				func_428(uParam0);
			}
			else if (((*uParam0.f_28[0] != 145 && !func_392(*uParam0.f_28[0])) || (*uParam0.f_28[1] != 145 && !func_392(*uParam0.f_28[1]))) || (*uParam0.f_28[2] != 145 && !func_392(*uParam0.f_28[2])))
			{
				func_436(uParam1, 0);
				func_8(uParam0.f_10);
				func_428(uParam0);
			}
			else
			{
				func_389(uParam0, uParam1);
			}
			break;
		
		case 14:
			if (*uParam0.f_32 == 145)
			{
				func_428(uParam0);
			}
			else if (*uParam0.f_2 == 0)
			{
				func_426(uParam1, 1);
				if (func_437(uParam1))
				{
					if (func_132(iVar8, *uParam0.f_32, *uParam0.f_33, &sVar0, &sVar4))
					{
						func_430(uParam1, &sVar0, &sVar4);
					}
					*uParam0.f_2++;
				}
			}
			else if (*uParam0.f_2 == 1)
			{
				if (func_437(uParam1))
				{
					func_428(uParam0);
				}
			}
			break;
		
		case 15:
			if (func_437(uParam1))
			{
				func_428(uParam0);
			}
			break;
		
		case 16:
			if (*uParam0.f_2 == 0)
			{
				if (*uParam0.f_13 == 0)
				{
					if (func_425(0))
					{
						if (func_358(uParam0.f_4, 5f))
						{
							if (func_437(uParam1))
							{
								*uParam0.f_32 = func_432(0);
								if (func_413(iVar8, *uParam0.f_32, 145, 1, func_422(), &sVar0, &sVar4, 1))
								{
									func_430(uParam1, &sVar0, &sVar4);
									*uParam0.f_13 = 1;
									*uParam0.f_2++;
								}
							}
						}
					}
				}
			}
			else if (*uParam0.f_2 == 1)
			{
				if (func_437(uParam1))
				{
					*uParam0.f_2 = 0;
				}
			}
			break;
		
		case 17:
			if (func_143(player_ped_id()) && !func_274(player_ped_id()))
			{
				if (func_437(uParam1))
				{
					if (func_388(uParam0, 120000))
					{
						if (!func_358(uParam0.f_4, 15f))
						{
							if (func_358(uParam0.f_4, 1.5f) && func_425(0))
							{
								if (func_438(uParam0, 13, 145, 69))
								{
									func_387(uParam1, uParam0.f_15, uParam0.f_19, uParam0.f_23);
									func_386(uParam0, *uParam0.f_28[0], *uParam0.f_28[1], *uParam0.f_28[2]);
									func_9(uParam0.f_7, func_385(uParam0));
									func_393(uParam0);
								}
							}
						}
						else
						{
							func_393(uParam0);
						}
					}
					else
					{
						if (*uParam0.f_14 == 0)
						{
							if (func_358(uParam0.f_4, 5f) && func_358(uParam0.f_7, 0f))
							{
								if (func_425(0))
								{
									if (func_413(iVar8, Local_79.f_56.f_1, Local_79.f_109.f_1, 0, func_422(), &sVar0, &sVar4, 1) && func_438(uParam0, 13, 145, 69))
									{
										func_430(uParam1, &sVar0, &sVar4);
										func_386(uParam0, iVar8, Local_79.f_56.f_1, Local_79.f_109.f_1);
										func_9(uParam0.f_7, func_385(uParam0));
										*uParam0.f_14++;
									}
								}
							}
						}
						else if (*uParam0.f_14 < 3)
						{
							if (func_358(uParam0.f_4, 5f) && func_358(uParam0.f_7, 0f))
							{
								if (func_425(0))
								{
									if (func_413(iVar8, Local_79.f_56.f_1, Local_79.f_109.f_1, 1, func_422(), &sVar0, &sVar4, 1) && func_438(uParam0, 13, 145, 69))
									{
										func_430(uParam1, &sVar0, &sVar4);
										func_386(uParam0, iVar8, Local_79.f_56.f_1, Local_79.f_109.f_1);
										func_9(uParam0.f_7, func_385(uParam0));
										*uParam0.f_14++;
									}
								}
							}
						}
						if (func_358(uParam0.f_4, 3f))
						{
							if (func_395(1))
							{
								if (func_384(iVar8) != Local_79.f_624)
								{
									iVar13 = func_432(1);
									if (iVar13 != 145)
									{
										func_438(uParam0, 14, iVar13, 55);
									}
								}
								else if (func_383(iVar8) != Local_79.f_622)
								{
									iVar13 = func_432(1);
									if (iVar13 != 145)
									{
										func_438(uParam0, 14, iVar13, 53);
									}
								}
								else if (func_382(iVar8) != Local_79.f_623)
								{
									iVar13 = func_432(1);
									if (iVar13 != 145)
									{
										func_438(uParam0, 14, iVar13, 54);
									}
								}
								else if (func_358(uParam0.f_4, 10f))
								{
									if (*uParam0.f_14 > 0)
									{
										if (!func_361(uParam0.f_10) || func_358(uParam0.f_10, 20f))
										{
											iVar14 = Local_79.f_642;
											if (func_378(iVar14) || func_376(Local_79.f_3.f_1, Local_79.f_56.f_1, &iVar14))
											{
												iVar13 = func_432(0);
												if (iVar13 != 145 && iVar14 < 22)
												{
													if (func_375(iVar8, iVar13, iVar14, &sVar0, &sVar4) && func_438(uParam0, 15, 145, 69))
													{
														func_373(Local_79.f_3.f_1, Local_79.f_56.f_1, iVar14);
														func_430(uParam1, &sVar0, &sVar4);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 18:
			break;
		
		default:
			break;
	}
	if (*uParam0 != 12)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_player_wanted_level_greater(player_id(), 0))
			{
				func_438(uParam0, 12, 145, 69);
			}
		}
	}
	if (*uParam0 != 7)
	{
		if (is_bit_set(Global_87462, 3))
		{
			func_438(uParam0, 7, 145, 69);
		}
	}
	if (*uParam0 != 4)
	{
		if (!is_ped_injured(player_ped_id()) && func_427())
		{
			func_438(uParam0, 4, 145, 69);
		}
	}
	if ((((((*uParam0 != 16 && *uParam0 != 17) && *uParam0 != 8) && *uParam0 != 9) && *uParam0 != 10) && *uParam0 != 4) && *uParam0 != 20)
	{
		Local_79.f_623 = func_382(iVar8);
		Local_79.f_622 = func_383(iVar8);
		Local_79.f_624 = func_384(iVar8);
	}
	func_371(uParam1);
}

void func_371(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
			if (!func_139())
			{
				if (func_122(&(Local_79.f_259), uParam0.f_1, uParam0.f_5, 3, 0, 0, 0))
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			if (!func_139())
			{
				if (func_372(&(Local_79.f_259), uParam0.f_1, uParam0.f_5, uParam0.f_9, 3, 0, 0))
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 3:
			if (!func_139())
			{
				*uParam0 = 0;
			}
			break;
	}
}

int func_372(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_131(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 1;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_123(sParam2, iParam4, 0);
}

void func_373(int iParam0, int iParam1, int iParam2)
{
	func_374(&(Local_79.f_634), Global_87347[iParam2 /*2*/].f_1);
	if (iParam1 == 14)
	{
		if (iParam2 < 22 && Global_87347[iParam2 /*2*/].f_1 == 5)
		{
			if (iParam0 == 0)
			{
				set_bit(&(Global_101154.f_16793.f_410), 5);
			}
			else if (iParam0 == 2)
			{
				set_bit(&(Global_101154.f_16793.f_410), 4);
			}
		}
	}
}

void func_374(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		set_bit(iParam0, iParam1);
	}
	else if (iParam1 < 64)
	{
		set_bit(iParam0.f_1, iParam1 - 32);
	}
}

bool func_375(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_64(iParam0);
	iVar1 = func_64(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return false;
	}
	*sParam4 = {func_133(iVar0, iVar1, 7, 1)};
	*sParam3 = {*sParam4};
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_Sg", 16);
	switch (Global_87347[iParam2 /*2*/].f_1)
	{
		case 4:
			StringConCat(sParam4, "Cin", 16);
			break;
		
		case 0:
			StringConCat(sParam4, "Glf", 16);
			break;
		
		case 2:
			StringConCat(sParam4, "Str", 16);
			break;
		
		case 1:
			StringConCat(sParam4, "Tns", 16);
			break;
		
		case 3:
			StringConCat(sParam4, "Drt", 16);
			break;
		
		case 5:
			StringConCat(sParam4, "Bar", 16);
			break;
		
		default:
			StringConCat(sParam4, "BAD", 16);
			return false;
			break;
	}
	return true;
}

bool func_376(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 14)
	{
		if ((iParam0 == 0 && !is_bit_set(Global_101154.f_16793.f_410, 5)) || (iParam0 == 2 && !is_bit_set(Global_101154.f_16793.f_410, 4)))
		{
			if (!func_377(&(Local_79.f_634), 5))
			{
				if (!is_ped_injured(player_ped_id()))
				{
					iVar0 = 23;
					fVar1 = 100000f * 100000f;
					iVar2 = 0;
					while (iVar2 < 22)
					{
						if (Global_87347[iVar2 /*2*/].f_1 == 5)
						{
							fVar3 = vdist2(get_entity_coords(player_ped_id(), 1), func_32(Global_87347[iVar2 /*2*/], 0));
							if (fVar1 > fVar3)
							{
								fVar1 = fVar3;
								iVar0 = iVar2;
							}
						}
						iVar2++;
					}
					if (iVar0 != 23 && fVar1 < 400f * 400f)
					{
						*uParam2 = iVar0;
						return true;
					}
				}
			}
		}
	}
	*uParam2 = 23;
	return false;
}

int func_377(var uParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return is_bit_set(*uParam0, iParam1);
	}
	if (iParam1 < 64)
	{
		return is_bit_set(*uParam0.f_1, iParam1 - 32);
	}
	return false;
}

bool func_378(var uParam0)
{
	int iVar0;
	
	if (Local_79.f_642 < 22 && Local_79.f_642 != 16)
	{
		iVar0 = Global_87347[uParam0 /*2*/].f_1;
		if (func_377(&(Local_79.f_631), iVar0) && !func_377(&(Local_79.f_634), iVar0))
		{
			if (func_380(player_ped_id(), func_381(uParam0), 175f) && func_379(player_ped_id(), func_381(uParam0), 75f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_379(int iParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	
	vVar0 = {get_entity_coords(iParam0, 1)};
	vVar0.x -= vParam1.x;
	vVar0.y -= vParam1.y;
	vVar0.z -= vParam1.z;
	return vVar0.x * vVar0.x + vVar0.y * vVar0.y + vVar0.z * vVar0.z > fParam4 * fParam4;
}

int func_380(int iParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	
	vVar0 = {get_entity_coords(iParam0, 1)};
	vVar0.x -= vParam1.x;
	vVar0.y -= vParam1.y;
	vVar0.z -= vParam1.z;
	return vVar0.x * vVar0.x + vVar0.y * vVar0.y + vVar0.z * vVar0.z <= fParam4 * fParam4;
}

Vector3 func_381(var uParam0)
{
	return func_32(Global_87347[uParam0 /*2*/], 0);
}

int func_382(int iParam0)
{
	if (func_63(iParam0))
	{
		return Global_101154.f_1826.f_539.f_1564[iParam0];
	}
	return -15;
}

int func_383(int iParam0)
{
	if (func_63(iParam0))
	{
		return Global_101154.f_1826.f_539.f_1568[iParam0];
	}
	return -1;
}

int func_384(int iParam0)
{
	if (func_63(iParam0))
	{
		return Global_101154.f_1826.f_539.f_1572[iParam0];
	}
	return -1;
}

var func_385(var uParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 2f + to_float(*uParam0.f_14) * 1.5f;
	fVar1 = 3f + to_float(*uParam0.f_14) * 1.5f;
	return get_random_float_in_range(fVar1 * -60f, fVar0 * -60f);
}

void func_386(var uParam0, int iParam1, var uParam2, var uParam3)
{
	*uParam0.f_28[0] = iParam1;
	*uParam0.f_28[1] = uParam2;
	*uParam0.f_28[2] = uParam3;
}

void func_387(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (*uParam0 == 0)
	{
		if (!func_139())
		{
			*uParam0 = 2;
			*uParam0.f_1 = {*uParam1};
			*uParam0.f_5 = {*uParam2};
			*uParam0.f_9 = {*uParam3};
		}
	}
}

bool func_388(var uParam0, int iParam1)
{
	if (iParam1 < 0 || get_game_timer() - *uParam0.f_27 < iParam1)
	{
		if (((((!is_string_null_or_empty(uParam0.f_15) && !are_strings_equal(uParam0.f_15, "NULL")) && !is_string_null_or_empty(uParam0.f_19)) && !are_strings_equal(uParam0.f_19, "NULL")) && !is_string_null_or_empty(uParam0.f_23)) && !are_strings_equal(uParam0.f_23, "NULL"))
		{
			return true;
		}
	}
	return false;
}

void func_389(var uParam0, var uParam1)
{
	if (func_390(uParam1, uParam0.f_15, uParam0.f_19, uParam0.f_23))
	{
		*uParam0.f_27 = get_game_timer();
	}
	else
	{
		StringCopy(uParam0.f_15, "", 16);
		StringCopy(uParam0.f_19, "", 16);
		StringCopy(uParam0.f_23, "", 16);
	}
}

bool func_390(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (*uParam0 == 3)
	{
		if (is_scripted_conversation_ongoing())
		{
			*uParam1 = {*uParam0.f_1};
			*uParam2 = {*uParam0.f_5};
			MemCopy(uParam3, {func_391()}, 4);
			return true;
		}
	}
	return false;
}

struct<6> func_391()
{
	char[24] cVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = get_current_scripted_conversation_line();
		iVar6 += Global_16722;
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (does_text_label_exist(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (does_text_label_exist(&(Global_14580[iVar8 /*6*/])))
					{
						return Global_14580[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return cVar0;
			}
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return cVar0;
		}
	}
	return cVar0;
}

bool func_392(int iParam0)
{
	if (iParam0 == func_120())
	{
		return true;
	}
	else
	{
		if (Local_79.f_56.f_1 == iParam0)
		{
			if (Local_79.f_56 == 2)
			{
				return true;
			}
		}
		if (Local_79.f_109.f_1 == iParam0)
		{
			if (Local_79.f_109 == 2)
			{
				return true;
			}
		}
	}
	return false;
}

void func_393(var uParam0)
{
	StringCopy(uParam0.f_15, "", 16);
	StringCopy(uParam0.f_19, "", 16);
	StringCopy(uParam0.f_23, "", 16);
}

int func_394()
{
	if (Local_79.f_640 == 1)
	{
		return 40;
	}
	else if (Local_79.f_641)
	{
		return 41;
	}
	return 69;
}

bool func_395(int iParam0)
{
	vector3 vVar0;
	
	if (is_ped_injured(player_ped_id()))
	{
		return false;
	}
	else if (iParam0 && is_message_being_displayed())
	{
		return false;
	}
	else if (func_396())
	{
		return false;
	}
	else
	{
		vVar0 = {get_entity_coords(player_ped_id(), 1)};
		if (Local_79.f_56.f_50)
		{
			if ((Local_79.f_56 != 2 || !is_entity_at_coord(Local_79.f_56.f_7, vVar0, 25f, 25f, 25f, false, true, 0)) || is_ped_in_combat(Local_79.f_56.f_7, false))
			{
				return false;
			}
		}
		if (Local_79.f_109.f_50)
		{
			if ((Local_79.f_109 != 2 || !is_entity_at_coord(Local_79.f_109.f_7, vVar0, 25f, 25f, 25f, false, true, 0)) || is_ped_in_combat(Local_79.f_109.f_7, false))
			{
				return false;
			}
		}
	}
	return true;
}

int func_396()
{
	return Global_91330.f_297 > 0;
}

bool func_397(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, char* sParam5, char* sParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_64(iParam0);
	iVar1 = func_64(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return false;
	}
	*sParam6 = {func_133(iVar0, iVar1, 7, 1)};
	*sParam5 = {*sParam6};
	StringConCat(sParam5, "AU", 16);
	iVar2 = Global_87347[iParam2 /*2*/].f_1;
	StringConCat(sParam6, "_", 16);
	switch (iVar2)
	{
		case 4:
			StringConCat(sParam6, "Cin", 16);
			break;
		
		case 5:
			StringConCat(sParam6, "Bar", 16);
			break;
		
		case 0:
			StringConCat(sParam6, "Glf", 16);
			break;
		
		case 2:
			StringConCat(sParam6, "Str", 16);
			break;
		
		case 1:
			StringConCat(sParam6, "Tns", 16);
			break;
		
		case 3:
			StringConCat(sParam6, "Drt", 16);
			break;
		
		default:
			StringConCat(sParam6, "BAD", 16);
			return false;
			break;
	}
	if (uParam4 && (iVar2 != 0 && iVar2 != 1))
	{
		StringConCat(sParam6, "Dr", 16);
	}
	else
	{
		switch (iParam3)
		{
			case 0:
				StringConCat(sParam6, "Wn", 16);
				break;
			
			case 3:
				StringConCat(sParam6, "Ls", 16);
				break;
			
			case 4:
				StringConCat(sParam6, "Ls", 16);
				break;
			
			case 1:
				StringConCat(sParam6, "Ti", 16);
				break;
			
			case 2:
				StringConCat(sParam6, "Qt", 16);
				break;
			
			default:
				StringConCat(sParam6, "XX", 16);
				return false;
				break;
			}
	}
	return true;
}

int func_398(int iParam0)
{
	if (iParam0 < 22)
	{
		return Global_87347[iParam0 /*2*/].f_1;
	}
	return 8;
}

int func_399(int iParam0)
{
	int iVar0;
	
	iVar0 = func_116(func_120(), iParam0);
	if (((Local_79.f_56.f_1 == iParam0 && does_entity_exist(Local_79.f_56.f_8)) && is_ped_in_vehicle(player_ped_id(), Local_79.f_56.f_8, 0)) && func_109(Local_79.f_56.f_8, Local_79.f_56.f_7))
	{
		return 10;
	}
	else if (((Local_79.f_109.f_1 == iParam0 && does_entity_exist(Local_79.f_109.f_8)) && is_ped_in_vehicle(player_ped_id(), Local_79.f_109.f_8, 0)) && func_109(Local_79.f_56.f_8, Local_79.f_56.f_7))
	{
		return 10;
	}
	else if (Local_79.f_56 == 2 && Local_79.f_109 == 2)
	{
		return 9;
	}
	else if (iVar0 < 20)
	{
		return 8;
	}
	else if (iVar0 < 40)
	{
		return 7;
	}
	return 6;
}

void func_400(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			func_401(iParam0, iParam1, -1);
			break;
		
		case 5:
			func_401(iParam0, iParam1, -1);
			break;
		
		case 3:
			func_401(iParam0, iParam1, -2);
			break;
		
		case 4:
			func_401(iParam0, iParam1, -5);
			break;
		
		case 1:
			func_401(iParam0, iParam1, -5);
			break;
		
		case 2:
			func_401(iParam0, iParam1, -5);
			break;
		
		case 6:
			func_401(iParam0, iParam1, 5);
			break;
		
		case 7:
			func_401(iParam0, iParam1, 3);
			break;
		
		default:
			break;
	}
}

void func_401(int iParam0, int iParam1, int iParam2)
{
	func_402(iParam0, iParam1, func_116(iParam0, iParam1) + iParam2);
}

void func_402(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = func_64(iParam0);
	iVar1 = func_64(iParam1);
	uVar2 = func_47(iVar0, iVar1);
	Global_101154.f_16793.f_175[uVar2 /*19*/].f_17 = iParam2;
	if (Global_101154.f_16793.f_175[uVar2 /*19*/].f_17 < 0)
	{
		Global_101154.f_16793.f_175[uVar2 /*19*/].f_17 = 0;
	}
	if (Global_101154.f_16793.f_175[uVar2 /*19*/].f_17 > 100)
	{
		Global_101154.f_16793.f_175[uVar2 /*19*/].f_17 = 100;
	}
}

int func_403(int iParam0, var uParam1)
{
	if (iParam0 == Local_79.f_56.f_1)
	{
		return func_404(&(Local_79.f_3), &(Local_79.f_56), uParam1);
	}
	else if (iParam0 == Local_79.f_109.f_1)
	{
		return func_404(&(Local_79.f_3), &(Local_79.f_109), uParam1);
	}
	return 69;
}

int func_404(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (*uParam1.f_51)
	{
		return 69;
	}
	if ((!is_ped_in_any_vehicle(player_ped_id(), 0) && func_361(uParam1.f_12)) && !func_358(uParam1.f_12, 8f))
	{
		return 5;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (!func_407(get_vehicle_ped_is_in(player_ped_id(), 0)))
		{
			return 3;
		}
	}
	if ((Local_79.f_653 == 0 && func_358(uParam1.f_15, 2f * 60f)) || (Local_79.f_653 == 1 && func_358(uParam1.f_15, 3.5f * 60f)))
	{
		*uParam2 = 1;
		return 1;
	}
	iVar0 = get_players_last_vehicle();
	if (!is_vehicle_driveable(iVar0, 0))
	{
		return 2;
	}
	if (!is_entity_at_entity(player_ped_id(), iVar0, 15f, 15f, 15f, 0, 1, 0) && !is_entity_at_entity(*uParam1.f_7, iVar0, 15f, 15f, 15f, 0, 1, 0))
	{
		return 2;
	}
	if ((((((is_ped_in_any_heli(player_ped_id()) || is_ped_in_any_boat(player_ped_id())) || is_ped_in_any_taxi(player_ped_id())) || is_ped_in_any_plane(player_ped_id())) || is_ped_in_any_police_vehicle(player_ped_id())) || func_405(get_entity_model(iVar0))) || get_entity_health(iVar0) < 500)
	{
		if ((((*uParam0.f_1 != 0 && *uParam1.f_1 != 14) && !is_ped_in_any_heli(player_ped_id())) && !is_ped_in_any_boat(player_ped_id())) && !is_ped_in_any_plane(player_ped_id()))
		{
			return 4;
		}
	}
	return 0;
}

bool func_405(int iParam0)
{
	int iVar0;
	int[] iVar1 = new int[92];
	
	iVar1[0] = joaat("ambulance");
	iVar1[1] = joaat("benson");
	iVar1[2] = joaat("biff");
	iVar1[3] = joaat("bus");
	iVar1[4] = 1938952078;
	iVar1[5] = joaat("forklift");
	iVar1[6] = joaat("mule");
	iVar1[7] = joaat("mule2");
	iVar1[8] = joaat("packer");
	iVar1[9] = joaat("phantom");
	iVar1[10] = joaat("police");
	iVar1[11] = joaat("stockade");
	iVar1[12] = joaat("squalo");
	iVar1[13] = joaat("maverick");
	iVar1[14] = joaat("polmav");
	iVar1[15] = joaat("airtug");
	iVar1[16] = joaat("fbi");
	iVar1[17] = joaat("annihilator");
	iVar1[18] = joaat("dinghy");
	iVar1[19] = joaat("police");
	iVar1[20] = joaat("ripley");
	iVar1[21] = joaat("trash");
	iVar1[22] = joaat("burrito");
	iVar1[23] = joaat("pony");
	iVar1[24] = joaat("speedo");
	iVar1[25] = joaat("marquis");
	iVar1[26] = joaat("sanchez");
	iVar1[27] = joaat("airtug");
	iVar1[28] = joaat("taco");
	iVar1[29] = joaat("barracks");
	iVar1[30] = joaat("romero");
	iVar1[31] = joaat("blazer");
	iVar1[32] = joaat("blazer2");
	iVar1[33] = 0;
	iVar1[34] = joaat("bodhi2");
	iVar1[35] = joaat("boxville2");
	iVar1[36] = joaat("bulldozer");
	iVar1[37] = joaat("caddy");
	iVar1[38] = joaat("caddy2");
	iVar1[39] = 0;
	iVar1[40] = joaat("camper");
	iVar1[41] = 0;
	iVar1[42] = joaat("tiptruck");
	iVar1[43] = joaat("tourbus");
	iVar1[44] = joaat("towtruck");
	iVar1[45] = joaat("towtruck2");
	iVar1[46] = joaat("tractor");
	iVar1[47] = joaat("tractor2");
	iVar1[48] = joaat("utillitruck");
	iVar1[49] = joaat("utillitruck2");
	iVar1[50] = joaat("utillitruck3");
	iVar1[51] = joaat("bfinjection");
	iVar1[52] = 0;
	iVar1[53] = joaat("dloader");
	iVar1[54] = joaat("docktug");
	iVar1[55] = joaat("dump");
	iVar1[56] = joaat("gburrito");
	iVar1[57] = joaat("handler");
	iVar1[58] = joaat("hauler");
	iVar1[59] = joaat("journey");
	iVar1[60] = joaat("lguard");
	iVar1[61] = 0;
	iVar1[62] = 0;
	iVar1[63] = 0;
	iVar1[64] = joaat("mixer");
	iVar1[65] = 0;
	iVar1[66] = joaat("rhino");
	iVar1[67] = joaat("cutter");
	iVar1[68] = joaat("pounder");
	iVar1[69] = joaat("tiptruck2");
	iVar1[70] = joaat("mixer2");
	iVar1[71] = joaat("tiptruck2");
	iVar1[72] = joaat("rubble");
	iVar1[73] = joaat("scrap");
	iVar1[74] = joaat("armytanker");
	iVar1[75] = joaat("barracks2");
	iVar1[76] = 0;
	iVar1[77] = joaat("airbus");
	iVar1[78] = joaat("coach");
	iVar1[79] = joaat("pbus");
	iVar1[80] = joaat("riot");
	iVar1[81] = 0;
	iVar1[82] = joaat("stockade3");
	iVar1[83] = joaat("flatbed");
	iVar1[84] = joaat("boxville");
	iVar1[85] = joaat("burrito2");
	iVar1[86] = joaat("burrito3");
	iVar1[87] = joaat("burrito4");
	iVar1[88] = joaat("rumpo");
	iVar1[89] = joaat("speedo2");
	iVar1[90] = 0;
	iVar1[91] = 0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iParam0 == iVar1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	if ((((func_406(iParam0) || is_this_model_a_bike(iParam0)) || is_this_model_a_boat(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_plane(iParam0))
	{
		return true;
	}
	return false;
}

bool func_406(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return true;
			break;
	}
	return false;
}

bool func_407(int iParam0)
{
	if (!is_entity_dead(iParam0, 0))
	{
		if (is_vehicle_seat_free(iParam0, -1))
		{
			return true;
		}
		if (is_vehicle_seat_free(iParam0, false))
		{
			return true;
		}
		if (is_vehicle_seat_free(iParam0, true))
		{
			return true;
		}
		if (is_vehicle_seat_free(iParam0, 2))
		{
			return true;
		}
	}
	return false;
}

void func_408(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_409(iParam2), 1);
}

int func_409(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_410(var uParam0)
{
	if (func_143(player_ped_id()) && func_143(*uParam0.f_7))
	{
		if (*uParam0.f_1 == func_120())
		{
			return true;
		}
		if (*uParam0 == 2 || *uParam0 == 4)
		{
			if (is_entity_at_entity(player_ped_id(), *uParam0.f_7, 75f, 75f, 75f, 0, 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_411()
{
	if (is_bit_set(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_412(var uParam0)
{
	if (*uParam0 == 3)
	{
		if (func_139())
		{
			return true;
		}
	}
	return false;
}

bool func_413(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_64(iParam0);
	iVar1 = func_64(iParam1);
	iVar2 = func_64(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return false;
	}
	if (iVar2 == 7)
	{
		iVar5 = func_47(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return false;
		}
		if (((iParam0 == 1 && iParam1 == 19) && func_421(137)) && iParam3 == 1)
		{
			if (func_420(&(Global_101154.f_16793.f_388), iParam3, &iVar3, &uVar4, iParam4))
			{
				if (iParam7)
				{
					func_415(&(Global_101154.f_16793.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return false;
			}
		}
		else if (func_420(&(Global_101154.f_16793.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &uVar4, iParam4))
		{
			if (iParam7)
			{
				func_415(&(Global_101154.f_16793.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar6 = func_414(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return false;
		}
		if (func_420(&(Global_101154.f_16793.f_347[iVar6 /*7*/]), iParam3, &iVar3, &uVar4, iParam4))
		{
			if (iParam7)
			{
				func_415(&(Global_101154.f_16793.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return false;
		}
	}
	*sParam6 = {func_133(iVar0, iVar1, iVar2, 2)};
	*sParam5 = {*sParam6};
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return false;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return false;
	}
	StringIntConCat(sParam6, uVar4, 16);
	return true;
}

int func_414(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 3;
	}
	if (((iParam0 == 1 || iParam1 == 1) || iParam2 == 1) && ((iParam0 == 2 || iParam1 == 2) || iParam2 == 2))
	{
		if ((iParam0 == 0 || iParam1 == 0) || iParam2 == 0)
		{
			return 0;
		}
		if ((iParam0 == 3 || iParam1 == 3) || iParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_415(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_419(*uParam0[iParam2], &iVar0, &iVar1, &iVar2);
	func_418(*uParam0[iParam2], &iVar3, &iVar4, &iVar5);
	func_417(*uParam0[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	func_416(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}

void func_416(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	*uParam0 = 0;
	*uParam0 = (*uParam0 || shift_left(iParam1 & 15, 28));
	*uParam0 = (*uParam0 || shift_left(iParam2 & 15, 24));
	*uParam0 = (*uParam0 || shift_left(iParam3 & 15, 20));
	*uParam0 = (*uParam0 || shift_left(iParam4 & 15, 16));
	*uParam0 = (*uParam0 || shift_left(iParam5 & 15, 12));
	*uParam0 = (*uParam0 || shift_left(iParam6 & 15, 8));
	*uParam0 = (*uParam0 || iParam7 & 255);
}

void func_417(var uParam0, int iParam1)
{
	*iParam1 = uParam0 & 255;
}

void func_418(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = shift_right(iParam0, 16) & 15;
	*iParam2 = shift_right(iParam0, 12) & 15;
	*iParam3 = shift_right(iParam0, 8) & 15;
}

void func_419(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = shift_right(iParam0, 28) & 15;
	*iParam2 = shift_right(iParam0, 24) & 15;
	*iParam3 = shift_right(iParam0, 20) & 15;
}

bool func_420(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = false;
		func_417(*uParam0[*iParam2], &iVar6);
		if (is_bit_set(iParam4, iVar6))
		{
			func_419(*uParam0[*iParam2], &iVar0, &iVar1, &iVar2);
			func_418(*uParam0[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return true;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return true;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return true;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return false;
}

int func_421(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

int func_422()
{
	int iVar0;
	
	iVar0 = false;
	set_bit(&iVar0, true);
	if (Local_79.f_109 == 0)
	{
		set_bit(&iVar0, 2);
	}
	if (func_421(128))
	{
		set_bit(&iVar0, 4);
		if (!func_424(24))
		{
			set_bit(&iVar0, 21);
		}
	}
	else
	{
		set_bit(&iVar0, 3);
	}
	if (func_421(131))
	{
		set_bit(&iVar0, 6);
	}
	else
	{
		set_bit(&iVar0, 5);
	}
	if (func_421(137))
	{
		set_bit(&iVar0, 9);
	}
	else if (func_421(126))
	{
		set_bit(&iVar0, 8);
	}
	else
	{
		set_bit(&iVar0, 7);
	}
	if (func_421(137))
	{
		if (!func_421(135) && !func_421(136))
		{
			set_bit(&iVar0, 10);
		}
		if (func_421(135))
		{
			set_bit(&iVar0, 11);
		}
		else
		{
			set_bit(&iVar0, 13);
		}
		if (func_421(136))
		{
			set_bit(&iVar0, 12);
		}
		else
		{
			set_bit(&iVar0, 14);
		}
	}
	if (!func_424(20))
	{
		set_bit(&iVar0, 15);
	}
	if (!func_424(46))
	{
		set_bit(&iVar0, 16);
	}
	if (func_421(129) && !is_bit_set(iVar0, 9))
	{
		set_bit(&iVar0, 17);
	}
	if (func_424(40) && !func_424(43))
	{
		set_bit(&iVar0, 18);
	}
	if (func_424(43) && !func_424(42))
	{
		set_bit(&iVar0, 19);
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (func_423(get_entity_coords(player_ped_id(), 1)))
		{
			set_bit(&iVar0, 20);
		}
	}
	return iVar0;
}

bool func_423(struct<2> Param0, Vector3 fParam1)
{
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_424(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

bool func_425(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	
	if (is_ped_injured(player_ped_id()))
	{
		return false;
	}
	else if (iParam0 && is_message_being_displayed())
	{
		return false;
	}
	else if (func_427())
	{
		return false;
	}
	else if (Local_79.f_56.f_50 == 0 && Local_79.f_109.f_50 == 0)
	{
		return false;
	}
	else
	{
		vVar0 = {get_entity_coords(player_ped_id(), 1)};
		iVar3 = false;
		if (is_ped_sitting_in_any_vehicle(player_ped_id()))
		{
			iVar3 = get_vehicle_ped_is_in(player_ped_id(), 0);
		}
		if (Local_79.f_56.f_50)
		{
			if (Local_79.f_56 != 2 || is_ped_in_combat(Local_79.f_56.f_7, false))
			{
				return false;
			}
			else if (does_entity_exist(iVar3))
			{
				if (!is_ped_in_vehicle(Local_79.f_56.f_7, iVar3, 0))
				{
					return false;
				}
			}
			else if (!is_entity_at_coord(Local_79.f_56.f_7, vVar0, 25f, 25f, 25f, false, true, 0))
			{
				return false;
			}
		}
		if (Local_79.f_109.f_50)
		{
			if (Local_79.f_109 != 2 || is_ped_in_combat(Local_79.f_109.f_7, false))
			{
				return false;
			}
			else if (does_entity_exist(iVar3))
			{
				if (!is_ped_in_vehicle(Local_79.f_109.f_7, iVar3, 0))
				{
					return false;
				}
			}
			else if (!is_entity_at_coord(Local_79.f_109.f_7, vVar0, 25f, 25f, 25f, false, true, 0))
			{
				return false;
			}
		}
	}
	return true;
}

void func_426(var uParam0, int iParam1)
{
	if (*uParam0 == 3)
	{
		stop_scripted_conversation(iParam1);
	}
	*uParam0 = 0;
}

int func_427()
{
	return Global_91330.f_296 > 0;
}

void func_428(var uParam0)
{
	*uParam0 = 20;
	*uParam0.f_1 = 8;
	*uParam0.f_32 = 145;
	*uParam0.f_33 = 69;
	*uParam0.f_2 = 0;
}

int func_429()
{
	if (!is_ped_injured(player_ped_id()) && func_274(player_ped_id()))
	{
		return 46;
	}
	return 45;
}

void func_430(var uParam0, char* sParam1, char* sParam2)
{
	if (*uParam0 == 0)
	{
		if (!func_139())
		{
			*uParam0 = 1;
			*uParam0.f_1 = {*sParam1};
			*uParam0.f_5 = {*sParam2};
		}
	}
}

int func_431()
{
	if (!is_ped_injured(player_ped_id()) && func_274(player_ped_id()))
	{
		return 44;
	}
	return 42;
}

int func_432(int iParam0)
{
	var[] uVar0 = new var[5];
	int iVar6;
	int iVar7;
	
	iVar6 = false;
	if (func_410(&(Local_79.f_56)))
	{
		if (iParam0 == 0 || func_435(&(Local_79.f_56)))
		{
			uVar0[iVar6] = Local_79.f_56.f_1;
			iVar6++;
		}
	}
	if (func_410(&(Local_79.f_109)))
	{
		if (iParam0 == 0 || func_435(&(Local_79.f_109)))
		{
			uVar0[iVar6] = Local_79.f_109.f_1;
			iVar6++;
		}
	}
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (func_434(&(Local_79.f_162[iVar7 /*28*/])))
		{
			if (iParam0 == 0 || func_433(&(Local_79.f_162[iVar7 /*28*/])))
			{
				uVar0[iVar6] = Local_79.f_162[iVar7 /*28*/];
				iVar6++;
			}
		}
		iVar7++;
	}
	if (iVar6 > 0)
	{
		return uVar0[get_random_int_in_range(false, iVar6)];
	}
	return 145;
}

bool func_433(var uParam0)
{
	if (!is_ped_injured(*uParam0.f_3))
	{
		if (get_interior_from_entity(*uParam0.f_3) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_434(var uParam0)
{
	if (func_143(player_ped_id()) && func_143(*uParam0.f_3))
	{
		if (*uParam0 == func_120())
		{
			return true;
		}
		if (((*uParam0.f_1 == 4 || *uParam0.f_1 == 5) || *uParam0.f_1 == 6) || *uParam0.f_1 == 12)
		{
			if (is_entity_at_entity(player_ped_id(), *uParam0.f_3, 75f, 75f, 75f, 0, 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_435(var uParam0)
{
	if (!is_ped_injured(*uParam0.f_7))
	{
		if (get_interior_from_entity(*uParam0.f_7) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_436(var uParam0, int iParam1)
{
	stop_scripted_conversation(iParam1);
	*uParam0 = 0;
}

bool func_437(var uParam0)
{
	if (*uParam0 == 0)
	{
		if (!func_139())
		{
			return true;
		}
	}
	return false;
}

bool func_438(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 8;
	if (iParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 3)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 4)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 5)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 6)
	{
		iVar0 = 2;
	}
	else if (iParam1 == 7)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 8)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 9)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 10)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 11)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 12)
	{
		iVar0 = 5;
	}
	else if (iParam1 == 13)
	{
		iVar0 = 6;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 7;
	}
	else if (iParam1 == 15)
	{
		iVar0 = 7;
	}
	else if (iParam1 == 16)
	{
		iVar0 = 8;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 8;
	}
	else if (iParam1 == 18)
	{
		iVar0 = 8;
	}
	iVar1 = iVar0 > *uParam0.f_1;
	if (iVar1 == 0)
	{
		*uParam0 = iParam1;
		*uParam0.f_1 = iVar0;
		*uParam0.f_32 = iParam2;
		*uParam0.f_33 = iParam3;
		*uParam0.f_2 = 0;
		func_8(uParam0.f_4);
		return true;
	}
	return false;
}

void func_439()
{
	int iVar0;
	
	func_451();
	iVar0 = false;
	if (!func_449())
	{
		if (Local_79.f_56 >= 7)
		{
			func_448(&(Local_79.f_56), &(Local_79.f_629));
			func_442(&(Local_79.f_56));
			iVar0 = true;
		}
		if (Local_79.f_109 >= 7)
		{
			func_448(&(Local_79.f_109), &(Local_79.f_630));
			func_442(&(Local_79.f_109));
			iVar0 = true;
		}
		if (iVar0)
		{
			func_440(1);
		}
	}
}

bool func_440(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<53> Var2;
	struct<53> Var55;
	struct<53> Var108;
	
	iVar0 = func_120();
	iVar1 = false;
	if (Local_79.f_56 != 0 && Local_79.f_56.f_1 == iVar0)
	{
		Var2 = {Local_79.f_3};
		Local_79.f_3 = {Local_79.f_56};
		Local_79.f_56 = {Var2};
		iVar1 = true;
	}
	if (Local_79.f_109 != 0 && Local_79.f_109.f_1 == iVar0)
	{
		Var55 = {Local_79.f_3};
		Local_79.f_3 = {Local_79.f_109};
		Local_79.f_109 = {Var55};
		iVar1 = true;
	}
	if (iParam0)
	{
		if (Local_79.f_56 == 0 && Local_79.f_109 != 0)
		{
			Var108 = {Local_79.f_56};
			Local_79.f_56 = {Local_79.f_109};
			Local_79.f_109 = {Var108};
			iVar1 = true;
		}
	}
	func_441();
	if (iVar1)
	{
		return true;
	}
	return false;
}

int func_441()
{
	if (func_143(Local_79.f_3.f_7))
	{
		set_ped_config_flag(Local_79.f_3.f_7, 206, false);
	}
	if (func_143(Local_79.f_56.f_7))
	{
		set_ped_config_flag(Local_79.f_56.f_7, 206, false);
	}
	if (func_143(Local_79.f_109.f_7))
	{
		set_ped_config_flag(Local_79.f_109.f_7, 206, false);
	}
	if (func_143(Local_79.f_56.f_7) && Local_79.f_56.f_50)
	{
		if (!Local_79.f_109.f_50)
		{
			set_ped_config_flag(Local_79.f_56.f_7, 206, true);
			return Local_79.f_56.f_1;
		}
	}
	if (func_143(Local_79.f_109.f_7) && Local_79.f_109.f_50)
	{
		if (!Local_79.f_56.f_50)
		{
			set_ped_config_flag(Local_79.f_109.f_7, 206, true);
			return Local_79.f_56.f_1;
		}
	}
	return 145;
}

void func_442(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 9)
	{
		iVar0 = func_64(*uParam0.f_1);
		func_446(iVar0, func_355(iVar0));
		func_443(*uParam0.f_1, 0, func_444(*uParam0.f_7));
		func_5(uParam0, 2, 0);
	}
	else if (*uParam0 == 10)
	{
		func_443(*uParam0.f_1, 2, 0);
		func_5(uParam0, 0, 0);
	}
	else if (*uParam0 == 11)
	{
		func_443(*uParam0.f_1, 1, 0);
		func_5(uParam0, 0, 0);
	}
	else if (*uParam0 == 8)
	{
		func_5(uParam0, 5, 0);
	}
	else if (*uParam0 == 12)
	{
		func_443(*uParam0.f_1, 3, 0);
		func_5(uParam0, 4, 0);
	}
	else if (*uParam0 == 13)
	{
		func_443(*uParam0.f_1, 4, 0);
		func_5(uParam0, 4, 0);
	}
	else if (*uParam0 == 14)
	{
		func_5(uParam0, 6, 0);
	}
	else if (*uParam0 == 7)
	{
		func_5(uParam0, 6, 0);
	}
	else
	{
		func_5(uParam0, 6, 0);
	}
}

void func_443(var uParam0, int iParam1, int iParam2)
{
	if (Local_79.f_670 < 5)
	{
		Local_79.f_654[Local_79.f_670 /*3*/] = uParam0;
		Local_79.f_654[Local_79.f_670 /*3*/].f_1 = iParam1;
		Local_79.f_654[Local_79.f_670 /*3*/].f_2 = iParam2;
		Local_79.f_670++;
	}
}

int func_444(int iParam0)
{
	vector3 vVar0;
	
	if (does_entity_exist(iParam0))
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
		if (!does_entity_exist(player_ped_id()) || has_entity_been_damaged_by_entity(iParam0, player_ped_id(), 1))
		{
			switch (func_445(vVar0, 1))
			{
				case 0:
					return 202;
					break;
				
				case 1:
					return 203;
					break;
				
				case 2:
					return 204;
					break;
				
				case 3:
					return 205;
					break;
				
				case 4:
					return 206;
					break;
			}
			return 202;
		}
	}
	return 0;
}

int func_445(vector3 vParam0, int iParam1)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	fVar2 = 1E+07f;
	iVar3 = 5;
	iVar0 = 0;
	while (iVar0 <= 5 - 1)
	{
		if (Global_86814[iVar0 /*9*/].f_7 != 263)
		{
			if (!iParam3 || is_bit_set(Global_101154.f_5919.f_11[iVar0], false))
			{
				fVar1 = get_distance_between_coords(vParam0, Global_86814[iVar0 /*9*/].f_3, 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_446(int iParam0, int iParam1)
{
	if (iParam0 < 6)
	{
		func_8(&(Global_101154.f_16793.f_362[iParam0 /*3*/]));
		Global_101154.f_16793.f_381[iParam0] = iParam1;
		if (iParam1 != -1)
		{
			func_447(&(Global_101154.f_16793.f_362[iParam0 /*3*/]));
		}
	}
}

void func_447(int iParam0)
{
	if (func_361(iParam0))
	{
		if (!func_360(iParam0))
		{
			*iParam0.f_2 = func_10(is_bit_set(*iParam0, 4)) - *iParam0.f_1;
			set_bit(iParam0, 2);
		}
	}
}

void func_448(var uParam0, var uParam1)
{
	if (*uParam0 != 7)
	{
		*uParam1 = *uParam0.f_1;
	}
}

bool func_449()
{
	if (func_450())
	{
		return true;
	}
	return false;
}

int func_450()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

void func_451()
{
	if ((Local_79.f_614 && Global_87457 != 4) && Global_87457 != 5)
	{
		if (func_470())
		{
			if ((Local_79.f_703 != 0 && Local_79.f_703 != 1) && Local_79.f_615 != Global_87458)
			{
				func_438(&(Local_79.f_703), 0, 145, 69);
				Local_79.f_615 = Global_87458;
			}
			if (!is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				if (!is_message_being_displayed())
				{
					if (Local_79.f_703 != 0)
					{
						func_784(1, 48, 0);
					}
				}
			}
		}
		else if (Local_79.f_703 == 1)
		{
			if (Global_87457 != 3)
			{
				func_438(&(Local_79.f_703), 2, 145, 69);
			}
		}
	}
	if (Local_79.f_56 == 4)
	{
		if (func_469(&(Local_79.f_56)) && !is_message_being_displayed())
		{
			if (func_63(Local_79.f_56.f_1))
			{
				func_467(&(Local_79.f_56), 1, 48);
			}
			else
			{
				func_467(&(Local_79.f_56), 1, 49);
			}
		}
	}
	if (Local_79.f_109 == 4)
	{
		if (func_469(&(Local_79.f_109)) && !is_message_being_displayed())
		{
			if (func_63(Local_79.f_109.f_1))
			{
				func_467(&(Local_79.f_109), 1, 48);
			}
			else
			{
				func_467(&(Local_79.f_109), 1, 49);
			}
		}
	}
	if (func_465())
	{
		if (func_437(&(Local_79.f_737)) && (!is_ped_in_any_vehicle(player_ped_id(), 0) || absf(get_entity_speed(player_ped_id())) < 0.5f))
		{
			func_453(1, 47);
		}
	}
	if (func_452(12))
	{
		func_453(1, 69);
	}
}

int func_452(int iParam0)
{
	return is_bit_set(Global_87466, iParam0);
}

void func_453(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_120();
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 != iVar0)
		{
			func_454(&(Local_79.f_162[iVar1 /*28*/]), Global_87460, iParam0, iParam1);
		}
		iVar1++;
	}
}

bool func_454(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	int iVar5;
	vector3 vVar6;
	int iVar9;
	vector3 vVar10;
	var uVar13;
	var uVar14;
	int iVar15;
	
	if (*uParam0.f_1 != 0 && *uParam0.f_1 < 14)
	{
		iVar0 = func_120();
		if (func_143(*uParam0.f_3) && *uParam0 != iVar0)
		{
			if (func_434(uParam0))
			{
				if (iParam3 != 69)
				{
					if (iParam2 == 0)
					{
						if (func_464(*uParam0, iParam3, &sVar1))
						{
							func_463(*uParam0.f_3, &sVar1, func_138(*uParam0), 4);
						}
					}
					else if (func_294(&(Local_79.f_703)) != 3)
					{
						func_438(&(Local_79.f_703), 3, *uParam0, iParam3);
					}
				}
			}
			iVar5 = false;
			if (iParam1 != -1)
			{
				iVar9 = Global_82399[iParam1 /*34*/].f_10;
				if (func_37(iVar9))
				{
					vVar10 = {func_32(iVar9, func_33())};
				}
				else
				{
					vVar10 = {func_32(iVar9, 0)};
				}
				vVar6 = {vVar10 + func_31(get_entity_coords(*uParam0.f_3, 1) - vVar10) * Vector(50f, 50f, 50f)};
				if (func_15(vVar6, &vVar6, &uVar13, &uVar14, 1, 0, 1))
				{
					iVar5 = true;
				}
			}
			if (is_ped_group_member(*uParam0.f_3, func_13()))
			{
				remove_ped_from_group(*uParam0.f_3);
			}
			decor_set_bool(*uParam0.f_3, "BlockFriendGrab", 1);
			set_ped_keep_task(*uParam0.f_3, true);
			open_sequence_task(&iVar15);
			if (is_ped_in_any_vehicle(*uParam0.f_3, 1))
			{
				task_leave_any_vehicle(false, 0, 0);
			}
			task_look_at_entity(false, player_ped_id(), 2000, 3072, 2);
			task_pause(false, get_random_int_in_range(800, 1200));
			if (iVar5)
			{
				task_follow_nav_mesh_to_coord(false, vVar6, 1f, -1, 0.25f, 5, 1193033728);
			}
			task_wander_standard(false, 1193033728, 0);
			close_sequence_task(iVar15);
			task_perform_sequence(*uParam0.f_3, iVar15);
			clear_sequence_task(&iVar15);
			func_455(uParam0, 2);
			return true;
		}
		else
		{
			func_455(uParam0, 2);
			return true;
		}
	}
	return false;
}

void func_455(var uParam0, int iParam1)
{
	if (*uParam0.f_1 != 0)
	{
		func_462(uParam0.f_4);
		func_461(uParam0);
		if (does_entity_exist(*uParam0.f_3))
		{
			if (*uParam0.f_1 == 12 && iParam1 != 3)
			{
				if (!is_entity_dead(*uParam0.f_3, 0))
				{
					if (!does_entity_belong_to_this_script(*uParam0.f_3, 1))
					{
						set_entity_as_mission_entity(*uParam0.f_3, true, 1);
					}
				}
			}
			func_460(uParam0);
			if (*uParam0.f_3 != player_ped_id())
			{
				if (is_ped_in_group(*uParam0.f_3))
				{
					remove_ped_from_group(*uParam0.f_3);
				}
				if (iParam1 == 0)
				{
					delete_ped(uParam0.f_3);
				}
				else if (iParam1 == 2)
				{
					set_ped_as_no_longer_needed(uParam0.f_3);
				}
			}
		}
		func_458(uParam0);
		func_457(uParam0, &Global_87465);
		func_39(*uParam0);
		func_456(uParam0, *uParam0);
	}
}

void func_456(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 1;
	func_7(uParam0.f_7);
	*uParam0.f_10 = 0;
	*uParam0.f_14 = 0;
	*uParam0.f_15 = 0;
	*uParam0.f_16 = 0;
	*uParam0.f_19 = 0;
	*uParam0.f_20 = 0;
	*uParam0.f_18 = 0;
	*uParam0.f_17 = 0;
	*uParam0.f_21 = 0;
	*uParam0.f_22 = 145;
	*uParam0.f_23 = 0;
	*uParam0.f_24 = 0;
	*uParam0.f_25 = 0;
}

void func_457(var uParam0, int iParam1)
{
	clear_bit(iParam1, *uParam0);
}

void func_458(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = *uParam0;
	if (is_bit_set(Global_87464, iVar0))
	{
		clear_bit(&Global_87464, iVar0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (*uParam0 != iVar1 && func_459(&(Local_79.f_162[iVar1 /*28*/]), Global_87464))
			{
				func_46(*uParam0, iVar1, 1);
			}
			iVar1++;
		}
	}
}

int func_459(var uParam0, int iParam1)
{
	return is_bit_set(iParam1, *uParam0);
}

void func_460(var uParam0)
{
	if (func_143(*uParam0.f_3))
	{
		set_entity_load_collision_flag(*uParam0.f_3, false);
		stop_ped_speaking(*uParam0.f_3, 0);
		set_ped_combat_movement(*uParam0.f_3, 2);
		set_ped_suffers_critical_hits(*uParam0.f_3, 1);
		set_ped_can_be_knocked_off_vehicle(*uParam0.f_3, 0);
		set_ped_config_flag(*uParam0.f_3, 107, false);
		set_ped_config_flag(*uParam0.f_3, 206, false);
		set_blocking_of_non_temporary_events(*uParam0.f_3, false);
		set_ped_infinite_ammo(*uParam0.f_3, 0, false);
		if (get_ped_stealth_movement(*uParam0.f_3))
		{
			set_ped_stealth_movement(*uParam0.f_3, 0, 0);
		}
	}
}

void func_461(var uParam0)
{
	Vector3 fVar0;
	
	if (func_143(*uParam0.f_3))
	{
		if (get_entity_max_health(*uParam0.f_3) > floor(200f))
		{
			fVar0 = to_float(get_entity_health(*uParam0.f_3)) * 200f / 400f;
			set_entity_max_health(*uParam0.f_3, floor(200f));
			set_entity_health(*uParam0.f_3, floor(fVar0));
		}
	}
}

void func_462(int iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_route(*iParam0, false);
		remove_blip(iParam0);
	}
}

void func_463(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_409(iParam3), 0);
}

bool func_464(int iParam0, int iParam1, char* sParam2)
{
	switch (iParam1)
	{
		case 48:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return true;
				
				default:
			}
			break;
		
		default:
			StringCopy(sParam2, "FaFM_BVAA", 16);
			return false;
			break;
	}
	StringCopy(sParam2, "FaFM_BVAA", 16);
	return false;
}

bool func_465()
{
	int iVar0;
	int iVar1;
	
	if (Global_87457 == 0)
	{
		if (get_player_wanted_level(player_id()) == 0)
		{
			iVar0 = func_120();
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (iVar1 != iVar0)
				{
					if (func_434(&(Local_79.f_162[iVar1 /*28*/])) && func_466(&(Local_79.f_162[iVar1 /*28*/])))
					{
						return true;
					}
				}
				iVar1++;
			}
		}
	}
	return false;
}

bool func_466(var uParam0)
{
	if (func_358(uParam0.f_7, 300f))
	{
		return true;
	}
	return false;
}

bool func_467(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		iVar0 = func_120();
		if (func_143(*uParam0.f_7) && *uParam0.f_1 != iVar0)
		{
			if (func_410(uParam0))
			{
				if (iParam2 != 69)
				{
					if (iParam1 == 0)
					{
						if (func_464(*uParam0.f_1, iParam2, &sVar1))
						{
							func_463(*uParam0.f_7, &sVar1, func_138(*uParam0.f_1), 4);
						}
					}
					else if (func_294(&(Local_79.f_703)) != 3)
					{
						func_438(&(Local_79.f_703), 3, *uParam0.f_1, iParam2);
					}
				}
			}
		}
		func_468(uParam0, 8);
		return true;
	}
	return false;
}

void func_468(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_469(var uParam0)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(*uParam0.f_7, 0))
	{
		iVar0 = get_vehicle_ped_is_in(*uParam0.f_7, 0);
		if (does_entity_exist(iVar0))
		{
			if (!is_vehicle_stopped(iVar0))
			{
				if (!is_ped_injured(player_ped_id()) && is_ped_in_vehicle(player_ped_id(), iVar0, 0))
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool func_470()
{
	int iVar0;
	int iVar1;
	
	if (Global_87457 == 3 && func_145(Global_82399[Global_87458 /*34*/].f_11, func_354(func_120())))
	{
		if ((func_410(&(Local_79.f_56)) && func_471(Local_79.f_56.f_1, Global_87459)) || (func_410(&(Local_79.f_109)) && func_471(Local_79.f_109.f_1, Global_87459)))
		{
			return true;
		}
		iVar0 = func_120();
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (iVar1 != iVar0)
			{
				if (func_434(&(Local_79.f_162[iVar1 /*28*/])) && func_471(iVar1, Global_87459))
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

int func_471(int iParam0, int iParam1)
{
	return !is_bit_set(iParam1, func_64(iParam0));
}

void func_472()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_745(&(Local_79.f_162[iVar0 /*28*/]));
		iVar0++;
	}
	func_474(&(Local_79.f_3));
	func_474(&(Local_79.f_56));
	func_474(&(Local_79.f_109));
	func_473();
	if (!is_ped_injured(player_ped_id()))
	{
		clear_entity_last_damage_entity(player_ped_id());
		clear_entity_last_weapon_damage(player_ped_id());
	}
	if (!is_ped_injured(Local_79.f_56.f_7))
	{
		clear_entity_last_damage_entity(Local_79.f_56.f_7);
		clear_entity_last_weapon_damage(Local_79.f_56.f_7);
	}
	if (!is_ped_injured(Local_79.f_109.f_7))
	{
		clear_entity_last_damage_entity(Local_79.f_109.f_7);
		clear_entity_last_weapon_damage(Local_79.f_109.f_7);
	}
}

void func_473()
{
	int iVar0;
	int iVar1;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		iVar0 = set_exclusive_phone_relationships(player_ped_id());
		if (is_vehicle_driveable(iVar0, 0))
		{
			iVar1 = get_ped_in_vehicle_seat(iVar0, false);
			if (!is_ped_injured(iVar1))
			{
				if (iVar1 != player_ped_id())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						if (!is_ped_headtracking_entity(iVar1, player_ped_id()))
						{
							task_look_at_entity(iVar1, player_ped_id(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_474(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar12;
	
	if (*uParam0 == 0 || *uParam0 >= 7)
	{
		return;
	}
	iVar0 = false;
	if (does_entity_exist(*uParam0.f_8))
	{
		if (!is_entity_dead(*uParam0.f_8, 0))
		{
			iVar1 = get_entity_health(*uParam0.f_8);
			if (is_ped_in_vehicle(player_ped_id(), *uParam0.f_8, 0))
			{
				if (iVar1 < *uParam0.f_38 - 50)
				{
					iVar0 = true;
				}
			}
			*uParam0.f_38 = iVar1;
			clear_entity_last_damage_entity(*uParam0.f_8);
			clear_entity_last_weapon_damage(*uParam0.f_8);
		}
		else
		{
			if (*uParam0.f_38 != -1)
			{
				iVar0 = true;
			}
			*uParam0.f_38 = -1;
		}
	}
	if (func_63(*uParam0.f_1))
	{
		clear_bit(&Global_87462, *uParam0.f_1);
	}
	if (does_entity_exist(*uParam0.f_7) && is_ped_injured(*uParam0.f_7))
	{
		if (*uParam0.f_50)
		{
			func_400(Local_79.f_3.f_1, *uParam0.f_1, 1);
		}
		if (func_63(*uParam0.f_1))
		{
			func_61(uParam0);
			Global_101154.f_17223[*uParam0.f_1] = 0;
		}
		func_744(1);
		func_468(uParam0, 9);
		return;
	}
	if (!does_entity_exist(*uParam0.f_7))
	{
		if ((*uParam0 == 2 || *uParam0 == 3) || *uParam0 == 4)
		{
			func_468(uParam0, 7);
			return;
		}
	}
	if (does_entity_exist(*uParam0.f_7) && *uParam0.f_7 != player_ped_id())
	{
		iVar2 = 0;
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar3 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (does_entity_exist(iVar3) && is_ped_in_vehicle(*uParam0.f_7, iVar3, 0))
			{
				iVar2 = 1;
			}
		}
		if (iVar2 == 1)
		{
			*uParam0.f_40 = 1;
		}
		else if (((!is_ped_ragdoll(player_ped_id()) && !is_ped_ragdoll(*uParam0.f_7)) && !is_ped_running_ragdoll_task(player_ped_id())) && !is_ped_running_ragdoll_task(*uParam0.f_7))
		{
			*uParam0.f_40 = 0;
		}
		iVar4 = get_entity_health(*uParam0.f_7);
		if (*uParam0.f_40 == 0)
		{
			if (has_entity_been_damaged_by_entity(*uParam0.f_7, player_ped_id(), 1))
			{
				if (iVar4 < *uParam0.f_41 - 10)
				{
					func_743(uParam0, 1);
				}
			}
		}
		*uParam0.f_41 = iVar4;
	}
	if (*uParam0 != 4)
	{
		if (func_742())
		{
			if (*uParam0.f_1 != func_120())
			{
				if (does_entity_exist(*uParam0.f_7))
				{
					func_739(uParam0, 1, 0);
				}
			}
			return;
		}
	}
	if (*uParam0 == 1)
	{
		if (*uParam0.f_2 == 25 || (does_entity_exist(*uParam0.f_7) && func_379(*uParam0.f_7, *uParam0.f_24, 20f)))
		{
			func_8(uParam0.f_15);
		}
	}
	Global_36263[*uParam0.f_1] = get_game_timer() + 20000;
	if (!is_ped_injured(*uParam0.f_7))
	{
		set_ped_reset_flag(*uParam0.f_7, 328, true);
	}
	if (*uParam0.f_1 != func_120())
	{
		if (*uParam0 == 1)
		{
			func_738(uParam0);
			if (!func_449())
			{
				if ((Local_79.f_653 == 0 && func_358(uParam0.f_15, 4f * 60f)) || (Local_79.f_653 == 1 && func_358(uParam0.f_15, 8f * 60f)))
				{
					if (!does_entity_exist(*uParam0.f_7))
					{
						if (!*uParam0.f_46)
						{
							func_46(Local_79.f_3.f_1, *uParam0.f_1, 0);
							func_400(Local_79.f_3.f_1, *uParam0.f_1, 4);
							func_468(uParam0, 10);
							return;
						}
					}
				}
				if (!*uParam0.f_46)
				{
					if (func_737(*uParam0.f_1))
					{
						if (does_entity_exist(*uParam0.f_7))
						{
							func_734(&(Local_79.f_424), *uParam0.f_1);
						}
						else if (func_726(&(Local_79.f_259), Local_79.f_3.f_1, *uParam0.f_1))
						{
							*uParam0.f_46 = 1;
							return;
						}
					}
				}
				else if (func_725())
				{
					*uParam0.f_46 = 0;
					return;
				}
				else if (func_724())
				{
					func_46(Local_79.f_3.f_1, *uParam0.f_1, 0);
					func_468(uParam0, 7);
					return;
				}
				if (!func_449())
				{
					if (!is_ped_injured(*uParam0.f_7))
					{
						if (*uParam0.f_51 || func_719(uParam0))
						{
							func_716(uParam0);
							func_716(&(Local_79.f_3));
							return;
						}
						else if (is_entity_at_entity(player_ped_id(), *uParam0.f_7, 25f, 25f, 25f, 0, 1, 0))
						{
							if (!is_ped_in_any_vehicle(player_ped_id(), 0) || absf(get_entity_speed(player_ped_id())) < 10f)
							{
								if (*uParam0.f_1 == 14 || *uParam0.f_1 == 17)
								{
									if (func_715(uParam0, 0))
									{
										func_714(uParam0, 0);
										return;
									}
								}
								else if (func_715(uParam0, 1))
								{
									func_716(uParam0);
									func_716(&(Local_79.f_3));
									return;
								}
							}
						}
					}
				}
				if (func_379(player_ped_id(), *uParam0.f_24, 10f))
				{
					is_entity_at_coord(player_ped_id(), *uParam0.f_24, Global_19, true, true, 0);
				}
			}
			else
			{
				if (!is_ped_injured(*uParam0.f_7))
				{
					if (func_713())
					{
						if (is_ped_in_any_vehicle(*uParam0.f_7, 0))
						{
							freeze_entity_position(get_vehicle_ped_is_in(*uParam0.f_7, 0), true);
						}
						else
						{
							freeze_entity_position(*uParam0.f_7, true);
						}
					}
					else if (is_ped_in_any_vehicle(*uParam0.f_7, 0))
					{
						freeze_entity_position(get_vehicle_ped_is_in(*uParam0.f_7, 0), false);
					}
					else
					{
						freeze_entity_position(*uParam0.f_7, false);
					}
				}
				func_7(uParam0.f_29);
				*uParam0.f_46 = 0;
			}
			if (does_entity_exist(*uParam0.f_7))
			{
				if (!func_449())
				{
					func_739(uParam0, 0, 1);
				}
			}
			else if (!func_709(uParam0, func_713()))
			{
				func_494(uParam0);
			}
			if (!is_ped_injured(*uParam0.f_7))
			{
				func_487(uParam0);
			}
		}
		else if (*uParam0 == 2)
		{
			if (does_entity_exist(*uParam0.f_9))
			{
				if (is_entity_attached_to_any_ped(*uParam0.f_9))
				{
					detach_entity(*uParam0.f_9, 1, true);
				}
				delete_object(uParam0.f_9);
			}
			if (func_485(uParam0))
			{
				func_714(uParam0, 0);
			}
			else if (!is_ped_group_member(*uParam0.f_7, func_13()))
			{
				func_468(uParam0, 3);
			}
			else if (func_484(uParam0))
			{
				func_468(uParam0, 6);
			}
			else if (func_483(uParam0))
			{
				func_468(uParam0, 5);
				remove_ped_from_group(*uParam0.f_7);
				set_blocking_of_non_temporary_events(*uParam0.f_7, true);
				clear_ped_tasks(*uParam0.f_7);
			}
			else
			{
				if (func_63(*uParam0.f_1))
				{
					set_bit(&Global_87462, *uParam0.f_1);
				}
				set_ped_can_teleport_to_group_leader(*uParam0.f_7, func_13(), 1);
				if (is_ped_in_any_vehicle(*uParam0.f_7, 0))
				{
					iVar5 = get_vehicle_ped_is_in(*uParam0.f_7, 0);
					if ((does_entity_exist(iVar5) && func_482(&iVar5, 0)) && !is_vehicle_driveable(iVar5, 0))
					{
						if (!func_114(*uParam0.f_7, -828834893))
						{
							clear_ped_tasks(*uParam0.f_7);
							task_leave_any_vehicle(*uParam0.f_7, 0, 0);
						}
					}
				}
				if (get_game_timer() < *uParam0.f_37)
				{
					if (!func_715(uParam0, 1))
					{
						if (!is_ped_injured(player_ped_id()) && is_entity_at_entity(player_ped_id(), *uParam0.f_7, 20f, 20f, 20f, 0, 1, 0))
						{
							set_ped_max_move_blend_ratio(*uParam0.f_7, 1f);
						}
					}
				}
				if (is_entity_at_entity(*uParam0.f_7, player_ped_id(), 30f, 30f, 30f, 0, 1, 0))
				{
					if (!func_114(*uParam0.f_7, 150319005))
					{
						if (!is_ped_in_any_vehicle(*uParam0.f_7, 0) || !is_ped_in_vehicle(player_ped_id(), get_vehicle_ped_is_in(*uParam0.f_7, 0), 0))
						{
							task_look_at_entity(*uParam0.f_7, player_ped_id(), 3000, 0, 2);
						}
					}
					if (!func_114(player_ped_id(), 150319005))
					{
						if (!is_ped_in_any_vehicle(player_ped_id(), 0) || !is_ped_in_vehicle(*uParam0.f_7, get_vehicle_ped_is_in(player_ped_id(), 0), 0))
						{
							task_look_at_entity(player_ped_id(), *uParam0.f_7, 3000, 0, 2);
						}
					}
				}
				if (iVar0)
				{
					if (func_63(*uParam0.f_1))
					{
						if (Local_79.f_703 != 11)
						{
							func_438(&(Local_79.f_703), 11, *uParam0.f_1, 57);
							*uParam0.f_39 = get_game_timer() + 18000;
						}
					}
				}
			}
		}
		else if (*uParam0 == 3)
		{
			if (does_entity_exist(*uParam0.f_9))
			{
				if (is_entity_attached_to_any_ped(*uParam0.f_9))
				{
					detach_entity(*uParam0.f_9, 1, true);
				}
				delete_object(uParam0.f_9);
			}
			if (!is_ped_group_member(*uParam0.f_7, func_13()))
			{
				if (!is_ped_ragdoll(*uParam0.f_7))
				{
					if (func_478(&(Local_79.f_589), *uParam0.f_7, 25f, 0))
					{
						set_ped_as_group_member(*uParam0.f_7, func_13());
					}
				}
			}
			if (func_485(uParam0))
			{
				func_714(uParam0, 0);
			}
			else if (func_477(*uParam0.f_7, player_ped_id(), 200f))
			{
				func_468(uParam0, 11);
			}
			else if (func_484(uParam0))
			{
				func_468(uParam0, 6);
			}
			else if (func_483(uParam0))
			{
				func_468(uParam0, 5);
				remove_ped_from_group(*uParam0.f_7);
				set_blocking_of_non_temporary_events(*uParam0.f_7, true);
				clear_ped_tasks(*uParam0.f_7);
			}
			else if (is_ped_group_member(*uParam0.f_7, func_13()))
			{
				if (!is_ped_in_any_vehicle(player_ped_id(), 0) || is_ped_in_vehicle(*uParam0.f_7, get_vehicle_ped_is_in(player_ped_id(), 0), 0))
				{
					func_468(uParam0, 2);
				}
				else if (is_ped_in_any_vehicle(*uParam0.f_7, 0))
				{
					iVar6 = get_vehicle_ped_is_in(*uParam0.f_7, 0);
					if ((does_entity_exist(iVar6) && func_482(&iVar6, 0)) && !is_vehicle_driveable(iVar6, 0))
					{
						if (!func_114(*uParam0.f_7, -828834893))
						{
							clear_ped_tasks(*uParam0.f_7);
							task_leave_any_vehicle(*uParam0.f_7, 0, 0);
						}
					}
				}
			}
		}
		else if (*uParam0 == 4)
		{
			if (does_entity_exist(*uParam0.f_9))
			{
				if (is_entity_attached_to_any_ped(*uParam0.f_9))
				{
					detach_entity(*uParam0.f_9, 1, true);
				}
				delete_object(uParam0.f_9);
			}
			if (is_ped_in_any_vehicle(*uParam0.f_7, 0))
			{
				iVar7 = get_vehicle_ped_is_in(*uParam0.f_7, 0);
				if ((does_entity_exist(iVar7) && func_482(&iVar7, 0)) && !is_vehicle_driveable(iVar7, 0))
				{
					if (!func_114(*uParam0.f_7, -828834893))
					{
						clear_ped_tasks(*uParam0.f_7);
						task_leave_any_vehicle(*uParam0.f_7, 0, 0);
					}
				}
			}
			if (*uParam0.f_36 == 0)
			{
				if (func_437(&(Local_79.f_737)) && func_132(func_120(), *uParam0.f_1, 50, &sVar8, &sVar12))
				{
					if (func_122(&(Local_79.f_259), &sVar8, &sVar12, 4, 1, 0, 0))
					{
						*uParam0.f_36 = 1;
					}
				}
			}
		}
		else if (*uParam0 == 6)
		{
			if (does_entity_exist(*uParam0.f_9))
			{
				if (is_entity_attached_to_any_ped(*uParam0.f_9))
				{
					detach_entity(*uParam0.f_9, 1, true);
				}
				delete_object(uParam0.f_9);
			}
			if (func_476(uParam0))
			{
				clear_ped_tasks(*uParam0.f_7);
				if (!is_ped_group_member(*uParam0.f_7, func_13()))
				{
					if (!is_ped_ragdoll(*uParam0.f_7))
					{
						if (func_478(&(Local_79.f_589), *uParam0.f_7, 25f, 0))
						{
							set_ped_as_group_member(*uParam0.f_7, func_13());
						}
					}
				}
				if (is_ped_group_member(*uParam0.f_7, func_13()))
				{
					func_468(uParam0, 2);
				}
				else
				{
					func_468(uParam0, 3);
				}
			}
			else if (!func_114(*uParam0.f_7, 63541484))
			{
				clear_ped_tasks(*uParam0.f_7);
				task_pause(*uParam0.f_7, -1);
			}
		}
		else if (*uParam0 == 5)
		{
			if (does_entity_exist(*uParam0.f_9))
			{
				if (is_entity_attached_to_any_ped(*uParam0.f_9))
				{
					detach_entity(*uParam0.f_9, 1, true);
				}
				delete_object(uParam0.f_9);
			}
			if (func_475(uParam0))
			{
				clear_ped_tasks(*uParam0.f_7);
				_0x1280804F7CFD2D6C(*uParam0.f_7);
				if (!is_ped_group_member(*uParam0.f_7, func_13()))
				{
					if (!is_ped_ragdoll(*uParam0.f_7))
					{
						if (func_478(&(Local_79.f_589), *uParam0.f_7, 25f, 0))
						{
							set_ped_as_group_member(*uParam0.f_7, func_13());
						}
					}
				}
				if (is_ped_group_member(*uParam0.f_7, func_13()))
				{
					func_468(uParam0, 2);
				}
				else
				{
					func_468(uParam0, 3);
				}
			}
			else
			{
				if (!func_114(*uParam0.f_7, 1226945658))
				{
					*uParam0.f_42 = {get_entity_coords(player_ped_id(), 1)};
					if (is_entity_at_coord(*uParam0.f_7, *uParam0.f_42, 20f, 20f, 20f, false, true, 0))
					{
						*uParam0.f_42.f_2 += 40f;
					}
					clear_ped_tasks(*uParam0.f_7);
					task_parachute_to_target(*uParam0.f_7, *uParam0.f_42);
					*uParam0.f_33 = get_game_timer() + 1000;
				}
				else if (*uParam0.f_33 < get_game_timer() || is_entity_at_coord(*uParam0.f_7, *uParam0.f_42, 20f, 20f, 20f, false, true, 0))
				{
					*uParam0.f_42 = {get_entity_coords(player_ped_id(), 1)};
					if (is_entity_at_coord(*uParam0.f_7, *uParam0.f_42, 20f, 20f, 20f, false, true, 0))
					{
						*uParam0.f_42.f_2 += 40f;
					}
					set_parachute_task_target(*uParam0.f_7, *uParam0.f_42);
					*uParam0.f_33 = get_game_timer() + 1000;
				}
				if (get_ped_parachute_state(*uParam0.f_7) == 0)
				{
					force_ped_to_open_parachute(*uParam0.f_7);
				}
			}
		}
	}
}

bool func_475(var uParam0)
{
	if (!is_entity_in_air(*uParam0.f_7))
	{
		if (get_ped_parachute_state(*uParam0.f_7) == -1)
		{
			return true;
		}
	}
	return false;
}

bool func_476(var uParam0)
{
	int iVar0;
	
	if (!is_ped_injured(player_ped_id()))
	{
		if (!is_ped_in_any_vehicle(*uParam0.f_7, 0))
		{
			return true;
		}
		else
		{
			iVar0 = get_vehicle_ped_is_in(*uParam0.f_7, 0);
			if (does_entity_exist(iVar0))
			{
				if (!is_entity_in_air(iVar0))
				{
					return true;
				}
				else if (get_entity_speed(iVar0) < 5f && get_entity_height_above_ground(iVar0) < 30f)
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_477(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = {get_entity_coords(iParam0, 1)};
	vVar3 = {get_entity_coords(iParam1, 1)};
	vVar0.x -= vVar3.x;
	vVar0.y -= vVar3.y;
	vVar0.z -= vVar3.z;
	return vVar0.x * vVar0.x + vVar0.y * vVar0.y + vVar0.z * vVar0.z > fParam2 * fParam2;
}

bool func_478(var uParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	
	if (!is_ped_injured(iParam1))
	{
		if (is_ped_sitting_in_any_vehicle(iParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam1, 0);
			if (!is_entity_dead(iVar0, 0))
			{
				if (is_vehicle_driveable(iVar0, 0))
				{
					if (is_ped_sitting_in_vehicle(player_ped_id(), iVar0))
					{
						if (func_481(uParam0))
						{
							return true;
						}
					}
					else if (iParam3)
					{
						return true;
					}
				}
				else if (is_entity_at_entity(player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return true;
				}
			}
		}
		else if (is_entity_at_entity(player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!iParam3)
			{
				iVar0 = get_vehicle_ped_is_using(player_ped_id());
				if (does_entity_exist(iVar0))
				{
					if (func_480(iVar0, uParam0, 0))
					{
						if (is_vehicle_driveable(iVar0, 0))
						{
							if (func_479(iVar0))
							{
								return true;
							}
						}
					}
				}
				else
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_479(int iParam0)
{
	float fVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		fVar0 = get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_480(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (does_entity_exist(*uParam1.f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = get_vehicle_max_number_of_passengers(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!_0xF7F203E31F96F6A1(iParam0, 1))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!_0xF7F203E31F96F6A1(iParam0, 1))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_481(var uParam0)
{
	int iVar0;
	
	if (is_ped_sitting_in_any_vehicle(player_ped_id()))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_480(iVar0, uParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_482(int iParam0, int iParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_entity_dead(*iParam0, 0) || iParam1)
		{
			if (is_entity_in_water(*iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_483(var uParam0)
{
	int iVar0;
	
	if (!is_ped_injured(player_ped_id()))
	{
		iVar0 = get_ped_parachute_state(player_ped_id());
		if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
		{
			if (is_entity_in_air(*uParam0.f_7))
			{
				if (!is_ped_in_any_vehicle(*uParam0.f_7, 0))
				{
					if (get_entity_height_above_ground(*uParam0.f_7) > 50f)
					{
						if (has_ped_got_weapon(*uParam0.f_7, joaat("gadget_parachute"), 0))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_484(var uParam0)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(*uParam0.f_7, 0))
	{
		iVar0 = get_vehicle_ped_is_in(*uParam0.f_7, 0);
		if (does_entity_exist(iVar0))
		{
			if (is_ped_injured(player_ped_id()) || !is_ped_sitting_in_vehicle(player_ped_id(), iVar0))
			{
				if (get_entity_height_above_ground(iVar0) > 50f)
				{
					if (!has_ped_got_weapon(*uParam0.f_7, joaat("gadget_parachute"), 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_485(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	
	if (*uParam0 != 0 && !is_ped_injured(*uParam0.f_7))
	{
		if (!func_486(uParam0))
		{
			if (is_ped_fleeing(*uParam0.f_7))
			{
				return true;
			}
			else if (*uParam0.f_1 == 14 || *uParam0.f_1 == 17)
			{
				if (is_bit_set(Global_87462, 3))
				{
					return true;
				}
				if (has_entity_been_damaged_by_weapon(player_ped_id(), false, 2) && !has_entity_been_damaged_by_weapon(player_ped_id(), false, 1))
				{
					return true;
				}
				if (has_entity_been_damaged_by_weapon(*uParam0.f_7, false, 2) && !has_entity_been_damaged_by_weapon(*uParam0.f_7, false, 1))
				{
					return true;
				}
				if (!is_ped_in_any_vehicle(*uParam0.f_7, 0))
				{
					if (is_player_wanted_level_greater(player_id(), 0))
					{
						vVar0 = {get_entity_coords(player_ped_id(), 1)};
						vVar3 = {vVar0 - Vector(50f, 50f, 50f)};
						vVar6 = {vVar0 + Vector(50f, 50f, 50f)};
						if (is_cop_ped_in_area_3d(vVar3, vVar6))
						{
							return true;
						}
					}
				}
				if (is_ped_in_any_vehicle(*uParam0.f_7, 0))
				{
					iVar9 = get_vehicle_ped_is_in(*uParam0.f_7, 0);
					if (does_entity_exist(iVar9))
					{
						if (is_entity_dead(iVar9, 0) || is_entity_on_fire(iVar9))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_486(var uParam0)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(*uParam0.f_7, 0))
	{
		iVar0 = get_vehicle_ped_is_in(*uParam0.f_7, 0);
		if (does_entity_exist(iVar0))
		{
			if (get_entity_height_above_ground(iVar0) > 5f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_487(var uParam0)
{
	if (!is_ped_ragdoll(*uParam0.f_7) && !is_ped_running_ragdoll_task(*uParam0.f_7))
	{
		if (is_ped_in_any_vehicle(*uParam0.f_7, 0))
		{
			func_492(uParam0);
		}
		else if ((func_143(player_ped_id()) && !is_ped_in_any_vehicle(player_ped_id(), 0)) && func_491(player_ped_id(), *uParam0.f_7, 15f))
		{
			func_490(uParam0);
		}
		else
		{
			func_488(uParam0);
		}
	}
}

void func_488(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	char* sVar7;
	char* sVar23;
	
	if (func_379(*uParam0.f_7, *uParam0.f_21, 1.5f))
	{
		if (!func_114(*uParam0.f_7, 713668775))
		{
			task_follow_nav_mesh_to_coord(*uParam0.f_7, *uParam0.f_21, 2f, -1, 0.25f, 512, 1193033728);
		}
	}
	else
	{
		vVar0 = {get_entity_forward_vector(*uParam0.f_7)};
		vVar3 = {func_31(*uParam0.f_24 - *uParam0.f_21)};
		fVar6 = 0f;
		if ((vVar0.x != 0f || vVar0.y != 0f) && (vVar3.x != 0f || vVar3.y != 0f))
		{
			fVar6 = get_angle_between_2d_vectors(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
		}
		if (fVar6 > 20f || !func_738(uParam0))
		{
			if (!func_114(*uParam0.f_7, 1464580341) && !func_114(*uParam0.f_7, -2017877118))
			{
				task_turn_ped_to_face_coord(*uParam0.f_7, *uParam0.f_24, 6000);
			}
		}
		else if (!func_114(*uParam0.f_7, -2017877118))
		{
			func_53(uParam0, &sVar7);
			func_489(uParam0, &sVar23);
			if (*uParam0.f_1 == 17)
			{
				task_play_anim(*uParam0.f_7, &sVar7, &sVar23, 1.5f, -1.5f, -1, 1, 0, 0, 0, 0);
			}
			else
			{
				task_play_anim(*uParam0.f_7, &sVar7, &sVar23, 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
		}
	}
}

bool func_489(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (*uParam0.f_1 == 0)
	{
		iVar0 = get_random_int_in_range(false, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_c", 64);
		}
		return true;
	}
	else if (*uParam0.f_1 == 1)
	{
		iVar0 = get_random_int_in_range(false, 4);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "impatient_idle_c", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_d", 64);
		}
		return true;
	}
	else if (*uParam0.f_1 == 2)
	{
		iVar0 = get_random_int_in_range(false, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "trevor_impatient_wait_1", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "trevor_impatient_wait_2", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "trevor_impatient_wait_3", 64);
		}
		else
		{
			StringCopy(sParam1, "trevor_impatient_wait_4", 64);
		}
		return true;
	}
	else if (*uParam0.f_1 == 19)
	{
		iVar0 = get_random_int_in_range(false, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "idle_a_lamar", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "idle_b_lamar", 64);
		}
		else
		{
			StringCopy(sParam1, "idle_c_lamar", 64);
		}
		return true;
	}
	else if (*uParam0.f_1 == 14)
	{
		iVar0 = get_random_int_in_range(false, 4);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "idle_b", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "idle_c", 64);
		}
		else
		{
			StringCopy(sParam1, "idle_d", 64);
		}
		return true;
	}
	else if (*uParam0.f_1 == 17)
	{
		iVar0 = get_random_int_in_range(false, 2);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		return true;
	}
	return false;
}

void func_490(var uParam0)
{
	if (!func_114(*uParam0.f_7, 1227113341))
	{
		if (!is_ped_injured(Local_79.f_3.f_7))
		{
			task_go_to_entity(*uParam0.f_7, Local_79.f_3.f_7, -1, 5f, 2f, 2f, 0);
		}
	}
}

int func_491(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = {get_entity_coords(iParam0, 1)};
	vVar3 = {get_entity_coords(iParam1, 1)};
	vVar0.x -= vVar3.x;
	vVar0.y -= vVar3.y;
	vVar0.z -= vVar3.z;
	return vVar0.x * vVar0.x + vVar0.y * vVar0.y + vVar0.z * vVar0.z <= fParam2 * fParam2;
}

void func_492(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	func_8(uParam0.f_12);
	iVar0 = get_vehicle_ped_is_in(*uParam0.f_7, 0);
	vVar1 = {Global_86912[*uParam0.f_2 /*18*/].f_13};
	fVar4 = func_493(*uParam0.f_7, vVar1, 1);
	iVar5 = 512 | 256 | 32 | 2;
	iVar6 = iVar5 | 524288 | 8 | 4 | 16;
	iVar7 = iVar5 | 1;
	fVar8 = 0f;
	if (get_entity_speed(*uParam0.f_7) <= 1f)
	{
		if (!func_361(uParam0.f_29))
		{
			func_8(uParam0.f_29);
		}
		else
		{
			fVar8 = func_359(uParam0.f_29);
		}
	}
	else
	{
		func_7(uParam0.f_29);
	}
	if ((fVar4 < 2f || (fVar4 < 15f && fVar8 > 1f)) || (fVar4 < 20f && fVar8 > 6f))
	{
		if (!func_114(*uParam0.f_7, -828834893))
		{
			clear_ped_tasks(*uParam0.f_7);
			if (does_entity_exist(iVar0))
			{
				set_vehicle_engine_on(iVar0, false, 1, 0);
			}
			task_leave_any_vehicle(*uParam0.f_7, 0, 0);
		}
	}
	else if (fVar4 < 10f)
	{
		if (!func_114(*uParam0.f_7, -1273030092) || *uParam0.f_32 != 0)
		{
			clear_ped_tasks(*uParam0.f_7);
			task_vehicle_mission_coors_target(*uParam0.f_7, iVar0, vVar1, 4, 10f, iVar7, 2f, 10f, 1);
			*uParam0.f_32 = 0;
		}
	}
	else
	{
		if (!func_114(*uParam0.f_7, -1273030092) || *uParam0.f_32 != 1)
		{
			clear_ped_tasks(*uParam0.f_7);
			task_vehicle_mission_coors_target(*uParam0.f_7, iVar0, vVar1, 4, 10f, iVar6, 2f, 20f, 1);
			*uParam0.f_32 = 1;
		}
		if (fVar4 < 30f)
		{
			set_drive_task_cruise_speed(*uParam0.f_7, 10f);
		}
		else
		{
			set_drive_task_cruise_speed(*uParam0.f_7, 18f);
		}
	}
}

var func_493(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	return get_distance_between_coords(vVar0, vParam1, iParam4);
}

bool func_494(var uParam0)
{
	vector3 vVar0;
	Vector3 fVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<82> Var16;
	int iVar114;
	
	if (*uParam0.f_2 != 25)
	{
		if (func_380(player_ped_id(), *uParam0.f_21, 30f))
		{
			vVar0 = {Global_86912[*uParam0.f_2 /*18*/].f_9};
			fVar3 = Global_86912[*uParam0.f_2 /*18*/].f_12;
			if ((vVar0.x == 0f && vVar0.y == 0f) && vVar0.z == 0f)
			{
				vVar4 = {get_entity_coords(player_ped_id(), 1)};
				if (_0xA4822F1CF23F4810(&vVar4, &vVar7, &vVar10, 0f, 180f, 200f, false, 1, 0) && get_distance_between_coords(vVar4, vVar7, 1) < 250f)
				{
					vVar10 = {vVar4 - vVar7};
					vVar0 = {vVar7};
					fVar3 = get_heading_from_vector_2d(vVar10.x, vVar10.y);
				}
			}
			if ((vVar0.x != 0f || vVar0.y != 0f) || vVar0.z != 0f)
			{
				iVar14 = joaat("asea");
				iVar15 = false;
				Var16.f_11 = 12;
				Var16.f_31 = 49;
				Var16.f_81 = 2;
				if (*uParam0.f_49)
				{
					if (((!func_63(*uParam0.f_1) || Global_91042[*uParam0.f_1] != 2) || Global_90747[*uParam0.f_1 /*98*/] == 0) || func_405(Global_90747[*uParam0.f_1 /*98*/]))
					{
						*uParam0.f_49 = 0;
					}
				}
				if (*uParam0.f_49)
				{
					iVar14 = Global_90747[*uParam0.f_1 /*98*/];
					iVar13 = func_36(*uParam0.f_1);
				}
				else if (func_63(*uParam0.f_1))
				{
					func_111(*uParam0.f_1, &Var16, 1);
					iVar14 = Var16;
					iVar13 = func_36(*uParam0.f_1);
				}
				else if (*uParam0.f_1 == 14)
				{
					func_110(*uParam0.f_1, &Var16, 2);
					iVar14 = Var16;
					iVar13 = func_119(*uParam0.f_1);
				}
				else
				{
					func_110(*uParam0.f_1, &Var16, 1);
					iVar14 = Var16;
					iVar13 = func_119(*uParam0.f_1);
				}
				if (iVar14 == 0)
				{
					iVar14 = joaat("asea");
				}
				request_model(iVar13);
				request_model(iVar14);
				if (has_model_loaded(iVar14) && has_model_loaded(iVar13))
				{
					if (func_63(*uParam0.f_1))
					{
						iVar114 = false;
						if (*uParam0.f_49)
						{
							iVar114 = func_708(uParam0.f_8, *uParam0.f_1, vVar0, fVar3, 1, &(Global_90747[*uParam0.f_1 /*98*/]));
						}
						else
						{
							iVar114 = func_683(uParam0.f_8, *uParam0.f_1, vVar0, fVar3, 1, 1);
						}
						if (iVar114)
						{
							iVar15 = func_513(uParam0.f_7, *uParam0.f_1, *uParam0.f_8, -1, 1, 0, 0);
						}
					}
					else if (func_505(uParam0.f_8, *uParam0.f_1, vVar0, fVar3, 1, 1))
					{
						iVar15 = func_503(uParam0.f_7, *uParam0.f_1, *uParam0.f_8, -1, 1);
						if (!is_ped_injured(*uParam0.f_7) && *uParam0.f_1 == 17)
						{
							func_497(*uParam0.f_7, 83);
						}
					}
				}
				if (iVar15)
				{
					if (*uParam0.f_49)
					{
					}
					if (does_entity_exist(*uParam0.f_8) && !is_entity_dead(*uParam0.f_8, 0))
					{
						set_entity_coords(*uParam0.f_8, vVar0, 1, false, 0, 1);
						set_entity_heading(*uParam0.f_8, fVar3);
						set_vehicle_on_ground_properly(*uParam0.f_8);
					}
					func_495(uParam0, &(Local_79.f_259), 0);
					*uParam0.f_48 = 0;
					return true;
				}
			}
		}
	}
	return false;
}

void func_495(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		if (!is_ped_injured(*uParam0.f_7))
		{
			if (iParam2)
			{
				clear_entity_last_damage_entity(*uParam0.f_7);
				clear_entity_last_weapon_damage(*uParam0.f_7);
				if (!func_51(4, *uParam0.f_7))
				{
					func_496(4, *uParam0.f_7);
				}
				func_135(uParam1, *uParam0.f_1, *uParam0.f_7, 1);
				set_ped_config_flag(*uParam0.f_7, 32, false);
			}
			else
			{
				clear_entity_last_damage_entity(*uParam0.f_7);
				clear_entity_last_weapon_damage(*uParam0.f_7);
				*uParam0.f_41 = get_entity_health(*uParam0.f_7);
				if (!func_51(4, *uParam0.f_7))
				{
					func_496(4, *uParam0.f_7);
				}
				func_135(uParam1, *uParam0.f_1, *uParam0.f_7, 1);
				set_ped_can_be_targetted(*uParam0.f_7, false);
				set_ped_relationship_group_hash(*uParam0.f_7, 1862763509);
				set_ped_helmet(*uParam0.f_7, 1);
				_0x3910051CCECDB00C(*uParam0.f_7, true);
				set_ped_path_can_use_climbovers(*uParam0.f_7, 1);
				set_ped_path_can_use_ladders(*uParam0.f_7, 1);
				set_ped_path_can_drop_from_height(*uParam0.f_7, 1);
				set_ped_paths_width_plant(*uParam0.f_7, 1);
				set_ped_path_prefer_to_avoid_water(*uParam0.f_7, 1);
				set_ped_suffers_critical_hits(*uParam0.f_7, 0);
				set_ped_can_be_knocked_off_vehicle(*uParam0.f_7, 3);
				set_ped_config_flag(*uParam0.f_7, 107, true);
				set_ped_config_flag(*uParam0.f_7, 32, false);
				set_ped_stay_in_vehicle_when_jacked(*uParam0.f_7, 1);
				set_ped_config_flag(*uParam0.f_7, 174, true);
				set_ped_config_flag(*uParam0.f_7, 182, true);
				set_ped_dies_instantly_in_water(*uParam0.f_7, 0);
				set_ped_dies_in_water(*uParam0.f_7, 0);
				if (is_ped_using_action_mode(*uParam0.f_7))
				{
					set_ped_using_action_mode(*uParam0.f_7, false, -1, 0);
				}
				if (*uParam0.f_1 != 14 && *uParam0.f_1 != 17)
				{
					if (!*uParam0.f_50)
					{
						set_blocking_of_non_temporary_events(*uParam0.f_7, true);
					}
					else
					{
						set_blocking_of_non_temporary_events(*uParam0.f_7, false);
					}
					set_ped_config_flag(*uParam0.f_7, 118, false);
					set_ped_combat_attributes(*uParam0.f_7, 5, true);
					set_ped_combat_attributes(*uParam0.f_7, 17, false);
					set_ped_combat_attributes(*uParam0.f_7, 23, true);
					set_ped_combat_attributes(*uParam0.f_7, 30, false);
					set_ped_combat_attributes(*uParam0.f_7, 46, true);
					set_ped_combat_attributes(*uParam0.f_7, 4, true);
					set_ped_combat_attributes(*uParam0.f_7, 2, true);
					set_ped_combat_attributes(*uParam0.f_7, 0, true);
					set_ped_combat_attributes(*uParam0.f_7, 1, true);
					set_ped_combat_attributes(*uParam0.f_7, 3, false);
					set_ped_flee_attributes(*uParam0.f_7, 2, false);
					set_ped_flee_attributes(*uParam0.f_7, 512, false);
					set_ped_flee_attributes(*uParam0.f_7, 1024, true);
					set_ped_flee_attributes(*uParam0.f_7, 2048, false);
					set_ped_flee_attributes(*uParam0.f_7, 16384, false);
					set_ped_flee_attributes(*uParam0.f_7, 65536, true);
					set_ped_flee_attributes(*uParam0.f_7, 131072, true);
					set_ped_combat_ability(*uParam0.f_7, 2);
					set_ped_combat_movement(*uParam0.f_7, 2);
				}
				else
				{
					set_blocking_of_non_temporary_events(*uParam0.f_7, true);
					set_ped_combat_attributes(*uParam0.f_7, 5, false);
					set_ped_combat_attributes(*uParam0.f_7, 0, false);
					set_ped_flee_attributes(*uParam0.f_7, 512, true);
					set_ped_flee_attributes(*uParam0.f_7, 1, false);
					set_ped_flee_attributes(*uParam0.f_7, 4, true);
				}
			}
		}
	}
}

void func_496(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (func_51(iParam0, iParam1))
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

void func_497(int iParam0, int iParam1)
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
	var uVar12;
	
	if (func_501(iParam1, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &uVar12))
	{
		func_499(iParam0, iVar0);
		func_499(iParam0, iVar1);
		func_499(iParam0, iVar2);
		func_499(iParam0, iVar3);
		func_499(iParam0, iVar4);
		func_499(iParam0, iVar5);
		func_499(iParam0, iVar6);
		func_499(iParam0, iVar7);
		func_499(iParam0, iVar8);
		func_499(iParam0, iVar9);
		func_499(iParam0, iVar10);
		func_499(iParam0, iVar11);
		if (func_498(uVar12, 1))
		{
			clear_all_ped_props(iParam0);
		}
		if (func_498(uVar12, 2))
		{
			clear_all_ped_props(iParam0);
			set_ped_prop_index(iParam0, true, 0, 0, false);
		}
		if (func_498(uVar12, 4))
		{
			clear_all_ped_props(iParam0);
			set_ped_prop_index(iParam0, true, 1, 0, false);
		}
	}
}

int func_498(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_499(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = 0;
	if (func_500(iParam1, &uVar4, &iVar0, &iVar1, &iVar2))
	{
		set_ped_component_variation(iParam0, iVar0, iVar1, iVar2, iVar3);
	}
}

bool func_500(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 1:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 2:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 3:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 4:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 5:
			*uParam1 = 1;
			*iParam2 = 2;
			*iParam3 = 4;
			*iParam4 = 0;
			return true;
			break;
		
		case 6:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 7:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;
			break;
		
		case 8:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 9:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 1;
			return true;
			break;
		
		case 10:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 11:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 12:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return true;
			break;
		
		case 13:
			*uParam1 = 1;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return true;
			break;
		
		case 14:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 15:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 16:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 17:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 18:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 4;
			*iParam4 = 0;
			return true;
			break;
		
		case 19:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 5;
			*iParam4 = 0;
			return true;
			break;
		
		case 20:
			*uParam1 = 1;
			*iParam2 = 4;
			*iParam3 = 6;
			*iParam4 = 0;
			return true;
			break;
		
		case 21:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 22:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 23:
			*uParam1 = 1;
			*iParam2 = 6;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 25:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 26:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 27:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 28:
			*uParam1 = 1;
			*iParam2 = 8;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 24:
			*uParam1 = 1;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 29:
			*uParam1 = 1;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 31:
			*uParam1 = 1;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 30:
			*uParam1 = 1;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 32:
			*uParam1 = 1;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 33:
			*uParam1 = 1;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			*uParam1 = 1;
			*iParam2 = 12;
			return false;
			break;
		
		case 44:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 45:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;
			break;
		
		case 46:
			*uParam1 = 2;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
			break;
		
		case 47:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 48:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;
			break;
		
		case 49:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 50:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 51:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 52:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 4;
			*iParam4 = 0;
			return true;
			break;
		
		case 53:
			*uParam1 = 2;
			*iParam2 = 2;
			*iParam3 = 5;
			*iParam4 = 0;
			return true;
			break;
		
		case 54:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 55:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;
			break;
		
		case 56:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 57:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 58:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 59:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return true;
			break;
		
		case 60:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return true;
			break;
		
		case 61:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 6;
			*iParam4 = 0;
			return true;
			break;
		
		case 62:
			*uParam1 = 2;
			*iParam2 = 3;
			*iParam3 = 7;
			*iParam4 = 0;
			return true;
			break;
		
		case 63:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 64:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;
			break;
		
		case 65:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 66:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 67:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 68:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 4;
			*iParam4 = 0;
			return true;
			break;
		
		case 69:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 5;
			*iParam4 = 0;
			return true;
			break;
		
		case 70:
			*uParam1 = 2;
			*iParam2 = 4;
			*iParam3 = 6;
			*iParam4 = 0;
			return true;
			break;
		
		case 73:
			*uParam1 = 2;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 71:
			*uParam1 = 2;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 72:
			*uParam1 = 2;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 74:
			*uParam1 = 2;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 75:
			*uParam1 = 2;
			*iParam2 = 10;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 76:
			*uParam1 = 2;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 77:
			*uParam1 = 2;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 78:
			*uParam1 = 2;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
			*uParam1 = 2;
			*iParam2 = 12;
			return false;
			break;
		
		case 89:
			*uParam1 = 0;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 90:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 91:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 92:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 1;
			*iParam4 = 1;
			return true;
			break;
		
		case 93:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 94:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 1;
			return true;
			break;
		
		case 95:
			*uParam1 = 0;
			*iParam2 = 2;
			*iParam3 = 2;
			*iParam4 = 2;
			return true;
			break;
		
		case 96:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 97:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 98:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 99:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 100:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 0;
			return true;
			break;
		
		case 101:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 4;
			*iParam4 = 1;
			return true;
			break;
		
		case 102:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 5;
			*iParam4 = 0;
			return true;
			break;
		
		case 103:
			*uParam1 = 0;
			*iParam2 = 3;
			*iParam3 = 6;
			*iParam4 = 0;
			return true;
			break;
		
		case 104:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 105:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;
			break;
		
		case 106:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
			break;
		
		case 107:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 108:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 1;
			return true;
			break;
		
		case 109:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 110:
			*uParam1 = 0;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 111:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 112:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 113:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 114:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 115:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 0;
			return true;
			break;
		
		case 116:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 1;
			return true;
			break;
		
		case 117:
			*uParam1 = 0;
			*iParam2 = 6;
			*iParam3 = 4;
			*iParam4 = 2;
			return true;
			break;
		
		case 118:
			*uParam1 = 0;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 119:
			*uParam1 = 0;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 120:
			*uParam1 = 0;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 121:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 122:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 123:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 124:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 125:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 4;
			*iParam4 = 0;
			return true;
			break;
		
		case 126:
			*uParam1 = 0;
			*iParam2 = 10;
			*iParam3 = 5;
			*iParam4 = 0;
			return true;
			break;
		
		case 127:
			*uParam1 = 0;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 128:
			*uParam1 = 0;
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 129:
			*uParam1 = 0;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 130:
			*uParam1 = 0;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
			*uParam1 = 0;
			*iParam2 = 12;
			return false;
			break;
		
		case 136:
			*uParam1 = 13;
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 137:
			*uParam1 = 13;
			*iParam2 = 2;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 138:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 139:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 140:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 141:
			*uParam1 = 13;
			*iParam2 = 3;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 142:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 143:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 144:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 145:
			*uParam1 = 13;
			*iParam2 = 4;
			*iParam3 = 3;
			*iParam4 = 0;
			return true;
			break;
		
		case 146:
			*uParam1 = 13;
			*iParam2 = 6;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 147:
			*uParam1 = 13;
			*iParam2 = 6;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 148:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 149:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 150:
			*uParam1 = 13;
			*iParam2 = 5;
			*iParam3 = 2;
			*iParam4 = 0;
			return true;
			break;
		
		case 151:
			*uParam1 = 13;
			*iParam2 = 8;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 152:
			*uParam1 = 13;
			*iParam2 = 8;
			*iParam3 = 1;
			*iParam4 = 0;
			return true;
			break;
		
		case 153:
			*uParam1 = 13;
			*iParam2 = 9;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 154:
			*uParam1 = 13;
			*iParam2 = 10;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 155:
			*uParam1 = 13;
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 156:
			*uParam1 = 13;
			*iParam2 = 7;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 157:
			*uParam1 = 13;
			*iParam2 = 11;
			*iParam3 = 0;
			*iParam4 = 0;
			return true;
			break;
		
		case 158:
		case 159:
		case 160:
		case 161:
			*uParam1 = 13;
			*iParam2 = 12;
			return false;
			break;
	}
	*uParam1 = 16;
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	return false;
}

bool func_501(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	switch (iParam0)
	{
		case 34:
			*uParam1 = 0;
			*uParam2 = 4;
			*uParam3 = 12;
			*uParam4 = 18;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 35:
			*uParam1 = 0;
			*uParam2 = 2;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 36:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 37:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 20;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 38:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 14;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 39:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 7;
			*uParam4 = 16;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_502(uParam13, 4);
			return true;
			break;
		
		case 40:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 41:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 19;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 42:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 17;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 43:
			*uParam1 = 0;
			*uParam2 = 3;
			*uParam3 = 10;
			*uParam4 = 16;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 79:
			*uParam1 = 44;
			*uParam2 = 53;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 80:
			*uParam1 = 44;
			*uParam2 = 47;
			*uParam3 = 54;
			*uParam4 = 63;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 81:
			*uParam1 = 44;
			*uParam2 = 48;
			*uParam3 = 55;
			*uParam4 = 64;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 82:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_502(uParam13, 2);
			return true;
			break;
		
		case 83:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 84:
			*uParam1 = 46;
			*uParam2 = 51;
			*uParam3 = 62;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_502(uParam13, 4);
			return true;
			break;
		
		case 85:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 58;
			*uParam4 = 67;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 86:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 87:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 61;
			*uParam4 = 70;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_502(uParam13, 2);
			return true;
			break;
		
		case 88:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 57;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 131:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 111;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 132:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 102;
			*uParam4 = 110;
			*uParam5 = 115;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 123;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 133:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 97;
			*uParam4 = 105;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 122;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 134:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 135:
			*uParam1 = 89;
			*uParam2 = 95;
			*uParam3 = 101;
			*uParam4 = 108;
			*uParam5 = 116;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 126;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 158:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 151;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 159:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 160:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 141;
			*uParam4 = 145;
			*uParam5 = 147;
			*uParam6 = 150;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_502(uParam13, 1);
			return true;
			break;
		
		case 161:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 140;
			*uParam4 = 144;
			*uParam5 = 147;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			func_502(uParam13, 1);
			return true;
			break;
	}
	return false;
}

void func_502(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_503(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (!func_63(iParam1))
	{
		iVar0 = func_119(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			if (does_entity_exist(iParam2) && is_vehicle_driveable(iParam2, 0))
			{
				*iParam0 = create_ped_inside_vehicle(iParam2, 26, iVar0, iParam3, 0, false);
				set_ped_default_component_variation(*iParam0);
				func_504(*iParam0, iParam1);
				if (iParam4)
				{
					set_model_as_no_longer_needed(iVar0);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_504(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return false;
	}
	Global_87445[iVar0 - 3] = uParam0;
	return true;
}

bool func_505(var uParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5)
{
	struct<98> Var0;
	int iVar98;
	int iVar99;
	
	if (!func_63(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_110(iParam1, &Var0, iParam7);
		if (does_entity_exist(*uParam0))
		{
			if (get_entity_model(*uParam0) != Var0)
			{
			}
			return true;
		}
		if ((iParam1 == 17 && Global_101154.f_1826.f_539.f_2846[0 /*197*/][0 /*98*/] == Var0) || (iParam1 == 15 && Global_101154.f_1826.f_539.f_2846[0 /*197*/][1 /*98*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar98 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar98 = 1;
			}
			request_model(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/]);
			if (has_model_loaded(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/]))
			{
				*uParam0 = create_vehicle(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/], vParam2, fParam5, 0, 0);
				set_vehicle_on_ground_properly(*uParam0);
				_0xAB04325045427AAE(*uParam0, 0);
				_0x428BACCDF5E26EAD(*uParam0, false);
				set_vehicle_has_strong_axles(*uParam0, true);
				set_entity_health(*uParam0, 1250);
				set_vehicle_engine_health(*uParam0, 1250f);
				set_vehicle_petrol_tank_health(*uParam0, 1250f);
				Var0.f_3 = 1250;
				set_vehicle_colours(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_5, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_6);
				set_vehicle_extra_colours(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_7, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_8);
				set_vehicle_dirt_level(*uParam0, Var0.f_2);
				iVar99 = 0;
				while (iVar99 < 12)
				{
					set_vehicle_extra(*uParam0, iVar99 + 1, !Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_11[iVar99]);
					iVar99++;
				}
				if (Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_24)
				{
					if (is_vehicle_a_convertible(*uParam0, 0))
					{
						if (Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_24)
						{
							raise_convertible_roof(*uParam0, 1);
						}
						else
						{
							lower_convertible_roof(*uParam0, 1);
						}
					}
				}
				set_vehicle_number_plate_text(*uParam0, &(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_27));
				if (Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_26 >= 0 && Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_26 < get_number_of_vehicle_number_plates())
				{
					set_vehicle_number_plate_text_index(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_26);
				}
				set_vehicle_tyre_smoke_color(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_84, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_85, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_86);
				set_vehicle_tyres_can_burst(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_88);
				set_vehicle_window_tint(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_87);
				_set_vehicle_neon_lights_colour(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_93, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_94, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_95);
				_set_vehicle_neon_light_enabled(*uParam0, 2, is_bit_set(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 28));
				_set_vehicle_neon_light_enabled(*uParam0, 3, is_bit_set(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 29));
				_set_vehicle_neon_light_enabled(*uParam0, 0, is_bit_set(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 30));
				_set_vehicle_neon_light_enabled(*uParam0, 1, is_bit_set(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 31));
				if (get_vehicle_livery_count(*uParam0) > 1 && Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_89 >= 0)
				{
					set_vehicle_livery(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_89);
				}
				if (Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90 > -1)
				{
					if (!is_this_model_a_bicycle(get_entity_model(*uParam0)))
					{
						if (is_this_model_a_bike(get_entity_model(*uParam0)))
						{
							if (Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90 == 6)
							{
								set_vehicle_wheel_type(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90);
							}
						}
						else
						{
							set_vehicle_wheel_type(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90);
						}
					}
				}
				func_509(uParam0, &(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_81));
				_set_vehicle_paint_fade(*uParam0, Var0.f_96);
				if (iParam6)
				{
					set_model_as_no_longer_needed(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/]);
				}
				func_508(*uParam0);
				return true;
			}
		}
		else
		{
			request_model(Var0);
			if (has_model_loaded(Var0))
			{
				*uParam0 = create_vehicle(Var0, vParam2, fParam5, 0, 0);
				set_vehicle_on_ground_properly(*uParam0);
				_0xAB04325045427AAE(*uParam0, 0);
				_0x428BACCDF5E26EAD(*uParam0, false);
				set_vehicle_has_strong_axles(*uParam0, true);
				func_506(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					func_508(*uParam0);
				}
				if (iParam6)
				{
					set_model_as_no_longer_needed(Var0);
				}
				return true;
			}
		}
	}
	return false;
}

void func_506(var uParam0, struct<98> Param1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Param1.f_9)
	{
		set_vehicle_colour_combination(*uParam0, Param1.f_4);
	}
	else
	{
		set_vehicle_colours(*uParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		set_vehicle_extra_colours(*uParam0, Param1.f_7, Param1.f_8);
	}
	set_vehicle_dirt_level(*uParam0, Param1.f_2);
	set_entity_health(*uParam0, Param1.f_3);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		set_vehicle_extra(*uParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (is_vehicle_a_convertible(*uParam0, 0))
		{
			raise_convertible_roof(*uParam0, 1);
		}
	}
	if (func_507(&uVar2, &iVar1) && Param1.f_97)
	{
		set_vehicle_number_plate_text(*uParam0, &uVar2);
		set_vehicle_number_plate_text_index(*uParam0, iVar1);
	}
	else if (!is_string_null_or_empty(&(Param1.f_27)))
	{
		set_vehicle_number_plate_text(*uParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < get_number_of_vehicle_number_plates())
		{
			set_vehicle_number_plate_text_index(*uParam0, Param1.f_26);
		}
	}
	set_vehicle_tyre_smoke_color(*uParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	set_vehicle_tyres_can_burst(*uParam0, Param1.f_88);
	set_vehicle_window_tint(*uParam0, Param1.f_87);
	_set_vehicle_neon_lights_colour(*uParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	_set_vehicle_neon_light_enabled(*uParam0, 2, is_bit_set(Param1.f_92, 28));
	_set_vehicle_neon_light_enabled(*uParam0, 3, is_bit_set(Param1.f_92, 29));
	_set_vehicle_neon_light_enabled(*uParam0, 0, is_bit_set(Param1.f_92, 30));
	_set_vehicle_neon_light_enabled(*uParam0, 1, is_bit_set(Param1.f_92, 31));
	if (get_vehicle_livery_count(*uParam0) > 1 && Param1.f_89 >= 0)
	{
		set_vehicle_livery(*uParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!is_this_model_a_bicycle(get_entity_model(*uParam0)))
		{
			if (is_this_model_a_bike(get_entity_model(*uParam0)))
			{
				if (Param1.f_90 == 6)
				{
					set_vehicle_wheel_type(*uParam0, Param1.f_90);
				}
			}
			else
			{
				set_vehicle_wheel_type(*uParam0, Param1.f_90);
			}
		}
	}
	func_509(uParam0, &(Param1.f_31), &(Param1.f_81));
	_set_vehicle_paint_fade(*uParam0, Param1.f_96);
}

bool func_507(var uParam0, int iParam1)
{
	if (network_is_game_in_progress())
	{
	}
	else if (Global_101154.f_24643.f_261)
	{
		*uParam0 = {Global_101154.f_24643.f_267};
		*iParam1 = Global_101154.f_24643.f_271;
		return true;
	}
	return false;
}

void func_508(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!does_entity_exist(Global_88972[iVar0]))
		{
			Global_88972[iVar0] = uParam0;
			iVar0 = 3;
		}
		if (iVar0 == 2)
		{
		}
		iVar0++;
	}
}

bool func_509(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*uParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*uParam0) == 0)
	{
		return false;
	}
	set_vehicle_mod_kit(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			toggle_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] > 0);
		}
		else if (get_vehicle_mod(*uParam0, iVar1) != *uParam1[iVar0] - 1)
		{
			remove_vehicle_mod(*uParam0, iVar1);
			if (*uParam1[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					set_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[0] > 0);
				}
				else if (iVar0 == 24)
				{
					set_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[1] > 0);
				}
				else
				{
					set_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] - 1, false);
				}
			}
		}
		iVar0++;
	}
	if (func_512(get_entity_model(*uParam0), 1) && get_vehicle_mod(*uParam0, 24) != func_511(*uParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*uParam0, 24, func_511(*uParam0, *uParam1[38] - 1), false);
	}
	if (func_510(*uParam0))
	{
		set_vehicle_strong(*uParam0, true);
		set_vehicle_has_strong_axles(*uParam0, true);
	}
	return true;
}

bool func_510(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[16] cVar3;
	
	if ((does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0)) && get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (get_vehicle_mod(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, get_mod_text_label(iParam0, iVar1, get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = get_hash_key(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == get_hash_key("MNU_CAGE") || iVar2 == get_hash_key("SABRE_CAG"))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_511(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		switch (get_entity_model(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = get_num_vehicle_mods(iParam0, 38);
		iVar1 = get_num_vehicle_mods(iParam0, 24);
		fVar2 = to_float(iParam1 + 1) / to_float(iVar0);
		iVar3 = floor(to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

bool func_512(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return true;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_11649)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11650)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11648)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11651)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11653)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11652)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
			break;
	}
	return false;
}

bool func_513(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (func_63(iParam1))
	{
		iVar0 = func_36(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			if (does_entity_exist(iParam2) && is_vehicle_driveable(iParam2, 0))
			{
				*iParam0 = create_ped_inside_vehicle(iParam2, 26, iVar0, iParam3, 1, true);
				func_682(*iParam0, iParam1, iParam5);
				_0xE861D0B05C7662B8(*iParam0, 0, 0);
				func_675(*iParam0);
				func_670(*iParam0, 1, 0);
				func_669(*iParam0);
				func_666(*iParam0);
				func_515(*iParam0, iParam6);
				func_514(*iParam0);
				if (iParam4)
				{
					set_model_as_no_longer_needed(iVar0);
				}
			}
			return true;
		}
	}
	return false;
}

void func_514(int iParam0)
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

bool func_515(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_35(iParam0);
	if (func_665(iVar0))
	{
		func_664(iVar0, 0);
		func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_519(iParam0, 1);
		return true;
	}
	if (!iParam1)
	{
		if (func_517(iParam0))
		{
			func_664(iVar0, 0);
			func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_519(iParam0, 1);
			return true;
		}
	}
	iVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_101154.f_7775.f_99.f_58[120] && !Global_101154.f_7775.f_99.f_58[122])
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_101154.f_7775.f_99.f_58[121] = 1;
				return true;
			}
			if (Global_101154.f_7775.f_99.f_58[123])
			{
				Global_101154.f_7775.f_99.f_58[123] = 0;
				if (!is_ped_injured(iParam0))
				{
					if (func_264(iParam0, 3, 169))
					{
						func_151(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return true;
					}
				}
			}
			if (func_264(iParam0, 12, 6))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_264(iParam0, 12, 17))
			{
				if (!func_516(get_entity_model(iParam0), 12, 17))
				{
					func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_264(iParam0, 12, 20))
			{
				if (!func_516(get_entity_model(iParam0), 12, 20))
				{
					func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_264(iParam0, 12, 21))
			{
				if (!func_516(get_entity_model(iParam0), 12, 21))
				{
					func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_264(iParam0, 12, 22))
			{
				if (!func_516(get_entity_model(iParam0), 12, 22))
				{
					func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_264(iParam0, 12, 11))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_264(iParam0, 12, 10))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_264(iParam0, 12, 50))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_264(iParam0, 14, 59))
			{
				func_151(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_264(iParam0, 8, 22))
			{
				func_151(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_264(iParam0, 12, 14))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
		
		case 1:
			if (func_264(iParam0, 12, 13))
			{
				if (!func_516(get_entity_model(iParam0), 12, 13))
				{
					func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_264(iParam0, 12, 14))
			{
				if (!func_516(get_entity_model(iParam0), 12, 14))
				{
					func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_264(iParam0, 12, 15))
			{
				if (!func_516(get_entity_model(iParam0), 12, 15))
				{
					func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_264(iParam0, 12, 4))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_264(iParam0, 12, 3))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_264(iParam0, 14, 82))
			{
				func_151(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_264(iParam0, 8, 76))
			{
				func_151(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_264(iParam0, 12, 1))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
		
		case 2:
			if (func_264(iParam0, 12, 12))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_264(iParam0, 12, 15))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (!iParam1)
			{
				if (func_264(iParam0, 3, 71))
				{
					func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_264(iParam0, 12, 17))
			{
				if (!func_516(get_entity_model(iParam0), 12, 17))
				{
					func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_264(iParam0, 12, 18))
			{
				if (!func_516(get_entity_model(iParam0), 12, 18))
				{
					func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_264(iParam0, 12, 19))
			{
				if (!func_516(get_entity_model(iParam0), 12, 19))
				{
					func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_264(iParam0, 12, 7))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_264(iParam0, 12, 6))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_264(iParam0, 14, 88))
			{
				func_151(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_264(iParam0, 8, 17))
			{
				func_151(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_264(iParam0, 12, 11))
			{
				func_151(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
	}
	return false;
}

int func_516(int iParam0, int iParam1, int iParam2)
{
	Global_69311[1 /*14*/] = {func_200(iParam0, iParam1, iParam2)};
	return is_bit_set(Global_69311[1 /*14*/].f_6, true);
}

int func_517(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_entity_model(iParam0);
	iVar0 = func_190(iParam0, 4);
	return func_518(iVar1, 4, iVar0);
}

bool func_518(int iParam0, int iParam1, int iParam2)
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

void func_519(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_35(iParam0);
		if (func_63(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_160(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_663(iVar0);
					func_530(iParam0, &(Global_101154.f_1826.f_539[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_526(iParam0, &Var2, 1);
			Global_91068[iVar0 /*65*/] = {Var2};
			if (iParam0 == player_ped_id())
			{
				func_521();
			}
			if (get_hash_key(get_this_script_name()) != get_hash_key("clothes_shop_sp") || (_get_number_of_instances_of_streamed_script(joaat("lester1")) == 0 && _get_number_of_instances_of_streamed_script(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_280(0) && !func_280(1)) && !func_280(2)) && !func_280(3)) && !func_280(4)) && !func_280(9)) && !func_280(10)))
				{
					Global_101154.f_1826.f_539[iVar0 /*65*/] = {Var2};
					Global_101154.f_1826.f_539.f_1619[iVar0] = func_520(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_101154.f_1826.f_539.f_204[iVar67 /*4*/][iVar0] = func_190(iParam0, func_180(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_101154.f_1826.f_539.f_204[iVar67 /*4*/][iVar0] = func_190(iParam0, func_180(iVar67));
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

int func_520(int iParam0)
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

void func_521()
{
	struct<50> Var0;
	
	if ((is_ped_injured(player_ped_id()) || !func_63(func_120())) || !func_523())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_526(player_ped_id(), &Var0, 1);
	func_522(1306, Var0[0], -1, 1);
	func_522(1307, Var0[1], -1, 1);
	func_522(1308, Var0[2], -1, 1);
	func_522(1309, Var0[3], -1, 1);
	func_522(1310, Var0[4], -1, 1);
	func_522(1311, Var0[5], -1, 1);
	func_522(1312, Var0[6], -1, 1);
	func_522(1313, Var0[7], -1, 1);
	func_522(1314, Var0[8], -1, 1);
	func_522(1315, Var0[9], -1, 1);
	func_522(1316, Var0[10], -1, 1);
	func_522(1317, Var0[11], -1, 1);
	func_522(1318, Var0.f_13[0], -1, 1);
	func_522(1319, Var0.f_13[1], -1, 1);
	func_522(1320, Var0.f_13[2], -1, 1);
	func_522(1321, Var0.f_13[3], -1, 1);
	func_522(1322, Var0.f_13[4], -1, 1);
	func_522(1323, Var0.f_13[5], -1, 1);
	func_522(1324, Var0.f_13[6], -1, 1);
	func_522(1325, Var0.f_13[7], -1, 1);
	func_522(1326, Var0.f_13[8], -1, 1);
	func_522(1327, Var0.f_13[9], -1, 1);
	func_522(1328, Var0.f_13[10], -1, 1);
	func_522(1329, Var0.f_13[11], -1, 1);
	func_522(1330, Var0.f_26[0], -1, 1);
	func_522(1331, Var0.f_26[1], -1, 1);
	func_522(1332, Var0.f_26[2], -1, 1);
	func_522(1333, Var0.f_26[3], -1, 1);
	func_522(1334, Var0.f_26[4], -1, 1);
	func_522(1335, Var0.f_26[5], -1, 1);
	func_522(1336, Var0.f_26[6], -1, 1);
	func_522(1337, Var0.f_26[7], -1, 1);
	func_522(1338, Var0.f_26[8], -1, 1);
	func_522(1339, Var0.f_26[9], -1, 1);
	func_522(1340, Var0.f_26[10], -1, 1);
	func_522(1341, Var0.f_26[11], -1, 1);
	func_522(1342, Var0.f_39[0], -1, 1);
	func_522(1343, Var0.f_39[1], -1, 1);
	func_522(1344, Var0.f_39[2], -1, 1);
	func_522(1345, Var0.f_39[3], -1, 1);
	func_522(1346, Var0.f_39[4], -1, 1);
	func_522(1347, Var0.f_39[5], -1, 1);
	func_522(1348, Var0.f_39[6], -1, 1);
	func_522(1349, Var0.f_39[7], -1, 1);
	func_522(1350, Var0.f_39[8], -1, 1);
	func_522(1351, Var0.f_49[0], -1, 1);
	func_522(1352, Var0.f_49[1], -1, 1);
	func_522(1353, Var0.f_49[2], -1, 1);
	func_522(1354, Var0.f_49[3], -1, 1);
	func_522(1355, Var0.f_49[4], -1, 1);
	func_522(1356, Var0.f_49[5], -1, 1);
	func_522(1357, Var0.f_49[6], -1, 1);
	func_522(1358, Var0.f_49[7], -1, 1);
	func_522(1359, Var0.f_49[8], -1, 1);
	func_522(1360, func_120(), -1, 1);
	stat_set_bool(joaat("clo_stored_initial"), 1, 1);
	Global_101154.f_1826.f_539.f_3543 = 1;
}

var func_522(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
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

bool func_523()
{
	if (func_525() && func_524(0))
	{
		return true;
	}
	return false;
}

var func_524(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_525()
{
	return func_524(func_21() + 1);
}

void func_526(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_35(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_529(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_528(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_63(iVar0))
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
			if (func_527(161, -1))
			{
				*uParam1.f_59 = func_196(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_196(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_196(746, Global_69309, 0);
			*uParam1.f_61 = func_196(747, Global_69309, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_527(161, -1))
			{
				*uParam1.f_59 = func_196(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_196(745, Global_69309, 0);
			}
		}
	}
}

int func_527(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_195(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_528(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
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

void func_529(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
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

void func_530(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_35(iParam0);
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
		if (func_63(iVar0))
		{
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_59 = *uParam1.f_59;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_60 = *uParam1.f_60;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_61 = *uParam1.f_61;
			if (func_159(iParam0, iVar1, &iVar2, 0))
			{
				func_151(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_62 = *uParam1.f_62;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_63 = *uParam1.f_63;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_64 = *uParam1.f_64;
			if (func_152(iParam0, iVar1, &iVar2))
			{
				func_151(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (network_is_game_in_progress() && get_entity_model(iParam0) == get_entity_model(player_ped_id()))
		{
			func_194(746, *uParam1.f_60, Global_69309, 1);
			func_194(747, *uParam1.f_61, Global_69309, 1);
			iVar4 = func_191(iParam0, *uParam1.f_13[2], *uParam1[2], 2);
			func_533(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_69309, 0);
			if (!iParam2)
			{
				iVar5 = func_191(iParam0, *uParam1.f_13[1], *uParam1[1], 1);
				func_533(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_69309, 0);
			}
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			func_194(745, *uParam1.f_59, Global_69309, 1);
			func_194(2043, *uParam1.f_59, Global_69309, 1);
			func_531(161, 1, -1, 1);
		}
	}
}

void func_531(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_532())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_195(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

bool func_532()
{
	return true;
	return false;
}

bool func_533(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		Global_69311[1 /*14*/] = {func_630(iVar5, iParam1, iParam2)};
		if (!func_199(iParam3))
		{
			Global_69310--;
			return false;
		}
		func_628(iVar5, iParam1, iParam2, 1);
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
			uVar15 = {func_178(iVar5, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_69311[1 /*14*/] = {func_630(iVar5, 10, 0)};
					if (iParam4 == -1)
					{
						set_ped_component_variation(iParam0, func_161(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_161(iVar0)));
					}
					else
					{
						set_ped_component_variation(iParam0, func_161(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
					}
					if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
					{
						func_628(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_69311[1 /*14*/] = {func_630(iVar5, iVar0, uVar15[iVar0])};
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
								uVar31 = {func_172(iVar5, uVar15[iVar0])};
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_69311[1 /*14*/] = {func_630(iVar5, 14, uVar31[iVar1])};
								func_171(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
								if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
								{
									func_628(iVar5, iVar0, uVar15[iVar0], 1);
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
									set_ped_component_variation(iParam0, func_161(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_161(iVar0)));
								}
								else
								{
									set_ped_component_variation(iParam0, func_161(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_533(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
							if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
							{
								func_628(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69311[1 /*14*/] = {func_630(iVar5, iVar0, func_627(iParam0, iVar0, -1))};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 3))
				{
					uVar41 = {func_178(iVar5, 0)};
					func_533(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = func_626();
			if (iVar57 != -1)
			{
				func_624(iVar57, 0, Global_69309);
			}
			func_622(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = {func_172(iVar5, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69311[1 /*14*/] = {func_630(iVar5, 14, uVar58[iVar1])};
			func_171(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
			{
				func_628(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_69310 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_620(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_533(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar69 = func_190(iParam0, 1);
			iVar3 = func_620(iParam0, iVar5, 1, iVar69, 14, Global_69311[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = func_619(iVar5, 1, -1);
			}
		}
		func_171(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
		if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
		{
			func_628(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_620(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_533(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar71 = func_190(iParam0, 11);
				iVar72 = func_190(iParam0, 8);
				iVar73 = func_190(iParam0, 4);
				iVar8 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
				if (_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar70 = func_183(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar70 = func_183(iVar5, iParam2, 11, 4);
					}
					if (((_0x341DE7ED1D2A1BFD(iVar70, 320460654, false) || _0x341DE7ED1D2A1BFD(iVar70, -2017999390, false)) || _0x341DE7ED1D2A1BFD(iVar70, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar70, -826135203, false))
					{
					}
					else
					{
						iVar9 = func_190(iParam0, 8);
					}
				}
				iVar74 = get_hash_name_for_component(iParam0, 3, get_ped_drawable_variation(iParam0, 3), false);
				if (_0x341DE7ED1D2A1BFD(iVar74, -356646862, false))
				{
					iVar75 = func_618(iVar5, iVar72, iVar71, iVar73);
					if (iVar75 == -99)
					{
						iVar75 = func_620(iParam0, iVar5, 11, iVar71, 3, 0);
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
							iVar70 = func_183(iVar5, iParam2, 11, 4);
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
							if (func_617(iVar5, iVar76, iVar77) == iVar74)
							{
								iVar11 = iVar77;
								iVar12 = get_ped_texture_variation(iParam0, 3);
							}
							iVar77++;
						}
					}
				}
				iVar70 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && _0x341DE7ED1D2A1BFD(func_183(iVar5, iParam2, 11, 4), -1200513218, false))
				{
					iVar71 = func_190(iParam0, 11);
					if (iVar71 >= 256)
					{
						iVar70 = func_183(iVar5, iVar71, 11, 4);
					}
					if (iVar71 >= 256 && _0x341DE7ED1D2A1BFD(iVar70, 1965569012, false))
					{
						iVar78 = func_615(iVar5, iVar71, iParam2, get_ped_texture_variation(iParam0, 11));
						if (iVar78 != -99)
						{
							func_533(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_69311[1 /*14*/] = {func_630(iVar5, iParam1, iParam2)};
						}
					}
				}
				else if (func_614(iVar5, iParam2))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar71 >= 237)
						{
							iVar70 = func_183(iVar5, iVar71, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar71 >= 256)
						{
							iVar70 = func_183(iVar5, iVar71, 11, 4);
						}
					}
					if (!func_614(iVar5, iVar71))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && (_0x341DE7ED1D2A1BFD(iVar70, -1200513218, false) || _0x341DE7ED1D2A1BFD(iVar70, 1965569012, false)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && ((((((_0x341DE7ED1D2A1BFD(iVar70, 684992453, false) || _0x341DE7ED1D2A1BFD(iVar70, 916636514, false)) || _0x341DE7ED1D2A1BFD(iVar70, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar70, -820724897, false)) || _0x341DE7ED1D2A1BFD(iVar70, 153792394, false)) || _0x341DE7ED1D2A1BFD(iVar70, -872449705, false)) || _0x341DE7ED1D2A1BFD(iVar70, 700658917, false)))
						{
						}
						else
						{
							iVar79 = func_615(iVar5, iVar71, iParam2, get_ped_texture_variation(iParam0, 11));
							if (iVar79 != -99)
							{
								func_533(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69311[1 /*14*/] = {func_630(iVar5, iParam1, iParam2)};
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar80 = func_619(iVar5, 11, -1);
									Global_69311[1 /*14*/] = {func_630(iVar5, 11, iVar80)};
									iVar79 = func_615(iVar5, iVar80, iParam2, Global_69311[1 /*14*/].f_4);
									if (iVar79 == -99)
									{
										iVar79 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar79 = 48;
								}
								func_533(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69311[1 /*14*/] = {func_630(iVar5, iParam1, iParam2)};
							}
						}
					}
					else
					{
						Global_69311[1 /*14*/] = {func_630(iVar5, 11, iVar71)};
						iVar81 = Global_69311[1 /*14*/].f_3;
						Global_69311[1 /*14*/] = {func_630(iVar5, 11, iParam2)};
						iVar82 = Global_69311[1 /*14*/].f_3;
						if (iVar81 != iVar82)
						{
							Global_69311[1 /*14*/] = {func_630(iVar5, 8, iVar72)};
							iVar83 = Global_69311[1 /*14*/].f_4;
							iVar84 = func_613(iVar5, iVar72, iVar83);
							if (iVar84 == -99)
							{
								iVar85 = iVar72;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || func_612(func_183(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar84 = func_619(iVar5, 11, -1);
										Global_69311[1 /*14*/] = {func_630(iVar5, 11, iVar84)};
										iVar85 = func_615(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && iVar72 == 32)
								{
									if (!_0x341DE7ED1D2A1BFD(func_183(iVar5, iParam2, 11, 4), -491588875, false))
									{
										iVar84 = func_619(iVar5, 11, -1);
										Global_69311[1 /*14*/] = {func_630(iVar5, 11, iVar84)};
										iVar85 = func_615(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar85 = func_615(iVar5, iVar84, iParam2, iVar83);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (_0x341DE7ED1D2A1BFD(func_183(iVar5, iParam2, 11, 3), -1719338724, false))
									{
										if (!func_611(iVar5, func_190(iParam0, 4), iVar84))
										{
											iVar85 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (_0x341DE7ED1D2A1BFD(func_183(iVar5, iParam2, 11, 4), -1719338724, false))
									{
										if (!func_611(iVar5, func_190(iParam0, 4), iVar84))
										{
											iVar85 = 48;
										}
									}
								}
							}
							if (iVar85 != -99)
							{
								func_533(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar84 = func_619(iVar5, 11, -1);
								Global_69311[1 /*14*/] = {func_630(iVar5, 11, iVar84)};
								iVar85 = func_615(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
								if (iVar85 == -99)
								{
									iVar85 = 240;
								}
								func_533(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_533(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_69311[1 /*14*/] = {func_630(iVar5, iParam1, iParam2)};
						}
					}
				}
				else
				{
					func_609(iVar5, iParam2);
					set_ped_component_variation(iParam0, 10, 0, false, get_ped_palette_variation(iParam0, 10));
				}
			}
			func_622(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_618(iVar5, func_627(iParam0, 8, -1), iParam2, func_627(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_196(2143, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_196(2150, iParam10, 0);
				}
				_set_ped_hair_color(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_575(iParam0, iParam2, iParam10, iParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_622(iParam0, iParam1, iParam2, iParam6, 0);
			iVar86 = func_190(iParam0, 11);
			if (func_614(iVar5, iVar86))
			{
				iVar87 = func_613(iVar5, iParam2, Global_69311[1 /*14*/].f_4);
				func_609(iVar5, iVar87);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_618(iVar5, iParam2, func_190(iParam0, 11), func_190(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar88 = func_190(iParam0, 7);
				if (!func_572(iVar5, iVar88, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					set_ped_component_variation(iParam0, func_161(7), 0, false, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && _0x341DE7ED1D2A1BFD(Global_2621444, -921710083, false)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && _0x341DE7ED1D2A1BFD(Global_2621444, -921710083, false)))
			{
				iVar89 = func_196(2090, iParam10, 0);
				iVar90 = func_196(2091, iParam10, 0);
				iVar91 = func_196(2092, iParam10, 0);
				fVar92 = func_571(135, iParam10);
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
				func_555(iParam0, Global_69309);
			}
			iVar94 = get_hash_name_for_component(iParam0, true, get_ped_drawable_variation(iParam0, true), get_ped_texture_variation(iParam0, true));
			iVar95 = get_hash_name_for_component(iParam0, true, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			if (_0x341DE7ED1D2A1BFD(iVar94, 838607662, false))
			{
				if (!_0x341DE7ED1D2A1BFD(iVar95, 838607662, false))
				{
					iVar96 = func_190(iParam0, 1);
					iVar97 = false;
					while (iVar97 < 9)
					{
						iVar3 = func_620(iParam0, iVar5, iParam1, iVar96, 14, iVar97);
						iVar98 = func_186(iParam0, iVar97);
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
			iVar99 = func_190(iParam0, 11);
			iVar100 = func_190(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (_0x341DE7ED1D2A1BFD(func_183(iVar5, iVar99, 11, 3), -1719338724, false))
				{
					if (!func_611(iVar5, iParam2, func_613(iVar5, iVar100, 0)))
					{
						func_533(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69311[1 /*14*/] = {func_630(iVar5, iParam1, iParam2)};
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (_0x341DE7ED1D2A1BFD(func_183(iVar5, iVar99, 11, 4), -1719338724, false))
				{
					if (!func_611(iVar5, iParam2, func_613(iVar5, iVar100, 0)))
					{
						func_533(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69311[1 /*14*/] = {func_630(iVar5, iParam1, iParam2)};
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_618(iVar5, func_190(iParam0, 8), func_190(iParam0, 11), iParam2);
			}
			iVar101 = get_hash_name_for_component(iParam0, 3, get_ped_drawable_variation(iParam0, 3), false);
			if (_0x341DE7ED1D2A1BFD(iVar101, -356646862, false))
			{
				iVar102 = func_618(iVar5, iVar100, iVar99, iParam2);
				if (iVar102 == -99)
				{
					iVar102 = func_620(iParam0, iVar5, 11, iVar99, 3, 0);
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
						iVar103 = func_183(iVar5, iParam2, 11, 4);
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
						if (func_617(iVar5, iVar104, iVar105) == iVar101)
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
			set_ped_component_variation(iParam0, func_161(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_161(iParam1)));
		}
		else
		{
			set_ped_component_variation(iParam0, func_161(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_620(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_533(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar6 = func_618(iVar5, iVar3, func_190(iParam0, 11), func_190(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (func_554(iParam0))
				{
					iVar106 = func_553(iVar5, iParam1, iParam2);
					if (iVar106 > 0)
					{
						iVar106 += get_ped_texture_variation(iParam0, 9);
						if (!func_552(iParam0, 9, iVar106))
						{
							func_533(iParam0, 9, iVar106, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_533(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
					if (_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
					{
						func_533(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar107 = func_196(2032, -1, 0);
				if (get_ped_drawable_variation(iParam0, 5) != 0)
				{
					set_ped_component_variation(iParam0, 5, func_549(iParam0, iVar107), func_548(iParam0, iVar107), func_547(iParam0, iVar107));
				}
				if (iParam0 == player_ped_id())
				{
					set_player_parachute_variation_override(player_id(), 5, func_549(player_ped_id(), iVar107), func_548(player_ped_id(), iVar107), 0);
					set_player_parachute_pack_tint_index(player_id(), func_547(player_ped_id(), iVar107));
					func_544(player_id(), iVar107);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (_0x341DE7ED1D2A1BFD(Global_2621444, -319568873, false))
					{
						func_533(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar108 = func_627(iParam0, 4, -1);
					iVar109 = iParam2;
				}
				else
				{
					iVar108 = iParam2;
					iVar109 = func_627(iParam0, 11, -1);
				}
				if (func_543(iVar5, 11, iVar109))
				{
					if (!func_542(iVar5, 4, iVar108))
					{
						if (func_541(iVar5, 4, iVar108, &uVar110))
						{
							func_533(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (func_542(iVar5, 4, iVar108))
				{
					if (func_540(iVar5, 4, iVar108, &uVar110))
					{
						func_533(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 4)
			{
				iVar111 = get_ped_drawable_variation(iParam0, 6);
				iVar112 = get_ped_texture_variation(iParam0, 6);
				iVar113 = get_hash_name_for_component(iParam0, 6, iVar111, iVar112);
				if (func_539(iVar5, iVar113))
				{
					if (_0x341DE7ED1D2A1BFD(iVar113, 1812005517, false) != func_538(iVar5, iParam2))
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
										func_533(iParam0, 6, func_174(iVar5, iVar116, 6, 3), 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										func_533(iParam0, 6, func_174(iVar5, iVar116, 6, 4), 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
				func_536(iParam0);
				iVar119 = get_ped_drawable_variation(iParam0, true);
				iVar120 = get_ped_texture_variation(iParam0, true);
				iVar121 = get_hash_name_for_component(iParam0, true, iVar119, iVar120);
				if (_0x341DE7ED1D2A1BFD(iVar121, 838607662, false))
				{
					iVar3 = func_620(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_533(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_620(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_533(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_534(iParam0, &uVar4))
		{
			func_533(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_533(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_533(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_533(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar122 = func_617(iVar5, get_ped_drawable_variation(iParam0, 3), iVar11);
		if (iVar122 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_174(iVar5, iVar122, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_174(iVar5, iVar122, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 += iVar12;
				func_533(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_69310--;
	return true;
}

bool func_534(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_627(player_ped_id(), 2, -1);
	if (func_196(746, Global_69309, 0) != -99 && func_523())
	{
		if (func_535() == 4)
		{
			return true;
		}
		if (func_196(746, Global_69309, 0) == 0 && func_196(747, Global_69309, 0) == 0)
		{
			if (func_527(161, Global_69309))
			{
				if (func_196(2043, Global_69309, 0) == 0)
				{
					return false;
				}
			}
			else if (func_196(745, Global_69309, 0) == 0)
			{
				return false;
			}
		}
		iVar0 = func_196(746, Global_69309, 0);
		iVar1 = func_196(747, Global_69309, 0);
		if (!func_552(iParam0, iVar1, iVar0))
		{
			if (func_527(161, Global_69309))
			{
				*uParam1 = func_196(2043, Global_69309, 0);
			}
			else
			{
				*uParam1 = func_196(745, Global_69309, 0);
			}
			func_194(746, -99, Global_69309, 1);
			func_194(747, 2, Global_69309, 1);
			return true;
		}
	}
	return false;
}

var func_535()
{
	return Global_1315845;
}

void func_536(int iParam0)
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
			iVar5 = func_537(iParam0, 1);
			iVar6 = iVar2;
		}
	}
	else if (_0x341DE7ED1D2A1BFD(iVar9, -1889900289, false))
	{
		iVar5--;
	}
	else
	{
		iVar5 = func_537(iParam0, 0);
		iVar6 = iVar2;
	}
	set_ped_component_variation(iParam0, 8, iVar5, iVar6, get_ped_palette_variation(iParam0, 8));
}

var func_537(int iParam0, int iParam1)
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

int func_538(int iParam0, int iParam1)
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
				iVar0 = func_183(iParam0, iParam1, 4, 3);
				iVar1 = func_612(iVar0);
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
				iVar0 = func_183(iParam0, iParam1, 4, 4);
				iVar1 = func_612(iVar0);
			}
			if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || _0x341DE7ED1D2A1BFD(iVar0, 1863955539, false)) || _0x341DE7ED1D2A1BFD(iVar0, 2106216756, false)) || _0x341DE7ED1D2A1BFD(iVar0, -761463976, false)) || _0x341DE7ED1D2A1BFD(iVar0, 684992453, false)) || _0x341DE7ED1D2A1BFD(iVar0, 916636514, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar0, 264959411, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1127835965, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1119232689, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1207283343, false)) || _0x341DE7ED1D2A1BFD(iVar0, -849839091, false)) || _0x341DE7ED1D2A1BFD(iVar0, -2088146832, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1446333198, false)) || _0x341DE7ED1D2A1BFD(iVar0, -430330349, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1103045158, false)) || _0x341DE7ED1D2A1BFD(iVar0, 1055526375, false)) || _0x341DE7ED1D2A1BFD(iVar0, -2020757158, false))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_539(int iParam0, int iParam1)
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

bool func_540(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_183(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_174(iParam0, iVar3, iParam1, 4);
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

bool func_541(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_183(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_174(iParam0, iVar3, iParam1, 4);
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

bool func_542(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (_0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 4, 4), -1100807313, false))
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

int func_543(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						return _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam2, 11, 4), -530089825, false);
					}
					break;
			}
			break;
	}
	return false;
}

void func_544(int iParam0, int iParam1)
{
	if (func_546())
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
	else if (func_545())
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

int func_545()
{
	return is_dlc_present(1428761799);
}

int func_546()
{
	return is_dlc_present(-1005876368);
}

bool func_547(int iParam0, int iParam1)
{
	return false;
}

int func_548(int iParam0, int iParam1)
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

int func_549(int iParam0, int iParam1)
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
			iVar6 = func_551(iVar5, 0);
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
						iVar0 = func_612(iVar5);
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
						iVar0 = func_612(iVar5);
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
			iVar7 = func_550(iVar5, 0);
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
					iVar0 = func_612(iVar5);
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
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2020757158, false))
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
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1064262817, false))
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
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1419806467, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 7 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1053842259, false))
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
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1358888880, false))
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
		else if (_0x341DE7ED1D2A1BFD(iVar5, -441291342, false))
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
		else if (_0x341DE7ED1D2A1BFD(iVar5, -747583185, false))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (iVar1)
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
				else
				{
					return 2 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1986415230, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2088146832, false))
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
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -785939537, false))
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
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -872449705, false))
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
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 700658917, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1714969731, false))
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
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 745826556, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1055526375, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 144417099, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 492620493, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -416620954, false))
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
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -102825006, false))
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
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -733792105, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 137011325, false))
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
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -641612092, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 6 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1351486939, false))
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
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2119756144, false))
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
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1507532917, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
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
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 947651647, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1965569012, false) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2026620439, false) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1410897066, false))
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
		else if ((_0x341DE7ED1D2A1BFD(iVar5, -2017999390, false) || _0x341DE7ED1D2A1BFD(iVar5, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar5, -826135203, false))
		{
			return 7 + iVar4;
		}
		else
		{
			iVar0 = func_612(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 1:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 2:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 3:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 4:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 5:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 6:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 7:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 8:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 9:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 10:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 11:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 12:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 13:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 14:
				if (iVar1)
				{
					return 6 + iVar4;
				}
				else
				{
					return 6 + iVar4;
				}
				break;
			
			case 15:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 5 + iVar4;
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 1:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 2:
				if (iVar1)
				{
					return 4 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 3:
				if (iVar1)
				{
					return 6 + iVar4;
				}
				else
				{
					return 5 + iVar4;
				}
				break;
			
			case 4:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 5:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 6:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 7:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 8:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 9:
				return 2 + iVar4;
				break;
			
			case 10:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 11:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 12:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 13:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 14:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 4 + iVar4;
				}
				break;
			
			case 15:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			}
	}
	return 1 + iVar4;
	return 0;
}

int func_550(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_551(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (_0x341DE7ED1D2A1BFD(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_552(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar24;
	int iVar34;
	var uVar35;
	var uVar45;
	
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	Global_69311[1 /*14*/] = {func_630(iVar0, iParam1, iParam2)};
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = {func_178(iVar0, iParam2)};
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_552(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = {func_172(iVar0, uVar8[iVar4])};
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_552(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_69311[2 /*14*/] = {func_630(iVar0, 14, iVar6)};
									if (Global_69311[2 /*14*/].f_12 == iVar5)
									{
										if (func_552(iParam0, 14, iVar6))
										{
											if (!func_157(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_69311[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_190(iParam0, iVar4);
						Global_69311[2 /*14*/] = {func_630(iVar0, iVar4, iVar1)};
						if (!func_157(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_69311[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != 1849449579)
		{
			if (func_196(1749, Global_69309, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar35 = {func_172(iVar0, iParam2)};
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_552(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (get_ped_prop_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_3 && (get_ped_prop_texture_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_4 || Global_69311[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else
	{
		if (Global_69311[1 /*14*/].f_3 == get_ped_drawable_variation(iParam0, func_161(iParam1)) && Global_69311[1 /*14*/].f_4 == get_ped_texture_variation(iParam0, func_161(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (func_543(iVar0, 11, func_190(iParam0, 11)))
			{
				if (func_541(iVar0, 4, iParam2, &uVar45))
				{
					return func_552(iParam0, 4, uVar45);
				}
			}
			else if (func_540(iVar0, 4, iParam2, &uVar45))
			{
				return func_552(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}

int func_553(int iParam0, int iParam1, int iParam2)
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
	var uVar10;
	int iVar11;
	
	if (iParam1 == 11)
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam2 >= 0 && iParam2 <= 15) || (iParam2 >= 16 && iParam2 <= 31)) || (iParam2 >= 80 && iParam2 <= 95)) || (iParam2 >= 140 && iParam2 <= 155)) || (iParam2 >= 188 && iParam2 <= 203))
			{
				return 1;
			}
			else if (iParam2 >= 32 && iParam2 <= 47)
			{
				return 6;
			}
			else if (((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 108 && iParam2 <= 123))
			{
				return 11;
			}
			else if (iParam2 >= 96 && iParam2 <= 107)
			{
				return 41;
			}
			else if (iParam2 >= 156 && iParam2 <= 171)
			{
				return 36;
			}
			else if (iParam2 >= 172 && iParam2 <= 187)
			{
				return 31;
			}
			else if (iParam2 >= 204 && iParam2 <= 219)
			{
				return 16;
			}
			else if ((iParam2 >= 220 && iParam2 <= 235) || (iParam2 >= 124 && iParam2 <= 139))
			{
				return 26;
			}
			else if (iParam2 == 236)
			{
				return 21;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_183(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = _0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_174(iParam0, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam2 >= 0 && iParam2 <= 15) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 176 && iParam2 <= 191)) || (iParam2 >= 192 && iParam2 <= 207)) || (iParam2 >= 208 && iParam2 <= 223)) || (iParam2 >= 240 && iParam2 <= 255))
			{
				return 1;
			}
			else if (((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 112 && iParam2 <= 127)) || (iParam2 >= 128 && iParam2 <= 143))
			{
				return 16;
			}
			else if (iParam2 >= 32 && iParam2 <= 47)
			{
				return 6;
			}
			else if (iParam2 >= 48 && iParam2 <= 63)
			{
				return 11;
			}
			else if ((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 160 && iParam2 <= 175))
			{
				return 21;
			}
			else if (iParam2 >= 224 && iParam2 <= 239)
			{
				return 26;
			}
			else if (iParam2 >= 144 && iParam2 <= 159)
			{
				return 0;
			}
			else if (iParam2 >= 80 && iParam2 <= 95)
			{
				return 31;
			}
			else if (iParam2 >= 256)
			{
				iVar6 = func_183(iParam0, iParam2, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = _0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						get_variant_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_174(iParam0, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

bool func_554(int iParam0)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = get_entity_model(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (func_190(iParam0, 9) != 0)
			{
				return true;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (func_190(iParam0, 9) != 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_555(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	
	if (!has_ped_head_blend_finished(iParam0))
	{
	}
	_get_ped_head_blend_data(iParam0, &Var0);
	iVar10 = func_196(2087, iParam1, 0);
	iVar11 = func_196(2088, iParam1, 0);
	iVar12 = func_196(2089, iParam1, 0);
	iVar13 = func_196(2090, iParam1, 0);
	iVar14 = func_196(2091, iParam1, 0);
	iVar15 = func_196(2092, iParam1, 0);
	fVar16 = func_571(134, iParam1);
	fVar17 = func_571(135, iParam1);
	fVar18 = func_571(136, iParam1);
	iVar19 = func_527(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != iVar19)
	{
		set_ped_head_blend_data(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, iVar19);
		iVar20 = func_196(2093, iParam1, 0);
		if (iVar20 > 0)
		{
			func_556(iParam0, iParam1, 0);
		}
	}
}

void func_556(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_570(iVar1);
		if (!iParam2)
		{
			fVar3 = func_571(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_569(iVar2, iParam1);
		}
		_set_ped_face_feature(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_568(iVar4);
		iVar6 = func_567(iVar5);
		iVar7 = func_566(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!iParam2)
			{
				iVar10 = func_563(iVar6, iParam1, -1);
				fVar11 = func_571(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_562(iVar6, iParam1);
				fVar11 = func_569(iVar7, iParam1);
			}
			set_ped_head_overlay(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_561(iVar5);
			iVar9 = func_560(iVar5);
			if (iVar8 != -1)
			{
				if (!iParam2)
				{
					iVar13 = func_196(iVar8, iParam1, 0);
					iVar14 = func_196(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_559(iVar8, iParam1);
					iVar14 = func_559(iVar9, iParam1);
				}
				func_558(iVar13, &iVar12, &iVar15);
				_set_ped_head_overlay_color(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_557(&iParam0, iParam1, iParam2);
}

void func_557(int iParam0, int iParam1, int iParam2)
{
	Vector3 fVar0;
	
	if (!iParam2)
	{
		fVar0 = func_571(157, iParam1);
	}
	else
	{
		fVar0 = func_569(157, iParam1);
	}
	if (*iParam0 == player_ped_id())
	{
	}
	_set_ped_eye_color(*iParam0, round(fVar0));
}

void func_558(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = (iParam0 && 65535);
	*uParam2 = iVar0;
}

int func_559(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_195(iParam1)];
	if (set_userids_uihidden(iVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_560(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2151;
		
		case 1:
			return 2152;
		
		case 5:
			return 2153;
		
		case 8:
			return 2154;
		
		case 10:
			return 2149;
		
		default:
	}
	return -1;
}

int func_561(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2144;
		
		case 1:
			return 2145;
		
		case 5:
			return 2146;
		
		case 8:
			return 2147;
		
		case 10:
			return 2148;
		
		default:
	}
	return -1;
}

int func_562(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam1);
		iVar2 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam1);
		iVar2 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
		iVar2 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
		iVar2 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam1);
		iVar2 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
		iVar2 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	if (!_0x90A6526CF0381030(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_563(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	iVar0 = 0;
	iVar1 = func_565(iParam0, iParam1);
	iVar2 = func_564(iParam0);
	if (0 != iVar1)
	{
		if (!stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_564(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	return iVar0;
}

int func_565(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_567(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_568(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_569(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2489085[iParam0 /*5*/][func_195(iParam1)];
	if (_0x5FBD7095FE7AE57F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_571(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2489085[iParam0 /*5*/][func_195(iParam1)];
	if (stat_get_float(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

bool func_572(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_2560803 == iParam1)
		{
			iVar2 = Global_2560802;
			iVar1 = Global_2560801;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_183(iParam0, iParam1, 7, 3);
			iVar1 = func_612(iVar2);
			Global_2560803 = iParam1;
			Global_2560802 = iVar2;
			Global_2560801 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_2560806 == iParam3)
		{
			iVar4 = Global_2560805;
			iVar3 = Global_2560804;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_183(iParam0, iParam3, 11, 3);
			iVar3 = func_612(iVar4);
			Global_2560806 = iParam3;
			Global_2560805 = iVar4;
			Global_2560804 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_2560809 == iParam4)
		{
			iVar6 = Global_2560808;
			iVar5 = Global_2560807;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_183(iParam0, iParam4, 8, 3);
			iVar5 = func_612(iVar6);
			Global_2560809 = iParam4;
			Global_2560808 = iVar6;
			Global_2560807 = iVar5;
		}
		if (_0x341DE7ED1D2A1BFD(iVar2, -120244486, false))
		{
			if (iParam9 != -99)
			{
				iVar7 = -1;
				if (iParam9 >= 327)
				{
					iVar7 = func_183(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return false;
				}
				switch (iVar7)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case -1854813796:
					case -1257185072:
					case -75666008:
					case -451657514:
					case -1339992339:
					case -1987638855:
					case 1148780446:
						return false;
						break;
					}
				}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -1473812293, false))
			{
				if (_0x341DE7ED1D2A1BFD(iVar2, 1396865968, false))
				{
					if ((((((((((((((((((((((((((((((_0x341DE7ED1D2A1BFD(iVar4, -870074461, false) || _0x341DE7ED1D2A1BFD(iVar4, -868698159, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1769225721, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1834446747, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1119232689, false)) || _0x341DE7ED1D2A1BFD(iVar4, -2102859770, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1784133476, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2099109084, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1488441032, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1719167561, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1274099003, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar4, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar4, -826135203, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1431529976, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1723403459, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2044466679, false)) || _0x341DE7ED1D2A1BFD(iVar4, -2020757158, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1064262817, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1419806467, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1053842259, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1358888880, false)) || _0x341DE7ED1D2A1BFD(iVar4, -441291342, false)) || _0x341DE7ED1D2A1BFD(iVar4, -785939537, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1507532917, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1446333198, false)) || _0x341DE7ED1D2A1BFD(iVar4, 492620493, false)) || _0x341DE7ED1D2A1BFD(iVar4, -416620954, false)) || _0x341DE7ED1D2A1BFD(iVar4, -102825006, false)) || _0x341DE7ED1D2A1BFD(iVar4, 137011325, false)) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, false))
					{
						return false;
					}
					else if (func_574(iParam0, iParam3))
					{
					}
					else
					{
						return false;
					}
				}
				else if (func_574(iParam0, iParam3))
				{
					return false;
				}
				else if (_0x341DE7ED1D2A1BFD(iVar2, -120244486, false))
				{
					if (((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || _0x341DE7ED1D2A1BFD(iVar4, -1127835965, false))
					{
						return false;
					}
				}
			}
			if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -353070590, false))
			{
				if (((_0x341DE7ED1D2A1BFD(iVar4, -870074461, false) || _0x341DE7ED1D2A1BFD(iVar4, -868698159, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1769225721, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1834446747, false))
				{
				}
				else
				{
					return false;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, 654065530, false))
			{
				if (_0x341DE7ED1D2A1BFD(iVar4, -7109286, false) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, false))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, 596326873, false))
		{
			if (iParam3 != -99)
			{
				if (_0x341DE7ED1D2A1BFD(iVar2, -319568873, false))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return false;
					}
				}
				if (iParam3 == 236)
				{
					if (_0x341DE7ED1D2A1BFD(iVar2, 525778571, false))
					{
						return false;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || _0x341DE7ED1D2A1BFD(iVar4, 1625463492, false)) || _0x341DE7ED1D2A1BFD(iVar4, -713698407, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1843965488, false)) || _0x341DE7ED1D2A1BFD(iVar4, -779835469, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1086258388, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1627756587, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1021189127, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar4, 441715397, false)) || _0x341DE7ED1D2A1BFD(iVar4, 264959411, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1127835965, false)) || _0x341DE7ED1D2A1BFD(iVar4, 153792394, false)) || _0x341DE7ED1D2A1BFD(iVar4, -672871169, false)) || _0x341DE7ED1D2A1BFD(iVar4, 572416369, false)) || _0x341DE7ED1D2A1BFD(iVar4, -196114988, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1322269404, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1769225721, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1655154167, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1607949555, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2099109084, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1488441032, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1719167561, false)) || _0x341DE7ED1D2A1BFD(iVar4, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar4, -2017999390, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar4, -826135203, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1431529976, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1723403459, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2044466679, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1419806467, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1053842259, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1358888880, false)) || _0x341DE7ED1D2A1BFD(iVar4, -785939537, false)) || _0x341DE7ED1D2A1BFD(iVar4, -416620954, false)) || _0x341DE7ED1D2A1BFD(iVar4, -102825006, false)) || _0x341DE7ED1D2A1BFD(iVar4, 137011325, false)) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1351486939, false)) || _0x341DE7ED1D2A1BFD(iVar4, -491588875, false))
				{
					return false;
				}
				else if (!_0x341DE7ED1D2A1BFD(iVar2, 525778571, false))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || _0x341DE7ED1D2A1BFD(iVar6, 651155766, false))
				{
					return false;
				}
			}
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -319568873, false))
		{
			if (iParam8 != -99)
			{
				return false;
			}
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -713698407, false))
		{
			if (iParam9 >= 327 && _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam9, 14, 3), -713698407, true))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return false;
			}
		}
		else if ((iParam9 >= 327 && _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam9, 14, 3), -713698407, true)) && iParam1 != 0)
		{
			return false;
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -1119006951, false))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || _0x341DE7ED1D2A1BFD(iVar4, 248194463, false)) || _0x341DE7ED1D2A1BFD(iVar4, 572350888, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1817355735, false)) || _0x341DE7ED1D2A1BFD(iVar4, -713698407, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1843965488, false)) || _0x341DE7ED1D2A1BFD(iVar4, 140732128, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1863955539, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1627756587, false)) || _0x341DE7ED1D2A1BFD(iVar4, 441715397, false)) || _0x341DE7ED1D2A1BFD(iVar4, 153792394, false)) || _0x341DE7ED1D2A1BFD(iVar4, 572416369, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2099109084, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1488441032, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1538937264, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2044466679, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1064262817, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1053842259, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1358888880, false)) || _0x341DE7ED1D2A1BFD(iVar4, -441291342, false)) || _0x341DE7ED1D2A1BFD(iVar4, -785939537, false)) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, false))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || _0x341DE7ED1D2A1BFD(iVar6, -1778265882, false)) || _0x341DE7ED1D2A1BFD(iVar6, 1965569012, false)) || _0x341DE7ED1D2A1BFD(iVar6, 651155766, false)) || _0x341DE7ED1D2A1BFD(iVar6, -1914383230, false)) || _0x341DE7ED1D2A1BFD(iVar6, 1553766533, false)) || _0x341DE7ED1D2A1BFD(iVar6, 505220913, false))
				{
					return false;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return false;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return false;
				}
			}
			if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 2066241403, false))
			{
				return false;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -920534092, false)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_614(iParam0, iParam3)) || iVar3 == 13)
				{
					if (((_0x341DE7ED1D2A1BFD(iVar4, -1446333198, false) || _0x341DE7ED1D2A1BFD(iVar4, 492620493, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1351486939, false)) || _0x341DE7ED1D2A1BFD(iVar4, -7109286, false))
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -1778265882, false))) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 505220913, false)))
				{
				}
				else
				{
					iVar0 = func_190(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_612(func_183(iParam0, iVar0, 11, 3)) == 13))
					{
						return true;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return true;
						}
					}
					return false;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_614(iParam0, iParam3)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((_0x341DE7ED1D2A1BFD(iVar4, -1446333198, false) || _0x341DE7ED1D2A1BFD(iVar4, 492620493, false)) || _0x341DE7ED1D2A1BFD(iVar4, -7109286, false))
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -1778265882, false))) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 1965569012, false))) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 651155766, false))) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 505220913, false))) || _0x341DE7ED1D2A1BFD(iVar6, -893126917, false)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					iVar0 = func_190(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_612(func_183(iParam0, iVar0, 11, 3)) == 13))
					{
						return true;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, false))
							{
								return true;
							}
						}
					}
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -1950939707, false))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || _0x341DE7ED1D2A1BFD(iVar4, 1769225721, false)) || iVar4 == 1343601766) || iVar4 == 567992305) || iVar4 == -192707261) || iVar4 == 1156347903) || iVar4 == 1853344529) || iVar4 == 1597648022) || iVar4 == -1995669446)
				{
					if (!_0x341DE7ED1D2A1BFD(iVar4, -7109286, false))
					{
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
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 1965569012, false))) || _0x341DE7ED1D2A1BFD(iVar6, -893126917, false)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, false))
							{
								return true;
							}
						}
					}
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -1371423804, false))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1625463492, false))
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 651155766, false)) && _0x341DE7ED1D2A1BFD(iVar2, -277681306, false)) || ((iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 505220913, false)) && !_0x341DE7ED1D2A1BFD(iVar2, -277681306, false)))
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -108328099, false))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -1305325922) || iVar6 == 242616108) || iVar6 == 1085565864) || iVar6 == -1968210019) || iVar6 == 2028002304) || iVar6 == 830393657) || iVar6 == -473747009) || iVar6 == 240453350) || iVar6 == 1083927410) || _0x341DE7ED1D2A1BFD(iVar6, 684992453, false)) || _0x341DE7ED1D2A1BFD(iVar6, 1458930564, false)) || _0x341DE7ED1D2A1BFD(iVar6, 2048281121, false)) || _0x341DE7ED1D2A1BFD(iVar6, 19149565, false))
				{
					if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, false))
					{
					}
					else
					{
						return false;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, false))
							{
								return true;
							}
						}
					}
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -378906828, false))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || _0x341DE7ED1D2A1BFD(iVar4, 470686834, false))
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || _0x341DE7ED1D2A1BFD(iVar6, 684992453, false))
				{
					if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, false))
					{
					}
					else
					{
						return false;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, false))
							{
								return true;
							}
						}
					}
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -695703461, false))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || _0x341DE7ED1D2A1BFD(iVar4, 470686834, false))
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_573(iVar6)) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 310957510, false)))
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -1473812293, false))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return false;
				}
				else if ((iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1627756587, false)) || (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1322269404, false)))
				{
					return false;
				}
				else if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -713698407, false))
				{
					return false;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return false;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar8 = -1;
		iVar9 = -1;
		if (iParam1 >= 55)
		{
			iVar9 = func_183(iParam0, iParam1, 7, 4);
			iVar8 = func_612(iVar9);
		}
		iVar10 = -1;
		iVar11 = -1;
		if (iParam3 >= 256)
		{
			iVar11 = func_183(iParam0, iParam3, 11, 4);
			iVar10 = func_612(iVar11);
		}
		iVar12 = -1;
		if (iParam9 >= 327)
		{
			iVar12 = func_183(iParam0, iParam9, 14, 4);
		}
		iVar13 = -1;
		iVar14 = -1;
		if (iParam4 >= 136)
		{
			iVar13 = func_183(iParam0, iParam4, 8, 4);
			iVar14 = func_612(iVar13);
		}
		if (iParam3 != -99)
		{
			if (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, -1473812293, false))
			{
				if (_0x341DE7ED1D2A1BFD(iVar9, 1396865968, false))
				{
					if (((((((_0x341DE7ED1D2A1BFD(iVar11, -1410897066, false) || _0x341DE7ED1D2A1BFD(iVar11, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar11, -826135203, false)) || _0x341DE7ED1D2A1BFD(iVar11, -747583185, false)) || _0x341DE7ED1D2A1BFD(iVar11, -416620954, false)) || _0x341DE7ED1D2A1BFD(iVar11, -733792105, false)) || _0x341DE7ED1D2A1BFD(iVar11, -641612092, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1507532917, false))
					{
						return false;
					}
					else if (func_574(iParam0, iParam3))
					{
					}
					else
					{
						return false;
					}
				}
				else if (func_574(iParam0, iParam3))
				{
					return false;
				}
			}
			if (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, -353070590, false))
			{
				if ((((_0x341DE7ED1D2A1BFD(iVar11, -870074461, false) || _0x341DE7ED1D2A1BFD(iVar11, -1174924468, false)) || _0x341DE7ED1D2A1BFD(iVar11, -868698159, false)) || _0x341DE7ED1D2A1BFD(iVar11, 1769225721, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1834446747, false))
				{
				}
				else
				{
					return false;
				}
			}
		}
		if (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, -713698407, false))
		{
			if (iParam9 >= 327 && _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam9, 14, 4), -713698407, true))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return false;
			}
		}
		else if ((iParam9 >= 327 && _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam9, 14, 4), -713698407, true)) && iParam1 != 0)
		{
			return false;
		}
		if (iVar9 != -1 && (_0x341DE7ED1D2A1BFD(iVar9, -920534092, false) || _0x341DE7ED1D2A1BFD(iVar9, 1537081084, false)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((_0x341DE7ED1D2A1BFD(iVar11, 684992453, false) || _0x341DE7ED1D2A1BFD(iVar11, 916636514, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar11, -820724897, false)) || _0x341DE7ED1D2A1BFD(iVar11, 153792394, false)) || _0x341DE7ED1D2A1BFD(iVar11, -872449705, false)) || _0x341DE7ED1D2A1BFD(iVar11, 1714969731, false)) || _0x341DE7ED1D2A1BFD(iVar11, 1055526375, false)) || _0x341DE7ED1D2A1BFD(iVar11, 947651647, false)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar10 == 7)
				{
				}
				else if ((_0x341DE7ED1D2A1BFD(iVar11, 700658917, false) || _0x341DE7ED1D2A1BFD(iVar11, 745826556, false)) || _0x341DE7ED1D2A1BFD(iVar11, 144417099, false))
				{
					if (_0x341DE7ED1D2A1BFD(iVar9, 1537081084, false))
					{
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
			else if (iParam2 == 8)
			{
				if (_0x341DE7ED1D2A1BFD(iVar13, 1553766533, false) || _0x341DE7ED1D2A1BFD(iVar13, -1914383230, false))
				{
					if (_0x341DE7ED1D2A1BFD(iVar9, -920534092, false))
					{
						if (_0x341DE7ED1D2A1BFD(iVar13, 441715397, false) || _0x341DE7ED1D2A1BFD(iVar13, 264959411, false))
						{
							if (_0x341DE7ED1D2A1BFD(iVar9, 1828206051, false))
							{
							}
							else
							{
								return false;
							}
						}
						else if (_0x341DE7ED1D2A1BFD(iVar9, 1828206051, false))
						{
							return false;
						}
					}
				}
				else
				{
					return false;
				}
			}
		}
		if (iParam9 != -99)
		{
			if (iVar12 != -1 && _0x341DE7ED1D2A1BFD(iVar12, 1406402954, true))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar8 == 1) || iVar8 == 2) || (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, 1406402954, false)))
				{
					return false;
				}
			}
		}
		if (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, 596326873, false))
		{
			if (iParam3 != -99)
			{
				if ((((_0x341DE7ED1D2A1BFD(iVar11, -1358888880, false) || _0x341DE7ED1D2A1BFD(iVar11, -102825006, false)) || _0x341DE7ED1D2A1BFD(iVar11, -733792105, false)) || _0x341DE7ED1D2A1BFD(iVar11, -641612092, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1507532917, false))
				{
					return false;
				}
				else if (func_614(iParam0, iParam3))
				{
				}
				else if (((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar10 == 2) || iVar10 == 11) || _0x341DE7ED1D2A1BFD(iVar11, 2026620439, false)) || _0x341DE7ED1D2A1BFD(iVar11, -761463976, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1347486026, false)) || _0x341DE7ED1D2A1BFD(iVar11, -939525357, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1119232689, false)) || _0x341DE7ED1D2A1BFD(iVar11, -2102859770, false)) || _0x341DE7ED1D2A1BFD(iVar11, 1784133476, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1488441032, false)) || _0x341DE7ED1D2A1BFD(iVar11, 2044466679, false)) || _0x341DE7ED1D2A1BFD(iVar11, -2020757158, false)) || _0x341DE7ED1D2A1BFD(iVar11, -430330349, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1351486939, false)) || _0x341DE7ED1D2A1BFD(iVar11, 2030343924, false)) || iVar11 == 998321559) || iVar11 == 619380843)
				{
					if (!_0x341DE7ED1D2A1BFD(iVar9, 525778571, false))
					{
						return false;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar10 == 3) || iVar10 == 9) || iVar10 == 14) || _0x341DE7ED1D2A1BFD(iVar11, -530089825, false)) || _0x341DE7ED1D2A1BFD(iVar11, 1965569012, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1200513218, false)) || _0x341DE7ED1D2A1BFD(iVar11, -713698407, false)) || _0x341DE7ED1D2A1BFD(iVar11, 1843965488, false)) || _0x341DE7ED1D2A1BFD(iVar11, -55104292, false)) || _0x341DE7ED1D2A1BFD(iVar11, -779835469, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1086258388, false)) || _0x341DE7ED1D2A1BFD(iVar11, 140732128, false)) || _0x341DE7ED1D2A1BFD(iVar11, 2106216756, false)) || _0x341DE7ED1D2A1BFD(iVar11, 1627756587, false)) || _0x341DE7ED1D2A1BFD(iVar11, 441715397, false)) || _0x341DE7ED1D2A1BFD(iVar11, 264959411, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1127835965, false)) || _0x341DE7ED1D2A1BFD(iVar11, -672871169, false)) || _0x341DE7ED1D2A1BFD(iVar11, 572416369, false)) || _0x341DE7ED1D2A1BFD(iVar11, -196114988, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1607949555, false)) || _0x341DE7ED1D2A1BFD(iVar11, 1976716889, false)) || _0x341DE7ED1D2A1BFD(iVar11, 2099109084, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1488441032, false)) || _0x341DE7ED1D2A1BFD(iVar11, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar11, -2017999390, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar11, -826135203, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1053842259, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1358888880, false)) || _0x341DE7ED1D2A1BFD(iVar11, -441291342, false)) || _0x341DE7ED1D2A1BFD(iVar11, -747583185, false)) || _0x341DE7ED1D2A1BFD(iVar11, 1407863332, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1986415230, false)) || _0x341DE7ED1D2A1BFD(iVar11, -785939537, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1103045158, false)) || _0x341DE7ED1D2A1BFD(iVar11, -102825006, false)) || _0x341DE7ED1D2A1BFD(iVar11, -641612092, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1507532917, false))
				{
					return false;
				}
				else if (_0x341DE7ED1D2A1BFD(iVar9, 525778571, false))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar14 == 11) || _0x341DE7ED1D2A1BFD(iVar13, 1455992833, false)) || _0x341DE7ED1D2A1BFD(iVar13, 153792394, false)) || _0x341DE7ED1D2A1BFD(iVar13, -870074461, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1174924468, false)) || _0x341DE7ED1D2A1BFD(iVar13, -868698159, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1177480446, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1347486026, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1655154167, false)) || _0x341DE7ED1D2A1BFD(iVar13, -2105858993, false)) || _0x341DE7ED1D2A1BFD(iVar13, 1893564692, false)) || _0x341DE7ED1D2A1BFD(iVar13, 1710451520, false)) || _0x341DE7ED1D2A1BFD(iVar13, 1416808511, false)) || _0x341DE7ED1D2A1BFD(iVar13, 1641506460, false)) || _0x341DE7ED1D2A1BFD(iVar13, 699233865, false)) || iVar13 == -565297075) || iVar13 == 262349558) || iVar13 == -917804055) || iVar13 == -1156067454) || iVar13 == -2124751863) || iVar13 == 1812836719) || iVar13 == 1582116924) || iVar13 == 877452376) || iVar13 == 1117419763) || iVar13 == 732885188) || iVar13 == -1037820496) || iVar13 == -79097863) || _0x341DE7ED1D2A1BFD(iVar13, -1119232689, false)) || _0x341DE7ED1D2A1BFD(iVar13, -2102859770, false)) || _0x341DE7ED1D2A1BFD(iVar13, 1784133476, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1607949555, false)) || _0x341DE7ED1D2A1BFD(iVar13, 1976716889, false)) || _0x341DE7ED1D2A1BFD(iVar13, 2099109084, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1488441032, false)) || _0x341DE7ED1D2A1BFD(iVar13, 2044466679, false)) || _0x341DE7ED1D2A1BFD(iVar13, -2020757158, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1064262817, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1419806467, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1053842259, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1358888880, false)) || _0x341DE7ED1D2A1BFD(iVar13, -849839091, false)) || _0x341DE7ED1D2A1BFD(iVar13, -2088146832, false)) || _0x341DE7ED1D2A1BFD(iVar13, -352447393, false)) || _0x341DE7ED1D2A1BFD(iVar13, -642551350, false)) || _0x341DE7ED1D2A1BFD(iVar13, -819569488, false)) || _0x341DE7ED1D2A1BFD(iVar13, -2020068325, false))
				{
					if (!_0x341DE7ED1D2A1BFD(iVar9, 525778571, false))
					{
						return false;
					}
				}
				else if (((((((_0x341DE7ED1D2A1BFD(iVar13, 1965569012, false) || _0x341DE7ED1D2A1BFD(iVar13, 684992453, false)) || _0x341DE7ED1D2A1BFD(iVar13, 916636514, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar13, 441715397, false)) || _0x341DE7ED1D2A1BFD(iVar13, 264959411, false)) || _0x341DE7ED1D2A1BFD(iVar13, 1353777856, false)) || _0x341DE7ED1D2A1BFD(iVar13, -1207283343, false))
				{
					return false;
				}
				else if (func_613(iParam0, iParam4, 0) != -99)
				{
					if (_0x341DE7ED1D2A1BFD(iVar9, 525778571, false))
					{
						return false;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return false;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, 654065530, false))
			{
				if (_0x341DE7ED1D2A1BFD(iVar11, -1351486939, false))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar8 == 3) || (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, -1320139576, false)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar10 == 3) || iVar10 == 7) || iVar10 == 10) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 1147939952, false)))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam4, 8, 4), 1147939952, false))
				{
					return false;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar12 != -1 && _0x341DE7ED1D2A1BFD(iVar12, -1320139576, true))
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar8 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar10 == 3) || iVar10 == 7) || iVar10 == 10) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 1147939952, false)))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam4, 8, 4), 1147939952, false))
				{
					return false;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar12 != -1 && _0x341DE7ED1D2A1BFD(iVar12, -1320139576, true))
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar8 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar10 == 3) || iVar10 == 7) || iVar10 == 10) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 1147939952, false)))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam4, 8, 4), 1147939952, false))
				{
					return false;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar12 != -1 && _0x341DE7ED1D2A1BFD(iVar12, -1320139576, true))
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar8 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar10 == 3) || iVar10 == 9) || iVar10 == 14) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 1965569012, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 396458410, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -761463976, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 103539798, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1347486026, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -994703884, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1119232689, false))) || _0x341DE7ED1D2A1BFD(iVar11, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar11, -2017999390, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar11, -826135203, false)) || _0x341DE7ED1D2A1BFD(iVar11, 2044466679, false)) || _0x341DE7ED1D2A1BFD(iVar11, -2020757158, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1064262817, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1053842259, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1358888880, false)) || _0x341DE7ED1D2A1BFD(iVar11, -441291342, false)) || _0x341DE7ED1D2A1BFD(iVar11, -747583185, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1986415230, false)) || _0x341DE7ED1D2A1BFD(iVar11, -430330349, false)) || _0x341DE7ED1D2A1BFD(iVar11, -102825006, false)) || _0x341DE7ED1D2A1BFD(iVar11, -733792105, false)) || _0x341DE7ED1D2A1BFD(iVar11, -641612092, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1351486939, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1507532917, false)) || _0x341DE7ED1D2A1BFD(iVar11, 2030343924, false))
				{
					return false;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar8 == 7) || (iParam1 >= 55 && _0x341DE7ED1D2A1BFD(iVar9, 2083259958, false)))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar10 == 2) || iVar10 == 3) || iVar10 == 9) || iVar10 == 14) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 396458410, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -761463976, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 821147517, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 103539798, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1347486026, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -994703884, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1119232689, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1607949555, false))) || _0x341DE7ED1D2A1BFD(iVar11, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar11, -2017999390, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar11, -826135203, false)) || _0x341DE7ED1D2A1BFD(iVar11, 1965569012, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1064262817, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1053842259, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1358888880, false)) || _0x341DE7ED1D2A1BFD(iVar11, -441291342, false)) || _0x341DE7ED1D2A1BFD(iVar11, -747583185, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1986415230, false)) || _0x341DE7ED1D2A1BFD(iVar11, -430330349, false)) || _0x341DE7ED1D2A1BFD(iVar11, -102825006, false)) || _0x341DE7ED1D2A1BFD(iVar11, -733792105, false)) || _0x341DE7ED1D2A1BFD(iVar11, -641612092, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1351486939, false)) || _0x341DE7ED1D2A1BFD(iVar11, -1507532917, false)) || _0x341DE7ED1D2A1BFD(iVar11, 2030343924, false))
				{
					return false;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar10 == 7) || iVar10 == 10) || iVar10 == 12) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 1147939952, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1200513218, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, false))) || _0x341DE7ED1D2A1BFD(iVar11, -747583185, false))
				{
					if (iParam1 >= 55 && _0x341DE7ED1D2A1BFD(iVar9, 2083259958, false))
					{
						return false;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam4, 8, 4), 1965569012, false))
				{
					if (iParam1 >= 55 && _0x341DE7ED1D2A1BFD(iVar9, 2083259958, false))
					{
						return false;
					}
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar12 != -1 && _0x341DE7ED1D2A1BFD(iVar12, -1320139576, true))
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar8 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar10 == 0) || iVar10 == 2) || iVar10 == 4) || iVar10 == 5) || iVar10 == 9) || iVar10 == 11) || iVar10 == 12) || iVar10 == 13) || iVar10 == 15) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1200513218, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -530089825, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 103539798, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -994703884, false)))
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar8 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar10 == 0) || iVar10 == 4) || iVar10 == 5) || iVar10 == 11) || iVar10 == 12) || iVar10 == 13) || iVar10 == 15) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1200513218, false))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -530089825, false)))
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && _0x341DE7ED1D2A1BFD(func_183(iParam0, iParam4, 8, 4), -7109286, false))
				{
					return false;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if (iParam1 >= 55 && _0x341DE7ED1D2A1BFD(iVar9, 1716958480, false))
		{
			if (iParam3 != -99)
			{
				if (iVar11 != -1 && _0x341DE7ED1D2A1BFD(iVar11, -747583185, false))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (iParam11 != -99)
			{
				iVar15 = -1;
				if (iParam11 >= 256)
				{
					iVar15 = func_183(iParam0, iParam11, 4, 4);
				}
				if (_0x341DE7ED1D2A1BFD(iVar15, -33031567, false))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool func_573(int iParam0)
{
	if (iParam0 != -1)
	{
		return false;
	}
	switch (iParam0)
	{
		case -783649692:
		case 691352495:
		case 1313566316:
		case 451909412:
		case 1552550633:
		case -206550874:
		case 860928119:
		case -445797343:
		case 1107219923:
		case -173716332:
		case -2017140386:
		case -538304226:
		case -1235599732:
		case -592242000:
		case 1815489089:
		case -831095241:
		case 2062043045:
		case -1092100326:
		case -1065332020:
		case -1465994616:
		case -1516536717:
		case 507503642:
		case -1470397961:
		case -1392082519:
		case 264425668:
		case -88859389:
		case 560755735:
		case 157858412:
		case -593565059:
		case -513152401:
		case -286945526:
		case 2004948615:
			return true;
			break;
	}
	return false;
}

int func_574(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_183(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if ((((((((((((((((((((((_0x341DE7ED1D2A1BFD(iVar0, -1119232689, false) || _0x341DE7ED1D2A1BFD(iVar0, -2102859770, false)) || _0x341DE7ED1D2A1BFD(iVar0, 1784133476, false)) || _0x341DE7ED1D2A1BFD(iVar0, 1976716889, false)) || _0x341DE7ED1D2A1BFD(iVar0, 2099109084, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1488441032, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1719167561, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1274099003, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar0, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar0, -826135203, false)) || _0x341DE7ED1D2A1BFD(iVar0, 1431529976, false)) || _0x341DE7ED1D2A1BFD(iVar0, 1723403459, false)) || _0x341DE7ED1D2A1BFD(iVar0, 2044466679, false)) || _0x341DE7ED1D2A1BFD(iVar0, -2020757158, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1064262817, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1419806467, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1053842259, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1358888880, false)) || _0x341DE7ED1D2A1BFD(iVar0, -441291342, false)) || _0x341DE7ED1D2A1BFD(iVar0, -785939537, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1446333198, false)) || _0x341DE7ED1D2A1BFD(iVar0, 492620493, false))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (_0x341DE7ED1D2A1BFD(iVar0, -2017999390, false))
			{
				return 1;
			}
		}
		return func_614(iParam0, iParam1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_183(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_612(iVar1);
		}
		if (((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || _0x341DE7ED1D2A1BFD(iVar1, -1393156190, false)) || _0x341DE7ED1D2A1BFD(iVar1, 1843965488, false)) || _0x341DE7ED1D2A1BFD(iVar1, 441715397, false)) || _0x341DE7ED1D2A1BFD(iVar1, 264959411, false)) || _0x341DE7ED1D2A1BFD(iVar1, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar1, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar1, -2017999390, false)) || _0x341DE7ED1D2A1BFD(iVar1, -826135203, false)) || _0x341DE7ED1D2A1BFD(iVar1, -747583185, false)) || _0x341DE7ED1D2A1BFD(iVar1, -102825006, false)) || _0x341DE7ED1D2A1BFD(iVar1, -733792105, false)) || _0x341DE7ED1D2A1BFD(iVar1, -641612092, false)) || _0x341DE7ED1D2A1BFD(iVar1, -1507532917, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_575(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_entity_model(iParam0);
	func_608(get_hash_key("hairOverlay"), iParam0);
	iVar1 = func_607(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_69309;
		}
		func_624(iVar1, 1, Global_69309);
	}
	func_576(iParam0, iParam3, 0);
}

void func_576(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = Global_69309;
		_clear_ped_facial_decorations(iParam0);
		iVar14 = func_606(iParam0);
		iVar15 = func_597(iParam0);
		iVar16 = func_595(iParam0);
		iVar17 = func_594(iParam0);
		if (iParam1)
		{
			iVar16 = true;
		}
		if (iParam2)
		{
			iVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (func_587(iVar18, iVar0))
			{
				if (func_579(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (func_578(&Var1, Var1.f_4, Var1.f_8, iVar15, iVar16, iParam1, iVar17))
					{
						_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_587(123, iVar0))
		{
			if (_get_tattoo_zone(-1719270477, -1824026490) != 7)
			{
				_set_ped_decoration(iParam0, -1719270477, -1824026490);
			}
		}
		iVar20 = _0x278F76C3B0A8F109(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (_0xFF56381874F82086(iVar14, iVar19, &Var21))
			{
				if (!_is_dlc_data_empty(Var21))
				{
					iVar36 = 129 + iVar19;
					if (func_587(iVar36, iVar0))
					{
						if (func_578(&(Var21.f_7), Var21.f_2, Var21.f_6, iVar15, iVar16, iParam1, iVar17))
						{
							_set_ped_decoration(iParam0, Var21.f_2, Var21.f_3);
							func_577(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}

void func_577(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case -1194930348:
			switch (iParam2)
			{
				case -841238543:
					_set_ped_decoration(iParam0, -1194930348, -441419962);
					break;
				
				case -1405854945:
					_set_ped_decoration(iParam0, -1194930348, 1647997020);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam2)
			{
				case 671171671:
					_set_ped_decoration(iParam0, -777275782, 904519720);
					break;
				
				case 1911627074:
					_set_ped_decoration(iParam0, -777275782, -607391498);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					_set_ped_decoration(iParam0, 484754152, -588549683);
					_set_ped_decoration(iParam0, 484754152, 464027076);
					break;
				
				case -1261787835:
					_set_ped_decoration(iParam0, 484754152, -965491494);
					_set_ped_decoration(iParam0, 484754152, 939374190);
					break;
			}
			break;
	}
}

bool func_578(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = get_entity_model(player_ped_id());
	if (iParam1 == 449512698)
	{
		return false;
	}
	switch (iParam2)
	{
		case -1409061796:
		case -454273031:
		case -388268096:
		case -763917073:
		case -2066166276:
		case -793495770:
		case -1469750959:
		case 1361645381:
		case -1238079313:
		case -1459967458:
		case 1548327796:
		case 1586504577:
		case 1753976524:
		case 849089063:
		case 1192230427:
		case 129912816:
			if (iParam3)
			{
				return false;
			}
			if (((((iParam2 == -793495770 && iVar0 == joaat("mp_f_freemode_01")) || (iParam2 == -1409061796 && iVar0 == joaat("mp_f_freemode_01"))) || iParam2 == -2066166276) || (iParam2 == 849089063 && iVar0 == joaat("mp_f_freemode_01"))) || (iParam2 == 1192230427 && iVar0 == joaat("mp_f_freemode_01")))
			{
				if (!iParam4)
				{
					if (Global_2561953 == -1)
					{
						if (!Global_91330.f_1446)
						{
							if (func_587(13, -1))
							{
								return false;
							}
							else if (func_587(14, -1))
							{
								return false;
							}
							else if (func_587(15, -1))
							{
								return false;
							}
							else if (func_587(16, -1))
							{
							}
							else if (func_587(71, -1))
							{
								return false;
							}
							else if (func_587(72, -1))
							{
							}
						}
					}
					else if (Global_2561953 == 13)
					{
						return false;
					}
					else if (Global_2561953 == 14)
					{
						return false;
					}
					else if (Global_2561953 == 15)
					{
						return false;
					}
					else if (Global_2561953 == 16)
					{
					}
					else if (Global_2561953 == 71)
					{
						return false;
					}
					else if (Global_2561953 == 72)
					{
					}
				}
			}
			else if (iParam2 == -763917073)
			{
				if (!iParam4)
				{
					if (Global_2561953 == -1)
					{
						if (!Global_91330.f_1446)
						{
							if (func_587(13, -1))
							{
								return false;
							}
							else if (func_587(14, -1))
							{
								return false;
							}
							else if (func_587(15, -1))
							{
								return false;
							}
							else if (func_587(16, -1))
							{
								return false;
							}
							else if (func_587(71, -1))
							{
								return false;
							}
							else if (func_587(72, -1))
							{
							}
						}
					}
					else if (Global_2561953 == 13)
					{
						return false;
					}
					else if (Global_2561953 == 14)
					{
						return false;
					}
					else if (Global_2561953 == 15)
					{
						return false;
					}
					else if (Global_2561953 == 16)
					{
						return false;
					}
					else if (Global_2561953 == 71)
					{
						return false;
					}
					else if (Global_2561953 == 72)
					{
					}
				}
			}
			else if (iParam2 == 129912816)
			{
				if (!iParam4)
				{
					if (Global_2561953 == -1)
					{
						if (!Global_91330.f_1446)
						{
							if (func_587(13, -1))
							{
							}
							else if (func_587(14, -1))
							{
								return false;
							}
							else if (func_587(15, -1))
							{
								return false;
							}
						}