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
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	char* sLocal_21 = 0;
	float fLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	Vector3 vLocal_43 = 0;
	float fLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	Vector3 vLocal_50 = 0;
	Vector3 vLocal_53 = 0;
	Vector3 vLocal_56 = 0;
	Vector3 fLocal_59 = 0;
	Vector3 vLocal_60 = 0;
	Vector3 vLocal_63 = 0;
	Vector3 vLocal_66 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<6> Local_75 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	Vector3 vLocal_87 = 0;
	Vector3 fLocal_90 = 0;
	int iLocal_91 = 0;
	Vector3 vLocal_92 = 0;
	Vector3 fLocal_95 = 0;
	int iLocal_96 = 0;
	auto uLocal_97 = 15;
	auto uLocal_98 = 0;
	auto uLocal_99 = 0;
	auto uLocal_100 = 0;
	auto uLocal_101 = 0;
	auto uLocal_102 = 0;
	auto uLocal_103 = 0;
	auto uLocal_104 = 0;
	auto uLocal_105 = 0;
	auto uLocal_106 = 0;
	auto uLocal_107 = 0;
	auto uLocal_108 = 0;
	auto uLocal_109 = 0;
	auto uLocal_110 = 0;
	auto uLocal_111 = 0;
	auto uLocal_112 = 0;
	auto uLocal_113 = 0;
	auto uLocal_114 = 0;
	auto uLocal_115 = 0;
	auto uLocal_116 = 0;
	auto uLocal_117 = 0;
	auto uLocal_118 = 0;
	auto uLocal_119 = 0;
	auto uLocal_120 = 0;
	auto uLocal_121 = 0;
	auto uLocal_122 = 0;
	auto uLocal_123 = 0;
	auto uLocal_124 = 0;
	auto uLocal_125 = 0;
	auto uLocal_126 = 0;
	auto uLocal_127 = 0;
	auto uLocal_128 = 0;
	auto uLocal_129 = 0;
	auto uLocal_130 = 1;
	struct<18>[] Local_131 = new struct<18>[4];
	struct<18>[] Local_204 = new struct<18>[8];
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	char* sLocal_371 = 0;
	char* sLocal_372 = 0;
	char* sLocal_373 = 0;
	char* sLocal_374 = 0;
	int[] iLocal_375 = new int[9];
	int iLocal_385 = 0;
	int[] iLocal_386 = new int[8];
	struct<10>[] Local_395 = new struct<10>[16];
	auto uLocal_556 = 0;
	auto uLocal_557 = 0;
	auto uLocal_558 = 0;
	auto uLocal_559 = 0;
	int[] iLocal_560 = new int[3];
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	float fLocal_569 = 0;
	float fLocal_570 = 0;
	int[] iLocal_571 = new int[2];
	float fLocal_574 = 0;
	Vector3 vLocal_575 = 0;
	Vector3 vLocal_578 = 0;
	Vector3 vLocal_581 = 0;
	Vector3 vLocal_584 = 0;
	Vector3 vLocal_587 = 0;
	Vector3 vLocal_590 = 0;
	Vector3 vLocal_593 = 0;
	Vector3[] vLocal_596 = new Vector3[4];
	float[] fLocal_609 = new float[4];
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	char*[] sLocal_626 = new char*[3];
	int iLocal_630 = 0;
	char* sLocal_631 = 0;
	Vector3 vLocal_632 = 0;
	Vector3 vLocal_635 = 0;
	Vector3 fLocal_638 = 0;
	Vector3 vLocal_639 = 0;
	Vector3 vLocal_642 = 0;
	Vector3 fLocal_645 = 0;
	Vector3 vLocal_646 = 0;
	Vector3 vLocal_649 = 0;
	Vector3 fLocal_652 = 0;
	Vector3 vLocal_653 = 0;
	Vector3 vLocal_656 = 0;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	float fLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	float fLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	struct<2> Local_674 = 0;
	auto uLocal_676 = 0;
	auto uLocal_677 = 0;
	auto uLocal_678 = 0;
	auto uLocal_679 = 0;
	auto uLocal_680 = 0;
	auto uLocal_681 = 0;
	auto uLocal_682 = 0;
	auto uLocal_683 = 0;
	auto uLocal_684 = 0;
	auto uLocal_685 = 0;
	auto uLocal_686 = 0;
	auto uLocal_687 = 0;
	auto uLocal_688 = 0;
	auto uLocal_689 = 0;
	auto uLocal_690 = 0;
	auto uLocal_691 = 5;
	auto uLocal_692 = 0;
	auto uLocal_693 = 0;
	auto uLocal_694 = 0;
	auto uLocal_695 = 0;
	auto uLocal_696 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	vLocal_53 = {226.6825f, 681.0297f, 188.4987f};
	vLocal_56 = {231.8002f, 672.5261f, 188.9459f};
	fLocal_59 = 32.0905f;
	StringCopy(&Local_75, "", 24);
	vLocal_87 = {259.4603f, 125.8718f, 100.9754f};
	fLocal_90 = 283.0367f;
	vLocal_92 = {245.1998f, 76.8231f, 90.7069f};
	fLocal_95 = -18.4743f;
	sLocal_372 = "REPAPAU";
	sLocal_373 = "random@escape_paparazzi@standing@";
	sLocal_374 = "random@escape_paparazzi@incar@";
	iLocal_565 = 4000;
	fLocal_569 = 0f;
	fLocal_570 = 0f;
	fLocal_574 = 0f;
	vLocal_575 = {272.6356f, 155.5618f, 103.3306f};
	vLocal_578 = {247.5795f, 88.7094f, 92.9859f};
	vLocal_581 = {259.0348f, 114.0369f, 98.9984f};
	vLocal_584 = {255.4971f, 116.8744f, 99.8162f};
	vLocal_587 = {266.8217f, 139.7698f, 103.2269f};
	vLocal_590 = {270.0174f, 139.1181f, 103.2195f};
	vLocal_593 = {265.4954f, 144.6143f, 103.3326f};
	sLocal_631 = "left_";
	vLocal_632 = {261.9341f, 126.2429f, 95.15405f};
	vLocal_635 = {270.6759f, 152.4763f, 109.2356f};
	fLocal_638 = 16f;
	vLocal_639 = {261.9341f, 126.2429f, 107.6541f};
	vLocal_642 = {248.354f, 87.01792f, 92.389f};
	fLocal_645 = 16f;
	vLocal_646 = {256.6779f, 126.573f, 99.54784f};
	vLocal_649 = {266.4471f, 123.412f, 105.6728f};
	fLocal_652 = 5.75f;
	vLocal_653 = {260.242f, 127.423f, 101.65f};
	vLocal_656 = {0f, 0f, -20f};
	vLocal_50 = {Local_674.f_1[0 /*3*/]};
	if (has_force_cleanup_occurred(11))
	{
		func_269();
	}
	func_268(&uLocal_97, 3);
	if (!Global_3)
	{
		if (func_226(vLocal_50, -1, 0, 0, 0))
		{
			func_223(-1);
		}
		else
		{
			terminate_this_thread();
		}
	}
	iLocal_365 = add_scenario_blocking_area(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	iLocal_366 = add_scenario_blocking_area(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	iLocal_367 = add_scenario_blocking_area(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		clear_area(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, false);
	}
	set_all_vehicle_generators_active_in_area(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), false, 1);
	set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", false);
	while (true)
	{
		wait(false);
		func_220(&uLocal_97);
		if (!func_219())
		{
			if (func_218())
			{
				func_269();
			}
		}
		_0x208784099002BC30("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_131)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]) && !is_entity_dead(Local_131[iVar0 /*18*/], 0))
			{
				Local_131[iVar0 /*18*/].f_8 = {get_entity_coords(Local_131[iVar0 /*18*/], 1)};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_204)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !is_entity_dead(Local_204[iVar0 /*18*/], 0))
			{
				Local_204[iVar0 /*18*/].f_6 = {get_entity_coords(Local_204[iVar0 /*18*/], 1)};
			}
			iVar0++;
		}
		if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vLocal_60 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
		}
		if (!PED::IS_PED_INJURED(iLocal_86))
		{
			vLocal_63 = {get_entity_coords(iLocal_86, 1)};
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_91) && !is_entity_dead(iLocal_91, 0))
		{
			vLocal_66 = {get_entity_coords(iLocal_91, 1)};
		}
		if (!func_219())
		{
			if (is_world_point_within_brain_activation_range())
			{
				switch (iLocal_369)
				{
					case 0:
						if (func_209())
						{
							func_199();
							iLocal_369++;
						}
						else if (func_187())
						{
							func_269();
						}
						break;
					
					case 1:
						if ((func_186() || get_player_wanted_level(player_id()) > 0) || !is_vehicle_driveable(iLocal_91, 0))
						{
							if (!Global_3 && !iLocal_70)
							{
								func_185();
								func_269();
							}
						}
						else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, true, 0))
						{
							func_176(1);
							iLocal_360 = func_175(iLocal_86, 0, 145);
							func_174("MAG_2_ESCAPE_PAP_GET_CAR");
							func_173(0);
						}
						break;
				}
			}
			else
			{
				func_269();
			}
		}
		else
		{
			set_all_random_peds_flee_this_frame(player_id());
			switch (iLocal_47)
			{
				case 0:
					func_170();
					break;
				
				case 1:
					func_167();
					break;
				
				case 2:
					func_146();
					break;
				
				case 3:
					func_134();
					break;
				
				case 4:
					func_104();
					break;
				
				case 10:
					func_269();
					break;
				
				case 5:
					func_103();
					break;
				
				case 6:
					func_100(sLocal_371);
					break;
				
				case 7:
					func_99();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_98())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
						{
							delete_ped(&iLocal_86);
						}
						func_74();
					}
					break;
				
				case 11:
					func_70();
					break;
			}
			if (!is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_63, 210f, 210f, 210f, false, true, 0))
			{
				func_185();
				func_269();
			}
			if (((iLocal_47 != 5 && iLocal_47 != 6) && iLocal_47 != 10) && iLocal_47 != 7)
			{
				if (!Global_3 && !iLocal_70)
				{
					if (func_67(iLocal_86, 1, 1) || func_66())
					{
						if (iLocal_47 > 0)
						{
							func_173(5);
						}
						else
						{
							func_185();
							func_173(10);
						}
					}
					if (((iLocal_47 != 5 && iLocal_47 != 10) && iLocal_47 != 0) && iLocal_47 != 7)
					{
						if (func_62())
						{
							func_173(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_47 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_74 || func_19() != 0))
			{
				if ((!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, true, 0) && GAMEPLAY::GET_GAME_TIMER() - iLocal_564 > 5000) && !PED::IS_PED_INJURED(Local_204[iVar1 /*18*/]))
				{
					if (vdist2(get_entity_coords(Local_204[iVar1 /*18*/], 1), vLocal_60) < 30.5f * 30.5f && vdist2(vLocal_63, vLocal_60) > 22.5f * 22.5f)
					{
						if (func_219())
						{
							if (Local_395[4 /*10*/] != Local_204[iVar1 /*18*/])
							{
								func_18(&Local_395, 4);
								func_17(&Local_395, 4, Local_204[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_663)
							{
								if (func_5(&Local_395, sLocal_372, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_564 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_663 = 1;
								}
							}
							else if (func_5(&Local_395, sLocal_372, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_564 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
						else
						{
							StringCopy(&Var2, "REPAP_AZAA_0", 24);
							StringIntConCat(&Var2, get_random_int_in_range(true, 13), 24);
							func_3(Local_204[iVar1 /*18*/], &Var2, "PAPARAZZO", 24);
							iLocal_564 = GAMEPLAY::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		if (iLocal_47 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID());
		if (is_vehicle_driveable(iVar0, 0))
		{
			iVar1 = get_ped_in_vehicle_seat(iVar0, false);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						if (!is_ped_headtracking_entity(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							task_look_at_entity(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (get_entity_health(Local_204[iVar0 /*18*/]) < Local_204[iVar0 /*18*/].f_17)
			{
				if (has_entity_been_damaged_by_entity(Local_204[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_386[iVar0] += Local_204[iVar0 /*18*/].f_17 - get_entity_health(Local_204[iVar0 /*18*/]);
					iLocal_82 += Local_204[iVar0 /*18*/].f_17 - get_entity_health(Local_204[iVar0 /*18*/]);
					clear_entity_last_damage_entity(Local_204[iVar0 /*18*/]);
					if (iLocal_386[iVar0] > iLocal_385)
					{
						iLocal_385 = iLocal_386[iVar0];
					}
				}
			}
			Local_204[iVar0 /*18*/].f_17 = get_entity_health(Local_204[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
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

int func_5(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

bool func_6(char* sParam0, int iParam1, int iParam2)
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
					func_15();
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
		if (func_14(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_13();
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
				func_11();
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
				if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (func_10())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_ragdoll(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_9())
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
			func_8();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_7();
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
		func_15();
	}
	return false;
}

void func_7()
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

void func_8()
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

bool func_9()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_10()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
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
		if (get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1))
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

void func_11()
{
	if (func_12(14))
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[2 /*29*/])
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
		Global_14413 = func_19();
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

int func_12(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_13()
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

int func_14(int iParam0, int iParam1)
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

void func_15()
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

void func_16(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_17(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!PED::IS_PED_INJURED(iParam2))
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
		if (!PED::IS_PED_INJURED(iParam2))
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

void func_18(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

auto func_19()
{
	func_20();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_20()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_22(PLAYER::PLAYER_PED_ID());
			if (func_21(iVar0) && (!func_12(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_21(Global_101154.f_1826.f_539.f_3549))
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

int func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_86))
		{
			if (vdist2(vLocal_60, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = vdist2(vLocal_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	auto uVar5;
	int iVar6;
	Vector3 fVar7;
	int iVar8;
	
	switch (iLocal_49)
	{
		case 0:
			iLocal_616 = 0;
			request_model(joaat("a_m_y_genstreet_02"));
			request_model(joaat("prop_pap_camera_01"));
			request_model(joaat("cavalcade2"));
			request_model(joaat("vader"));
			request_anim_dict(sLocal_373);
			request_anim_dict("random@paparazzi@pap_anims");
			if (((((has_model_loaded(joaat("a_m_y_genstreet_02")) && has_model_loaded(joaat("prop_pap_camera_01"))) && has_model_loaded(joaat("cavalcade2"))) && has_model_loaded(joaat("vader"))) && has_anim_dict_loaded(sLocal_373)) && has_anim_dict_loaded("random@paparazzi@pap_anims"))
			{
				vLocal_596[0 /*3*/] = {266.6049f, 157.7677f, 104.2417f};
				vLocal_596[1 /*3*/] = {280.2455f, 152.1227f, 103.7096f};
				vLocal_596[2 /*3*/] = {223.2588f, 50.6347f, 83.6598f};
				vLocal_596[3 /*3*/] = {244.1302f, 37.4709f, 83.4804f};
				fLocal_609[0] = -111.1625f;
				fLocal_609[1] = 68.857f;
				fLocal_609[2] = -108.2056f;
				fLocal_609[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_131)
				{
					func_61(iVar0);
					func_59(func_60(iVar0));
					func_59(func_58(iVar0));
					iVar0++;
				}
				iLocal_614 = 0;
				func_57(func_60(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_57(func_58(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_57(func_58(2), vLocal_596[1 /*3*/], fLocal_609[1]);
				func_57(func_58(3), vLocal_596[1 /*3*/], fLocal_609[1]);
				func_56(0, vLocal_596[0 /*3*/], fLocal_609[0], 1);
				func_56(1, vLocal_596[1 /*3*/], fLocal_609[1], 0);
				set_entity_coords(func_55(0, 1), 265.408f, 151.2875f, 103.5673f, 1, false, 0, 1);
				set_entity_heading(func_55(0, 1), 217.1033f);
				set_entity_coords(func_55(2, 1), 245.9477f, 72.661f, 89.1067f, 1, false, 0, 1);
				set_entity_heading(func_55(2, 1), 38.6283f);
				set_entity_coords(func_55(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, false, 0, 1);
				set_entity_heading(func_55(3, 1), 272.9875f);
				task_play_anim(func_55(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				task_play_anim(func_55(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				task_play_anim(func_55(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				task_play_anim(func_55(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				task_play_anim(func_55(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			func_53(func_58(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_53(func_60(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_53(func_58(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_53(func_58(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_53(func_58(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[2 /*18*/].f_2))
			{
				if (!is_entity_visible(Local_204[2 /*18*/].f_2))
				{
					set_entity_visible(Local_204[2 /*18*/].f_2, true, 0);
				}
			}
			switch (iLocal_616)
			{
				case 0:
					if (!PED::IS_PED_INJURED(func_55(1, 0)))
					{
						clear_ped_tasks(func_55(1, 0));
					}
					if (!PED::IS_PED_INJURED(func_55(1, 1)))
					{
						clear_ped_tasks(func_55(1, 1));
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_131[2 /*18*/]))
					{
						func_56(2, vLocal_596[2 /*3*/], fLocal_609[2], 0);
						if (is_vehicle_driveable(Local_131[2 /*18*/], 0))
						{
							func_57(func_60(2), get_entity_coords(Local_131[2 /*18*/], 1), 0f);
							set_ped_into_vehicle(func_55(2, 0), Local_131[2 /*18*/], -1);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_131[3 /*18*/]))
					{
						func_56(3, vLocal_596[3 /*3*/], fLocal_609[3], 0);
					}
					if (!PED::IS_PED_INJURED(func_55(2, 1)))
					{
						task_follow_nav_mesh_to_coord(func_55(2, 1), vLocal_581, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!PED::IS_PED_INJURED(func_55(3, 1)))
					{
						task_follow_nav_mesh_to_coord(func_55(3, 1), vLocal_584, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(func_55(3, 0)))
					{
						func_57(func_60(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || iLocal_70)
					{
						if (!PED::IS_PED_INJURED(func_55(1, 0)))
						{
							task_follow_nav_mesh_to_coord(func_55(1, 0), vLocal_587, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!PED::IS_PED_INJURED(func_55(1, 1)))
						{
							task_follow_nav_mesh_to_coord(func_55(1, 1), vLocal_590, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!PED::IS_PED_INJURED(func_55(0, 1)))
						{
							task_follow_nav_mesh_to_coord(func_55(0, 1), vLocal_593, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					settimerb(false);
					iVar1 = 0;
					while (iVar1 < Local_204)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar1 /*18*/]))
						{
							_0x153973AB99FE8980(Local_204[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0f);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_131)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar1 /*18*/]))
						{
							_0x153973AB99FE8980(Local_131[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0f);
						}
						iVar1++;
					}
					iLocal_616++;
					break;
				
				case 1:
					func_49();
					if ((is_vehicle_driveable(Local_131[0 /*18*/], 0) && !PED::IS_PED_INJURED(func_55(0, 0))) && !PED::IS_PED_INJURED(func_55(0, 1)))
					{
						if (!iLocal_571[1])
						{
							iLocal_571[1] = 1;
							task_vehicle_drive_to_coord(func_55(0, 0), Local_131[0 /*18*/], vLocal_575, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((is_vehicle_driveable(Local_131[2 /*18*/], 0) && !PED::IS_PED_INJURED(func_55(2, 0))) && !PED::IS_PED_INJURED(func_55(2, 1)))
					{
						if (!iLocal_571[0])
						{
							task_vehicle_drive_to_coord(func_55(2, 0), Local_131[2 /*18*/], vLocal_578, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_571[0] = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_86) && !PED::IS_PED_INJURED(iLocal_86))
					{
						func_46(iLocal_86, 6);
						if (Global_3 || iLocal_70)
						{
							if (!PED::IS_PED_INJURED(func_55(1, 0)))
							{
								if (is_entity_at_coord(func_55(1, 0), vLocal_587, Global_22, false, true, 0))
								{
									func_45(iLocal_86, func_60(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_55(1, 1)))
							{
								if (is_entity_at_coord(func_55(1, 1), vLocal_590, Global_22, false, true, 0))
								{
									func_45(iLocal_86, func_58(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_55(0, 1)))
							{
								if (is_entity_at_coord(func_55(0, 1), vLocal_590, Global_22, false, true, 0))
								{
									func_45(iLocal_86, func_58(0));
								}
							}
						}
						else
						{
							func_46(iLocal_86, func_60(1));
							func_46(iLocal_86, func_58(1));
							if (timerb() > 1000)
							{
								func_46(iLocal_86, func_60(1));
							}
						}
					}
					if (vdist2(get_entity_coords(iLocal_91, 1), vLocal_87) < 9f)
					{
						if (is_entity_at_coord(func_55(2, 1), vLocal_581, Global_22, false, true, 0))
						{
							func_45(iLocal_86, func_58(2));
						}
						if (is_entity_at_coord(func_55(3, 1), vLocal_584, Global_22, false, true, 0))
						{
							func_45(iLocal_86, func_58(3));
						}
						if (is_entity_at_coord(func_55(0, 1), vLocal_584, Global_22, false, true, 0))
						{
							func_45(iLocal_86, func_58(0));
						}
					}
					else
					{
						if (!is_bit_set(iLocal_619, 3))
						{
							clear_ped_tasks(Local_204[func_58(3) /*18*/]);
							GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_619, 3);
						}
						if (!is_bit_set(iLocal_619, 2))
						{
							clear_ped_tasks(Local_204[func_58(2) /*18*/]);
							GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_619, 2);
						}
						if (!is_bit_set(iLocal_619, false))
						{
							clear_ped_tasks(Local_204[func_58(0) /*18*/]);
							GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_619, false);
						}
						if (Global_3 || iLocal_70)
						{
							func_45(iLocal_86, func_58(3));
						}
						else
						{
							func_46(iLocal_86, func_58(3));
						}
						func_46(iLocal_86, func_58(2));
						func_46(iLocal_86, func_58(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (is_vehicle_driveable(iLocal_91, 0))
			{
				if (get_entity_speed(iLocal_91) < 1f)
				{
					fLocal_574 += get_frame_time();
				}
				else if (fLocal_574 > 0f)
				{
					fLocal_574 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_131)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]) && iLocal_47 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_614 || !ENTITY::DOES_ENTITY_EXIST(Local_131[0 /*18*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_131[1 /*18*/]))) && GAMEPLAY::GET_GAME_TIMER() - iLocal_615 > 500)
					{
						if (vdist2(vLocal_60, vLocal_87) > 400f)
						{
							if (vdist2(vLocal_60, vLocal_87) < 62500f || GAMEPLAY::GET_GAME_TIMER() - iLocal_370 < 30000)
							{
								func_40(Local_131[iVar0 /*18*/], iLocal_91, &(Local_131[iVar0 /*18*/].f_5), &(Local_131[iVar0 /*18*/].f_15), &(Local_131[iVar0 /*18*/].f_11), &(Local_131[iVar0 /*18*/].f_14), &(Local_131[iVar0 /*18*/].f_16), Local_131[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_614 = iVar0;
								iLocal_615 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
					}
					iVar2 = func_60(iVar0);
					if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]))
					{
						iVar3 = func_58(iVar0);
					}
					else
					{
						iVar3 = func_60(iVar0);
					}
					switch (Local_131[iVar0 /*18*/].f_17)
					{
						case 0:
							if (is_vehicle_driveable(Local_131[iVar0 /*18*/], 0))
							{
								if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_131[iVar0 /*18*/], 0))
								{
									if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]))
									{
										if (!is_ped_in_vehicle(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
										{
											if (get_script_task_status(Local_204[iVar2 /*18*/], -1794415470) != 1 && is_vehicle_seat_free(Local_131[iVar0 /*18*/], -1))
											{
												task_enter_vehicle(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))
										{
											if (!is_ped_in_vehicle(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
											{
												if (get_script_task_status(Local_204[iVar3 /*18*/], -1794415470) != 1 && is_vehicle_seat_free(Local_131[iVar0 /*18*/], false))
												{
													task_enter_vehicle(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], -1, false, 2f, 1, 0);
												}
											}
										}
										if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]) && (iVar3 != -1 && !PED::IS_PED_INJURED(Local_204[iVar3 /*18*/])))
										{
											if ((is_ped_in_vehicle(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar3 != -1 && is_ped_in_vehicle(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))) && is_vehicle_driveable(iLocal_91, 0))
											{
												if (get_script_task_status(Local_204[iVar2 /*18*/], -1273030092) != 1 && get_script_task_status(Local_204[iVar2 /*18*/], -1817882002) != 1)
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar2 /*18*/], 3, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar2 /*18*/], 1, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar2 /*18*/], 2, false);
													if (iVar0 == 0)
													{
														task_vehicle_mission(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														task_vehicle_mission(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														task_vehicle_mission(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														task_vehicle_mission(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												set_drive_task_cruise_speed(Local_204[iVar2 /*18*/], func_39(3f * get_distance_between_coords(vLocal_66, Local_131[iVar0 /*18*/].f_8, 1), 50f, 120f));
											}
										}
									}
									if (fLocal_574 > 3f && vdist(Local_131[iVar0 /*18*/].f_8, vLocal_66) < 10f)
									{
										Local_131[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]))
								{
									if (!is_ped_fleeing(Local_204[iVar2 /*18*/]))
									{
										set_ped_flee_attributes(Local_204[iVar2 /*18*/], 2, false);
										task_smart_flee_ped(Local_204[iVar2 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))
									{
										if (!is_ped_fleeing(Local_204[iVar3 /*18*/]))
										{
											set_ped_flee_attributes(Local_204[iVar3 /*18*/], 2, false);
											task_smart_flee_ped(Local_204[iVar3 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (is_ped_in_any_vehicle(Local_204[iVar2 /*18*/], 0))
							{
								task_leave_any_vehicle(Local_204[iVar2 /*18*/], true, 256);
							}
							else
							{
								func_46(iLocal_86, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))
								{
									if (is_ped_in_any_vehicle(Local_204[iVar3 /*18*/], 0))
									{
										task_leave_any_vehicle(Local_204[iVar3 /*18*/], false, 256);
									}
									else
									{
										func_46(iLocal_86, iVar3);
									}
								}
							}
							if (is_vehicle_driveable(Local_131[iVar0 /*18*/], 0))
							{
								if (vdist(Local_131[iVar0 /*18*/].f_8, vLocal_66) > 15f)
								{
									Local_131[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]) && (iVar3 == -1 || !PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))) && is_vehicle_driveable(Local_131[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!is_entity_occluded(Local_204[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!is_entity_occluded(Local_204[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!is_entity_occluded(Local_131[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && vdist(vLocal_60, Local_131[iVar0 /*18*/].f_8) > 25f) && vdist(vLocal_60, Local_204[iVar0 /*18*/].f_6) > 25f)
						{
							if (!is_ped_in_vehicle(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								set_ped_into_vehicle(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!is_ped_in_vehicle(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									set_ped_into_vehicle(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], false);
								}
							}
						}
					}
					if (func_38(iVar0, 1125515264))
					{
						func_37(iVar0);
					}
				}
				func_44();
				func_29();
				iVar0++;
			}
			break;
		
		case 4:
			func_49();
			if (!iLocal_618)
			{
				iVar0 = 0;
				while (iVar0 < Local_131)
				{
					uVar5 = func_60(iVar0);
					if (!PED::IS_PED_INJURED(Local_204[uVar5 /*18*/]))
					{
						iVar6 = func_58(iVar0);
					}
					else
					{
						iVar6 = func_60(iVar0);
					}
					if (is_vehicle_driveable(Local_131[iVar0 /*18*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_204[uVar5 /*18*/]))
						{
							if (!is_ped_in_vehicle(Local_204[uVar5 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								if (get_script_task_status(Local_204[uVar5 /*18*/], -1794415470) != 1)
								{
									task_enter_vehicle(Local_204[uVar5 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_204[iVar6 /*18*/]))
							{
								if (!is_ped_in_vehicle(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									if (get_script_task_status(Local_204[iVar6 /*18*/], -1794415470) != 1)
									{
										task_enter_vehicle(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], -1, false, 2f, 1, 0);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_204[uVar5 /*18*/]) && (iVar6 != -1 && !PED::IS_PED_INJURED(Local_204[iVar6 /*18*/])))
							{
								if ((is_ped_in_vehicle(Local_204[uVar5 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar6 != -1 && is_ped_in_vehicle(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))) && is_vehicle_driveable(iLocal_91, 0))
								{
									fVar7 = func_39(70f - to_float(GAMEPLAY::GET_GAME_TIMER() - iLocal_85) / 50f, 0f, 70f);
									if (fVar7 <= 1f || GAMEPLAY::GET_GAME_TIMER() - iLocal_85 > 4000)
									{
										set_drive_task_max_cruise_speed(Local_204[uVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_131)
										{
											if ((is_vehicle_driveable(Local_131[iVar8 /*18*/], 0) && !PED::IS_PED_INJURED(func_55(iVar8, 0))) && is_ped_in_vehicle(func_55(iVar8, 0), Local_131[iVar8 /*18*/], 0))
											{
												clear_ped_tasks(func_55(iVar8, 0));
												task_vehicle_mission(func_55(iVar8, 0), Local_131[iVar8 /*18*/], false, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_618 = 1;
									}
									else if (get_script_task_status(Local_204[uVar5 /*18*/], -1273030092) != 1 && get_script_task_status(Local_204[uVar5 /*18*/], -1817882002) != 1)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[uVar5 /*18*/], 3, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[uVar5 /*18*/], 1, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[uVar5 /*18*/], 2, false);
										if (iVar0 == 0)
										{
											task_vehicle_mission(Local_204[uVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											task_vehicle_mission(Local_204[uVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											task_vehicle_mission(Local_204[uVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											task_vehicle_mission(Local_204[uVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(Local_204[uVar5 /*18*/]))
						{
							if (!is_ped_fleeing(Local_204[uVar5 /*18*/]))
							{
								set_ped_flee_attributes(Local_204[uVar5 /*18*/], 2, false);
								task_smart_flee_ped(Local_204[uVar5 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_204[iVar6 /*18*/]))
							{
								if (!is_ped_fleeing(Local_204[iVar6 /*18*/]))
								{
									set_ped_flee_attributes(Local_204[iVar6 /*18*/], 2, false);
									task_smart_flee_ped(Local_204[iVar6 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_617, 10f))
				{
					func_37(iLocal_617);
				}
				iLocal_617++;
				if (iLocal_617 > 3)
				{
					iLocal_617 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_617, 1125515264))
			{
				func_37(iLocal_617);
			}
			iLocal_617++;
			if (iLocal_617 > 3)
			{
				iLocal_617 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
		{
			if (iLocal_49 > 1)
			{
				if (!is_string_null_or_empty(sLocal_373))
				{
					func_28(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2) && is_entity_attached(Local_204[iVar0 /*18*/].f_2))
					{
						if (!is_ped_in_any_vehicle(Local_204[iVar0 /*18*/], 0))
						{
							if (is_entity_visible(Local_204[iVar0 /*18*/].f_2))
							{
								if (is_ped_getting_up(Local_204[iVar0 /*18*/]))
								{
									set_entity_visible(Local_204[iVar0 /*18*/].f_2, false, 0);
								}
							}
							else if (!is_ped_getting_up(Local_204[iVar0 /*18*/]))
							{
								set_entity_visible(Local_204[iVar0 /*18*/].f_2, true, 0);
							}
							if (!is_entity_occluded(Local_204[iVar0 /*18*/]))
							{
								if (!is_entity_playing_anim(Local_204[iVar0 /*18*/], sLocal_373, func_27(iVar0), 3))
								{
									if (!Local_204[iVar0 /*18*/].f_11)
									{
										if (!is_entity_playing_anim(Local_204[iVar0 /*18*/], sLocal_373, "grip", 3))
										{
											task_play_anim(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_204[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_204[iVar0 /*18*/].f_11)
								{
									task_play_anim(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_204[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_204[iVar0 /*18*/].f_10)
							{
								request_anim_set(sLocal_373);
								if (has_anim_set_loaded(sLocal_373))
								{
									set_ped_weapon_movement_clipset(Local_204[iVar0 /*18*/], sLocal_373);
									Local_204[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_204[iVar0 /*18*/].f_11)
							{
								task_play_anim(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_204[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_204[iVar0 /*18*/].f_10)
							{
								reset_ped_weapon_movement_clipset(Local_204[iVar0 /*18*/]);
								Local_204[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (is_ped_sitting_in_any_vehicle(Local_204[iVar0 /*18*/]) && func_26(Local_204[iVar0 /*18*/], get_vehicle_ped_is_in(Local_204[iVar0 /*18*/], 0)) == -1)
						{
							if (is_entity_visible(Local_204[iVar0 /*18*/].f_2))
							{
								set_entity_visible(Local_204[iVar0 /*18*/].f_2, false, 0);
							}
						}
						else if (!is_entity_visible(Local_204[iVar0 /*18*/].f_2))
						{
							set_entity_visible(Local_204[iVar0 /*18*/].f_2, true, 0);
						}
					}
					else
					{
						if (Local_204[iVar0 /*18*/].f_11)
						{
							task_play_anim(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_204[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_204[iVar0 /*18*/].f_10)
						{
							reset_ped_weapon_movement_clipset(Local_204[iVar0 /*18*/]);
							Local_204[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_47 != 7)
			{
				if (is_ped_being_jacked(Local_204[iVar0 /*18*/]) && is_ped_jacking(PLAYER::PLAYER_PED_ID()))
				{
					func_173(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_47 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_131)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]))
			{
				if (is_vehicle_driveable(Local_131[iVar0 /*18*/], 0))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_131[iVar0 /*18*/], 0))
					{
						func_173(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0, 0) && !is_entity_dead(iParam1, 0))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (get_ped_in_vehicle_seat(iParam1, false) == iParam0)
			{
				return 0;
			}
			if (get_ped_in_vehicle_seat(iParam1, true) == iParam0)
			{
				return 1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = false;
	while (iVar0 < 15)
	{
		if (is_bit_set(Local_204[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = iVar1 + iLocal_375;
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (is_entity_playing_anim(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 3))
				{
					if (get_entity_anim_current_time(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0)) > 0.9f)
					{
						clear_bit(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (is_entity_playing_anim(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[iVar3 - iVar1], 3))
				{
					if (get_entity_anim_current_time(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[iVar3 - iVar1]) > 0.9f)
					{
						clear_bit(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!is_entity_playing_anim(Local_204[iParam0 /*18*/], sLocal_373, "grip", 3))
			{
				clear_bit(&(Local_204[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		iVar0 = func_58(iLocal_568);
		if (((ENTITY::DOES_ENTITY_EXIST(Local_131[iLocal_568 /*18*/]) && is_vehicle_driveable(Local_131[iLocal_568 /*18*/], 0)) && ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/])) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
		{
			if (is_vehicle_model(Local_131[iLocal_568 /*18*/], joaat("cavalcade2")))
			{
				if (vdist2(Local_204[iVar0 /*18*/].f_6, vLocal_63) < pow(30f, 2f) && get_ped_in_vehicle_seat(Local_131[iLocal_568 /*18*/], false) == Local_204[iVar0 /*18*/])
				{
					if (!Local_204[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && GAMEPLAY::GET_GAME_TIMER() - Local_204[iVar0 /*18*/].f_13 > 1000)
					{
						if (!is_entity_playing_anim(Local_204[iVar0 /*18*/], sLocal_374, "base", 3))
						{
							task_play_anim(Local_204[iVar0 /*18*/], sLocal_374, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_204[iVar0 /*18*/].f_9)
			{
				if (vdist2(Local_204[iVar0 /*18*/].f_6, vLocal_63) < pow(30f, 2f) && get_ped_in_vehicle_seat(Local_131[iLocal_568 /*18*/], false) == Local_204[iVar0 /*18*/])
				{
					task_sweep_aim_entity(Local_204[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_86, 1.57f, 0.25f);
					Local_204[iVar0 /*18*/].f_9 = 1;
					Local_204[iVar0 /*18*/].f_13 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
			else if (Local_204[iVar0 /*18*/].f_9)
			{
				if (GAMEPLAY::GET_GAME_TIMER() - Local_204[iVar0 /*18*/].f_13 > 2000)
				{
					Local_204[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_568++;
		if (iLocal_568 >= Local_131)
		{
			iLocal_568 = 0;
		}
	}
}

void func_30(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 fVar7;
	
	if (!PED::IS_PED_INJURED(Local_204[iParam0 /*18*/]) && !PED::IS_PED_INJURED(iLocal_86))
	{
		iVar0 = 15;
		vVar1 = {vLocal_63 - Local_204[iParam0 /*18*/].f_6};
		vVar4 = {get_entity_forward_vector(Local_204[iParam0 /*18*/])};
		fVar7 = func_34(vVar4, vVar1);
		if (absf(fVar7) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar7 >= 10f && fVar7 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar7 >= 60f && fVar7 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar7 <= -10f && fVar7 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar7 < -60f && fVar7 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_31(iParam0, iVar0);
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	if (iParam1 < 15)
	{
		if (!is_bit_set(Local_204[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				task_play_anim(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				task_play_anim(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				task_play_anim(Local_204[iParam0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_204[iParam0 /*18*/].f_15 = 0;
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Local_204[iParam0 /*18*/].f_15), iParam1);
		}
	}
}

int func_32(int iParam0)
{
	return iParam0 - 5;
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < 5 + iLocal_375);
}

float func_34(Vector3 vParam0, Vector3 vParam1)
{
	float fVar0;
	
	vParam0 = {func_35(vParam0)};
	vParam3 = {func_35(vParam3)};
	fVar0 = atan2(vParam3.y, vParam3.x) - atan2(vParam0.y, vParam0.x);
	if (fVar0 > 180f)
	{
		fVar0 -= 360f;
	}
	else if (fVar0 < -180f)
	{
		fVar0 += 360f;
	}
	return fVar0;
}

Vector3 func_35(Vector3 vParam0)
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

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	if (!is_string_null_or_empty(sLocal_374))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!iVar0)
			{
				if (is_bit_set(Local_204[iParam0 /*18*/].f_15, iVar1))
				{
					iVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_37(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_131[iParam0 /*18*/]) && is_entity_occluded(Local_131[iParam0 /*18*/]))
	{
		delete_vehicle(&(Local_131[iParam0 /*18*/]));
	}
	if (does_blip_exist(Local_131[iParam0 /*18*/].f_1))
	{
		remove_blip(&(Local_131[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			uVar1 = func_58(iParam0);
		}
		else
		{
			uVar1 = func_60(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[uVar1 /*18*/]) && is_entity_occluded(Local_204[uVar1 /*18*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[uVar1 /*18*/]))
			{
				delete_object(&(Local_204[uVar1 /*18*/].f_2));
			}
			if (does_blip_exist(Local_204[uVar1 /*18*/].f_1))
			{
				remove_blip(&(Local_204[uVar1 /*18*/].f_1));
			}
			delete_ped(&(Local_204[uVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_131[iParam0 /*18*/]))
	{
		if (is_vehicle_driveable(Local_131[iParam0 /*18*/], 0))
		{
			if (vdist2(vLocal_60, Local_131[iParam0 /*18*/].f_8) < fParam1 * fParam1 || !is_entity_occluded(Local_131[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 0)))
	{
		if (!PED::IS_PED_INJURED(func_55(iParam0, 0)))
		{
			if (vdist2(vLocal_60, Local_204[func_60(iParam0) /*18*/].f_6) < fParam1 * fParam1 || !is_entity_occluded(func_55(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 1)))
	{
		if (!PED::IS_PED_INJURED(func_55(iParam0, 1)))
		{
			if (vdist2(vLocal_60, Local_204[func_58(iParam0) /*18*/].f_6) < fParam1 * fParam1 || !is_entity_occluded(func_55(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_39(float fParam0, float fParam1, float fParam2)
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

void func_40(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, Vector3 vParam7, int iParam8, float fParam9)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		if (((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !is_this_model_a_boat(ENTITY::GET_ENTITY_MODEL(iParam1))) && !is_this_model_a_plane(ENTITY::GET_ENTITY_MODEL(iParam1))) && !is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(iParam1))) && !is_this_model_a_train(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			if (get_distance_between_coords(get_entity_coords(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_358, get_entity_coords(iParam1, 1), get_entity_rotation(iParam1, 2)))
				{
					*uParam2 = {*uParam4};
					*uParam3 = *uParam5;
					*uParam2 = {_get_object_offset_from_coords(*uParam2, *uParam3, vParam7)};
					*uParam4 = {get_entity_coords(iParam1, 1)};
					*uParam5 = get_entity_heading(iParam1);
				}
			}
			if (!is_entity_occluded(iParam0))
			{
				*uParam6 = GAMEPLAY::GET_GAME_TIMER();
			}
			else if (GAMEPLAY::GET_GAME_TIMER() - *uParam6 > iParam10)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam11 && get_distance_between_coords(get_entity_coords(iParam1, 1), *uParam2, 1) > 20f) && vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!is_sphere_visible(*uParam2, 6f))
						{
							clear_area_of_peds(*uParam2, 6f, 0);
							clear_area_of_vehicles(*uParam2, 6f, 0, 0, 0, 0, false);
							set_entity_coords(iParam0, *uParam2, 1, false, 0, 1);
							set_entity_heading(iParam0, *uParam3);
							set_vehicle_on_ground_properly(iParam0);
							set_vehicle_forward_speed(iParam0, func_39(get_entity_speed(iParam1) + 10f, 10f, 60f));
							set_vehicle_engine_on(iParam0, true, 1, 0);
							*uParam6 = GAMEPLAY::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
}

bool func_41(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

auto func_42(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	if (!is_entity_dead(iParam1, 0))
	{
		vVar3 = {get_entity_coords(iParam1, 1)};
	}
	else
	{
		vVar3 = {get_entity_coords(iParam1, 0)};
	}
	return get_distance_between_coords(vVar0, vVar3, iParam2);
}

int func_43(int iParam0, int iParam1, int iParam2, Vector3 vParam3, Vector3 vParam4)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	Vector3 vVar13;
	auto uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	Vector3 fVar22;
	float fVar23;
	Vector3 vVar24;
	int iVar27;
	auto uVar28;
	auto uVar31;
	auto uVar34;
	int iVar35;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
		get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam1), &vVar13, &uVar16);
		fVar19 = absf(vVar10.z - vVar7.z);
		fVar20 = absf(vVar10.x - vVar7.x);
		fVar21 = absf(vVar10.y - vVar7.y);
		if (fVar20 > fVar19)
		{
			fVar22 = fVar20 / 2f;
			fVar23 = fVar22 - absf(vVar7.z);
		}
		else
		{
			fVar22 = fVar21 / 2f;
			fVar23 = fVar22 - absf(vVar7.x);
		}
		vVar24.z += vVar13.z - vVar7.z;
		set_entity_coords(iParam2, vParam3, 1, false, 0, 1);
		set_entity_rotation(iParam2, vParam6, 2, 1);
		vVar1 = {get_offset_from_entity_in_world_coords(iParam2, Vector(fVar23 * 1.25f, fVar21 / 2f - fVar22 * 0.75f, 0f) + vVar24)};
		vVar4 = {get_offset_from_entity_in_world_coords(iParam2, Vector(fVar23 * 1.25f, -fVar21 / 2f + fVar22 * 0.75f, 0f) + vVar24)};
		iVar35 = _cast_3d_ray_point_to_point(vVar4, vVar1, fVar22, 19, PLAYER::PLAYER_PED_ID(), 4);
		if (_get_raycast_result(iVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_44()
{
	int iVar0;
	
	if (GAMEPLAY::GET_GAME_TIMER() - iLocal_567 > 100)
	{
		if (GAMEPLAY::GET_GAME_TIMER() - Local_204[iLocal_566 /*18*/].f_12 > 500)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[iLocal_566 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iLocal_566 /*18*/]))
			{
				iVar0 = true;
				if (!Local_204[iLocal_566 /*18*/].f_9 && is_ped_in_any_vehicle(Local_204[iLocal_566 /*18*/], 0))
				{
					iVar0 = false;
				}
				if (iVar0)
				{
					if (((is_entity_playing_anim(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566), 3) && get_entity_anim_current_time(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) > 0.5f) && get_entity_anim_current_time(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) < 0.75f) || Local_204[iLocal_566 /*18*/].f_9)
					{
						start_particle_fx_non_looped_on_entity("scr_rcpap1_camera", Local_204[iLocal_566 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1f, 0, 0, 0);
						if (iLocal_566 % 3 == 0)
						{
							play_sound_from_coord(-1, "SHUTTER_FLASH", get_entity_coords(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if (iLocal_566 % 3 == 1)
						{
							play_sound_from_coord(-1, "SHUTTER", get_entity_coords(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							play_sound_from_coord(-1, "FLASH", get_entity_coords(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_204[iLocal_566 /*18*/].f_12 = GAMEPLAY::GET_GAME_TIMER();
					}
					iLocal_567 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
			iLocal_566++;
			if (iLocal_566 >= Local_204)
			{
				iLocal_566 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(Local_204[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!is_ped_facing_ped(Local_204[iParam1 /*18*/], iParam0, 20f))
		{
			if (get_script_task_status(Local_204[iParam1 /*18*/], -875674219) != 1)
			{
				task_turn_ped_to_face_entity(Local_204[iParam1 /*18*/], iParam0, false);
			}
		}
		else if (GAMEPLAY::GET_GAME_TIMER() - Local_204[iParam1 /*18*/].f_13 > 2000)
		{
			if (!is_entity_playing_anim(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 3))
			{
				task_play_anim(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_204[iParam1 /*18*/].f_13 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	Vector3 vVar0;
	
	if (!PED::IS_PED_INJURED(Local_204[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = {get_offset_from_entity_in_world_coords(iParam0, func_48(iParam1))};
		switch (Local_204[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(vVar0, iParam1, iParam0);
				Local_204[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (get_script_task_status(Local_204[iParam1 /*18*/], 713668775) != 1 || vdist(vVar0, Local_204[iParam1 /*18*/].f_6) > 5f)
				{
					Local_204[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (vdist(vVar0, Local_204[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(vVar0, iParam1, iParam0);
					Local_204[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (vdist2(vVar0, Local_204[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(vVar0, iParam1, iParam0);
				}
				if (get_script_task_status(Local_204[iParam1 /*18*/], 713668775) != 1)
				{
					Local_204[iParam1 /*18*/].f_16--;
				}
				break;
			}
	}
}

void func_47(Vector3 vParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 fVar3;
	
	vVar0 = {func_35(get_entity_coords(iParam4, 1) - vParam0)};
	fVar3 = get_heading_from_vector_2d(vVar0.x, vVar0.y);
	Local_204[iParam3 /*18*/].f_3 = {vParam0};
	clear_ped_tasks(Local_204[iParam3 /*18*/]);
	if (vdist(vParam0, Local_204[iParam3 /*18*/].f_6) < 2f)
	{
		task_follow_nav_mesh_to_coord(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, fVar3);
	}
	else
	{
		task_follow_nav_mesh_to_coord(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, fVar3);
	}
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_49()
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (does_blip_exist(Local_204[iVar0 /*18*/].f_1))
		{
			if (PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				remove_blip(&(Local_204[iVar0 /*18*/].f_1));
			}
			else if (is_ped_in_any_vehicle(Local_204[iVar0 /*18*/], 0))
			{
				remove_blip(&(Local_204[iVar0 /*18*/].f_1));
			}
		}
		else if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]) && !is_ped_in_any_vehicle(Local_204[iVar0 /*18*/], 0))
		{
			Local_204[iVar0 /*18*/].f_1 = func_175(Local_204[iVar0 /*18*/], 1, 145);
			set_blip_name_from_text_file(Local_204[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131)
	{
		if (is_vehicle_driveable(Local_131[iVar0 /*18*/], 0))
		{
			if (does_blip_exist(Local_131[iVar0 /*18*/].f_1))
			{
				vVar1 = {get_blip_coords(Local_131[iVar0 /*18*/].f_1)};
				vVar4 = {Local_131[iVar0 /*18*/].f_8};
				vVar1.x += vVar4.x - vVar1.x / 10f;
				vVar1.y += vVar4.y - vVar1.y / 10f;
				vVar1.z += vVar4.z - vVar1.z / 10f;
				set_blip_coords(Local_131[iVar0 /*18*/].f_1, vVar1);
				if (func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0))
				{
					remove_blip(&(Local_131[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0))
			{
				Local_131[iVar0 /*18*/].f_1 = func_50(Local_131[iVar0 /*18*/].f_8, 0);
				set_blip_colour(Local_131[iVar0 /*18*/].f_1, 1);
				set_blip_name_from_text_file(Local_131[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				set_blip_priority(Local_131[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (does_blip_exist(Local_131[iVar0 /*18*/].f_1))
		{
			remove_blip(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

int func_50(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_51(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = get_vehicle_max_number_of_passengers(iParam0) + 1;
	if (iParam4 || !is_entity_dead(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!is_vehicle_seat_free(iParam0, iVar0 - 1))
			{
				iVar2 = get_ped_in_vehicle_seat(iParam0, iVar0 - 1);
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (iParam2)
				{
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (is_ped_a_player(iVar2))
						{
							if (get_player_wanted_level(_network_get_ped_player(iVar2)) == 0)
							{
								if (!iParam5)
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return false;
					}
				}
				else if (iParam1 == 0)
				{
					return false;
				}
				else
				{
					iVar3 = get_ped_in_vehicle_seat(iParam0, iVar0 - 1);
					if (!PED::IS_PED_INJURED(iVar3))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	return true;
}

void func_53(auto uParam0, Vector3 vParam1, Vector3 fParam2, char* sParam3, char* sParam4, char* sParam5)
{
	if (!PED::IS_PED_INJURED(Local_204[uParam0 /*18*/]))
	{
		if (vdist(get_entity_coords(Local_204[uParam0 /*18*/], 1), vParam1) > 1.5f)
		{
			if (get_script_task_status(Local_204[uParam0 /*18*/], 713668775) != 1)
			{
				task_follow_nav_mesh_to_coord(Local_204[uParam0 /*18*/], vParam1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (absf(func_54(get_entity_heading(Local_204[uParam0 /*18*/])) - func_54(fParam4)) > 10f)
		{
			if (get_script_task_status(Local_204[uParam0 /*18*/], 1920390111) != 1)
			{
				task_achieve_heading(Local_204[uParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_204[uParam0 /*18*/].f_16)
			{
				case 0:
					if (is_string_null_or_empty(sParam7))
					{
						if (!is_entity_playing_anim(Local_204[uParam0 /*18*/], sParam5, sParam6, 3))
						{
							task_play_anim(Local_204[uParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!is_entity_playing_anim(Local_204[uParam0 /*18*/], sParam5, sParam6, 3))
					{
						task_play_anim(Local_204[uParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (get_entity_anim_current_time(Local_204[uParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						task_play_anim(Local_204[uParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[uParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!is_entity_playing_anim(Local_204[uParam0 /*18*/], sParam5, sParam7, 3))
					{
						task_play_anim(Local_204[uParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (get_entity_anim_current_time(Local_204[uParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						task_play_anim(Local_204[uParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[uParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

auto func_54(Vector3 fParam0)
{
	if (fParam0 >= 180f)
	{
		fParam0 -= 360f;
	}
	if (fParam0 < -180f)
	{
		fParam0 += 360f;
	}
	return fParam0;
}

auto func_55(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_204[func_60(iParam0) /*18*/];
	}
	return Local_204[func_58(iParam0) /*18*/];
}

void func_56(int iParam0, Vector3 vParam1, Vector3 fParam2, int iParam3)
{
	if (iParam0 % 2 == 1)
	{
		Local_131[iParam0 /*18*/] = create_vehicle(joaat("vader"), vParam1, fParam4, 1, true);
	}
	else
	{
		Local_131[iParam0 /*18*/] = create_vehicle(joaat("cavalcade2"), vParam1, fParam4, 1, true);
		set_vehicle_colour_combination(Local_131[iParam0 /*18*/], false);
	}
	set_vehicle_on_ground_properly(Local_131[iParam0 /*18*/]);
	set_vehicle_strong(Local_131[iParam0 /*18*/], true);
	if (iParam5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 0)))
		{
			func_57(func_60(iParam0), vParam1, fParam4);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 1)))
		{
			func_57(func_58(iParam0), vParam1, fParam4);
		}
		if (!PED::IS_PED_INJURED(func_55(iParam0, 0)) && is_vehicle_driveable(Local_131[iParam0 /*18*/], 0))
		{
			set_ped_into_vehicle(func_55(iParam0, 0), Local_131[iParam0 /*18*/], -1);
		}
		if (!PED::IS_PED_INJURED(func_55(iParam0, 1)) && is_vehicle_driveable(Local_131[iParam0 /*18*/], 0))
		{
			set_ped_into_vehicle(func_55(iParam0, 1), Local_131[iParam0 /*18*/], false);
		}
		set_vehicle_engine_on(Local_131[iParam0 /*18*/], true, 1, 0);
	}
}

void func_57(int iParam0, Vector3 vParam1, Vector3 fParam2)
{
	Local_204[iParam0 /*18*/] = PED::CREATE_PED(26, joaat("a_m_y_genstreet_02"), vParam1, fParam4, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 1, false);
	set_blocking_of_non_temporary_events(Local_204[iParam0 /*18*/], true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 0, true);
	set_ped_can_be_knocked_off_vehicle(Local_204[iParam0 /*18*/], 3);
	set_entity_only_damaged_by_player(Local_204[iParam0 /*18*/], true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 17, true);
	set_ped_flee_attributes(Local_204[iParam0 /*18*/], 2, false);
	_0x3910051CCECDB00C(Local_204[iParam0 /*18*/], false);
	set_ped_keep_task(Local_204[iParam0 /*18*/], true);
	set_ped_shoot_rate(Local_204[iParam0 /*18*/], 100);
	set_ped_firing_pattern(Local_204[iParam0 /*18*/], -957453492);
	PED::SET_PED_CONFIG_FLAG(Local_204[iParam0 /*18*/], 101, true);
	PED::SET_PED_CONFIG_FLAG(Local_204[iParam0 /*18*/], 185, false);
	set_entity_health(Local_204[iParam0 /*18*/], 300);
	set_ped_component_variation(Local_204[iParam0 /*18*/], 3, iParam0 % 2, floor(to_float(iParam0) / 2f), 0);
	if (Global_3 || iLocal_70)
	{
		set_entity_invincible(Local_204[iParam0 /*18*/], true);
		set_entity_health(Local_204[iParam0 /*18*/], 500);
	}
	set_ped_target_loss_response(Local_204[iParam0 /*18*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 2, true);
	set_ped_max_move_blend_ratio(Local_204[iParam0 /*18*/], 2f);
	_0x3910051CCECDB00C(Local_204[iParam0 /*18*/], false);
	set_ped_helmet(Local_204[iParam0 /*18*/], 0);
	Local_204[iParam0 /*18*/].f_2 = create_object(joaat("prop_pap_camera_01"), get_ped_bone_coords(Local_204[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, true, false);
	attach_entity_to_entity(Local_204[iParam0 /*18*/].f_2, Local_204[iParam0 /*18*/], get_ped_bone_index(Local_204[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_204[0 /*18*/].f_2))
	{
		set_entity_visible(Local_204[0 /*18*/].f_2, false, 0);
	}
	Local_204[iParam0 /*18*/].f_17 = get_entity_health(Local_204[iParam0 /*18*/]);
}

auto func_58(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_59(int iParam0)
{
	if (iParam0 % 2 == 1)
	{
		Local_204[iParam0 /*18*/].f_14 = iParam0 - 1 / 2;
	}
	else
	{
		Local_204[iParam0 /*18*/].f_14 = iParam0 / 2;
	}
}

auto func_60(int iParam0)
{
	return iParam0 * 2;
}

void func_61(int iParam0)
{
	Local_131[iParam0 /*18*/].f_17 = 0;
}

bool func_62()
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		iVar0 = false;
		if (func_65())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_64()))
			{
				if (vdist(get_entity_coords(func_64(), 1), vLocal_63) < 5f && get_entity_speed(iLocal_91) < 1f)
				{
					iVar0 = true;
				}
			}
		}
		else if (is_vehicle_driveable(iLocal_91, 0))
		{
			if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91, 0) && is_ped_in_vehicle(iLocal_86, iLocal_91, 0))
			{
				fLocal_570 += get_frame_time();
			}
			else if (fLocal_570 > 0f)
			{
				fLocal_570 = 0f;
			}
		}
		if (iVar0)
		{
			fLocal_569 += get_frame_time();
		}
		else if (fLocal_569 > 0f)
		{
			fLocal_569 = 0f;
		}
		if (fLocal_569 > 30f)
		{
			iVar1 = true;
		}
		if (iLocal_71)
		{
			if (!is_ped_sitting_in_vehicle(iLocal_86, iLocal_91))
			{
				if (is_ped_ragdoll(iLocal_86))
				{
					iVar1 = true;
				}
				iLocal_71 = 0;
			}
		}
		if (!iLocal_71)
		{
			if (is_ped_sitting_in_vehicle(iLocal_86, iLocal_91))
			{
				iLocal_71 = 1;
			}
		}
		if (fLocal_570 > 30f)
		{
			iVar1 = true;
		}
		if (!is_vehicle_driveable(iLocal_91, 0) && (!iLocal_368 || iLocal_47 == 1))
		{
			iVar1 = true;
		}
		if (vdist(vLocal_63, vLocal_60) > 30f)
		{
			iVar1 = true;
		}
		if (((is_vehicle_driveable(iLocal_91, 0) && func_63(iLocal_91)) && (!iLocal_368 || iLocal_47 == 1)) && vdist(get_entity_coords(iLocal_86, 1), vLocal_56) > 15f)
		{
			iVar1 = true;
		}
		if (is_vehicle_driveable(iLocal_91, 0) && is_entity_in_water(iLocal_91))
		{
			iVar1 = true;
		}
		if (iVar1)
		{
			if (get_random_int_in_range(false, 2) == 1)
			{
				sLocal_371 = "REPAP_GUP";
			}
			else
			{
				sLocal_371 = "REPAP_GUP2";
			}
			return true;
		}
	}
	return false;
}

bool func_63(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (((is_vehicle_stuck_timer_up(iParam0, 0, 7000) || is_vehicle_stuck_timer_up(iParam0, 3, 30000)) || is_vehicle_stuck_timer_up(iParam0, 2, 30000)) || is_vehicle_stuck_timer_up(iParam0, 1, 40000))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_64()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_86))
		{
			if (vdist2(vLocal_63, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = vdist2(vLocal_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_204[iVar1 /*18*/];
	}
	return 0;
}

bool func_65()
{
	if (is_vehicle_driveable(iLocal_91, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_86))
		{
			if (is_ped_in_vehicle(iLocal_86, iLocal_91, 0) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (func_67(Local_204[iVar0 /*18*/], 0, 0))
		{
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]) || is_entity_dead(Local_204[iVar0 /*18*/], 0))
			{
				if (iLocal_386[iVar0] > 50)
				{
					iLocal_349++;
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_67(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
		if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 7))
		{
			get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar3, 1);
		}
		if (!iParam2)
		{
			if (is_bullet_in_area(vVar0, 5f, 1))
			{
				return true;
			}
		}
		if (vdist2(vVar0, vLocal_60) < 400f)
		{
			if (!iParam2)
			{
				if ((is_ped_armed(PLAYER::PLAYER_PED_ID(), 6) && !is_ped_current_weapon_silenced(PLAYER::PLAYER_PED_ID())) && is_ped_shooting(PLAYER::PLAYER_PED_ID()))
				{
					return true;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && is_ped_shooting(PLAYER::PLAYER_PED_ID())) && vdist2(vLocal_60, vVar0) < 9f)
			{
				return true;
			}
			if (((is_player_free_aiming_at_entity(player_id(), iParam0) || is_player_targetting_entity(player_id(), iParam0)) && (func_68(vLocal_60, iParam0) && vdist2(vLocal_60, get_entity_coords(iParam0, 1)) < 100f)) && is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
			{
				return true;
			}
			if (iLocal_385 > 150)
			{
				return true;
			}
		}
		if (_0x2F09F7976C512404(get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return true;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam1)
	{
		return true;
	}
	return false;
}

bool func_68(Vector3 vParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	
	vVar0 = {get_entity_coords(iParam3, 1)};
	vVar3 = {get_offset_from_entity_in_world_coords(iParam3, 0f, 1f, 0f) - vVar0};
	vVar6 = {vParam0 - vVar0};
	fVar9 = func_69(vVar3, vVar6);
	if (fVar9 > 0.5f)
	{
		return true;
	}
	return false;
}

float func_69(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

void func_70()
{
	if (iLocal_47 != 11)
	{
		if (does_blip_exist(iLocal_362))
		{
			remove_blip(&iLocal_362);
		}
		if (does_blip_exist(iLocal_363))
		{
			remove_blip(&iLocal_363);
		}
		if (does_blip_exist(iLocal_360))
		{
			remove_blip(&iLocal_360);
		}
		iLocal_48 = iLocal_47;
		iLocal_47 = 11;
	}
	else if (get_player_wanted_level(player_id()) > 0)
	{
		if (get_player_wanted_level(player_id()) < 3)
		{
			if (!func_73())
			{
				func_71("REPAP_COP1");
			}
		}
		else
		{
			func_173(5);
		}
	}
	else if (func_5(&Local_395, sLocal_372, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_47 = iLocal_48;
	}
}

void func_71(char* sParam0)
{
	if (GAMEPLAY::GET_GAME_TIMER() - iLocal_667 > 5000)
	{
		if (!func_72())
		{
			if (func_5(&Local_395, sLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_667 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
	}
}

bool func_72()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

auto func_73()
{
	if (!PED::IS_PED_INJURED(iLocal_86) && vdist2(vLocal_60, vLocal_63) < 400f)
	{
		if (!iLocal_350 && GAMEPLAY::GET_GAME_TIMER() - iLocal_352 > 5000)
		{
			if (iLocal_82 > 10)
			{
				iLocal_350 = 1;
				iLocal_82 = 0;
			}
		}
		if ((!iLocal_355 && !iLocal_350) && GAMEPLAY::GET_GAME_TIMER() - iLocal_356 > 4000)
		{
			if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 6) && is_ped_shooting(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_357 > 2)
				{
					if (!Global_3 && !iLocal_70)
					{
						func_173(5);
					}
				}
				else
				{
					iLocal_355 = 1;
					iLocal_357++;
				}
			}
		}
		if (((!iLocal_353 && !iLocal_350) && !iLocal_355) && GAMEPLAY::GET_GAME_TIMER() - iLocal_354 > 15000)
		{
			if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 6) && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_353 = 1;
			}
		}
		if (iLocal_350)
		{
			if (iLocal_351)
			{
				if (func_5(&Local_395, sLocal_372, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_352 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_350 = 0;
				}
			}
			else if (func_5(&Local_395, sLocal_372, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_352 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_350 = 0;
				iLocal_351 = 1;
			}
		}
		if (iLocal_355)
		{
			if (func_5(&Local_395, sLocal_372, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_356 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_355 = 0;
			}
		}
		if (iLocal_353)
		{
			if (func_5(&Local_395, sLocal_372, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_354 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_353 = 0;
			}
		}
	}
	return ((iLocal_353 || iLocal_355) || iLocal_350);
}

void func_74()
{
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		set_ped_keep_task(iLocal_86, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_69, 1862763509);
		if (!Global_3 && !iLocal_70)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_86, 317, true);
			set_blocking_of_non_temporary_events(iLocal_86, false);
		}
	}
	func_78(-1, 0);
	func_75();
	unlock_mission_news_story(62);
	func_269();
}

void func_75()
{
	func_76();
}

bool func_76()
{
	if (func_77(0))
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

int func_77(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_78(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_95(iParam0))
	{
		func_94(iParam0, iParam1);
		if (!func_93(51))
		{
			func_89("RE_REWARD", 1, 0, 4000, 10000, func_92(), 0, 138, 0);
			func_88(51);
		}
		if (func_87(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_86(iParam0, iParam1) != 322)
		{
			func_80(func_86(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_79(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_79(7);
			}
			else
			{
				func_79(1);
			}
		}
	}
}

void func_79(int iParam0)
{
	Global_101140 = iParam0;
}

void func_80(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_84(891 + iParam0, 1, -1, 1);
	}
	iVar0 = true;
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			iVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = uParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (iVar0)
	{
		func_81();
	}
}

void func_81()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	Vector3 fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 3:
					Global_100891++;
					fVar2 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 5:
					Global_100892++;
					fVar3 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 7:
					Global_100893++;
					fVar4 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 9:
					Global_100894++;
					fVar5 += Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f;
					break;
				
				case 11:
					Global_100895++;
					fVar6 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 13:
					Global_100896++;
					fVar7 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || Global_100877 * 10 / Global_100894 < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!is_bit_set(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_100877, 0);
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	stat_set_int(joaat("num_missions_completed"), Global_100890, 1);
	stat_set_int(joaat("num_missions_available"), Global_100873, 1);
	stat_set_int(joaat("num_minigames_completed"), Global_100891, 1);
	stat_set_int(joaat("num_minigames_available"), Global_100874, 1);
	stat_set_int(joaat("num_oddjobs_completed"), Global_100892, 1);
	stat_set_int(joaat("num_oddjobs_available"), Global_100875, 1);
	stat_set_int(joaat("num_rndpeople_completed"), Global_100893, 1);
	stat_set_int(joaat("num_rndpeople_available"), Global_100876, 1);
	stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stat_set_int(joaat("num_rndevents_available"), Global_100880, 1);
	stat_set_int(joaat("num_misc_completed"), Global_100896 + Global_100895, 1);
	stat_set_int(joaat("num_misc_available"), Global_100879 + Global_100878, 1);
	Global_100897 = Global_100890 * 100 / Global_100873;
	Global_100899 = Global_100892 + Global_100891 * 100 / Global_100875 + Global_100874;
	Global_100898 = Global_100893 + iVar9 * 100 / Global_100876 + Global_100880;
	Global_100900 = Global_100895 + Global_100896 * 100 / Global_100878 + Global_100879;
	stat_set_float(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	stat_set_int(joaat("percent_story_missions"), Global_100897, 1);
	stat_set_int(joaat("percent_ambient_missions"), Global_100898, 1);
	stat_set_int(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_83(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_82() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_76();
				}
			}
		}
	}
}

auto func_82()
{
	return Global_25120;
}

int func_83(int iParam0, int iParam1)
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

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_85();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stat_set_bool_masked(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stat_set_bool_masked(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stat_set_bool_masked(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stat_set_bool_masked(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stat_set_bool_masked(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stat_set_bool_masked(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stat_set_bool_masked(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stat_set_bool_masked(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stat_set_bool_masked(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stat_set_bool_masked(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stat_set_bool_masked(iVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

auto func_85()
{
	return Global_1312747;
}

int func_86(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

bool func_87(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
			break;
	}
	return true;
}

void func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_24935.f_150[iVar1]), iVar0);
	}
}

void func_89(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_90(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_90(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
{
	int iVar0;
	
	if (are_strings_equal(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = GAMEPLAY::GET_GAME_TIMER() + iParam3;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = GAMEPLAY::GET_GAME_TIMER() + iParam3 + iParam4;
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_91();
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, false))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, true))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_92()
{
	func_20();
	switch (Global_101154.f_1826.f_539.f_3549)
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

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return is_bit_set(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return false;
}

void func_94(int iParam0, int iParam1)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

int func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

auto func_96()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_97(cVar0);
	return uVar16;
}

int func_97(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (get_hash_key(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

bool func_98()
{
	if (Global_25355)
	{
		func_79(4);
		return true;
	}
	return false;
}

void func_99()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (does_blip_exist(iLocal_360))
	{
		remove_blip(&iLocal_360);
	}
	switch (iLocal_369)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				task_smart_flee_ped(iLocal_86, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_204)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
				{
					if (is_entity_occluded(Local_204[iVar0 /*18*/]) && vdist2(get_entity_coords(Local_204[iVar0 /*18*/], 1), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) > 900f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2))
						{
							delete_object(&(Local_204[iVar0 /*18*/].f_2));
						}
						delete_ped(&(Local_204[iVar0 /*18*/]));
					}
				}
				if (does_blip_exist(Local_204[iVar0 /*18*/].f_1))
				{
					remove_blip(&(Local_204[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_131)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]))
				{
					if (is_entity_occluded(Local_131[iVar0 /*18*/]) && vdist2(get_entity_coords(Local_131[iVar0 /*18*/], 1), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) > 900f)
					{
						delete_vehicle(&(Local_131[iVar0 /*18*/]));
					}
				}
				if (does_blip_exist(Local_131[iVar0 /*18*/].f_1))
				{
					remove_blip(&(Local_131[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			settimera(false);
			iLocal_673 = 0;
			iLocal_369++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_204)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/])) && !is_entity_dead(Local_204[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_46(PLAYER::PLAYER_PED_ID(), iVar0);
					if (is_entity_occluded(Local_204[iVar0 /*18*/]) && vdist2(get_entity_coords(Local_204[iVar0 /*18*/], 1), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) > 2500f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2))
						{
							delete_object(&(Local_204[iVar0 /*18*/].f_2));
						}
						delete_ped(&(Local_204[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_673)
			{
				if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(func_64(), 1)) < 100f)
				{
					iVar2 = get_random_int_in_range(false, 3);
					if (func_19() == 1)
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 7);
						func_18(&Local_395, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[6 /*10*/]) && !PED::IS_PED_INJURED(Local_395[6 /*10*/]))
								{
									if (func_5(&Local_395, sLocal_372, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 7, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[7 /*10*/]) && !PED::IS_PED_INJURED(Local_395[7 /*10*/]))
								{
									if (func_5(&Local_395, sLocal_372, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 8, func_64(), "PAP3ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[8 /*10*/]) && !PED::IS_PED_INJURED(Local_395[8 /*10*/]))
								{
									if (func_5(&Local_395, sLocal_372, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else if (func_19() == 2)
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 5);
						iVar2 = get_random_int_in_range(false, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, sLocal_372, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, sLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, sLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 5);
						iVar2 = get_random_int_in_range(false, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, sLocal_372, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, sLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, sLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_66())
			{
				func_185();
				func_269();
			}
			if (iVar1 == 0)
			{
				func_269();
			}
			break;
	}
}

void func_100(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (!iLocal_672)
	{
		iVar0 = 0;
		while (iVar0 < Local_204)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				clear_ped_tasks(Local_204[iVar0 /*18*/]);
				Local_204[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_672 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (does_blip_exist(Local_204[iVar0 /*18*/].f_1))
		{
			remove_blip(&(Local_204[iVar0 /*18*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
				if (!PED::IS_PED_INJURED(iLocal_86))
				{
					if (is_ped_in_any_vehicle(Local_204[iVar0 /*18*/], 0))
					{
						task_leave_any_vehicle(Local_204[iVar0 /*18*/], false, 0);
					}
					else
					{
						func_46(iLocal_86, iVar0);
					}
				}
				else if (get_script_task_status(Local_204[iVar0 /*18*/], -1146898486) != 1)
				{
					task_wander_standard(Local_204[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((is_entity_occluded(Local_204[iVar0 /*18*/]) && vdist2(get_entity_coords(Local_204[iVar0 /*18*/], 1), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) > 400f) && vdist2(get_entity_coords(Local_204[iVar0 /*18*/], 1), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) > 400f)
			{
				delete_ped(&(Local_204[iVar0 /*18*/]));
				if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2))
				{
					delete_object(&(Local_204[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]))
		{
			if ((is_entity_occluded(Local_131[iVar0 /*18*/]) && vdist2(get_entity_coords(Local_131[iVar0 /*18*/], 1), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) > 2500f) && func_52(Local_131[iVar0 /*18*/], 0, 0, 0, 0, 0))
			{
				set_vehicle_as_no_longer_needed(&(Local_131[iVar0 /*18*/]));
			}
		}
		if (does_blip_exist(Local_131[iVar0 /*18*/].f_1))
		{
			remove_blip(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
	{
		if (is_entity_occluded(iLocal_86) && vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vLocal_63) > 2500f)
		{
			set_ped_as_no_longer_needed(&iLocal_86);
			func_269();
		}
	}
	if (func_66() || func_67(iLocal_86, 1, 1))
	{
		func_173(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_369)
	{
		case 0:
			if (does_blip_exist(iLocal_360))
			{
				remove_blip(&iLocal_360);
			}
			if (does_blip_exist(iLocal_361))
			{
				remove_blip(&iLocal_361);
			}
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				clear_ped_tasks(iLocal_86);
				set_ped_max_move_blend_ratio(iLocal_86, 3f);
			}
			func_101();
			if (vdist(vLocal_60, vLocal_63) < 30f)
			{
				if (func_5(&Local_395, sLocal_372, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_204)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
						{
							if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
							{
								clear_ped_tasks(Local_204[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_369++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_204)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
					{
						if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
						{
							clear_ped_tasks(Local_204[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_369++;
			}
			break;
		
		case 1:
			if (((is_vehicle_driveable(iLocal_91, 0) && is_ped_in_vehicle(iLocal_86, iLocal_91, 0)) && !iLocal_368) && is_vehicle_seat_free(iLocal_91, -1))
			{
				if (vdist(vLocal_63, vLocal_53) < 100f)
				{
					open_sequence_task(&iVar2);
					task_shuffle_to_next_vehicle_seat(false, iLocal_91);
					task_vehicle_drive_to_coord(false, iLocal_91, vLocal_53, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					task_vehicle_park(false, iLocal_91, vLocal_53, 288.7089f, 1, 50f, 0);
					task_vehicle_mission_coors_target(false, iLocal_91, get_entity_coords(iLocal_91, 1), 5, 10f, 262144, 2f, 2f, 1);
					task_leave_vehicle(false, iLocal_91, 0);
					task_follow_nav_mesh_to_coord(false, vLocal_56, 1f, -1, 0.25f, 512, fLocal_59);
					task_start_scenario_in_place(false, "WORLD_HUMAN_SMOKING", 0, 1);
					close_sequence_task(iVar2);
					task_perform_sequence(iLocal_86, iVar2);
					clear_sequence_task(&iVar2);
				}
				else
				{
					open_sequence_task(&iVar3);
					task_shuffle_to_next_vehicle_seat(false, iLocal_91);
					task_vehicle_drive_wander(false, iLocal_91, 15f, 786468);
					close_sequence_task(iVar3);
					task_perform_sequence(iLocal_86, iVar3);
					clear_sequence_task(&iVar3);
				}
				iLocal_369 = 1000;
			}
			else
			{
				if (is_ped_in_any_vehicle(iLocal_86, 0))
				{
					task_leave_any_vehicle(iLocal_86, false, 0);
				}
				iLocal_369++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				task_smart_flee_ped(iLocal_86, PLAYER::PLAYER_PED_ID(), 3000f, -1, 1, 0);
				iLocal_369 = 1000;
			}
			else
			{
				if (vdist(vLocal_63, vLocal_53) < 100f)
				{
					open_sequence_task(&iVar4);
					task_follow_nav_mesh_to_coord(false, vLocal_56, 1f, -1, 0.25f, 512, fLocal_59);
					task_start_scenario_in_place(false, "WORLD_HUMAN_SMOKING", 0, 1);
					close_sequence_task(iVar4);
					task_perform_sequence(iLocal_86, iVar4);
					clear_sequence_task(&iVar4);
				}
				else
				{
					task_wander_standard(iLocal_86, 1193033728, 0);
				}
				iLocal_369 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_269();
			}
			break;
	}
}

void func_101()
{
	Global_14578 = 0;
	func_102();
}

void func_102()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_103()
{
	func_101();
	if (!PED::IS_PED_INJURED(iLocal_86) && vdist2(vLocal_60, vLocal_63) < 900f)
	{
		clear_ped_tasks(iLocal_86);
		if (func_5(&Local_395, sLocal_372, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_185();
			func_173(10);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_86, -2065892691);
	}
	else
	{
		func_185();
		func_173(10);
	}
}

void func_104()
{
	int iVar0;
	
	switch (iLocal_369)
	{
		case 0:
			func_133();
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				if (!does_blip_exist(iLocal_360))
				{
					iLocal_360 = func_175(iLocal_86, 0, 145);
				}
				if (does_blip_exist(iLocal_363))
				{
					remove_blip(&iLocal_363);
				}
				if (does_blip_exist(iLocal_362))
				{
					remove_blip(&iLocal_362);
				}
				clear_ped_tasks(iLocal_86);
				open_sequence_task(&iVar0);
				task_leave_vehicle(false, iLocal_91, 0);
				task_follow_nav_mesh_to_coord(false, vLocal_56, 1f, 30000, 0.25f, 512, fLocal_59);
				task_start_scenario_in_place(false, "WORLD_HUMAN_SMOKING", 0, 1);
				close_sequence_task(iVar0);
				task_perform_sequence(iLocal_86, iVar0);
				clear_sequence_task(&iVar0);
				if (is_ped_in_group(iLocal_86))
				{
					remove_ped_from_group(iLocal_86);
				}
				func_101();
				iLocal_369++;
			}
			break;
		
		case 1:
			if (!func_72() && !PED::IS_PED_INJURED(iLocal_86))
			{
				if (is_entity_at_coord(iLocal_86, vLocal_56, 3f, 3f, 3f, false, true, 0) && is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_56, 5f, 5f, 5f, false, true, 0))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				func_132(0);
				if (func_5(&Local_395, sLocal_372, "REPAP_THK", 4, 0, 0, 0))
				{
					func_106(func_19(), 1, 150, 0, 1);
					iLocal_369++;
				}
			}
			break;
		
		case 3:
			if (!func_72() && !PED::IS_PED_INJURED(iLocal_86))
			{
				settimera(false);
				iLocal_369++;
			}
			break;
		
		case 4:
			if (timera() > 2000)
			{
				if (func_105())
				{
					func_74();
				}
			}
			break;
	}
}

bool func_105()
{
	return true;
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_107(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (iParam3)
	{
		iVar0 = false;
		if (iParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		stat_get_int(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		stat_set_int(iVar1, iVar0, 1);
	}
}

bool func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_131();
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
					func_130(99, 1);
					func_129(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_129(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_129(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_115(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_114(5))
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
							func_129(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_129(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_129(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_114(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_129(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_129(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_129(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_129(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_129(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_129(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_129(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_129(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_129(joaat("sp2_money_spent_property"), iParam3);
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
									func_129(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_129(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_129(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_129(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_129(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_129(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_114(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_129(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_129(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_129(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_129(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_129(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_129(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_113(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_130(95, iParam3);
					break;
				
				case 1:
					func_130(97, iParam3);
					break;
				
				case 2:
					func_130(96, iParam3);
					break;
			}
			func_130(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_110(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_110(iVar1);
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
					func_129(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_129(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_129(joaat("sp2_total_cash_earned"), iParam3);
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
	func_109(iParam0);
	if (Global_35711 == 15)
	{
		func_108(0);
	}
	return true;
}

void func_108(int iParam0)
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

void func_109(int iParam0)
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

void func_110(int iParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (is_bit_set(Global_101154.f_25089.f_471, iParam0))
		{
			iVar0 = true;
			clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (is_bit_set(Global_101154.f_25089.f_471, iParam0) || is_bit_set(Global_2097152[func_112() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		clear_bit(&(Global_2097152[func_112() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_111(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_111(int iParam0)
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

int func_112()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_113(int iParam0)
{
	func_130(93, iParam0);
	func_130(29, iParam0);
	func_130(30, iParam0);
}

int func_114(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return is_bit_set(Global_101154.f_25089.f_471, iParam0);
	}
	return is_bit_set(Global_2097152[func_112() /*10375*/].f_7704.f_10, iParam0);
}

bool func_115(int iParam0)
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
		func_83(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_116(27, 1);
	return true;
}

int func_116(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_117(iParam0, iParam1);
}

bool func_117(int iParam0, int iParam1)
{
	if (func_12(14) && !func_128(iParam0))
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
	if (func_127(&Global_2563627))
	{
		if (func_125(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_118(&Global_2563627, iParam0))
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

bool func_118(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_12(14) && !func_128(iParam1))
	{
		return false;
	}
	if (func_125(uParam0, iParam1))
	{
		return false;
	}
	if (func_124(uParam0) < 0f)
	{
		func_123(uParam0, 0);
	}
	func_121(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_119(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_119(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_12(14) && !func_128(iParam1))
	{
		return false;
	}
	if (func_125(uParam0, iParam1))
	{
		return false;
	}
	if (func_124(uParam0) < 0f)
	{
		func_123(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_120(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_120(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_121(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_122(uParam0, iVar0);
		iVar0++;
	}
	func_123(uParam0, Global_2563626 - 0.5f);
}

void func_122(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_123(auto uParam0, float fParam1)
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

auto func_124(auto uParam0)
{
	return *uParam0.f_72;
}

int func_125(auto uParam0, int iParam1)
{
	return func_126(uParam0, iParam1) != -1;
}

int func_126(auto uParam0, int iParam1)
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

int func_127(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_128(int iParam0)
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

void func_129(int iParam0, int iParam1)
{
	int iVar0;
	
	stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stat_set_int(iParam0, iVar0, 1);
}

void func_130(int iParam0, int iParam1)
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
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

void func_131()
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

void func_132(int iParam0)
{
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		if (iLocal_621 > 1)
		{
			if (!is_ped_facing_ped(iLocal_86, PLAYER::PLAYER_PED_ID(), 60f))
			{
				iLocal_621 = 0;
				iLocal_622 = 0;
			}
		}
		switch (iLocal_621)
		{
			case 0:
				clear_ped_tasks(iLocal_86);
				task_look_at_entity(iLocal_86, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				open_sequence_task(&iLocal_620);
				task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				close_sequence_task(iLocal_620);
				task_perform_sequence(iLocal_86, iLocal_620);
				clear_sequence_task(&iLocal_620);
				iLocal_621++;
				break;
			
			case 1:
				if (get_script_task_status(iLocal_86, 242628503) != 1)
				{
					iLocal_621++;
				}
				break;
			
			case 2:
				if (iParam0)
				{
					switch (iLocal_622)
					{
						case 0:
							if (!is_entity_playing_anim(iLocal_86, "random@paparazzi@wait", "wait_a", 3))
							{
								task_play_anim(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (get_entity_anim_current_time(iLocal_86, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								task_play_anim(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 1:
							if (!is_entity_playing_anim(iLocal_86, "random@paparazzi@wait", "wait_b", 3))
							{
								task_play_anim(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (get_entity_anim_current_time(iLocal_86, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								task_play_anim(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 2:
							if (!is_entity_playing_anim(iLocal_86, "random@paparazzi@wait", "wait_c", 3))
							{
								task_play_anim(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (get_entity_anim_current_time(iLocal_86, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								task_play_anim(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_133()
{
	if (does_blip_exist(iLocal_364))
	{
		remove_blip(&iLocal_364);
	}
}

void func_134()
{
	int iVar0;
	
	if (is_vehicle_driveable(iLocal_91, 0))
	{
		switch (iLocal_369)
		{
			case 0:
				if (!PED::IS_PED_INJURED(iLocal_86) && is_vehicle_driveable(iLocal_91, 0))
				{
					func_133();
					func_138(1, 1, 0, 0);
					if (does_blip_exist(iLocal_362))
					{
						remove_blip(&iLocal_362);
					}
					if (does_blip_exist(iLocal_360))
					{
						remove_blip(&iLocal_360);
					}
					if (does_blip_exist(iLocal_361))
					{
						remove_blip(&iLocal_361);
					}
					if (is_ped_in_group(iLocal_86))
					{
						remove_ped_from_group(iLocal_86);
					}
					func_136();
					if (!PED::IS_PED_INJURED(iLocal_86))
					{
						task_look_at_coord(iLocal_86, get_offset_from_entity_in_world_coords(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
					}
					task_look_at_coord(PLAYER::PLAYER_PED_ID(), get_offset_from_entity_in_world_coords(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					set_player_control(player_id(), false, 1280);
					if ((iLocal_368 || Global_3) || iLocal_70)
					{
						while (!func_135(&Local_395, sLocal_372, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							wait(false);
						}
					}
					else
					{
						while (!func_5(&Local_395, sLocal_372, "REPAP_THK", 4, 0, 0, 0))
						{
							wait(false);
						}
					}
					func_106(func_19(), 1, 750, 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_86))
					{
						task_look_at_coord(iLocal_86, get_offset_from_entity_in_world_coords(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
						_0x2208438012482A1A(iLocal_86, 0, 0);
					}
					task_look_at_coord(PLAYER::PLAYER_PED_ID(), get_offset_from_entity_in_world_coords(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_369++;
				}
				break;
			
			case 1:
				if (!func_72() && !PED::IS_PED_INJURED(iLocal_86))
				{
					open_sequence_task(&iVar0);
					task_leave_vehicle(false, iLocal_91, 0);
					task_follow_nav_mesh_to_coord(false, vLocal_56, 1f, 30000, 0.25f, 512, fLocal_59);
					task_start_scenario_in_place(false, "WORLD_HUMAN_SMOKING", 0, 1);
					close_sequence_task(iVar0);
					task_perform_sequence(iLocal_86, iVar0);
					clear_sequence_task(&iVar0);
					iLocal_369++;
					settimera(false);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_86) && is_vehicle_driveable(iLocal_91, 0))
				{
					if (!is_ped_in_vehicle(iLocal_86, iLocal_91, 0))
					{
						settimera(false);
						if (iLocal_368)
						{
							set_player_control(player_id(), true, 0);
							func_138(0, 1, 0, 0);
							iLocal_369 = 5;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
				break;
			
			case 3:
				if ((!PED::IS_PED_INJURED(iLocal_86) && is_vehicle_driveable(iLocal_91, 0)) && timera() > 1000)
				{
					task_leave_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91, 0);
					task_look_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_91, 10000, 0, 3);
					iLocal_369++;
				}
				break;
			
			case 4:
				if (is_vehicle_driveable(iLocal_91, 0) && !is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
				{
					set_player_control(player_id(), true, 0);
					func_138(0, 1, 0, 0);
					set_vehicle_doors_locked(iLocal_91, 2);
					settimera(false);
					iLocal_369++;
				}
				break;
			
			case 5:
				if (timera() > 1000)
				{
					if (func_105())
					{
						if (!iLocal_368)
						{
							if (!func_93(19))
							{
								func_89("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_88(19);
							}
						}
						func_74();
					}
				}
				break;
			}
	}
}

int func_135(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_136()
{
	Global_14578 = 0;
	func_137();
}

void func_137()
{
	if (is_scripted_conversation_ongoing())
	{
		restart_scripted_conversation();
		Global_16723 = 0;
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_145(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_9())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_144(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_145(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_144(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_142(player_id())) && !func_140(player_id(), 0)) && !func_139())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_142(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_139()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_141(-1, 0) == 8;
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

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_85();
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

bool func_142(int iParam0)
{
	if (func_140(iParam0, 0))
	{
		return true;
	}
	if (func_143())
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

int func_143()
{
	return is_bit_set(Global_2359301, 3);
}

int func_144(int iParam0, int iParam1, auto uParam2, int iParam3)
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

void func_145(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 13);
	}
	else
	{
		clear_bit(&Global_2283, 13);
	}
}

void func_146()
{
	if (Global_3 || iLocal_70)
	{
		set_vehicle_density_multiplier_this_frame(0.7f);
	}
	if (iLocal_368 && !PED::IS_PED_INJURED(iLocal_86))
	{
		if (!func_166(iLocal_86))
		{
			if (!does_blip_exist(iLocal_360))
			{
				iLocal_360 = func_175(iLocal_86, 0, 145);
			}
		}
		else
		{
			if (func_65())
			{
				if (!does_blip_exist(iLocal_362))
				{
					iLocal_362 = func_50(vLocal_53, 1);
				}
				if (does_blip_exist(iLocal_363))
				{
					remove_blip(&iLocal_363);
				}
			}
			else
			{
				if (!does_blip_exist(iLocal_363))
				{
					iLocal_363 = func_50(vLocal_56, 1);
				}
				if (does_blip_exist(iLocal_362))
				{
					remove_blip(&iLocal_362);
				}
			}
			if (does_blip_exist(iLocal_360))
			{
				remove_blip(&iLocal_360);
			}
		}
		if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
		{
			if ((is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0)) && func_165(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iLocal_91 = false;
				iLocal_91 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				set_entity_as_mission_entity(iLocal_91, true, 1);
				set_vehicle_doors_locked(iLocal_91, 1);
				set_vehicle_automatically_attaches(iLocal_91, false, 0);
			}
		}
		if (does_blip_exist(iLocal_363) && !is_ped_in_any_vehicle(iLocal_86, 0))
		{
			if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), vLocal_56, 15f, 15f, 15f, false, true, 0) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, true, true, 0))
			{
				func_173(4);
			}
		}
		else if (iLocal_369 != 100)
		{
			if (func_65() && func_164(1, 1, 1))
			{
				if (is_entity_in_angled_area(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					settimera(false);
					iLocal_369 = 100;
				}
			}
			else if (!is_ped_in_vehicle(iLocal_86, iLocal_91, 0))
			{
				if (get_script_task_status(iLocal_86, -1794415470) != 1)
				{
					task_enter_vehicle(iLocal_86, iLocal_91, -1, func_163(iLocal_91), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_369 != 100)
		{
			if (func_65() && func_164(1, 1, 1))
			{
				if (is_entity_in_angled_area(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || is_entity_at_coord(PLAYER::PLAYER_PED_ID(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					settimera(false);
					iLocal_369 = 100;
				}
			}
		}
		func_160(1);
	}
	switch (iLocal_369)
	{
		case 0:
			if (func_65())
			{
				if (is_entity_playing_anim(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || is_entity_playing_anim(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					clear_ped_tasks(iLocal_86);
				}
				if (func_5(&Local_395, sLocal_372, "REPAP_HM", 4, 0, 0, 0))
				{
					set_wanted_level_multiplier(0.5f);
					iLocal_369++;
				}
				if (!func_159())
				{
					func_154();
				}
			}
			break;
		
		case 1:
			if (!func_73())
			{
				if (func_65())
				{
					if (!func_72())
					{
						if (func_19() == 0)
						{
							if (func_5(&Local_395, sLocal_372, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_19() == 1)
						{
							if (func_5(&Local_395, sLocal_372, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_5(&Local_395, sLocal_372, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_73())
			{
				if (func_65())
				{
					if (func_5(&Local_395, sLocal_372, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						settimera(false);
						if (Global_3 || iLocal_70)
						{
							iLocal_369 = 99;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (timera() > 7000)
			{
				if (func_150("REPAP_HOME1", (func_153() && !func_73())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_150("REPAP_HOME1M", (func_153() && !func_73())))
				{
					iLocal_369++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_150("REPAP_HOME1F", (func_153() && !func_73())))
				{
					iLocal_369++;
				}
			}
			else if (func_150("REPAP_HOME1T", (func_153() && !func_73())))
			{
				iLocal_369++;
			}
			break;
		
		case 5:
			if (func_150("REPAP_HOME1L", (func_153() && !func_73())))
			{
				settimera(false);
				iLocal_369++;
			}
			break;
		
		case 6:
			if (!func_73())
			{
				if (timera() > 7000)
				{
					if (func_153())
					{
						if (func_5(&Local_395, sLocal_372, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_73())
			{
				if (func_153() && !func_72())
				{
					if (func_149("REPAP_HOME2"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 8:
			if (func_150("REPAP_HOME2L", (func_153() && !func_73())))
			{
				iLocal_369++;
			}
			break;
		
		case 9:
			if (!func_73())
			{
				if (func_153() && !func_72())
				{
					if (func_149("REPAP_RESP2"))
					{
						settimera(false);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 10:
			if (timera() > 7000)
			{
				if (func_150("REPAP_HOME3", (func_153() && !func_73())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 11:
			if (!func_73())
			{
				if (func_153() && !func_72())
				{
					if (func_149("REPAP_HOME3"))
					{
						settimera(false);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 12:
			if (timera() > 7000)
			{
				if (func_150("REPAP_HOME4", (func_153() && !func_73())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 13:
			if (!func_73())
			{
				if (func_153() && !func_72())
				{
					if (func_149("REPAP_HOME4"))
					{
						settimera(false);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 14:
			if (timera() > 7000)
			{
				if (func_150("REPAP_NOBAN", (func_153() && !func_73())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 15:
			if (!func_73())
			{
				if (func_153() && !func_72())
				{
					if (func_149("REPAP_NOBAN"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_73())
			{
				if (func_153() && !func_72())
				{
					if (func_5(&Local_395, sLocal_372, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 17:
			func_73();
			break;
		
		case 100:
			if (func_148(iLocal_91, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_174("");
				func_173(3);
			}
			break;
	}
	if (get_player_wanted_level(player_id()) > 0)
	{
		func_70();
	}
	if (func_19() == 2)
	{
		if ((func_147() && !func_159()) && iLocal_47 != 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				if (is_entity_at_coord(iLocal_86, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, false, true, 0))
				{
					if (!is_ped_group_member(iLocal_86, get_player_group(player_id())))
					{
						set_ped_as_group_member(iLocal_86, get_player_group(player_id()));
					}
					func_101();
					iLocal_47 = 8;
				}
			}
		}
	}
}

auto func_147()
{
	return Global_25354;
}

bool func_148(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	disable_control_action(0, 71, 1);
	disable_control_action(0, 72, 1);
	disable_control_action(0, 76, 1);
	disable_control_action(0, 73, 1);
	disable_control_action(0, 59, 1);
	disable_control_action(0, 60, 1);
	if (iParam5)
	{
		disable_control_action(0, 75, 1);
	}
	disable_control_action(0, 80, 1);
	if (!iParam6)
	{
		disable_control_action(0, 69, 1);
		disable_control_action(0, 70, 1);
		disable_control_action(0, 68, 1);
	}
	disable_control_action(0, 74, 1);
	disable_control_action(0, 86, 1);
	disable_control_action(0, 81, 1);
	disable_control_action(0, 82, 1);
	disable_control_action(0, 138, 1);
	disable_control_action(0, 136, 1);
	disable_control_action(0, 114, 1);
	disable_control_action(0, 107, 1);
	disable_control_action(0, 110, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 87, 1);
	disable_control_action(0, 88, 1);
	disable_control_action(0, 113, 1);
	disable_control_action(0, 115, 1);
	disable_control_action(0, 116, 1);
	disable_control_action(0, 117, 1);
	disable_control_action(0, 118, 1);
	disable_control_action(0, 119, 1);
	disable_control_action(0, 131, 1);
	disable_control_action(0, 132, 1);
	disable_control_action(0, 123, 1);
	disable_control_action(0, 126, 1);
	disable_control_action(0, 129, 1);
	disable_control_action(0, 130, 1);
	disable_control_action(0, 133, 1);
	disable_control_action(0, 134, 1);
	_0x17FCA7199A530203();
	if (GAMEPLAY::GET_GAME_TIMER() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!is_entity_dead(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_149(char* sParam0)
{
	struct<6> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_19() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_19() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (func_5(&Local_395, sLocal_372, &Var0, 4, 0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_150(char* sParam0, int iParam1)
{
	if (iParam1)
	{
		if (!iLocal_72)
		{
			if (func_5(&Local_395, sLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_72 = 1;
				iLocal_73 = 0;
			}
		}
		else if (iLocal_73)
		{
			if (func_152(&Local_395, sLocal_372, sParam0, &Local_75, 4, 0, 0))
			{
				iLocal_73 = 0;
			}
		}
		if ((iLocal_72 && !iLocal_73) && iParam1)
		{
			if (iLocal_81 == -1)
			{
				if (!func_72())
				{
					iLocal_81 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
			else if (GAMEPLAY::GET_GAME_TIMER() - iLocal_81 > 500)
			{
				iLocal_81 = -1;
				iLocal_72 = 0;
				iLocal_73 = 0;
				return true;
			}
		}
	}
	else if (iLocal_72 && !iLocal_73)
	{
		Local_75 = {func_151()};
		func_136();
		iLocal_73 = 1;
	}
	return false;
}

struct<6> func_151()
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

int func_152(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_6(sParam2, iParam4, 0);
}

int func_153()
{
	if (iLocal_368)
	{
		if (is_vehicle_driveable(iLocal_91, 0))
		{
			if (func_65())
			{
				return 1;
			}
		}
		if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !is_ped_in_any_vehicle(iLocal_86, 0))
		{
			if (vdist2(vLocal_60, vLocal_63) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_65();
	}
	return 0;
}

void func_154()
{
	if (func_19() == 2)
	{
		if (!does_blip_exist(iLocal_364))
		{
			func_157();
			iLocal_364 = func_156(-1034.6f, 4918.6f, 205.9f, 0);
			set_blip_sprite(iLocal_364, 269);
			func_155();
		}
	}
}

void func_155()
{
	if (!func_159())
	{
		if (func_19() == 2)
		{
			Global_25354 = 1;
		}
	}
}

int func_156(Vector3 vParam0, int iParam1)
{
	return func_50(vParam0, iParam3);
}

void func_157()
{
	if (func_19() == 2)
	{
		if (!Global_25356)
		{
			func_158("CULT_BLIP_HELP", -1);
			Global_25356 = 1;
		}
	}
}

void func_158(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_159()
{
	if (Global_101154.f_29520.f_5 == 1000)
	{
		return true;
	}
	return false;
}

void func_160(int iParam0)
{
	if (is_vehicle_driveable(iLocal_91, 0) && !PED::IS_PED_INJURED(iLocal_86))
	{
		if (func_65())
		{
			if (iParam0)
			{
				if (!does_blip_exist(iLocal_362))
				{
					iLocal_362 = func_50(vLocal_53, 1);
				}
			}
			if (does_blip_exist(iLocal_360))
			{
				remove_blip(&iLocal_360);
			}
			if (does_blip_exist(iLocal_361))
			{
				remove_blip(&iLocal_361);
			}
		}
		else
		{
			if (does_blip_exist(iLocal_362))
			{
				remove_blip(&iLocal_362);
			}
			if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
			{
				if (!does_blip_exist(iLocal_361))
				{
					iLocal_361 = func_161(iLocal_91, 0, 0);
				}
			}
			if (!is_ped_in_vehicle(iLocal_86, iLocal_91, 0))
			{
				if (!does_blip_exist(iLocal_360))
				{
					iLocal_360 = func_175(iLocal_86, 0, 145);
				}
			}
			else if (does_blip_exist(iLocal_360))
			{
				remove_blip(&iLocal_360);
			}
		}
	}
}

int func_161(int iParam0, int iParam1, int iParam2)
{
	return func_162(iParam0, !iParam1, iParam2);
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!iParam2)
		{
			set_blip_as_friendly(iVar0, iParam1);
		}
		else
		{
			set_blip_colour(iVar0, 2);
		}
	}
	else if (is_entity_a_ped(iParam0))
	{
		set_blip_scale(iVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= get_vehicle_max_number_of_passengers(iParam0) - 1)
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (is_vehicle_seat_free(iParam0, iVar2))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_164(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_minigame_in_progress())
	{
		return false;
	}
	if (iParam0)
	{
		if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			return false;
		}
	}
	iVar0 = false;
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		if (iParam0)
		{
			if (is_entity_dead(iVar0, 0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!is_entity_dead(iVar0, 0))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1) != PLAYER::PLAYER_PED_ID())
				{
					return false;
				}
			}
		}
		if (!is_entity_dead(iVar0, 0))
		{
			if (get_entity_upright_value(iVar0) < 0.95f || get_entity_upright_value(iVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (iParam1)
	{
		return false;
	}
	if (!is_player_ready_for_cutscene(player_id()))
	{
		return false;
	}
	if (!can_player_start_mission(player_id()))
	{
		return false;
	}
	return true;
}

bool func_165(int iParam0)
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

bool func_166(int iParam0)
{
	if (is_ped_group_member(iParam0, get_player_group(player_id())))
	{
		if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			remove_ped_from_group(iParam0);
		}
		return true;
	}
	else if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, Global_19, 0, 1, 0))
	{
		set_ped_as_group_member(iParam0, get_player_group(player_id()));
	}
	return false;
}

void func_167()
{
	if (!PED::IS_PED_INJURED(iLocal_86) && is_vehicle_driveable(iLocal_91, 0))
	{
		if (!is_ped_in_vehicle(iLocal_86, iLocal_91, 1))
		{
			if (get_script_task_status(iLocal_86, -1794415470) != 1)
			{
				task_enter_vehicle(iLocal_86, iLocal_91, -1, func_163(iLocal_91), 2f, 8388608, 0);
			}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(func_64()) && vdist2(get_entity_coords(iLocal_86, 1), get_entity_coords(func_64(), 1)) < 100f) && (get_entity_speed(iLocal_91) < 5f || !is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iLocal_91))))
		{
			if (iLocal_368)
			{
				if (!is_entity_playing_anim(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && is_ped_sitting_in_vehicle(iLocal_86, iLocal_91))
				{
					task_play_anim(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!is_entity_playing_anim(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && is_ped_sitting_in_vehicle(iLocal_86, iLocal_91))
			{
				task_play_anim(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((is_entity_playing_anim(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || is_entity_playing_anim(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && is_ped_sitting_in_vehicle(iLocal_86, iLocal_91))
		{
			clear_ped_tasks(iLocal_86);
		}
		switch (iLocal_369)
		{
			case 0:
				if (timera() > 2000)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_64()) && !PED::IS_PED_INJURED(func_64()))
					{
						func_18(&Local_395, 4);
						func_17(&Local_395, 4, func_64(), "PAPARAZZO", 0, 1);
					}
					iLocal_49 = 2;
					func_101();
					if (func_5(&Local_395, sLocal_372, "REPAP_GO", 4, 0, 0, 0))
					{
						set_wanted_level_multiplier(0.2f);
						set_blocking_of_non_temporary_events(iLocal_86, true);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_69, 1862763509);
						iLocal_358 = create_object(joaat("prop_ld_test_01"), vLocal_87, 1, true, false);
						set_entity_collision(iLocal_358, false, 0);
						set_entity_visible(iLocal_358, false, 0);
						freeze_entity_position(iLocal_358, true);
						iLocal_369++;
					}
				}
				break;
			
			case 1:
				func_169();
				if (!is_entity_in_angled_area(iLocal_86, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, true, 0))
				{
					iLocal_369++;
					iLocal_370 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_49 = 3;
				}
				break;
			
			case 2:
				if (!iLocal_668)
				{
					if (((((iLocal_670 != 1 && iLocal_670 != 3) && iLocal_670 != 6) && iLocal_670 != 9) && iLocal_670 != 11) && iLocal_670 != 13)
					{
						iLocal_669 = false;
						if (ENTITY::DOES_ENTITY_EXIST(func_64()) && is_entity_at_entity(func_64(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							iLocal_668 = true;
						}
					}
				}
				else
				{
					if (!func_72())
					{
						iLocal_669 = true;
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_64()))
					{
						if (!is_entity_at_entity(func_64(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							iLocal_668 = false;
						}
					}
				}
				if (iLocal_669)
				{
					if (!func_73())
					{
						if (!func_168())
						{
							func_169();
						}
					}
				}
				else
				{
					switch (iLocal_670)
					{
						case 0:
							if (((!iLocal_668 && func_153()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_395, sLocal_372, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						
						case 1:
							if (((!iLocal_668 && func_153()) && !func_73()) && !func_72())
							{
								if (func_149("REPAP_RES1"))
								{
									iLocal_671 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 2:
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_671 > 8000)
							{
								if (((!iLocal_668 && func_153()) && !func_73()) && !func_72())
								{
									if (func_149("REPAP_CHT2"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 3:
							if (((!iLocal_668 && func_153()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_395, sLocal_372, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_671 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 4:
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_671 > 6000)
							{
								if (func_19() == 0)
								{
									if (func_150("REPAP_CHT3M", ((func_153() && !func_73()) && !iLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_150("REPAP_CHT3F", ((func_153() && !func_73()) && !iLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_150("REPAP_CHT3T", ((func_153() && !func_73()) && !iLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 4)
								{
									iLocal_671 = GAMEPLAY::GET_GAME_TIMER();
								}
							}
							break;
						
						case 5:
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_671 > 8000)
							{
								if (func_19() == 0)
								{
									if (func_150("REPAP_CHT4M", ((func_153() && !func_73()) && !iLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_150("REPAP_CHT4F", ((func_153() && !func_73()) && !iLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_150("REPAP_CHT4T", ((func_153() && !func_73()) && !iLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 5)
								{
									iLocal_671 = GAMEPLAY::GET_GAME_TIMER();
								}
							}
							break;
						
						case 6:
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_671 > 8000)
							{
								if (func_19() == 0)
								{
									if (func_150("REPAP_CHT5M", ((func_153() && !func_73()) && !iLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_150("REPAP_CHT5F", ((func_153() && !func_73()) && !iLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_150("REPAP_CHT5T", ((func_153() && !func_73()) && !iLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 6)
								{
									iLocal_671 = GAMEPLAY::GET_GAME_TIMER();
								}
							}
							break;
						
						case 7:
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_671 > 8000)
							{
								if (((!iLocal_668 && func_153()) && !func_73()) && !func_72())
								{
									if (func_149("REPAP_CHT6"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 8:
							if (((!iLocal_668 && func_153()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_395, sLocal_372, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_671 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 9:
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_671 > 8000)
							{
								if (((!iLocal_668 && func_153()) && !func_73()) && !func_72())
								{
									if (func_149("REPAP_CHT7"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 10:
							if (((!iLocal_668 && func_153()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_395, sLocal_372, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_671 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 11:
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_671 > 8000)
							{
								if (((!iLocal_668 && func_153()) && !func_73()) && !func_72())
								{
									if (func_149("REPAP_CHT8"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 12:
							if (((!iLocal_668 && func_153()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_395, sLocal_372, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(func_64()))
				{
					settimera(false);
					iLocal_369++;
					func_136();
					if (!Global_3 && !iLocal_70)
					{
						iLocal_49 = 6;
					}
				}
				if (Global_3 || iLocal_70)
				{
					if (is_entity_at_coord(PLAYER::PLAYER_PED_ID(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, false, true, 0) && func_65())
					{
						iLocal_49 = 4;
						iLocal_85 = GAMEPLAY::GET_GAME_TIMER();
					}
				}
				break;
			
			case 3:
				if (timera() > 3000 && func_65())
				{
					func_174("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_395, sLocal_372, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_173(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_160(0);
	}
}

bool func_168()
{
	int iVar0;
	
	iVar0 = func_24();
	if (GAMEPLAY::GET_GAME_TIMER() - iLocal_666 > 5000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_91) && is_ped_in_vehicle(iLocal_86, iLocal_91, 0))
		{
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91, 1))
			{
				if (iVar0 != -1 && GAMEPLAY::GET_GAME_TIMER() - Local_204[iVar0 /*18*/].f_12 < 3000)
				{
					if (func_5(&Local_395, sLocal_372, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_666 = GAMEPLAY::GET_GAME_TIMER();
						return true;
					}
				}
			}
			else if (func_5(&Local_395, sLocal_372, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_666 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
	}
	return false;
}

void func_169()
{
	int iVar0;
	
	if (GAMEPLAY::GET_GAME_TIMER() - iLocal_564 > iLocal_565)
	{
		if ((!PED::IS_PED_INJURED(iLocal_86) && ENTITY::DOES_ENTITY_EXIST(func_64())) && !PED::IS_PED_INJURED(func_64()))
		{
			if (get_distance_between_coords(vLocal_63, get_entity_coords(func_64(), 1), 1) < 8f)
			{
				iVar0 = get_random_int_in_range(false, 5);
				func_18(&Local_395, 4);
				func_18(&Local_395, 5);
				func_18(&Local_395, 6);
				func_18(&Local_395, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_395, 4, func_64(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[4 /*10*/]) && !PED::IS_PED_INJURED(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, sLocal_372, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_564 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_565 = get_random_int_in_range(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_395, 4, func_64(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[4 /*10*/]) && !PED::IS_PED_INJURED(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, sLocal_372, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_564 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_565 = get_random_int_in_range(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_395, 5, func_64(), "PAP2", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[5 /*10*/]) && !PED::IS_PED_INJURED(Local_395[5 /*10*/]))
						{
							if (func_5(&Local_395, sLocal_372, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_564 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_565 = get_random_int_in_range(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_395, 6, func_64(), "PAP3", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[6 /*10*/]) && !PED::IS_PED_INJURED(Local_395[6 /*10*/]))
						{
							if (func_5(&Local_395, sLocal_372, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_564 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_565 = get_random_int_in_range(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_395, 7, func_64(), "PAP4", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[7 /*10*/]) && !PED::IS_PED_INJURED(Local_395[7 /*10*/]))
						{
							if (func_5(&Local_395, sLocal_372, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_564 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_565 = get_random_int_in_range(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_170()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[24] cVar3;
	char* sVar9;
	char[24] cVar10;
	int iVar16;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		if (does_blip_exist(iLocal_360))
		{
			_0x75A16C3DA34F1245(iLocal_360, iLocal_664);
		}
		switch (iLocal_369)
		{
			case 0:
				request_anim_dict("random@paparazzi@peek");
				request_anim_dict("random@paparazzi@trans");
				request_anim_dict("random@paparazzi@wait");
				if ((has_anim_dict_loaded("random@paparazzi@peek") && has_anim_dict_loaded("random@paparazzi@trans")) && has_anim_dict_loaded("random@paparazzi@wait"))
				{
					iLocal_625 = create_synchronized_scene(vLocal_653, vLocal_656, 2);
					task_synchronized_scene(iLocal_86, iLocal_625, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1000f, 0);
					task_look_at_entity(iLocal_86, PLAYER::PLAYER_PED_ID(), -1, 4, 4);
					sLocal_626[0] = "peek_a";
					sLocal_626[1] = "peek_b";
					sLocal_626[2] = "peek_c";
					set_wanted_level_multiplier(0.2f);
					iLocal_623 = 0;
					iLocal_659 = 0;
					iLocal_664 = false;
					iLocal_74 = 1;
					iLocal_660 = 0;
					iLocal_71 = 0;
					fLocal_661 = 0f;
					iLocal_369++;
				}
				break;
			
			case 1:
				if (is_bit_set(iLocal_660, false))
				{
					if (!is_bit_set(iLocal_660, true))
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_660, true);
					}
					else
					{
						iLocal_660 = false;
					}
				}
				iVar2 = 0;
				iVar0 = is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_639, vLocal_642, fLocal_645, 0, true, 0);
				iVar1 = is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_632, vLocal_635, fLocal_638, 0, true, 0);
				if (are_strings_equal(sLocal_631, "right_"))
				{
					if (iVar1)
					{
						sLocal_631 = "left_";
						iVar2 = 1;
					}
				}
				else if (iVar0)
				{
					sLocal_631 = "right_";
					iVar2 = 1;
				}
				if ((is_synchronized_scene_running(iLocal_625) && get_synchronized_scene_phase(iLocal_625) > 0.9f) || iVar2)
				{
					if (iLocal_660 == 0)
					{
						clear_ped_tasks(iLocal_86);
						iLocal_630++;
						if (iLocal_630 >= 3)
						{
							iLocal_630 = 0;
						}
						StringCopy(&cVar3, sLocal_631, 24);
						StringConCat(&cVar3, sLocal_626[iLocal_630], 24);
						iLocal_625 = create_synchronized_scene(vLocal_653, vLocal_656, 2);
						task_synchronized_scene(iLocal_86, iLocal_625, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1000f, 0);
						GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_660, false);
					}
				}
				if (iVar0 || iVar1)
				{
					if (fLocal_661 <= 20f)
					{
						fLocal_661 += get_frame_time();
					}
					if (GAMEPLAY::GET_GAME_TIMER() - iLocal_624 > 5000 && iLocal_660 == 0)
					{
						if (vdist2(vLocal_60, vLocal_63) < 22.2f * 22.2f)
						{
							if (fLocal_661 < 10f)
							{
								if (iLocal_662)
								{
									sVar9 = "REPAP_SHT1";
								}
								else
								{
									sVar9 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar9 = "REPAP_PRT";
							}
							if (func_19() == 1)
							{
								func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_395, sLocal_372, sVar9, 4, 0, 0, 0))
							{
								iLocal_662 = 1;
								if (!is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_86, 7f, 7f, 7f, 0, 1, 0))
								{
									clear_ped_tasks(iLocal_86);
									StringCopy(&cVar10, sLocal_631, 24);
									StringConCat(&cVar10, "come_here", 24);
									iLocal_625 = create_synchronized_scene(vLocal_653, vLocal_656, 2);
									task_synchronized_scene(iLocal_86, iLocal_625, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1000f, 0);
									GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_660, false);
								}
								iLocal_624 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
					}
				}
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_646, vLocal_649, fLocal_652, 0, true, 0) && iLocal_660 == 0)
				{
					if (does_blip_exist(iLocal_359))
					{
						remove_blip(&iLocal_359);
						if (!does_blip_exist(iLocal_360))
						{
							iLocal_360 = func_175(iLocal_86, 0, 145);
						}
					}
					clear_ped_tasks(iLocal_86);
					iLocal_625 = create_synchronized_scene(vLocal_653, vLocal_656, 2);
					if (iVar1)
					{
						task_synchronized_scene(iLocal_86, iLocal_625, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1000f, 0);
					}
					else
					{
						task_synchronized_scene(iLocal_86, iLocal_625, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1000f, 0);
					}
					GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_660, false);
					iLocal_369++;
				}
				break;
			
			case 2:
				if (is_synchronized_scene_running(iLocal_625) && get_synchronized_scene_phase(iLocal_625) > 0.9f)
				{
					if (get_script_task_status(iLocal_86, 242628503) != 1)
					{
						clear_ped_tasks(iLocal_86);
						task_play_anim(iLocal_86, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_621 = 2;
						settimera(false);
					}
					iLocal_369++;
				}
				break;
			
			case 3:
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_172())
					{
						set_vehicle_as_no_longer_needed(&iLocal_91);
						iLocal_91 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
						set_entity_as_mission_entity(iLocal_91, true, 1);
						set_vehicle_automatically_attaches(iLocal_91, false, 0);
						set_vehicle_doors_locked(iLocal_91, 1);
						iLocal_368 = true;
					}
				}
				if (!iLocal_368)
				{
					set_vehicle_doors_locked(iLocal_91, 1);
					if (func_135(&Local_395, sLocal_372, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						settimera(false);
						iLocal_664 = true;
						iLocal_369 = 100;
					}
				}
				else if (func_135(&Local_395, sLocal_372, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					settimera(false);
					iLocal_664 = true;
					iLocal_369++;
				}
				if (timera() > 2000)
				{
					func_171(vLocal_87, 1);
				}
				break;
			
			case 4:
				func_49();
				if (is_vehicle_driveable(iLocal_91, 0))
				{
					if (is_entity_at_entity(iLocal_91, iLocal_86, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !iLocal_368)
					{
						if (get_script_task_status(iLocal_86, 242628503) != 1 && !iLocal_659)
						{
							open_sequence_task(&iVar16);
							task_follow_nav_mesh_to_coord(false, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
							close_sequence_task(iVar16);
							task_perform_sequence(iLocal_86, iVar16);
							_0x2208438012482A1A(iLocal_86, 0, 0);
							clear_sequence_task(&iVar16);
							iLocal_659 = 1;
						}
						else
						{
							set_ped_max_move_blend_ratio(iLocal_86, 1f);
							func_171(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_171(vLocal_87, 1);
					}
					if (!iLocal_368)
					{
						if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
						{
							if (does_blip_exist(iLocal_361))
							{
								remove_blip(&iLocal_361);
							}
							if (!does_blip_exist(iLocal_360))
							{
								iLocal_360 = func_175(iLocal_86, 0, 145);
							}
						}
					}
					if ((is_entity_at_entity(iLocal_91, iLocal_86, Global_19, 0, 1, 0) && func_165(iLocal_91)) && (timera() > 6000 || !iLocal_368))
					{
						if (!iLocal_623)
						{
							func_101();
							if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
							{
								if (func_19() == 1)
								{
									if (func_5(&Local_395, sLocal_372, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_19() == 0)
								{
									if (func_5(&Local_395, sLocal_372, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_5(&Local_395, sLocal_372, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_19() == 1)
							{
								if (func_5(&Local_395, sLocal_372, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_19() == 0)
							{
								if (func_5(&Local_395, sLocal_372, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_5(&Local_395, sLocal_372, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_623 = 1;
							}
						}
						else
						{
							if (!iLocal_368)
							{
								iLocal_369 = -5;
							}
							else
							{
								iLocal_369++;
							}
							clear_ped_tasks(iLocal_86);
							task_enter_vehicle(iLocal_86, iLocal_91, -1, func_163(iLocal_91), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (iLocal_368)
				{
					func_171(vLocal_87, 1);
				}
				else
				{
					func_171(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (is_vehicle_driveable(iLocal_91, 0))
				{
					if (func_148(iLocal_91, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_369 = 5;
					}
				}
				break;
			
			case 5:
				if (is_vehicle_driveable(iLocal_91, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_86) && is_ped_in_vehicle(iLocal_86, iLocal_91, 0))
					{
						if (does_blip_exist(iLocal_360))
						{
							remove_blip(&iLocal_360);
						}
						task_clear_look_at(PLAYER::PLAYER_PED_ID());
						func_173(1);
					}
					else
					{
						if (!Global_3 && !iLocal_70)
						{
							if ((is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91, 0) && !is_ped_in_vehicle(iLocal_86, iLocal_91, 1)) && !is_entity_in_angled_area(iLocal_91, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, true, 0))
							{
								if (iLocal_368)
								{
									set_ped_flee_attributes(iLocal_86, 2, true);
									sLocal_371 = "REPAP_GUP";
									func_173(6);
								}
								else
								{
									set_player_wanted_level(player_id(), true, 0);
									set_ped_flee_attributes(iLocal_86, 2, true);
									sLocal_371 = "REPAP_CP";
									func_173(6);
								}
							}
						}
						if (!is_ped_in_vehicle(iLocal_86, iLocal_91, 0))
						{
							if (get_script_task_status(iLocal_86, -1794415470) != 1)
							{
								clear_ped_tasks(iLocal_86);
								task_enter_vehicle(iLocal_86, iLocal_91, -1, func_163(iLocal_91), 1f, 8388608, 0);
							}
							else if (vdist(vLocal_63, get_offset_from_entity_in_world_coords(iLocal_91, 1f, 0f, 0f)) < 1f)
							{
								set_ped_max_move_blend_ratio(iLocal_86, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (is_vehicle_driveable(iLocal_91, 0))
				{
					if (!func_72())
					{
						func_101();
						if (func_19() == 1)
						{
							if (func_5(&Local_395, sLocal_372, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_19() == 0)
						{
							func_101();
							if (func_5(&Local_395, sLocal_372, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
							iLocal_74 = 0;
						}
						else if (func_5(&Local_395, sLocal_372, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
				if (iLocal_369 == 101)
				{
					fLocal_665 = 0f;
				}
				func_171(vLocal_87, 1);
				break;
			
			case 101:
				if (vdist2(vLocal_60, vLocal_63) < 49f && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (get_entity_speed(PLAYER::PLAYER_PED_ID()) < 3f)
					{
						fLocal_665 += get_frame_time();
					}
					else
					{
						fLocal_665 -= get_frame_time() * 2f;
					}
					if (fLocal_665 > 10f)
					{
						if (func_5(&Local_395, sLocal_372, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_665 = 0f;
						}
					}
				}
				if (is_vehicle_driveable(iLocal_91, 0))
				{
					if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91, 0) && func_172())
					{
						iLocal_368 = true;
						iLocal_74 = 1;
						iLocal_91 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
						set_entity_as_mission_entity(iLocal_91, true, 1);
					}
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
					{
						if (does_blip_exist(iLocal_361))
						{
							remove_blip(&iLocal_361);
						}
						if (!does_blip_exist(iLocal_360))
						{
							iLocal_360 = func_175(iLocal_86, 0, 145);
						}
					}
					else
					{
						if (does_blip_exist(iLocal_360))
						{
							remove_blip(&iLocal_360);
						}
						if (!does_blip_exist(iLocal_361))
						{
							iLocal_361 = func_161(iLocal_91, 0, 0);
						}
					}
					if (is_ped_sitting_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_91))
					{
						if (does_blip_exist(iLocal_361))
						{
							remove_blip(&iLocal_361);
						}
						if (!does_blip_exist(iLocal_360))
						{
							iLocal_360 = func_175(iLocal_86, 0, 145);
						}
						func_174("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_369 = 4;
					}
					if (!iLocal_74)
					{
						if (vdist2(vLocal_60, vLocal_66) < 9f && func_19() == 0)
						{
							if (func_5(&Local_395, sLocal_372, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_74 = 1;
							}
						}
					}
				}
				func_171(vLocal_87, 1);
				break;
		}
		if (!Global_3 && !iLocal_70)
		{
			if (is_vehicle_driveable(iLocal_91, 0))
			{
				if (vdist(vLocal_60, vLocal_87) > 75f)
				{
					func_173(6);
				}
				if (func_186())
				{
					func_173(5);
				}
			}
		}
		if (!iLocal_368)
		{
			if (!is_vehicle_driveable(iLocal_91, 0))
			{
				if (!Global_3 && !iLocal_70)
				{
					func_173(5);
				}
			}
			else
			{
				if (!iLocal_368)
				{
					if (!Global_3 && !iLocal_70)
					{
						if (get_entity_health(iLocal_91) < iLocal_83)
						{
							if (has_entity_been_damaged_by_entity(iLocal_91, PLAYER::PLAYER_PED_ID(), 1))
							{
								iLocal_84 += iLocal_83 - get_entity_health(iLocal_91);
							}
							clear_entity_last_damage_entity(iLocal_91);
						}
						if (iLocal_84 > 250)
						{
							if (has_entity_clear_los_to_entity_in_front(iLocal_86, iLocal_91) && vdist(vLocal_63, vLocal_66) < 25f)
							{
								func_173(5);
							}
						}
					}
				}
				iLocal_83 = get_entity_health(iLocal_91);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_86))
		{
			if (is_ped_fleeing(iLocal_86))
			{
				if (!Global_3 && !iLocal_70)
				{
					func_173(5);
				}
			}
		}
	}
}

void func_171(Vector3 vParam0, int iParam1)
{
	if (vdist(vLocal_63, vParam0) > 2.5f)
	{
		if (get_script_task_status(iLocal_86, 713668775) != 1)
		{
			task_follow_nav_mesh_to_coord(iLocal_86, vParam0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (get_script_task_status(iLocal_86, 713668775) != 1)
	{
		func_132(iParam3);
		task_look_at_entity(iLocal_86, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
	}
}

int func_172()
{
	return (((((is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_vehicle_driveable(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 0)) && (is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0))) || is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0))))) && get_vehicle_max_number_of_passengers(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)) > 0) && func_165(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0))) && !Global_100201);
}

void func_173(int iParam0)
{
	iLocal_47 = iParam0;
	iLocal_369 = 0;
}

void func_174(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (!are_strings_equal(iLocal_560[iVar0], sParam0))
		{
			if (is_audio_scene_active(iLocal_560[iVar0]))
			{
				stop_audio_scene(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (are_strings_equal(iLocal_560[iVar0], sParam0))
		{
			if (!is_audio_scene_active(iLocal_560[iVar0]))
			{
				start_audio_scene(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_162(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

bool func_176(int iParam0)
{
	if (func_179())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_87(Global_101143))
		{
			func_177(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_87(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

void func_177(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_158(func_178(iParam0), -1);
					Global_101154.f_29520.f_2++;
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_101150, false);
				}
			}
			break;
		
		case 1:
			if (!is_bit_set(Global_101150, true))
			{
				if (!is_help_message_on_screen())
				{
					func_158(func_178(iParam0), -1);
					Global_101154.f_29520.f_3++;
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_101150, true);
				}
			}
			break;
		
		case 2:
			if (!is_bit_set(Global_101150, 2))
			{
				if (!is_help_message_on_screen())
				{
					func_158(func_178(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

char* func_178(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

bool func_179()
{
	switch (func_180(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
	{
		case 1:
			return true;
			break;
		
		case 0:
			return true;
			break;
	}
	return false;
}

int func_180(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!iParam3)
	{
		if (Global_89089.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_184(0))
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		set_player_invincible(get_player_index(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *uParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_182(iParam2))
		{
			return 0;
		}
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
		if (iParam4 != 0)
		{
			func_181(uParam0, iParam4);
		}
	}
	return 2;
}

void func_181(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35672 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35672)
	{
		if (Global_35678[iVar0 /*4*/] == *uParam0)
		{
			Global_35678[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_182(int iParam0)
{
	return func_183(iParam0, Global_35711);
}

bool func_183(int iParam0, int iParam1)
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

bool func_184(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_182(iParam0))
	{
		return false;
	}
	return true;
}

void func_185()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		set_ped_flee_attributes(iLocal_86, 2, false);
		task_smart_flee_ped(iLocal_86, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
		{
			task_smart_flee_ped(Local_204[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_204[iVar0 /*18*/], -2065892691);
			set_blocking_of_non_temporary_events(Local_204[iVar0 /*18*/], false);
		}
		iVar0++;
	}
}

int func_186()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar1 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar1 /*18*/]))
		{
			if (is_entity_visible(Local_204[iVar1 /*18*/]))
			{
				if (((is_bullet_in_area(Local_204[iVar1 /*18*/].f_6, 5f, 1) || is_explosion_in_sphere(-1, Local_204[iVar1 /*18*/].f_6, 10f)) || is_ped_fleeing(Local_204[iVar1 /*18*/])) || (iLocal_386[iVar1] > 10 && iLocal_47 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_349 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_131)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar1 /*18*/]))
		{
			if (is_vehicle_driveable(Local_131[iVar1 /*18*/], 0) && is_entity_visible(Local_131[iVar1 /*18*/]))
			{
				if (is_entity_on_fire(Local_131[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_187()
{
	if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vLocal_43) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_198())
		{
			return false;
		}
	}
	if (func_194())
	{
		return true;
	}
	if (func_188(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_188(float fParam0, int iParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	Vector3 fVar34;
	Vector3 fVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (is_player_playing(player_id()))
	{
		if (func_21(func_19()))
		{
			iVar36 = func_92();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 2) && !is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_189(iVar32, &Var0);
					fVar35 = get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						iVar38 = true;
						if (iParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								iVar38 = false;
							}
						}
						if (iVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_189(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_190(uParam1, "Abigail1", func_192(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 1:
			func_190(uParam1, "Abigail2", func_192(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 2:
			func_190(uParam1, "Barry1", func_192(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 3:
			func_190(uParam1, "Barry2", func_192(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 4:
			func_190(uParam1, "Barry3", func_192(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 5:
			func_190(uParam1, "Barry3A", func_192(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 6:
			func_190(uParam1, "Barry3C", func_192(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 7:
			func_190(uParam1, "Barry4", func_192(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_191(iParam0), 0, 0);
			break;
		
		case 8:
			func_190(uParam1, "Dreyfuss1", func_192(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 9:
			func_190(uParam1, "Epsilon1", func_192(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 10:
			func_190(uParam1, "Epsilon2", func_192(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 11:
			func_190(uParam1, "Epsilon3", func_192(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 12:
			func_190(uParam1, "Epsilon4", func_192(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 13:
			func_190(uParam1, "Epsilon5", func_192(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 14:
			func_190(uParam1, "Epsilon6", func_192(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 15:
			func_190(uParam1, "Epsilon7", func_192(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 16:
			func_190(uParam1, "Epsilon8", func_192(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 17:
			func_190(uParam1, "Extreme1", func_192(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 18:
			func_190(uParam1, "Extreme2", func_192(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 19:
			func_190(uParam1, "Extreme3", func_192(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 20:
			func_190(uParam1, "Extreme4", func_192(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 21:
			func_190(uParam1, "Fanatic1", func_192(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_191(iParam0), 1, 0);
			break;
		
		case 22:
			func_190(uParam1, "Fanatic2", func_192(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_191(iParam0), 1, 0);
			break;
		
		case 23:
			func_190(uParam1, "Fanatic3", func_192(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_191(iParam0), 0, 1);
			break;
		
		case 24:
			func_190(uParam1, "Hao1", func_192(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_191(iParam0), 0, 1);
			break;
		
		case 25:
			func_190(uParam1, "Hunting1", func_192(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 26:
			func_190(uParam1, "Hunting2", func_192(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 27:
			func_190(uParam1, "Josh1", func_192(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 28:
			func_190(uParam1, "Josh2", func_192(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 29:
			func_190(uParam1, "Josh3", func_192(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 30:
			func_190(uParam1, "Josh4", func_192(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 31:
			func_190(uParam1, "Maude1", func_192(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 32:
			func_190(uParam1, "Minute1", func_192(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 33:
			func_190(uParam1, "Minute2", func_192(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 34:
			func_190(uParam1, "Minute3", func_192(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 35:
			func_190(uParam1, "MrsPhilips1", func_192(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 36:
			func_190(uParam1, "MrsPhilips2", func_192(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 37:
			func_190(uParam1, "Nigel1", func_192(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 38:
			func_190(uParam1, "Nigel1A", func_192(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 39:
			func_190(uParam1, "Nigel1B", func_192(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 40:
			func_190(uParam1, "Nigel1C", func_192(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 41:
			func_190(uParam1, "Nigel1D", func_192(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 42:
			func_190(uParam1, "Nigel2", func_192(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 43:
			func_190(uParam1, "Nigel3", func_192(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 44:
			func_190(uParam1, "Omega1", func_192(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 45:
			func_190(uParam1, "Omega2", func_192(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 46:
			func_190(uParam1, "Paparazzo1", func_192(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 47:
			func_190(uParam1, "Paparazzo2", func_192(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 48:
			func_190(uParam1, "Paparazzo3", func_192(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 49:
			func_190(uParam1, "Paparazzo3A", func_192(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 50:
			func_190(uParam1, "Paparazzo3B", func_192(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 51:
			func_190(uParam1, "Paparazzo4", func_192(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 52:
			func_190(uParam1, "Rampage1", func_192(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 54:
			func_190(uParam1, "Rampage3", func_192(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 55:
			func_190(uParam1, "Rampage4", func_192(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 56:
			func_190(uParam1, "Rampage5", func_192(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 53:
			func_190(uParam1, "Rampage2", func_192(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 57:
			func_190(uParam1, "TheLastOne", func_192(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 58:
			func_190(uParam1, "Tonya1", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 59:
			func_190(uParam1, "Tonya2", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 60:
			func_190(uParam1, "Tonya3", func_192(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 61:
			func_190(uParam1, "Tonya4", func_192(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 62:
			func_190(uParam1, "Tonya5", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_190(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
{
	*uParam0.f_4 = iParam5;
	*uParam0 = sParam1;
	*uParam0.f_1 = {Param2};
	*uParam0.f_3 = iParam4;
	*uParam0.f_5 = iParam6;
	*uParam0.f_6 = {vParam7};
	*uParam0.f_9 = iParam10;
	StringCopy(uParam0.f_10, sParam11, 16);
	*uParam0.f_14 = iParam12;
	*uParam0.f_15 = iParam13;
	StringCopy(uParam0.f_16, sParam14, 24);
	*uParam0.f_22 = iParam15;
	*uParam0.f_23 = iParam16;
	*uParam0.f_24 = iParam17;
	*uParam0.f_25 = iParam18;
	*uParam0.f_26 = iParam19;
	*uParam0.f_27 = iParam20;
	*uParam0.f_28 = iParam21;
	*uParam0.f_29 = uParam22;
	*uParam0.f_30 = iParam23;
	*uParam0.f_31 = iParam24;
}

bool func_191(int iParam0)
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
			return true;
			break;
		
		case 3:
			return true;
			break;
		
		case 4:
			return false;
			break;
		
		case 5:
			return true;
			break;
		
		case 6:
			return true;
			break;
		
		case 7:
			return false;
			break;
		
		case 8:
			return true;
			break;
		
		case 9:
			return false;
			break;
		
		case 10:
			return false;
			break;
		
		case 11:
			return false;
			break;
		
		case 12:
			return true;
			break;
		
		case 13:
			return false;
			break;
		
		case 14:
			return true;
			break;
		
		case 15:
			return false;
			break;
		
		case 16:
			return true;
			break;
		
		case 17:
			return true;
			break;
		
		case 18:
			return true;
			break;
		
		case 19:
			return true;
			break;
		
		case 20:
			return true;
			break;
		
		case 21:
			return true;
			break;
		
		case 22:
			return true;
			break;
		
		case 23:
			return true;
			break;
		
		case 24:
			return true;
			break;
		
		case 25:
			return true;
			break;
		
		case 26:
			return true;
			break;
		
		case 27:
			return false;
			break;
		
		case 28:
			return true;
			break;
		
		case 29:
			return true;
			break;
		
		case 30:
			return true;
			break;
		
		case 31:
			return false;
			break;
		
		case 32:
			return true;
			break;
		
		case 33:
			return true;
			break;
		
		case 34:
			return true;
			break;
		
		case 35:
			return false;
			break;
		
		case 36:
			return false;
			break;
		
		case 37:
			return false;
			break;
		
		case 38:
			return true;
			break;
		
		case 39:
			return true;
			break;
		
		case 40:
			return true;
			break;
		
		case 41:
			return true;
			break;
		
		case 42:
			return true;
			break;
		
		case 43:
			return true;
			break;
		
		case 44:
			return false;
			break;
		
		case 45:
			return false;
			break;
		
		case 46:
			return true;
			break;
		
		case 47:
			return true;
			break;
		
		case 48:
			return false;
			break;
		
		case 49:
			return true;
			break;
		
		case 50:
			return true;
			break;
		
		case 51:
			return true;
			break;
		
		case 52:
			return true;
			break;
		
		case 54:
			return true;
			break;
		
		case 55:
			return true;
			break;
		
		case 56:
			return true;
			break;
		
		case 53:
			return true;
			break;
		
		case 57:
			return true;
			break;
		
		case 58:
			return true;
			break;
		
		case 59:
			return true;
			break;
		
		case 60:
			return true;
			break;
		
		case 61:
			return true;
			break;
		
		case 62:
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

struct<2> func_192(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_193(iParam0)};
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "RC_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_193(int iParam0)
{
	char[8] cVar0;
	
	StringCopy(&cVar0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&cVar0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&cVar0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&cVar0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&cVar0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&cVar0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&cVar0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&cVar0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&cVar0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&cVar0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&cVar0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&cVar0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&cVar0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&cVar0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&cVar0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&cVar0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&cVar0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&cVar0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&cVar0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&cVar0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&cVar0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&cVar0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&cVar0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&cVar0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&cVar0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&cVar0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&cVar0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&cVar0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&cVar0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&cVar0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&cVar0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&cVar0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&cVar0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&cVar0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&cVar0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&cVar0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&cVar0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&cVar0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&cVar0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&cVar0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&cVar0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&cVar0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&cVar0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&cVar0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&cVar0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&cVar0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&cVar0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&cVar0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&cVar0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&cVar0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&cVar0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&cVar0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&cVar0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&cVar0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&cVar0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&cVar0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&cVar0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&cVar0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&cVar0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&cVar0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&cVar0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&cVar0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&cVar0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return cVar0;
}

bool func_194()
{
	if (func_197() && !func_198())
	{
		return true;
	}
	if (func_196() && func_195())
	{
		return true;
	}
	return false;
}

int func_195()
{
	return Global_100872 > 0;
}

bool func_196()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_197()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_198()
{
	if (is_pc_version())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return true;
		}
	}
	return false;
}

void func_199()
{
	func_201(39, 1);
	func_201(40, 1);
	func_201(41, 1);
	func_201(42, 1);
	func_201(43, 1);
	func_201(44, 1);
	iLocal_359 = func_200(vLocal_87);
	iLocal_86 = PED::CREATE_PED(26, joaat("a_f_y_bevhills_03"), vLocal_87, fLocal_90, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_86, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_86, 17, true);
	set_ped_flee_attributes(iLocal_86, 128, true);
	set_ped_keep_task(iLocal_86, true);
	set_ped_can_be_dragged_out(iLocal_86, 0);
	set_ped_component_variation(iLocal_86, false, false, true, 0);
	set_ped_component_variation(iLocal_86, 2, false, false, 0);
	set_ped_component_variation(iLocal_86, 3, false, false, 0);
	set_ped_component_variation(iLocal_86, 4, false, false, 0);
	set_ped_component_variation(iLocal_86, 7, true, false, 0);
	set_ped_component_variation(iLocal_86, 8, false, false, 0);
	set_ped_dies_instantly_in_water(iLocal_86, 1);
	set_blocking_of_non_temporary_events(iLocal_86, true);
	set_ped_can_be_targetted(iLocal_86, false);
	set_ambient_voice_name(iLocal_86, "LACEY");
	if (Global_3 || iLocal_70)
	{
		set_entity_invincible(iLocal_86, true);
	}
	if (add_relationship_group("CELEBRITY", &iLocal_69))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_86, iLocal_69);
	}
	iLocal_91 = create_vehicle(joaat("surano"), vLocal_92, fLocal_95, 1, true);
	set_entity_coords_no_offset(iLocal_91, vLocal_92, 0, 0, 1);
	set_entity_quaternion(iLocal_91, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	set_vehicle_automatically_attaches(iLocal_91, false, 0);
	set_vehicle_colour_combination(iLocal_91, 10);
	set_vehicle_on_ground_properly(iLocal_91);
	set_vehicle_doors_locked(iLocal_91, 3);
	_0x2B6747FAA9DB9D6B(iLocal_91, 1);
	set_vehicle_radio_loud(iLocal_91, 1);
	set_veh_radio_station(iLocal_91, get_radio_station_name(1));
	if (func_19() == 1)
	{
		func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_17(&Local_395, 3, iLocal_86, "LACEY", 0, 1);
	iLocal_375[0] = "idle_a";
	iLocal_375[1] = "idle_b";
	iLocal_375[2] = "idle_c";
	iLocal_375[3] = "idle_d";
	iLocal_375[4] = "idle_e";
	iLocal_375[5] = "idle_f";
	iLocal_375[6] = "idle_g";
	iLocal_375[7] = "idle_h";
	iLocal_375[8] = "idle_i";
	iLocal_560[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_560[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_560[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	set_vehicle_model_is_suppressed(joaat("vader"), true);
	set_vehicle_model_is_suppressed(joaat("surano"), true);
	set_vehicle_model_is_suppressed(joaat("cavalcade2"), true);
}

int func_200(Vector3 vParam0)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_alpha(iVar0, 0);
	set_blip_display(iVar0, 0);
	return iVar0;
}

void func_201(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_208(iParam0, 2, 1))
		{
			func_207(iParam0, 2, 1);
		}
	}
	else if (func_208(iParam0, 2, 1))
	{
		func_202(iParam0, 2, 1);
	}
}

void func_202(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		clear_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_82() == 0)
		{
			iVar0 = func_205(func_206(iParam0), -1, 0);
			clear_bit(&iVar0, iParam1);
			func_203(func_206(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		clear_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_203(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_204(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_204(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_85();
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

int func_205(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[uParam0 /*5*/][func_204(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

void func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_82() == 0)
		{
			iVar0 = func_205(func_206(iParam0), -1, 0);
			GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_203(func_206(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_208(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_82() == 0)
		{
			return is_bit_set(func_205(func_206(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

bool func_209()
{
	if (!iLocal_96)
	{
		func_217(&uLocal_97, joaat("surano"));
		func_217(&uLocal_97, joaat("prop_ld_test_01"));
		func_217(&uLocal_97, joaat("a_f_y_bevhills_03"));
		func_217(&uLocal_97, joaat("a_m_y_genstreet_02"));
		func_217(&uLocal_97, joaat("vader"));
		func_217(&uLocal_97, joaat("cavalcade2"));
		func_217(&uLocal_97, joaat("prop_pap_camera_01"));
		func_214(&uLocal_97);
		iLocal_96 = 1;
	}
	if (!func_210(&uLocal_97))
	{
		return false;
	}
	request_anim_dict("random@escape_paparazzi@standing@");
	request_anim_dict("random@paparazzi@pap_anims");
	request_anim_dict("random@paparazzi@peek");
	request_anim_dict("random@paparazzi@trans");
	request_anim_dict("random@paparazzi@wait");
	request_anim_dict("veh@std@ps@idle_panic");
	request_anim_dict("veh@low@front_ps@idle_panic");
	request_anim_dict(sLocal_374);
	request_additional_text("ESCPAP", false);
	if (((((((((has_anim_dict_loaded("random@escape_paparazzi@standing@") && has_anim_dict_loaded("random@paparazzi@pap_anims")) && has_anim_dict_loaded("random@paparazzi@peek")) && has_anim_dict_loaded("random@paparazzi@trans")) && has_anim_dict_loaded("random@paparazzi@wait")) && has_anim_dict_loaded("veh@std@ps@idle_panic")) && has_anim_dict_loaded("veh@low@front_ps@idle_panic")) && has_anim_dict_loaded(sLocal_374)) && has_additional_text_loaded(false)) && SCRIPT::REQUEST_SCRIPT_audio_bank("Distant_Camera_Flash", false))
	{
		return true;
	}
	return false;
}

bool func_210(auto uParam0)
{
	int iVar0;
	
	if (!*uParam0.f_31)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (is_bit_set(*uParam0[iVar0 /*2*/], 30))
		{
			if (!is_bit_set(*uParam0[iVar0 /*2*/], 29))
			{
				return false;
			}
			if (!func_211(uParam0[iVar0 /*2*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	*uParam0.f_31 = 0;
	return true;
}

int func_211(auto uParam0)
{
	return func_212(*uParam0, "NULL", *uParam0.f_1);
}

int func_212(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(iParam0, 30))
	{
		if (is_bit_set(iParam0, 29))
		{
			switch (func_213(iParam0))
			{
				case 0:
					return has_model_loaded(iParam2);
					break;
				
				case 1:
					return has_anim_dict_loaded(sParam1);
					break;
				
				case 2:
					return has_clip_set_loaded(sParam1);
					break;
				
				case 3:
					return has_streamed_texture_dict_loaded(sParam1);
					break;
				
				case 4:
					return has_vehicle_recording_been_loaded(iParam2, sParam1);
					break;
				
				case 5:
					return get_is_waypoint_recording_loaded(sParam1);
					break;
				
				case 6:
					return SCRIPT::REQUEST_SCRIPT_audio_bank(sParam1, is_bit_set(iParam0, 27));
					break;
				
				case 7:
					return _has_streamed_script_loaded(iParam2);
					break;
				
				case 8:
					return has_additional_text_loaded(iParam2);
					break;
				
				case 9:
					return has_ptfx_asset_loaded();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 10)
	{
		if (is_bit_set(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_214(auto uParam0)
{
	func_215(uParam0, 9, -1, 0);
}

void func_215(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_216(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (is_bit_set(*uParam0[iVar0 /*2*/], 30))
		{
			if (is_bit_set(*uParam0[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if (*(uParam0[iVar0 /*2*/]).f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!*uParam0.f_31)
	{
		*uParam0.f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!is_bit_set(*uParam0[iVar0 /*2*/], 30))
		{
			*(uParam0[iVar0 /*2*/]).f_1 = iParam2;
			*uParam0[iVar0 /*2*/] = iParam3;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0[iVar0 /*2*/], iParam1);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

bool func_216(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return false;
			break;
		
		case 0:
			return true;
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
		
		case 5:
			return false;
			break;
		
		case 6:
			return false;
			break;
		
		case 7:
			return true;
			break;
		
		case 8:
			return false;
			break;
		
		case 9:
			return true;
			break;
	}
	return false;
}

void func_217(auto uParam0, int iParam1)
{
	func_215(uParam0, 0, iParam1, 0);
}

bool func_218()
{
	if (!func_182(5))
	{
		return true;
	}
	if (func_194())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_198())
		{
			return false;
		}
	}
	if (func_188(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_219()
{
	if ((Global_101143 == func_96() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

void func_220(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_31)
	{
		if ((get_frame_count() >= *uParam0.f_32 + *uParam0.f_33 || is_bit_set(Global_91278.f_20, 2)) || is_bit_set(Global_91278.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (is_bit_set(*uParam0[iVar0 /*2*/], 30))
				{
					if (!is_bit_set(*uParam0[iVar0 /*2*/], 29))
					{
						func_221(uParam0[iVar0 /*2*/]);
						*uParam0.f_32 = get_frame_count();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_221(int iParam0)
{
	func_222(iParam0, "NULL", *iParam0.f_1);
}

void func_222(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(*iParam0, 30))
	{
		switch (func_213(*iParam0))
		{
			case 0:
				request_model(iParam2);
				break;
			
			case 1:
				request_anim_dict(sParam1);
				break;
			
			case 2:
				request_clip_set(sParam1);
				break;
			
			case 3:
				request_streamed_texture_dict(sParam1, is_bit_set(*iParam0, 28));
				break;
			
			case 4:
				request_vehicle_recording(iParam2, sParam1);
				break;
			
			case 5:
				request_waypoint_recording(sParam1);
				break;
			
			case 6:
				SCRIPT::REQUEST_SCRIPT_audio_bank(sParam1, is_bit_set(*iParam0, 27));
				break;
			
			case 7:
				_request_streamed_script(iParam2);
				break;
			
			case 8:
				request_additional_text(sParam1, iParam2);
				break;
			
			case 9:
				request_ptfx_asset();
				break;
			
			default:
				break;
		}
		GAMEPLAY::GAMEPLAY::SET_BIT(iParam0, 29);
	}
}

void func_223(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_225(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_224();
}

void func_224()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			set_vehicle_model_is_suppressed(ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_225(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_226(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	Vector3 vVar5;
	int iVar8;
	
	if (!Global_138022)
	{
		return false;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_96();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_267())
		{
			return false;
		}
	}
	vLocal_43 = {vParam0};
	iVar0 = false;
	if (!iVar0)
	{
		if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
			if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_198())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_77(0))
		{
			return false;
		}
		if (func_194())
		{
			return false;
		}
		if (func_266())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_21(func_19()))
		{
			if (func_188(100f, 1) != -1)
			{
				return false;
			}
		}
		if (is_player_playing(player_id()) && !iParam6)
		{
			if (vVar1.z - vLocal_43.z > 50f)
			{
				return false;
			}
		}
		if (!func_265(iParam3))
		{
			return false;
		}
		if (func_21(func_19()))
		{
			if (func_264(func_19()) == 4 || func_264(func_19()) == 5)
			{
				return false;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_263(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_262(Global_101154.f_29520.f_43[iParam3]))
		{
			return false;
		}
		if (GAMEPLAY::GET_GAME_TIMER() - Global_101145 < 150000)
		{
			if (iParam3 != 30)
			{
				return false;
			}
		}
		if (func_261())
		{
			return false;
		}
		if (get_mission_flag())
		{
			return false;
		}
		if (get_random_event_flag())
		{
			return false;
		}
		if (!func_252(4))
		{
			return false;
		}
		if (!func_182(5))
		{
			return false;
		}
		if (func_251(iParam3, iParam4) && !iParam5)
		{
			return false;
		}
		if (Global_3 && iParam3 != 10)
		{
			return false;
		}
		if (is_valid_interior(get_interior_from_entity(PLAYER::PLAYER_PED_ID())))
		{
			if ((get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(377.153f, -717.567f, 10.0536f) || get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(320.9934f, 265.2515f, 82.1221f)) || get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(-1425.564f, -244.3f, 15.8053f))
			{
				return false;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_251(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_265(30) && !func_251(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_21(func_19()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_250(iVar8))
				{
					if (func_228(iVar4))
					{
						if (!func_227(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_19() != iVar4)
								{
									return false;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return true;
}

int func_227(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_228(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_229(iVar0);
}

int func_229(int iParam0)
{
	return func_230(iParam0, 1);
}

bool func_230(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_250(iParam0))
	{
		return false;
	}
	func_231(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_231(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_232(func_243(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_232(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_242(iParam0, iParam1))
	{
		iVar0 = func_241(iParam1);
		iVar1 = func_239(iParam0);
		iVar2 = func_239(iParam0) - func_239(iParam1);
		iVar3 = func_241(iParam0) - func_241(iParam1);
		iVar4 = func_238(iParam0) - func_238(iParam1);
		iVar5 = func_237(iParam0) - func_237(iParam1);
		iVar6 = func_236(iParam0) - func_236(iParam1);
		iVar7 = func_235(iParam0) - func_235(iParam1);
	}
	else
	{
		iVar0 = func_241(iParam0);
		iVar1 = func_239(iParam1);
		iVar2 = func_239(iParam1) - func_239(iParam0);
		iVar3 = func_241(iParam1) - func_241(iParam0);
		iVar4 = func_238(iParam1) - func_238(iParam0);
		iVar5 = func_237(iParam1) - func_237(iParam0);
		iVar6 = func_236(iParam1) - func_236(iParam0);
		iVar7 = func_235(iParam1) - func_235(iParam0);
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59)
	{
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59)
	{
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23)
	{
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_234(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_233(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12)
	{
		iVar3 -= 12;
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_233(Vector3 fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = fParam2 - fParam1;
	fParam0 -= IntToFloat(round(fParam0 - fParam1 / fVar0)) * fVar0;
	if (fParam0 < fParam1)
	{
		fParam0 += fVar0;
	}
	return fParam0;
}

int func_234(int iParam0, int iParam1)
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

int func_235(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_236(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_237(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_238(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_239(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_240(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_240(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_241(int iParam0)
{
	return (iParam0 && 15);
}

bool func_242(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_250(iParam1) || !func_250(iParam0))
	{
		return true;
	}
	iVar0 = func_239(iParam0);
	iVar1 = func_239(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_241(iParam0);
	iVar1 = func_241(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_238(iParam0);
	iVar1 = func_238(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_243()
{
	auto uVar0;
	
	func_249(&uVar0, get_clock_seconds());
	func_248(&uVar0, get_clock_minutes());
	func_247(&uVar0, get_clock_hours());
	func_246(&uVar0, get_clock_day_of_month());
	func_245(&uVar0, get_clock_month());
	func_244(&uVar0, get_clock_year());
	return uVar0;
}

void func_244(auto uParam0, int iParam1)
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

void func_245(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_246(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_241(*uParam0);
	iVar1 = func_239(*uParam0);
	if (iParam1 < 1 || iParam1 > func_234(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_247(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_248(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_249(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_250(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_235(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_236(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_237(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_239(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_241(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_238(iParam0);
	if (iVar5 < 1 || iVar5 > func_234(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_251(int iParam0, int iParam1)
{
	if (is_bit_set(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_252(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_19();
				if (!func_21(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_260()) || Global_100201) || Global_25122) || func_259()) || func_14(8, -1)) || func_258()) || func_257()) || func_256()) || func_255()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_260()) || Global_25122) || func_259()) || func_14(8, -1)) || func_256()) || func_258()) || func_257()) || func_255()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_260()) || Global_100201) || Global_25122) || func_259()) || func_14(8, -1)) || func_256()) || func_258()) || func_257()) || func_255()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_260()) || Global_100201) || Global_25122) || func_259()) || func_14(8, -1)) || func_258()) || func_257()) || func_255()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_260() || get_player_wanted_level(player_id()) > 0) || func_14(8, -1)) || func_255()) || func_254()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_258()) || func_257()) || func_254()) || func_253())
						{
							return false;
						}
						if ((is_player_switch_in_progress() && get_player_switch_type() != 3) && get_player_switch_state() < 8)
						{
							return false;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_260()) || Global_25122) || func_259()) || func_14(8, -1)) || func_257()) || func_256()) || func_255()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_260()) || func_257()) || Global_100201) || Global_25122) || func_259()) || Global_36839) || func_14(8, -1)) || func_256()) || func_254()) || func_255()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_260()) || Global_100201) || Global_25122) || func_259()) || func_14(8, -1)) || func_256()) || func_254()) || func_258()) || func_257()) || func_255())
						{
							return false;
						}
						break;
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
	else
	{
		return false;
	}
	return true;
}

auto func_253()
{
	return Global_91317.f_1;
}

int func_254()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_255()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_256()
{
	if (Global_69749)
	{
		return true;
	}
	else if (Global_55743 && !Global_55749)
	{
		return true;
	}
	return false;
}

int func_257()
{
	return Global_91330.f_297 > 0;
}

int func_258()
{
	return Global_91330.f_296 > 0;
}

auto func_259()
{
	return Global_1315913;
}

int func_260()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_261()
{
	func_11();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_262(int iParam0)
{
	return func_242(func_243(), iParam0);
}

int func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_19();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_264(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_265(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_267())
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = is_bit_set(Global_101154.f_29520, iVar0);
	}
	else
	{
		iVar0 -= 31;
		iVar1 = is_bit_set(Global_101154.f_29520.f_1, iVar0);
	}
	return iVar1;
}

bool func_266()
{
	int iVar0;
	
	if (Global_25270)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(get_ped_in_vehicle_seat(iVar0, false)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_267()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, false);
					_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return true;
	}
	else if (Global_138274 == 3)
	{
		return false;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (is_bit_set(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

void func_268(auto uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		*uParam0.f_33 = iParam1;
	}
}

void func_269()
{
	func_287(0);
	set_roads_back_to_original(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_282(&uLocal_97, 0);
	remove_anim_dict("random@escape_paparazzi@standing@");
	remove_anim_dict("random@paparazzi@pap_anims");
	remove_anim_dict("random@paparazzi@peek");
	remove_anim_dict("random@paparazzi@trans");
	remove_anim_dict("random@paparazzi@wait");
	remove_anim_dict("veh@std@ps@idle_panic");
	remove_anim_dict("veh@low@front_ps@idle_panic");
	remove_anim_dict(sLocal_374);
	release_script_audio_bank();
	if (func_219())
	{
		set_wanted_level_multiplier(1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_86) && !PED::IS_PED_INJURED(iLocal_86))
	{
		if (is_ped_in_group(iLocal_86))
		{
			remove_ped_from_group(iLocal_86);
		}
		if (is_ped_in_any_vehicle(iLocal_86, 1))
		{
			if (!is_ped_fleeing(iLocal_86))
			{
				task_leave_any_vehicle(iLocal_86, false, 0);
			}
		}
	}
	func_271(-1);
	_0x67EEDEA1B9BAFD94();
	_0x3DDA37128DD1ACA8(0);
	set_vehicle_model_is_suppressed(joaat("vader"), false);
	set_vehicle_model_is_suppressed(joaat("surano"), false);
	set_vehicle_model_is_suppressed(joaat("cavalcade2"), false);
	remove_scenario_blocking_area(iLocal_365, 0);
	remove_scenario_blocking_area(iLocal_366, 0);
	remove_scenario_blocking_area(iLocal_367, 0);
	set_all_vehicle_generators_active_in_area(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), true, 1);
	if (Global_25358)
	{
		trigger_music_event("AC_STOP");
	}
	func_270();
	terminate_this_thread();
}

void func_270()
{
	Global_25354 = 0;
	Global_25355 = 0;
	Global_25357 = 0;
	Global_25358 = 0;
	Global_25359 = 0;
}

void func_271(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_219())
	{
		func_275(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_274(30000);
		StringCopy(&cVar0, func_273(Global_101143, 1), 64);
		if (func_95(Global_101143) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101142, 64);
		}
		_0x71862B1D855F32E1(&cVar0, Global_101140, GAMEPLAY::GET_GAME_TIMER() - Global_101141, 0);
	}
	else if (is_bit_set(Global_101150, false) && Global_101154.f_29520.f_2 < 3)
	{
		clear_bit(&Global_101150, false);
	}
	func_272(&Global_25179);
	Global_101144 = 0;
	func_225(-1);
}

void func_272(auto uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35673)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

char* func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!iParam1)
	{
	}
	return "UNKNOWN";
}

void func_274(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_275(int iParam0)
{
	func_276(iParam0, 0, func_281(iParam0));
}

void func_276(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_243();
	func_279(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_278(uParam0, &uVar0);
	Var1 = {func_277(&uVar0)};
}

struct<16> func_277(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_237(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_236(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_235(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_238(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_241(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_239(*uParam0), 64);
	return cVar0;
}

void func_278(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_279(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_239(*uParam0);
	iVar1 = func_241(*uParam0);
	iVar2 = func_238(*uParam0);
	iVar3 = func_237(*uParam0);
	iVar4 = func_236(*uParam0);
	iVar5 = func_235(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_234(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_234(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_280(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_280(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_249(uParam0, iParam1);
	func_248(uParam0, iParam2);
	func_247(uParam0, iParam3);
	func_245(uParam0, iParam5);
	func_246(uParam0, iParam4);
	func_244(uParam0, iParam6);
}

int func_281(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_282(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!iParam1)
	{
		func_284(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_283(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	*uParam0.f_31 = 0;
	*uParam0.f_32 = -1;
	*uParam0.f_33 = 1;
}

void func_283(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = -1;
}

void func_284(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (is_bit_set(*uParam0[iVar0 /*2*/], 30))
		{
			func_285(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	*uParam0.f_31 = 1;
}

void func_285(auto uParam0)
{
	func_286(*uParam0, "NULL", *uParam0.f_1);
}

void func_286(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(iParam0, 30))
	{
		switch (func_213(iParam0))
		{
			case 0:
				set_model_as_no_longer_needed(iParam2);
				break;
			
			case 1:
				remove_anim_dict(sParam1);
				break;
			
			case 2:
				remove_clip_set(sParam1);
				break;
			
			case 3:
				set_streamed_texture_dict_as_no_longer_needed(sParam1);
				break;
			
			case 4:
				remove_vehicle_recording(iParam2, sParam1);
				break;
			
			case 5:
				remove_waypoint_recording(sParam1);
				break;
			
			case 6:
				release_script_audio_bank();
				break;
			
			case 7:
				_set_streamed_script_as_no_longer_needed(iParam2);
				break;
			
			case 8:
				clear_additional_text(iParam2, is_bit_set(iParam0, 26));
				break;
			
			case 9:
				remove_ptfx_asset();
				break;
			
			default:
				break;
		}
	}
}

void func_287(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_201(iVar0, iParam0);
		iVar0++;
	}
}

