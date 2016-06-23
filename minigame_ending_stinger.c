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
#endregion

void main()
{
	int iVar0;
	int iVar1;
	
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
	iVar0 = -1;
	iVar1 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_4();
	}
	while (true)
	{
		if (!iVar1)
		{
			switch (func_1(PLAYER::PLAYER_PED_ID()))
			{
				case 1:
					if (load_stream("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						play_stream_frontend();
						iVar1 = true;
					}
					break;
				
				case 2:
					if (load_stream("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						play_stream_frontend();
						iVar1 = true;
					}
					break;
				
				default:
					if (load_stream("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						play_stream_frontend();
						iVar1 = true;
					}
					break;
			}
		}
		else if (iVar0 == -1)
		{
			iVar0 = GAMEPLAY::GET_GAME_TIMER();
		}
		else if (GAMEPLAY::GET_GAME_TIMER() > iVar0 + 8000)
		{
			func_4();
		}
		wait(0);
	}
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_2(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_2(int iParam0)
{
	if (func_3(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_3(int iParam0)
{
	return iParam0 < 3;
}

void func_4()
{
	stop_stream();
	terminate_this_thread();
}

