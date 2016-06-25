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
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
	float fLocal_23 = 0;
	float fLocal_24 = 0;
	float fLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	float fLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
	{
		func_15();
	}
	func_14();
	iVar0 = 0;
	while (true)
	{
		wait(500);
		iVar1 = 0;
		vVar2 = {0f, 0f, 0f};
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			vVar2 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
		}
		while (iVar1 != 2)
		{
			if (func_13(&(Global_25394[iVar0 /*7*/])))
			{
				if (func_12(iVar0, vVar2))
				{
					func_11(&(Global_25394[iVar0 /*7*/]), 2);
					if (Global_25394[iVar0 /*7*/].f_5 != 0)
					{
						if (is_thread_active(Global_25394[iVar0 /*7*/].f_5))
						{
							force_cleanup_for_thread_with_this_id(Global_25394[iVar0 /*7*/].f_5, 1);
						}
						Global_25394[iVar0 /*7*/].f_5 = 0;
					}
				}
			}
			else if (!func_10(Global_25394[iVar0 /*7*/], 4))
			{
				if (func_5(&(Global_25394[iVar0 /*7*/]), vVar2))
				{
					func_1(iVar0);
				}
			}
			iVar1++;
			iVar0++;
			if (iVar0 == 5)
			{
				iVar0 = 0;
			}
		}
	}
}

void func_1(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 1424;
	iVar3 = true;
	switch (iParam0)
	{
		case 0:
			sVar0 = "re_ArmyBase";
			iVar1 = joaat("re_armybase");
			break;
		
		case 1:
			iVar2 = 3650;
			sVar0 = "golf_ai_foursome";
			iVar1 = joaat("golf_ai_foursome");
			iVar3 = false;
			break;
		
		case 3:
			sVar0 = "re_Prison";
			iVar1 = joaat("re_prison");
			break;
		
		case 2:
			iVar2 = 3650;
			sVar0 = "golf_ai_foursome_putting";
			iVar1 = joaat("golf_ai_foursome_putting");
			iVar3 = false;
			break;
		
		case 4:
			iVar2 = 2050;
			sVar0 = "stripclub";
			iVar1 = joaat("stripclub");
			iVar3 = false;
			break;
	}
	if (!iVar3 && func_3())
	{
		return;
	}
	if (get_length_of_literal_string(sVar0) != 0)
	{
		if (_get_number_of_instances_of_streamed_script(iVar1) == 0)
		{
			SCRIPT::REQUEST_SCRIPT(sVar0);
			while (!SCRIPT::HAS_SCRIPT_LOADED(sVar0))
			{
				wait(0);
			}
			Global_25394[iParam0 /*7*/].f_5 = SYSTEM::START_NEW_SCRIPT(sVar0, iVar2);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
			if (Global_25394[iParam0 /*7*/].f_5 != 0)
			{
				func_2(&(Global_25394[iParam0 /*7*/]), 2);
			}
		}
	}
}

void func_2(auto uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_3()
{
	if (func_4() == 0)
	{
		return true;
	}
	return false;
}

auto func_4()
{
	return Global_25120;
}

bool func_5(auto uParam0, Vector3 vParam1)
{
	if (!func_10(*uParam0, 1))
	{
		if (func_9() && !func_6(6))
		{
			return false;
		}
	}
	if (vdist2(vParam1, *uParam0.f_2) > *uParam0.f_1)
	{
		return false;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, 1, false, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_6(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_7(iParam0))
	{
		return false;
	}
	return true;
}

int func_7(int iParam0)
{
	return func_8(iParam0, Global_35711);
}

bool func_8(int iParam0, int iParam1)
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

bool func_9()
{
	if (Global_35711 == 15)
	{
		return false;
	}
	return true;
}

int func_10(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_11(auto uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 && iParam1);
}

bool func_12(int iParam0, Vector3 vParam1)
{
	vParam1.z = 0f;
	if (!is_thread_active(Global_25394[iParam0 /*7*/].f_5))
	{
		return true;
	}
	if (func_10(Global_25394[iParam0 /*7*/], 4))
	{
		return true;
	}
	if (func_9() && !func_6(6))
	{
		if (!func_10(Global_25394[iParam0 /*7*/], 1))
		{
			if (iParam0 == 1 || iParam0 == 2)
			{
				if (_get_number_of_instances_of_streamed_script(joaat("golf")) == 0)
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
	if (vdist2(Global_25394[iParam0 /*7*/].f_2, vParam1) > Global_25394[iParam0 /*7*/].f_1 + 400f)
	{
		return true;
	}
	return false;
}

int func_13(auto uParam0)
{
	return func_10(*uParam0, 2);
}

void func_14()
{
	int iVar0;
	
	Global_25394[0 /*7*/].f_2 = {-2189.545f, 3129.613f, 0f};
	Global_25394[0 /*7*/].f_1 = 1000f * 1000f;
	Global_25394[0 /*7*/] = 0;
	Global_25394[0 /*7*/].f_5 = 0;
	Global_25394[1 /*7*/].f_2 = {-1172.822f, 66.5235f, 0f};
	Global_25394[1 /*7*/].f_1 = 300f * 300f;
	Global_25394[1 /*7*/] = 0;
	Global_25394[1 /*7*/].f_5 = 0;
	Global_25394[3 /*7*/].f_2 = {1692.147f, 2562.313f, 0f};
	Global_25394[3 /*7*/].f_1 = 300f * 300f;
	Global_25394[3 /*7*/] = 0;
	Global_25394[3 /*7*/].f_5 = 0;
	Global_25394[2 /*7*/].f_2 = {-1329.68f, 60.3478f, 0f};
	Global_25394[2 /*7*/].f_1 = 250f * 250f;
	Global_25394[2 /*7*/] = 0;
	Global_25394[2 /*7*/].f_5 = 0;
	Global_25394[4 /*7*/].f_2 = {114.64f, -1290.34f, 0f};
	Global_25394[4 /*7*/].f_1 = 100f * 100f;
	Global_25394[4 /*7*/] = 1;
	Global_25394[4 /*7*/].f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 5 - 1)
	{
		Global_25394[iVar0 /*7*/].f_2.f_2 = 0f;
		iVar0++;
	}
}

void func_15()
{
	terminate_this_thread();
}

