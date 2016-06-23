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
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
	char* sLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	float fLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	float fLocal_31 = 0;
	auto uLocal_32 = 0;
	auto uLocal_33 = 0;
	auto uLocal_34 = 0;
	float fLocal_35 = 0;
	float fLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	int iLocal_39 = 0;
	auto uLocal_40 = 0;
	auto uLocal_41 = 0;
	auto uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	struct<2> Local_50 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 0;
	auto uLocal_57 = 0;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 0;
	auto uLocal_67 = 5;
	auto uLocal_68 = 0;
	auto uLocal_69 = 0;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	Vector3 vVar3;
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
	sLocal_23 = "NULL";
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	iLocal_39 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iVar1 = joaat("carwash1");
	sVar2 = "carwash1";
	vVar3 = {Local_50.f_1[0 /*3*/]};
	if (_get_number_of_instances_of_streamed_script(joaat("am_mp_carwash_launch")) > 1)
	{
		terminate_this_thread();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		network_set_script_is_safe_for_network_game();
		set_this_script_can_be_paused(0);
	}
	else
	{
		terminate_this_thread();
	}
	if (Global_2621550)
	{
		if (_get_number_of_instances_of_streamed_script(131838674) == 0)
		{
			_request_streamed_script(131838674);
			while (!_has_streamed_script_loaded(131838674))
			{
				wait(0);
			}
			_start_new_streamed_script_with_args(131838674, &Local_50, 23, 1424);
		}
		terminate_this_thread();
	}
	if (func_8(PLAYER::PLAYER_PED_ID()))
	{
	}
	iVar6 = 0;
	while (iVar6 == 0)
	{
		if (((func_5(player_id(), 1) || func_4()) || !func_3(player_id())) || func_2())
		{
			iVar6 = 0;
		}
		else
		{
			iVar6 = 1;
		}
		wait(0);
	}
	if (vdist2(vVar3, func_1(157)) < vdist2(vVar3, func_1(156)))
	{
		sVar2 = "carwash2";
	}
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	iVar1 = get_hash_key(sVar2);
	if (_get_number_of_instances_of_streamed_script(iVar1) == 0)
	{
		SCRIPT::REQUEST_SCRIPT(sVar2);
		while (!SCRIPT::HAS_SCRIPT_LOADED(sVar2))
		{
			SCRIPT::REQUEST_SCRIPT(sVar2);
			wait(0);
			if (GAMEPLAY::GET_GAME_TIMER() > iVar0 + 20000)
			{
				terminate_this_thread();
			}
		}
		if (SCRIPT::HAS_SCRIPT_LOADED(sVar2))
		{
			SYSTEM::START_NEW_SCRIPT(sVar2, 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar2);
		}
	}
	terminate_this_thread();
}

Vector3 func_1(int iParam0)
{
	auto uVar0;
	
	uVar0 = iParam0;
	return Global_25433[uVar0 /*23*/][0 /*3*/];
}

int func_2()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

int func_3(int iParam0)
{
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_131, 6);
}

bool func_4()
{
	auto uVar0;
	
	uVar0 = Global_2428492;
	if (is_bit_set(Global_1609227[uVar0 /*34*/].f_12, false) && Global_1609227[uVar0 /*34*/].f_21 == 2)
	{
		return true;
	}
	return false;
}

bool func_5(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_6(iParam0))
		{
			return true;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return false;
	}
	return true;
}

int func_6(auto uParam0)
{
	return func_7(uParam0);
}

int func_7(auto uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

int func_8(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	return !is_entity_dead(iParam0, 0);
}

