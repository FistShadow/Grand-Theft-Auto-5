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
	char* sLocal_18 = 0;
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
	float fLocal_23 = 0;
	float fLocal_24 = 0;
	float fLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	Vector3 vLocal_30 = 0;
	int iLocal_33 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_29 = -1;
	vLocal_30 = {0f, 0f, 0f};
	if (has_force_cleanup_occurred(2))
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(0);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			terminate_this_thread();
		}
		if (func_15(player_id()) && ENTITY::DOES_ENTITY_EXIST(func_14()))
		{
			iLocal_33 = func_14();
		}
		else
		{
			iLocal_33 = PLAYER::PLAYER_PED_ID();
		}
		if (is_entity_dead(iLocal_33, 0))
		{
		}
		func_1();
	}
}

void func_1()
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	
	func_13();
	if (iLocal_29 != -1 && func_12(iLocal_29))
	{
		vVar0 = {get_entity_coords(iLocal_33, 0)};
		vVar3 = {func_11(iLocal_29)};
		if (vdist2(vVar3, vVar0) < IntToFloat(func_10(iLocal_29)))
		{
			iVar6 = false;
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 < func_9(iLocal_29))
			{
				if (!iVar6)
				{
					if (is_entity_in_angled_area(iLocal_33, func_8(iLocal_29, iVar7), func_7(iLocal_29, iVar7), func_6(iLocal_29, iVar7), 0, true, 0))
					{
						iVar6 = true;
					}
				}
				iVar7++;
			}
			if (iVar6)
			{
				set_radar_as_interior_this_frame(get_hash_key(func_5(iLocal_29)), vVar3.x, vVar3.y, func_4(iLocal_29), func_3(iLocal_29));
				func_2(iLocal_29);
			}
		}
	}
}

void func_2(int iParam0)
{
	Vector3 vVar0;
	
	vVar0 = {get_entity_coords(iLocal_33, 0)};
	_set_player_blip_position_this_frame(vVar0.x, vVar0.y);
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			vVar0 = {get_entity_coords(iLocal_33, 0)};
			_set_player_blip_position_this_frame(vVar0.x, vVar0.y);
			break;
		
		case 3:
			set_radar_as_exterior_this_frame();
			break;
		
		case 4:
			set_radar_as_exterior_this_frame();
			break;
	}
}

int func_3(int iParam0)
{
	Vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			vVar0 = {get_entity_coords(iLocal_33, 0)};
			if (vVar0.z < 9.7796f)
			{
				return 0;
			}
			else if (vVar0.z > 9.7796f && vVar0.z < 16f)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		
		case 2:
			vVar0 = {get_entity_coords(iLocal_33, 0)};
			if (vVar0.z < 178.9f)
			{
				return 0;
			}
			else if (vVar0.z > 178.9f && vVar0.z < 188.7f)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
	}
	return 0;
}

bool func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
			break;
		
		case 1:
			return false;
			break;
		
		case 2:
			return false;
			break;
		
		case 3:
			return false;
			break;
		
		case 4:
			return false;
			break;
	}
	return false;
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "V_FakeBoatPO1SH2A";
			break;
		
		case 1:
			return "V_FakeWarehousePO103";
			break;
		
		case 2:
			return "V_FakeKortzCenter";
			break;
		
		case 3:
			return "V_FakePrison";
			break;
		
		case 4:
			return "V_FakeMilitaryBase";
			break;
	}
	return "";
}

float func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 28.125f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 32.6875f;
					break;
				
				case 1:
					return 13.1875f;
					break;
				
				case 2:
					return 16.25f;
					break;
				
				case 3:
					return 21.75f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 95f;
					break;
				
				case 1:
					return 78.75f;
					break;
				
				case 2:
					return 70.6875f;
					break;
				
				case 3:
					return 64.4375f;
					break;
				
				case 4:
					return 32.375f;
					break;
				
				case 5:
					return 19f;
					break;
				
				case 6:
					return 19f;
					break;
				
				case 7:
					return 19.78125f;
					break;
				
				case 8:
					return 32.0625f;
					break;
				
				case 9:
					return 35.8125f;
					break;
				
				case 10:
					return 30.5f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3000f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1500f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_7(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.537f, -3057.289f, 40.75164f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.27837f, -2654.244f, 20.9423f;
					break;
				
				case 1:
					return 13.93163f, -2654.561f, 14.44239f;
					break;
				
				case 2:
					return 55.59572f, -2667.499f, 10.82245f;
					break;
				
				case 3:
					return 34.5866f, -2746.387f, 10.95006f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2169.17f, 256.7264f, 203.4081f;
					break;
				
				case 1:
					return -2216.394f, 329.4761f, 201.3617f;
					break;
				
				case 2:
					return -2345.353f, 350.7882f, 189.6522f;
					break;
				
				case 3:
					return -2288.097f, 388.9909f, 200.9045f;
					break;
				
				case 4:
					return -2310.263f, 406.638f, 200.9041f;
					break;
				
				case 5:
					return -2169.221f, 260.5679f, 202.4294f;
					break;
				
				case 6:
					return -2258.778f, 166.9506f, 202.8318f;
					break;
				
				case 7:
					return -2236.973f, 285.5958f, 203.0395f;
					break;
				
				case 8:
					return -2211.362f, 303.6741f, 214.9323f;
					break;
				
				case 9:
					return -2282.098f, 383.0904f, 201.0395f;
					break;
				
				case 10:
					return -2277.93f, 356.4442f, 201.1015f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 200f, 2600f, -5f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1451.205f, 2689.44f, -37.62654f;
					break;
			}
			break;
	}
	return vLocal_30;
}

Vector3 func_8(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.535f, -2880.354f, -19.96489f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.15308f, -2747.067f, 1.137565f;
					break;
				
				case 1:
					return 13.95777f, -2700.626f, 5.046232f;
					break;
				
				case 2:
					return 55.61185f, -2687.681f, 5.005801f;
					break;
				
				case 3:
					return 34.56926f, -2759.479f, -0.030933f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2317.38f, 191.6319f, 165.4037f;
					break;
				
				case 1:
					return -2357.995f, 264.0297f, 162.7988f;
					break;
				
				case 2:
					return -2261.433f, 387.3963f, 154.3522f;
					break;
				
				case 3:
					return -2326.399f, 408.3378f, 140.3182f;
					break;
				
				case 4:
					return -2304.617f, 460.2127f, 140.2147f;
					break;
				
				case 5:
					return -2150.825f, 216.4168f, 162.8012f;
					break;
				
				case 6:
					return -2172.765f, 203.5957f, 167.4135f;
					break;
				
				case 7:
					return -2191.036f, 305.961f, 159.625f;
					break;
				
				case 8:
					return -2227.613f, 340.0587f, 165.1357f;
					break;
				
				case 9:
					return -2244.41f, 399.5764f, 137.5101f;
					break;
				
				case 10:
					return -2243.261f, 371.4072f, 137.2722f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3200f, 2600f, 3000f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2841.107f, 3506.837f, 1000.474f;
					break;
			}
			break;
	}
	return vLocal_30;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 4;
			break;
		
		case 2:
			return 11;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10000;
			break;
		
		case 1:
			return 10000;
			break;
		
		case 2:
			return 250000;
			break;
		
		case 3:
			return 9000000;
			break;
		
		case 4:
			return 2250000;
			break;
	}
	return 0;
}

Vector3 func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1240f, -2970f, 12.2f;
			break;
		
		case 1:
			return 40f, -2720f, 12f;
			break;
		
		case 2:
			return -2250f, 300f, 182.2f;
			break;
		
		case 3:
			return 1700f, 2580f, 80f;
			break;
		
		case 4:
			return -2250f, 3100f, 80f;
			break;
	}
	return vLocal_30;
}

bool func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
	return true;
}

void func_13()
{
	Vector3 vVar0;
	
	iLocal_28++;
	if (iLocal_28 > 4)
	{
		iLocal_28 = 0;
	}
	if (iLocal_28 != iLocal_29)
	{
		if (iLocal_29 == -1)
		{
			iLocal_29 = iLocal_28;
		}
		else
		{
			vVar0 = {get_entity_coords(iLocal_33, 0)};
			if (vdist2(func_11(iLocal_28), vVar0) < vdist2(func_11(iLocal_29), vVar0))
			{
				iLocal_29 = iLocal_28;
			}
		}
	}
}

auto func_14()
{
	return Global_2359301.f_2;
}

bool func_15(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return true;
	}
	if (func_16())
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

int func_16()
{
	return is_bit_set(Global_2359301, 3);
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

auto func_19()
{
	return Global_1312747;
}

