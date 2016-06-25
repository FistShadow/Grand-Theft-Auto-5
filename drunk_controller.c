#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0;
#endregion

void main()
{
	fLocal_4 = -99f;
	network_set_script_is_safe_for_network_game();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		func_30();
	}
	while (true)
	{
		wait(0);
		func_29(0);
		func_28();
		func_21();
		func_18();
		func_13();
		func_2();
		iLocal_1++;
		if (iLocal_1 >= 16)
		{
			iLocal_1 = 0;
		}
		iLocal_2++;
		if (iLocal_2 >= 16)
		{
			iLocal_2 = 0;
		}
		iLocal_3++;
		if (iLocal_3 >= 5)
		{
			iLocal_3 = 0;
		}
		if (!func_1())
		{
			func_30();
		}
	}
}

bool func_1()
{
	if (Global_36805)
	{
		return true;
	}
	if (does_cam_exist(Global_36806))
	{
		return true;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("drunk")) > 0)
	{
		return true;
	}
	if (Global_36615 > 0)
	{
		return true;
	}
	return false;
}

void func_2()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	
	if (!Global_36805)
	{
		return;
	}
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	if (Global_36807 > iVar0 || Global_36807 == -1)
	{
		if (is_player_switch_in_progress())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_36810 != Global_36811)
		{
			fVar3 = Global_36811 - Global_36810;
			Global_36810 += fVar3 * 0.1f;
			if (absf(Global_36810 - Global_36811) < 0.01f)
			{
				Global_36810 = Global_36811;
			}
		}
		if (!is_gameplay_cam_shaking())
		{
			shake_gameplay_cam("DRUNK_SHAKE", Global_36810 * fVar1 * fVar2);
		}
		if (GAMEPLAY::GET_GAME_TIMER() % 100 == 0)
		{
			set_gameplay_cam_shake_amplitude(Global_36810 * fVar1 * fVar2);
			_0x487A82C650EB7799(Global_36809 * fVar1 * fVar2);
		}
		if (Global_36809 * fVar1 * fVar2 < 1f)
		{
			_0x0225778816FDC28C(Global_36809 * fVar1 * fVar2);
		}
		else
		{
			_0x0225778816FDC28C(1f);
		}
		if (!is_cinematic_cam_shaking())
		{
			shake_cinematic_cam("DRUNK_SHAKE", Global_36810 * Global_36804 * fVar1 * fVar2);
		}
		set_cinematic_cam_shake_amplitude(Global_36810 * Global_36804 * fVar1 * fVar2);
		if (does_cam_exist(Global_36806))
		{
			if (is_cam_shaking(Global_36806))
			{
				set_cam_shake_amplitude(Global_36806, Global_36810 * fVar1 * fVar2);
			}
		}
		if (!is_string_null_or_empty(&Global_36833) && !is_string_null_or_empty(&Global_36817))
		{
			start_audio_scene(&Global_36817);
			StringCopy(&Global_36833, "", 16);
		}
		_0xF4F2C0D4EE209E20();
		if (Global_36812 > 0f)
		{
			if (fLocal_4 != Global_36812)
			{
				if (_0x459FD2C8D0AB78BC() != -1)
				{
				}
				else
				{
					set_transition_timecycle_modifier(&Global_36813, 15f);
					fLocal_4 = Global_36812;
				}
			}
			else
			{
				if (_0x459FD2C8D0AB78BC() != -1 && get_timecycle_modifier_index() != -1)
				{
					fLocal_4 = -99f;
				}
				_0x12561FCBB62D5B9C(2);
				iVar4 = Global_36807 - iVar0;
				if (iVar4 <= Global_36808 / 2)
				{
					iVar5 = false;
					if (is_player_playing(player_id()))
					{
						if (is_any_speech_playing(PLAYER::PLAYER_PED_ID()))
						{
							iVar5 = true;
						}
					}
					if (func_5(PLAYER::PLAYER_PED_ID()))
					{
						Global_36807 += 1000;
					}
					else if (iVar5)
					{
						Global_36807 += 1000;
					}
					else if (_0x459FD2C8D0AB78BC() != -1)
					{
						Global_36807 += 1000;
					}
					else
					{
						if (get_timecycle_modifier_index() != -1)
						{
							_0x1CBA05AE7BD7EE05(to_float(Global_36808 / 2) / 1000f);
						}
						fLocal_4 = -99f;
						Global_36812 = 0f;
						StringCopy(&Global_36813, "", 16);
					}
				}
			}
		}
		return;
	}
	func_3(1);
	iLocal_0 = 1;
}

void func_3(int iParam0)
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
	func_4();
}

void func_4()
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

bool func_5(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_6(iParam0) == -1)
	{
		return false;
	}
	return true;
}

int func_6(int iParam0)
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

float func_7()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	iVar1 = func_11(PLAYER::PLAYER_PED_ID());
	iVar2 = func_8(PLAYER::PLAYER_PED_ID());
	if (iVar2 == 0)
	{
		if (iVar1 != 0)
		{
			fVar0 = to_float(iVar1) / to_float(10);
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 != 0)
	{
		fVar0 = to_float(iVar2) / to_float(5);
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36642[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36642[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_10(int iParam0)
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

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36642[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	fVar1 = 1f;
	iVar2 = Global_36807 - iVar0;
	if (iVar2 <= Global_36808)
	{
		if (Global_36807 != -1)
		{
			fVar1 = to_float(iVar2) / to_float(Global_36808);
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36616[iLocal_3 /*5*/] == 0)
	{
		func_14(iLocal_3);
	}
}

void func_14(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_36616[iParam0 /*5*/].f_1, 0))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36616[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("drunk"))
	{
		SCRIPT::REQUEST_SCRIPT("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36642[iVar0 /*5*/] = func_15();
	Global_36642[iVar0 /*5*/].f_1 = Global_36616[iParam0 /*5*/].f_1;
	Global_36642[iVar0 /*5*/].f_2 = 0;
	Var1 = {Global_36616[iParam0 /*5*/]};
	SYSTEM::START_NEW_SCRIPT_with_args("drunk", &Var1, 5, 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("drunk");
	func_17(iParam0);
}

auto func_15()
{
	auto uVar0;
	
	uVar0 = Global_36614;
	Global_36614++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36642[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_17(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36616[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36616[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
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

void func_18()
{
	if (!Global_36723[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36723[iLocal_1 /*5*/].f_1 == 0)
		{
			func_20(iLocal_1);
			func_19(iLocal_1);
		}
	}
}

void func_19(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36723[iParam0 /*5*/] = -1;
	Global_36723[iParam0 /*5*/].f_1 = -1;
	Global_36723[iParam0 /*5*/].f_2 = 6;
	Global_36723[iParam0 /*5*/].f_3 = 0;
	Global_36723[iParam0 /*5*/].f_4 = 0;
}

void func_20(auto uParam0)
{
	int iVar0;
	
	iVar0 = Global_36723[uParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_21()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_36642[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36642[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36642[iLocal_2 /*5*/]);
		}
		else
		{
			func_19(iVar0);
		}
	}
}

void func_22(int iParam0)
{
	int iVar0;
	
	func_25(iParam0);
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_23(iVar0);
}

void func_23(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36642[iParam0 /*5*/] = -1;
	Global_36642[iParam0 /*5*/].f_1 = 0;
	Global_36642[iParam0 /*5*/].f_2 = -1;
	Global_36642[iParam0 /*5*/].f_3 = 0;
	Global_36642[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36642[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(int iParam0)
{
	func_29(iParam0);
	func_26(iParam0);
}

void func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36723[iVar0 /*5*/].f_1)
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_36723[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36723[iVar0 /*5*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_28()
{
	if (Global_36723[iLocal_1 /*5*/] == 1)
	{
		Global_36723[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36723[iVar0 /*5*/])
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

void func_30()
{
	func_31();
	if (!iLocal_0)
	{
		func_3(1);
	}
	terminate_this_thread();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36838 = 0;
	Global_36837 = 0;
	Global_36615 = 0;
	terminate_all_scripts_with_this_name("drunk");
}

void func_32()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_19(iVar0);
		iVar0++;
	}
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_17(iVar0);
		iVar0++;
	}
}

