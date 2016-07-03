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
	auto uLocal_40 = 0;
	auto uLocal_41 = 0;
	auto uLocal_42 = 0;
	auto uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 0;
	auto uLocal_57 = 0;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	Vector3 ufoPoint_MovieArea = 0;
	float ufoRadius_MovieArea = 0;
	Vector3 ufoPoint_HippieCamp = 0;
	Vector3 ufoPoint_FortZancudo = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int ufoId = 0;
	int ufoStatus = 0;
	Vector3[] ufoPoints = new Vector3[2];
	int iLocal_81 = 0;
	float fLocal_82 = 0;
	float fLocal_83 = 0;
	float fLocal_84 = 0;
	float fLocal_85 = 0;
	float ufoDistanceMax = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
#endregion

void main()
{
	int iVar0;
	
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
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	ufoPoint_MovieArea = {-1124.392f, -514.7001f, 33.21493f}; // Movie Area
	ufoRadius_MovieArea = 200f;
	ufoPoint_HippieCamp = {2490f, 3777f, 2402.879f}; // Hippie Camp
	ufoPoint_FortZancudo = {-2052f, 3237f, 1450.078f}; // Fort Zancudo
	iLocal_70 = -1;
	ufoId = -1;
	iLocal_81 = true;
	fLocal_82 = 10f;
	fLocal_83 = 90f;
	fLocal_84 = 35f;
	fLocal_85 = 60f;
	ufoDistanceMax = 275f;
	iLocal_87 = 1500;
	iLocal_88 = -1;
	iLocal_90 = 3000;
	iLocal_91 = 708;
	iLocal_92 = 377;
	iLocal_93 = 1000;
	iLocal_94 = 2093;
	iLocal_97 = -1;
	iLocal_98 = -1;
	iLocal_99 = true;
	iLocal_100 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		scriptAtExit();
	}
	while (is_screen_faded_out())
	{
		wait(0);
	}
	if (!STREAMING::IS_IPL_ACTIVE("ufo"))
	{ // Load ufo 'Interior Package Location'?
		STREAMING::REQUEST_IPL("ufo");
	}
	ufoPoints[0 /*3*/] = {ufoPoint_HippieCamp};
	ufoPoints[1 /*3*/] = {ufoPoint_FortZancudo};
	while (true)
	{
		isExistingAliveEntity(PLAYER::PLAYER_PED_ID());
		if (Global_25124 == 1)
		{
			scriptAtExit();
		}
		if (iLocal_81)
		{
			if (!isDistanceFromEntityToCoordSmallerOrEqualThan(PLAYER::PLAYER_PED_ID(), ufoPoints[0 /*3*/], 290f + 50f))
			{
				if (!isDistanceFromEntityToCoordSmallerOrEqualThan(PLAYER::PLAYER_PED_ID(), ufoPoints[1 /*3*/], 290f + 50f))
				{
					scriptAtExit();
				}
			}
			if (ufoStatus != 0)
			{
				if (!isDistanceFromEntityToCoordSmallerOrEqualThan(PLAYER::PLAYER_PED_ID(), ufoPoints[0 /*3*/], ufoDistanceMax + 50f))
				{
					if (!isDistanceFromEntityToCoordSmallerOrEqualThan(PLAYER::PLAYER_PED_ID(), ufoPoints[1 /*3*/], ufoDistanceMax + 50f))
					{
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
						ufoStatus = 0;
						ufoId = -1;
					}
				}
			}
		}
		func_8();
		switch (ufoStatus)
		{
			case 0:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < ufoPoints.x) //ufoPoints.x is always arrayCount here.
				{
					if (isDistanceFromEntityToCoordSmallerOrEqualThan(PLAYER::PLAYER_PED_ID(), ufoPoints[iVar0 /*3*/], ufoDistanceMax))
					{
						ufoId = iVar0;
						ufoStatus = 1;
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 1, 1);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 1, 1);
					}
					iVar0++;
				}
				break;
			
			case 1:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < ufoPoints.x) //ufoPoints.x is always arrayCount here.
				{
					if (isDistanceFromEntityToCoordSmallerOrEqualThan(PLAYER::PLAYER_PED_ID(), ufoPoints[iVar0 /*3*/], fLocal_83))
					{
						ufoId = iVar0;
						ufoStatus = 2;
					}
					iVar0++;
				}
				break;
			
			case 2:
				if (ufoId == -1)
				{
					ufoStatus = 1;
				}
				else
				{
					iLocal_70 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_71 = 0;
					ufoStatus = 3;
				}
				break;
			
			case 3:
				if (isDistanceFromEntityToCoordSmallerOrEqualThan(PLAYER::PLAYER_PED_ID(), ufoPoints[ufoId /*3*/], fLocal_83))
				{
					iLocal_71 = GAMEPLAY::GET_GAME_TIMER() - iLocal_70;
					if (iLocal_71 >= iLocal_87)
					{
						ufoStatus = 4;
						iLocal_88 = AUDIO::GET_SOUND_ID();
						iLocal_89 = GAMEPLAY::GET_GAME_TIMER();
						if (ufoId == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_88, "SPECIAL_EVIL_UFO_DEATH_RAY", ufoPoints[ufoId /*3*/], 0, 0, 0, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_88, "SPECIAL_EVIL_UFO_DEATH_RAY_3", ufoPoints[ufoId /*3*/], 0, 0, 0, 0);
						}
						func_7();
						func_6();
					}
				}
				else
				{
					ufoStatus = 1;
				}
				break;
			
			case 4:
				killPlayerVehicleEngineAndApplyForce();
				func_7();
				func_6();
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_89 + iLocal_90)
				{
					stopAndReleaseSoundIdThenEmptyValue(&iLocal_88);
				}
				if (!isDistanceFromEntityToCoordSmallerOrEqualThan(PLAYER::PLAYER_PED_ID(), ufoPoints[ufoId /*3*/], ufoDistanceMax))
				{
					startPlayerVehicleEngine();
					ufoId = -1;
					ufoStatus = 0;
					stopAndReleaseSoundIdThenEmptyValue(&iLocal_98);
					stopAndReleaseSoundIdThenEmptyValue(&iLocal_97);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
				}
				break;
		}
		wait(0);
	}
}

void startPlayerVehicleEngine()
{
	int vehicleId;
	
	if (isExistingAliveEntity(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			vehicleId = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
			if (isVehicleDriveableAndNotOnFire(vehicleId))
			{
				set_vehicle_engine_on(vehicleId, true, 0, 0);
			}
		}
	}
}

bool isVehicleDriveableAndNotOnFire(int iParam0)
{
	if (isExistingAliveEntity(iParam0))
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

bool isExistingAliveEntity(int iParam0)
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

void stopAndReleaseSoundIdThenEmptyValue(int iParam0)
{
	if (*iParam0 != -1)
	{
		stop_sound(*iParam0);
		release_sound_id(*iParam0);
		*iParam0 = -1;
	}
}

void killPlayerVehicleEngineAndApplyForce()
{
	int vehicleId;
	
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		vehicleId = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (isVehicleDriveableAndNotOnFire(vehicleId))
		{
			set_vehicle_engine_on(vehicleId, false, 0, 0);
			ENTITY::APPLY_FORCE_TO_ENTITY(vehicleId, 2, 0f, 0f, -fLocal_82 /* 10.0f */, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}
}

void func_6()
{
	if (iLocal_100)
	{
		if (GAMEPLAY::GET_GAME_TIMER() > iLocal_95)
		{
			if (iLocal_97 != -1)
			{
				stopAndReleaseSoundIdThenEmptyValue(&iLocal_97);
				iLocal_95 = GAMEPLAY::GET_GAME_TIMER() + iLocal_94;
			}
			else
			{
				iLocal_97 = AUDIO::GET_SOUND_ID();
				play_sound(iLocal_97, "ent_amb_elec_crackle", 0, 0, 0, 1);
				iLocal_95 = GAMEPLAY::GET_GAME_TIMER() + iLocal_92;
			}
		}
	}
}

void func_7()
{
	if (iLocal_99)
	{
		if (GAMEPLAY::GET_GAME_TIMER() > iLocal_96)
		{
			if (iLocal_98 != -1)
			{
				stopAndReleaseSoundIdThenEmptyValue(&iLocal_98);
				iLocal_96 = GAMEPLAY::GET_GAME_TIMER() + iLocal_93;
			}
			else
			{
				iLocal_98 = AUDIO::GET_SOUND_ID();
				play_sound(iLocal_98, "spl_stun_npc_master", 0, 0, 0, 1);
				iLocal_96 = GAMEPLAY::GET_GAME_TIMER() + iLocal_91;
			}
		}
	}
}

void func_8()
{
	Vector3 vVar0;
	
	if (ufoId == -1)
	{
		return;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	if (!isDistanceFromEntityToCoordSmallerOrEqualThan(PLAYER::PLAYER_PED_ID(), ufoPoints[ufoId /*3*/], fLocal_84))
	{
		return;
	}
	vVar0 = {normalizeVector(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ufoPoints[ufoId /*3*/]) * Vector(fLocal_85, fLocal_85, fLocal_85)};
	ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 2, vVar0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}

Vector3 normalizeVector(Vector3 vParam0)
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

int isDistanceFromEntityToCoordSmallerOrEqualThan(int eEntity, Vector3 vLoc, float distanceSqrt)
{
	return vdist2(ENTITY::GET_ENTITY_COORDS(eEntity, 1), vLoc) <= distanceSqrt * distanceSqrt;
}
// Function below is a duplicate with slightly modified logic, but same results.
//int isExistingAliveEntity(int iParam0)
//{
//	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
//	{
//		return false;
//	}
//	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
//}

void scriptAtExit()
{
	if (STREAMING::IS_IPL_ACTIVE("ufo"))
	{
		STREAMING::REMOVE_IPL("ufo");
	}
	stopAndReleaseSoundIdThenEmptyValue(&iLocal_98);
	stopAndReleaseSoundIdThenEmptyValue(&iLocal_97);
	stopAndReleaseSoundIdThenEmptyValue(&iLocal_88);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
	startPlayerVehicleEngine();
	terminate_this_thread();
}

